<?php
/**
 * @file
 * landportal_search_mlike.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function landportal_search_mlike_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['apachesolr_search-search_form_mlike_search'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'search_form_mlike_search',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'apachesolr_search',
    'node_types' => array(
      0 => 'partners',
      1 => 'partners_page',
    ),
    'pages' => 'partners/mlike*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lpbs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lpbs',
        'weight' => 0,
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
