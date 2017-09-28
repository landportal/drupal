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
    'legend' => 'Show legend',
    'tooltip' => 'Show tooltip',
    'nav' => 'Allow zoom (in/out)',
    //'loadMain' => 'Load main indicator data',
    'loadCountries' => 'Load available countries',
    'loadYears' => 'Load available years',
  );
}


function lbvc_plugin_map_widget_form($item) {
//  if (module_exists('devel')) dpm($item, 'charts rt');
  $v = json_decode($item['vcc']);
  //dpm($v, 'args');

  $options = lbvc_plugin_map_options();
  $values = array();
  // opts should be provided / streamlined with js-view-coda lib
  foreach($options as $opt => $desc) {
    if (isset($v->$opt)) $values[] = $opt;
  }
  $forms = array(
    'options' => array(
      '#title' => t('MAP stuff'),
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

/* // Returns a string */
/* function lbvc_plugin_map_field_presave($item) { */
/*   $options = $item['vis']; */
/*   /\* unset($options['vcc']); *\/ */
/*   /\* unset($options['type']); *\/ */
/*   unset($options['options']); */
/*   foreach(lbvc_plugin_map_options() as $opt => $desc) { */
/*     if ($item['vis']['options'][$opt]) $options[$opt] = true; */
/*   } */
/*   dpm($options, 'charts opts'); */
/*   return json_encode($options);//['vis']); */
/* } */
