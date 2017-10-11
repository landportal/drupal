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

  // TMP hack to pick iso code the old way (for CP)
  /* $visP = substr(json_encode($params), 0, -1); */
  /* $visP .= ', iso3: Drupal.settings.landbook.countryCode ? Drupal.settings.landbook.countryCode : "" }'; */
  /* $js = $VCC['jsid'] . ' = new lbvisCharts(LBV, ' . $visP . '); ' . $VCC['jsid'] . '.init();'; */
  $js = $VCC['jsid'] . ' = new lbvisCharts(LBV, ' . json_encode($params) . '); ' . $VCC['jsid'] . '.init();';

  if (isset($params->loadTree) && count($params->ttop) > 1) {
    $opts = array();
    //foreach (array_keys($params->tree) as $ind) {
    foreach ($params->ttop as $ind) {
      $opts[$ind] = $params->cache[$ind]['label'];
    }
    $fields['indicators'] = form_process_checkboxes(array(
      '#id' => $VCC['vid']. '-indicators',
      '#name' => 'indicators',
      '#type' => 'checkboxes',
      //'#parent' => 'indicators',
      '#title' => t('Category'),
      //'#title_display' => t('Category'),
      '#options' => $opts,// array_keys($params->tree)
    ));
  }

  if (isset($params->observations)) {
    //dpm($params->observations);
    $fields['observations'] = form_process_checkboxes(array(
      '#id' => $VCC['vid']. '-obs',
      '#name' => 'observations',
      '#type' => 'checkboxes',
      '#title' => 'Obs',
      '#options' => array('all' => t('All Indicators')),
    ));
  }

  $form = array(
    '#attributes' => array(
      'id' => $VCC['vid'] . '-form',
      'class' => 'view-coda-form form-inline',
    ),
    '#type' => 'container',
    'items' => array(
      '#attributes' => array(
        'class' => 'row',
      ),
      '#type' => 'container',
      'items' => $fields
    ),
  );

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
    '#value' => t('Loading chart...'),
  );
  return array($chart, $form); 
}
