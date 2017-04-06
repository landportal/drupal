<?php
/**
 * @file
 * ct_thematic_narrative.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ct_thematic_narrative_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ct_thematic_narrative_node_info() {
  $items = array(
    'thematic_narrative' => array(
      'name' => t('Thematic narrative'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Thematic'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
