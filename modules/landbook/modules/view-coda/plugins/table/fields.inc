<?php
/**
 * Land Portal View Coda
 *
 * Visualization plugin: table
 * 
 * Author: Jules <jules@landportal.info>
 */

function lbvc_plugin_table_params($VCC) {
  $params = '';
  $up = $VCC['vcc'];
  if ($up && $up[0] == '{' && $up[count($up) - 1] == '}') {
    $params = substr($up, 1, -1) . ', ';
  }
  $params .= '"indicators": ["' . join('", "', $VCC['indicators']) . '"]'
    . ', "add": false, "target": "#' . $VCC['vid'] . '", "vis": LBV';
  return '{' . $params . '}';
}

function lbvc_plugin_table_formatter($VCC) {
  if (module_exists('devel')) {
    dpm($VCC, 'table field');
  }
  $params = lbvc_plugin_table_params($VCC);

  $value = '<table class="table"><thead><tr>
           <th>Indicator</th>
           <th>Min-Max<br/>Number of years</th>
           <th><span class="hidden-xs">Countries</span><br/><acronym title="Number of Observations">Obs</acronym> missing</th>
           <th>Min / Max<span class="hidden-xs"> Value</span></th>
           </tr></thead><tbody></tbody></table>';
  $js = $VCC['jsid'] . ' = new lbvisTable(' . $params . '); ' . $VCC['jsid'] . '.init();';
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
