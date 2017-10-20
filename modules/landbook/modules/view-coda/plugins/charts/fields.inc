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

  $fields = lbvc_plugin_charts_form($VCC, $params);
  if (sizeof($fields) == 0) {
    return $chart;
  }

  $fields['submit'] = array(
    '#name' => 'add',
    '#type' => 'submit',
    '#value' => t('Update'),
  );
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
  if ($params->loadTree) {
    return array($chart, $form);
  }
  return array($form, $chart);
}


function lbvc_plugin_charts_form($VCC, $params) {
  $fields = array();
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
      '#attributes' => array('name' => 'indicators'), // 'checked' => 'checked'),
      '#title' => t('Category'),
      //'#default' => 'all', // @todo find main value and check the box
      '#options' => $opts,// array_keys($params->tree)
    ));
    foreach($fields['indicators']['#options'] as $id => $op) {
      if ($params->main && $params->main == $id) {
        $fields['indicators'][$id]['#attributes']['checked'] = 'checked';
      }
//      dpm($op, $id);
    }
//    dpm($fields['indicators']);
  }

  // Used by vis to filter the indicators to display
  if (isset($params->observations)) {
    $obs = array('all' => t('All Indicators'));
    foreach($params->observations as $k => $o) {
      $obs[$k] = $o['label'];
    }
    $fields['observations'] = form_process_checkboxes(array(
      '#id' => $VCC['vid']. '-observations',
      '#name' => 'observations',
      '#attributes' => array('name' => 'observations', 'checked' => 'checked'),
      '#type' => 'checkboxes',
      '#title' => t('Indicators'),
      '#options' => $obs,
    ));
//    dpm($fields['observations'], 'obs');
  }

  if (isset($params->loadIndicators)) {
    $fields['indicator'] = form_process_select(array(
      '#id' => $VCC['vid']. '-indicator',
      '#name' => 'indicator',
      '#type' => 'select',
      '#empty_option' => t('Select an indicator'),
      '#options' => []
    ));
  }
  if (isset($params->loadYears)) {
    $fields['from'] = form_process_select(array(
      '#id' => $VCC['vid']. '-from',
      '#name' => 'year[from]',
      '#type' => 'select',
      '#empty_option' => t('From'),
      '#options' => []
    ));
    $fields['to'] = form_process_select(array(
      '#id' => $VCC['vid']. '-to',
      '#name' => 'year[to]',
      '#type' => 'select',
      '#empty_option' => t('To'),
      '#options' => []
    ));
  }
  if (isset($params->loadCountries)) {
    $fields['country'] = form_process_select(array(
      '#id' => $VCC['vid']. '-country',
      '#name' => 'country',
      '#type' => 'select',
      '#title' => t('Add a country'),
      '#options' => []
    ));
  }
  return $fields;
}
