<?php
/**
 * @file
 * ct_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ct_events_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ct_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('A concrete event (meeting, conference, show...) that will happen at a given time in a given place.'),
      'has_title' => '1',
      'title_label' => t('Event name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
