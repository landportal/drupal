<?php
/**
 * @file
 * landportal_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landportal_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
