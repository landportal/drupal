<?php
/**
 * @file
 * simple_lp_csv_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function simple_lp_csv_importer_feeds_importer_default() {
  $export = array();

$feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'simple_lp_csv_importer';
$feeds_importer->config = array(
  'name' => 'Simple Land Portal CSV importer',
  'description' => 'Import Land Library Resources from a simple Land Portal CSV file',
  'fetcher' => array(
    'plugin_key' => 'FeedsFileFetcher',
    'config' => array(
      'allowed_extensions' => 'csv',
      'direct' => 0,
      'directory' => 'private://feeds',
      'allowed_schemes' => array(
        'public' => 'public',
        'private' => 'private',
      ),
    ),
  ),
  'parser' => array(
    'plugin_key' => 'FeedsCSVParser',
    'config' => array(
      'delimiter' => ';',
      'no_headers' => 0,
      'encoding' => 'UTF-8',
    ),
  ),
  'processor' => array(
    'plugin_key' => 'FeedsNodeProcessor',
    'config' => array(
      'expire' => '-1',
      'author' => 0,
      'authorize' => 1,
      'mappings' => array(
        0 => array(
          'source' => 'Title',
          'target' => 'title',
          'unique' => 1,
          'language' => 'und',
        ),
        1 => array(
          'source' => 'Title',
          'target' => 'field_doc_title',
          'unique' => FALSE,
          'language' => 'und',
        ),
        2 => array(
          'source' => 'Abstract/Description',
          'target' => 'field_doc_description',
          'unique' => FALSE,
          'language' => 'und',
        ),
        3 => array(
          'source' => 'Resource types',
          'target' => 'field_doc_type',
          'unique' => FALSE,
          'language' => 'und',
        ),
        4 => array(
          'source' => 'Publicaton date (YYYY/MM)',
          'target' => 'field_doc_creation_date:start',
          'unique' => FALSE,
          'language' => 'und',
        ),
        5 => array(
          'source' => 'Language',
          'target' => 'field_doc_language',
          'term_search' => '0',
          'autocreate' => 0,
          'language' => 'und',
        ),
        6 => array(
          'source' => 'Authors',
          'target' => 'field_doc_people',
          'unique' => FALSE,
          'language' => 'und',
        ),
        7 => array(
          'source' => 'Corporate authors',
          'target' => 'field_orgref:label',
          'unique' => FALSE,
          'language' => 'und',
        ),
        8 => array(
          'source' => 'Publishers',
          'target' => 'field_doc_publisher:label',
          'unique' => FALSE,
          'language' => 'und',
        ),
        9 => array(
          'source' => 'Data provider',
          'target' => 'field_doc_provider:label',
          'unique' => FALSE,
          'language' => 'und',
        ),
        10 => array(
          'source' => 'ID',
          'target' => 'field_doc_identifier',
          'unique' => FALSE,
          'language' => 'und',
        ),
        11 => array(
          'source' => 'Geographical focus',
          'target' => 'field_geographical_focus',
          'unique' => FALSE,
          'language' => 'und',
        ),
        12 => array(
          'source' => 'Overarching Categories',
          'target' => 'field_related_domains',
          'unique' => FALSE,
          'language' => 'und',
        ),
        13 => array(
          'source' => 'Themes',
          'target' => 'field_related_themes',
          'unique' => FALSE,
          'language' => 'und',
        ),
        14 => array(
          'source' => 'Related Concepts',
          'target' => 'field_related_topics',
          'unique' => FALSE,
          'language' => 'und',
        ),
        15 => array(
          'source' => 'Link to the publication',
          'target' => 'field_doc_is_shown_by:url',
          'unique' => FALSE,
          'language' => 'und',
        ),
        16 => array(
          'source' => 'Thumbnail',
          'target' => 'field_doc_thumb:uri',
          'unique' => FALSE,
          'language' => 'und',
        ),
        17 => array(
          'source' => 'Copyright owner',
          'target' => 'field_doc_copyrights_statement',
          'unique' => FALSE,
          'language' => 'und',
        ),
        18 => array(
          'source' => 'Username',
          'target' => 'user_name',
          'unique' => FALSE,
          'language' => 'und',
        ),
      ),
      'update_existing' => '2',
      'update_non_existent' => 'skip',
      'input_format' => 'plain_text',
      'skip_hash_check' => 0,
      'bundle' => 'landlibrary_resource',
      'insert_new' => '1',
      'language' => 'und',
    ),
  ),
  'content_type' => '',
  'update' => 0,
  'import_period' => '-1',
  'expire_period' => 3600,
  'import_on_create' => 1,
  'process_in_background' => 0,
);

  
  $export[$feeds_importer->id] = $feeds_importer;

  return $export;
}
