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
    'weight' => '8',
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
    'weight' => '3',
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
  $field_group->identifier = 'group_header|node|sdgi|default';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdgi';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_sdg',
      1 => 'title_field',
      2 => 'field_image',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-header field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_header|node|sdgi|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|sdgi|listing';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdgi';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'field_image',
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
  $field_groups['group_header|node|sdgi|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|sdgi|teaser';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdgi';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'field_image',
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
  $field_groups['group_header|node|sdgi|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|sdgi|form';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdgi';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'UN Info',
    'weight' => '6',
    'children' => array(
      0 => 'field_contact',
      1 => 'field_orgref',
      2 => 'field_partners',
      3 => 'field_sdgs_tier',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'UN Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_info|node|sdgi|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landvoc|node|sdgi|form';
  $field_group->group_name = 'group_landvoc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdgi';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_topics_regions';
  $field_group->data = array(
    'label' => '',
    'weight' => '115',
    'children' => array(
      0 => 'field_related_domains',
      1 => 'field_related_themes',
      2 => 'field_related_topics',
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
  $field_groups['group_landvoc|node|sdgi|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_col|node|sdgi|default';
  $field_group->group_name = 'group_main_col';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdgi';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
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
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_paragraphs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-main',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
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
    'label' => 'Related Land Portal contents',
    'weight' => '6',
    'children' => array(
      0 => 'field_noderef',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => 'Related Land Portal contents',
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
  $field_group->identifier = 'group_related|node|sdgi|form';
  $field_group->group_name = 'group_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdgi';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '7',
    'children' => array(
      0 => 'field_link',
      1 => 'field_noderef',
      2 => 'field_related_blocks',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Related content',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-related field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_related|node|sdgi|form'] = $field_group;

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
    'weight' => '7',
    'children' => array(
      0 => 'field_twitter',
    ),
    'format_type' => 'hidden',
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
  $field_group->identifier = 'group_settings|node|sdgi|form';
  $field_group->group_name = 'group_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdgi';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '8',
    'children' => array(
      0 => 'field_indicators',
      1 => 'field_sdg',
      2 => 'field_sdg_header',
      3 => 'field_twitter',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-settings field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_settings|node|sdgi|form'] = $field_group;

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
    'weight' => '9',
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
  $field_group->identifier = 'group_topics_regions|node|sdgi|form';
  $field_group->group_name = 'group_topics_regions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdgi';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Topics and Regions',
    'weight' => '3',
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
  $field_groups['group_topics_regions|node|sdgi|form'] = $field_group;

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
    'weight' => '4',
    'children' => array(
      0 => 'field_visualization',
      1 => 'field_related_blocks',
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
  t('Related Land Portal contents');
  t('Related content');
  t('Settings');
  t('Topics and Regions');
  t('UN Info');
  t('Visualizations');

  return $field_groups;
}
