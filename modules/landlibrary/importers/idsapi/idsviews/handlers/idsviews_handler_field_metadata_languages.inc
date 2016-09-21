<?php
/**
 * @file 
 */

class idsviews_handler_field_metadata_languages extends views_handler_field {

  function option_definition(){
    $definition = parent::option_definition();
    $definition['type'] = array('default' => 'separator');
    $definition['separator'] = array('default' => ', ');
    return $definition;
  }

  function options_form(&$form, &$form_state){
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
  /**
   * Render the languages for the document as a list.
   */
  function render($values){
    $items = array();
    if (!empty($values->metadata_languages)){
      foreach ($values->metadata_languages as $language){
        $items[] = $language;
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