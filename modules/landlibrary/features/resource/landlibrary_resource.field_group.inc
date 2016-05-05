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
  $field_group->identifier = 'group_deprecated|node|landlibrary_resource|form';
  $field_group->group_name = 'group_deprecated';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Deprecated',
    'weight' => '8',
    'children' => array(
      0 => 'field_doc_conference',
      1 => 'field_doc_country',
      2 => 'field_doc_keyword',
      3 => 'group_doc_citation',
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
  $field_group->identifier = 'group_doc_citation|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_citation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_deprecated';
  $field_group->data = array(
    'label' => 'Citation',
    'weight' => '9',
    'children' => array(
      0 => 'field_doc_citation',
      1 => 'field_doc_citation_chronology',
      2 => 'field_doc_citation_identifier',
      3 => 'field_doc_citation_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Citation',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-doc-citation field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_doc_citation|node|landlibrary_resource|form'] = $field_group;

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
    'label' => 'Physical Characteristics',
    'weight' => '6',
    'children' => array(
      0 => 'field_doc_creation_date',
      1 => 'field_doc_edition',
      2 => 'field_doc_is_shown_at',
      3 => 'field_doc_is_shown_by',
      4 => 'field_doc_pagination',
      5 => 'field_doc_type',
      6 => 'field_format',
      7 => 'field_doc_is_shown_by_file',
      8 => 'field_local_file_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Physical Characteristics',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-doc-physical-chars field-group-fieldset undo-collapse',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_doc_physical_chars|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_relations|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_relations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_resource';
  $field_group->data = array(
    'label' => 'Relations',
    'weight' => '9',
    'children' => array(
      0 => 'field_doc_has_part',
      1 => 'field_doc_has_translation',
      2 => 'field_doc_has_version',
      3 => 'field_doc_is_part_of',
      4 => 'field_doc_is_referenced_by',
      5 => 'field_doc_is_replaced_by',
      6 => 'field_doc_is_required_by',
      7 => 'field_doc_is_translation_of',
      8 => 'field_doc_is_version_of',
      9 => 'field_doc_references',
      10 => 'field_doc_relation',
      11 => 'field_doc_replaces',
      12 => 'field_doc_requires',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Relations',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-doc-relations field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_doc_relations|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_responsible_body|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_responsible_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_resource';
  $field_group->data = array(
    'label' => 'Responsible body',
    'weight' => '8',
    'children' => array(
      0 => 'field_doc_contributor',
      1 => 'field_doc_creator',
      2 => 'field_doc_data_provider',
      3 => 'field_doc_provider',
      4 => 'field_doc_publisher',
      5 => 'field_doc_publisher_place',
      6 => 'field_user',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Responsible body',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-doc-responsible-body field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_doc_responsible_body|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_rights|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_rights';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_resource';
  $field_group->data = array(
    'label' => 'Rights',
    'weight' => '7',
    'children' => array(
      0 => 'field_doc_copyrights_statement',
      1 => 'field_doc_licencing',
      2 => 'field_doc_terms_of_use',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Rights',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-doc-rights field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_doc_rights|node|landlibrary_resource|form'] = $field_group;

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
    'label' => 'Resource',
    'weight' => '3',
    'children' => array(
      0 => 'field_doc_alt_title',
      1 => 'field_doc_identifier',
      2 => 'field_doc_language',
      3 => 'field_doc_thumb',
      4 => 'field_doc_title',
      5 => 'group_doc_physical_chars',
      6 => 'group_doc_relations',
      7 => 'group_doc_responsible_body',
      8 => 'group_doc_rights',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-resource field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_resource|node|landlibrary_resource|form'] = $field_group;

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
    'label' => 'Topics and Regions',
    'weight' => '4',
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
  $field_groups['group_topics_regions|node|landlibrary_resource|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Citation');
  t('Deprecated');
  t('Physical Characteristics');
  t('Relations');
  t('Resource');
  t('Responsible body');
  t('Rights');
  t('Topics and Regions');

  return $field_groups;
}
