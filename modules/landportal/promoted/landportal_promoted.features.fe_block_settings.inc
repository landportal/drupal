<?php
/**
 * @file
 * landportal_promoted.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function landportal_promoted_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-promoted-country'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'promoted-country',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 1,
      ),
      'lpbs' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'lpbs',
        'weight' => 3,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-promoted-data'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'promoted-data',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
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
        'weight' => 9,
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

  $export['views-promoted-discussions'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'promoted-discussions',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
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
        'weight' => 7,
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

  $export['views-promoted-events'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'promoted-events',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
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
        'weight' => 8,
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

  $export['views-promoted-front'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'promoted-front',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 1,
      ),
      'lpbs' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'lpbs',
        'weight' => 1,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-promoted-library'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'promoted-library',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 6,
      ),
      'lpbs' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'lpbs',
        'weight' => 12,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 6,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-promoted-projects'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'promoted-projects',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['views-promoted-thematic'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'promoted-thematic',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 2,
      ),
      'lpbs' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'lpbs',
        'weight' => 6,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 2,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
