<?php
/**
 * @file
 * wb_oai_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function wb_oai_importer_feeds_tamper_default() {
    // Paste the output of: /admin/structure/feeds/wb_oai_importer/tamper/export

    $export = array();

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'wb_oai_importer-erf_publisher_guid-copy';
    $feeds_tamper->importer = 'wb_oai_importer';
    $feeds_tamper->source = 'ERF publisher guid';
    $feeds_tamper->plugin_id = 'copy';
    $feeds_tamper->settings = array(
        'to_from' => 'from',
        'source' => 'publisher',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Copy source value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'wb_oai_importer-erf_publisher_guid-feeds_tamper_conditional';
    $feeds_tamper->importer = 'wb_oai_importer';
    $feeds_tamper->source = 'ERF publisher guid';
    $feeds_tamper->plugin_id = 'feeds_tamper_conditional';
    $feeds_tamper->settings = array(
        'conditional_field' => 'ERF publisher',
        'operator' => 'equals',
        'value' => '',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Conditional';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'wb_oai_importer-erf_publisher-copy';
    $feeds_tamper->importer = 'wb_oai_importer';
    $feeds_tamper->source = 'ERF publisher';
    $feeds_tamper->plugin_id = 'copy';
    $feeds_tamper->settings = array(
        'to_from' => 'from',
        'source' => 'publisher',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Copy source value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'wb_oai_importer-publisher-find_replace_regex2';
    $feeds_tamper->importer = 'wb_oai_importer';
    $feeds_tamper->source = 'publisher';
    $feeds_tamper->plugin_id = 'find_replace_regex';
    $feeds_tamper->settings = array(
        'find' => '/^\\s?([Tt]he )?\\s?(Wo(rl|lr)d Bank|[Ww]ashington)\\s?;?\\s?$/',
        'replace' => 'World Bank Group',
        'limit' => '',
        'real_limit' => -1,
    );
    $feeds_tamper->weight = 5;
    $feeds_tamper->description = 'Find replace WB / cleanup title';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'wb_oai_importer-wb_publisher-copy';
    $feeds_tamper->importer = 'wb_oai_importer';
    $feeds_tamper->source = 'WB Publisher';
    $feeds_tamper->plugin_id = 'copy';
    $feeds_tamper->settings = array(
        'to_from' => 'from',
        'source' => 'publisher',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Copy publisher value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'wb_oai_importer-wb_publisher-string2id';
    $feeds_tamper->importer = 'wb_oai_importer';
    $feeds_tamper->source = 'WB Publisher';
    $feeds_tamper->plugin_id = 'string2id';
    $feeds_tamper->settings = array(
        'method' => 'views',
        'views' => array(
            'view' => 'organizations_library:default',
        ),
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Convert string into entity ID';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'wb_oai_importer-wb_user-default_value';
    $feeds_tamper->importer = 'wb_oai_importer';
    $feeds_tamper->source = 'WB user';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'importer_wb',
        'only_if_empty' => 0,
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Set importer_wb to user_name';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'wb_oai_importer-contributor-explode';
    $feeds_tamper->importer = 'wb_oai_importer';
    $feeds_tamper->source = 'contributor';
    $feeds_tamper->plugin_id = 'explode';
    $feeds_tamper->settings = array(
        'separator' => ';',
        'limit' => '',
        'real_separator' => ';',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Explode';

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
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Implode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'wb_oai_importer-creator-explode';
    $feeds_tamper->importer = 'wb_oai_importer';
    $feeds_tamper->source = 'creator';
    $feeds_tamper->plugin_id = 'explode';
    $feeds_tamper->settings = array(
        'separator' => ';',
        'limit' => '',
        'real_separator' => ';',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Explode';

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
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Implode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'wb_oai_importer-publisher-explode';
    $feeds_tamper->importer = 'wb_oai_importer';
    $feeds_tamper->source = 'publisher';
    $feeds_tamper->plugin_id = 'explode';
    $feeds_tamper->settings = array(
        'separator' => '%sand%s',
        'limit' => '',
        'real_separator' => ' and ',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Explode';

    $export[$feeds_tamper->id] = $feeds_tamper;

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
    $feeds_tamper->weight = 3;
    $feeds_tamper->description = 'Find replace REGEX (should remove location)';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'wb_oai_importer-publisher-trim';
    $feeds_tamper->importer = 'wb_oai_importer';
    $feeds_tamper->source = 'publisher';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 4;
    $feeds_tamper->description = 'Trim';

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
    $feeds_tamper->description = 'Set "World Bank Group" value';

    $export[$feeds_tamper->id] = $feeds_tamper;
    // End of Paste
    return $export;
}
