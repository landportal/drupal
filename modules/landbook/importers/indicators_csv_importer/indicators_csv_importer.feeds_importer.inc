<?php
/**
 * @file
 * indicators_csv_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function indicators_csv_importer_feeds_importer_default() {
    $export = array();

/******/

$feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'indicators_csv_importer';
$feeds_importer->config = array(
  'name' => 'Indicators from CSV',
  'description' => 'Generate indicators from a CSV export of the Master google Spreadsheet',
  'fetcher' => array(
    'plugin_key' => 'FeedsFileFetcher',
    'config' => array(
      'allowed_extensions' => 'txt csv tsv xml opml',
      'delete_uploaded_file' => FALSE,
      'direct' => FALSE,
      'directory' => 'private://feeds',
      'allowed_schemes' => array(
        0 => 'public',
        1 => 'private',
      ),
    ),
  ),
  'parser' => array(
    'plugin_key' => 'FeedsCSVParser',
    'config' => array(
      'delimiter' => ';',
      'encoding' => 'UTF-8',
      'no_headers' => 0,
    ),
  ),
  'processor' => array(
    'plugin_key' => 'FeedsTermProcessor',
    'config' => array(
      'vocabulary' => 0,
      'mappings' => array(
        0 => array(
          'source' => 'Dataset Label',
          'target' => 'field_dataset',
          'unique' => FALSE,
          'language' => 'und',
        ),
        1 => array(
          'source' => 'Indicator Internal_ID',
          'target' => 'field_id',
          'unique' => FALSE,
          'language' => 'und',
        ),
        2 => array(
          'source' => 'Indicator Label',
          'target' => 'name',
          'unique' => 1,
          'language' => 'und',
        ),
        3 => array(
          'source' => 'Indicator Definition',
          'target' => 'description',
          'unique' => FALSE,
          'language' => 'und',
        ),
        4 => array(
          'source' => 'Measurement Unit',
          'target' => 'field_unit:et:en',
          'unique' => FALSE,
          'language' => 'und',
        ),
        5 => array(
          'source' => 'Overarching Category',
          'target' => 'field_related_domains',
          'unique' => FALSE,
          'language' => 'und',
        ),
        6 => array(
          'source' => 'Theme 1',
          'target' => 'field_related_themes',
          'unique' => FALSE,
          'language' => 'und',
        ),
        7 => array(
          'source' => 'Theme 2',
          'target' => 'field_related_themes',
          'unique' => FALSE,
          'language' => 'und',
        ),
        8 => array(
          'source' => 'Theme 3',
          'target' => 'field_related_themes',
          'unique' => FALSE,
          'language' => 'und',
        ),
      ),
      'insert_new' => '1',
      'update_existing' => '0',
      'update_non_existent' => 'skip',
      'input_format' => 'plain_text',
      'skip_hash_check' => 0,
      'bundle' => 'indicators',
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

/*****/
    $export[$feeds_importer->id] = $feeds_importer;

    return $export;
}
