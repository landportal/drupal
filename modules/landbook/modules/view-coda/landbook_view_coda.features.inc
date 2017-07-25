<?php
/**
 * @file
 * landbook_view_coda.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landbook_view_coda_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
