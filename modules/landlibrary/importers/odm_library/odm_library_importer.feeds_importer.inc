<?php
/**
 * @file
 * odm_library_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function odm_library_importer_feeds_importer_default() {
    $export = array();

    $feeds_importer = new stdClass();
    $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
    $feeds_importer->api_version = 1;
    $feeds_importer->id = 'odm_library_importer';
    $feeds_importer->config = array(
        'name' => 'ODM importer',
        'description' => 'Import ODM Library resources from CKAN API in JSON format',
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
                'context' => '$.result.results.*',
                'sources' => array(
                    'jsonpath_parser:1' => 'id',
                    'jsonpath_parser:2' => 'title',
                    'jsonpath_parser:3' => 'resources[0].name',
                    'jsonpath_parser:4' => 'notes',
                    'jsonpath_parser:5' => 'resources[0].url',
                    'jsonpath_parser:6' => 'taxonomy',
                    'jsonpath_parser:7' => 'taxonomy',
                    'jsonpath_parser:8' => 'odm_copyright',
                    'jsonpath_parser:9' => 'marc21_260c',
                    'jsonpath_parser:10' => 'odm_language',
                    'jsonpath_parser:11' => 'document_type',
                    'jsonpath_parser:12' => 'marc21_100',
                    'jsonpath_parser:13' => 'marc21_260a[en]',
                    'jsonpath_parser:14' => 'marc21_260b[en]',
                    'jsonpath_parser:15' => 'organization.title',
                ),
                'debug' => array(
                    'options' => array(
                        'context' => 0,
                        'jsonpath_parser:1' => 0,
                        'jsonpath_parser:2' => 0,//'jsonpath_parser:2',
                        'jsonpath_parser:3' => 0,
                        'jsonpath_parser:4' => 0,
                        'jsonpath_parser:5' => 0,
                        'jsonpath_parser:6' => 0,
                        'jsonpath_parser:7' => 0,
                        'jsonpath_parser:8' => 0,
                        'jsonpath_parser:9' => 0,
                        'jsonpath_parser:10' => 0,
                        'jsonpath_parser:11' => 0,
                        'jsonpath_parser:12' => 0,
                        'jsonpath_parser:13' => 0,
                        'jsonpath_parser:14' => 0,
                        'jsonpath_parser:15' => 0,
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
                'author' => '',
                'authorize' => 1,
                'mappings' => array(
                    0 => array(
                        'source' => 'jsonpath_parser:1',
                        'target' => 'guid',
                        'unique' => 1,
                        'language' => 'und',
                    ),
                    1 => array(
                        'source' => 'jsonpath_parser:2',
                        'target' => 'title',
                        'unique' => FALSE,
                        'language' => 'und',
                    ),
                    2 => array(
                        'source' => 'jsonpath_parser:3',
                        'target' => 'field_doc_title',
                        'unique' => FALSE,
                        'language' => 'und',
                    ),
                    3 => array(
                        'source' => 'jsonpath_parser:4',
                        'target' => 'field_doc_description',
                        'unique' => FALSE,
                        'language' => 'und',
                    ),
                    4 => array(
                        'source' => 'jsonpath_parser:5',
                        'target' => 'field_doc_is_shown_by:url',
                        'unique' => FALSE,
                        'language' => 'und',
                    ),
                    5 => array(
                        'source' => 'jsonpath_parser:6',
                        'target' => 'field_doc_keyword',
                        'term_search' => '0',
                        'autocreate' => 1,
                        'language' => 'und',
                    ),
                    6 => array(
                        'source' => 'jsonpath_parser:7',
                        'target' => 'field_related_topics',
                        'term_search' => '0',
                        'autocreate' => 0,
                        'language' => 'und',
                    ),
                    7 => array(
                        'source' => 'jsonpath_parser:8',
                        'target' => 'field_doc_copyrights_statement',
                        'unique' => FALSE,
                        'language' => 'und',
                    ),
                    8 => array(
                        'source' => 'jsonpath_parser:9',
                        'target' => 'field_doc_creation_date:start',
                        'unique' => FALSE,
                        'language' => 'und',
                    ),
                    9 => array(
                        'source' => 'jsonpath_parser:10',
                        'target' => 'field_doc_language',
                        'unique' => FALSE,
                        'language' => 'und',
                    ),
                    10 => array(
                        'source' => 'jsonpath_parser:11',
                        'target' => 'field_doc_type',
                        'unique' => FALSE,
                        'language' => 'und',
                    ),
                    11 => array(
                        'source' => 'jsonpath_parser:12',
                        'target' => 'field_doc_creator:label',
                        'unique' => FALSE,
                        'language' => 'und',
                    ),
                    12 => array(
                        'source' => 'jsonpath_parser:13',
                        'target' => 'field_doc_publisher_place',
                        'unique' => FALSE,
                        'language' => 'und',
                    ),
                    13 => array(
                        'source' => 'jsonpath_parser:14',
                        'target' => 'field_doc_publisher:label',
                        'unique' => FALSE,
                        'language' => 'und',
                    ),
                    14 => array(
                        'source' => 'jsonpath_parser:15',
                        'target' => 'field_doc_provider:label',
                        'unique' => FALSE,
                        'language' => 'und',
                    ),
                    
                    100 => array(
                        'source' => 'ODM url',
                        'target' => 'field_doc_is_shown_at:url',
                        'unique' => FALSE,
                        'language' => 'und',
                    ),
                    101 => array(
                        'source' => 'ODM author',
                        'target' => 'user_name',
                        'unique' => TRUE,
                    ),

                    201 => array(
                        'source' => 'ODM creators guid',
                        'target' => 'field_doc_creator:person:entityreference_feeds:guid',
                        'unique' => FALSE,
                        'language' => 'und',
                    ),
                    202 => array(
                        'source' => 'ODM creators',
                        'target' => 'field_doc_creator:person:entityreference_feeds:title',
                        'unique' => FALSE,
                        'language' => 'und',
                    ),
                    300 => array(
                        'source' => 'ODM publishers guid',
                        'target' => 'field_doc_publisher:organization:entityreference_feeds:guid',
                        'unique' => FALSE,
                        'language' => 'und',
                    ),
                    301 => array(
                        'source' => 'ODM publishers',
                        'target' => 'field_doc_publisher:organization:entityreference_feeds:title',
                        'unique' => FALSE,
                        'language' => 'und',
                    ),
                    400 => array(
                        'source' => 'ODM provider guid',
                        'target' => 'field_doc_provider:organization:entityreference_feeds:guid',
                        'unique' => FALSE,
                        'language' => 'und',
                    ),
                    401 => array(
                        'source' => 'ODM provider',
                        'target' => 'field_doc_provider:organization:entityreference_feeds:title',
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