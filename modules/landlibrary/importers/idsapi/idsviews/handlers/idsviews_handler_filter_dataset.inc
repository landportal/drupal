<?php

class idsviews_handler_filter_dataset extends views_handler_filter {

  function option_definition() {
    $options = parent::option_definition();
    $options['filter_dataset'] = array('default' => 'eldis');
    return $options;
  }

  function options_form(&$form, &$form_state) {   
    parent::options_form($form, $form_state);
    $form['filter_dataset'] = array(
      '#type' => 'select',
      '#title'  => t('Dataset'),
      '#options'  => array('eldis' => 'Eldis', 'bridge' => 'Bridge'),
      '#default_value'  => $this->options['filter_dataset'],
    );
  }

  function can_expose() {
    return FALSE;
  }

  function query() {
    $this->view->query->add_dataset($this->options['filter_dataset']);
  }
}
