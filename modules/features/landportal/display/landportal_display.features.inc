<?php
/**
 * @file
 * landportal_display.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landportal_display_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function landportal_display_image_default_styles() {
  $styles = array();

  // Exported image style: featured.
  $styles['featured'] = array(
    'label' => 'Featured',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 360,
        ),
        'weight' => -10,
      ),
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 280,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: header-menu-logo.
  $styles['header-menu-logo'] = array(
    'label' => 'Header Logo',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 110,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: square_thumbnail.
  $styles['square_thumbnail'] = array(
    'label' => 'Square 180',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 180,
          'height' => 180,
          'weight' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}
