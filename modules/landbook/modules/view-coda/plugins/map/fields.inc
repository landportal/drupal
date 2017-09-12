<?php
/**
 * Land Portal View Coda
 *
 * Visualization plugin: map
 * 
 * Author: Jules <jules@landportal.info>
 */


function lbvc_plugin_map_params($VCC) {
  $params = '';
  $up = $VCC['vcc'];
  if ($up && $up[0] == '{' && $up[count($up) - 1] == '}') {
    $params = substr($up, 1, -1) . ', ';
  }
  $params .= '"indicator": "' . $VCC['indicators'][0] . '"'
    . ', tooltip: true, legend: true, nav: true'
    . ", colors: { background: 'transparent' }"
    . ', "mapTarget": "#' . $VCC['vid'] . '", "vis": LBV';
  return '{' . $params . '}';
}

function lbvc_plugin_map_formatter($VCC) {
  //dpm($VCC, 'map VCC');
  $params = lbvc_plugin_map_params($VCC);
  $value = t('Loading map visualization');
  $js = $VCC['jsid'] . ' = new lbvisMap(' . $params . '); ' . $VCC['jsid'] . '.init();';
  // DEBUG
  $js .= 'console.log(' . $VCC['jsid'] . '.debug());';

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
        'data' => landbook_view_coda_lbvis_ready_callback($js)
      ))
    ),
    '#value' => $value,
  );
}
