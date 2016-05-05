<?php
/**
 * FAO importer feeds
 *
 * Author: Jules Clement <jules@ker.bz>
 * Date: Oct. 2015
 */

function importer_fao_feeds_importer_default() {
    $export = array();

    $feeds_importer = new stdClass();
    $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
    $feeds_importer->api_version = 1;
    $feeds_importer->id = 'fao_preimport_authors';
    $feeds_importer->config = array(
        'name' => 'FAO Authors preimporter ',
        'description' => 'Preimport FAO authors  from API',
        'fetcher' => array(
            'plugin_key' => 'FeedsHTTPFetcher',
            'config' => array(
                'auto_detect_feeds' => 0,
                'use_pubsubhubbub' => 0,
                'designated_hub' => '',
                'request_timeout' => '999',
                'auto_scheme' => 'http',
                'accept_invalid_cert' => 1,
            ),
        ),
        'parser' => array(
            'plugin_key' => 'FeedsXPathParserXML',
            'config' => array(
                'sources' => array(
                    'xpathparser:0' => 'arr[@name="fdr_author"]/str/text()',
                ),
                'rawXML' => array(
                    'xpathparser:0' => 'xpathparser:0',
                ),
                'context' => '/response/result/doc',
                'exp' => array(
                    'errors' => 1,
                    'debug' => array(
                        'xpathparser:0' => 'xpathparser:0',
                        'context' => 0,
                    ),
                ),
                'allow_override' => 1,
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
                        'unique' => 1,
                    ),
                ),
                'update_existing' => '2',
                'update_non_existent' => 'skip',
                'input_format' => 'plain_text',
                'skip_hash_check' => 0,
                'bundle' => 'person',
            ),
        ),
        'content_type' => '',
        'update' => 0,
        'import_period' => '-1',
        'expire_period' => 3600,
        'import_on_create' => 0,
        'process_in_background' => 0,
    );

    $export[$feeds_importer->id] = $feeds_importer;

    $feeds_importer = new stdClass();
    $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
    $feeds_importer->api_version = 1;
    $feeds_importer->id = 'fao_importer';
    $feeds_importer->config = array(
        'name' => 'FAO importer',
        'description' => 'Import from http://www.fao.org/documents/api/search',
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
                    'xpathparser:0' => '',
                    'xpathparser:1' => 'arr[@name="fdr_abstract@en"]/str/text()',
                    'xpathparser:2' => 'arr[@name="fdr_pub_date"]/str/text()',
                    'xpathparser:3' => 'arr[@name="fdr_language"]/str/text()',
                    'xpathparser:6' => 'str[@name="fdr_default_file"]/text()',
                    'xpathparser:7' => 'str[@name="fdr_uuid"]/text()',
                    'xpathparser:4' => '/response/lst[@name=\'fdr-files\']/lst[@name=\'$field_doc_identifier\']/str[@name=\'file_url\']/text()',
                    'xpathparser:5' => '',
                    'xpathparser:8' => 'arr[@name="fdr_pages"]/text()',
                    'xpathparser:9' => '',
                    'xpathparser:10' => 'arr[@name="fdr_author"]/str/text()',
                    'xpathparser:11' => '',
                    'xpathparser:12' => 'arr[@name="fdr_c_subject_classification"]/str/text()',
                    'xpathparser:13' => '/response/lst[@name=\'fdr-related\']/lst[@name=\'$field_related_topics\']/str[@name="label@en"]/text()',
                    'xpathparser:14' => '',
                    'xpathparser:15' => 'arr[@name="fdr_c_document_type"]/str/text()',
                    'xpathparser:16' => '/response/lst[@name=\'fdr-related\']/lst[@name=\'$field_doc_type\']/str[@name="label@en"]/text()',
                    'xpathparser:17' => 'arr[@name="fdr_c_concept"]/str/text()',
                    'xpathparser:18' => '/response/lst[@name=\'fdr-related\']/lst[@name=\'$field_related_topics\']/str[@name="label@en"]/text()',
                    'xpathparser:19' => '',
                    'xpathparser:20' => 'arr[@name="fdr_title@en"]/str/text()',
                    'xpathparser:21' => '',
                ),
                'rawXML' => array(
                    'xpathparser:0' => 'xpathparser:0',
                    'xpathparser:4' => 'xpathparser:4',
                    'xpathparser:13' => 'xpathparser:13',
                    'xpathparser:16' => 'xpathparser:16',
                    'xpathparser:18' => 'xpathparser:18',
                    'xpathparser:1' => 0,
                    'xpathparser:2' => 0,
                    'xpathparser:3' => 0,
                    'xpathparser:6' => 0,
                    'xpathparser:7' => 0,
                    'xpathparser:5' => 0,
                    'xpathparser:8' => 0,
                    'xpathparser:9' => 0,
                    'xpathparser:10' => 0,
                    'xpathparser:11' => 0,
                    'xpathparser:12' => 0,
                    'xpathparser:14' => 0,
                    'xpathparser:15' => 0,
                    'xpathparser:17' => 0,
                    'xpathparser:19' => 0,
                    'xpathparser:20' => 0,
                    'xpathparser:21' => 0,
                ),
                'context' => '/response/result/doc',
                'exp' => array(
                    'errors' => 1,
                    'debug' => array(
                        'context' => 'context',
                        'xpathparser:0' => 'xpathparser:0',
                        'xpathparser:4' => 'xpathparser:4',
                        'xpathparser:5' => 'xpathparser:5',
                        'xpathparser:1' => 0,
                        'xpathparser:2' => 0,
                        'xpathparser:3' => 0,
                        'xpathparser:6' => 0,
                        'xpathparser:7' => 0,
                        'xpathparser:8' => 0,
                        'xpathparser:9' => 0,
                        'xpathparser:10' => 0,
                        'xpathparser:11' => 0,
                        'xpathparser:12' => 0,
                        'xpathparser:13' => 0,
                        'xpathparser:14' => 0,
                        'xpathparser:15' => 0,
                        'xpathparser:16' => 0,
                        'xpathparser:17' => 0,
                        'xpathparser:18' => 0,
                        'xpathparser:19' => 0,
                        'xpathparser:20' => 0,
                        'xpathparser:21' => 0,
                    ),
                ),
                'allow_override' => 1,
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
                        'unique' => 1,
                    ),
                    1 => array(
                        'source' => 'xpathparser:1',
                        'target' => 'field_doc_description',
                        'unique' => FALSE,
                    ),
                    2 => array(
                        'source' => 'xpathparser:2',
                        'target' => 'field_doc_creation_date:start',
                        'unique' => FALSE,
                    ),
                    3 => array(
                        'source' => 'xpathparser:3',
                        'target' => 'field_doc_language',
                        'unique' => FALSE,
                    ),
                    4 => array(
                        'source' => 'xpathparser:6',
                        'target' => 'field_doc_identifier',
                        'unique' => FALSE,
                    ),
                    5 => array(
                        'source' => 'xpathparser:7',
                        'target' => 'guid',
                        'unique' => FALSE,
                    ),
                    6 => array(
                        'source' => 'xpathparser:4',
                        'target' => 'field_doc_is_shown_by:url',
                        'unique' => FALSE,
                    ),
                    7 => array(
                        'source' => 'xpathparser:5',
                        'target' => 'field_doc_is_shown_at:url',
                        'unique' => FALSE,
                    ),
                    8 => array(
                        'source' => 'xpathparser:8',
                        'target' => 'field_doc_pagination',
                        'unique' => FALSE,
                    ),
                    9 => array(
                        'source' => 'xpathparser:9',
                        'target' => 'field_doc_provider:label',
                        'unique' => FALSE,
                    ),
                    10 => array(
                        'source' => 'xpathparser:10',
                        'target' => 'field_doc_creator:label',
                        'unique' => FALSE,
                    ),
                    11 => array(
                        'source' => 'xpathparser:11',
                        'target' => 'Temporary target 1',
                        'unique' => FALSE,
                    ),
                    12 => array(
                        'source' => 'xpathparser:12',
                        'target' => 'field_related_topics',
                        'term_search' => '0',
                        'autocreate' => 0,
                    ),
                    13 => array(
                        'source' => 'xpathparser:13',
                        'target' => 'field_related_topics',
                        'unique' => FALSE,
                    ),
                    14 => array(
                        'source' => 'xpathparser:14',
                        'target' => 'field_doc_data_provider:label',
                        'unique' => FALSE,
                    ),
                    15 => array(
                        'source' => 'xpathparser:15',
                        'target' => 'field_doc_type',
                        'unique' => FALSE,
                    ),
                    16 => array(
                        'source' => 'xpathparser:16',
                        'target' => 'field_doc_type',
                        'unique' => FALSE,
                    ),
                    17 => array(
                        'source' => 'xpathparser:17',
                        'target' => 'field_related_topics',
                        'unique' => FALSE,
                    ),
                    18 => array(
                        'source' => 'xpathparser:18',
                        'target' => 'field_related_topics',
                        'unique' => FALSE,
                    ),
                    19 => array(
                        'source' => 'xpathparser:19',
                        'target' => 'language',
                        'unique' => FALSE,
                    ),
                    20 => array(
                        'source' => 'xpathparser:20',
                        'target' => 'field_doc_title',
                        'unique' => FALSE,
                    ),
                    21 => array(
                        'source' => 'xpathparser:21',
                        'target' => 'title_field:et:en',
                        'unique' => FALSE,
                    ),
                    22 => array(
                        'source' => 'xpathparser:22',
                        'target' => 'title',
                        'unique' => 1,
                    ),
                ),
                'update_existing' => '2',
                'update_non_existent' => 'skip',
                'input_format' => 'plain_text',
                'skip_hash_check' => 0,
                'bundle' => 'landlibrary_resource',
            ),
        ),
        'content_type' => '',
        'update' => 0,
        'import_period' => '-1',
        'expire_period' => 3600,
        'import_on_create' => 0,
        'process_in_background' => 0,
    );

    $export[$feeds_importer->id] = $feeds_importer;

    return $export;
}
