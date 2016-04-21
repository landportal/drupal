<?php
/**
 * @file
 * library_search.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function library_search_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-landlibrary-menu.
  $menus['menu-landlibrary-menu'] = array(
    'menu_name' => 'menu-landlibrary-menu',
    'title' => 'Consult the library',
    'description' => 'The Land Library is the authoritative virtual repository of land-related information, including peer-reviewed publications, policies, maps, and multimedia content.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Consult the library');
  t('The Land Library is the authoritative virtual repository of land-related information, including peer-reviewed publications, policies, maps, and multimedia content.');

  return $menus;
}
