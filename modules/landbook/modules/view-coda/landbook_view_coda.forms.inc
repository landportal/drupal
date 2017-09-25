<?php

/**
 * Build a custom form settings for LB Visualizations
 * add vis. specific options availables (via plugins)
 */
function lbvc__forms_vis($item = array()) {
  $forms = array();
  $type = isset($item['type']) ? $item['type'] : '';
  $vcc = isset($item['vcc']) ? $item['vcc'] : '';

  // TYPE
  $forms['type'] = array(
    '#type' => 'select',
    '#weight' => -1,
    '#title' => t('Visualization'),
    '#options' => lbvc__plugins_types(),
    '#default_value' => $type,
    '#description' => t('Select the type of visualization to use.'),
    /* '#attached' => array('js' => array(array( */
    /*   'type' => 'inline', */
    /*   'data' => 'console.log("' . basename( __FILE__ ) . ' l.' . __LINE__ . ': '.$type . '", this);')) */
    /* ), */
    '#ajax' => array(
      'callback' => 'lbvc__forms_vis_type_callback',
      'wrapper' => 'edit-field-view-coda-und-0-vis',
      'method' => 'replace',
      'effect' => 'fade',
    ),
    // @TODO: hook on vis. type form element change
  );

  // VCC
  $forms['vcc'] = array(
    '#type' => 'textarea',
    '#row' => 10,
    '#default_value' => $vcc,
    '#element_validate' => array('landbook_view_coda_config_validate'),
    '#weight' => 42,
  );
  // Add specific stuff depending on the LBVC type (map, chart, pie...)
  if ($type) {
    lbvc__forms_vis_type($forms, $item);
    // Hide VCC field (JSON coded)
    //$forms['vcc']['#type'] = 'hidden';
    // $forms['vcc'] += array('#disabled' => true); // disable the main VCC field (json, params)
  }
  return $forms;
}

function lbvc__forms_vis_type(&$forms, $item) {
  @include_once 'plugins/' . $item['type'] . '/widget.inc';
  $opts_fx = 'lbvc_plugin_' . $item['type'] . '_widget_form';
  if (function_exists($opts_fx)) {
    $forms['vis'] = array( // ID: edit-field-view-coda-und-0-vis
      '#type' => 'container',
      'items' => $opts_fx($item),
    );
  } else {
    $forms['vis'] = array(
      '#type' => 'container',
      'items' => array(
        '#type' => 'markup',
        '#markup' => '<p>No specific option for ' . $item['type'] . '</p>',
      )
    );
  }
  //dpm($forms, 'F '. $item['type']);
}

function lbvc__forms_vis_type_callback($form, &$form_state) {
  /* dpm($form, "CB"); */
  /* dpm($form_state, "state"); */
  $item = $form_state['values']['field_view_coda'][LANGUAGE_NONE][0];
  $f = &$form['field_view_coda'][LANGUAGE_NONE][0];
  dpm($f);
  // Re-generate a 'vis' -specific fields
  lbvc__forms_vis_type($f, $item);

  $commands = array();
  $commands[] = ajax_command_replace(NULL, $output);
  $commands[] = ajax_command_prepend(NULL, theme('status_messages'));
  return array('#type' => 'ajax', '#commands' => $commands);

  
//  $f['vis']['items']['options'] = form_process_checkboxes($f['vis']['items']['options']);
  //form_process_container($f, $form_state)
  $form_state['rebuild'] = TRUE;
  dpm($f);
  dsm($f);
  return $form['field_view_coda'][LANGUAGE_NONE][0]['vis'];
}
