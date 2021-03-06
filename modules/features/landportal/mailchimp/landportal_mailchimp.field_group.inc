<?php
/**
 * @file
 * landportal_mailchimp.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function landportal_mailchimp_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lists|user|user|form';
  $field_group->group_name = 'group_lists';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_settings';
  $field_group->data = array(
    'label' => 'Mailing lists',
    'weight' => '3',
    'children' => array(
      0 => 'field_mc_legend',
      1 => 'field_mc_lod',
      2 => 'field_mc_sdgs',
      3 => 'field_mc_newsletter',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_lists|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Mailing lists');

  return $field_groups;
}
