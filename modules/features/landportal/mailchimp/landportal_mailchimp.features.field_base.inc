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
      'unsubscribe_action' => 'remove',
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
      'unsubscribe_action' => 'remove',
    ),
    'translatable' => 0,
    'type' => 'mailchimp_lists_subscription',
  );

  return $field_bases;
}
