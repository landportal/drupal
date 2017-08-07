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

/**
 * Implements hook_field_validate().
 *
 * Validate the View Coda configuration & fields
 */
function landbook_view_coda_field_validate($entity_type, $entity, $field, $instance, $langcode, $items, &$errors) {
  //dpm($item, 'validate');
  foreach ($items as $delta => $item) {
    if (!empty($item['vcc'])) {
      //dpm($item['vcc'], 'OK');
      /* $errors[$field['field_name']][$langcode][$delta][] = array( */
      /*   'error' => 'field_example_invalid', */
      /*   'message' => t('Color must be in the HTML format #abcdef.'), */
      /* ); */
    }
  }
}


/**
 * Implements hook_field_is_empty().
 */
function landbook_view_coda_field_is_empty($item, $field) {
  return empty($item['vcc']);
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
    'lbvc_debug' => array(
      'label' => t('LB Config debug'),
      'field types' => array('field_view_coda_vis'),
    ),
    'lbvc_block' => array(
      'label' => t('LB Visualization block'),
      'field types' => array('field_visualization', 'field_collection'),
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
 */
function landbook_view_coda_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $element = array();
  switch ($display['type']) {
    // This formatter simply outputs the field as text
  case 'lbvc_debug':
    foreach ($items as $delta => $item) {
      // Should ALWAYS have a field_indicators
      $tid = function ($i) { return $i['tid']; };
      $element[$delta] = array(
        '#type' => 'html_tag',
        '#tag' => 'pre',
        '#attributes' => array(),
        '#value' => 'TYPE: ' . $item['type'] . "\n"
        . 'IND: ' . join(array_map($tid, $item['ind']), ', ') . "\n"
        . $item['vcc'],
      );
      //dpm($item, 'LBVC vis field');
    }
    break;
  case 'lbvc_basic':
    $VCC = array(
      'type'  => $items[0]['type'],
      'vcc'   => $items[0]['vcc'],
      //'json'  => json_decode($items[0]['vcc']),
      'jsid'  => 'VC' . $entity->item_id,
      'vid'   => $entity->item_id . '-' . $items[0]['type'] . '-wrapper',
      'indicators' => array(),
    );
    //dpm($entity, 'VCC');
    foreach ($entity->field_indicators[$langcode] as $indicator) {
      $VCC['indicators'][] = $indicator['entity']->field_id[$langcode][0]['value'];
      //dpm($indicator, 'ind '. $iid);
    }
    $element[] = landbook_view_coda_field_formatter_visualization($VCC);

    break;
  case 'lbvc_block':
    // Format field_visualization (a field collection) items output
    /* dpm($entity,  'formatter entity ' . $entity_type); */
    /* dpm($field,   'formatter field ' . $langcode); */
    /* dpm($instance, 'formatter instance'); */
    /* dpm($items,   'formatter items'); */
    /* dpm($display, 'formatter display'); */

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

function landbook_view_coda_field_formatter_visualization($VCC) {
  
  $params = substr($VCC['vcc'], 0, -1);
    
  $js = '';
  switch ($VCC['type']) {
  case 'map':
    
    $params .= ', "indicator": "' . $VCC['indicators'][0] . '"'
      . ', "mapTarget": "#' . $VCC['vid'] . '", "vis": LBV}';
    $value = t('Loading map visualization');
    $js = $VCC['jsid'] . ' = new lbvisMap(' . $params . '); ' . $VCC['jsid'] . '.init();';
    break;
  case 'table':
    $params .= ', "indicators": ["' . join('", "', $VCC['indicators']) . '"]'
      . ', "target": "#' . $VCC['vid'] . '", "vis": LBV}';
    $value = '<table><tbody></tbody></table>';
    $js = $VCC['jsid'] . ' = new lbvisTable(' . $params . '); ' . $VCC['jsid'] . '.init();';
    break;
  }
  $js .= 'console.log(' . $VCC['jsid'] . '.debug());';
  

  //dpm($js,   'Basic Params for:' . $VCC['jsid']);
  return array(
    '#type' => 'html_tag',
    '#tag' => 'div',//($VCC['type'] == 'table' ? 'table' : 'div'),
    '#attributes' => array(
      'id' => $VCC['vid']
    ),
    '#attached' => array(
      'library' => array(array('landbook_view_coda', 'lbvis.' . $VCC['type'])),
      'js' =>  array(array(
        'type' => 'inline',
        'data' => landbook_view_coda_lbvis_ready_callback($js)
      ))
    ),
    '#value' => $value,
  );
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
function landbook_view_coda_field_widget_info_alter(&$info) {
  $info['text_textarea']['field types'][] = 'field_view_coda_vis';
}

/**
 * Implements hook_field_widget_form().
 * landbook_view_coda_config do @@@
 */
function landbook_view_coda_field_widget_form(&$form, &$form_state, $field, $instance, $langcode, $items, $delta, $element) {
  $value = isset($items[$delta]['vcc']) ? $items[$delta]['vcc'] : '';
  $widget = $element;

  switch ($instance['widget']['type']) {
    case 'landbook_view_coda_config':
  $value_type = isset($items[$delta]['type']) ? $items[$delta]['type'] : '';
  $widget_type = array(
       '#type' => 'select',
       '#weight' => -1,
       '#title' => t('Visualization'),
       '#options' => _lbvc_types(),
       '#default_value' => $value_type,
       '#description' => t('Select the type of visualization to use.'),
  );
  $element['type'] = $widget_type;

  // This should depend on the LBVC type (map, chart, pie...)
      $widget += array(
        '#type' => 'textarea',
        '#row' => 10,
        '#default_value' => $value,
        '#element_validate' => array('landbook_view_coda_config_validate'),
        '#delta' => $delta,
        '#attached' => array(
          //'css' => array(drupal_get_path('module', 'landbook_view_coda') . '/landbook_view_coda.css'),
        ),
      );
      break;
  }
  $element['vcc'] = $widget;
  //dpm($element, 'widget elements');
  return $element;
}


/**
 * Validate the individual fields and then convert to RGB string.
 */
function landbook_view_coda_config_validate($element, &$form_state) {
  /* dpm($element, 'validate element'); */
  /* dpm($form_state, 'validate form'); */

  $field = $form_state['field'][$element['#name']];//[$element['#language']]['field'];
  $field_name = $field['field_name'];
  if (isset($form_state['values'][$field_name][$element['#language']][$delta]['vcc'])) {
    $values = $form_state['values'][$field_name][$element['#language']][$delta]['vcc'];
    /* dpm($values, 'value for '. $field_name . '/' . $delta); */
    //dpm($field, 'value for '. $field_name . '/' . $delta);
    /* foreach (array('r', 'g', 'b') as $colorfield) { */
    /*   $colorfield_value = hexdec($values[$colorfield]); */
    /*   // If they left any empty, we'll set the value empty and quit. */
    /*   if (strlen($values[$colorfield]) == 0) { */
    /*     form_set_value($element, '', $form_state); */
    /*     return; */
    /*   } */
    /*   // If they gave us anything that's not hex, reject it. */
    /*   if ((strlen($values[$colorfield]) != 2) || $colorfield_value < 0 || $colorfield_value > 255) { */
    /*     form_error($element[$colorfield], t("Saturation value must be a 2-digit hexadecimal value between 00 and ff.")); */
    /*   } */
    /* } */
    /* $value = sprintf('#%02s%02s%02s', $values['r'], $values['g'], $values['b']); */
    //dpm($values, 'VCC values');
    form_set_value($element, '4242', $form_state);
  }
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


// When loading / before viewing a field_view_coda_vis
function landbook_view_coda_field_prepare_view($entity_type, $entities, $field, $instances, $langcode, &$items, $displays) {
   foreach ($entities as $id => $entity) {
     foreach ($items[$id] as $delta => $item) {
      $items[$id][$delta]['ind'] = $entity->field_indicators[$langcode];
    }
    //dpm($items, 'prepview i' . $id);
    /* foreach ($items[$id] as $delta => $item) { */
    /*   // Force the array key to prevent duplicates. */
    /*   $tids[$item['tid']] = $item['tid']; */
    /* } */
  }
}
