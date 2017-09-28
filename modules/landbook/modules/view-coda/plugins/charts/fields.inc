<?php



function lbvc_plugin_charts_params($VCC) {
  $params = json_decode($VCC['vcc']);
  $params->indicators = array();
  $params->cache = array();

  lbvc__indicators_process($params, $VCC['indicators']);

  if (isset($params->loadTree)) {
    lbvc__indicators_tree($params, $VCC['indicators']);
  }
  return $params;
}

function lbvc_plugin_charts_formatter($VCC) {
  $params = lbvc_plugin_charts_params($VCC);
  $params->target = '#' . $VCC['vid'];
  if (module_exists('devel')) {  // DEBUG
    //dpm($params, $VCC['type'] . ' params');
  }

  $js = $VCC['jsid'] . ' = new lbvisCharts(LBV, ' . json_encode($params) . '); ' . $VCC['jsid'] . '.init();';

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
    '#value' => t('Loading chart...'),
  );
}
