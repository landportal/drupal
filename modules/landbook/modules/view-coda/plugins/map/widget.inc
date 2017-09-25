<?php
/**
 * Land Portal View Coda
 *
 * Visualization plugin: map
 * 
 * Author: Jules <jules@landportal.info>
 */


// Returns a list of boolean options understood by js-view-coda projection (vis. type)
function lbvc_plugin_charts_options() {
  return array(
        'legend' => 'Show legend',
        'tooltip' => 'Show tooltip',
        'nav' => 'Allow zoom (in/out)',
        //'loadMain' => 'Load main indicator data',
        'loadCountries' => 'Load available countries',
        'loadYears' => 'Load available years',
  );
}


function lbvc_plugin_charts_widget_form($item) {
//  if (module_exists('devel')) dpm($item, 'charts chart');
  $v = json_decode($item['vcc']);
  //dpm($v, 'args');

  $options = lbvc_plugin_charts_options();
  $values = array();
  // opts should be provided / streamlined with js-view-coda lib
  foreach($options as $opt => $desc) {
    if (isset($v->$opt)) $values[] = $opt;
  }
  $forms = array(
    'options' => array(
      '#title' => t('CHARTS stuff'),
      '#type' => 'checkboxes',
      '#options' => $options,
      '#default_value' => $values,
    ),
  );
  return $forms;
}

// Returns a string
function lbvc_plugin_charts_field_presave($item) {
  $options = $item;
  unset($options['vcc']);
  unset($options['type']);
  unset($options['options']);
  foreach(lbvc_plugin_charts_options() as $opt => $desc) {
    if ($item['options'][$opt]) $options[$opt] = true;
  }
  //dpm($options, 'charts opts');
  return json_encode($options);
}
