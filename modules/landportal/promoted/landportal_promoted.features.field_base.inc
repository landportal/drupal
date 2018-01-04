<?php
/**
 * @file
 * landportal_promoted.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function landportal_promoted_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_featured'.
  $field_bases['field_featured'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_featured',
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
          'landlibrary_resource' => 'landlibrary_resource',
          'news' => 'news',
          'page' => 'page',
          'partners_page' => 'partners_page',
        ),
      ),
      'profile2_private' => FALSE,
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_promoted'.
  $field_bases['field_promoted'] = array(
    'active' => 1,
    'cardinality' => 4,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_promoted',
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
          'dataset' => 'dataset',
          'debate' => 'debate',
          'event' => 'event',
          'landbook_country' => 'landbook_country',
          'news' => 'news',
          'page' => 'page',
          'partners_page' => 'partners_page',
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

  return $field_bases;
}
