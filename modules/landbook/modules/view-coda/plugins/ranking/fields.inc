<?php
/**
 * Land Portal View Coda
 *
 * Visualization plugin: ranking chart
 *
 * Author: Jules <jules@landportal.info>
 */

function lbvc_plugin_ranking_params($VCC) {
  $params = json_decode($VCC['vcc'] != 'null' ? $VCC['vcc'] : '{}');
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

function lbvc_plugin_ranking_formatter($VCC, $form=NULL) {
  $params = lbvc_plugin_ranking_params($VCC);
  $params->target = '#' . $VCC['vid'];
  $js = $VCC['jsid'] . ' = new lbvisRanking(LBV, ' . json_encode($params) . '); ' . $VCC['jsid'] . '.init();';

  // The visualization
  $value = t('Loading ranking chart');
  $chart = array(
    '#type' => 'html_tag',
    '#tag' => 'ul',
    '#attributes' => array(
      'id' => $VCC['vid'],
      'class' => 'view-coda-vis',
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

  $fields = lbvc_plugin_ui_form_options($VCC, $params);
  if (sizeof($fields) == 0) {
    return $chart;
  }
  $form = lbvc_plugin_ui_form_wrapper($VCC, $fields);
  return array($form, $chart);
}

/* function lbvc_plugin_ranking_form($VCC, $params) { */
/*   $fields = array(); */
/*   if (isset($params->loadIndicators)) { */
/*     $fields['indicator'] = form_process_select(array( */
/*       '#id' => $VCC['vid']. '-indicator', */
/*       '#name' => 'indicator', */
/*       '#type' => 'select', */
/*       '#empty_option' => t('Select an indicator'), */
/*       '#options' => [] */
/*     )); */
/*   } */
/*   if (isset($params->loadYears)) { */
/*     $fields['year'] = form_process_select(array( */
/*       '#id' => $VCC['vid']. '-year', */
/*       '#name' => 'year', */
/*       '#type' => 'select', */
/*       '#empty_option' => t('Select a year'), */
/*       '#options' => [] */
/*     )); */
/*   } */
/*   return $fields; */
/* } */
