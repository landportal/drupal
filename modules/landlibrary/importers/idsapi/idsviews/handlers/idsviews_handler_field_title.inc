<?php

class idsviews_handler_field_title extends views_handler_field {

  function option_definition() {
    $options = parent::option_definition();
    $options['display_as_links'] = array('default' => TRUE, 'bool' => TRUE);
    $options['type'] = array('default' => 'separator');
    $options['separator'] = array('default' => ', ');
    return $options;
  }

  function options_form(&$form, &$form_state) {
    $form['display_as_links'] = array(
      '#title' => t('Display as link'), 
      '#type' => 'checkbox', 
      '#default_value' => !empty($this->options['display_as_link']),
    );
    parent::options_form($form, $form_state);
  }

  function render($values) {
    $params = array();
    $link_title = '';
    $view_url = $this->view->get_url();
    $item = $this->get_value($values);
    $tipo = gettype($item);
    if (isset($item->title)) {
      $params['object_id_filter'] = $item->object_id;
      if (!empty($this->options['display_as_links'])) {
        $link_title = l($item->title, $view_url, array('query' => $params));
      }
      else {
        $link_title = $this->sanitize_value($item->title);
      }
    }
    return $link_title;
  }
}
