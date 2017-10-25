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
//  $visP = substr(json_encode($params), 0, -1);
//  $visP .= ', iso3: Drupal.settings.landbook.countryCode ? Drupal.settings.landbook.countryCode : "" }';
//  $js = $VCC['jsid'] . ' = new lbvisPie(LBV, ' . $visP . '); ' . $VCC['jsid'] . '.init();';
  $js = $VCC['jsid'] . ' = new lbvisPie(LBV, ' . json_encode($params) . '); ' . $VCC['jsid'] . '.init();';

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

  $fields = lbvc_plugin_pie_form($VCC, $params);
  if (sizeof($fields) == 0) {
    return $chart;
  }
  $form = lbvc_plugin_ui_form_wrapper($VCC, $fields);
  return array($form, $pie);
}



function lbvc_plugin_pie_form($VCC, $params) {
  $fields = array();

  if (isset($params->loadCountries)) {
    $fields['country'] = array(
      '#id' => $VCC['vid']. '-country',
      '#name' => 'country',
      '#type' => 'select',
      '#title' => t('Country'),
      '#options' => array(),
    );
  }

  if (isset($params->loadTree) && count($params->ttop) > 1) {
    $opts = array();
    // Follow tree, top elements will be optgroup
    foreach (array_keys($params->tree) as $ind) {
      $opts[$params->cache[$ind]['label']] = [];
      foreach (array_keys($params->tree[$ind]) as $sind) {
        $opts[$params->cache[$ind]['label']][$sind] = $params->cache[$sind]['label'];
      }
    }
    //dpm($params);
    /* foreach ($params->ttop as $ind) { */
    /*   $opts[$ind] = $params->cache[$ind]['label']; */
    /* } */
    $fields['indicator'] = array(
      '#id' => $VCC['vid']. '-indicator',
      '#name' => 'indicator',
      '#type' => 'select',
//      '#title' => t('Select'),
      '#options' => $opts,// array_keys($params->tree)
    );
  }

  $form = array(
    '#attributes' => array(
      'id' => $VCC['vid'] . '-form',
      'class' => 'view-coda-form form-inline',
    ),
    '#type' => 'container',
    'items' => array(
      '#attributes' => array(
        'class' => 'row',
      ),
      '#type' => 'container',
      'items' => $fields
    ),
  );
//  dpm($form, 'builda pie');
  return $fields;
}
