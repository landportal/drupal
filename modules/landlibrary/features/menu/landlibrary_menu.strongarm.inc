<?php
/**
 * @file
 * landlibrary_menu.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function landlibrary_menu_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_menu_link_landlibrary-menu';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_menu_link_landlibrary-menu'] = $strongarm;

  return $export;
}
