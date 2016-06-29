<?php
/**
 * @file
 * ct_debate.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ct_debate_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ct_debate_node_info() {
  $items = array(
    'debate' => array(
      'name' => t('Debate'),
      'base' => 'node_content',
      'description' => t('A Land Debate. This content type is used to create a Debate on the Landportal website.
By default comments are enabled in Debates, the comments may be open or close regardless of the Debate status.
'),
      'has_title' => '1',
      'title_label' => t('Title for this debate'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
