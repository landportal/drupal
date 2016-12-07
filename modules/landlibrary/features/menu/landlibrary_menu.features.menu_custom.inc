<?php
/**
 * @file
 * landlibrary_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function landlibrary_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: landlibrary-menu.
  $menus['landlibrary-menu'] = array(
    'menu_name' => 'landlibrary-menu',
    'title' => 'Consult the Library',
    'description' => 'The Land Library is the authoritative virtual repository of land-related information, including peer-reviewed publications, policies, maps, and multimedia content.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Consult the Library');
  t('The Land Library is the authoritative virtual repository of land-related information, including peer-reviewed publications, policies, maps, and multimedia content.');

  return $menus;
}
