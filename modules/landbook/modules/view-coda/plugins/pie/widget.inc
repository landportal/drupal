<?php
/**
 * Land Portal View Coda
 *
 * Visualization plugin: map
 * 
 * Author: Jules <jules@landportal.info>
 */

// Returns a list of boolean options understood by js-view-coda projection (vis. type)
function lbvc_plugin_pie_options() {
  return array(
        'legend' => 'Show legend',
        'loadMain' => 'Load main indicator data',
        'mainDelta' => 'Main is the overall value',
        'loadCoutries' => 'Load available countries',
  );
}


function lbvc_plugin_pie_widget_form($item) {
  if (module_exists('devel')) dpm($item, 'pie chart');
  $v = json_decode($item['vcc']);
  //dpm($v, 'args');

  $options = lbvc_plugin_pie_options();
  $values = array();
  // opts should be provided / streamlined with js-view-coda lib
  foreach($options as $opt => $desc) {
    if ($v->$opt) $values[] = $opt;
  }
  $forms = array(
    'options' => array(
      '#title' => t('PIE stuff'),
      '#type' => 'checkboxes',
      '#options' => $options,
      '#default_value' => $values,
    ),
    'main' => array(
      '#title' => t('Main indicator'),
      '#type' => 'textfield',
      '#default_value' => $v->main,
    ),
    'year' => array(
      '#title' => t('Year'),
      '#type' => 'textfield',
      '#default_value' => $v->year,
    ),
    'country' => array(
      '#title' => t('Default country'),
      '#type' => 'textfield',
      '#default_value' => $v->country,
    ),
  );
  return $forms;
}

// Returns a string
function lbvc_plugin_pie_field_presave($item) {
  $jsopts = '"main": "'.$item['main'].'"'
    . ($item['year'] ? ', "year": "'.$item['year'].'"' : '');
  foreach(lbvc_plugin_pie_options() as $opt => $desc) {
    if ($item['options'][$opt]) $jsopts .= ', "' . $opt . '": "true"';
  }
  return '{' . $jsopts. '}';
}
