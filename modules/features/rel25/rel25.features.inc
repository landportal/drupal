<?php
/**
 * @file
 * rel25.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rel25_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
