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
        '#attributes' => array(
          'class' => 'action',
        ),
        '#type' => 'container',
        'items' => array(
          '#name' => 'update',
          '#type' => 'submit',
          '#value' => t('Update'),
        )
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
  return array($form, $chart);
}


function lbvc_plugin_charts_form($VCC, $params) {
  $fields = array();
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
    $from = form_process_select(array(
      '#id' => $VCC['vid']. '-from',
      '#name' => 'year[from]',
      '#type' => 'select',
      '#empty_option' => t('From'),
      '#options' => []
    ));
    $to = form_process_select(array(
      '#id' => $VCC['vid']. '-to',
      '#name' => 'year[to]',
      '#type' => 'select',
      '#empty_option' => t('To'),
      '#options' => []
    ));
    $fields['years'] = array(
      '#attributes' => array(
        'class' => 'years',
      ),
      '#type' => 'container',
      'items' => array($from, $to)
    );
  }
  if (isset($params->loadCountries)) {
    $fields['country'] = form_process_select(array(
      '#id' => $VCC['vid']. '-country',
      '#name' => 'country',
      '#type' => 'select',
      '#empty_option' => t('Add a country'),
      '#options' => []
    ));
  }

  if (isset($params->loadTree) && count($params->ttop) > 1) {
    $opts = array();
    // Follow tree, top elements will be optgroup
    foreach (array_keys($params->tree) as $ind) {
      $opts[$params->cache[$ind]['label']] = [];
      foreach (array_keys($params->tree[$ind]) as $sind) {
        $opts[$params->cache[$ind]['label']][$sind] = $params->cache[$sind]['label'];
      }
    }
    /* foreach ($params->ttop as $ind) { */
    /*   $opts[$ind] = $params->cache[$ind]['label']; */
    /* } */
    dpm($opts, isset($params->main) ? $params->main : 'all');
    dpm($params, 'params');
    dpm($t, 'params');
    $fields['indicator'] = form_process_select(array(
      '#id' => $VCC['vid']. '-indicator',
      '#name' => 'indicator',
      '#type' => 'select',
      '#options' => $opts,
    ));
  }

  // Used by vis to filter the indicators to display
  if (isset($params->observations)) {
    $fields['observations'] = form_process_checkboxes(array(
      '#id' => $VCC['vid']. '-observations',
      '#name' => 'observations',
      '#prefix' => '<div class="hidden">',
      '#suffix' => '</div>',
      '#attributes' => array('name' => 'observations', 'checked' => 'checked'),
      '#type' => 'checkboxes',
      '#title' => t('Indicators'),
      '#options' => [],
    ));
  }

  return $fields;
}
