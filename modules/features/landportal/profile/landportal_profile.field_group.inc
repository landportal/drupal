<?php
/**
 * @file
 * landportal_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function landportal_profile_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about|profile2|main|form';
  $field_group->group_name = 'group_about';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_grp';
  $field_group->data = array(
    'label' => 'More about you',
    'weight' => '1',
    'children' => array(
      0 => 'field_link',
      1 => 'field_email',
      2 => 'group_work',
      3 => 'group_topics_regions',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'More about you',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_about|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_account|user|user|form';
  $field_group->group_name = 'group_account';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_settings';
  $field_group->data = array(
    'label' => 'Account settings',
    'weight' => '4',
    'children' => array(
      0 => 'field_hide_profile',
      1 => 'ckeditor',
      2 => 'timezone',
      3 => 'locale',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-account field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_account|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin_account|user|user|form';
  $field_group->group_name = 'group_admin_account';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin';
  $field_group->data = array(
    'label' => 'Account admin',
    'weight' => '43',
    'children' => array(
      0 => 'og_user_node',
      1 => 'masquerade',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Account admin',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-admin-account field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_admin_account|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin|user|user|form';
  $field_group->group_name = 'group_admin';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'LP admin',
    'weight' => '3',
    'children' => array(
      0 => 'group_seo',
      1 => 'group_admin_account',
      2 => 'group_sync',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_admin|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|profile2|main|default';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '5',
    'children' => array(
      0 => 'field_location',
      1 => 'field_link',
      2 => 'field_email',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-details field-group-div',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_details|profile2|main|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|profile2|main|full';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '4',
    'children' => array(
      0 => 'field_location',
      1 => 'field_link',
      2 => 'field_email',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-details field-group-div',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_details|profile2|main|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landvoc|profile2|main|default';
  $field_group->group_name = 'group_landvoc';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_topics_regions';
  $field_group->data = array(
    'label' => '',
    'weight' => '8',
    'children' => array(
      0 => 'field_related_topics',
      1 => 'field_related_domains',
      2 => 'field_related_themes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-landvoc field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_landvoc|profile2|main|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landvoc|profile2|main|form';
  $field_group->group_name = 'group_landvoc';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_topics_regions';
  $field_group->data = array(
    'label' => '',
    'weight' => '13',
    'children' => array(
      0 => 'field_related_topics',
      1 => 'field_related_domains',
      2 => 'field_related_themes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-landvoc',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_landvoc|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landvoc|profile2|main|full';
  $field_group->group_name = 'group_landvoc';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_topics_regions';
  $field_group->data = array(
    'label' => '',
    'weight' => '9',
    'children' => array(
      0 => 'field_related_topics',
      1 => 'field_related_domains',
      2 => 'field_related_themes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-landvoc',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_landvoc|profile2|main|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|profile2|main|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_grp';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Location',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_location|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_name|profile2|main|form';
  $field_group->group_name = 'group_name';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile';
  $field_group->data = array(
    'label' => '',
    'weight' => '5',
    'children' => array(
      0 => 'field_firstname',
      1 => 'field_lastname',
      2 => 'field_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-name form-inline',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_name|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_name|profile2|main|full';
  $field_group->group_name = 'group_name';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'field_firstname',
      1 => 'field_lastname',
      2 => 'field_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-name',
        'element' => 'h2',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_name|profile2|main|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_name|profile2|main|teaser';
  $field_group->group_name = 'group_name';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_firstname',
      1 => 'field_lastname',
      2 => 'field_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-name field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_name|profile2|main|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_grp|profile2|main|form';
  $field_group->group_name = 'group_profile_grp';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profile',
    'weight' => '3',
    'children' => array(
      0 => 'group_about',
      1 => 'group_profile',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_profile_grp|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_info|profile2|main|form';
  $field_group->group_name = 'group_profile_info';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'More Information',
    'weight' => '4',
    'children' => array(
      0 => 'field_location',
      1 => 'field_link',
      2 => 'field_interests',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'More Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-profile-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_profile_info|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_links|profile2|main|form';
  $field_group->group_name = 'group_profile_links';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '5',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Links',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-profile-links field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_profile_links|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile|profile2|main|form';
  $field_group->group_name = 'group_profile';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_grp';
  $field_group->data = array(
    'label' => 'Public profile',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
      1 => 'field_description',
      2 => 'field_location',
      3 => 'group_name',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Public profile',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_profile|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_seo|user|user|form';
  $field_group->group_name = 'group_seo';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin';
  $field_group->data = array(
    'label' => 'SEO',
    'weight' => '44',
    'children' => array(
      0 => 'metatags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-seo field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_seo|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_settings|user|user|form';
  $field_group->group_name = 'group_settings';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '2',
    'children' => array(
      0 => 'group_lists',
      1 => 'group_account',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Settings',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-settings field-group-tabs',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_settings|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sync|user|user|form';
  $field_group->group_name = 'group_sync';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin';
  $field_group->data = array(
    'label' => 'Sync',
    'weight' => '45',
    'children' => array(
      0 => 'field_mc_users',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sync field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_sync|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_regions|profile2|main|default';
  $field_group->group_name = 'group_topics_regions';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Topics and Regions',
    'weight' => '6',
    'children' => array(
      0 => 'field_geographical_focus',
      1 => 'group_landvoc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-topics-regions field-group-div',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_topics_regions|profile2|main|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_regions|profile2|main|form';
  $field_group->group_name = 'group_topics_regions';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_about';
  $field_group->data = array(
    'label' => 'Topics and Regions',
    'weight' => '9',
    'children' => array(
      0 => 'field_geographical_focus',
      1 => 'group_landvoc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Topics and Regions',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-topics-regions field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_topics_regions|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_regions|profile2|main|full';
  $field_group->group_name = 'group_topics_regions';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Topics and Regions',
    'weight' => '3',
    'children' => array(
      0 => 'field_geographical_focus',
      1 => 'group_landvoc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-topics-regions field-group-div',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_topics_regions|profile2|main|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_work|profile2|main|default';
  $field_group->group_name = 'group_work';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Work',
    'weight' => '8',
    'children' => array(
      0 => 'field_occupation',
      1 => 'field_orgref',
      2 => 'field_position',
      3 => 'field_sector',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-work field-group-div',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_work|profile2|main|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_work|profile2|main|form';
  $field_group->group_name = 'group_work';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_about';
  $field_group->data = array(
    'label' => 'Work',
    'weight' => '4',
    'children' => array(
      0 => 'field_occupation',
      1 => 'field_orgref',
      2 => 'field_position',
      3 => 'field_sector',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Work',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-work field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_work|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_work|user|user|form';
  $field_group->group_name = 'group_work';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_settings';
  $field_group->data = array(
    'label' => 'Work / groups',
    'weight' => '3',
    'children' => array(
      0 => 'og_user_node',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-work field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_work|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Account admin');
  t('Account settings');
  t('Details');
  t('LP admin');
  t('Links');
  t('Location');
  t('More Information');
  t('More about you');
  t('Profile');
  t('Public profile');
  t('SEO');
  t('Settings');
  t('Sync');
  t('Topics and Regions');
  t('Work');
  t('Work / groups');

  return $field_groups;
}
