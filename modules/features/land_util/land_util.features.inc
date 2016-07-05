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
