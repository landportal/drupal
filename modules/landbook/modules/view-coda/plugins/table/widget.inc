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
    //'useLastYear' => 'Use latest year available',
    'loadCoutries' => 'Load available countries',
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
  if (module_exists('devel')) dpm($item, 'pie chart');
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
    'country' => array(
      '#title' => t('Default country'),
      '#type' => 'textfield',
      '#default_value' => @$v->country,
    ),
  );
  return $forms;
}

// Returns a string
function lbvc_plugin_table_field_presave($item) {
  $jsopts = '"main": "'.$item['main'].'"'
    . ($item['year'] ? ', "year": "'.$item['year'].'"' : '');
  foreach(lbvc_plugin_table_options() as $opt => $desc) {
    if ($item['options'][$opt]) $jsopts .= ', "' . $opt . '": "true"';
  }
  // Table Columns
  $jsopts .= ', "columns": ["ind"';
  foreach(lbvc_plugin_table_columns() as $opt => $desc) {
    if ($item['columns'][$opt]) $jsopts .= ', "' . $opt . '"';
  }
  $jsopts .= ']';

  return '{' . $jsopts. '}';
}
