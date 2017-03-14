<?php
/**
 * @file
 * landbook.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function landbook_views_default_views() {
    $export = array();

    $path = drupal_get_path('module', 'landbook').'/views/';
    $files = file_scan_directory($path, '/\.inc$/');
    foreach ($files as $filepath => $file) {
      include_once $filepath;
      $export[$view->name] = $view;
    }
    return $export;
}
