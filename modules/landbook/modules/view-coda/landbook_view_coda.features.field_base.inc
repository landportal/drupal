<?php
/**
 * @file
 * landbook_view_coda.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function landbook_view_coda_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_view_coda'.
  $field_bases['field_view_coda'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_view_coda',
    'indexes' => array(
      'type' => array(
        0 => 'type',
      ),
    ),
    'locked' => 0,
    'module' => 'landbook_view_coda',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'field_view_coda_vis',
  );

  // Exported field_base: 'field_visualization'.
  $field_bases['field_visualization'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_visualization',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_blank_items' => 1,
      'hide_initial_item' => 0,
      'path' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  return $field_bases;
}
