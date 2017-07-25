<?php
/**
 * @file
 * ct_project.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ct_project_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_value'.
  $field_bases['field_value'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_value',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
