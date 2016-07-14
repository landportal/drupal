<?php
/**
 * @file
 * land_util.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function land_util_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['landbook-compare_block'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'compare_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'landbook',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'landportal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'landportal',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['landbook-infografic_block'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'infografic_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'landbook',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'landportal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'landportal',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => 'col-md-2 search-form',
    'custom' => 0,
    'delta' => 'form',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'landportal' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'landportal',
        'weight' => -44,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -11,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
