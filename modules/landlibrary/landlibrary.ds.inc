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
        1 => 'field_doc_country',
        2 => 'field_doc_subject',
      ),
      'middle' => array(
        3 => 'field_doc_alt_title',
        4 => 'field_doc_description',
        5 => 'field_user',
        6 => 'field_doc_creator',
        7 => 'field_doc_contributor',
        8 => 'field_doc_publisher',
        9 => 'field_doc_provider',
        10 => 'field_doc_data_provider',
        11 => 'field_doc_licencing',
        12 => 'field_doc_citation',
        13 => 'field_doc_citation_identifier',
        14 => 'field_doc_citation_number',
        15 => 'field_doc_citation_chronology',
        16 => 'field_doc_copyrights_statement',
        17 => 'field_doc_terms_of_use',
        18 => 'field_doc_edition',
        19 => 'field_doc_conference',
        20 => 'links',
        21 => 'field_doc_publisher_place',
      ),
      'right' => array(
        22 => 'field_doc_type',
        23 => 'field_doc_identifier',
        24 => 'field_doc_creation_date',
        25 => 'field_doc_pagination',
        26 => 'field_doc_is_shown_at',
        27 => 'field_doc_is_shown_by',
        28 => 'field_doc_is_shown_by_file',
        29 => 'field_local_file_url',
        30 => 'field_format',
        31 => 'field_doc_relation',
        32 => 'field_doc_is_part_of',
        33 => 'field_doc_references',
        34 => 'field_doc_is_referenced_by',
        35 => 'field_doc_replaces',
        36 => 'field_doc_is_replaced_by',
        37 => 'field_doc_is_required_by',
        38 => 'field_doc_requires',
      ),
    ),
    'fields' => array(
      'field_doc_thumb' => 'left',
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
