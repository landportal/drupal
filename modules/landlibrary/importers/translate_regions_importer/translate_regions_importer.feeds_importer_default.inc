<?php
/**
 * @file
 * translate_regions_importer.feeds_importer_default.inc 
 */

/**
 * Implements hook_feeds_importer_default().
 */
function translate_regions_importer_feeds_importer_default() {
  $export = array();

$feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'translate_regions_importer';
$feeds_importer->config = array(
  'name' => 'Translate Regions importer',
  'description' => 'Translate regions by ISO3 code from CSV file',
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
          'source' => 'EN_NAME',
          'target' => 'name_field:et:en',
          'unique' => FALSE,
          'language' => 'und',
        ),
        1 => array(
          'source' => 'ES_NAME',
          'target' => 'name_field:et:es',
          'unique' => FALSE,
          'language' => 'und',
        ),
        2 => array(
          'source' => 'FR_NAME',
          'target' => 'name_field:et:fr',
          'unique' => FALSE,
          'language' => 'und',
        ),
        3 => array(
          'source' => 'PT_NAME',
          'target' => 'name_field:et:pt',
          'unique' => FALSE,
          'language' => 'und',
        ),
        4 => array(
          'source' => 'ISO3 code',
          'target' => 'Temporary target 1',
          'unique' => FALSE,
          'language' => 'und',
        ),
        5 => array(
          'source' => 'blank 1',
          'target' => 'field_iso3',
          'unique' => FALSE,
          'language' => 'und',
        ),
        6 => array(
          'source' => 'blank 2',
          'target' => 'name',
          'unique' => FALSE,
        ),
      ),
      'insert_new' => '0',
      'update_existing' => '2',
      'update_non_existent' => 'skip',
      'input_format' => 'plain_text',
      'skip_hash_check' => 0,
      'bundle' => 'regions',
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
