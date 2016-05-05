<?php
/**
 * @file
 * landbook_country.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landbook_country_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function landbook_country_node_info() {
  $items = array(
    'landbook_country' => array(
      'name' => t('Country narrative'),
      'base' => 'node_content',
      'description' => t('Countries narratives for the Landbook'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
