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
  return $params;
}

function lbvc_plugin_pie_formatter($VCC, $form=NULL) {
  $params = lbvc_plugin_pie_params($VCC);
  // All vis should have those
  $params->target = '#' . $VCC['vid'];
  // TMP hack to pick iso code the old way (for CP)
  $visP = substr(json_encode($params), 0, -1);
  $visP .= ', iso3: Drupal.settings.landbook.countryCode ? Drupal.settings.landbook.countryCode : "" }';
  $js = $VCC['jsid'] . ' = new lbvisPie(LBV, ' . $visP . '); ' . $VCC['jsid'] . '.init();';

  // Build option / action form for the vis.
  $fields = array();
  /*   '#type' => 'container', */
  /*   '#attributes' => array('class' => 'col-sm-6'), */
  /*   'children' => array(), */
  /* ); */
  if (isset($params->loadCountries)) {
    $fields['countries'] = array(
        '#id' => $VCC['vid']. '-countries',
        '#name' => 'countries',
        '#type' => 'select',
        '#title' => t('Countries'),
        '#options' => array(),//['PER', 'EGY'],
    );
  }

  if (isset($params->loadTree) && count($params->tree) > 1) {
    $opts = array();
    foreach (array_keys($params->tree) as $ind) {
      $opts[$ind] = $params->cache[$ind]['label'];
    }
    $fields['indicators'] = array(
      '#id' => $VCC['vid']. '-indicators',
      '#name' => 'observations',
      '#type' => 'select',
      '#title' => t('Indicators (groups)'),
      '#options' => $opts,// array_keys($params->tree)
    );
  }

  /* $fields['obs'] = array( */
  /*   '#type' => 'checkboxes', */
  /*   '#options' => array( */
  /*     'total' => 'Total', */
  /*     'owners' => 'Owners', */
  /*     'renter' => 'Renters', */
  /*   ), */
  /*   '#default_value' => [], */
  /* ); */
  /* $form = drupal_get_form('landbook_view_coda_vis_form', $fields);//array('f'=>$fields, 'ob'=> $fieldsobs)); */
  $form = array(
    '#attributes' => array(
      'id' => $VCC['vid'] . '-form',
      'class' => 'view-coda-form form-inline',
    ),
    '#type' => 'container',
    'items' => array(
      '#attributes' => array(
        'class' => '',
      ),
      '#type' => 'container',
      'items' => $fields
    ),
  );
//  dpm($form, 'builda pie');

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

  return array($pie, $form);
}
