<?php
/**
 * @file
 * landportal_mailchimp.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function landportal_mailchimp_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_mc_legend'.
  $field_bases['field_mc_legend'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_mc_legend',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'mailchimp_lists',
    'settings' => array(
      'double_opt_in' => 0,
      'entity_translation_sync' => FALSE,
      'mc_list_id' => '9f6554a879',
      'profile2_private' => FALSE,
      'unsubscribe_action' => 'unsubscribe',
    ),
    'translatable' => 0,
    'type' => 'mailchimp_lists_subscription',
  );

  // Exported field_base: 'field_mc_lod'.
  $field_bases['field_mc_lod'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_mc_lod',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'mailchimp_lists',
    'settings' => array(
      'double_opt_in' => 0,
      'entity_translation_sync' => FALSE,
      'mc_list_id' => '6b1a5dd742',
      'profile2_private' => FALSE,
      'unsubscribe_action' => 'unsubscribe',
    ),
    'translatable' => 0,
    'type' => 'mailchimp_lists_subscription',
  );

  // Exported field_base: 'field_mc_newsletter'.
  $field_bases['field_mc_newsletter'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_mc_newsletter',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'mailchimp_lists',
    'settings' => array(
      'double_opt_in' => 0,
      'entity_translation_sync' => FALSE,
      'mc_list_id' => '8b8de3bf56',
      'profile2_private' => FALSE,
      'unsubscribe_action' => 'unsubscribe',
    ),
    'translatable' => 0,
    'type' => 'mailchimp_lists_subscription',
  );

  // Exported field_base: 'field_mc_sdgs'.
  $field_bases['field_mc_sdgs'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_mc_sdgs',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'mailchimp_lists',
    'settings' => array(
      'double_opt_in' => 0,
      'entity_translation_sync' => FALSE,
      'mc_list_id' => '7cbf3af8ba',
      'profile2_private' => FALSE,
      'unsubscribe_action' => 'unsubscribe',
    ),
    'translatable' => 0,
    'type' => 'mailchimp_lists_subscription',
  );

  // Exported field_base: 'field_mc_users'.
  $field_bases['field_mc_users'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_mc_users',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'mailchimp_lists',
    'settings' => array(
      'double_opt_in' => 0,
      'entity_translation_sync' => FALSE,
      'mc_list_id' => '7af51d3d66',
      'profile2_private' => FALSE,
      'unsubscribe_action' => 'unsubscribe',
    ),
    'translatable' => 0,
    'type' => 'mailchimp_lists_subscription',
  );

  return $field_bases;
}
