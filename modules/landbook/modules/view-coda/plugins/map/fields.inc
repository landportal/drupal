<?php
/**
 * Land Portal View Coda
 *
 * Visualization plugin: map
 * 
 * Author: Jules <jules@landportal.info>
 */


function lbvc_plugin_map_params($VCC) {
  $params = json_decode($VCC['vcc'] != '' ? $VCC['vcc'] : '{}');
  /* dpm($params, 'PARAMS'); */
  /* dpm($VCC, 'VCC'); */
  $params->indicators = array();
  $params->cache = array();
  if (array_key_exists('indicators', $VCC)) {
    lbvc__indicators_process($params, $VCC['indicators']);

    // IF loadTree, load all indicators 'children', return a complex ind. structure
    if (isset($params->loadTree)) {
      lbvc__indicators_tree($params, $VCC['indicators']);
    }
  }
  return $params;
}

function lbvc_plugin_map_formatter($VCC) {
  $params = lbvc_plugin_map_params($VCC);
  $params->target = '#' . $VCC['vid'];
  $js = $VCC['jsid'] . ' = new lbvisMap(map_data, LBV, ' . json_encode($params) . '); ' . $VCC['jsid'] . '.init();';

  // The visualization
  $value = t('Loading map...');
  $chart = array(
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

  $fields = lbvc_plugin_ui_form_options($VCC, $params);
  if (sizeof($fields) == 0) {
    return $chart;
  }
  $form = lbvc_plugin_ui_form_wrapper($VCC, $fields);
  return array($form, $chart);
}


/* function lbvc_plugin_map_form($VCC, $params) { */
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
