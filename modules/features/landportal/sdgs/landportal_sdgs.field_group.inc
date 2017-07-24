<?php
/**
 * @file
 * landportal_sdgs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function landportal_sdgs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aside|node|sdgi|default';
  $field_group->group_name = 'group_aside';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdgi';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '7',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_aside|node|sdgi|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|sdgi|default';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdgi';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Indicator details',
    'weight' => '2',
    'children' => array(
      0 => 'field_contact',
      1 => 'field_link',
      2 => 'field_milestone',
      3 => 'field_orgref',
      4 => 'field_partners',
      5 => 'field_sdgs_tier',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Indicator details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-sm-4 indicator-table',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_details|node|sdgi|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_col|node|sdgi|default';
  $field_group->group_name = 'group_main_col';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdgi';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-sm-8',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_main_col|node|sdgi|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|sdgi|default';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdgi';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '8',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_main|node|sdgi|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_portal_content|node|sdgi|default';
  $field_group->group_name = 'group_portal_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdgi';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related LandPortal contents',
    'weight' => '4',
    'children' => array(
      0 => 'field_noderef',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Related LandPortal contents',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-portal-content field-group-div col-sm-8',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_portal_content|node|sdgi|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rel|node|sdgi|default';
  $field_group->group_name = 'group_rel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdgi';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '5',
    'children' => array(
      0 => 'field_twitter',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Related Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-rel col-sm-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_rel|node|sdgi|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_regions|node|sdgi|default';
  $field_group->group_name = 'group_topics_regions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdgi';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '11',
    'children' => array(
      0 => 'field_geographical_focus',
      1 => 'field_related_domains',
      2 => 'field_related_themes',
      3 => 'field_related_topics',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-topics-regions',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_topics_regions|node|sdgi|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vis|node|sdgi|default';
  $field_group->group_name = 'group_vis';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdgi';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Visualizations',
    'weight' => '3',
    'children' => array(
      0 => 'field_indicators',
      1 => 'field_paragraphs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Visualizations',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-sm-8',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_vis|node|sdgi|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Indicator details');
  t('Related Content');
  t('Related LandPortal contents');
  t('Visualizations');

  return $field_groups;
}