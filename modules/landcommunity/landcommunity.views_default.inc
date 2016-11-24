<?php
/**
 * @file
 * landcommunity.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function landcommunity_views_default_views() {
  $export = array();

  foreach (['organizations', 'organizations_overview', 'users'] as $v) {
      include 'views/' . $v . '.inc';
      $export[$view->name] = $view;
  }

  return $export;
}
