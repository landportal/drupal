<?php
/**
 * @file
 * landlibrary.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function landlibrary_ds_layout_settings_info() {
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
        1 => 'field_doc_geographic_region',
        2 => 'field_doc_country',
        3 => 'field_doc_subject',
      ),
      'middle' => array(
        4 => 'field_doc_alt_title',
        5 => 'field_doc_description',
        6 => 'field_user',
        7 => 'field_doc_creator',
        8 => 'field_doc_contributor',
        9 => 'field_doc_publisher',
        10 => 'field_doc_provider',
        11 => 'field_doc_data_provider',
        12 => 'field_doc_licencing',
        13 => 'field_doc_citation',
        14 => 'field_doc_citation_identifier',
        15 => 'field_doc_citation_number',
        16 => 'field_doc_citation_chronology',
        17 => 'field_doc_copyrights_statement',
        18 => 'field_doc_terms_of_use',
        19 => 'field_doc_edition',
        20 => 'field_doc_conference',
        21 => 'links',
        22 => 'field_doc_publisher_place',
      ),
      'right' => array(
        23 => 'field_doc_type',
        24 => 'field_doc_identifier',
        25 => 'field_doc_creation_date',
        26 => 'field_doc_pagination',
        27 => 'field_doc_is_shown_at',
        28 => 'field_doc_is_shown_by',
        29 => 'field_doc_is_shown_by_file',
        30 => 'field_local_file_url',
        31 => 'field_format',
        32 => 'field_doc_relation',
        33 => 'field_doc_is_part_of',
        34 => 'field_doc_references',
        35 => 'field_doc_is_referenced_by',
        36 => 'field_doc_replaces',
        37 => 'field_doc_is_replaced_by',
        38 => 'field_doc_is_required_by',
        39 => 'field_doc_requires',
      ),
    ),
    'fields' => array(
      'field_doc_thumb' => 'left',
      'field_doc_geographic_region' => 'left',
      'field_doc_country' => 'left',
      'field_doc_subject' => 'left',
      'field_doc_alt_title' => 'middle',
      'field_doc_description' => 'middle',
      'field_user' => 'middle',
      'field_doc_creator' => 'middle',
      'field_doc_contributor' => 'middle',
      'field_doc_publisher' => 'middle',
      'field_doc_provider' => 'middle',
      'field_doc_data_provider' => 'middle',
      'field_doc_licencing' => 'middle',
      'field_doc_citation' => 'middle',
      'field_doc_citation_identifier' => 'middle',
      'field_doc_citation_number' => 'middle',
      'field_doc_citation_chronology' => 'middle',
      'field_doc_copyrights_statement' => 'middle',
      'field_doc_terms_of_use' => 'middle',
      'field_doc_edition' => 'middle',
      'field_doc_conference' => 'middle',
      'links' => 'middle',
      'field_doc_publisher_place' => 'middle',
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
      'field_doc_references' => 'right',
      'field_doc_is_referenced_by' => 'right',
      'field_doc_replaces' => 'right',
      'field_doc_is_replaced_by' => 'right',
      'field_doc_is_required_by' => 'right',
      'field_doc_requires' => 'right',
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

  return $export;
}
