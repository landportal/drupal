<?php
/**
 * @file
 * landportal_footer.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function landportal_footer_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['landportal_blocks-landportal_footer'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'landportal_footer',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'landportal_blocks',
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
    'visibility' => 0,
  );

  $export['landportal_blocks-lp_footer_social'] = array(
    'cache' => 1,
    'css_class' => 'col-md-3',
    'custom' => 0,
    'delta' => 'lp_footer_social',
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
        'weight' => -45,
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

  $export['menu-menu-footer-menu'] = array(
    'cache' => -1,
    'css_class' => 'col-md-6 .col-md-offset-1',
    'custom' => 0,
    'delta' => 'menu-footer-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
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
        'region' => 'footer',
        'status' => 1,
        'theme' => 'landportal',
        'weight' => -46,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
