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

/************/
$feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'odm_library_importer';
$feeds_importer->config = array(
  'name' => 'ODM importer',
  'description' => 'Import ODM Library resources from CKAN API in JSON format',
  'fetcher' => array(
    'plugin_key' => 'FeedsFileFetcher',
    'config' => array(
      'allowed_extensions' => 'txt csv tsv xml opml json',
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
      'context' => '$.result.results.*',
      'sources' => array(
        'jsonpath_parser:1' => 'id',
        'jsonpath_parser:2' => 'title',
        'jsonpath_parser:4' => 'notes',
        'jsonpath_parser:5' => 'resources[0].url',
        'jsonpath_parser:6' => 'taxonomy',
        'jsonpath_parser:7' => 'taxonomy',
        'jsonpath_parser:8' => 'odm_access_and_use_constraints[en]',
        'jsonpath_parser:9' => 'marc21_260c',
        'jsonpath_parser:10' => 'odm_language',
        'jsonpath_parser:11' => 'document_type',
        'jsonpath_parser:12' => 'marc21_100',
        'jsonpath_parser:13' => 'marc21_260a[en]',
        'jsonpath_parser:15' => 'organization.title',
        'jsonpath_parser:16' => 'marc21_300[en]',
        'jsonpath_parser:17' => 'marc21_700',
        'jsonpath_parser:18' => 'license_id',
        'jsonpath_parser:19' => 'odm_spatial_range',
        'jsonpath_parser:20' => 'marc21_020',
        'jsonpath_parser:21' => 'marc21_022',
        'jsonpath_parser:22' => 'taxonomy',
        'jsonpath_parser:23' => 'marc21_110',
        'jsonpath_parser:24' => 'marc21_710',
        'jsonpath_parser:25' => 'marc21_260b[en]',
      ),
      'debug' => array(
        'options' => array(
          'context' => 0,
          'jsonpath_parser:1' => 0,
          'jsonpath_parser:2' => 0,
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
          'jsonpath_parser:15' => 0,
          'jsonpath_parser:16' => 0,
          'jsonpath_parser:17' => 0,
          'jsonpath_parser:18' => 0,
          'jsonpath_parser:19' => 0,
          'jsonpath_parser:20' => 0,
          'jsonpath_parser:21' => 0,
          'jsonpath_parser:22' => 0,
          'jsonpath_parser:23' => 0,
          'jsonpath_parser:24' => 0,
          'jsonpath_parser:25' => 0,
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
          'source' => 'ODM author',
          'target' => 'user_name',
          'unique' => TRUE,
          'language' => 'und',
        ),
        1 => array(
          'source' => 'ODM url',
          'target' => 'field_doc_is_shown_at:url',
          'unique' => FALSE,
          'language' => 'und',
        ),
        2 => array(
          'source' => 'jsonpath_parser:1',
          'target' => 'guid',
          'unique' => 1,
          'language' => 'und',
        ),
        3 => array(
          'source' => 'jsonpath_parser:2',
          'target' => 'title',
          'unique' => FALSE,
          'language' => 'und',
        ),
        4 => array(
          'source' => 'jsonpath_parser:4',
          'target' => 'field_doc_description',
          'unique' => FALSE,
          'language' => 'und',
        ),
        5 => array(
          'source' => 'jsonpath_parser:5',
          'target' => 'field_doc_is_shown_by:url',
          'unique' => FALSE,
          'language' => 'und',
        ),
        6 => array(
          'source' => 'jsonpath_parser:6',
          'target' => 'field_doc_keyword',
          'term_search' => '0',
          'autocreate' => 1,
          'language' => 'und',
        ),
        7 => array(
          'source' => 'jsonpath_parser:7',
          'target' => 'field_related_topics',
          'term_search' => '0',
          'autocreate' => 0,
          'language' => 'und',
        ),
        8 => array(
          'source' => 'jsonpath_parser:8',
          'target' => 'field_doc_copyrights_statement',
          'unique' => FALSE,
          'language' => 'und',
        ),
        9 => array(
          'source' => 'jsonpath_parser:9',
          'target' => 'field_doc_creation_date:start',
          'unique' => FALSE,
          'language' => 'und',
        ),
        10 => array(
          'source' => 'jsonpath_parser:10',
          'target' => 'field_doc_language',
          'unique' => FALSE,
          'language' => 'und',
        ),
        11 => array(
          'source' => 'jsonpath_parser:11',
          'target' => 'field_doc_type',
          'unique' => FALSE,
          'language' => 'und',
        ),
        12 => array(
          'source' => 'jsonpath_parser:12',
          'target' => 'field_doc_people',
          'unique' => FALSE,
          'language' => 'und',
        ),
        13 => array(
          'source' => 'jsonpath_parser:13',
          'target' => 'field_doc_publisher_place',
          'unique' => FALSE,
          'language' => 'und',
        ),
        14 => array(
          'source' => 'jsonpath_parser:15',
          'target' => 'field_doc_provider:label',
          'unique' => FALSE,
          'language' => 'und',
        ),
        15 => array(
          'source' => 'jsonpath_parser:16',
          'target' => 'field_doc_pagination',
          'unique' => FALSE,
          'language' => 'und',
        ),
        16 => array(
          'source' => 'jsonpath_parser:17',
          'target' => 'Temporary target 1',
          'unique' => FALSE,
          'language' => 'und',
        ),
        17 => array(
          'source' => 'jsonpath_parser:18',
          'target' => 'field_doc_licencing',
          'unique' => FALSE,
          'language' => 'und',
        ),
        18 => array(
          'source' => 'jsonpath_parser:19',
          'target' => 'field_geographical_focus',
          'unique' => FALSE,
          'language' => 'und',
        ),
        19 => array(
          'source' => 'jsonpath_parser:20',
          'target' => 'field_doc_identifier',
          'unique' => FALSE,
          'language' => 'und',
        ),
        20 => array(
          'source' => 'jsonpath_parser:21',
          'target' => 'field_doc_identifier',
          'unique' => FALSE,
          'language' => 'und',
        ),
        21 => array(
          'source' => 'Blank source 1',
          'target' => 'field_related_domains',
          'unique' => FALSE,
          'language' => 'und',
        ),
        22 => array(
          'source' => 'jsonpath_parser:22',
          'target' => 'Temporary target 2',
          'unique' => FALSE,
          'language' => 'und',
        ),
        23 => array(
          'source' => 'Blank source 2',
          'target' => 'field_related_themes',
          'unique' => FALSE,
          'language' => 'und',
        ),
        24 => array(
          'source' => 'jsonpath_parser:23',
          'target' => 'Temporary target 3',
          'unique' => FALSE,
          'language' => 'und',
        ),
        25 => array(
          'source' => 'jsonpath_parser:24',
          'target' => 'Temporary target 4',
          'unique' => FALSE,
          'language' => 'und',
        ),
        26 => array(
          'source' => 'jsonpath_parser:25',
          'target' => 'field_doc_publisher:label',
          'unique' => FALSE,
          'language' => 'und',
        ),
        27 => array(
          'source' => 'Blank source 4',
          'target' => 'field_orgref:label',
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


/************/

    $export[$feeds_importer->id] = $feeds_importer;

    return $export;
}
