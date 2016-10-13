<?php
/**
 * @file
 * landcommunity.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landcommunity_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function landcommunity_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
