<?php
/**
 * @file
 * ct_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ct_events_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|event|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event details',
    'weight' => '3',
    'children' => array(
      0 => 'field_date',
      1 => 'field_image',
      2 => 'field_contact',
      3 => 'field_file',
      4 => 'field_link',
      5 => 'locations',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Event details',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_details|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_regions|node|event|form';
  $field_group->group_name = 'group_topics_regions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Topics and Regions',
    'weight' => '5',
    'children' => array(
      0 => 'field_geographical_focus',
      1 => 'field_related_topics',
      2 => 'field_related_domains',
      3 => 'field_related_themes',
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
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_topics_regions|node|event|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Event details');
  t('Topics and Regions');

  return $field_groups;
}