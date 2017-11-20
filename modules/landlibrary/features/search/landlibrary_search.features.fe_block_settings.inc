<?php
/**
 * @file
 * landlibrary_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function landlibrary_search_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['apachesolr_search-search_form_landlibrary_search'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'search_form_landlibrary_search',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'apachesolr_search',
    'node_types' => array(),
    'pages' => 'library',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lpbs' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'lpbs',
        'weight' => -1,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
