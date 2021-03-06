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
  $field_group->identifier = 'group_aside|node|thematic_narrative|default';
  $field_group->group_name = 'group_aside';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'thematic_narrative';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-aside field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_aside|node|thematic_narrative|default'] = $field_group;

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
    'weight' => '4',
    'children' => array(
      0 => 'field_orgref',
      1 => 'language',
      2 => 'field_file',
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
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|thematic_narrative|default';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'thematic_narrative';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'field_landvoc_to',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-header',
        'element' => 'header',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_header|node|thematic_narrative|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|thematic_narrative|listing';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'thematic_narrative';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'field_landvoc_to',
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
      ),
    ),
  );
  $field_groups['group_header|node|thematic_narrative|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|thematic_narrative|teaser';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'thematic_narrative';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'field_landvoc_to',
      2 => 'field_image',
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
      ),
    ),
  );
  $field_groups['group_header|node|thematic_narrative|teaser'] = $field_group;

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
    'weight' => '7',
    'children' => array(
      0 => 'field_indicators',
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
  t('Visualizations');

  return $field_groups;
}
