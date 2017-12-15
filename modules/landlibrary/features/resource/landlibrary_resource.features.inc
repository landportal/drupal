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
 * Implements hook_menu_position_default_menu_positions().
 */
function landlibrary_resource_menu_position_default_menu_positions() {
  $items = array(
    'library_en' => array(
      'admin_title' => 'Library en',
      'enabled' => 1,
      'conditions' => 'a:2:{s:12:"content_type";a:1:{s:12:"content_type";a:1:{s:20:"landlibrary_resource";s:20:"landlibrary_resource";}}s:8:"language";a:1:{s:8:"language";s:2:"en";}}',
      'menu_name' => 'landportal-menu',
      'plid' => 47730,
      'mlid' => 47920,
      'weight' => 0,
      'machine_name' => 'library_en',
    ),
    'library_es' => array(
      'admin_title' => 'Library es',
      'enabled' => 1,
      'conditions' => 'a:2:{s:12:"content_type";a:1:{s:12:"content_type";a:1:{s:20:"landlibrary_resource";s:20:"landlibrary_resource";}}s:8:"language";a:1:{s:8:"language";s:2:"es";}}',
      'menu_name' => 'landportal-menu',
      'plid' => 47732,
      'mlid' => 47923,
      'weight' => 0,
      'machine_name' => 'library_es',
    ),
    'library_fr' => array(
      'admin_title' => 'Library fr',
      'enabled' => 1,
      'conditions' => 'a:2:{s:12:"content_type";a:1:{s:12:"content_type";a:1:{s:20:"landlibrary_resource";s:20:"landlibrary_resource";}}s:8:"language";a:1:{s:8:"language";s:2:"fr";}}',
      'menu_name' => 'landportal-menu',
      'plid' => 47731,
      'mlid' => 47921,
      'weight' => 0,
      'machine_name' => 'library_fr',
    ),
    'library_pt' => array(
      'admin_title' => 'Library pt',
      'enabled' => 1,
      'conditions' => 'a:2:{s:12:"content_type";a:1:{s:12:"content_type";a:1:{s:20:"landlibrary_resource";s:20:"landlibrary_resource";}}s:8:"language";a:1:{s:8:"language";s:2:"pt";}}',
      'menu_name' => 'landportal-menu',
      'plid' => 47733,
      'mlid' => 47922,
      'weight' => 0,
      'machine_name' => 'library_pt',
    ),
  );
  return $items;
}

/**
 * Implements hook_node_info().
 */
function landlibrary_resource_node_info() {
  $items = array(
    'landlibrary_resource' => array(
      'name' => t('LandLibrary Resource'),
      'base' => 'node_content',
      'description' => t('The main LandLibrary resource which can be a research report, a peer-reviewed publication, a policy document, an analytical study, a map, a video or other multimedia content.'),
      'has_title' => '1',
      'title_label' => t('Resource title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
