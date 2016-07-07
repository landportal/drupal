<?php
/**
 * @file
 * agris_xml_new_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function agris_xml_new_importer_feeds_tamper_default() {
    $export = array();

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_26-copy';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:26';
    $feeds_tamper->plugin_id = 'copy';
    $feeds_tamper->settings = array(
        'to_from' => 'from',
        'source' => 'xpathparser:0',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Copy source value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_0-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 6;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_0-find_replace_regex1';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'find_replace_regex';
    $feeds_tamper->settings = array(
        'find' => '/\\n/',
        'replace' => '',
        'limit' => '1',
        'real_limit' => '1',
    );
    $feeds_tamper->weight = 5;
    $feeds_tamper->description = 'Find replace new line /\\n/ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_0-find_replaces';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 7;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_0-required';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'required';
    $feeds_tamper->settings = array(
        'invert' => 0,
        'log' => 0,
    );
    $feeds_tamper->weight = 10;
    $feeds_tamper->description = 'Required field';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_0-trim';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 8;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_0-truncate_text';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'truncate_text';
    $feeds_tamper->settings = array(
        'num_char' => '255',
        'ellipses' => 0,
        'wordsafe' => 0,
    );
    $feeds_tamper->weight = 9;
    $feeds_tamper->description = 'Truncate';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_1-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:1';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 3;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_1-find_replace_regex';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:1';
    $feeds_tamper->plugin_id = 'find_replace_regex';
    $feeds_tamper->settings = array(
        'find' => '/\\n/',
        'replace' => '',
        'limit' => '1',
        'real_limit' => '1',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Find replace new line /\\n/ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_1-find_replaces';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:1';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 4;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_1-required';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:1';
    $feeds_tamper->plugin_id = 'required';
    $feeds_tamper->settings = array(
        'invert' => 0,
        'log' => 0,
    );
    $feeds_tamper->weight = 7;
    $feeds_tamper->description = 'Required field';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_1-trim';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:1';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 5;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_1-truncate_text';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:1';
    $feeds_tamper->plugin_id = 'truncate_text';
    $feeds_tamper->settings = array(
        'num_char' => '255',
        'ellipses' => 0,
        'wordsafe' => 0,
    );
    $feeds_tamper->weight = 6;
    $feeds_tamper->description = 'Truncate';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_12-default_value';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:12';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'AGRIS',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Set default value AGRIS';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_12-trim';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:12';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_14-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:14';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '<![CDATA[',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_14-find_replace1';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:14';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_14-trim';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:14';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_16-default_value';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:16';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'en',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Set default value en';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_17-required';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:17';
    $feeds_tamper->plugin_id = 'required';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Required field';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_17-trim';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:17';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_18-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:18';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_18-find_replacee';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:18';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_18-trim';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:18';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_2-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:2';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 8;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_2-find_replaces';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:2';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 9;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_2-html_entity_decode';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:2';
    $feeds_tamper->plugin_id = 'html_entity_decode';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 10;
    $feeds_tamper->description = 'HTML entity decode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_2-trim';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:2';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 13;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_20-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:20';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_20-find_replace1';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:20';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_20-trim';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:20';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_21-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:21';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_21-find_replace5';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:21';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_21-trim';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:21';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_22-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:22';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_22-find_replacexxx';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:22';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_22-trim';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:22';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_23-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:23';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_23-find_replace0';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:23';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_23-trim';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:23';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 3;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_25-copy';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:25';
    $feeds_tamper->plugin_id = 'copy';
    $feeds_tamper->settings = array(
        'to_from' => 'from',
        'source' => 'xpathparser:18',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Copy source value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_27-copy';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:27';
    $feeds_tamper->plugin_id = 'copy';
    $feeds_tamper->settings = array(
        'to_from' => 'from',
        'source' => 'xpathparser:0',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Copy source value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_28-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:28';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace3';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_28-find_replace4';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:28';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_29-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:29';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_29-find_replace_1';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:29';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_3-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:3';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_3-find_replaces';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:3';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 3;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_3-html_entity_decode';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:3';
    $feeds_tamper->plugin_id = 'html_entity_decode';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'HTML entity decode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_3-required';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:3';
    $feeds_tamper->plugin_id = 'required';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 4;
    $feeds_tamper->description = 'Required field';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_3-strip_tags';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:3';
    $feeds_tamper->plugin_id = 'strip_tags';
    $feeds_tamper->settings = array(
        'allowed_tags' => '',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Strip tags';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_3-trim';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:3';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 5;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_30-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:30';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_30-find_replace2';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:30';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace1';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_31-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:31';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_31-find_replace4';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:31';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_32-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:32';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_32-find_replace4';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:32';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replacer';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_33-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:33';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_33-find_replacef';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:33';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_34-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:34';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_34-find_replaced';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:34';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_35-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:35';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_35-find_replacef';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:35';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_37-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:37';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_37-find_replaces';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:37';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_38-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:38';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_38-find_replaces';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:38';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_4-default_value';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:4';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'English',
    );
    $feeds_tamper->weight = 5;
    $feeds_tamper->description = 'Set default value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_5-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:5';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_5-find_replaces';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:5';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_5-html_entity_decode';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:5';
    $feeds_tamper->plugin_id = 'html_entity_decode';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'HTML entity decode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_5-trim';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:5';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 3;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_6-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:6';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_6-find_replaces';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:6';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_6-html_entity_decode';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:6';
    $feeds_tamper->plugin_id = 'html_entity_decode';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'HTML entity decode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_6-trim';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:6';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 3;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_8-find_replace';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:8';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_8-find_replaces';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:8';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_8-html_entity_decode';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:8';
    $feeds_tamper->plugin_id = 'html_entity_decode';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'HTML entity decode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_xml_new_importer-xpathparser_8-trim';
    $feeds_tamper->importer = 'agris_xml_new_importer';
    $feeds_tamper->source = 'xpathparser:8';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 3;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    return $export;
}
