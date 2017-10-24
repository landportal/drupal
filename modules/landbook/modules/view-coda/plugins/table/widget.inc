<?php
/**
 * Land Portal View Coda
 *
 * Visualization plugin: map
 * 
 * Author: Jules <jules@landportal.info>
 */


// Returns a list of boolean options understood by js-view-coda projection (vis. type)
function lbvc_plugin_table_options() {
  return array(
    'useLastYear' => 'Use latest year available',
    //'loadCountries' => 'Load available countries',
    'allowAdd' => 'Allow adding indicators to the table',
  );
}


// Returns a list of boolean options understood by js-view-coda projection (vis. type)
function lbvc_plugin_table_columns() {
  return array(
    'min' => 'Minimum value',
    'max' => 'Maximum value',
    'years' => 'NB years',
    'nbcountries' => 'NB countries',
    'obs' => 'NB observations',
  );
}



function lbvc_plugin_table_widget_form($item) {
  //if (module_exists('devel')) dpm($item, $item['type'] . ' chart');
  $v = json_decode($item['vcc']);
  //dpm($v, 'args');

  $options = lbvc_plugin_table_options();
  $values = array();
  // opts should be provided / streamlined with js-view-coda lib
  foreach($options as $opt => $desc) {
    if (isset($v->$opt)) $values[] = $opt;
  }

  $columns = lbvc_plugin_table_columns();
  $columns_values = array();
  // opts should be provided / streamlined with js-view-coda lib
  foreach($columns as $opt => $desc) {
    if (isset($v->$opt)) $columns_values[] = $opt;
  }

  $forms = array(
    'columns' => array(
      '#title' => t('Columns'),
      '#type' => 'checkboxes',
      '#options' => $columns,
      '#default_value' => $columns_values,
    ),
    'options' => array(
      '#title' => t('Table option'),
      '#type' => 'checkboxes',
      '#options' => $options,
      '#default_value' => $values,
    ),
    'iso3' => array(
      '#title' => t('Default country'),
      '#type' => 'textfield',
      '#default_value' => isset($v->iso3) ? $v->iso3 : '',
    ),
  );
  return $forms;
}

/* // Returns a JSON / array */
/* function lbvc_plugin_table_field_presave($item) { */
/* } */
