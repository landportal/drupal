<?php
/**
 * Land Portal View Coda
 *
 * Visualization plugin: spider chart
 * 
 * Author: Jules <jules@landportal.info>
 */

function lbvc_plugin_spider_params($VCC) {
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

function lbvc_plugin_spider_formatter($VCC, $form=NULL) {
  $params = lbvc_plugin_spider_params($VCC);
  // All vis should have those
  $params->target = '#' . $VCC['vid'];

  $js = $VCC['jsid'] . ' = new lbvisSpider(LBV, ' . json_encode($params) . '); ' . $VCC['jsid'] . '.init();';

  // DEBUG
  if (module_exists('devel')) {
    //dpm($VCC, 'Spider opts');
  }

  // The visualization
  $value = t('Loading spider chart');
  $spider = array(
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

  return $spider;
}
