<?php
/**
 * @file
 * landportal_related.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function landportal_related_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_noderef'.
  $field_bases['field_noderef'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_noderef',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'blog_post' => 'blog_post',
          'debate' => 'debate',
          'event' => 'event',
          'landbook_country' => 'landbook_country',
          'landlibrary_resource' => 'landlibrary_resource',
          'news' => 'news',
          'organization' => 'organization',
          'page' => 'page',
          'partners' => 'partners',
          'sdgi' => 'sdgi',
          'thematic_narrative' => 'thematic_narrative',
        ),
      ),
      'profile2_private' => FALSE,
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_related_blocks'.
  $field_bases['field_related_blocks'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_related_blocks',
    'indexes' => array(
      'moddelta' => array(
        0 => 'moddelta',
      ),
    ),
    'locked' => 0,
    'module' => 'blockreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'profile2_private' => FALSE,
      'referenceable_modules' => array(),
    ),
    'translatable' => 0,
    'type' => 'blockreference',
  );

  return $field_bases;
}
