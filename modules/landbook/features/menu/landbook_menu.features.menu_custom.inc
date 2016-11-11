<?php
/**
 * @file
 * landbook_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function landbook_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: landbook-menu.
  $menus['landbook-menu'] = array(
    'menu_name' => 'landbook-menu',
    'title' => 'Get information by country or theme',
    'description' => 'The Land Book presents comprehensive country and thematic pages with linked open data on land governance from diverse sources around the world.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Get information by country or theme');
  t('The Land Book presents comprehensive country and thematic pages with linked open data on land governance from diverse sources around the world.');

  return $menus;
}
