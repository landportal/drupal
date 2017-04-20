<?php
/**
 * Override Drupal default views
 */

function landportal_admin_views_default_views_alter(&$views) {
    $export = array();
    $path = drupal_get_path('module', 'landportal_admin').'/views';
    $files = file_scan_directory($path, '/\.inc$/');
    foreach ($files as $filepath => $file) {
      include_once $filepath;
      $export[$view->name] = $view;
    }
    return $export;
}
