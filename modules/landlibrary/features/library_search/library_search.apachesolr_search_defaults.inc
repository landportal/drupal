<?php
/**
 * @file
 * library_search.apachesolr_search_defaults.inc
 */

/**
 * Implements hook_apachesolr_search_default_searchers().
 */
function library_search_apachesolr_search_default_searchers() {
  $export = array();

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'library_search';
  $searcher->label = 'Library search';
  $searcher->description = '';
  $searcher->search_path = 'library/search';
  $searcher->page_title = 'Library search';
  $searcher->env_id = 'landlibrary_search';
  $searcher->settings = array(
    'fq' => array(
      0 => 'bundle:landlibrary_resource',
    ),
    'apachesolr_search_custom_enable' => 1,
    'apachesolr_search_search_type' => 'custom',
    'apachesolr_search_per_page' => 10,
    'apachesolr_search_spellcheck' => 1,
    'apachesolr_search_search_box' => 1,
    'apachesolr_search_allow_user_input' => 0,
    'apachesolr_search_browse' => 'none',
  );
  $export['library_search'] = $searcher;

  return $export;
}
