<?php

//
// Helper functions for plugins field_formatter
//
// See plugins/XXX/fields.inc files
//   lbvc_plugin_XXX_formatter()
//

// Options (bool):
// - range: generate 'from' & 'to' year selects (default is just one 'year' select)
function lbvc_plugin_ui_form_options($VCC, $params, $options = array()) {
  $fields = array();
  if (isset($params->loadIndicators)) {
    $fields['indicator'] = form_process_select(array(
      '#id' => $VCC['vid']. '-indicator',
      '#multiple' => false,
      '#required' => false,
      '#name' => 'indicator',
      '#type' => 'select',
      '#empty_option' => t('Select an indicator'),
      '#options' => []
    ));
  }
  if (isset($params->loadYears)) {
    if (array_key_exists('range', $options)) {
      $from = form_process_select(array(
        '#id' => $VCC['vid']. '-from',
        '#multiple' => false,
        '#required' => false,
        '#name' => 'year[from]',
        '#type' => 'select',
        '#empty_option' => t('From'),
        '#options' => []
      ));
      $to = form_process_select(array(
        '#id' => $VCC['vid']. '-to',
        '#multiple' => false,
        '#required' => false,
        '#name' => 'year[to]',
        '#type' => 'select',
        '#empty_option' => t('To'),
        '#options' => []
      ));
      $fields['years'] = array(
        '#attributes' => array(
          'class' => 'years',
        ),
        '#type' => 'container',
        'items' => array($from, $to)
      );
    } else {
      $fields['year'] = form_process_select(array(
        '#id' => $VCC['vid']. '-year',
        '#multiple' => false,
        '#required' => false,
        '#name' => 'year',
        '#type' => 'select',
        '#empty_option' => t('Select a year'),
        '#options' => []
      ));
    }
  }
  if (isset($params->loadCountries)) {
    $fields['country'] = form_process_select(array(
      '#id' => $VCC['vid']. '-country',
      '#multiple' => false,
      '#required' => false,
      '#name' => 'country',
      '#type' => 'select',
      '#empty_option' => t('Add a country'),
      '#options' => []
    ));
  }
  return $fields;
}

function lbvc_plugin_ui_form_wrapper($VCC, $fields, $action='update') {
  $class = array('actions', $action);
  if ($action == 'update') $class[] = 'hidden';
  $fields['submit'] = array(
        '#attributes' => array(
          'class' => $class
        ),
        '#type' => 'container',
        'items' => array(
          '#name' => $action,
          '#type' => 'submit',
          '#value' => ucfirst($action),
        )
  );
  $fclass = array(
    'view-coda-form', 'form-inline',
    'form-items-'. (count($fields) - ($action == 'update' ? 1 : 0)),
  );

  $form = array(
    '#type' => 'form',
    '#attributes' => array(
      'id' => $VCC['vid'] . '-form',
      'class' => $fclass
    ),
//    '#tag' => 'form',
//    '#required' => false,
    /* 'items' => array( */
    /*   '#attributes' => array( */
    /*     'class' => 'row', */
    /*   ), */
//      '#type' => 'container',
      'items' => $fields
    /* ), */
  );
  return $form;
}
