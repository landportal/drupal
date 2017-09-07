<?php
/**
 * @file
 * landportal_related.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function landportal_related_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page-field_related_blocks'.
  $field_instances['node-page-field_related_blocks'] = array(
    'bundle' => 'page',
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
        'weight' => 5,
      ),
      'listing' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_blocks',
    'label' => 'Related blocks',
    'required' => 0,
    'settings' => array(
      'blockreference_modules' => array(
        'addtoany' => 0,
        'block' => 'block',
        'calendar' => 0,
        'comment' => 0,
        'context_ui' => 0,
        'devel' => 0,
        'diff' => 0,
        'facetapi' => 0,
        'global_filter' => 0,
        'hybridauth' => 0,
        'jump_menu' => 0,
        'landbook' => 0,
        'landbook_vggt' => 0,
        'landbook_view_coda' => 0,
        'landbook_vis_map' => 0,
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
        'views' => 'views',
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
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Related blocks');

  return $field_instances;
}
