<?php
/**
 * @file
 * Provide LB View Coda fields and widgets
 */

/***************************************************************
 * Field Type API hooks
 ***************************************************************/

/**
 * Implements hook_field_info().
 */
function landbook_view_coda_field_info() {
  return array(
    // We name our field as the associative name of the array.
    'field_view_coda_vis' => array(
      'label' => t('View Coda Visualization'),
      'description' => t('Visualizations using LB data.'),
      'settings' => array('max_length' => ''),
      'instance_settings' => array('text_processing' => 0), //, 'type' => ''),
      'default_widget' => 'landbook_view_coda_config',
      'default_formatter' => 'lbvc_basic',
    ),
  );
}

/* /\** */
/*  * Implements hook_field_validate(). */
/*  * */
/*  * Validate the View Coda configuration & fields */
/*  *\/ */
/* function landbook_view_coda_field_validate($entity_type, $entity, $field, $instance, $langcode, $items, &$errors) { */
/*   // Error handling */
/*   // check 'vcc' field is JSON valid */
/*   $chk = json_decode($items[0]['vcc']); */
/*   if ($err = json_last_error()) { */
/*     $errors[$field['field_name']][$langcode][0][] = array( */
/*       'error' => 'field_vcc_invalid', */
/*       'message' => t('VCC is not proper JSON.'), */
/*       'variables' => array($err, $chk, $items[0]), */
/*     ); */
/*   } */
/* } */

// Bake options (per view-coda plugin) in vcc field
function landbook_view_coda_field_presave($entity_type, $entity, $field, $instance, $langcode, &$items) {
// dpm($items, 'presave field');
  foreach ($items as $delta => $item) {
    //dpm($item)
    if (!array_key_exists('vis', $item)) break; // TODO this should never happen

    // Generic options processing
    include_once 'plugins/' . $item['type'] . '/widget.inc';
    $options = $item['vis'];
    $fxptr = 'lbvc_plugin_' . $item['type'] . '_options';
    if (function_exists($fxptr)) {
      unset($options['options']);
      foreach($fxptr() as $opt => $desc) {
        if ($item['vis']['options'][$opt]) $options[$opt] = true;
      }
    }
    // Visualization-specific options
    $fxptr = 'lbvc_plugin_' . $item['type'] . '_field_presave';
    if (function_exists($fxptr)) {
      $options += $fxptr($item);
    }
    // Encode everything as string
    $items[$delta]['vcc'] = json_encode($options);
  }
  //if (module_exists('devel')) dpm($items, 'presave');
  //print_r($items);
}
  

/**
 * Implements hook_field_is_empty().
 */
function landbook_view_coda_field_is_empty($item, $field) {
  return empty($item['vcc']) && empty($item['type']);
}

/**
 * Implements hook_field_formatter_info().
 */
function landbook_view_coda_field_formatter_info() {
  return array(
    // This formatter just displays the hex value in the color indicated.
    'lbvc_basic' => array(
      'label' => t('LB Visualization'),
      'field types' => array('field_view_coda_vis'),
    ),
    'lbvc_block' => array(
      'label' => t('LB Visualization block'),
      'field types' => array('field_visualization'),//, 'field_collection'),
      'settings' =>  array(
        'view_mode' => 'full',
        'class' => '',
      )
    ),
  );
}

/**
 * Implements hook_field_formatter_settings_form().
 */
function landbook_view_coda_field_formatter_settings_form($field, $instance, $view_mode, $form, &$form_state) {
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];
  $elements = array();

  if ($display['type'] == 'lbvc_block') {
    $elements['class'] = array(
      '#type' => 'textfield',
      '#title' => t('Class'),
      '#default_value' => '',
      '#description' => t('Give this vis. a specific CSS class (SOON).'),
    );
  }

  return $elements;
}

/**
 * Implements hook_field_formatter_view().
 *
 * This is what build the visualizaiton 'fieldgroup' data
 */
