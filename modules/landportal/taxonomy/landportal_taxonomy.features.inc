<?php
/**
 * @file
 * landportal_taxonomy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landportal_taxonomy_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
}
