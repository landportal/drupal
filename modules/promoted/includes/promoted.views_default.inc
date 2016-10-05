<?php
/**
 * @file
 * promoted.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function promoted_views_default_views() {
  $export = array();
  $views = array(
    'promoted',
  );
  foreach ($views as $view_name) {
    include drupal_get_path('module', 'landbook') . '/views/' . $view_name . '.inc';
    $export[$view->name] = $view;
  }
  return $export;
}
