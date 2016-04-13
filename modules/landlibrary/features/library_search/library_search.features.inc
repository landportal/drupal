<?php
/**
 * @file
 * library_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "apachesolr_search" && $api == "apachesolr_search_defaults") {
    return array("version" => "3");
  }
}
