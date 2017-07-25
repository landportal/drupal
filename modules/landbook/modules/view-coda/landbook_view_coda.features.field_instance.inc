<?php
/**
 * @file
 * landbook_view_coda.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function landbook_view_coda_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_visualization-field_indicators'.
  $field_instances['field_collection_item-field_visualization-field_indicators'] = array(
    'bundle' => 'field_visualization',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_indicators',
    'label' => 'Indicators',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_visualization-field_view_coda'.
  $field_instances['field_collection_item-field_visualization-field_view_coda'] = array(
    'bundle' => 'field_visualization',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'blockreference',
        'settings' => array(
          'show_empty_blocks' => FALSE,
        ),
        'type' => 'blockreference_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_view_coda',
    'label' => 'View Coda',
    'required' => 1,
    'settings' => array(
      'blockreference_modules' => array(
        'addtoany' => 0,
        'apachesolr_search' => 0,
        'block' => 0,
        'calendar' => 0,
        'comment' => 0,
        'context_ui' => 0,
        'diff' => 0,
        'facetapi' => 0,
        'global_filter' => 0,
        'hybridauth' => 0,
        'jump_menu' => 0,
        'landbook' => 0,
        'landbook_vggt' => 0,
        'landbook_view_coda' => 'landbook_view_coda',
        'landbook_vis_map' => 'landbook_vis_map',
        'landbook_vis_table_indicators' => 0,
        'landportal_blocks' => 0,
        'landportal_partners' => 0,
        'locale' => 0,
        'login_one_time' => 0,
        'logintoboggan' => 0,
        'mailchimp_signup' => 0,
        'masquerade' => 0,
        'menu' => 0,
        'node' => 0,
        'og_menu' => 0,
        'pcp' => 0,
        'print' => 0,
        'search' => 0,
        'shortcut' => 0,
        'system' => 0,
        'twitter_block' => 0,
        'user' => 0,
        'views' => 0,
        'webform' => 0,
      ),
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Indicators');
  t('View Coda');

  return $field_instances;
}
