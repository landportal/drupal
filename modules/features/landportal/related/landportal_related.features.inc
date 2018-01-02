<?php
/**
 * @file
 * landportal_related.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landportal_related_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
}
