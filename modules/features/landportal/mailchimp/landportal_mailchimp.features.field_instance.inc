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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
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
        'FNAME' => '[user:profile-main:field-firstname]',
        'LNAME' => '[user:profile-main:field-lastname]',
        'MMERGE3' => '',
        'advanced' => 0,
      ),
      'options' => array(
        'interest_groups' => array(),
        'subscribe' => FALSE,
      ),
      'show_interest_groups' => 0,
      'unsubscribe_on_delete' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mailchimp_lists',
      'settings' => array(),
      'type' => 'mailchimp_lists_select',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'user-user-field_mc_lod'.
  $field_instances['user-user-field_mc_lod'] = array(
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_mc_lod',
    'label' => 'Linked Open Data (LOD) News',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'interest_groups_title' => 'Interest Groups',
      'mergefields' => array(
        'EMAIL' => '[user:mail]',
        'FNAME' => '[user:profile-main:field-firstname]',
        'LNAME' => '[user:profile-main:field-lastname]',
        'advanced' => 0,
      ),
      'options' => array(
        'interest_groups' => array(),
        'subscribe' => FALSE,
      ),
      'show_interest_groups' => 0,
      'unsubscribe_on_delete' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mailchimp_lists',
      'settings' => array(),
      'type' => 'mailchimp_lists_select',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'user-user-field_mc_newsletter'.
  $field_instances['user-user-field_mc_newsletter'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'subscribe' => 1,
        'interest_groups' => array(
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
        'weight' => 10,
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
      'interest_groups_title' => 'Preferences',
      'mergefields' => array(
        'CLIST' => '[user:profile-main:field-location:country_name]',
        'EMAIL' => '[user:mail]',
        'FNAME' => '[user:profile-main:field-firstname]',
        'LNAME' => '[user:profile-main:field-lastname]',
        'MMERGE6' => '',
        'MMERGE12' => '',
        'advanced' => 1,
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
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'user-user-field_mc_sdgs'.
  $field_instances['user-user-field_mc_sdgs'] = array(
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_mc_sdgs',
    'label' => 'Land and the Sustainable Development Goals (SDGs)',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'interest_groups_title' => 'Interest Groups',
      'mergefields' => array(
        'EMAIL' => '[user:mail]',
        'FNAME' => '[user:profile-main:field-firstname]',
        'LNAME' => '[user:profile-main:field-lastname]',
        'advanced' => 0,
      ),
      'options' => array(
        'interest_groups' => array(),
        'subscribe' => FALSE,
      ),
      'show_interest_groups' => 0,
      'unsubscribe_on_delete' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mailchimp_lists',
      'settings' => array(),
      'type' => 'mailchimp_lists_select',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'user-user-field_mc_users'.
  $field_instances['user-user-field_mc_users'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'subscribe' => 1,
        'interest_groups' => array(
          '7f9a13b9f3' => array(
            '8e4c2fcd12' => 0,
            '14b097b40a' => '14b097b40a',
            'cae021e16e' => 0,
            'f474c3eaa3' => 0,
          ),
          'c1340ebfba' => array(
            '7beb2de1f2' => 0,
            '8a7dbaf285' => '8a7dbaf285',
            'a0e1a92145' => 0,
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_mc_users',
    'label' => 'MC Users',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'interest_groups_title' => 'Interest Groups',
      'mergefields' => array(
        'CLIST' => '[user:profile-main:field-location:country_name]',
        'EMAIL' => '[user:mail]',
        'FNAME' => '[user:profile-main:field-firstname]',
        'LNAME' => '[user:profile-main:field-lastname]',
        'advanced' => 1,
      ),
      'options' => array(
        'interest_groups' => array(),
        'subscribe' => FALSE,
      ),
      'show_interest_groups' => 1,
      'unsubscribe_on_delete' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mailchimp_lists',
      'settings' => array(),
      'type' => 'mailchimp_lists_select',
      'weight' => 44,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('LEGEND Bulletin');
  t('Land Portal Newsletter');
  t('Land and the Sustainable Development Goals (SDGs)');
  t('Linked Open Data (LOD) News');
  t('MC Users');

  return $field_instances;
}
