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
  $field_group->identifier = 'group_authors|node|landlibrary_resource|form';
  $field_group->group_name = 'group_authors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_resource';
  $field_group->data = array(
    'label' => 'Author(s)',
    'weight' => '6',
    'children' => array(
      0 => 'field_orgref',
      1 => 'field_doc_people',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-authors field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_authors|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_deprecated|node|landlibrary_resource|form';
  $field_group->group_name = 'group_deprecated';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Deprecated',
    'weight' => '10',
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
        'classes' => 'group-deprecated field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_deprecated|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
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
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
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
  $field_group->identifier = 'group_doc_physical_chars|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_physical_chars';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Access to the resource',
    'weight' => '2',
    'children' => array(
      0 => 'field_doc_is_shown_by',
      1 => 'field_doc_thumb',
      2 => 'group_detailsaccessresource',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Access to the resource',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-doc-physical-chars field-group-fieldset undo-collapse',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_doc_physical_chars|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_rights|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_rights';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publishing rights',
    'weight' => '3',
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
  $field_group->identifier = 'group_landvoc|node|landlibrary_resource|teaser';
  $field_group->group_name = 'group_landvoc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'landvoc',
    'weight' => '16',
    'children' => array(
      0 => 'field_related_topics',
      1 => 'field_related_domains',
      2 => 'field_related_themes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'landvoc',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-landvoc field-group-div',
        'description' => 'LandVoc classification <a href="/voc/landvoc"><span class="glyphicon glyphicon-info-sign" title="www.landportal.info/voc/landvoc"  data-placement="top" data-toggle="tooltip" data-original-title=""></span></a>
',
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
    'label' => 'General information about the resource',
    'weight' => '0',
    'children' => array(
      0 => 'field_doc_creation_date',
      1 => 'field_doc_description',
      2 => 'field_doc_language',
      3 => 'field_doc_type',
      4 => 'title',
      5 => 'group_authors',
      6 => 'group_detailresource',
      7 => 'group_source',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'General information about the resource',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-resource field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_resource|node|landlibrary_resource|form'] = $field_group;

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
    'weight' => '4',
    'children' => array(
      0 => 'field_doc_keyword',
      1 => 'field_country_promoted',
      2 => 'locations',
      3 => 'path',
      4 => 'xmlsitemap',
      5 => 'language',
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
  $field_group->parent_name = 'group_resource';
  $field_group->data = array(
    'label' => 'Source information',
    'weight' => '7',
    'children' => array(
      0 => 'field_doc_provider',
      1 => 'field_doc_publisher',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-source field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'field_geographical_focus',
      1 => 'field_related_topics',
      2 => 'field_related_domains',
      3 => 'field_related_themes',
    ),
    'format_type' => 'fieldset',
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
    'weight' => '1',
    'children' => array(
      0 => 'field_geographical_focus',
      1 => 'field_related_topics',
      2 => 'field_related_domains',
      3 => 'field_related_themes',
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
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_topics_regions|node|landlibrary_resource|form'] = $field_group;

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
    ),
    'format_type' => 'fieldset',
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
  $field_groups['group_topics_regions|node|landlibrary_resource|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Access to the resource');
  t('Author(s)');
  t('Deprecated');
  t('General information about the resource');
  t('More details about access to resource');
  t('More details about resource');
  t('Publishing rights');
  t('Settings');
  t('Source information');
  t('Subject of the resource');
  t('landvoc');
  t('remove');

  return $field_groups;
}
