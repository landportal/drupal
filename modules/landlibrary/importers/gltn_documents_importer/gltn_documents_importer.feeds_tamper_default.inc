<?php
/**
 * @file
 * gltn_documents_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function gltn_documents_importer_feeds_tamper_default() {
    $export = array();

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'gltn_importer-contrib-copy';
    $feeds_tamper->importer = 'gltn_importer';
    $feeds_tamper->source = 'Contrib';
    $feeds_tamper->plugin_id = 'copy';
    $feeds_tamper->settings = array(
        'to_from' => 'from',
        'source' => 'authors',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Copy source value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'gltn_importer-contrib-copy2';
    $feeds_tamper->importer = 'gltn_importer';
    $feeds_tamper->source = 'Contrib';
    $feeds_tamper->plugin_id = 'copy';
    $feeds_tamper->settings = array(
        'to_from' => 'from',
        'source' => 'contrib',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Copy contrib value';

    $export[$feeds_tamper->id] = $feeds_tamper;

  return $export;
}
