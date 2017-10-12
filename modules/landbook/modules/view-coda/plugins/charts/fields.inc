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
      '#attributes' => array('name' => 'indicators'),
      '#title' => t('Category'),
      '#options' => $opts,// array_keys($params->tree)
    ));
  }

  if (isset($params->observations)) {
    $obs = array();
    foreach($params->observations as $k => $o) {
      $obs[$k] = $o['label'];
    }
    $obs['all'] = t('All Indicators');
    $fields['observations'] = form_process_checkboxes(array(
      '#id' => $VCC['vid']. '-observations',
      '#name' => 'observations',
      '#attributes' => array('name' => 'observations'),
      '#type' => 'checkboxes',
      '#title' => t('Indicators'),
      '#options' => $obs,
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
