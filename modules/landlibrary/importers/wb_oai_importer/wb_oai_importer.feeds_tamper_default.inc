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
  $feeds_tamper->id = 'wb_oai_importer-metadata_record_url-rewrite';
  $feeds_tamper->importer = 'wb_oai_importer';
  $feeds_tamper->source = 'metadata_record_url';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'World Bank Group',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['wb_oai_importer-metadata_record_url-rewrite'] = $feeds_tamper;

  return $export;
}
