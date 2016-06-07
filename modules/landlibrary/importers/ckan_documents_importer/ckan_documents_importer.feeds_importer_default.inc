<?php
/**
 * @file
 * ckan_documents_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ckan_documents_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ckan_importer';
  $feeds_importer->config = array(
    'name' => 'CKAN importer',
    'description' => 'import Library resource from ckan',
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
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => '$.result.packages.*',
        'sources' => array(
          'jsonpath_parser:0' => 'title',
          'jsonpath_parser:14' => 'title',
          'jsonpath_parser:2' => 'taxonomy',
          'jsonpath_parser:4' => 'notes',
          'jsonpath_parser:5' => 'odm_copyright',
          'jsonpath_parser:6' => 'marc21_260c',
          'jsonpath_parser:7' => 'odm_language',
          'jsonpath_parser:8' => 'taxonomy',
          'jsonpath_parser:9' => 'document_type',
          'jsonpath_parser:13' => 'marc21_260a[en]',
          'jsonpath_parser:15' => 'title',
          'jsonpath_parser:16' => 'organization',
          'jsonpath_parser:17' => 'title',
          'jsonpath_parser:20' => 'marc21_260a[en]',
          'jsonpath_parser:21' => 'marc21_260a[en]',
          'jsonpath_parser:22' => 'marc21_100',
          'jsonpath_parser:23' => 'marc21_100',
        ),
        'debug' => array(
          'options' => array(
            'jsonpath_parser:17' => 'jsonpath_parser:17',
            'jsonpath_parser:20' => 'jsonpath_parser:20',
            'jsonpath_parser:22' => 'jsonpath_parser:22',
            'jsonpath_parser:23' => 'jsonpath_parser:23',
            'context' => 0,
            'jsonpath_parser:0' => 0,
            'jsonpath_parser:14' => 0,
            'jsonpath_parser:2' => 0,
            'jsonpath_parser:4' => 0,
            'jsonpath_parser:5' => 0,
            'jsonpath_parser:6' => 0,
            'jsonpath_parser:7' => 0,
            'jsonpath_parser:8' => 0,
            'jsonpath_parser:9' => 0,
            'jsonpath_parser:13' => 0,
            'jsonpath_parser:15' => 0,
            'jsonpath_parser:16' => 0,
            'jsonpath_parser:21' => 0,
          ),
        ),
        'allow_override' => 0,
        'convert_four_byte' => 0,
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
            'source' => 'jsonpath_parser:0',
            'target' => 'title_field:et:und',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'jsonpath_parser:14',
            'target' => 'field_doc_title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'jsonpath_parser:2',
            'target' => 'field_related_topics',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          3 => array(
            'source' => 'jsonpath_parser:4',
            'target' => 'field_doc_description',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'jsonpath_parser:5',
            'target' => 'field_doc_copyrights_statement',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'jsonpath_parser:6',
            'target' => 'field_doc_creation_date:start',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'jsonpath_parser:7',
            'target' => 'field_doc_language',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'jsonpath_parser:8',
            'target' => 'field_doc_keyword',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          8 => array(
            'source' => 'jsonpath_parser:9',
            'target' => 'field_doc_type',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'jsonpath_parser:13',
            'target' => 'field_doc_publisher_place',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'jsonpath_parser:15',
            'target' => 'guid',
            'unique' => 1,
          ),
          11 => array(
            'source' => 'Blank source 1',
            'target' => 'field_doc_identifier',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Blank source 2',
            'target' => 'field_doc_identifier',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'jsonpath_parser:16',
            'target' => 'field_doc_provider:label',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'jsonpath_parser:17',
            'target' => 'title',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'jsonpath_parser:20',
            'target' => 'field_doc_publisher:organization:entityreference_feeds:guid',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'jsonpath_parser:21',
            'target' => 'field_doc_publisher:organization:entityreference_feeds:title',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'jsonpath_parser:22',
            'target' => 'field_doc_creator:person:entityreference_feeds:guid',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'jsonpath_parser:23',
            'target' => 'field_doc_creator:person:entityreference_feeds:title',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'landlibrary_resource',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['ckan_importer'] = $feeds_importer;

  return $export;
}
