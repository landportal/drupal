<?php

class idsviews_handler_filter_text extends views_handler_filter_equality {
  /**
   * Provide simple equality operator
   */
  function operator_options() {
    return array(
      '=' => t('Is equal to'),
    );
  }

  function query() {
    $group = $this->options['group'];
    $filter = $this->options['field'];
    $value = $this->value;
    if (isset($group, $filter, $value)) {
      $this->view->query->add_filter($group, $filter, $value);
    }
  }
}
