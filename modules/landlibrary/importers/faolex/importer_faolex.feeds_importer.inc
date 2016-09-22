<?php
/**
 * FAOLEX importer feeds
 *
 * Author: Jules Clement <jules@ker.bz>
 * Date: Oct. 2015
 */

// http://landportal.ker/admin/structure/feeds/faolex/export
function importer_faolex_feeds_importer_default() {
    $export = array();

    $feeds_importer = new stdClass();
    $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
    $feeds_importer->api_version = 1;
    $feeds_importer->id = 'faolex_importer';
    $feeds_importer->config = array(
        'name' => 'FAOLEX importer',
        'description' => 'Import FAOLEX records from an Isis filter, exported as a list of tables',
        'fetcher' => array(
            'plugin_key' => 'FeedsCrawlerPattern',
            'config' => array(
                'num_pages' => 50,
                'first_run' => 0,
                'delay' => 5,
                'auto_detect_feeds' => 0,
                'use_pubsubhubbub' => 0,
                'designated_hub' => '',
                'request_timeout' => 120,
                'auto_scheme' => 'http',
                'accept_invalid_cert' => 0,
            ),
        ),
        'parser' => array(
            'plugin_key' => 'FeedsXPathParserHTML',
            'config' => array(
                'sources' => array(
                    'xpathparser:0' => 'tr[1]/td[2]/text()',
                    'xpathparser:1' => 'tr[td[1]/node()=\'Title of Text:\']/td[2]/text()',
                    'xpathparser:2' => 'tr[td[1]/node()=\'Long Title:\']/td[2]/text()',
                    'xpathparser:3' => 'tr[td[1]/node()=\'Original Title:\']/td[2]/text()',

                    'xpathparser:4' => 'tr[td[1]/node()=\'Type of Text:\']/td[2]/text()',
                    'xpathparser:5' => 'tr[td[1]/node()=\'Country:\']/td[2]/text()',
                    'xpathparser:6' => 'tr[td[1]/node()=\'Language of the FAOLEX Record:\']/td[2]/text()',
                    'xpathparser:7' => 'tr[td[1]/node()=\'Language of Received Document:\']/td[2]/text()',
                    'xpathparser:8' => 'tr[td[1]/node()=\'Date of Entry:\']/td[2]/text()',
                    'xpathparser:9' => 'tr[td[1]/node()=\'Date of Text:\']/td[2]/text()',
                    'xpathparser:10' => 'tr[td[1]/node()=\'Abstract:\']/td[2]/text()',

                    'xpathparser:11' => 'tr[td[1]/node()=\'Descriptors (LA):\']/td[2]/text()',
                    'xpathparser:12' => 'tr[td[1]/node()=\'Related Web Site:\']/td[2]/text()',

/*
                    'xpathparser:13' => 'tr[td[1]/node()=\'Related Files:\']/td[2]/a/@href',
                    'xpathparser:14' => 'tr[td[1]/node()=\'Related Files:\']/td[2]/a/text()',
'xpathparser:X' => 'tr[td[1]/node()=\':\']/td[2]/text()',

TODO / ADD
Territorial Subdivision:
...

*/

                ),
                'rawXML' => array(
                    'xpathparser:0' => 0,
                    'xpathparser:1' => 0,
                    'xpathparser:2' => 0,
                    'xpathparser:3' => 0,
                    'xpathparser:5' => 0,
                    'xpathparser:6' => 0,
                    'xpathparser:7' => 0,
                    'xpathparser:8' => 0,
                    'xpathparser:9' => 0,
                    'xpathparser:10' => 'xpathparser:10',
                    'xpathparser:11' => 0,
                    'xpathparser:12' => 0,
                    /* 'xpathparser:13' => 0, */
                    /* 'xpathparser:14' => 0, */
                    /* 'xpathparser:15' => 0, */
                    /* 'xpathparser:16' => 0, */
                ),
                'context' => '//table[position()>2 and not(position()=last())]',
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
                        'xpathparser:5' => 0,
                        'xpathparser:6' => 0,
                        'xpathparser:7' => 0,
                        'xpathparser:8' => 0,
                        'xpathparser:9' => 0,
                        'xpathparser:10' => 0,
                        'xpathparser:11' => 0,
                        'xpathparser:12' => 0,
                        /* 'xpathparser:13' => 0, */
                        /* 'xpathparser:14' => 0, */
                        /* 'xpathparser:15' => 0, */
                        /* 'xpathparser:16' => 0, */
                        /* 'xpathparser:17' => 0, */
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
                        'target' => 'field_doc_identifier',
                        'unique' => FALSE,
                    ),
                    1 => array(
                        'source' => 'xpathparser:1',
                        'target' => 'title',
                        'unique' => FALSE,
                    ),
                    2 => array(
                        'source' => 'xpathparser:2',
                        'target' => 'field_doc_alt_title',
                        'unique' => FALSE,
                    ),
                    3 => array(
                        'source' => 'xpathparser:3',
                        'target' => 'field_doc_alt_title',
                        'unique' => FALSE,
                    ),
                    4 => array(
                        'source' => 'xpathparser:4',
                        'target' => 'field_doc_type',
                        'unique' => FALSE,
                    ),
                    5 => array(
                        'source' => 'xpathparser:5',
                        'target' => 'field_geographical_focus',
                        'unique' => FALSE,
                    ),
                    6 => array(
                        'source' => 'xpathparser:6',
                        'target' => 'language',
                        'unique' => FALSE,
                    ),
                    7 => array(
                        'source' => 'xpathparser:7',
                        'target' => 'field_doc_language',
                        'unique' => FALSE,
                    ),
                    8 => array(
                        'source' => 'xpathparser:8',
                        'target' => 'created',
                        //'target' => 'field_doc_creation_date:start',
                        'unique' => FALSE,
                    ),
                    9 => array(
                        'source' => 'xpathparser:9',
                        'target' => 'field_doc_creation_date:start',
                        'unique' => FALSE,
                    ),

                    10 => array(
                        'source' => 'xpathparser:10',
                        'target' => 'field_doc_description',
                        'unique' => FALSE,
                    ),
                    11 => array(
                        'source' => 'xpathparser:11',
                        'target' => 'rules_autotag_field_doc_keyword',
                        'unique' => FALSE,
                    ),
                    12 => array(
                        'source' => 'xpathparser:12',
                        'target' => 'field_doc_is_shown_by:url', // original source website?
                        'unique' => FALSE,
                    ),

                    // Manually set records
                    13 => array(
                        'source' => 'FAOLEXorg',
                        'target' => 'field_doc_provider:label',
                        'unique' => FALSE,
                    ),
                    14 => array(
                        'source' => 'FAOLEXuri',
                        'target' => 'field_doc_is_shown_at:url',
                        'unique' => FALSE,
                    ),
                    15 => array(
                        'source' => 'FAOLEXowner',
                        'target' => 'uid',
                        'unique' => FALSE,
                    ),
                    /* 18 => array( */
                    /*     'source' => 'xpathparser:17', */
                    /*     'target' => 'field_geographical_focus', */
                    /*     'unique' => FALSE, */
                    /* ), */
                    /* 16 => array( */
                    /*     'source' => 'FAOLEXdocId', //FAOLEXdocId', */
                    /*     'target' => 'title_field:et:und', */
                    /*     'unique' => FALSE, */
                    /* ), */
                    17 => array(
                        'source' => 'FAOLEXdocId', //FAOLEXdocId',
                        'target' => 'field_doc_title',
                        'unique' => TRUE,
                    ),
                    18 => array(
                        'source' => 'FAOLEXcopy',
                        'target' => 'field_doc_copyrights_statement',
                        'unique' => FALSE,
                    ),
                ),
                'update_existing' => '2',
                'update_non_existent' => 'skip',
                'input_format' => 'filtered_html',
                'skip_hash_check' => 0,
                'bundle' => 'landlibrary_resource',
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
