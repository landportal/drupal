<?php
/**
 * @file
 * landbook_country_page.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function landbook_country_page_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-1d3a4eb01d5ade365d0606f17cfef6a0'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '1d3a4eb01d5ade365d0606f17cfef6a0',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'book/countries/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'landportal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'landportal',
        'weight' => -36,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-cfa432f66abde2d0bb6dcb0c5e0be0d7'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'cfa432f66abde2d0bb6dcb0c5e0be0d7',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'book/countries/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'landportal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'landportal',
        'weight' => -34,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
