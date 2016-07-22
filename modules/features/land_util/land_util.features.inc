<?php
/**
 * @file
 * land_util.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function land_util_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function land_util_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_pub_defaults().
 */
function land_util_custom_pub_defaults() {
  $options = array();
  // Exported option: promoted_to_country_page
  $options['promoted_to_country_page'] = array(
    'type' => 'promoted_to_country_page',
    'name' => t('Promoted to country page'),
    'node_types' => array(
      'blog_post' => t('Blog post'),
      'debate' => t('Debate'),
      'event' => t('Event'),
      'news' => t('News'),
    ),
  );

  return $options;
}

/**
 * Implements hook_image_default_styles().
 */
function land_util_image_default_styles() {
  $styles = array();

  // Exported image style: 600x400.
  $styles['600x400'] = array(
    'label' => '218x122',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 218,
          'height' => 122,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: country_promoted.
  $styles['country_promoted'] = array(
    'label' => 'country promoted',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 527,
          'height' => 260,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
