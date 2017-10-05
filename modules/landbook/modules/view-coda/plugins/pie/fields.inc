<?php
/**
 * Land Portal View Coda
 *
 * Visualization plugin: pie chart
 * 
 * Author: Jules <jules@landportal.info>
 */

function lbvc_plugin_pie_params($VCC) {
  $params = json_decode($VCC['vcc']);
  $params->indicators = array();
  $params->cache = array();

  lbvc__indicators_process($params, $VCC['indicators']);

  // IF loadTree, load all indicators 'children', return a complex ind. structure
  if (isset($params->loadTree)) {
    lbvc__indicators_tree($params, $VCC['indicators']);
  }
  $params->iso3 = 'PER';
  return $params;
}

function lbvc_plugin_pie_formatter($VCC, $form=NULL) {
  $params = lbvc_plugin_pie_params($VCC);
  // All vis should have those
  $params->target = '#' . $VCC['vid'];

  $js = $VCC['jsid'] . ' = new lbvisPie(LBV, ' . json_encode($params) . '); ' . $VCC['jsid'] . '.init();';

  // DEBUG
  if (module_exists('devel')) {
    //dpm($VCC, 'Pie opts');
    dpm($params, 'Pie params');
  }

  // Build option / action form for the vis.
  $fields = array();
  /*   '#type' => 'container', */
  /*   '#attributes' => array('class' => 'col-sm-6'), */
  /*   'children' => array(), */
  /* ); */
  if (isset($params->loadCountries)) {
    $fields['countries'] = array(
        '#id' => $VCC['vid']. '-countries',
        '#type' => 'select',
        '#title' => t('Countries'),
        '#options' => ['PER', 'EGY'],
    );
  }

  if (isset($params->loadTree) && count($params->tree) > 1) {
//    dpm($ff);
    $opts = array();
    /* foreach ($params->tree as $ind => $d) { */
    /*   $opts[] = $ind; */
    /* } */
    $fields['indicators'] = array(
      '#id' => $VCC['vid']. '-indicators',
      '#type' => 'select',
      '#title' => t('Indicators (groups)'),
      '#options' => array_keys($params->tree)
    );
  }

  $fields['obs'] = array(
    '#type' => 'checkboxes',
    '#options' => array(
      'total' => 'Total',
      'owners' => 'Owners',
      'renter' => 'Renters',
    ),
    '#default_value' => [],
  );
  /* $form = drupal_get_form('landbook_view_coda_vis_form', $fields);//array('f'=>$fields, 'ob'=> $fieldsobs)); */
  $form = array(
    '#type' => 'container',
    'items' => $fields
  );
  dpm($form, 'builda pie');

  // The visualization
  $value = t('Loading pie chart');
  $pie = array(
    '#type' => 'html_tag',
    '#tag' => 'div',
    '#attributes' => array(
      'id' => $VCC['vid']
    ),
    '#attached' => array(
      'library' => array(array('landbook_view_coda', 'lbvis.' . $VCC['type'])),
      'js' =>  array(array(
        'type' => 'inline',
        'data' => lbvc__js_ready($js)
      ))
    ),
    '#value' => $value,
  );
  //dpm($form);

  return array($form, $pie);
}
