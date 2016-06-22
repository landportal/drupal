<?php
/**
 * @file
 * ckan_documents_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function ckan_documents_importer_feeds_tamper_default() {
    $export = array();

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ckan_importer-blank_source_3-default_value';
    $feeds_tamper->importer = 'ckan_importer';
    $feeds_tamper->source = 'Blank source 3';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'importer_odm',
        'only_if_empty' => 0,
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Set value or default value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ckan_importer-jsonpath_parser_9-find_replace_multiple';
    $feeds_tamper->importer = 'ckan_importer';
    $feeds_tamper->source = 'jsonpath_parser:9';
    $feeds_tamper->plugin_id = 'find_replace_multiple';
    $feeds_tamper->settings = array(
        'pairs' => array(
            0 => array(
                'source' => 'reports_journal_articles_and_research_papers',
                'target' => '​Reports and Research',
            ),
            1 => array(
                'source' => 'advocacy_and_promotional_materials',
                'target' => '​Manuals & Guidelines',
            ),
            2 => array(
                'source' => 'conference_workshops_proceedings_and_presentations',
                'target' => 'Multimedia',
            ),
            3 => array(
                'source' => 'analysis_discussion_papers_and_blogs',
                'target' => '​Multimedia',
            ),
            4 => array(
                'source' => '',
                'target' => '',
            ),
        ),
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Find replace multiple';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ckan_importer-blank_source_1-copy';
    $feeds_tamper->importer = 'ckan_importer';
    $feeds_tamper->source = 'Blank source 1';
    $feeds_tamper->plugin_id = 'copy';
    $feeds_tamper->settings = array(
        'to_from' => 'from',
        'source' => 'jsonpath_parser:0',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Copy source value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ckan_importer-blank_source_1-truncate_text';
    $feeds_tamper->importer = 'ckan_importer';
    $feeds_tamper->source = 'Blank source 1';
    $feeds_tamper->plugin_id = 'truncate_text';
    $feeds_tamper->settings = array(
        'num_char' => '10',
        'ellipses' => 0,
        'wordsafe' => 0,
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Truncate';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ckan_importer-blank_source_2-rewrite';
    $feeds_tamper->importer = 'ckan_importer';
    $feeds_tamper->source = 'Blank source 2';
    $feeds_tamper->plugin_id = 'rewrite';
    $feeds_tamper->settings = array(
        'text' => '[Blank source 1]
[jsonpath_parser:6]',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Rewrite';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ckan_importer-jsonpath_parser_13-explode';
    $feeds_tamper->importer = 'ckan_importer';
    $feeds_tamper->source = 'jsonpath_parser:13';
    $feeds_tamper->plugin_id = 'explode';
    $feeds_tamper->settings = array(
        'separator' => ',',
        'limit' => '',
        'real_separator' => ',',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Explode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ckan_importer-jsonpath_parser_16-default_value';
    $feeds_tamper->importer = 'ckan_importer';
    $feeds_tamper->source = 'jsonpath_parser:16';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'ODM Mekong regional organization',
        'only_if_empty' => 0,
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Set value or default value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ckan_importer-jsonpath_parser_2-explode';
    $feeds_tamper->importer = 'ckan_importer';
    $feeds_tamper->source = 'jsonpath_parser:2';
    $feeds_tamper->plugin_id = 'explode';
    $feeds_tamper->settings = array(
        'separator' => ',',
        'limit' => '',
        'real_separator' => ',',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Explode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ckan_importer-jsonpath_parser_22-explode';
    $feeds_tamper->importer = 'ckan_importer';
    $feeds_tamper->source = 'jsonpath_parser:22';
    $feeds_tamper->plugin_id = 'explode';
    $feeds_tamper->settings = array(
        'separator' => ',',
        'limit' => '',
        'real_separator' => ',',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Explode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ckan_importer-jsonpath_parser_7-find_replace_multiple';
    $feeds_tamper->importer = 'ckan_importer';
    $feeds_tamper->source = 'jsonpath_parser:7';
    $feeds_tamper->plugin_id = 'find_replace_multiple';
    $feeds_tamper->settings = array(
        'pairs' => array(
            0 => array(
                'source' => 'en',
                'target' => 'English',
            ),
            1 => array(
                'source' => 'es',
                'target' => 'Español',
            ),
            2 => array(
                'source' => 'fr',
                'target' => 'Français',
            ),
        ),
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Find replace multiple';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ckan_importer-jsonpath_parser_7-keyword_filter';
    $feeds_tamper->importer = 'ckan_importer';
    $feeds_tamper->source = 'jsonpath_parser:7';
    $feeds_tamper->plugin_id = 'keyword_filter';
    $feeds_tamper->settings = array(
        'words' => 'en',
        'word_boundaries' => 0,
        'exact' => 1,
        'case_sensitive' => 0,
        'invert' => 0,
        'word_list' => array(
            0 => '/^en$/ui',
        ),
        'regex' => TRUE,
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Keyword filter';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ckan_importer-jsonpath_parser_8-explode';
    $feeds_tamper->importer = 'ckan_importer';
    $feeds_tamper->source = 'jsonpath_parser:8';
    $feeds_tamper->plugin_id = 'explode';
    $feeds_tamper->settings = array(
        'separator' => ',',
        'limit' => '',
        'real_separator' => ',',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Explode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    return $export;
}
