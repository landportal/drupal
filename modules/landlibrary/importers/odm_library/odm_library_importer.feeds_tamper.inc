<?php
/**
 * @file
 * odm_library_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function odm_library_importer_feeds_tamper_default() {
    $export = array();

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'odm_library_importer-odm_url-rewrite';
    $feeds_tamper->importer = 'odm_library_importer';
    $feeds_tamper->source = 'ODM url';
    $feeds_tamper->plugin_id = 'rewrite';
    $feeds_tamper->settings = array(
        'text' => 'https://data.opendevelopmentmekong.net/dataset/[jsonpath_parser:1]',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Rewrite';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'odm_library_importer-odm_author-default_value';
    $feeds_tamper->importer = 'odm_library_importer';
    $feeds_tamper->source = 'ODM author';
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
    $feeds_tamper->id = 'odm_library_importer-odm_regorg-default_value';
    $feeds_tamper->importer = 'odm_library_importer';
    $feeds_tamper->source = 'ODM regorg';
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
    $feeds_tamper->id = 'odm_library_importer-jsonpath_parser_6-explode';
    $feeds_tamper->importer = 'odm_library_importer';
    $feeds_tamper->source = 'jsonpath_parser:6';
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
    $feeds_tamper->id = 'odm_library_importer-jsonpath_parser_10-find_replace_multiple';
    $feeds_tamper->importer = 'odm_library_importer';
    $feeds_tamper->source = 'jsonpath_parser:10';
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
    $feeds_tamper->id = 'odm_library_importer-jsonpath_parser_10-keyword_filter';
    $feeds_tamper->importer = 'odm_library_importer';
    $feeds_tamper->source = 'jsonpath_parser:10';
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
    $feeds_tamper->id = 'odm_library_importer-jsonpath_parser_11-find_replace_multiple';
    $feeds_tamper->importer = 'odm_library_importer';
    $feeds_tamper->source = 'jsonpath_parser:11';
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
        ),
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Find replace document type';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'odm_library_importer-jsonpath_parser_13-explode';
    $feeds_tamper->importer = 'odm_library_importer';
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

    return $export;
}
