<?php
/**
 * @file
 * landportal_sdgs_taxonomies.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function landportal_sdgs_taxonomies_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|taxonomy_term|sdgs|teaser';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'sdgs';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_id',
      1 => 'field_sdgs_type',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'element' => 'header',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
        'required_fields' => 1,
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_header|taxonomy_term|sdgs|teaser'] = $field_group;

  return $field_groups;
}
