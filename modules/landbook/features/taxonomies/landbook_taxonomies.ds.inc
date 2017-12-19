<?php
/**
 * @file
 * landbook_taxonomies.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function landbook_taxonomies_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'header';
  $ds_view_mode->label = 'Header';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['header'] = $ds_view_mode;

  return $export;
}
