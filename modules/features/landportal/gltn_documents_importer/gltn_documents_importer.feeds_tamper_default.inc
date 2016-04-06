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
  $feeds_tamper->id = 'GLTN Importer-abstract-utf8_encode';
  $feeds_tamper->importer = 'GLTN Importer';
  $feeds_tamper->source = 'Abstract';
  $feeds_tamper->plugin_id = 'utf8_encode';
  $feeds_tamper->settings = array(
    'encoding' => 'cp1252',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'UTF-8 Encode';
  $export['GLTN Importer-abstract-utf8_encode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'GLTN Importer-contributors_co-authors-explode';
  $feeds_tamper->importer = 'GLTN Importer';
  $feeds_tamper->source = 'Contributors/Co-Authors';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['GLTN Importer-contributors_co-authors-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'GLTN Importer-contributors_co-authors-utf8_encode';
  $feeds_tamper->importer = 'GLTN Importer';
  $feeds_tamper->source = 'Contributors/Co-Authors';
  $feeds_tamper->plugin_id = 'utf8_encode';
  $feeds_tamper->settings = array(
    'encoding' => 'cp1252',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'UTF-8 Encode';
  $export['GLTN Importer-contributors_co-authors-utf8_encode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'GLTN Importer-docid-rewrite';
  $feeds_tamper->importer = 'GLTN Importer';
  $feeds_tamper->source = 'docid';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[doctitle][year]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['GLTN Importer-docid-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'GLTN Importer-doctitle-copy';
  $feeds_tamper->importer = 'GLTN Importer';
  $feeds_tamper->source = 'doctitle';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'from',
    'source' => 'title',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Copy source value';
  $export['GLTN Importer-doctitle-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'GLTN Importer-doctitle-truncate_text';
  $feeds_tamper->importer = 'GLTN Importer';
  $feeds_tamper->source = 'doctitle';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '10',
    'ellipses' => 0,
    'wordsafe' => 0,
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Truncate';
  $export['GLTN Importer-doctitle-truncate_text'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'GLTN Importer-language-find_replace_multiple';
  $feeds_tamper->importer = 'GLTN Importer';
  $feeds_tamper->source = 'Language';
  $feeds_tamper->plugin_id = 'find_replace_multiple';
  $feeds_tamper->settings = array(
    'pairs' => array(
      0 => array(
        'source' => 'ENG',
        'target' => 'English',
      ),
      1 => array(
        'source' => 'ESP',
        'target' => 'Español',
      ),
      2 => array(
        'source' => 'FR',
        'target' => 'Français',
      ),
    ),
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace multiple';
  $export['GLTN Importer-language-find_replace_multiple'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'GLTN Importer-principle_authors-explode';
  $feeds_tamper->importer = 'GLTN Importer';
  $feeds_tamper->source = 'Principle Authors';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['GLTN Importer-principle_authors-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'GLTN Importer-principle_authors-utf8_encode';
  $feeds_tamper->importer = 'GLTN Importer';
  $feeds_tamper->source = 'Principle Authors';
  $feeds_tamper->plugin_id = 'utf8_encode';
  $feeds_tamper->settings = array(
    'encoding' => 'cp1252',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'UTF-8 Encode';
  $export['GLTN Importer-principle_authors-utf8_encode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'GLTN Importer-provider-default_value';
  $feeds_tamper->importer = 'GLTN Importer';
  $feeds_tamper->source = 'Provider';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'Global Land Tool Network',
    'only_if_empty' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set value or default value';
  $export['GLTN Importer-provider-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'GLTN Importer-publisher-explode';
  $feeds_tamper->importer = 'GLTN Importer';
  $feeds_tamper->source = 'Publisher';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['GLTN Importer-publisher-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'GLTN Importer-publisher-utf8_encode';
  $feeds_tamper->importer = 'GLTN Importer';
  $feeds_tamper->source = 'Publisher';
  $feeds_tamper->plugin_id = 'utf8_encode';
  $feeds_tamper->settings = array(
    'encoding' => 'cp1252',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'UTF-8 Encode';
  $export['GLTN Importer-publisher-utf8_encode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'GLTN Importer-title-utf8_encode';
  $feeds_tamper->importer = 'GLTN Importer';
  $feeds_tamper->source = 'Title';
  $feeds_tamper->plugin_id = 'utf8_encode';
  $feeds_tamper->settings = array(
    'encoding' => 'cp1252',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'UTF-8 Encode';
  $export['GLTN Importer-title-utf8_encode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'GLTN Importer-topics-explode';
  $feeds_tamper->importer = 'GLTN Importer';
  $feeds_tamper->source = 'Topics';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['GLTN Importer-topics-explode'] = $feeds_tamper;

  return $export;
}
