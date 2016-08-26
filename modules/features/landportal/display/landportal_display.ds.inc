<?php
/**
 * @file
 * landportal_display.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function landportal_display_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'search_index';
  $ds_view_mode->label = 'Search index';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
    'profile2' => 'profile2',
  );
  $export['search_index'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser';
  $ds_view_mode->label = 'Teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
    'profile2' => 'profile2',
  );
  $export['teaser'] = $ds_view_mode;

  return $export;
}
