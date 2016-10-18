<?php
/**
 * @file
 * landbook_promoted_thematic.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function landbook_promoted_thematic_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-1e9f9b592d7695ac526ff68b1d50baf9'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '1e9f9b592d7695ac526ff68b1d50baf9',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'book/thematic/*',
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
        'weight' => -33,
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

  $export['views-61407d7b2275b982633d22682af012b1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '61407d7b2275b982633d22682af012b1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'book/thematic/*',
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
        'weight' => -35,
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
