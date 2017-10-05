<?php
/**
 * Land Portal View Coda
 *
 * Visualization plugin: pie
 *
 * Author: Jules <jules@landportal.info>
 */

// Returns a list of boolean options understood by js-view-coda projection (vis. type)
function lbvc_plugin_pie_options() {
  return array(
    'legend' => 'Show legend',
    'loadTree' => 'Load sub-indicators',
    'loadMain' => 'Load main indicator data',
    'mainDelta' => 'Main is the overall value',
    'loadCountries' => 'Load available countries',
  );
}


function lbvc_plugin_pie_widget_form($item) {
  //if (module_exists('devel')) dpm($item, 'pie chart');
  $v = json_decode($item['vcc']);
  //dpm($v, 'args');

  $options = lbvc_plugin_pie_options();
  $values = array();
  // opts should be provided / streamlined with js-view-coda lib
  foreach($options as $opt => $desc) {
    if (isset($v->$opt)) $values[] = $opt;
  }
  $forms = array(
    'options' => array(
      '#title' => t('PIE stuff'),
      '#type' => 'checkboxes',
      '#options' => $options,
      '#default_value' => $values,
    ),
    // Shall be an indicator selector, ya
    'main' => array(
      '#title' => t('Main indicator'),
      '#type' => 'textfield',
      '#default_value' => isset($v->main) ? $v->main : '',
    ),
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

/* // Returns a string */
/* function lbvc_plugin_pie_field_presave($item) { */
/*   $options = $item['vis']; */
/*   /\* unset($options['vcc']); *\/ */
/*   /\* unset($options['type']); *\/ */
/*   unset($options['options']); */
/*   foreach(lbvc_plugin_pie_options() as $opt => $desc) { */
/*     if ($item['vis']['options'][$opt]) $options[$opt] = true; */
/*   } */
/*   dpm($options, 'charts opts'); */
/*   return json_encode($options); */
/* } */
