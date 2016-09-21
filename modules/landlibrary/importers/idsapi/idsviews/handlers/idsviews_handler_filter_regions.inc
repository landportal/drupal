<?php

class idsviews_handler_filter_regions extends views_handler_filter {

  function value_form(&$form, &$form_state) {
    $regions_values = array('all_regions' => '--- All regions ---');
    if ($this->options['size_select']) {
      $length_title = $this->options['size_select'];
    }
    else {
      $length_title = IDS_VIEWS_DEFAULT_SIZE_CATEGORIES;
    }
    if (isset($this->view->query->request->site)) {
      $dataset = $this->view->query->request->site;
    }
    else {
      $dataset = variable_get('idsapi_default_dataset', IDS_API_DEFAULT_DATASET);
    }
    $response = idsapi_get_all('regions', $dataset, 'short');
    if (isset($response->results)) {
      $regions = $response->results;
      foreach ($regions as $region) {
        $name_region = substr($region->title,0,$length_title);
        if (strlen($region->title) > $length_title) {
          $name_region .= '...';
        }
        $regions_values[$region->object_id] = $name_region;
      }
    }
    $form['value'] = array(
      '#type' => 'select',
      '#title'  => t('Regions'),
      '#multiple' => TRUE,
      '#options'  => $regions_values,
      '#default_value'  => $this->value,
    );
    if (!empty($form_state['exposed'])) {
      $identifier = $this->options['expose']['identifier'];
      if (!isset($form_state['input'][$identifier])) {
        $form_state['input'][$identifier] = $this->value;
      }
    }
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['size_select'] = array('default' => '');
    return $options;
  }

  function options_form(&$form, &$form_state) {   
    parent::options_form($form, $form_state);
    $form['size_select'] = array(
      '#title' => t('Size'),
      '#type' => 'textfield',
      '#size' => 10,
      '#maxlength' => 10,
      '#description' => t('Number of characters shown for each region.'),
      '#default_value' => $this->options['size_select'],
    );
  }

  function expose_options() {
    $this->options['expose'] = array(
      'use_operator' => FALSE, 
      'operator' => $this->options['id'] . '_op', 
      'identifier' => $this->options['id'], 
      'label' => $this->definition['title'], 
      'remember' => FALSE, 
      'multiple' => TRUE, 
      'required' => FALSE,
    );
  }

  function query() {
    $group = $this->options['group'];
    $filter = $this->options['field'];
    if (isset($this->value)) {
      if (!isset($this->value['all_regions'])) {
        // If we allow multiple values then the value array will be multi-dimensional and we will need to flatten the
        // array before we implode it
        $values = array();
        foreach ($this->value as $value){
          if (is_array($value)){
            // We do have a multidimensional array, so flatten it
            foreach ($value as $subValue){
              $values[] = $subValue;
            }
          }
          else {
            // The array isn't multidimensional so we'll just move the value across into our target array
            $values[] = $value;
          }
        }
        $value = implode('|', $values);
        if (isset($group, $filter, $value)) {
          if ($value) {
            $this->view->query->add_filter($group, $filter, $value);
          }
        }
      }
    }
  }

  /**
   * Display the filter on the administrative summary.
   *
   * We've added this to allow us to display values from arrays correctly.
   */
  function admin_summary() {
    if (is_array($this->value)){
      if (empty($this->value)){
        $value = t("none");
      }
      else
        $value = implode(", ", $this->value);
    }
    else {
      $value = (string) $this->value;
    }
    return check_plain((string) $this->operator) . ' ' . check_plain($value);
  }
}
