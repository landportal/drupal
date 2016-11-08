<?php
/**
 * @file
 * landlibrary_resource.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landlibrary_resource_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function landlibrary_resource_node_info() {
  $items = array(
    'landlibrary_resource' => array(
      'name' => t('LandLibrary Resource'),
      'base' => 'node_content',
      'description' => t('The main LandLibrary resource which can be a country report, a peer-reviewed publication, a policy document, an analytical study, a map, a high quality blog post, a video or other multimedia content.'),
      'has_title' => '1',
      'title_label' => t('Resource title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
