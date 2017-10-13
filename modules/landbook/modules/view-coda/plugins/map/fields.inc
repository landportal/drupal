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
  $value = t('Loading map...');

  $params = lbvc_plugin_map_params($VCC);
  $params->target = '#' . $VCC['vid'];
  $attr = json_encode($params);
  if (strstr($attr, '"@') && strstr($attr, '@"')) {
    $attr = preg_replace('/"@([^@]*)@"/', '$1', $attr);
  }
  //dsm($attr);
  $js = $VCC['jsid'] . ' = new lbvisMap(map_data, LBV, ' . $attr . '); ' . $VCC['jsid'] . '.init();';

  return array(array(
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
  ));
}
