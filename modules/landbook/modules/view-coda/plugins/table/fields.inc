<?php
/**
 * Land Portal View Coda
 *
 * Visualization plugin: table
 * 
 * Author: Jules <jules@landportal.info>
 */

function lbvc_plugin_table_params($VCC) {
  $params = json_decode($VCC['vcc']);
  $params->indicators = array();
  $params->cache = array();

  lbvc__indicators_process($params, $VCC['indicators']);

  return $params;
}

function lbvc_plugin_table_formatter($VCC) {
  $params = lbvc_plugin_table_params($VCC);
  // All vis should have those
  $params->target = '#' . $VCC['vid'];

  $js = $VCC['jsid'] . ' = new lbvisTable(LBV, ' . json_encode($params) . '); ' . $VCC['jsid'] . '.init();';

  if (module_exists('devel')) {  // DEBUG
    dpm($params, $VCC['type'] . ' params');
  }

  $value = '<table class="table"><thead><tr>
           <th>Indicator</th>
           <th>Min-Max<br/>Number of years</th>
           <th><span class="hidden-xs">Countries</span><br/><acronym title="Number of Observations">Obs</acronym> missing</th>
           <th>Min / Max<span class="hidden-xs"> Value</span></th>
           </tr></thead><tbody></tbody></table>';

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
