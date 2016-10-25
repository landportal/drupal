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

  // Exported menu link: menu-footer-menu_actualits:debate/news.
  $menu_links['menu-footer-menu_actualits:debate/news'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/news',
    'router_path' => 'debate/news',
    'link_title' => 'Actualités',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_actualits:debate/news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
  );
  // Exported menu link: menu-footer-menu_blog:debate/blog-post.
  $menu_links['menu-footer-menu_blog:debate/blog-post'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/blog-post',
    'router_path' => 'debate',
    'link_title' => 'Blog',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_blog:debate/blog-post',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
  );
  // Exported menu link: menu-footer-menu_blogs:debate/blog-post.
  $menu_links['menu-footer-menu_blogs:debate/blog-post'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/blog-post',
    'router_path' => 'debate',
    'link_title' => 'Blogs',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_blogs:debate/blog-post',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
  );
  // Exported menu link: menu-footer-menu_blogues:debate/blog-post.
  $menu_links['menu-footer-menu_blogues:debate/blog-post'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/blog-post',
    'router_path' => 'debate',
    'link_title' => 'Blogues',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_blogues:debate/blog-post',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
    'language' => 'pt',
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
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_catalog:book/catalog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
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
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_catalogue:book/catalog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_catlogo:book/catalog.
  $menu_links['menu-footer-menu_catlogo:book/catalog'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/catalog',
    'router_path' => 'book/catalog',
    'link_title' => 'Catálogo',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_catlogo:book/catalog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_communaut:debate/community.
  $menu_links['menu-footer-menu_communaut:debate/community'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/community',
    'router_path' => 'debate/community',
    'link_title' => 'Communauté',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_communaut:debate/community',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
  );
  // Exported menu link: menu-footer-menu_community:debate/community.
  $menu_links['menu-footer-menu_community:debate/community'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/community',
    'router_path' => 'debate/community',
    'link_title' => 'Community',
    'options' => array(
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
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_comunidad:debate/community',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
  );
  // Exported menu link: menu-footer-menu_comunidade:debate/community.
  $menu_links['menu-footer-menu_comunidade:debate/community'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/community',
    'router_path' => 'debate/community',
    'link_title' => 'Comunidade',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_comunidade:debate/community',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
    'language' => 'pt',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
  );
  // Exported menu link: menu-footer-menu_countries:book/countries.
  $menu_links['menu-footer-menu_countries:book/countries'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/countries',
    'router_path' => 'book/countries',
    'link_title' => 'Countries',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_countries:book/countries',
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
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_dbats:debate/debates.
  $menu_links['menu-footer-menu_dbats:debate/debates'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/debates',
    'router_path' => 'debate/debates',
    'link_title' => 'Débats',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_dbats:debate/debates',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
  );
  // Exported menu link: menu-footer-menu_debates:debate/debates.
  $menu_links['menu-footer-menu_debates:debate/debates'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/debates',
    'router_path' => 'debate/debates',
    'link_title' => 'Debates',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_debates:debate/debates',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
    'language' => 'pt',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
  );
  // Exported menu link: menu-footer-menu_eventos:debate/events.
  $menu_links['menu-footer-menu_eventos:debate/events'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/events',
    'router_path' => 'debate/events',
    'link_title' => 'Eventos',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_eventos:debate/events',
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
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
  );
  // Exported menu link: menu-footer-menu_events:debate/events.
  $menu_links['menu-footer-menu_events:debate/events'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/events',
    'router_path' => 'debate/events',
    'link_title' => 'Events',
    'options' => array(
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
  // Exported menu link: menu-footer-menu_fontes:book/sources.
  $menu_links['menu-footer-menu_fontes:book/sources'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/sources',
    'router_path' => 'book/sources',
    'link_title' => 'Fontes',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_fontes:book/sources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
    'language' => 'pt',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_fontes:library/sources.
  $menu_links['menu-footer-menu_fontes:library/sources'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'library/sources',
    'router_path' => 'library/sources',
    'link_title' => 'Fontes',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_fontes:library/sources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'language' => 'pt',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-library:node/28432',
  );
  // Exported menu link: menu-footer-menu_fuentes:book/sources.
  $menu_links['menu-footer-menu_fuentes:book/sources'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/sources',
    'router_path' => 'book/sources',
    'link_title' => 'Fuentes',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_fuentes:book/sources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_indicadores:book/indicators.
  $menu_links['menu-footer-menu_indicadores:book/indicators'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/indicators',
    'router_path' => 'book/indicators',
    'link_title' => 'Indicadores',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_indicadores:book/indicators',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_indicateurs:book/indicators.
  $menu_links['menu-footer-menu_indicateurs:book/indicators'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/indicators',
    'router_path' => 'book/indicators',
    'link_title' => 'Indicateurs',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_indicateurs:book/indicators',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_indicators:book/indicators.
  $menu_links['menu-footer-menu_indicators:book/indicators'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/indicators',
    'router_path' => 'book/indicators',
    'link_title' => 'Indicators',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_indicators:book/indicators',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_land-book:book.
  $menu_links['menu-footer-menu_land-book:book'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book',
    'router_path' => 'book',
    'link_title' => 'Land Book',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_land-book:book',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 22,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_land-debate:debate.
  $menu_links['menu-footer-menu_land-debate:debate'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate',
    'router_path' => 'debate',
    'link_title' => 'Land Debate',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_land-debate:debate',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 3,
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
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_land-portal:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 43,
    'customized' => 1,
    'language' => 'pt',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_news:debate/news.
  $menu_links['menu-footer-menu_news:debate/news'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/news',
    'router_path' => 'debate/news',
    'link_title' => 'News',
    'options' => array(
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
  // Exported menu link: menu-footer-menu_notcias:debate/news.
  $menu_links['menu-footer-menu_notcias:debate/news'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/news',
    'router_path' => 'debate/news',
    'link_title' => 'Notícias',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_notcias:debate/news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 1,
    'language' => 'pt',
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
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_noticias:debate/news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
  );
  // Exported menu link: menu-footer-menu_pas:book/countries.
  $menu_links['menu-footer-menu_pas:book/countries'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/countries',
    'router_path' => 'book/countries',
    'link_title' => 'País',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_pas:book/countries',
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
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_pases:book/countries.
  $menu_links['menu-footer-menu_pases:book/countries'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/countries',
    'router_path' => 'book/countries',
    'link_title' => 'Países',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_pases:book/countries',
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
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_pays:book/countries.
  $menu_links['menu-footer-menu_pays:book/countries'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/countries',
    'router_path' => 'book/countries',
    'link_title' => 'Pays',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_pays:book/countries',
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
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_procure:library/search.
  $menu_links['menu-footer-menu_procure:library/search'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'library/search',
    'router_path' => 'library/search',
    'link_title' => 'Procure',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_procure:library/search',
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
    'parent_identifier' => 'menu-footer-menu_land-library:node/28432',
  );
  // Exported menu link: menu-footer-menu_sources:book/sources.
  $menu_links['menu-footer-menu_sources:book/sources'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/sources',
    'router_path' => 'book/sources',
    'link_title' => 'Sources',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_sources:book/sources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_vnements:debate/events.
  $menu_links['menu-footer-menu_vnements:debate/events'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/events',
    'router_path' => 'debate/events',
    'link_title' => 'Événements',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_vnements:debate/events',
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
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Actualités');
  t('Blog');
  t('Blogs');
  t('Blogues');
  t('Catalog');
  t('Catalogue');
  t('Catálogo');
  t('Communauté');
  t('Community');
  t('Comunidad');
  t('Comunidade');
  t('Countries');
  t('Debates');
  t('Débats');
  t('Eventos');
  t('Events');
  t('Fontes');
  t('Fuentes');
  t('Indicadores');
  t('Indicateurs');
  t('Indicators');
  t('Land Book');
  t('Land Debate');
  t('Land Portal');
  t('News');
  t('Noticias');
  t('Notícias');
  t('Pays');
  t('País');
  t('Países');
  t('Procure');
  t('Sources');
  t('Événements');

  return $menu_links;
}
