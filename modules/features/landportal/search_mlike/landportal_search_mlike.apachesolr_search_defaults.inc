<?php
/**
 * @file
 * landportal_search_mlike.apachesolr_search_defaults.inc
 */

/**
 * Implements hook_apachesolr_search_default_searchers().
 */
function landportal_search_mlike_apachesolr_search_default_searchers() {
  $export = array();

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'mlike_search';
  $searcher->label = 'MLIKE search';
  $searcher->description = '';
  $searcher->search_path = 'partners/mlike/search';
  $searcher->page_title = 'MLIKE search';
  $searcher->env_id = 'mlike_search';
  $searcher->settings = array(
    'fq' => array(),
    'apachesolr_search_custom_enable' => 0,
    'apachesolr_search_search_type' => 'custom',
    'apachesolr_search_per_page' => 20,
    'apachesolr_search_spellcheck' => 1,
    'apachesolr_search_search_box' => 1,
    'apachesolr_search_allow_user_input' => 1,
    'apachesolr_search_browse' => 'blocks',
  );
  $export['mlike_search'] = $searcher;

  return $export;
}
