<?php

$feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'ifpri_importer';
$feeds_importer->config = array(
  'name' => 'IFPRI importer',
  'description' => 'Import IFPRI\'s xml files from directory',
  'fetcher' => array(
    'plugin_key' => 'feeds_fetcher_directory_fetcher',
    'config' => array(
      'recursive' => 1,
      'filemask' => '/\\.xml$/',
      'updated_files' => 1,
    ),
  ),
  'parser' => array(
    'plugin_key' => 'FeedsXPathParserXML',
    'config' => array(
      'sources' => array(
        'xpathparser:0' => 'dc:identifier[last()-1]/text()',
        'xpathparser:1' => 'dc:title[1]/text()',
        'xpathparser:2' => 'dc:type/text()',
        'xpathparser:3' => 'dc:format/text()',
        'xpathparser:4' => 'dc:publisher[2]/text()',
        'xpathparser:5' => 'dc:subject[2]/text()',
        'xpathparser:6' => 'dc:description[1]/text()',
        'xpathparser:7' => 'dc:language/text()',
        'xpathparser:10' => 'dc:date[1]/text()',
        'xpathparser:12' => 'dc:publisher[1]/text()',
        'xpathparser:14' => 'dc:identifier[last()]/text()',
        'xpathparser:17' => 'dc:date[1]/text()',
        'xpathparser:19' => 'concat(/oai_dc:dc/dc:subject[1]/text()  , /oai_dc:dc/dc:subject[2]/text())',
        'xpathparser:20' => 'dc:creator[1]/text()',
        //'xpathparser:21' => 'dc:language/text()',
        'xpathparser:22' => 'concat(/oai_dc:dc/dc:subject[1]/text()  , /oai_dc:dc/dc:subject[2]/text(), /oai_dc:dc/dc:subject[3]/text())',
        'xpathparser:23' => 'dc:relation/text()',
        'xpathparser:24' => 'dc:title[1]/text()',
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
        'xpathparser:10' => 0,
        'xpathparser:12' => 0,
        'xpathparser:14' => 0,
        'xpathparser:17' => 0,
        'xpathparser:19' => 0,
        'xpathparser:20' => 0,
        //'xpathparser:21' => 0,
        'xpathparser:22' => 0,
        'xpathparser:23' => 0,
        'xpathparser:24' => 0,
      ),
      'context' => '/oai_dc:dc',
      'exp' => array(
        'errors' => 1,
        'tidy' => 0,
        'tidy_encoding' => 'UTF8',
        'debug' => array(
          /* 'xpathparser:7' => 'xpathparser:7', */
          'context' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:10' => 0,
          'xpathparser:12' => 0,
          'xpathparser:14' => 0,
          'xpathparser:17' => 0,
          'xpathparser:19' => 0,
          'xpathparser:20' => 0,
          'xpathparser:22' => 0,
          'xpathparser:23' => 0,
          'xpathparser:24' => 0,
        ),
      ),
      'allow_override' => 0,
    ),
  ),
  'processor' => array(
    'plugin_key' => 'FeedsNodeProcessor',
    'config' => array(
      'expire' => '-1',
      'author' => '1',
      'authorize' => 1,
      'mappings' => array(
        0 => array(
          'source' => 'xpathparser:1',
          'target' => 'title',
          'unique' => TRUE,
        ),
        1 => array(
          'source' => 'xpathparser:0',
          'target' => 'field_doc_identifier',
          'unique' => FALSE,
        ),
        2 => array(
          'source' => 'xpathparser:2',
          'target' => 'field_doc_type',
          'term_search' => '0',
          'autocreate' => 0,
        ),
        3 => array(
          'source' => 'xpathparser:3',
          'target' => 'field_doc_pagination',
          'unique' => FALSE,
        ),
        4 => array(
          'source' => 'xpathparser:4',
          'target' => 'field_doc_publisher_place',
          'term_search' => '0',
          'autocreate' => 0,
        ),
        5 => array(
          'source' => 'xpathparser:5',
          'target' => 'field_doc_keyword',
          'unique' => FALSE,
        ),
        6 => array(
          'source' => 'xpathparser:6',
          'target' => 'field_doc_description',
          'unique' => FALSE,
        ),
        7 => array(
          'source' => 'xpathparser:7',
          'target' => 'language',
          'unique' => FALSE,
        ),
        8 => array(
          'source' => 'xpathparser:10',
          'target' => 'field_doc_creation_date:end',
          'unique' => FALSE,
        ),
        10 => array(
          'source' => 'xpathparser:12',
          'target' => 'field_doc_publisher:label',
          'unique' => FALSE,
          //'autocreate' => 1,
        ),
        12 => array(
          'source' => 'xpathparser:14',
          'target' => 'field_doc_is_shown_at:url',
          'unique' => FALSE,
        ),
        14 => array(
          'source' => 'xpathparser:17',
          'target' => 'field_doc_creation_date:start',
          'unique' => FALSE,
        ),
        15 => array(
          'source' => 'xpathparser:19',
          'target' => 'field_related_topics',
          'unique' => FALSE,
        ),
        16 => array(
          'source' => 'xpathparser:20',
          'target' => 'field_doc_creator:label',
          'unique' => FALSE,
        ),
        17 => array(
          'source' => 'xpathparser:22',
          'target' => 'tmp-location',
          'unique' => FALSE,
        ),
        18 => array(
          'source' => 'xpathparser:23',
          'target' => 'tmp-relation',
          'unique' => FALSE,
        ),
        19 => array(
          'source' => 'xpathparser:24',
          'target' => 'field_doc_title',
          'unique' => FALSE,
        ),
        20 => array(
          'source' => 'Blank source 1',
          'target' => 'field_doc_copyrights_statement',
          'unique' => FALSE,
        ),
        /* 21 => array( */
        /*   'source' => 'Blank source 2', */
        /*   'target' => 'path_alias', */
        /*   'unique' => FALSE, */
        /* ), */
        22 => array(
          'source' => 'Blank source 3',
          'target' => 'field_doc_provider:label',
          'unique' => FALSE,
        ),
        23 => array(
          'source' => 'Blank source 4',
          'target' => 'field_doc_relation:title',
          'unique' => FALSE,
        ),
        24 => array(
          'source' => 'Blank source 5',
          'target' => 'field_doc_relation:url',
          'unique' => FALSE,
        ),
        25 => array(
          'source' => 'Blank source 6',
          'target' => 'field_doc_language',
          'term_search' => '0',
          'autocreate' => 0,
          //'unique' => FALSE,
        ),
        26 => array(
          'source' => 'Blank source 7',
          'target' => 'field_geographical_focus',
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
