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

  $export['graph-compare_block'] = array(
    'cache' => 1,
    'css_class' => 'section-block',
    'custom' => 0,
    'delta' => 'compare_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'graph',
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
        'region' => 'content_country',
        'status' => 1,
        'theme' => 'landportal',
        'weight' => -53,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Compare countries',
    'visibility' => 0,
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
        'region' => 'content_country',
        'status' => 1,
        'theme' => 'landportal',
        'weight' => -51,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Infographics',
    'visibility' => 0,
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
        'region' => 'content_country',
        'status' => 1,
        'theme' => 'landportal',
        'weight' => -54,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Indicators',
    'visibility' => 0,
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
        'region' => 'content_country',
        'status' => 1,
        'theme' => 'landportal',
        'weight' => -48,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Library',
    'visibility' => 0,
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
        'region' => 'content_country',
        'status' => 1,
        'theme' => 'landportal',
        'weight' => -50,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Media',
    'visibility' => 0,
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
        'region' => 'content_country',
        'status' => 1,
        'theme' => 'landportal',
        'weight' => -49,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Partners',
    'visibility' => 0,
  );

  $export['landportal_blocks-lp_share'] = array(
    'cache' => 1,
    'css_class' => 'social-block',
    'custom' => 0,
    'delta' => 'lp_share',
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
        'region' => 'footer',
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

  $export['map-region_map_block'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'region_map_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'map',
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
        'region' => 'content_country',
        'status' => 1,
        'theme' => 'landportal',
        'weight' => -55,
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

  $export['map-world_map_block'] = array(
    'cache' => 1,
    'css_class' => 'section-block',
    'custom' => 0,
    'delta' => 'world_map_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'map',
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
        'region' => 'content_country',
        'status' => 1,
        'theme' => 'landportal',
        'weight' => -52,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Mapping',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => 'col-lg-2 search-form',
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
