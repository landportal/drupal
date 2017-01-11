<?php
/**
 * @file
 * landbook_country.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function landbook_country_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_view_coda|node|landbook_country|form';
  $field_group->group_name = 'group_view_coda';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landbook_country';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Visualizations',
    'weight' => '6',
    'children' => array(
      0 => 'field_indicators',
      1 => 'field_indicator_ranking',
      2 => 'field_indicator_map',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-view-coda field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_view_coda|node|landbook_country|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Visualizations');

  return $field_groups;
}
