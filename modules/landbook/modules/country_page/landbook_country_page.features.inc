<?php
/**
 * @file
 * landbook_country_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landbook_country_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
