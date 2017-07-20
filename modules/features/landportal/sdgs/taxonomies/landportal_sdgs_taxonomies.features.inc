<?php
/**
 * @file
 * landportal_sdgs_taxonomies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landportal_sdgs_taxonomies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
