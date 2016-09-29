<?php

class idsviews_handler_field_authors extends views_handler_field {

  function option_definition() {
    $options = parent::option_definition();
    $options['display_as_links'] = array('default' => TRUE, 'bool' => TRUE);
    $options['type'] = array('default' => 'separator');
    $options['separator'] = array('default' => ', ');
    return $options;
  }

  function options_form(&$form, &$form_state) {
    $form['display_as_links'] = array(
      '#title' => t('Display as links'), 
      '#type' => 'checkbox', 
      '#default_value' => !empty($this->options['display_as_links']),
    );
    $form['type'] = array(
      '#type' => 'radios', 
      '#title' => t('Display type'), 
      '#options' => array(
        'ul' => t('Unordered list'), 
        'ol' => t('Ordered list'), 
        'separator' => t('Simple separator'),
      ), 
      '#default_value' => $this->options['type'],
    );

    $form['separator'] = array(
      '#type' => 'textfield', 
      '#title' => t('Separator'),
      '#default_value' => $this->options['separator'], 
      '#dependency' => array('radio:options[type]' => array('separator')),
    );
    parent::options_form($form, $form_state);
  }

  function render($values) {
    $params = array();
    $view_url = $this->view->get_url();
    $items = array();
    $value = $this->get_value($values);
    if (empty($value[0])) {
      return NULL;
    }
    else {
      foreach ($value as $item) {
        $params['author_filter'] = $item;
        if (!empty($this->options['display_as_links'])) {
          $items[] = l($item, $view_url, array('query' => $params));
        }
        else {
          $items[] = $this->sanitize_value($item);
        }
      }
      if ($this->options['type'] == 'separator') {
        return implode($this->sanitize_value($this->options['separator']), $items);
      }
      else {
        return theme('item_list', 
          array(
          'items' => $items, 
          'title' => NULL, 
          'type' => $this->options['type'],
        ));    
      }
    }
  }
}