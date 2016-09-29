<?php
/**
 * @file 
 */

class idsviews_handler_filter_sector extends views_handler_filter_equality {

  /**
   * Provide simple equality operator.
   *
   * We use this to disallow not equal which we are not allowed to use.
   */
  function operator_options() {
    return array(
      '=' => t('Is equal to'),
    );
  }

  function query($a = null, $b = null) {
    $group = $this->options['group'];
    $filter = $this->options['field'];
    $value = $this->value;
    if (isset($group, $filter, $value)) {
      $this->view->query->add_filter($group, $filter, $value);
    }
  }

} 