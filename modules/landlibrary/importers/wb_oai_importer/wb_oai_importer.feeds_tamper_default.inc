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
  $export['wb_oai_importer-blank_source_1-default_value'] = $feeds_tamper;

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

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wb_oai_importer-publisher-php';
  $feeds_tamper->importer = 'wb_oai_importer';
  $feeds_tamper->source = 'publisher';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => '$pos = strpos($field, "World Bank");


if ($pos == true) {
    $field="World Bank Group";
 
} 
return $field;
',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Execute php code';
  $export['wb_oai_importer-publisher-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'wb_oai_importer-source-php';
  $feeds_tamper->importer = 'wb_oai_importer';
  $feeds_tamper->source = 'source';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => '$pos = strpos($field, "World Bank");


if ($pos == true) {
    $field="World Bank Group";
 
} 
return $field;
',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Execute php code';
  $export['wb_oai_importer-source-php'] = $feeds_tamper;

  return $export;
}
