<?php
/**
 * @file
 * landportal_multilingual.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landportal_multilingual_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
