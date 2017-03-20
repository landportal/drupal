<?php
/**
 * @file
 * landportal_partners.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function landportal_partners_context_default_contexts() {
  $export = array();

  // Import all files present in context directory
  $path = drupal_get_path('module', 'landportal_partners').'/context';
  $files = file_scan_directory($path, '/\.inc$/');
  foreach ($files as $filepath => $file) {
    include_once $filepath;
    $export[$context->name] = $context;
  }
  return $export;
}
