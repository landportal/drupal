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
  $attr = json_encode($params);
  $js = $VCC['jsid'] . ' = new lbvisTable(LBV, ' . $attr . '); ' . $VCC['jsid'] . '.init();';

  $value = '<table class="table">';

  if (isset($params->iso3)) {
    $value .= '<thead><tr>
           <th>Indicator</th>
           <th>Years</th>
           <th>Value</th>
           </tr></thead>';
  } else {
    $value .= '<thead><tr>
           <th>Indicator</th>
           <th>Min-Max<br/>Number of years</th>
           <th><span class="hidden-xs">Countries</span><br/><acronym title="Number of Observations">Obs</acronym> missing</th>
           <th>Min / Max<span class="hidden-xs"> Value</span></th>
           </tr></thead>';
  }

  $value .= '<tbody>';
  foreach ($params->cache as $i) { $value .= '<tr lbid="' . $i['id'] . '"><td><span class="indicator">' . $i['render'] . '</span></td></tr>'; }
  // add td to value (depends on table type / columns)
  $value .= '</tbody></table>';

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

  $fields = lbvc_plugin_table_form($VCC, $params);
  if (sizeof($fields) == 0) {
    return $chart;
  }
  $form = lbvc_plugin_ui_form_wrapper($VCC, $fields);//, (isset($params->allowAdd) ? 'add' : 'update'));
  return array($chart, $form);
}

function lbvc_plugin_table_form($VCC, $params) {
  $fields = array();

  if (isset($params->allowAdd)) {
    $fields = lbvc_plugin_ui_form_options($VCC, $params);
  }
  return $fields;
}
