<?php
/**
 * @file
 * wb_oai_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function wb_oai_importer_feeds_tamper_default() {
    $export = array();

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'wb_oai_importer-publisher-find_replace_regex';
    $feeds_tamper->importer = 'wb_oai_importer';
    $feeds_tamper->source = 'publisher';
    $feeds_tamper->plugin_id = 'find_replace_regex';
    $feeds_tamper->settings = array(
        'find' => '/^(.*:)?([^,]+).*$/',
        'replace' => '$2',
        'limit' => '',
        'real_limit' => -1,
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace REGEX';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'wb_oai_importer-blank_source_1-default_value';
    $feeds_tamper->importer = 'wb_oai_importer';
    $feeds_tamper->source = 'Blank source 1';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'importer_wb',
        'only_if_empty' => 0,
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Set value or default value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'wb_oai_importer-wb_source-default_value';
    $feeds_tamper->importer = 'wb_oai_importer';
    $feeds_tamper->source = 'WB source';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'World Bank Group',
        'only_if_empty' => 0,
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Set "World Bank" value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'wb_oai_importer-creator-implode';
    $feeds_tamper->importer = 'wb_oai_importer';
    $feeds_tamper->source = 'creator';
    $feeds_tamper->plugin_id = 'implode';
    $feeds_tamper->settings = array(
        'glue' => '%n',
        'real_glue' => '
',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Implode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'wb_oai_importer-contributor-implode';
    $feeds_tamper->importer = 'wb_oai_importer';
    $feeds_tamper->source = 'contributor';
    $feeds_tamper->plugin_id = 'implode';
    $feeds_tamper->settings = array(
        'glue' => '%n',
        'real_glue' => '
',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Implode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    return $export;

}
