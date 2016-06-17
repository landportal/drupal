<?php
/**
 * @file
 * ifpri_oai_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function ifpri_oai_importer_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ifpri_oai_importer-blank_source_1-default_value';
  $feeds_tamper->importer = 'ifpri_oai_importer';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'importer_ifpri',
    'only_if_empty' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set value or default value';
  $export['ifpri_oai_importer-blank_source_1-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'ifpri_oai_importer-metadata_record_url-rewrite';
  $feeds_tamper->importer = 'ifpri_oai_importer';
  $feeds_tamper->source = 'metadata_record_url';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'International Food Policy Research Institute (IFPRI)',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['ifpri_oai_importer-metadata_record_url-rewrite'] = $feeds_tamper;

  return $export;
}
