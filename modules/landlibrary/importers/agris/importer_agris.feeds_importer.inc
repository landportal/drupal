<?php
/**
 * AGRIS importer
 *
 * Author: Jules Clement <jules@ker.bz>
 * Date: Oct. 2015
 */

/**
 * Implements hook_feeds_importer_default().
 */
function importer_agris_feeds_importer_default() {
    $export = array();

    $feeds_importer = new stdClass();
    $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
    $feeds_importer->api_version = 1;
    $feeds_importer->id = 'agris_importer';
    $feeds_importer->config = array(
        'name' => 'AGRIS XML importer',
        'description' => '',
        'fetcher' => array(
            'plugin_key' => 'feeds_fetcher_directory_fetcher',
            'config' => array(
                'recursive' => 1,
                'directory' => 'private://feeds/agris/',
                'filemask' => '/\\.xml$/',
                'updated_files' => 0,
            ),
        ),
        'parser' => array(
            'plugin_key' => 'FeedsXPathParserXML',
            'config' => array(
                'sources' => array(
                    'xpathparser:0' => 'dc:title[1]/text()',
                    'xpathparser:1' => 'dc:title[1]/text()',
                    'xpathparser:2' => 'dc:subject[not(ags:subjectClassification)]/text()',
                    'xpathparser:3' => 'concat(/ags:resources/ags:resource/dc:description/dcterms:abstract/text()  , /ags:resources/ags:resource/dc:description/ags:descriptionNotes/text())',
                    'xpathparser:4' => 'dc:language/text()',
                    'xpathparser:5' => 'dc:format/dcterms:extent/text()',
                    'xpathparser:6' => 'dc:subject/ags:subjectThesaurus/text()',
                    'xpathparser:8' => 'dc:publisher/ags:publisherPlace/text()',
                    'xpathparser:9' => 'dc:creator/ags:creatorPersonal/text()',
                    'xpathparser:10' => 'dc:publisher/ags:publisherName/text()',
                    'xpathparser:12' => '',
                    'xpathparser:14' => 'dc:date/dcterms:dateIssued/text()',
                    'xpathparser:16' => 'dc:language/text()',
                    'xpathparser:17' => '@ags:ARN',
                    'xpathparser:18' => 'dc:identifier[@scheme="dcterms:URI"]/text()',
                    'xpathparser:19' => 'dc:publisher/ags:publisherName/text()',
                    'xpathparser:20' => 'dc:relation/dcterms:isPartOf[@scheme="dcterms:URI"]/text()',
                    'xpathparser:21' => 'ags:citation/ags:citationNumber/text()',
                    'xpathparser:22' => 'ags:citation/ags:citationChronology/text()',
                    'xpathparser:23' => 'ags:citation/ags:citationTitle[@xml:lang="En"]/text()',
                    'xpathparser:24' => 'dc:creator/ags:creatorConference/text()',
                ),
                'rawXML' => array(
                    'xpathparser:0' => 0,
                    'xpathparser:1' => 0,
                    'xpathparser:2' => 0,
                    'xpathparser:3' => 0,
                    'xpathparser:4' => 0,
                    'xpathparser:5' => 0,
                    'xpathparser:6' => 0,
                    'xpathparser:8' => 0,
                    'xpathparser:9' => 0,
                    'xpathparser:10' => 0,
                    'xpathparser:12' => 0,
                    'xpathparser:14' => 0,
                    'xpathparser:16' => 0,
                    'xpathparser:17' => 0,
                    'xpathparser:18' => 0,
                    'xpathparser:19' => 0,
                    'xpathparser:20' => 0,
                    'xpathparser:21' => 0,
                    'xpathparser:22' => 0,
                    'xpathparser:23' => 0,
                    'xpathparser:24' => 0,
                ),
                'context' => '/ags:resources/ags:resource',
                'exp' => array(
                    'errors' => 1,
                    'tidy' => 1,
                    'tidy_encoding' => 'UTF8',
                    'debug' => array(
                        'context' => 0,
                        'xpathparser:0' => 0,
                        'xpathparser:1' => 0,
                        'xpathparser:2' => 0,
                        'xpathparser:3' => 0,
                        'xpathparser:4' => 0,
                        'xpathparser:5' => 0,
                        'xpathparser:6' => 0,
                        'xpathparser:8' => 0,
                        'xpathparser:9' => 0,
                        'xpathparser:10' => 0,
                        'xpathparser:12' => 0,
                        'xpathparser:14' => 0,
                        'xpathparser:16' => 0,
                        'xpathparser:17' => 0,
                        'xpathparser:18' => 0,
                        'xpathparser:19' => 0,
                        'xpathparser:20' => 0,
                        'xpathparser:21' => 0,
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
                        'source' => 'xpathparser:0',
                        'target' => 'field_doc_title',
                        'unique' => TRUE,
                    ),
                    1 => array(
                        'source' => 'xpathparser:1',
                        'target' => 'title',
                        'unique' => FALSE,
                    ),
                    2 => array(
                        'source' => 'xpathparser:2',
                        'target' => 'field_doc_keyword',
                        'term_search' => '0',
                        'autocreate' => 0,
                    ),
                    3 => array(
                        'source' => 'xpathparser:3',
                        'target' => 'field_doc_description',
                        'unique' => FALSE,
                    ),
                    4 => array(
                        'source' => 'xpathparser:4',
                        'target' => 'field_doc_language',
                        'unique' => FALSE,
                    ),
                    5 => array(
                        'source' => 'xpathparser:5',
                        'target' => 'field_doc_pagination',
                        'unique' => FALSE,
                    ),
                    6 => array(
                        'source' => 'xpathparser:6',
                        'target' => 'field_related_topics',
                        'term_search' => '0',
                        'autocreate' => 0,
                    ),
                    7 => array(
                        'source' => 'xpathparser:8',
                        'target' => 'field_doc_publisher_place',
                        'term_search' => '0',
                        'autocreate' => 1,
                    ),
                    8 => array(
                        'source' => 'xpathparser:9',
                        'target' => 'field_doc_creator:label',
                        'unique' => FALSE,
                    ),
                    9 => array(
                        'source' => 'xpathparser:10',
                        'target' => 'field_doc_publisher:label',
                        'unique' => FALSE,
                    ),
                    10 => array(
                        'source' => 'xpathparser:12',
                        'target' => 'field_doc_provider:label',
                        'unique' => FALSE,
                    ),
                    11 => array(
                        'source' => 'xpathparser:14',
                        'target' => 'field_doc_creation_date:start',
                        'unique' => FALSE,
                    ),
                    12 => array(
                        'source' => 'xpathparser:16',
                        'target' => 'language',
                        'unique' => FALSE,
                    ),
                    13 => array(
                        'source' => 'xpathparser:17',
                        'target' => 'field_doc_identifier',
                        'unique' => FALSE,
                    ),
                    14 => array(
                        'source' => 'xpathparser:18',
                        'target' => 'field_doc_is_shown_by:title',
                        'unique' => FALSE,
                    ),
                    15 => array(
                        'source' => 'xpathparser:19',
                        'target' => 'field_doc_data_provider:label',
                        'unique' => FALSE,
                    ),
                    16 => array(
                        'source' => 'xpathparser:20',
                        'target' => 'field_doc_is_part_of:url',
                        'unique' => FALSE,
                    ),
                    17 => array(
                        'source' => 'xpathparser:21',
                        'target' => 'field_doc_citation_number',
                        'unique' => FALSE,
                    ),
                    18 => array(
                        'source' => 'xpathparser:22',
                        'target' => 'field_doc_citation_chronology:start',
                        'unique' => FALSE,
                    ),
                    19 => array(
                        'source' => 'xpathparser:23',
                        'target' => 'field_doc_citation',
                        'unique' => FALSE,
                    ),
                    20 => array(
                        'source' => 'xpathparser:24',
                        'target' => 'field_doc_conference:label',
                        'unique' => FALSE,
                    ),
                    21 => array(
                        'source' => 'xpathparser:25',
                        'target' => 'field_doc_is_shown_by:url',
                        'unique' => FALSE,
                    ),
                    22 => array(
                        'source' => 'xpathparser:26',
                        'target' => 'title_field:et:en',
                        'unique' => FALSE,
                    ),
                    23 => array(
                        'source' => 'xpathparser:27',
                        'target' => 'title',
                        'unique' => FALSE,
                    ),
                ),
                'update_existing' => '2',
                'input_format' => 'plain_text',
                'skip_hash_check' => 0,
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

    $export[$feeds_importer->id] = $feeds_importer; 
    return $export;
}
