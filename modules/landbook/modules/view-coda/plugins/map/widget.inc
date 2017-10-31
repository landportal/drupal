<?php
/**
 * Land Portal View Coda
 *
 * Visualization plugin: map
 * 
 * Author: Jules <jules@landportal.info>
 */


// Returns a list of boolean options understood by js-view-coda projection (vis. type)
function lbvc_plugin_map_options() {
  return array(
    'loadIndicators' => 'Load available indicators',
    'loadYears' => 'Load available years',
    'hideTitle' => 'Hide chart title',
  );
}

// Returns a list map-specific options
function lbvc_plugin_map_options_map() {
  return array(
    'legend' => 'Show legend',
    //'tooltip' => 'Show tooltip',
    'nav' => 'Allow zoom (in/out)',
    'click' => 'Allow click (go to the Country page)',
  );
}

function lbvc_plugin_checkboxes_values($item) {
  return $item ? TRUE : NULL;
}

function lbvc_plugin_map_widget_form($item) {
  $v = json_decode($item['vcc']);
  if (!isset($v->map)) {
//    dpm($v, 'args');
    $v->map = [];
  }
//  dpm(array_map("lbvc_plugin_checkboxes_values", (array) $v->map), 'map opts');

  $options = lbvc_plugin_map_options();
  $forms = array(
    'options' => form_process_checkboxes(array(
      '#type' => 'checkboxes',
      '#attributes' => [],
      //'#value' => array(),
      '#title' => t('MAP Options'),
      //'#parent' => 'options',
      '#options' => $options,
      '#value' => (array) $v,
    )),
    'map' => form_process_checkboxes(array(
      '#type' => 'checkboxes',
      '#attributes' => [],
      //'#value' => array(),
      '#title' => t('MAP Params'),
      '#tree' => TRUE,
      '#parent' => 'options',
      // ???
      '#value' => array_map("lbvc_plugin_checkboxes_values", (array) $v->map),
      '#options' => lbvc_plugin_map_options_map(),
    )),
    'year' => array(
      '#title' => t('Year'),
      '#type' => 'textfield',
      '#default_value' => isset($v->year) ? $v->year : '',
    ),
    'iso3' => array(
      '#title' => t('Default country'),
      '#type' => 'textfield',
      '#default_value' => isset($v->iso3) ? $v->iso3 : '',
    ),
  );
  return $forms;
}

// Process map-specific options
function lbvc_plugin_map_field_presave(&$options, $item) {
  foreach(lbvc_plugin_map_options_map() as $opt => $desc) {
    if (!$options['map'][$opt]) unset($options['map'][$opt]);
  }
}
