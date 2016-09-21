<?php

class idsviews_handler_sort extends views_handler_sort {

  function option_definition() {
    $options = parent::option_definition();
    $options['orderby_field'] = array('default' => 'date_created');
    return $options;
  }

  function options_form(&$form, &$form_state) {   
    parent::options_form($form, $form_state);
    $form['orderby_field'] = array(
      '#type' => 'select',
      '#title'  => t('Sort options'),
      '#options'  => array('title' => 'Title', 'name' => 'Name', 'object_id' => 'Object ID', 'publication_date' => 'Publication date', 'date_created' => 'Date created',),
      '#default_value'  => $this->options['orderby_field'],
    );
  }

  function can_expose() {
    return FALSE;
  }

  function query() {
    $this->view->query->add_orderby("idsapi", $this->options['orderby_field'], $this->options['order']);
  }
}
