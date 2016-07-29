<?php
/**
 * @file
 * mailchimp_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mailchimp_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['mailchimp_lists-land_portal_news_digest'] = array(
    'cache' => 2,
    'custom' => 0,
    'delta' => 'land_portal_news_digest',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'mailchimp_lists',
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

  $export['mailchimp_lists-legend_bulletin'] = array(
    'cache' => 2,
    'custom' => 0,
    'delta' => 'legend_bulletin',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'mailchimp_lists',
    'node_types' => array(),
    'pages' => 'partners/legend',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'landportal' => array(
        'region' => 'sidebar_second',
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
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
