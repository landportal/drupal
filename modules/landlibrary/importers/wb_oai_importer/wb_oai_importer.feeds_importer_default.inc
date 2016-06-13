<?php
/**
 * @file
 * wb_oai_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function wb_oai_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'wb_oai_importer';
  $feeds_importer->config = array(
    'name' => 'WB OAI importer',
    'description' => 'Import world bank data from OAI-PMH',
    'fetcher' => array(
      'plugin_key' => 'FeedsOAIHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'last_fetched_timestamp' => '',
        'earliest_timestamp' => '',
        'use_dates' => FALSE,
        'to' => array(),
        'from' => array(),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsOAIParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'type',
            'target' => 'field_doc_type',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'subject',
            'target' => 'field_related_topics',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'publisher',
            'target' => 'field_doc_publisher:organization:entityreference_feeds:guid',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'publisher',
            'target' => 'field_doc_publisher:organization:entityreference_feeds:title',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'rights',
            'target' => 'field_doc_copyrights_statement',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'language',
            'target' => 'field_doc_language',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'identifier',
            'target' => 'field_doc_is_shown_by:url',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'creator',
            'target' => 'field_doc_contributor:person:entityreference_feeds:guid',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'creator',
            'target' => 'field_doc_contributor:person:entityreference_feeds:title',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'contributor',
            'target' => 'field_doc_contributor:person:entityreference_feeds:title',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'date',
            'target' => 'field_doc_creation_date:start',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'description',
            'target' => 'field_doc_description',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'format',
            'target' => 'field_format',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'guid',
            'target' => 'field_doc_identifier',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'title',
            'target' => 'title_field:et:und',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'source',
            'target' => 'field_doc_data_provider:organization:entityreference_feeds:guid',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'source',
            'target' => 'field_doc_data_provider:organization:entityreference_feeds:title',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'metadata_record_url',
            'target' => 'field_doc_provider:organization:entityreference_feeds:guid',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'metadata_record_url',
            'target' => 'field_doc_provider:organization:entityreference_feeds:title',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 1,
        'bundle' => 'landlibrary_resource',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => '',
    'update' => 2,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['wb_oai_importer'] = $feeds_importer;

  return $export;
}
