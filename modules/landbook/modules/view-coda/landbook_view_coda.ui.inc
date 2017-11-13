<?php

//
// Helper functions for plugins field_formatter
//
// See plugins/XXX/fields.inc files
//   lbvc_plugin_XXX_formatter()
//

/* function landbook_view_coda_form_alter(&$form, &$form_state, $form_id) { */
/*   dpm($form, $form_id); */
/* } */

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
      '#options' => [],
      '#attached' => array(
        'css' => array(drupal_get_path('module', 'landportal_display') . '/select2.css'),
        'js'  => array(
          array('type' => 'file', 'data' => drupal_get_path('module', 'landportal_display') . '/select2.min.js'),
          array(
            'type' => 'inline',
            /* 'group' => JS_DEFAULT, */
            /* 'weight' => 100, */
            'data' => "(function($, Drupal) {
Drupal.behaviors.landbook_view_coda = { attach: function () {
  var el = $('select[name=\"indicator\"]').each(function (i, s) {
    $(s).select2({ dropdownParent: $(s).parent() });
  });
}};
})(jQuery, Drupal);
")
        )
      )
    ));
  }
  if (isset($params->loadYears)) {
    /* if (array_key_exists('range', $options)) { */
    /*   $from = form_process_select(array( */
    /*     '#id' => $VCC['vid']. '-from', */
    /*     '#multiple' => false, */
    /*     '#required' => false, */
    /*     '#attributes' => array('class' => ['date']), */
    /*     '#name' => 'from', */
    /*     '#type' => 'select', */
    /*     '#empty_option' => t('From'), */
    /*     '#options' => [] */
    /*   )); */
    /*   $to = form_process_select(array( */
    /*     '#id' => $VCC['vid']. '-to', */
    /*     '#multiple' => false, */
    /*     '#required' => false, */
    /*     '#attributes' => array('class' => ['date']), */
    /*     '#name' => 'to', */
    /*     '#type' => 'select', */
    /*     '#empty_option' => t('To'), */
    /*     '#options' => [] */
    /*   )); */
    /*   $fields['years'] = array( */
    /*     '#attributes' => array( */
    /*       'class' => 'years', */
    /*     ), */
    /*     '#type' => 'container', */
    /*     'items' => array($from, $to) */
    /*   ); */
    /* } else { */
      $fields['year'] = form_process_select(array(
        '#id' => $VCC['vid']. '-year',
        '#multiple' => false,
        '#required' => false,
        '#attributes' => array('#disabled' => 'disabled'),
        '#name' => 'year',
        '#type' => 'select',
        '#empty_option' => t('Select a year'),
        '#options' => []
      ));
      //dpm($fields['year']); // no worky worky
    /* } */
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
    '#action' => null,
    '#method' => 'get',
    '#attributes' => array(
      'id' => $VCC['vid'] . '-form',
      'class' => $fclass
    ),
    'items' => $fields,
//    '#after_build' => array('lbvc_after_build'), // no worky worky
  );
  return $form;
}

/* function lbvc_after_build() { */
/*   dsm('hello after build'); */
/* } */
