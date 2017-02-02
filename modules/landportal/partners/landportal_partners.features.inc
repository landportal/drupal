<?php
/**
 * @file
 * landportal_partners.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landportal_partners_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
