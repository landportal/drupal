<?php
/**
 * @file
 * ct_thematic_narrative.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ct_thematic_narrative_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|thematic_narrative|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'thematic_narrative';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About the narrative',
    'weight' => '3',
    'children' => array(
      0 => 'field_orgref',
      1 => 'language',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'About the narrative',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-aside',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_details|node|thematic_narrative|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_regions|node|thematic_narrative|default';
  $field_group->group_name = 'group_topics_regions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'thematic_narrative';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Landvoc concepts',
    'weight' => '5',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => 'Landvoc concepts',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-topics-regions field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_topics_regions|node|thematic_narrative|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_view_coda|node|thematic_narrative|form';
  $field_group->group_name = 'group_view_coda';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'thematic_narrative';
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
      'label' => 'Visualizations',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'lp-2c',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_view_coda|node|thematic_narrative|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('About the narrative');
  t('Landvoc concepts');
  t('Visualizations');

  return $field_groups;
}
