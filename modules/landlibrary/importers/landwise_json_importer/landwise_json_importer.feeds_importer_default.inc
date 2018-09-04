<?php
/**
 * @file
 * landwise_json_importer.feeds_importer_default.inc 
 */

/**
 * Implements hook_feeds_importer_default().
 */
function landwise_json_importer_feeds_importer_default() {
    $export = array();

/******/

$feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'landwise_json_importer';
$feeds_importer->config = array(
  'name' => 'LandWise JSON importer',
  'description' => 'Import landwise.resourceequity.org Land Library Resources from a JSON file',
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
        'jsonpath_parser:0' => 'record_title',
        'jsonpath_parser:1' => 'title',
        'jsonpath_parser:2' => 'record_creator',
        'jsonpath_parser:3' => 'publication_year',
        'jsonpath_parser:5' => 'item_language_ids',
        'jsonpath_parser:6' => 'record_id',
        'jsonpath_parser:7' => 'id',
        'jsonpath_parser:8' => 'record_collection_type_id',
        'jsonpath_parser:9' => 'record_country_ids',
        'jsonpath_parser:10' => 'record_topic_ids',
        'jsonpath_parser:11' => 'restricted',
        'jsonpath_parser:12' => 'record_description',
        'jsonpath_parser:13' => 'description',
      ),
      'debug' => array(
        'options' => array(
          'context' => 0,
          'jsonpath_parser:0' => 0,
          'jsonpath_parser:1' => 0,
          'jsonpath_parser:2' => 0,
          'jsonpath_parser:3' => 0,
          'jsonpath_parser:5' => 0,
          'jsonpath_parser:6' => 0,
          'jsonpath_parser:7' => 0,
          'jsonpath_parser:8' => 0,
          'jsonpath_parser:9' => 0,
          'jsonpath_parser:10' => 0,
          'jsonpath_parser:11' => 0,
          'jsonpath_parser:12' => 0,
          'jsonpath_parser:13' => 0,
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
          'source' => 'jsonpath_parser:0',
          'target' => 'Temporary target 1',
          'unique' => FALSE,
          'language' => 'und',
        ),
        2 => array(
          'source' => 'jsonpath_parser:1',
          'target' => 'Temporary target 2',
          'unique' => FALSE,
          'language' => 'und',
        ),
        3 => array(
          'source' => 'Blank source 2',
          'target' => 'title',
          'unique' => 0,
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
          'source' => 'Blank source 4',
          'target' => 'field_doc_publisher:label',
          'unique' => FALSE,
          'language' => 'und',
        ),
        7 => array(
          'source' => 'jsonpath_parser:3',
          'target' => 'field_doc_creation_date:start',
          'unique' => FALSE,
          'language' => 'und',
        ),
        8 => array(
          'source' => 'jsonpath_parser:5',
          'target' => 'field_doc_language',
          'unique' => FALSE,
          'language' => 'und',
        ),
        9 => array(
          'source' => 'jsonpath_parser:6',
          'target' => 'Temporary target 4',
          'unique' => FALSE,
          'language' => 'und',
        ),
        10 => array(
          'source' => 'jsonpath_parser:7',
          'target' => 'Temporary target 5',
          'unique' => FALSE,
          'language' => 'und',
        ),
        11 => array(
          'source' => 'Blank source 5',
          'target' => 'field_doc_identifier',
          'unique' => FALSE,
          'language' => 'und',
        ),
        12 => array(
          'source' => 'Blank source 6',
          'target' => 'field_doc_is_shown_at:url',
          'unique' => FALSE,
          'language' => 'und',
        ),
        13 => array(
          'source' => 'Blank source 7',
          'target' => 'field_doc_provider:label',
          'unique' => FALSE,
          'language' => 'und',
        ),
        14 => array(
          'source' => 'jsonpath_parser:8',
          'target' => 'field_doc_type',
          'unique' => FALSE,
          'language' => 'und',
        ),
        15 => array(
          'source' => 'jsonpath_parser:9',
          'target' => 'field_geographical_focus',
          'unique' => FALSE,
          'language' => 'und',
        ),
        16 => array(
          'source' => 'jsonpath_parser:10',
          'target' => 'Temporary target 6',
          'unique' => FALSE,
          'language' => 'und',
        ),
        17 => array(
          'source' => 'Blank source 8',
          'target' => 'field_related_domains',
          'unique' => FALSE,
          'language' => 'und',
        ),
        18 => array(
          'source' => 'Blank source 9',
          'target' => 'field_related_themes',
          'unique' => FALSE,
          'language' => 'und',
        ),
        19 => array(
          'source' => 'Blank source 10',
          'target' => 'field_related_topics',
          'unique' => FALSE,
          'language' => 'und',
        ),
        20 => array(
          'source' => 'jsonpath_parser:11',
          'target' => 'Temporary target 7',
          'unique' => FALSE,
          'language' => 'und',
        ),
        21 => array(
          'source' => 'jsonpath_parser:12',
          'target' => 'Temporary target 8',
          'unique' => FALSE,
          'language' => 'und',
        ),
        22 => array(
          'source' => 'jsonpath_parser:13',
          'target' => 'Temporary target 9',
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
          'source' => 'Blank source 12',
          'target' => 'field_image:uri',
          'file_exists' => '4',
          'language' => 'und',
        ),
        25 => array(
          'source' => 'Blank source 13',
          'target' => 'field_orgref:label',
          'unique' => FALSE,
          'language' => 'und',
        ),
        26 => array(
          'source' => 'Blank source 14',
          'target' => 'guid',
          'unique' => 1,
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
