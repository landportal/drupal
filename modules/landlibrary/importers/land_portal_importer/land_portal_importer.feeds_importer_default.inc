<?php
/**
 * @file
 * land_portal_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function land_portal_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'land_legacy_importer';
  $feeds_importer->config = array(
    'name' => 'LandPortal importer',
    'description' => 'Import from the old landportal website',
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
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'Title',
          'xpathparser:1' => 'Author',
          'xpathparser:2' => 'Author',
          'xpathparser:4' => 'organization',
          'xpathparser:3' => 'organization',
          'xpathparser:5' => 'Subtitle',
          'xpathparser:6' => 'Language',
          'xpathparser:7' => '',
          'xpathparser:8' => '',
          'xpathparser:9' => 'link',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:4' => 0,
          'xpathparser:3' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
        ),
        'context' => '/xml/node',
        'exp' => array(
          'errors' => 0,
          'tidy' => 0,
          'tidy_encoding' => 'UTF8',
          'debug' => array(
            'xpathparser:0' => 'xpathparser:0',
            'xpathparser:2' => 'xpathparser:2',
            'xpathparser:4' => 'xpathparser:4',
            'xpathparser:5' => 'xpathparser:5',
            'xpathparser:6' => 'xpathparser:6',
            'context' => 0,
            'xpathparser:1' => 0,
            'xpathparser:3' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_doc_creator:person:entityreference_feeds:guid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_doc_creator:person:entityreference_feeds:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_doc_publisher:organization:entityreference_feeds:guid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_doc_publisher:organization:entityreference_feeds:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_doc_alt_title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_doc_language',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_doc_provider:organization:entityreference_feeds:guid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_doc_provider:organization:entityreference_feeds:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Blank source 1',
            'target' => 'user_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_doc_replaces:url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'landlibrary_resource',
        'insert_new' => 1,
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
  $export['land_legacy_importer'] = $feeds_importer;

  return $export;
}
