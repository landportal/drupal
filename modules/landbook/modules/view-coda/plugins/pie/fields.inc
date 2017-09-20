<?php
/**
 * Land Portal View Coda
 *
 * Visualization plugin: pie chart
 * 
 * Author: Jules <jules@landportal.info>
 */

function lbvc_plugin_pie_params($VCC) {
  $params = $VCC['vcc'];
//  dpm($up, 'prams ' . $up[strlen($up) - 1]);
  if ($params && $params[0] == '{' && $params[strlen($params) - 1] == '}') {
    $params = substr($params, 1, -1) . ', ';
  }

//  dpm($VCC, 'pie params');
  //$params .= '"indicators": {"main": "' . $VCC['indicators'][0] . '", "chart": ['.$VCC['indicators'].']}';
  $params .= '"indicators": ["'.join($VCC['indicators'], '", "').'"]';
  $params .= ', iso3: "PER"';
  //$params .= ', options: '. json_encode($VCC['options']);
  $params .= ', cache: '. json_encode($VCC['fields']);
  $params .= ', "target": "#' . $VCC['vid'] . '", "vis": LBV';
  return '{' . $params . '}';
}


function lbvc_plugin_pie_formatter($VCC) {
  //if (module_exists('devel')) dpm($VCC, 'VCC');

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

  $js = $VCC['jsid'] . ' = new lbvisPie3(' . $params . '); ' . $VCC['jsid'] . '.init();';
  // DEBUG
  $js .= $VCC['jsid'] . '.debug();';

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
