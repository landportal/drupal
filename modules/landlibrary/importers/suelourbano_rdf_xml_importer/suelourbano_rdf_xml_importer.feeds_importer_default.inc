<?php
/**
 * @file
 * suelourbano_rdf_xml_importer.feeds_importer_default.inc 
 */

/**
 * Implements hook_feeds_importer_default().
 */
function suelourbano_rdf_xml_importer_feeds_importer_default() {
  $export = array();
  
/******/
$feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'suelourbano_rdf_xml_importer';
$feeds_importer->config = array(
  'name' => 'suelourbano.org - RDF/XML importer',
  'description' => 'Import suelourbano.org Land Library Resources from an RDF/XML file',
  'fetcher' => array(
    'plugin_key' => 'FeedsFileFetcher',
    'config' => array(
      'allowed_extensions' => 'txt csv tsv xml opml rdf',
      'delete_uploaded_file' => FALSE,
      'direct' => FALSE,
      'directory' => 'private://feeds',
      'allowed_schemes' => array(
        0 => 'public',
        1 => 'private',
      ),
    ),
  ),
  'parser' => array(
    'plugin_key' => 'FeedsXPathParserXML',
    'config' => array(
      'sources' => array(
        'xpathparser:0' => 'dc:title/text()',
        'xpathparser:1' => 'dc:description/text()',
        'xpathparser:2' => 'dct:identifier/text()',
        'xpathparser:4' => 'string(bibo:uri/@rdf:resource)',
        'xpathparser:6' => 'dct:date/text()',
        'xpathparser:7' => 'dc:publisher/text()',
        'xpathparser:8' => 'dc:language/text()',
        'xpathparser:9' => 'dc:type/text()',
        'xpathparser:12' => 'dc:subject/text()',
        'xpathparser:14' => 'dc:subject/text()',
        'xpathparser:15' => 'dc:subject/text()',
        'xpathparser:16' => 'dc:author/text()',
        'xpathparser:18' => '',
        'xpathparser:19' => 'dc:publisher/text()',
        'xpathparser:20' => 'string(schema:image/@rdf:resource)',
        'xpathparser:21' => 'dc:author/text()',
        'xpathparser:22' => 'string(@rdf:about)',
        'xpathparser:23' => 'dc:coverage/text()',
      ),
      'rawXML' => array(
        'xpathparser:0' => 0,
        'xpathparser:1' => 0,
        'xpathparser:2' => 0,
        'xpathparser:4' => 0,
        'xpathparser:6' => 0,
        'xpathparser:7' => 0,
        'xpathparser:8' => 0,
        'xpathparser:9' => 0,
        'xpathparser:12' => 0,
        'xpathparser:14' => 0,
        'xpathparser:15' => 0,
        'xpathparser:16' => 0,
        'xpathparser:18' => 0,
        'xpathparser:19' => 0,
        'xpathparser:20' => 0,
        'xpathparser:21' => 0,
        'xpathparser:22' => 0,
        'xpathparser:23' => 0,
      ),
      'context' => '//rdf:Description',
      'exp' => array(
        'errors' => 1,
        'debug' => array(
          'context' => 0,
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:4' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:12' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
          'xpathparser:16' => 0,
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
          'source' => 'xpathparser:0',
          'target' => 'title',
          'unique' => FALSE,
          'language' => 'und',
        ),
        1 => array(
          'source' => 'xpathparser:1',
          'target' => 'field_doc_description',
          'unique' => FALSE,
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
          'source' => 'Blank source 3',
          'target' => 'guid',
          'unique' => 1,
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
          'term_search' => '1',
          'autocreate' => 0,
          'language' => 'und',
        ),
        9 => array(
          'source' => 'xpathparser:9',
          'target' => 'field_doc_type',
          'unique' => FALSE,
          'language' => 'und',
        ),
        10 => array(
          'source' => 'xpathparser:12',
          'target' => 'field_related_domains',
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
          'source' => 'Blank source 2',
          'target' => 'field_doc_provider:label',
          'unique' => FALSE,
          'language' => 'und',
        ),
        15 => array(
          'source' => 'xpathparser:18',
          'target' => 'field_doc_pagination',
          'unique' => FALSE,
          'language' => 'und',
        ),
        16 => array(
          'source' => 'xpathparser:19',
          'target' => 'field_doc_copyrights_statement',
          'unique' => FALSE,
          'language' => 'und',
        ),
        17 => array(
          'source' => 'xpathparser:20',
          'target' => 'field_image:uri',
          'file_exists' => '4',
        ),
        18 => array(
          'source' => 'xpathparser:21',
          'target' => 'field_orgref:label',
          'unique' => FALSE,
          'language' => 'und',
        ),
        19 => array(
          'source' => 'xpathparser:22',
          'target' => 'field_doc_is_shown_at:url',
          'unique' => FALSE,
          'language' => 'und',
        ),
        20 => array(
          'source' => 'xpathparser:23',
          'target' => 'Temporary target 1',
          'unique' => FALSE,
          'language' => 'und',
        ),
        21 => array(
          'source' => 'Blank source 4',
          'target' => 'field_geographical_focus',
          'term_search' => '1',
          'autocreate' => 0,
          'language' => 'und',
        ),
        22 => array(
          'source' => 'Blank source 5',
          'target' => 'field_geographical_focus',
          'term_search' => '1',
          'autocreate' => 0,
          'language' => 'und',
        ),
        23 => array(
          'source' => 'Blank source 6',
          'target' => 'title_field:et:und',
          'unique' => FALSE,
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

/******/
  $export[$feeds_importer->id] = $feeds_importer;

  return $export;
}
