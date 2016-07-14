<?php
/**
 * @file
 * landbook_taxonomies.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function landbook_taxonomies_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['landportal_blocks-lp_header_social'] = array(
    'cache' => 1,
    'css_class' => 'col-md-2 social-top',
    'custom' => 0,
    'delta' => 'lp_header_social',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'landportal_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'landportal' => array(
        'region' => 'header',
        'status' => 1,
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

  return $export;
}
