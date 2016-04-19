<?php
/**
 * @file
 * landlibrary.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function landlibrary_views_default_views() {
  $export = array();

  /* View file in: MODULE/views/VIEWNAME.inc */
  include_once 'views/search.inc';
  $export[$view->name] = $view;
  include_once 'views/admin.inc';
  $export[$view->name] = $view;
  include_once 'views/browse.inc';
  $export[$view->name] = $view;
  include_once 'views/promoted.inc';
  $export[$view->name] = $view;
  include_once 'views/resource_type.inc';
  $export[$view->name] = $view;
  include_once 'views/organizations.inc';
  $export[$view->name] = $view;
  include_once 'views/by_providers.inc';
  $export[$view->name] = $view;

  return $export;
}
