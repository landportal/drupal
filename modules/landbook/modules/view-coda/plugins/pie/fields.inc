<?php
/**
 * Land Portal View Coda
 *
 * Visualization plugin: pie chart
 * 
 * Author: Jules <jules@landportal.info>
 */

function lbvc_plugin_pie_params($VCC) {
  $params = '';
  $up = $VCC['vcc'];
  if ($up && $up[0] == '{' && $up[count($up) - 1] == '}') {
    $params = substr($up, 1, -1) . ', ';
  }
  $params .= '"indicators": {"main": "' . $VCC['indicators'][0] . '"'
    .   ', "chart": ['.$VCC['indicators'].']}' // Inside params.indicators
    . ', "target": "#' . $VCC['vid'] . '", "vis": LBV';
  return '{' . $params . '}';
}


function lbvc_plugin_pie_formatter($VCC) {
  if (module_exists('devel')) {
    dpm($VCC, 'VCC');
  }
  $params = lbvc_plugin_pie_params($VCC);
  $value = t('Loading pie chart');

  /* Pie should have:
    - iso3 + year
    - indicators: [
      main: IND
      chart: [IND, IND, IND, ...]
    ]
    - colors: [] // should match indicators.chart or be generated
  */

  $js = $VCC['jsid'] . ' = new lbvisPie(' . $params . '); ' . $VCC['jsid'] . '.init();';
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
