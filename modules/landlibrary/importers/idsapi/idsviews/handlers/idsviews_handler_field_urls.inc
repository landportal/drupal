<?php

class idsviews_handler_field_urls extends views_handler_field {

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
    $items = array();
    $value = $this->get_value($values);
    foreach ($value as $item) {
      if (!empty($this->options['display_as_links'])) {
        $items[] = l($this->sanitize_value($item), $item, array('html' => TRUE));
      }
      else {
        $items[] = $this->sanitize_value($item, 'url');
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