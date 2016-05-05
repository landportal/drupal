<?php
/**
 * @file
 * agrovoc_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function agrovoc_importer_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'topic_taxonomy_land_terms_importer-concept-find_replace_multiple';
  $feeds_tamper->importer = 'topic_taxonomy_land_terms_importer';
  $feeds_tamper->source = 'concept';
  $feeds_tamper->plugin_id = 'find_replace_multiple';
  $feeds_tamper->settings = array(
    'pairs' => array(
      0 => array(
        'source' => '<',
        'target' => '',
      ),
      1 => array(
        'source' => '>',
        'target' => '',
      ),
    ),
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace multiple';
  $export['topic_taxonomy_land_terms_importer-concept-find_replace_multiple'] = $feeds_tamper;

  return $export;
}
