<?php

function lbvc_plugin_charts_params($VCC) {
  $params = json_decode($VCC['vcc']);
  $params->indicators = array();
  $params->cache = array();
  if (isset($params->loadTree)) {
    lbvc__indicators_tree($params, $VCC['indicators']);
  } else {
    lbvc__indicators_process($params, $VCC['indicators']);
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
      'id' => $VCC['vid'],
      'class' => ['map-fuild']
    ),
    '#attached' => array(
      'library' => array(array('landbook_view_coda', 'lbvis.' . $VCC['type'])),
      'js' =>  array(array(
        'type' => JS_DEFAULT,
        'weight' => 11,
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
  $form = lbvc_plugin_ui_form_wrapper($VCC, $fields);//, (isset($params->loadCountries) ? 'add' : 'update'));
  // for layout/style purpose
  if (isset($params->loadCountries)) $form['#attributes']['class'][] = 'form-add';
  return array($form, $chart);
}


function lbvc_plugin_charts_form($VCC, $params) {
  $fields = lbvc_plugin_ui_form_options($VCC, $params);
  //, array('range' => true));
  // Remove 'year' field for now
  if($params->loadYears) unset($fields['year']);

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
    $fields['indicator'] = form_process_select(array(
      '#id' => $VCC['vid']. '-indicator',
      '#multiple' => false,
      '#required' => false,
      '#name' => 'indicator',
      '#type' => 'select',
      '#title' => t('Show'),
      '#options' => $opts,
    ));
  }

  // Used by vis to filter the indicators to display
  if (isset($params->observations)) {
    $fields['observations'] = form_process_checkboxes(array(
      '#id' => $VCC['vid']. '-observations',
      '#multiple' => false,
      '#required' => false,
      '#name' => 'observations',
      '#prefix' => '<div class="hidden">',
      '#suffix' => '</div>',
      '#attributes' => array('name' => 'observations', 'checked' => 'checked'),
      '#type' => 'checkboxes',
      //'#title' => t('Obs'), // FIX: throwing some PHP notices. Something in form_pre_render_conditional_form_element...
      '#options' => ['all'],
      '#value' => array(),
    ));
  }

  return $fields;
}
