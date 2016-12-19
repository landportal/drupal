<?php
/**
 * @file
 * landlibrary_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function landlibrary_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: landlibrary-menu_busca:library/search.
  $menu_links['landlibrary-menu_busca:library/search'] = array(
    'menu_name' => 'landlibrary-menu',
    'link_path' => 'library/search',
    'router_path' => 'library/search',
    'link_title' => 'Busca',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landlibrary-menu_busca:library/search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'language' => 'pt',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landlibrary-menu_contribute:node/10160.
  $menu_links['landlibrary-menu_contribute:node/10160'] = array(
    'menu_name' => 'landlibrary-menu',
    'link_path' => 'node/10160',
    'router_path' => 'node/%',
    'link_title' => 'Contribute',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landlibrary-menu_contribute:node/10160',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landlibrary-menu_data-reuse:node/10159.
  $menu_links['landlibrary-menu_data-reuse:node/10159'] = array(
    'menu_name' => 'landlibrary-menu',
    'link_path' => 'node/10159',
    'router_path' => 'node/%',
    'link_title' => 'Data reuse',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landlibrary-menu_data-reuse:node/10159',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -34,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landlibrary-menu_fontes:library/sources.
  $menu_links['landlibrary-menu_fontes:library/sources'] = array(
    'menu_name' => 'landlibrary-menu',
    'link_path' => 'library/sources',
    'router_path' => 'library/sources',
    'link_title' => 'Fontes',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landlibrary-menu_fontes:library/sources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -36,
    'customized' => 1,
    'language' => 'pt',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landlibrary-menu_fuentes:library/sources.
  $menu_links['landlibrary-menu_fuentes:library/sources'] = array(
    'menu_name' => 'landlibrary-menu',
    'link_path' => 'library/sources',
    'router_path' => 'library/sources',
    'link_title' => 'Fuentes',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landlibrary-menu_fuentes:library/sources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -35,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landlibrary-menu_library:node/10158.
  $menu_links['landlibrary-menu_library:node/10158'] = array(
    'menu_name' => 'landlibrary-menu',
    'link_path' => 'node/10158',
    'router_path' => 'node/%',
    'link_title' => 'Library',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landlibrary-menu_library:node/10158',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landlibrary-menu_rechercher:library/search.
  $menu_links['landlibrary-menu_rechercher:library/search'] = array(
    'menu_name' => 'landlibrary-menu',
    'link_path' => 'library/search',
    'router_path' => 'library/search',
    'link_title' => 'Rechercher',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landlibrary-menu_rechercher:library/search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landlibrary-menu_search:library/search.
  $menu_links['landlibrary-menu_search:library/search'] = array(
    'menu_name' => 'landlibrary-menu',
    'link_path' => 'library/search',
    'router_path' => 'library/search',
    'link_title' => 'Search',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landlibrary-menu_search:library/search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landlibrary-menu_sources:library/sources.
  $menu_links['landlibrary-menu_sources:library/sources'] = array(
    'menu_name' => 'landlibrary-menu',
    'link_path' => 'library/sources',
    'router_path' => 'library/sources',
    'link_title' => 'Sources',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landlibrary-menu_sources:library/sources',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Busca');
  t('Contribute');
  t('Data reuse');
  t('Fontes');
  t('Fuentes');
  t('Library');
  t('Rechercher');
  t('Search');
  t('Sources');

  return $menu_links;
}
