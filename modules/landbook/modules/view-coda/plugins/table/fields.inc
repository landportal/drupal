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

  // TMP hack to pick iso code the old way (for CP)
  /* $visP = substr(json_encode($params), 0, -1); */
  /* $visP .= ', iso3: Drupal.settings.landbook.countryCode ? Drupal.settings.landbook.countryCode : "" }'; */
  $attr = json_encode($params);
  if (strstr($attr, '"@') && strstr($attr, '@"')) {
    $attr = preg_replace('/"@([^@]*)@"/', '$1', $attr);
  }

  $js = $VCC['jsid'] . ' = new lbvisTable(LBV, ' . $attr . '); ' . $VCC['jsid'] . '.init();';

  /* if (module_exists('devel')) {  // DEBUG */
  /*   dpm($params, $VCC['type'] . ' params'); */
  /* } */

  $valueOverall = '<table class="table"><thead><tr>
           <th>Indicator</th>
           <th>Min-Max<br/>Number of years</th>
           <th><span class="hidden-xs">Countries</span><br/><acronym title="Number of Observations">Obs</acronym> missing</th>
           <th>Min / Max<span class="hidden-xs"> Value</span></th>
           </tr></thead><tbody></tbody></table>';

  $valueCountry = '<table class="table"><thead><tr>
           <th>Indicator</th>
           <th>Years</th>
           <th>Value</th>
           </tr></thead><tbody></tbody></table>';
  $value = $valueCountry;
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
