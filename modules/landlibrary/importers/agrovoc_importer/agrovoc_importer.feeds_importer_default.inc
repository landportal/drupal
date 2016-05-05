<?php
/**
 * @file
 * agrovoc_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function agrovoc_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'topic_taxonomy_land_terms_importer';
  $feeds_importer->config = array(
    'name' => 'Topic taxonomy land terms importer',
    'description' => 'To import land terms from a CSV with Agrovoc URI and translations',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
        'encoding' => 'UTF-8',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 's',
            'target' => 'field_agrovoc_uri:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'enLabel',
            'target' => 'name',
            'unique' => 1,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'enLabel',
            'target' => 'name_field:et:en',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'esLabel',
            'target' => 'name_field:et:es',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'frLabel',
            'target' => 'name_field:et:fr',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'ptLabel',
            'target' => 'name_field:et:pt',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'defEN',
            'target' => 'description_field:et:en',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'defFR',
            'target' => 'description_field:et:fr',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'defES',
            'target' => 'description_field:et:es',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'defPT',
            'target' => 'description_field:et:pt',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'defEN',
            'target' => 'description_field:et:und',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'defEN',
            'target' => 'description',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 1,
        'bundle' => 'landportal_topics',
        'update_non_existent' => 'skip',
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
  $export['topic_taxonomy_land_terms_importer'] = $feeds_importer;

  return $export;
}
