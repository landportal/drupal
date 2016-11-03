<?php
/**
 * @file
 * landportal_mailchimp.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function landportal_mailchimp_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_mc_legend'.
  $field_instances['user-user-field_mc_legend'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'subscribe' => 0,
        'is_default' => TRUE,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mailchimp_lists',
        'settings' => array(
          'interest_groups' => array(),
          'show_interest_groups' => FALSE,
        ),
        'type' => 'mailchimp_lists_subscribe_default',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_mc_legend',
    'label' => 'LEGEND Bulletin',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'interest_groups_title' => 'Interest Groups',
      'mergefields' => array(
        'EMAIL' => '[user:mail]',
        'FNAME' => '',
        'LNAME' => '',
        'MMERGE3' => '',
        'MMERGE4' => '',
        'MMERGE5' => '',
        'MMERGE6' => '',
        'MMERGE7' => '',
        'advanced' => 0,
      ),
      'options' => array(
        'interest_groups' => array(),
        'subscribe' => FALSE,
      ),
      'show_interest_groups' => 0,
      'unsubscribe_on_delete' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mailchimp_lists',
      'settings' => array(),
      'type' => 'mailchimp_lists_select',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'user-user-field_mc_newsletter'.
  $field_instances['user-user-field_mc_newsletter'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'subscribe' => 1,
        'interest_groups' => array(
          'd31198d278' => array(
            '823ccc98a6' => 0,
          ),
          'de34aaa8f6' => array(
            '47a1376805' => 0,
            '81e85f76e5' => 0,
            'c735b02f09' => 'c735b02f09',
            'ca9ec347d3' => 0,
          ),
        ),
        'is_default' => TRUE,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mailchimp_lists',
        'settings' => array(
          'interest_groups' => array(),
          'show_interest_groups' => FALSE,
        ),
        'type' => 'mailchimp_lists_subscribe_default',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_mc_newsletter',
    'label' => 'Land Portal Newsletter',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'interest_groups_title' => 'Subscribe to',
      'mergefields' => array(
        'EMAIL' => '[user:mail]',
        'FNAME' => '[user:profile-main:field-firstname]',
        'LNAME' => '[user:profile-main:field-lastname]',
        'MMERGE3' => '',
        'MMERGE4' => '',
        'MMERGE5' => '',
        'MMERGE6' => '',
        'MMERGE7' => '',
        'MMERGE8' => '',
        'MMERGE9' => '',
        'MMERGE10' => '',
        'MMERGE11' => '',
        'MMERGE12' => '',
        'MMERGE13' => '',
        'MMERGE14' => '',
        'MMERGE15' => '',
        'MMERGE16' => '',
        'MMERGE17' => '',
        'MMERGE18' => '',
        'MMERGE19' => '',
        'MMERGE20' => '',
        'MMERGE21' => '',
        'advanced' => 0,
      ),
      'options' => array(
        'interest_groups' => array(),
        'subscribe' => FALSE,
      ),
      'show_interest_groups' => 1,
      'unsubscribe_on_delete' => 1,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mailchimp_lists',
      'settings' => array(),
      'type' => 'mailchimp_lists_select',
      'weight' => 13,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('LEGEND Bulletin');
  t('Land Portal Newsletter');

  return $field_instances;
}
