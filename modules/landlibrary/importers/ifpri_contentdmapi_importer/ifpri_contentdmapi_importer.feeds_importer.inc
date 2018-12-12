<?php
/**
 * @file
 * ifpri_contentdmapi_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ifpri_contentdmapi_importer_feeds_importer_default() {
    $export = array();

/******/

$feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'ifpri_contentdmapi_importer';
$feeds_importer->config = array(
  'name' => 'IFPRI contentdmAPI importer',
  'description' => 'Import IFPRI records from contentdm API',
  'fetcher' => array(
    'plugin_key' => 'FeedsFileFetcher',
    'config' => array(
      'allowed_extensions' => 'xml html htm',
      'delete_uploaded_file' => 0,
      'direct' => 0,
      'directory' => 'private://feeds',
      'allowed_schemes' => array(
        'public' => 'public',
        'private' => 'private',
      ),
    ),
  ),
  'parser' => array(
    'plugin_key' => 'FeedsXPathParserXML',
    'config' => array(
      'sources' => array(
        'xpathparser:0' => 'title/text()',
        'xpathparser:1' => 'subtit',
        'xpathparser:2' => 'descri',
        'xpathparser:3' => 'collection/text()',
        'xpathparser:4' => 'dmrecord/text()',
        'xpathparser:5' => 'find/text()',
        'xpathparser:6' => 'creato',
        'xpathparser:7' => 'develo',
        'xpathparser:8' => 'contri',
        'xpathparser:9' => 'publis',
        'xpathparser:10' => 'langua',
        'xpathparser:11' => 'date',
        'xpathparser:14' => 'peer/text()',
        'xpathparser:15' => 'typea',
        'xpathparser:16' => 'cclice',
        'xpathparser:17' => 'cclice',
        'xpathparser:18' => 'subjec',
        'xpathparser:19' => 'subjec',
        'xpathparser:20' => 'loc',
        'xpathparser:21' => 'subjea',
        'xpathparser:22' => 'subjec',
        'xpathparser:23' => 'subjec',
      ),
      'rawXML' => array(
        'xpathparser:0' => 0,
        'xpathparser:1' => 0,
        'xpathparser:2' => 0,
        'xpathparser:3' => 0,
        'xpathparser:4' => 0,
        'xpathparser:5' => 0,
        'xpathparser:6' => 0,
        'xpathparser:7' => 0,
        'xpathparser:8' => 0,
        'xpathparser:9' => 0,
        'xpathparser:10' => 0,
        'xpathparser:11' => 0,
        'xpathparser:14' => 0,
        'xpathparser:15' => 0,
        'xpathparser:16' => 0,
        'xpathparser:17' => 0,
        'xpathparser:18' => 0,
        'xpathparser:19' => 0,
        'xpathparser:20' => 0,
        'xpathparser:21' => 0,
        'xpathparser:22' => 0,
        'xpathparser:23' => 0,
      ),
      'context' => '/results/records/record',
      'exp' => array(
        'errors' => 0,
        'debug' => array(
          'context' => 0,
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
          'xpathparser:16' => 0,
          'xpathparser:17' => 0,
          'xpathparser:18' => 0,
          'xpathparser:19' => 0,
          'xpathparser:20' => 0,
          'xpathparser:21' => 0,
          'xpathparser:22' => 0,
          'xpathparser:23' => 0,
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
      'authorize' => 1,
      'mappings' => array(
        0 => array(
          'source' => 'Blank source 1',
          'target' => 'user_name',
          'unique' => FALSE,
          'language' => 'und',
        ),
        1 => array(
          'source' => 'Blank source 5',
          'target' => 'field_doc_provider:label',
          'unique' => FALSE,
          'language' => 'und',
        ),
        2 => array(
          'source' => 'xpathparser:0',
          'target' => 'title',
          'unique' => 0,
          'language' => 'und',
        ),
        3 => array(
          'source' => 'xpathparser:1',
          'target' => 'field_doc_alt_title',
          'unique' => FALSE,
          'language' => 'und',
        ),
        4 => array(
          'source' => 'xpathparser:2',
          'target' => 'field_doc_description',
          'unique' => FALSE,
          'language' => 'und',
        ),
        5 => array(
          'source' => 'xpathparser:3',
          'target' => 'Temporary target 1',
          'unique' => FALSE,
          'language' => 'und',
        ),
        6 => array(
          'source' => 'xpathparser:4',
          'target' => 'Temporary target 2',
          'unique' => FALSE,
          'language' => 'und',
        ),
        7 => array(
          'source' => 'xpathparser:5',
          'target' => 'Temporary target 3',
          'unique' => FALSE,
          'language' => 'und',
        ),
        8 => array(
          'source' => 'Blank source 3',
          'target' => 'field_doc_is_shown_at:url',
          'unique' => FALSE,
          'language' => 'und',
        ),
        9 => array(
          'source' => 'Blank source 4',
          'target' => 'field_doc_is_shown_by:url',
          'unique' => FALSE,
          'language' => 'und',
        ),
        10 => array(
          'source' => 'Blank source 6',
          'target' => 'field_image:uri',
          'file_exists' => '4',
          'language' => 'und',
        ),
        11 => array(
          'source' => 'xpathparser:6',
          'target' => 'Temporary target 4',
          'unique' => FALSE,
          'language' => 'und',
        ),
        12 => array(
          'source' => 'xpathparser:7',
          'target' => 'Temporary target 5',
          'unique' => FALSE,
          'language' => 'und',
        ),
        13 => array(
          'source' => 'xpathparser:8',
          'target' => 'Temporary target 6',
          'unique' => FALSE,
          'language' => 'und',
        ),
        14 => array(
          'source' => 'Blank source 7',
          'target' => 'field_doc_people',
          'unique' => FALSE,
          'language' => 'und',
        ),
        15 => array(
          'source' => 'xpathparser:9',
          'target' => 'field_doc_publisher:label',
          'unique' => FALSE,
          'language' => 'und',
        ),
        16 => array(
          'source' => 'Blank source 8',
          'target' => 'field_doc_identifier',
          'unique' => FALSE,
          'language' => 'und',
        ),
        17 => array(
          'source' => 'xpathparser:10',
          'target' => 'field_doc_language',
          'term_search' => '1',
          'autocreate' => 0,
          'language' => 'und',
        ),
        18 => array(
          'source' => 'xpathparser:11',
          'target' => 'field_doc_creation_date:start',
          'unique' => FALSE,
          'language' => 'und',
        ),
        19 => array(
          'source' => 'xpathparser:14',
          'target' => 'field_doc_type',
          'unique' => FALSE,
          'language' => 'und',
        ),
        20 => array(
          'source' => 'xpathparser:15',
          'target' => 'field_doc_type',
          'unique' => FALSE,
          'language' => 'und',
        ),
        21 => array(
          'source' => 'xpathparser:16',
          'target' => 'field_doc_copyrights_statement',
          'unique' => FALSE,
          'language' => 'und',
        ),
        22 => array(
          'source' => 'xpathparser:17',
          'target' => 'field_doc_licencing',
          'unique' => FALSE,
          'language' => 'und',
        ),
        23 => array(
          'source' => 'xpathparser:20',
          'target' => 'Temporary target 7',
          'unique' => FALSE,
          'language' => 'und',
        ),
        24 => array(
          'source' => 'xpathparser:21',
          'target' => 'Temporary target 8',
          'unique' => FALSE,
          'language' => 'und',
        ),
        25 => array(
          'source' => 'Blank source 9',
          'target' => 'field_related_topics',
          'term_search' => '1',
          'autocreate' => 0,
          'language' => 'und',
        ),
        26 => array(
          'source' => 'Blank source 10',
          'target' => 'field_related_domains',
          'unique' => FALSE,
          'language' => 'und',
        ),
        27 => array(
          'source' => 'Blank source 11',
          'target' => 'field_related_themes',
          'unique' => FALSE,
          'language' => 'und',
        ),
        28 => array(
          'source' => 'Blank source 12',
          'target' => 'guid',
          'unique' => 1,
          'language' => 'und',
        ),
        29 => array(
          'source' => 'xpathparser:22',
          'target' => 'Temporary target 9',
          'unique' => FALSE,
          'language' => 'und',
        ),
        30 => array(
          'source' => 'xpathparser:23',
          'target' => 'Temporary target 10',
          'unique' => FALSE,
          'language' => 'und',
        ),
        31 => array(
          'source' => 'Blank source 13',
          'target' => 'field_geographical_focus',
          'term_search' => '1',
          'autocreate' => 0,
          'language' => 'und',
        ),
      ),
      'insert_new' => '1',
      'update_existing' => '2',
      'update_non_existent' => 'skip',
      'input_format' => 'plain_text',
      'skip_hash_check' => 0,
      'bundle' => 'landlibrary_resource',
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
