<?php
/**
 * @file
 * rel25.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function rel25_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page-field_visualization'.
  $field_instances['node-page-field_visualization'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 1,
          'edit' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 3,
      ),
      'listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_visualization',
    'label' => 'Land Book Indicators',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_collection',
      'settings' => array(
        'collapsed' => 1,
        'field_as_label' => 'title_field',
        'last_item_collapsed' => 1,
        'new_item_open' => 1,
        'replace_label' => 0,
      ),
      'type' => 'field_collection_embed',
      'weight' => 12,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Land Book Indicators');

  return $field_instances;
}
