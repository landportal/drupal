<?php
/**
 * @file
 * landlibrary_resource.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function landlibrary_resource_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_access|node|landlibrary_resource|default';
  $field_group->group_name = 'group_access';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_left';
  $field_group->data = array(
    'label' => '',
    'weight' => '6',
    'children' => array(
      0 => 'field_doc_is_shown_by',
      1 => 'field_doc_is_shown_by_file',
      2 => 'field_local_file_url',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-details',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_access|node|landlibrary_resource|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin|node|landlibrary_resource|form';
  $field_group->group_name = 'group_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication options',
    'weight' => '9',
    'children' => array(
      0 => 'field_noderef',
      1 => 'language',
      2 => 'group_deprecated',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Publication options',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_admin|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_authors|node|landlibrary_resource|form';
  $field_group->group_name = 'group_authors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Author(s) and Publisher(s)',
    'weight' => '6',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Author(s) and Publisher(s)',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-editors-pub field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_authors|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_data_provider|node|landlibrary_resource|default';
  $field_group->group_name = 'group_data_provider';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_right';
  $field_group->data = array(
    'label' => 'Data provider',
    'weight' => '8',
    'children' => array(
      0 => 'field_doc_provider',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Data provider',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-data-provider',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_data_provider|node|landlibrary_resource|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_deprecated|node|landlibrary_resource|form';
  $field_group->group_name = 'group_deprecated';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin';
  $field_group->data = array(
    'label' => 'Deprecated',
    'weight' => '9',
    'children' => array(
      0 => 'field_doc_is_part_of',
      1 => 'field_doc_publisher_place',
      2 => 'field_doc_relation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Deprecated',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'hidden',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_deprecated|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_detailresource|node|landlibrary_resource|form';
  $field_group->group_name = 'group_detailresource';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_resource';
  $field_group->data = array(
    'label' => 'More details about resource',
    'weight' => '8',
    'children' => array(
      0 => 'field_doc_alt_title',
      1 => 'field_doc_identifier',
      2 => 'field_doc_pagination',
      3 => 'field_duration',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'More details about resource',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-detailresource field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_detailresource|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_detailsaccessresource|node|landlibrary_resource|form';
  $field_group->group_name = 'group_detailsaccessresource';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_doc_physical_chars';
  $field_group->data = array(
    'label' => 'More details about access to resource',
    'weight' => '3',
    'children' => array(
      0 => 'field_doc_is_shown_at',
      1 => 'field_doc_is_shown_by_file',
      2 => 'field_local_file_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'More details about access to resource',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-detailsaccessresource field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_detailsaccessresource|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|landlibrary_resource|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_resource';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '10',
    'children' => array(
      0 => 'field_doc_creation_date',
      1 => 'field_doc_identifier',
      2 => 'field_doc_pagination',
      3 => 'field_duration',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-details col-sm-6 field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_details|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_physical_chars|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_physical_chars';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_resource';
  $field_group->data = array(
    'label' => 'Access to the resource',
    'weight' => '9',
    'children' => array(
      0 => 'field_doc_is_shown_at',
      1 => 'field_doc_is_shown_by',
      2 => 'field_doc_is_shown_by_file',
      3 => 'field_local_file_url',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Access to the resource',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'col-sm-6',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_doc_physical_chars|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_rights|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_rights';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publishing rights',
    'weight' => '9',
    'children' => array(
      0 => 'field_doc_copyrights_statement',
      1 => 'field_doc_licencing',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Publishing rights',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-doc-rights field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_doc_rights|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editors_pub|node|landlibrary_resource|default';
  $field_group->group_name = 'group_editors_pub';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_right';
  $field_group->data = array(
    'label' => 'Authors and Publishers',
    'weight' => '7',
    'children' => array(
      0 => 'field_doc_publisher',
      1 => 'field_orgref',
      2 => 'field_doc_people',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Authors and Publishers',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-editors-pub',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_editors_pub|node|landlibrary_resource|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editors_pub|node|landlibrary_resource|listing';
  $field_group->group_name = 'group_editors_pub';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '8',
    'children' => array(
      0 => 'field_orgref',
      1 => 'field_doc_people',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-editors-pub field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_editors_pub|node|landlibrary_resource|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editors_pub|node|landlibrary_resource|teaser';
  $field_group->group_name = 'group_editors_pub';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Authors and Publishers',
    'weight' => '9',
    'children' => array(
      0 => 'field_doc_provider',
      1 => 'field_doc_people',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => 'Authors and Publishers',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-editors-pub field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_editors_pub|node|landlibrary_resource|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|landlibrary_resource|default';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Header',
    'weight' => '0',
    'children' => array(
      0 => 'field_doc_alt_title',
      1 => 'title_field',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Header',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'element' => 'header',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_header|node|landlibrary_resource|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|landlibrary_resource|listing';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Header',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
      1 => 'title_field',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Header',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'element' => 'header',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_header|node|landlibrary_resource|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header|node|landlibrary_resource|teaser';
  $field_group->group_name = 'group_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Header',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
      1 => 'title_field',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Header',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'element' => 'header',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_header|node|landlibrary_resource|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landvoc|node|landlibrary_resource|default';
  $field_group->group_name = 'group_landvoc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_voc';
  $field_group->data = array(
    'label' => 'Related categories',
    'weight' => '10',
    'children' => array(
      0 => 'field_related_topics',
      1 => 'field_related_domains',
      2 => 'field_related_themes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Related categories',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-landvoc',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_landvoc|node|landlibrary_resource|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landvoc|node|landlibrary_resource|form';
  $field_group->group_name = 'group_landvoc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_topics_regions';
  $field_group->data = array(
    'label' => '',
    'weight' => '113',
    'children' => array(
      0 => 'field_related_topics',
      1 => 'field_related_domains',
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
  $field_groups['group_landvoc|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landvoc|node|landlibrary_resource|listing';
  $field_group->group_name = 'group_landvoc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'listing';
  $field_group->parent_name = 'group_topics_regions';
  $field_group->data = array(
    'label' => '',
    'weight' => '5',
    'children' => array(
      0 => 'field_related_topics',
      1 => 'field_related_domains',
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
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_landvoc|node|landlibrary_resource|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landvoc|node|landlibrary_resource|teaser';
  $field_group->group_name = 'group_landvoc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_topics_regions';
  $field_group->data = array(
    'label' => '',
    'weight' => '6',
    'children' => array(
      0 => 'field_related_topics',
      1 => 'field_related_domains',
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
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_landvoc|node|landlibrary_resource|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left|node|landlibrary_resource|default';
  $field_group->group_name = 'group_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'field_image',
      1 => 'group_access',
      2 => 'group_meta',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-left',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_left|node|landlibrary_resource|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|landlibrary_resource|default';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'field_doc_description',
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
  $field_groups['group_main|node|landlibrary_resource|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|landlibrary_resource|default';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_left';
  $field_group->data = array(
    'label' => 'Resource information',
    'weight' => '7',
    'children' => array(
      0 => 'field_doc_copyrights_statement',
      1 => 'field_doc_creation_date',
      2 => 'field_doc_identifier',
      3 => 'field_doc_is_shown_at',
      4 => 'field_doc_language',
      5 => 'field_doc_licencing',
      6 => 'field_doc_pagination',
      7 => 'field_duration',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Resource information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-meta',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_meta|node|landlibrary_resource|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|landlibrary_resource|listing';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '4',
    'children' => array(
      0 => 'field_doc_creation_date',
      1 => 'field_doc_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-meta field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_meta|node|landlibrary_resource|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|landlibrary_resource|teaser';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource information',
    'weight' => '3',
    'children' => array(
      0 => 'field_doc_creation_date',
      1 => 'field_doc_language',
      2 => 'field_doc_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Resource information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-meta',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_meta|node|landlibrary_resource|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_remove|node|landlibrary_resource|form';
  $field_group->group_name = 'group_remove';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_deprecated';
  $field_group->data = array(
    'label' => 'remove',
    'weight' => '145',
    'children' => array(
      0 => 'field_doc_publisher_place',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-remove field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_remove|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource|node|landlibrary_resource|form';
  $field_group->group_name = 'group_resource';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About the resource',
    'weight' => '5',
    'children' => array(
      0 => 'field_doc_language',
      1 => 'field_doc_type',
      2 => 'group_details',
      3 => 'group_doc_physical_chars',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'About the resource',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-meta field-group-fieldset lp-2c',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_resource|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|node|landlibrary_resource|default';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '4',
    'children' => array(
      0 => 'field_doc_type',
      1 => 'group_data_provider',
      2 => 'group_editors_pub',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-right group-aside',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_right|node|landlibrary_resource|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_settings|node|landlibrary_resource|form';
  $field_group->group_name = 'group_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '8',
    'children' => array(
      0 => 'locations',
      1 => 'language',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-settings field-group-fieldset hide',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_settings|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_source|node|landlibrary_resource|form';
  $field_group->group_name = 'group_source';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Source information',
    'weight' => '7',
    'children' => array(
      0 => 'field_doc_copyrights_statement',
      1 => 'field_doc_licencing',
      2 => 'field_doc_provider',
      3 => 'field_doc_publisher',
      4 => 'field_orgref',
      5 => 'field_doc_people',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Source information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-source field-group-fieldset lp-2c',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_source|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_regions|node|landlibrary_resource|default';
  $field_group->group_name = 'group_topics_regions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_voc';
  $field_group->data = array(
    'label' => 'Geographical focus',
    'weight' => '9',
    'children' => array(
      0 => 'field_geographical_focus',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Geographical focus',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-topics-regions',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_topics_regions|node|landlibrary_resource|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_regions|node|landlibrary_resource|form';
  $field_group->group_name = 'group_topics_regions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Subject of the resource',
    'weight' => '4',
    'children' => array(
      0 => 'field_geographical_focus',
      1 => 'group_landvoc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Subject of the resource',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-topics-regions field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_topics_regions|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_regions|node|landlibrary_resource|listing';
  $field_group->group_name = 'group_topics_regions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'listing';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '5',
    'children' => array(
      0 => 'field_geographical_focus',
      1 => 'group_landvoc',
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
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_topics_regions|node|landlibrary_resource|listing'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics_regions|node|landlibrary_resource|teaser';
  $field_group->group_name = 'group_topics_regions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '4',
    'children' => array(
      0 => 'field_geographical_focus',
      1 => 'group_landvoc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-topics-regions',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_topics_regions|node|landlibrary_resource|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_voc|node|landlibrary_resource|default';
  $field_group->group_name = 'group_voc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '7',
    'children' => array(
      0 => 'field_noderef',
      1 => 'group_landvoc',
      2 => 'group_topics_regions',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-voc group-right',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_voc|node|landlibrary_resource|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('About the resource');
  t('Access to the resource');
  t('Author(s) and Publisher(s)');
  t('Authors and Publishers');
  t('Data provider');
  t('Deprecated');
  t('Details');
  t('Geographical focus');
  t('Header');
  t('More details about access to resource');
  t('More details about resource');
  t('Publication options');
  t('Publishing rights');
  t('Related categories');
  t('Resource information');
  t('Settings');
  t('Source information');
  t('Subject of the resource');
  t('remove');

  return $field_groups;
}
