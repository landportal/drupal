<?php
/**
 * @file
 * landbook_taxonomies.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function landbook_taxonomies_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aside|taxonomy_term|indicators|full';
  $field_group->group_name = 'group_aside';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'indicators';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'field_dataset',
      1 => 'field_view_indicators',
      2 => 'group_details',
      3 => 'group_topics_regions',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-aside',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_aside|taxonomy_term|indicators|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|taxonomy_term|datasets|default';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'datasets';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_details|taxonomy_term|datasets|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|taxonomy_term|datasets|full';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'datasets';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '3',
    'children' => array(
      0 => 'field_orgref',
      1 => 'field_view_dataset',
      2 => 'field_view_indicators',
      3 => 'field_related_aside',
      4 => 'field_image',
      5 => 'group_landvoc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-details',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_details|taxonomy_term|datasets|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|taxonomy_term|datasets|search_index';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'datasets';
  $field_group->mode = 'search_index';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '6',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_details|taxonomy_term|datasets|search_index'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|taxonomy_term|indicators|default';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'indicators';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_id',
      1 => 'field_unit',
      2 => 'field_highlow',
      3 => 'field_view_indicators',
      4 => 'field_observations',
      5 => 'field_related_aside',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-details',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_details|taxonomy_term|indicators|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|taxonomy_term|indicators|full';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'indicators';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_aside';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '7',
    'children' => array(
      0 => 'field_unit',
      1 => 'field_highlow',
      2 => 'field_related_aside',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-details',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_details|taxonomy_term|indicators|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|taxonomy_term|indicators|default';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'indicators';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_dataset',
      1 => 'name_field',
      2 => 'field_view_parent',
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
  $field_groups['group_header|taxonomy_term|indicators|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|taxonomy_term|indicators|full';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'indicators';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'name_field',
      1 => 'field_view_parent',
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
  $field_groups['group_header|taxonomy_term|indicators|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|taxonomy_term|indicators|teaser';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'indicators';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_dataset',
      1 => 'name_field',
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
  $field_groups['group_header|taxonomy_term|indicators|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landvoc|taxonomy_term|datasets|default';
  $field_group->group_name = 'group_landvoc';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'datasets';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_topics_regions';
  $field_group->data = array(
    'label' => '',
    'weight' => '7',
    'children' => array(
      0 => 'field_related_domains',
      1 => 'field_related_topics',
      2 => 'field_related_themes',
    ),
    'format_type' => 'hidden',
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
  $field_groups['group_landvoc|taxonomy_term|datasets|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landvoc|taxonomy_term|datasets|form';
  $field_group->group_name = 'group_landvoc';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'datasets';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_topics_regions';
  $field_group->data = array(
    'label' => '',
    'weight' => '6',
    'children' => array(
      0 => 'field_related_domains',
      1 => 'field_related_topics',
      2 => 'field_related_themes',
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
  $field_groups['group_landvoc|taxonomy_term|datasets|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landvoc|taxonomy_term|datasets|full';
  $field_group->group_name = 'group_landvoc';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'datasets';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => '',
    'weight' => '15',
    'children' => array(
      0 => 'field_related_domains',
      1 => 'field_related_topics',
      2 => 'field_related_themes',
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
  $field_groups['group_landvoc|taxonomy_term|datasets|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landvoc|taxonomy_term|datasets|search_index';
  $field_group->group_name = 'group_landvoc';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'datasets';
  $field_group->mode = 'search_index';
  $field_group->parent_name = 'group_topics_regions';
  $field_group->data = array(
    'label' => '',
    'weight' => '6',
    'children' => array(
      0 => 'field_related_domains',
      1 => 'field_related_topics',
      2 => 'field_related_themes',
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
  $field_groups['group_landvoc|taxonomy_term|datasets|search_index'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landvoc|taxonomy_term|indicators|default';
  $field_group->group_name = 'group_landvoc';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'indicators';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_topics_regions';
  $field_group->data = array(
    'label' => '',
    'weight' => '29',
    'children' => array(
      0 => 'field_related_domains',
      1 => 'field_related_topics',
      2 => 'field_related_themes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-landvoc',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_landvoc|taxonomy_term|indicators|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landvoc|taxonomy_term|indicators|full';
  $field_group->group_name = 'group_landvoc';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'indicators';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_topics_regions';
  $field_group->data = array(
    'label' => '',
    'weight' => '12',
    'children' => array(
      0 => 'field_related_domains',
      1 => 'field_related_topics',
      2 => 'field_related_themes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-landvoc',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_landvoc|taxonomy_term|indicators|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landvoc|taxonomy_term|indicators|teaser';
  $field_group->group_name = 'group_landvoc';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'indicators';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_topics_regions';
  $field_group->data = array(
    'label' => '',
    'weight' => '15',
    'children' => array(
      0 => 'field_related_domains',
      1 => 'field_related_topics',
      2 => 'field_related_themes',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_landvoc|taxonomy_term|indicators|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|taxonomy_term|datasets|default';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'datasets';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '3',
    'children' => array(
      0 => 'description_field',
      1 => 'field_view_indicators',
    ),
    'format_type' => 'hidden',
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
  $field_groups['group_main|taxonomy_term|datasets|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|taxonomy_term|datasets|full';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'datasets';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'description_field',
      1 => 'group_topics_regions',
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
  $field_groups['group_main|taxonomy_term|datasets|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|taxonomy_term|indicators|default';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'indicators';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'description_field',
      1 => 'field_related_blocks',
      2 => 'group_topics_regions',
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
  $field_groups['group_main|taxonomy_term|indicators|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|taxonomy_term|indicators|full';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'indicators';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'description_field',
      1 => 'field_visualization',
      2 => 'field_observations',
      3 => 'field_related_blocks',
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
  $field_groups['group_main|taxonomy_term|indicators|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_settings|taxonomy_term|datasets|form';
  $field_group->group_name = 'group_settings';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'datasets';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '4',
    'children' => array(
      0 => 'field_id',
      1 => 'field_view_dataset',
      2 => 'field_view_indicators',
      3 => 'field_view_latest',
      4 => 'field_related_blocks',
      5 => 'field_related_aside',
      6 => 'field_doc_licencing',
      7 => 'field_license_text',
      8 => 'field_image',
      9 => '_add_existing_field',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-settings field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_settings|taxonomy_term|datasets|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_settings|taxonomy_term|indicators|form';
  $field_group->group_name = 'group_settings';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'indicators';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '10',
    'children' => array(
      0 => 'field_view_indicators',
      1 => 'field_observations',
      2 => 'field_related_blocks',
      3 => 'field_view_parent',
      4 => 'field_related_aside',
      5 => 'field_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-settings field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_settings|taxonomy_term|indicators|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_regions|taxonomy_term|datasets|default';
  $field_group->group_name = 'group_topics_regions';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'datasets';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '14',
    'children' => array(
      0 => 'group_landvoc',
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
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_topics_regions|taxonomy_term|datasets|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_regions|taxonomy_term|datasets|form';
  $field_group->group_name = 'group_topics_regions';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'datasets';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Topics and Regions',
    'weight' => '2',
    'children' => array(
      0 => 'group_landvoc',
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
  $field_groups['group_topics_regions|taxonomy_term|datasets|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_regions|taxonomy_term|datasets|full';
  $field_group->group_name = 'group_topics_regions';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'datasets';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => '',
    'weight' => '9',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-topics-regions',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_topics_regions|taxonomy_term|datasets|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_regions|taxonomy_term|datasets|search_index';
  $field_group->group_name = 'group_topics_regions';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'datasets';
  $field_group->mode = 'search_index';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '3',
    'children' => array(
      0 => 'group_landvoc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-topics-regions',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_topics_regions|taxonomy_term|datasets|search_index'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_regions|taxonomy_term|datasets|teaser';
  $field_group->group_name = 'group_topics_regions';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'datasets';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '3',
    'children' => array(
      0 => 'field_related_domains',
      1 => 'field_related_themes',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-topics-regions field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_topics_regions|taxonomy_term|datasets|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_regions|taxonomy_term|indicators|default';
  $field_group->group_name = 'group_topics_regions';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'indicators';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => '',
    'weight' => '29',
    'children' => array(
      0 => 'group_landvoc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-topics-regions',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_topics_regions|taxonomy_term|indicators|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_regions|taxonomy_term|indicators|form';
  $field_group->group_name = 'group_topics_regions';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'indicators';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Topics and Regions',
    'weight' => '6',
    'children' => array(
      0 => 'field_related_domains',
      1 => 'field_related_topics',
      2 => 'field_related_themes',
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
  $field_groups['group_topics_regions|taxonomy_term|indicators|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_regions|taxonomy_term|indicators|full';
  $field_group->group_name = 'group_topics_regions';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'indicators';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_aside';
  $field_group->data = array(
    'label' => '',
    'weight' => '6',
    'children' => array(
      0 => 'group_landvoc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-topics-regions',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_topics_regions|taxonomy_term|indicators|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_regions|taxonomy_term|indicators|teaser';
  $field_group->group_name = 'group_topics_regions';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'indicators';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '12',
    'children' => array(
      0 => 'group_landvoc',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_topics_regions|taxonomy_term|indicators|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vis|taxonomy_term|datasets|full';
  $field_group->group_name = 'group_vis';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'datasets';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '4',
    'children' => array(
      0 => 'field_visualization',
      1 => 'field_related_blocks',
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
  $field_groups['group_vis|taxonomy_term|datasets|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vis|taxonomy_term|indicators|full';
  $field_group->group_name = 'group_vis';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'indicators';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-sm-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_vis|taxonomy_term|indicators|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Details');
  t('Settings');
  t('Topics and Regions');

  return $field_groups;
}
