<?php
/**
 * @file
 * landportal_country_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function landportal_country_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['graph-compare_block'] = array(
    'cache' => 1,
    'css_class' => 'section-block',
    'custom' => 0,
    'delta' => 'compare_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'graph',
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
        'weight' => -40,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Compare countries',
    'visibility' => 1,
  );

  $export['graph-infografic_block'] = array(
    'cache' => 1,
    'css_class' => 'section-block',
    'custom' => 0,
    'delta' => 'infografic_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'graph',
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
        'weight' => -38,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Infographics',
    'visibility' => 1,
  );

  $export['indicators-indicators_block'] = array(
    'cache' => 1,
    'css_class' => 'section-block',
    'custom' => 0,
    'delta' => 'indicators_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'indicators',
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
        'weight' => -41,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Indicators',
    'visibility' => 1,
  );

  $export['landbook-library_block'] = array(
    'cache' => 1,
    'css_class' => 'section-block',
    'custom' => 0,
    'delta' => 'library_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'landbook',
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
        'weight' => -35,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Library',
    'visibility' => 1,
  );

  $export['landbook-media_block'] = array(
    'cache' => 1,
    'css_class' => 'section-block',
    'custom' => 0,
    'delta' => 'media_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'landbook',
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
        'weight' => -37,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Media',
    'visibility' => 1,
  );

  $export['landbook-partners_block'] = array(
    'cache' => 1,
    'css_class' => 'section-block',
    'custom' => 0,
    'delta' => 'partners_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'landbook',
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
    'title' => 'Partners',
    'visibility' => 1,
  );

  $export['map-region_map_block'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'region_map_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'map',
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
        'weight' => -42,
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

  $export['map-world_map_block'] = array(
    'cache' => 1,
    'css_class' => 'section-block',
    'custom' => 0,
    'delta' => 'world_map_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'map',
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
        'weight' => -39,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Mapping',
    'visibility' => 1,
  );

  return $export;
}
