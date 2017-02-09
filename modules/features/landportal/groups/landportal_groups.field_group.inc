<?php
/**
 * @file
 * landportal_groups.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function landportal_groups_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|partners_page|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'partners_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '3',
    'children' => array(
      0 => 'og_group_ref',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-details field-group-fieldset group-aside',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_details|node|partners_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Details');

  return $field_groups;
}