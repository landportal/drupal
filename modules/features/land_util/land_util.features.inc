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

  return $styles;
}