function landbook_view_coda_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $element = array();
  if ($display['type'] == '2lbvc_block') {
    dpm($entity, $entity_type);               // Iz ma' field_collection_item
    dpm($instance, 'instance ' . $langcode);  // Da instance of that (rendered) 'widget'
    dpm($display, 'display');
    dpm($items, 'items');                     // Ma' VCC / View Coda Config values (from SQL)
    dpm($field, 'field');
  }
  switch ($display['type']) {
  case 'lbvc_basic':
    if (!isset($items[0])) {
      break;
    }
    $item = $items[0];

    // This is the 'field_view_coda' drupal field, part of the vis. field collection
    $VCC = $item + array(
      'vid'   => $entity->item_id . '-' . $item['type'] . '-wrapper',
      'jsid'  => 'VC' . $entity->item_id,
      'indicators' => array(),
    );
    foreach ($entity->field_indicators[$langcode] as $indicator) {
      $lbid = $indicator['entity']->field_id[$langcode][0]['value'];
      $VCC['indicators'][] = $indicator['entity'];
    }
    include_once 'plugins/' . $VCC['type'] . '/fields.inc';
    $fxptr = 'lbvc_plugin_' . $VCC['type'] . '_formatter';
    if (function_exists($fxptr)) {
      // Should have the whole items[0]/entity?
      $element[] = $fxptr($VCC);
    }
    break;
  case 'lbvc_block':
    // Format field_visualization (a field collection) items output
    $view_mode = !empty($display['settings']['view_mode']) ? $display['settings']['view_mode'] : 'full';
    foreach ($items as $delta => $item) {
      if ($field_collection = field_collection_field_get_entity($item)) {
        $element[$delta]['entity'] = $field_collection->view($view_mode);
      }
    }
    break;
  }
  return $element;
}

/**
 * Implements hook_field_widget_info().
 */
function landbook_view_coda_field_widget_info() {
  return array(
    'landbook_view_coda_config' => array(
      'label' => t('View Coda config'),
      'field types' => array('field_view_coda_vis'),
    ),
  );
}

// Alter existing stuff
// Allow 'text_textarea' fields to display field_view_coda_vis
function landbook_view_coda_field_widget_info_alter(&$info) {
  $info['text_textarea']['field types'][] = 'field_view_coda_vis';
}

/**
 * Implements hook_field_widget_form().
 *
 * This widget stores data in 2 SQL fields: 'vcc' and 'type'
 */
function landbook_view_coda_field_widget_form(&$form, &$form_state, $field, $instance, $langcode, $items, $delta, $element) {
  if ($instance['widget']['type'] != 'landbook_view_coda_config')
    return;
//  dpm($items);
  // Build up vis. form for this item
  $item = isset($items[$delta]) ? $items[$delta] : '';
  $element = lbvc__forms_vis($item);
  //dpm($element, 'widget elements');
  return $element;
}

/* function landbook_view_coda_field_widget_form_alter(&$form, &$form_state, $form_id) { */
/*   dpm($form_state, 'alter changed'); */
/*   if(isset($form_state['values']['field_view_coda']['und'][0]['type'])) { */
/*     // Generate your sub-select here */
/*     dpm("VC type"); */
/*   } */
/* } */

/**
 * Validate the individual fields and then convert to RGB string.
 */
function landbook_view_coda_config_validate($element, &$form_state) {
  //dpm($element, 'validate element ' . $element['#name']);
  /* dpm($form_state, 'validate form'); */
  // TODO: redo ;)
}

/**
 * Implements hook_field_widget_error().
 *
 * hook_field_widget_error() lets us figure out what to do with errors
 * we might have generated in hook_field_validate(). Generally, we'll just
 * call form_error().
 *
 * @see landbook_view_coda_field_validate()
 * @see form_error()
 */
function landbook_view_coda_field_widget_error($element, $error, $form, &$form_state) {
  switch ($error['error']) {
    case 'landbook_view_coda_invalid':
      form_error($element, $error['message']);
      break;
  }
}


/* // When loading / before viewing a field_view_coda_vis */
/* function landbook_view_coda_field_prepare_view($entity_type, $entities, $field, $instances, $langcode, &$items, $displays) { */
/*   /\* dpm($entities, $entity_type);               // Iz ma' field_collection_item *\/ */
/*   /\* dpm($instances, 'instances ' . $langcode);  // Da instance of that (rendered) 'widget' *\/ */
/*   /\* dpm($display, 'display'); *\/ */
/*   /\* dpm($items, 'items');                     // Ma' VCC / View Coda Config values (from SQL) *\/ */
/*   /\* dpm($field, 'field'); *\/ */
  
/*   foreach ($entities as $id => $entity) { */
/*     foreach ($items[$id] as $delta => $item) { */
/*       $items[$id][$delta]['ind'] = $entity->field_indicators[$langcode]; */
/*     } */
/*     //dpm($items, 'prepview i' . $id); */
/*     /\* foreach ($items[$id] as $delta => $item) { *\/ */
/*     /\*   // Force the array key to prevent duplicates. *\/ */
/*     /\*   $tids[$item['tid']] = $item['tid']; *\/ */
/*     /\* } *\/ */
/*   } */
/* } */
