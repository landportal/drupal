<?php
/**
 * @file
 * olc_json_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function olc_json_importer_feeds_importer_default() {
    $export = array();

/************/
$feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'olc_json_importer';
$feeds_importer->config = array(
  'name' => 'OLC JSON importer',
  'description' => 'Import openlandcontracts.org Land Library Resources from a JSON file',
  'fetcher' => array(
    'plugin_key' => 'FeedsFileFetcher',
    'config' => array(
      'allowed_extensions' => 'json',
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
    'plugin_key' => 'FeedsJSONPathParser',
    'config' => array(
      'context' => '$.*',
      'sources' => array(
        'jsonpath_parser:16' => 'name',
        'jsonpath_parser:1' => 'participation[*].company.name',
        'jsonpath_parser:2' => 'government_entity[*].name',
        'jsonpath_parser:3' => '',
        'jsonpath_parser:15' => '',
        'jsonpath_parser:5' => 'language',
        'jsonpath_parser:6' => 'open_contracting_id',
        'jsonpath_parser:9' => 'country.code',
        'jsonpath_parser:21' => 'participation[*].company.identifier.creator.spatial',
        'jsonpath_parser:14' => 'number_of_pages',
        'jsonpath_parser:19' => 'type',
        'jsonpath_parser:18' => 'resource',
        'jsonpath_parser:20' => 'contract_type',
        'jsonpath_parser:22' => 'date_signed',
        'jsonpath_parser:23' => 'year_signed',
      ),
      'debug' => array(
        'options' => array(
          'context' => 0,
          'jsonpath_parser:16' => 0,
          'jsonpath_parser:1' => 0,
          'jsonpath_parser:2' => 0,
          'jsonpath_parser:3' => 0,
          'jsonpath_parser:15' => 0,
          'jsonpath_parser:5' => 0,
          'jsonpath_parser:6' => 0,
          'jsonpath_parser:9' => 0,
          'jsonpath_parser:21' => 0,
          'jsonpath_parser:14' => 0,
          'jsonpath_parser:19' => 0,
          'jsonpath_parser:18' => 0,
          'jsonpath_parser:20' => 0,
          'jsonpath_parser:22' => 0,
          'jsonpath_parser:23' => 0,
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
          'source' => 'Blank source 1',
          'target' => 'user_name',
          'unique' => FALSE,
          'language' => 'und',
        ),
        1 => array(
          'source' => 'Blank source 7',
          'target' => 'field_doc_provider:label',
          'unique' => FALSE,
          'language' => 'und',
        ),
        2 => array(
          'source' => 'jsonpath_parser:16',
          'target' => 'title',
          'unique' => 1,
          'language' => 'und',
        ),
        3 => array(
          'source' => 'jsonpath_parser:1',
          'target' => 'Temporary target 2',
          'unique' => FALSE,
          'language' => 'und',
        ),
        4 => array(
          'source' => 'jsonpath_parser:2',
          'target' => 'Temporary target 3',
          'unique' => FALSE,
          'language' => 'und',
        ),
        5 => array(
          'source' => 'Blank source 3',
          'target' => 'field_doc_people',
          'unique' => FALSE,
          'language' => 'und',
        ),
        6 => array(
          'source' => 'jsonpath_parser:5',
          'target' => 'field_doc_language',
          'unique' => FALSE,
          'language' => 'und',
        ),
        7 => array(
          'source' => 'jsonpath_parser:6',
          'target' => 'Temporary target 4',
          'unique' => FALSE,
          'language' => 'und',
        ),
        8 => array(
          'source' => 'Blank source 5',
          'target' => 'field_doc_identifier',
          'unique' => FALSE,
          'language' => 'und',
        ),
        9 => array(
          'source' => 'Blank source 6',
          'target' => 'field_doc_is_shown_at:url',
          'unique' => FALSE,
          'language' => 'und',
        ),
        10 => array(
          'source' => 'jsonpath_parser:9',
          'target' => 'field_geographical_focus',
          'unique' => FALSE,
          'language' => 'und',
        ),
        11 => array(
          'source' => 'jsonpath_parser:21',
          'target' => 'field_geographical_focus',
          'unique' => FALSE,
          'language' => 'und',
        ),
        12 => array(
          'source' => 'Blank source 12',
          'target' => 'field_doc_thumb:uri',
          'unique' => FALSE,
          'language' => 'und',
        ),
        13 => array(
          'source' => 'jsonpath_parser:14',
          'target' => 'field_doc_pagination',
          'unique' => FALSE,
          'language' => 'und',
        ),
        14 => array(
          'source' => 'Blank source 13',
          'target' => 'field_doc_licencing',
          'unique' => FALSE,
          'language' => 'und',
        ),
        15 => array(
          'source' => 'Blank source 14',
          'target' => 'field_doc_type',
          'unique' => FALSE,
          'language' => 'und',
        ),
        16 => array(
          'source' => 'Blank source 8',
          'target' => 'field_related_domains',
          'unique' => FALSE,
          'language' => 'und',
        ),
        17 => array(
          'source' => 'Blank source 10',
          'target' => 'field_related_topics',
          'unique' => FALSE,
          'language' => 'und',
        ),
        18 => array(
          'source' => 'Blank source 16',
          'target' => 'field_related_topics',
          'unique' => FALSE,
          'language' => 'und',
        ),
        19 => array(
          'source' => 'jsonpath_parser:19',
          'target' => 'Temporary target 12',
          'unique' => FALSE,
          'language' => 'und',
        ),
        20 => array(
          'source' => 'Blank source 17',
          'target' => 'field_related_topics',
          'unique' => FALSE,
          'language' => 'und',
        ),
        21 => array(
          'source' => 'jsonpath_parser:18',
          'target' => 'Temporary target 11',
          'unique' => FALSE,
          'language' => 'und',
        ),
        22 => array(
          'source' => 'jsonpath_parser:20',
          'target' => 'Temporary target 13',
          'unique' => FALSE,
          'language' => 'und',
        ),
        23 => array(
          'source' => 'Blank source 11',
          'target' => 'field_doc_description',
          'unique' => FALSE,
          'language' => 'und',
        ),
        24 => array(
          'source' => 'Blank source 18',
          'target' => 'field_doc_description',
          'unique' => FALSE,
          'language' => 'und',
        ),
        25 => array(
          'source' => 'jsonpath_parser:22',
          'target' => 'Temporary target 14',
          'unique' => FALSE,
          'language' => 'und',
        ),
        26 => array(
          'source' => 'jsonpath_parser:23',
          'target' => 'Temporary target 15',
          'unique' => FALSE,
          'language' => 'und',
        ),
        27 => array(
          'source' => 'Blank source 19',
          'target' => 'field_doc_creation_date:start',
          'unique' => FALSE,
          'language' => 'und',
        ),
      ),
      'insert_new' => '1',
      'update_existing' => '2',
      'update_non_existent' => 'skip',
      'input_format' => 'full_html',
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


/************/

    $export[$feeds_importer->id] = $feeds_importer;

    return $export;
}
