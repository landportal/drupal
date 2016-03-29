<?php
/**
 * @file
 * library_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function library_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-landlibrary-menu_accueil:<front>.
  $menu_links['menu-landlibrary-menu_accueil:<front>'] = array(
    'menu_name' => 'menu-landlibrary-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Accueil',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-landlibrary-menu_accueil:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-landlibrary-menu_biblioteca:node/10158.
  $menu_links['menu-landlibrary-menu_biblioteca:node/10158'] = array(
    'menu_name' => 'menu-landlibrary-menu',
    'link_path' => 'node/10158',
    'router_path' => 'node/%',
    'link_title' => 'biblioteca',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-landlibrary-menu_biblioteca:node/10158',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'pt',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-landlibrary-menu_bibliothque:node/10158.
  $menu_links['menu-landlibrary-menu_bibliothque:node/10158'] = array(
    'menu_name' => 'menu-landlibrary-menu',
    'link_path' => 'node/10158',
    'router_path' => 'node/%',
    'link_title' => 'Bibliothèque',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-landlibrary-menu_bibliothque:node/10158',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-landlibrary-menu_busca:library/search.
  $menu_links['menu-landlibrary-menu_busca:library/search'] = array(
    'menu_name' => 'menu-landlibrary-menu',
    'link_path' => 'library/search',
    'router_path' => 'library/search',
    'link_title' => 'busca',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-landlibrary-menu_busca:library/search',
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
  // Exported menu link: menu-landlibrary-menu_contribuer:node/10160.
  $menu_links['menu-landlibrary-menu_contribuer:node/10160'] = array(
    'menu_name' => 'menu-landlibrary-menu',
    'link_path' => 'node/10160',
    'router_path' => 'node/%',
    'link_title' => 'Contribuer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-landlibrary-menu_contribuer:node/10160',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-landlibrary-menu_contribuir:node/10160.
  $menu_links['menu-landlibrary-menu_contribuir:node/10160'] = array(
    'menu_name' => 'menu-landlibrary-menu',
    'link_path' => 'node/10160',
    'router_path' => 'node/%',
    'link_title' => 'contribuir',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-landlibrary-menu_contribuir:node/10160',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'pt',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-landlibrary-menu_contribute:node/10160.
  $menu_links['menu-landlibrary-menu_contribute:node/10160'] = array(
    'menu_name' => 'menu-landlibrary-menu',
    'link_path' => 'node/10160',
    'router_path' => 'node/%',
    'link_title' => 'Contribute',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-landlibrary-menu_contribute:node/10160',
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
  // Exported menu link: menu-landlibrary-menu_data-reuse:node/10159.
  $menu_links['menu-landlibrary-menu_data-reuse:node/10159'] = array(
    'menu_name' => 'menu-landlibrary-menu',
    'link_path' => 'node/10159',
    'router_path' => 'node/%',
    'link_title' => 'Data reuse',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-landlibrary-menu_data-reuse:node/10159',
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
  // Exported menu link: menu-landlibrary-menu_fontes:library/sources.
  $menu_links['menu-landlibrary-menu_fontes:library/sources'] = array(
    'menu_name' => 'menu-landlibrary-menu',
    'link_path' => 'library/sources',
    'router_path' => 'library/sources',
    'link_title' => 'fontes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-landlibrary-menu_fontes:library/sources',
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
  // Exported menu link: menu-landlibrary-menu_fuentes:library/sources.
  $menu_links['menu-landlibrary-menu_fuentes:library/sources'] = array(
    'menu_name' => 'menu-landlibrary-menu',
    'link_path' => 'library/sources',
    'router_path' => 'library/sources',
    'link_title' => 'fuentes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-landlibrary-menu_fuentes:library/sources',
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
  // Exported menu link: menu-landlibrary-menu_home:<front>.
  $menu_links['menu-landlibrary-menu_home:<front>'] = array(
    'menu_name' => 'menu-landlibrary-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-landlibrary-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-landlibrary-menu_inicio:<front>.
  $menu_links['menu-landlibrary-menu_inicio:<front>'] = array(
    'menu_name' => 'menu-landlibrary-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Inicio',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-landlibrary-menu_inicio:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-landlibrary-menu_library:node/10158.
  $menu_links['menu-landlibrary-menu_library:node/10158'] = array(
    'menu_name' => 'menu-landlibrary-menu',
    'link_path' => 'node/10158',
    'router_path' => 'node/%',
    'link_title' => 'Library',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-landlibrary-menu_library:node/10158',
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
  // Exported menu link: menu-landlibrary-menu_rechercher:library/search.
  $menu_links['menu-landlibrary-menu_rechercher:library/search'] = array(
    'menu_name' => 'menu-landlibrary-menu',
    'link_path' => 'library/search',
    'router_path' => 'library/search',
    'link_title' => 'Rechercher',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-landlibrary-menu_rechercher:library/search',
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
  // Exported menu link: menu-landlibrary-menu_reuso:node/10159.
  $menu_links['menu-landlibrary-menu_reuso:node/10159'] = array(
    'menu_name' => 'menu-landlibrary-menu',
    'link_path' => 'node/10159',
    'router_path' => 'node/%',
    'link_title' => 'reuso',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-landlibrary-menu_reuso:node/10159',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'pt',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-landlibrary-menu_reutilizar:node/10159.
  $menu_links['menu-landlibrary-menu_reutilizar:node/10159'] = array(
    'menu_name' => 'menu-landlibrary-menu',
    'link_path' => 'node/10159',
    'router_path' => 'node/%',
    'link_title' => 'reutilizar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-landlibrary-menu_reutilizar:node/10159',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-landlibrary-menu_rutilisation:node/10159.
  $menu_links['menu-landlibrary-menu_rutilisation:node/10159'] = array(
    'menu_name' => 'menu-landlibrary-menu',
    'link_path' => 'node/10159',
    'router_path' => 'node/%',
    'link_title' => 'réutilisation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-landlibrary-menu_rutilisation:node/10159',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-landlibrary-menu_search:library/search.
  $menu_links['menu-landlibrary-menu_search:library/search'] = array(
    'menu_name' => 'menu-landlibrary-menu',
    'link_path' => 'library/search',
    'router_path' => 'library/search',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-landlibrary-menu_search:library/search',
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
  // Exported menu link: menu-landlibrary-menu_sources:library/sources.
  $menu_links['menu-landlibrary-menu_sources:library/sources'] = array(
    'menu_name' => 'menu-landlibrary-menu',
    'link_path' => 'library/sources',
    'router_path' => 'library/sources',
    'link_title' => 'Sources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-landlibrary-menu_sources:library/sources',
    ),
    'module' => 'menu',
    'hidden' => 0,
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
  t('Accueil');
  t('Bibliothèque');
  t('Contribuer');
  t('Contribute');
  t('Data reuse');
  t('Home');
  t('Inicio');
  t('Library');
  t('Rechercher');
  t('Search');
  t('Sources');
  t('biblioteca');
  t('busca');
  t('contribuir');
  t('fontes');
  t('fuentes');
  t('reuso');
  t('reutilizar');
  t('réutilisation');

  return $menu_links;
}
