<?php
/**
 * @file
 * mlrf_endnote_importer.feeds_importer_default.inc 
 */

/**
 * Implements hook_feeds_importer_default().
 */
function mlrf_endnote_importer_feeds_importer_default() {
  $export = array();

/*********************/

$feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'mlrf_endnote_importer';
$feeds_importer->config = array(
  'name' => 'Mekong Land Research Forum - EndNote importer',
  'description' => 'Import Mekong Land Research Forum Land Library Resources from an EndNote file',
  'fetcher' => array(
    'plugin_key' => 'FeedsFileFetcher',
    'config' => array(
      'allowed_extensions' => 'xml html htm',
      'direct' => 0,
      'directory' => 'private://feeds',
      'allowed_schemes' => array(
        'public' => 'public',
        'private' => 'private',
      ),
      'delete_uploaded_file' => FALSE,
    ),
  ),
  'parser' => array(
    'plugin_key' => 'FeedsXPathParserXML',
    'config' => array(
      'sources' => array(
        'xpathparser:0' => 'titles/title/style/text()',
        'xpathparser:10' => 'titles/title/style/text()',
        'xpathparser:1' => 'abstract/style/text()',
        'xpathparser:2' => 'isbn/style/text()',
        'xpathparser:3' => 'electronic-resource-num/style/text()',
        'xpathparser:4' => 'urls/web-urls/url/style/text()',
        'xpathparser:6' => 'dates/year/style/text()',
        'xpathparser:7' => 'publisher/style/text()',
        'xpathparser:8' => 'language/style/text()',
        'xpathparser:9' => 'custom4/style/text()',
        'xpathparser:11' => 'custom2/style/text()',
        'xpathparser:12' => 'keywords/keyword/style/text()',
        'xpathparser:14' => 'keywords/keyword/style/text()',
        'xpathparser:15' => 'keywords/keyword/style/text()',
        'xpathparser:16' => 'contributors/authors/author/style/text() | contributors/secondary-authors/author/style/text()',
        'xpathparser:17' => 'custom1/style/text()',
        'xpathparser:18' => 'pages/style/text()',
        'xpathparser:19' => 'custom6/style/text()',
      ),
      'rawXML' => array(
        'xpathparser:0' => 0,
        'xpathparser:10' => 0,
        'xpathparser:1' => 0,
        'xpathparser:2' => 0,
        'xpathparser:3' => 0,
        'xpathparser:4' => 0,
        'xpathparser:6' => 0,
        'xpathparser:7' => 0,
        'xpathparser:8' => 0,
        'xpathparser:9' => 0,
        'xpathparser:11' => 0,
        'xpathparser:12' => 0,
        'xpathparser:14' => 0,
        'xpathparser:15' => 0,
        'xpathparser:16' => 0,
        'xpathparser:17' => 0,
        'xpathparser:18' => 0,
        'xpathparser:19' => 0,
      ),
      'context' => '//record',
      'exp' => array(
        'errors' => 1,
        'debug' => array(
          'context' => 0,
          'xpathparser:0' => 0,
          'xpathparser:10' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
          'xpathparser:16' => 0,
          'xpathparser:17' => 0,
          'xpathparser:18' => 0,
          'xpathparser:19' => 0,
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
          'source' => 'xpathparser:0',
          'target' => 'title',
          'unique' => 0,
        ),
        1 => array(
          'source' => 'xpathparser:1',
          'target' => 'field_doc_description',
          'format' => 'full_html',
          'language' => 'und',
        ),
        2 => array(
          'source' => 'Blank source 1',
          'target' => 'user_name',
          'unique' => FALSE,
          'language' => 'und',
        ),
        3 => array(
          'source' => 'xpathparser:2',
          'target' => 'field_doc_identifier',
          'unique' => FALSE,
          'language' => 'und',
        ),
        4 => array(
          'source' => 'xpathparser:3',
          'target' => 'field_doc_identifier',
          'unique' => FALSE,
          'language' => 'und',
        ),
        5 => array(
          'source' => 'xpathparser:4',
          'target' => 'field_doc_is_shown_by:url',
          'unique' => FALSE,
          'language' => 'und',
        ),
        6 => array(
          'source' => 'xpathparser:6',
          'target' => 'field_doc_creation_date:start',
          'unique' => FALSE,
          'language' => 'und',
        ),
        7 => array(
          'source' => 'xpathparser:7',
          'target' => 'field_doc_publisher:label',
          'unique' => FALSE,
          'language' => 'und',
        ),
        8 => array(
          'source' => 'xpathparser:8',
          'target' => 'field_doc_language',
          'unique' => FALSE,
          'language' => 'und',
        ),
        9 => array(
          'source' => 'xpathparser:9',
          'target' => 'field_doc_type',
          'unique' => FALSE,
          'language' => 'und',
        ),
        10 => array(
          'source' => 'xpathparser:11',
          'target' => 'field_geographical_focus',
          'unique' => FALSE,
          'language' => 'und',
        ),
        11 => array(
          'source' => 'xpathparser:14',
          'target' => 'field_related_themes',
          'unique' => FALSE,
          'language' => 'und',
        ),
        12 => array(
          'source' => 'xpathparser:15',
          'target' => 'field_related_topics',
          'unique' => FALSE,
          'language' => 'und',
        ),
        13 => array(
          'source' => 'xpathparser:16',
          'target' => 'field_doc_people',
          'unique' => FALSE,
          'language' => 'und',
        ),
        14 => array(
          'source' => 'xpathparser:17',
          'target' => 'Temporary target 1',
          'unique' => FALSE,
          'language' => 'und',
        ),
        15 => array(
          'source' => 'Blank source 2',
          'target' => 'field_doc_provider:label',
          'unique' => FALSE,
          'language' => 'und',
        ),
        16 => array(
          'source' => 'xpathparser:18',
          'target' => 'field_doc_pagination',
          'unique' => FALSE,
          'language' => 'und',
        ),
        17 => array(
          'source' => 'Blank source 3',
          'target' => 'field_image:uri',
          'file_exists' => '4',
          'language' => 'und',
        ),
        18 => array(
          'source' => 'xpathparser:19',
          'target' => 'Temporary target 2',
          'unique' => FALSE,
          'language' => 'und',
        ),
        19 => array(
          'source' => 'Blank source 4',
          'target' => 'guid',
          'unique' => 1,
        ),
        20 => array(
          'source' => 'Blank source 5',
          'target' => 'field_doc_identifier',
          'unique' => FALSE,
          'language' => 'und',
        ),
        21 => array(
          'source' => 'Blank source 6',
          'target' => 'field_doc_is_shown_at:url',
          'unique' => FALSE,
          'language' => 'und',
        ),
      ),
      'insert_new' => '1',
      'update_existing' => '2',
      'update_non_existent' => 'skip',
      'input_format' => 'plain_text',
      'skip_hash_check' => 1,
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

/*********************/

  $export[$feeds_importer->id] = $feeds_importer;

  return $export;
}
