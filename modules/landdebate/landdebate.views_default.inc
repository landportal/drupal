<?php
/**
 * @file
 * landdebate.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function landdebate_views_default_views() {
    $export = array();

    $path = drupal_get_path('module', 'landdebate').'/views/';
    $files = file_scan_directory($path, '/\.inc$/');
    foreach ($files as $filepath => $file) {
      include_once $filepath;
      $export[$view->name] = $view;
    }
    return $export;
}
