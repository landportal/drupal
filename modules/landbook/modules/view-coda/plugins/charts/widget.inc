<?php
/**
 * Land Portal View Coda
 *
 * Visualization plugin: charts
 * 
 * Author: Jules <jules@landportal.info>
 */

// Returns a list of boolean options understood by js-view-coda projection (vis. type)
function lbvc_plugin_charts_options() {
  return array(
        'legend' => 'Show legend',
        'loadTree' => 'Load sub-indicators',
        //'loadMain' => 'Load main indicator data',
        'loadCountries' => 'Load available countries',
        'loadYears' => 'Load available years',
  );
}


function lbvc_plugin_charts_widget_form($item) {
  //if (module_exists('devel')) dpm($item, 'charts chart');
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
    'year' => array(
      '#title' => t('Year'),
      '#type' => 'textfield',
      '#default_value' => isset($v->year) ? $v->year : '',
    ),
    'country' => array(
      '#title' => t('Default country'),
      '#type' => 'textfield',
      '#default_value' => isset($v->country) ? $v->country : '',
    ),
  );
  return $forms;
}
