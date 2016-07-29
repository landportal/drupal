<?php
/**
 * @file
 * landlibrary_resource.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function landlibrary_resource_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|landlibrary_resource|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'landlibrary_resource';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '18',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|landlibrary_resource|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|landlibrary_resource|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'landlibrary_resource';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|landlibrary_resource|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function landlibrary_resource_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|landlibrary_resource|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'landlibrary_resource';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_doc_thumb',
        1 => 'field_geographical_focus',
        2 => 'field_related_domains',
        3 => 'field_related_themes',
        4 => 'field_related_topics',
      ),
      'middle' => array(
        5 => 'field_doc_alt_title',
        6 => 'field_doc_description',
        7 => 'field_doc_publisher',
        8 => 'field_doc_provider',
        9 => 'field_doc_licencing',
        10 => 'field_doc_citation',
        11 => 'field_doc_citation_number',
        12 => 'field_doc_citation_chronology',
        13 => 'field_doc_publisher_place',
        14 => 'field_orgref',
        15 => 'field_doc_people',
        16 => 'field_doc_copyrights_statement',
        17 => 'field_doc_edition',
        18 => 'links',
      ),
      'right' => array(
        19 => 'field_doc_type',
        20 => 'field_doc_identifier',
        21 => 'field_doc_creation_date',
        22 => 'field_doc_pagination',
        23 => 'field_doc_is_shown_at',
        24 => 'field_doc_is_shown_by',
        25 => 'field_doc_is_shown_by_file',
        26 => 'field_local_file_url',
        27 => 'field_format',
        28 => 'field_doc_relation',
        29 => 'field_doc_is_part_of',
      ),
    ),
    'fields' => array(
      'field_doc_thumb' => 'left',
      'field_geographical_focus' => 'left',
      'field_related_domains' => 'left',
      'field_related_themes' => 'left',
      'field_related_topics' => 'left',
      'field_doc_alt_title' => 'middle',
      'field_doc_description' => 'middle',
      'field_doc_publisher' => 'middle',
      'field_doc_provider' => 'middle',
      'field_doc_licencing' => 'middle',
      'field_doc_citation' => 'middle',
      'field_doc_citation_number' => 'middle',
      'field_doc_citation_chronology' => 'middle',
      'field_doc_publisher_place' => 'middle',
      'field_orgref' => 'middle',
      'field_doc_people' => 'middle',
      'field_doc_copyrights_statement' => 'middle',
      'field_doc_edition' => 'middle',
      'links' => 'middle',
      'field_doc_type' => 'right',
      'field_doc_identifier' => 'right',
      'field_doc_creation_date' => 'right',
      'field_doc_pagination' => 'right',
      'field_doc_is_shown_at' => 'right',
      'field_doc_is_shown_by' => 'right',
      'field_doc_is_shown_by_file' => 'right',
      'field_local_file_url' => 'right',
      'field_format' => 'right',
      'field_doc_relation' => 'right',
      'field_doc_is_part_of' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|landlibrary_resource|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|landlibrary_resource|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'landlibrary_resource';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_doc_thumb',
      ),
      'right' => array(
        1 => 'field_doc_provider',
        2 => 'title',
        3 => 'field_doc_creation_date',
        4 => 'field_doc_type',
        5 => 'field_geographical_focus',
        6 => 'group_landvoc',
        7 => 'field_related_domains',
        8 => 'field_related_themes',
        9 => 'field_related_topics',
        10 => 'field_doc_description',
        11 => 'field_doc_publisher',
      ),
    ),
    'fields' => array(
      'field_doc_thumb' => 'left',
      'field_doc_provider' => 'right',
      'title' => 'right',
      'field_doc_creation_date' => 'right',
      'field_doc_type' => 'right',
      'field_geographical_focus' => 'right',
      'group_landvoc' => 'right',
      'field_related_domains' => 'right',
      'field_related_themes' => 'right',
      'field_related_topics' => 'right',
      'field_doc_description' => 'right',
      'field_doc_publisher' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|landlibrary_resource|teaser'] = $ds_layout;

  return $export;
}
