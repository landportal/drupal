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
  $field_group->identifier = 'group_profile_info|profile2|main|form';
  $field_group->group_name = 'group_profile_info';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'More Information',
    'weight' => '6',
    'children' => array(
      0 => 'field_image',
      1 => 'field_description',
      2 => 'field_location',
      3 => 'field_interests',
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
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_links|profile2|main|form';
  $field_group->group_name = 'group_profile_links';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '8',
    'children' => array(
      0 => 'field_link',
    ),
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Links');
  t('More Information');

  return $field_groups;
}
