<?php
/**
 * @file
 * landportal_footer.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function landportal_footer_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-menu_about-us:node/6900.
  $menu_links['menu-footer-menu_about-us:node/6900'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/6900',
    'router_path' => 'node/%',
    'link_title' => 'About us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_about-us:node/6900',
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
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_actualits:debate/news.
  $menu_links['menu-footer-menu_actualits:debate/news'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/news',
    'router_path' => 'debate/news',
    'link_title' => 'Actualités',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_actualits:debate/news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-debate-fr:debate',
  );
  // Exported menu link: menu-footer-menu_blogs:debate/blog-post.
  $menu_links['menu-footer-menu_blogs:debate/blog-post'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/blog-post',
    'router_path' => 'debate',
    'link_title' => 'Blogs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_blogs:debate/blog-post',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
  );
  // Exported menu link: menu-footer-menu_catalog:book/catalog.
  $menu_links['menu-footer-menu_catalog:book/catalog'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/catalog',
    'router_path' => 'book/catalog',
    'link_title' => 'Catalog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_catalog:book/catalog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_catalogue:book/catalog.
  $menu_links['menu-footer-menu_catalogue:book/catalog'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/catalog',
    'router_path' => 'book/catalog',
    'link_title' => 'Catalogue',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_catalogue:book/catalog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book-fr:book',
  );
  // Exported menu link: menu-footer-menu_catlogo:book/catalog.
  $menu_links['menu-footer-menu_catlogo:book/catalog'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/catalog',
    'router_path' => 'book/catalog',
    'link_title' => 'Catálogo',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_catlogo:book/catalog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book-es:book',
  );
  // Exported menu link: menu-footer-menu_communaut:debate/community.
  $menu_links['menu-footer-menu_communaut:debate/community'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/community',
    'router_path' => 'debate/community',
    'link_title' => 'Communauté',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_communaut:debate/community',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-debate-fr:debate',
  );
  // Exported menu link: menu-footer-menu_community:debate/community.
  $menu_links['menu-footer-menu_community:debate/community'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/community',
    'router_path' => 'debate/community',
    'link_title' => 'Community',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_community:debate/community',
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
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
  );
  // Exported menu link: menu-footer-menu_comunidad:debate/community.
  $menu_links['menu-footer-menu_comunidad:debate/community'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/community',
    'router_path' => 'debate/community',
    'link_title' => 'Comunidad',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_comunidad:debate/community',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-debate-es:debate',
  );
  // Exported menu link: menu-footer-menu_contribute:node/10160.
  $menu_links['menu-footer-menu_contribute:node/10160'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/10160',
    'router_path' => 'node/%',
    'link_title' => 'Contribute',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_contribute:node/10160',
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
    'parent_identifier' => 'menu-footer-menu_land-library:node/10158',
  );
  // Exported menu link: menu-footer-menu_countries:book/countries.
  $menu_links['menu-footer-menu_countries:book/countries'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/countries',
    'router_path' => 'book/countries',
    'link_title' => 'Countries',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_countries:book/countries',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_data-reuse:node/10159.
  $menu_links['menu-footer-menu_data-reuse:node/10159'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/10159',
    'router_path' => 'node/%',
    'link_title' => 'Data Reuse',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_data-reuse:node/10159',
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
    'parent_identifier' => 'menu-footer-menu_land-library:node/10158',
  );
  // Exported menu link: menu-footer-menu_dbats:debate/debates.
  $menu_links['menu-footer-menu_dbats:debate/debates'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/debates',
    'router_path' => 'debate/debates',
    'link_title' => 'Débats',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_dbats:debate/debates',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-debate-fr:debate',
  );
  // Exported menu link: menu-footer-menu_debates:debate/debates.
  $menu_links['menu-footer-menu_debates:debate/debates'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/debates',
    'router_path' => 'debate/debates',
    'link_title' => 'Debates',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_debates:debate/debates',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
  );
  // Exported menu link: menu-footer-menu_documentation:node/13057.
  $menu_links['menu-footer-menu_documentation:node/13057'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/13057',
    'router_path' => 'node/%',
    'link_title' => 'Documentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_documentation:node/13057',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_eventos:debate/events.
  $menu_links['menu-footer-menu_eventos:debate/events'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/events',
    'router_path' => 'debate/events',
    'link_title' => 'Eventos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_eventos:debate/events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-debate-es:debate',
  );
  // Exported menu link: menu-footer-menu_events:debate/events.
  $menu_links['menu-footer-menu_events:debate/events'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/events',
    'router_path' => 'debate/events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_events:debate/events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
  );
  // Exported menu link: menu-footer-menu_fuentes:book/sources.
  $menu_links['menu-footer-menu_fuentes:book/sources'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/sources',
    'router_path' => 'book/sources',
    'link_title' => 'Fuentes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_fuentes:book/sources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book-es:book',
  );
  // Exported menu link: menu-footer-menu_indicadores:book/indicators.
  $menu_links['menu-footer-menu_indicadores:book/indicators'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/indicators',
    'router_path' => 'book/indicators',
    'link_title' => 'Indicadores',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_indicadores:book/indicators',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book-es:book',
  );
  // Exported menu link: menu-footer-menu_indicateurs:book/indicators.
  $menu_links['menu-footer-menu_indicateurs:book/indicators'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/indicators',
    'router_path' => 'book/indicators',
    'link_title' => 'Indicateurs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_indicateurs:book/indicators',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book-fr:book',
  );
  // Exported menu link: menu-footer-menu_indicators:book/indicators.
  $menu_links['menu-footer-menu_indicators:book/indicators'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/indicators',
    'router_path' => 'book/indicators',
    'link_title' => 'Indicators',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_indicators:book/indicators',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_land-book-es:book.
  $menu_links['menu-footer-menu_land-book-es:book'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book',
    'router_path' => 'book',
    'link_title' => 'Land book es',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_land-book-es:book',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_land-book-fr:book.
  $menu_links['menu-footer-menu_land-book-fr:book'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book',
    'router_path' => 'book',
    'link_title' => 'Land book fr',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_land-book-fr:book',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -41,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_land-book-pt:book.
  $menu_links['menu-footer-menu_land-book-pt:book'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book',
    'router_path' => 'book',
    'link_title' => 'Land book pt',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_land-book-pt:book',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -37,
    'customized' => 1,
    'language' => 'pt',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_land-book:book.
  $menu_links['menu-footer-menu_land-book:book'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book',
    'router_path' => 'book',
    'link_title' => 'Land book',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_land-book:book',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_land-debate-es:debate.
  $menu_links['menu-footer-menu_land-debate-es:debate'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate',
    'router_path' => 'debate',
    'link_title' => 'Land debate es',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_land-debate-es:debate',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_land-debate-fr:debate.
  $menu_links['menu-footer-menu_land-debate-fr:debate'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate',
    'router_path' => 'debate',
    'link_title' => 'Land debate fr',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_land-debate-fr:debate',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -42,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_land-debate-pt:debate.
  $menu_links['menu-footer-menu_land-debate-pt:debate'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate',
    'router_path' => 'debate',
    'link_title' => 'Land debate pt',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_land-debate-pt:debate',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -38,
    'customized' => 1,
    'language' => 'pt',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_land-debate:debate.
  $menu_links['menu-footer-menu_land-debate:debate'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate',
    'router_path' => 'debate',
    'link_title' => 'Land debate',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_land-debate:debate',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_land-library:node/10158.
  $menu_links['menu-footer-menu_land-library:node/10158'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/10158',
    'router_path' => 'node/%',
    'link_title' => 'Land library',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_land-library:node/10158',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_land-portal-es:<front>.
  $menu_links['menu-footer-menu_land-portal-es:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Land Portal es',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_land-portal-es:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -43,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_land-portal-foundation:node/10060.
  $menu_links['menu-footer-menu_land-portal-foundation:node/10060'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/10060',
    'router_path' => 'node/%',
    'link_title' => 'Land Portal Foundation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_land-portal-foundation:node/10060',
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
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_land-portal-fr:<front>.
  $menu_links['menu-footer-menu_land-portal-fr:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Land Portal fr',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_land-portal-fr:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_land-portal-pt:<front>.
  $menu_links['menu-footer-menu_land-portal-pt:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Land Portal pt',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_land-portal-pt:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -35,
    'customized' => 1,
    'language' => 'pt',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_land-portal:<front>.
  $menu_links['menu-footer-menu_land-portal:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Land Portal',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_land-portal:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_library:node/10158.
  $menu_links['menu-footer-menu_library:node/10158'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/10158',
    'router_path' => 'node/%',
    'link_title' => 'Library',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_library:node/10158',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-library:node/10158',
  );
  // Exported menu link: menu-footer-menu_news:debate/news.
  $menu_links['menu-footer-menu_news:debate/news'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/news',
    'router_path' => 'debate/news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_news:debate/news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
  );
  // Exported menu link: menu-footer-menu_noticias:debate/news.
  $menu_links['menu-footer-menu_noticias:debate/news'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/news',
    'router_path' => 'debate/news',
    'link_title' => 'Noticias',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_noticias:debate/news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-debate-es:debate',
  );
  // Exported menu link: menu-footer-menu_pases:book/countries.
  $menu_links['menu-footer-menu_pases:book/countries'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/countries',
    'router_path' => 'book/countries',
    'link_title' => 'Países',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_pases:book/countries',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'pt',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book-pt:book',
  );
  // Exported menu link: menu-footer-menu_pays:debate/countries.
  $menu_links['menu-footer-menu_pays:debate/countries'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/countries',
    'router_path' => 'debate',
    'link_title' => 'Pays',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_pays:debate/countries',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book-fr:book',
  );
  // Exported menu link: menu-footer-menu_privacy-policy:node/6884.
  $menu_links['menu-footer-menu_privacy-policy:node/6884'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/6884',
    'router_path' => 'node/%',
    'link_title' => 'Privacy Policy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_privacy-policy:node/6884',
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
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_regiones:book/regions.
  $menu_links['menu-footer-menu_regiones:book/regions'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/regions',
    'router_path' => 'book/regions',
    'link_title' => 'Regiones',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_regiones:book/regions',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book-es:book',
  );
  // Exported menu link: menu-footer-menu_regions:book/regions.
  $menu_links['menu-footer-menu_regions:book/regions'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/regions',
    'router_path' => 'book/regions',
    'link_title' => 'Regions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_regions:book/regions',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_reuse:book/reuse.
  $menu_links['menu-footer-menu_reuse:book/reuse'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/reuse',
    'router_path' => 'book/reuse',
    'link_title' => 'Reuse',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_reuse:book/reuse',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_reutilizar:book/reuse.
  $menu_links['menu-footer-menu_reutilizar:book/reuse'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/reuse',
    'router_path' => 'book/reuse',
    'link_title' => 'Reutilizar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_reutilizar:book/reuse',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book-es:book',
  );
  // Exported menu link: menu-footer-menu_rgions:book/regions.
  $menu_links['menu-footer-menu_rgions:book/regions'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/regions',
    'router_path' => 'book/regions',
    'link_title' => 'Régions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_rgions:book/regions',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book-fr:book',
  );
  // Exported menu link: menu-footer-menu_rutilisation:book/reuse.
  $menu_links['menu-footer-menu_rutilisation:book/reuse'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/reuse',
    'router_path' => 'book/reuse',
    'link_title' => 'Réutilisation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_rutilisation:book/reuse',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book-fr:book',
  );
  // Exported menu link: menu-footer-menu_search:library/search.
  $menu_links['menu-footer-menu_search:library/search'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'library/search',
    'router_path' => 'library/search',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_search:library/search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-library:node/10158',
  );
  // Exported menu link: menu-footer-menu_sources:book/sources.
  $menu_links['menu-footer-menu_sources:book/sources'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/sources',
    'router_path' => 'book/sources',
    'link_title' => 'Sources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_sources:book/sources',
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
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_sources:library/sources.
  $menu_links['menu-footer-menu_sources:library/sources'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'library/sources',
    'router_path' => 'library/sources',
    'link_title' => 'Sources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_sources:library/sources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-library:node/10158',
  );
  // Exported menu link: menu-footer-menu_terms-and-conditions-of-use:node/6890.
  $menu_links['menu-footer-menu_terms-and-conditions-of-use:node/6890'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/6890',
    'router_path' => 'node/%',
    'link_title' => 'Terms and Conditions of Use',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_terms-and-conditions-of-use:node/6890',
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
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_vnements:debate/events.
  $menu_links['menu-footer-menu_vnements:debate/events'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/events',
    'router_path' => 'debate/events',
    'link_title' => 'Événements',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_vnements:debate/events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-debate-fr:debate',
  );
  // Exported menu link: menu-footer-menu_widgets:book/widgets.
  $menu_links['menu-footer-menu_widgets:book/widgets'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/widgets',
    'router_path' => 'book/widgets',
    'link_title' => 'Widgets',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_widgets:book/widgets',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About us');
  t('Actualités');
  t('Blogs');
  t('Catalog');
  t('Catalogue');
  t('Catálogo');
  t('Communauté');
  t('Community');
  t('Comunidad');
  t('Contribute');
  t('Countries');
  t('Data Reuse');
  t('Debates');
  t('Documentation');
  t('Débats');
  t('Eventos');
  t('Events');
  t('Fuentes');
  t('Indicadores');
  t('Indicateurs');
  t('Indicators');
  t('Land Portal');
  t('Land Portal Foundation');
  t('Land Portal es');
  t('Land Portal fr');
  t('Land Portal pt');
  t('Land book');
  t('Land book es');
  t('Land book fr');
  t('Land book pt');
  t('Land debate');
  t('Land debate es');
  t('Land debate fr');
  t('Land debate pt');
  t('Land library');
  t('Library');
  t('News');
  t('Noticias');
  t('Pays');
  t('Países');
  t('Privacy Policy');
  t('Regiones');
  t('Regions');
  t('Reuse');
  t('Reutilizar');
  t('Régions');
  t('Réutilisation');
  t('Search');
  t('Sources');
  t('Terms and Conditions of Use');
  t('Widgets');
  t('Événements');

  return $menu_links;
}
