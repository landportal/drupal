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
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_acerca-de-nosotros:http://landportal.info/es/page/2015/02/acerca-del-portal-de-la-tierra.
  $menu_links['menu-footer-menu_acerca-de-nosotros:http://landportal.info/es/page/2015/02/acerca-del-portal-de-la-tierra'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://landportal.info/es/page/2015/02/acerca-del-portal-de-la-tierra',
    'router_path' => '',
    'link_title' => 'Acerca de nosotros',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_acerca-de-nosotros:http://landportal.info/es/page/2015/02/acerca-del-portal-de-la-tierra',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'es',
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
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
  );
  // Exported menu link: menu-footer-menu_blog:http://landportal.info/es/debate/blog.
  $menu_links['menu-footer-menu_blog:http://landportal.info/es/debate/blog'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://landportal.info/es/debate/blog',
    'router_path' => '',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_blog:http://landportal.info/es/debate/blog',
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
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
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
  // Exported menu link: menu-footer-menu_browse:library/browse.
  $menu_links['menu-footer-menu_browse:library/browse'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'library/browse',
    'router_path' => 'library/browse',
    'link_title' => 'Browse',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_browse:library/browse',
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
    'parent_identifier' => 'menu-footer-menu_land-book:book',
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
    'parent_identifier' => 'menu-footer-menu_land-book:book',
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
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
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
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
  );
  // Exported menu link: menu-footer-menu_contact-us:https://landportal.info/contact-us.
  $menu_links['menu-footer-menu_contact-us:https://landportal.info/contact-us'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'https://landportal.info/contact-us',
    'router_path' => '',
    'link_title' => 'Contact us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_contact-us:https://landportal.info/contact-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_contactez-nous:https://landportal.info/fr/node/30375.
  $menu_links['menu-footer-menu_contactez-nous:https://landportal.info/fr/node/30375'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'https://landportal.info/fr/node/30375',
    'router_path' => '',
    'link_title' => 'Contactez nous',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_contactez-nous:https://landportal.info/fr/node/30375',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_contacto:https://landportal.info/contact-us.
  $menu_links['menu-footer-menu_contacto:https://landportal.info/contact-us'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'https://landportal.info/contact-us',
    'router_path' => '',
    'link_title' => 'Contacto',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_contacto:https://landportal.info/contact-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
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
    'weight' => -46,
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
    'weight' => -45,
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
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
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
  // Exported menu link: menu-footer-menu_debates:http://landportal.info/es/debate/debates.
  $menu_links['menu-footer-menu_debates:http://landportal.info/es/debate/debates'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://landportal.info/es/debate/debates',
    'router_path' => '',
    'link_title' => 'Debates',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_debates:http://landportal.info/es/debate/debates',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'es',
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
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
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
  // Exported menu link: menu-footer-menu_faq:node/13057.
  $menu_links['menu-footer-menu_faq:node/13057'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/13057',
    'router_path' => 'node/%',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_faq:node/13057',
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
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
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
    'parent_identifier' => 'menu-footer-menu_land-book:book',
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
    'parent_identifier' => 'menu-footer-menu_land-book:book',
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
    'parent_identifier' => 'menu-footer-menu_land-book:book',
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
  // Exported menu link: menu-footer-menu_inscribirse:https://landportal.info/es/user/register.
  $menu_links['menu-footer-menu_inscribirse:https://landportal.info/es/user/register'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'https://landportal.info/es/user/register',
    'router_path' => '',
    'link_title' => 'Inscribirse',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_inscribirse:https://landportal.info/es/user/register',
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
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_inscription:https://landportal.info/fr/user/register.
  $menu_links['menu-footer-menu_inscription:https://landportal.info/fr/user/register'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'https://landportal.info/fr/user/register',
    'router_path' => '',
    'link_title' => 'Inscription',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_inscription:https://landportal.info/fr/user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_join-now:https://landportal.info/user/register.
  $menu_links['menu-footer-menu_join-now:https://landportal.info/user/register'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'https://landportal.info/user/register',
    'router_path' => '',
    'link_title' => 'Join now',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_join-now:https://landportal.info/user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
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
    'weight' => -39,
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
    'weight' => -46,
    'customized' => 1,
    'language' => 'es',
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
    'weight' => -40,
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
    'weight' => -38,
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
    'weight' => -48,
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
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
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
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_politique-de-confidentialit:http://landportal.info/about/privacy-policy.
  $menu_links['menu-footer-menu_politique-de-confidentialit:http://landportal.info/about/privacy-policy'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://landportal.info/about/privacy-policy',
    'router_path' => '',
    'link_title' => 'Politique de confidentialité',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_politique-de-confidentialit:http://landportal.info/about/privacy-policy',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_poltica-de-privacidad:http://landportal.info/es/node/6884.
  $menu_links['menu-footer-menu_poltica-de-privacidad:http://landportal.info/es/node/6884'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://landportal.info/es/node/6884',
    'router_path' => '',
    'link_title' => 'Política de privacidad',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_poltica-de-privacidad:http://landportal.info/es/node/6884',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_preguntas-ms-frecuentes:node/13057.
  $menu_links['menu-footer-menu_preguntas-ms-frecuentes:node/13057'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/13057',
    'router_path' => 'node/%',
    'link_title' => 'Preguntas más frecuentes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_preguntas-ms-frecuentes:node/13057',
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
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
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
    'weight' => -48,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_questions-frquemment-poses:node/13057.
  $menu_links['menu-footer-menu_questions-frquemment-poses:node/13057'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/13057',
    'router_path' => 'node/%',
    'link_title' => 'Questions fréquemment posées',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_questions-frquemment-poses:node/13057',
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
    'parent_identifier' => 'menu-footer-menu_land-book:book',
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
    'parent_identifier' => 'menu-footer-menu_land-book:book',
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
    'parent_identifier' => 'menu-footer-menu_land-book:book',
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
    'parent_identifier' => 'menu-footer-menu_land-book:book',
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
    'weight' => -47,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-library:node/10158',
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
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
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
  t('Acerca de nosotros');
  t('Actualités');
  t('Blog');
  t('Blogs');
  t('Browse');
  t('Catalog');
  t('Catalogue');
  t('Catálogo');
  t('Communauté');
  t('Community');
  t('Comunidad');
  t('Contact us');
  t('Contactez nous');
  t('Contacto');
  t('Contribute');
  t('Countries');
  t('Data Reuse');
  t('Debates');
  t('Débats');
  t('Eventos');
  t('Events');
  t('FAQ');
  t('Fuentes');
  t('Indicadores');
  t('Indicateurs');
  t('Indicators');
  t('Inscribirse');
  t('Inscription');
  t('Join now');
  t('Land Portal');
  t('Land Portal pt');
  t('Land book');
  t('Land book pt');
  t('Land debate');
  t('Land debate pt');
  t('Land library');
  t('Library');
  t('News');
  t('Noticias');
  t('Pays');
  t('Países');
  t('Politique de confidentialité');
  t('Política de privacidad');
  t('Preguntas más frecuentes');
  t('Privacy Policy');
  t('Questions fréquemment posées');
  t('Regiones');
  t('Regions');
  t('Reuse');
  t('Reutilizar');
  t('Régions');
  t('Réutilisation');
  t('Search');
  t('Sources');
  t('Widgets');
  t('Événements');

  return $menu_links;
}
