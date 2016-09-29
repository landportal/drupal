<?php
/**
 * @file
 * translate_regions_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function translate_regions_importer_feeds_tamper_default() {
$export = array();

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'translate_regions_importer-blank_1-copy';
$feeds_tamper->importer = 'translate_regions_importer';
$feeds_tamper->source = 'blank 1';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'iso3 code',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'translate_regions_importer-blank_1-php';
$feeds_tamper->importer = 'translate_regions_importer';
$feeds_tamper->source = 'blank 1';
$feeds_tamper->plugin_id = 'php';
$feeds_tamper->settings = array(
  'php' => 'watchdog(\'translate_regions_importer\', "ISO3=".$field, array(), WATCHDOG_DEBUG);
return $field;',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Debug script';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'translate_regions_importer-blank_2-copy';
$feeds_tamper->importer = 'translate_regions_importer';
$feeds_tamper->source = 'blank 2';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'iso3 code',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'translate_regions_importer-blank_2-efq_finder';
$feeds_tamper->importer = 'translate_regions_importer';
$feeds_tamper->source = 'blank 2';
$feeds_tamper->plugin_id = 'efq_finder';
$feeds_tamper->settings = array(
  'update' => 'Update',
  'entity_type' => 'taxonomy_term',
  'bundle' => 'regions',
  'field' => 'field_iso3',
  'column' => 'value',
  'property' => FALSE,
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Get the Entity TID from ISO3 code';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'translate_regions_importer-blank_2-php';
$feeds_tamper->importer = 'translate_regions_importer';
$feeds_tamper->source = 'blank 2';
$feeds_tamper->plugin_id = 'php';
$feeds_tamper->settings = array(
  'php' => 'watchdog(\'translate_regions_importer\', "tid=".$field, array(), WATCHDOG_DEBUG);
if ($field != null) {
    $term = taxonomy_term_load($field);
    watchdog(\'translate_regions_importer\', $field, array(), WATCHDOG_DEBUG);
    $name = $term->name;
    watchdog(\'translate_regions_importer\', $name, array(), WATCHDOG_DEBUG);
    return $name;
}',
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Get Tern Name from Term ID (TID)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'translate_regions_importer-blank_2-required';
$feeds_tamper->importer = 'translate_regions_importer';
$feeds_tamper->source = 'blank 2';
$feeds_tamper->plugin_id = 'required';
$feeds_tamper->settings = array(
  'invert' => 0,
  'log' => 1,
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Required field';

$export[$feeds_tamper->id] = $feeds_tamper;


  return $export;
}
