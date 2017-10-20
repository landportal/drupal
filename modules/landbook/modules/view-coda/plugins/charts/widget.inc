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
    'loadIndicators' => 'Load available indicators',
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
      '#title' => t('Options'),
      '#type' => 'checkboxes',
      '#options' => $options,
      '#default_value' => $values,
    ),
    'ctype' => array(
      '#type' => 'radios',
      '#title' => t('Chart type'),
      '#options' => array('bar' => 'Bars', 'line' => 'Lines'),
      '#default_value' => isset($v->ctype) ? $v->ctype : 'bar',
    ),
    'main' => array(
      '#title' => t('Main (title) indicator'),
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
//  form_process_checkboxes($forms['options']);
  return $forms;
}

/* // Returns an obj / hash */
/* function lbvc_plugin_charts_field_presave($item) { */
/*   /\* $options = $item['vis']; *\/ */
/*   /\* /\\* unset($options['vcc']); *\\/ *\/ */
/*   /\* /\\* unset($options['type']); *\\/ *\/ */
/*   /\* unset($options['options']); *\/ */
/*   /\* foreach(lbvc_plugin_charts_options() as $opt => $desc) { *\/ */
/*   /\*   if ($item['vis']['options'][$opt]) $options[$opt] = true; *\/ */
/*   /\* } *\/ */
/*   /\* dpm($options, 'charts opts'); *\/ */
/*   /\* return json_encode($options);//['vis']); *\/ */
/*   return []; */
/* } */
