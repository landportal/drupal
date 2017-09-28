<?php
/**
 * Land Portal View Coda
 *
 * Visualization plugin: map
 * 
 * Author: Jules <jules@landportal.info>
 */


function lbvc_plugin_map_params($VCC) {
  $params = json_decode($VCC['vcc'] != 'null' ? $VCC['vcc'] : '{}');
  dpm($params, 'PARAMS');
  dpm($VCC, 'VCC');
  $params->indicators = array();
  $params->cache = array();

  lbvc__indicators_process($params, $VCC['indicators']);

  // IF loadTree, load all indicators 'children', return a complex ind. structure
  if (isset($params->loadTree)) {
    lbvc__indicators_tree($params, $VCC['indicators']);
  }

  return $params;
}

function lbvc_plugin_map_formatter($VCC) {
  $value = t('Loading map...');

  $params = lbvc_plugin_map_params($VCC);
  $params->target = '#' . $VCC['vid'];
  $js = $VCC['jsid'] . ' = new lbvisMap(map_data, LBV, ' . json_encode($params) . '); ' . $VCC['jsid'] . '.init();';

  return array(
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
}
