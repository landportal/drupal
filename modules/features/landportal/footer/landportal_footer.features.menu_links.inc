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

  // Exported menu link: menu-footer-menu_-propos-de-nous:node/6900.
  $menu_links['menu-footer-menu_-propos-de-nous:node/6900'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/6900',
    'router_path' => 'node/%',
    'link_title' => 'À propos de nous',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_-propos-de-nous:node/6900',
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
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
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
    'weight' => -2,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_acerca-de-nosotros:node/6900.
  $menu_links['menu-footer-menu_acerca-de-nosotros:node/6900'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/6900',
    'router_path' => 'node/%',
    'link_title' => 'Acerca de nosotros',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_acerca-de-nosotros:node/6900',
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
      'attributes' => array(
        'title' => '',
      ),
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
    'language' => 'fr',
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
  // Exported menu link: menu-footer-menu_blogues:debate/blog-post.
  $menu_links['menu-footer-menu_blogues:debate/blog-post'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/blog-post',
    'router_path' => 'debate',
    'link_title' => 'Blogues',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
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
  // Exported menu link: menu-footer-menu_buscar:library/search.
  $menu_links['menu-footer-menu_buscar:library/search'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'library/search',
    'router_path' => 'library/search',
    'link_title' => 'Buscar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_buscar:library/search',
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
    'parent_identifier' => 'menu-footer-menu_land-library-es:node/10158',
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
    'weight' => -48,
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
    'weight' => -2,
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
    'weight' => -2,
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
      'attributes' => array(
        'title' => '',
      ),
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
  // Exported menu link: menu-footer-menu_contact-us:node/30375.
  $menu_links['menu-footer-menu_contact-us:node/30375'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/30375',
    'router_path' => 'node/%',
    'link_title' => 'Contact us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_contact-us:node/30375',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 8,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_contactez-nous:node/30375.
  $menu_links['menu-footer-menu_contactez-nous:node/30375'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/30375',
    'router_path' => 'node/%',
    'link_title' => 'Contactez-nous',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_contactez-nous:node/30375',
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
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_contato-conosco:node/30375.
  $menu_links['menu-footer-menu_contato-conosco:node/30375'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/30375',
    'router_path' => 'node/%',
    'link_title' => 'Contato Conosco',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_contato-conosco:node/30375',
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
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_contctenos:node/30375.
  $menu_links['menu-footer-menu_contctenos:node/30375'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/30375',
    'router_path' => 'node/%',
    'link_title' => 'Contáctenos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_contctenos:node/30375',
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
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_contribuer:node/10160.
  $menu_links['menu-footer-menu_contribuer:node/10160'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/10160',
    'router_path' => 'node/%',
    'link_title' => 'Contribuer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_contribuer:node/10160',
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
    'parent_identifier' => 'menu-footer-menu_land-library-fr:node/10158',
  );
  // Exported menu link: menu-footer-menu_contribuir:node/10160.
  $menu_links['menu-footer-menu_contribuir:node/10160'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/10160',
    'router_path' => 'node/%',
    'link_title' => 'Contribuir',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_contribuir:node/10160',
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
    'parent_identifier' => 'menu-footer-menu_land-library-es:node/10158',
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
    'weight' => 4,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-library:node/10158',
  );
  // Exported menu link: menu-footer-menu_countries:debate/countries.
  $menu_links['menu-footer-menu_countries:debate/countries'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/countries',
    'router_path' => 'debate',
    'link_title' => 'Countries',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_countries:debate/countries',
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
    'weight' => 2,
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
    'weight' => 0,
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
  // Exported menu link: menu-footer-menu_faq:node/30529.
  $menu_links['menu-footer-menu_faq:node/30529'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/30529',
    'router_path' => 'node/%',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_faq:node/30529',
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
  // Exported menu link: menu-footer-menu_fontes:book/sources.
  $menu_links['menu-footer-menu_fontes:book/sources'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/sources',
    'router_path' => 'book',
    'link_title' => 'Fontes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_fontes:book/sources',
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
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_fontes:library/sources.
  $menu_links['menu-footer-menu_fontes:library/sources'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'library/sources',
    'router_path' => 'library/sources',
    'link_title' => 'Fontes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_fontes:library/sources',
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
    'parent_identifier' => 'menu-footer-menu_land-library-pt:node/10158',
  );
  // Exported menu link: menu-footer-menu_fuentes:book/sources.
  $menu_links['menu-footer-menu_fuentes:book/sources'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/sources',
    'router_path' => 'book',
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
    'weight' => 2,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_fuentes:library/sources.
  $menu_links['menu-footer-menu_fuentes:library/sources'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'library/sources',
    'router_path' => 'library/sources',
    'link_title' => 'Fuentes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_fuentes:library/sources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-library-es:node/10158',
  );
  // Exported menu link: menu-footer-menu_indicadores:book/indicators.
  $menu_links['menu-footer-menu_indicadores:book/indicators'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/indicators',
    'router_path' => 'book',
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
    'weight' => 0,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_indicateurs:book/indicators.
  $menu_links['menu-footer-menu_indicateurs:book/indicators'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/indicators',
    'router_path' => 'book',
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
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_indicators:book/indicators.
  $menu_links['menu-footer-menu_indicators:book/indicators'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/indicators',
    'router_path' => 'book',
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
    'weight' => -47,
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
  // Exported menu link: menu-footer-menu_land-debate:debate.
  $menu_links['menu-footer-menu_land-debate:debate'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate',
    'router_path' => 'debate',
    'link_title' => 'Land Debate',
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
  // Exported menu link: menu-footer-menu_land-library-es:node/10158.
  $menu_links['menu-footer-menu_land-library-es:node/10158'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/10158',
    'router_path' => 'node/%',
    'link_title' => 'Land Library es',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_land-library-es:node/10158',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_land-library-fr:node/10158.
  $menu_links['menu-footer-menu_land-library-fr:node/10158'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/10158',
    'router_path' => 'node/%',
    'link_title' => 'Land Library fr',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_land-library-fr:node/10158',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_land-library-pt:node/10158.
  $menu_links['menu-footer-menu_land-library-pt:node/10158'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/10158',
    'router_path' => 'node/%',
    'link_title' => 'Land Library pt',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_land-library-pt:node/10158',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'pt',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_land-library:node/10158.
  $menu_links['menu-footer-menu_land-library:node/10158'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/10158',
    'router_path' => 'node/%',
    'link_title' => 'Land Library',
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
    'weight' => -40,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu_landvoc:node/30281.
  $menu_links['menu-footer-menu_landvoc:node/30281'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/30281',
    'router_path' => 'node/%',
    'link_title' => 'LandVoc',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_landvoc:node/30281',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 9,
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
  // Exported menu link: menu-footer-menu_notcias:debate/news.
  $menu_links['menu-footer-menu_notcias:debate/news'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/news',
    'router_path' => 'debate/news',
    'link_title' => 'Notícias',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
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
    'weight' => -4,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
  );
  // Exported menu link: menu-footer-menu_pas:debate/countries.
  $menu_links['menu-footer-menu_pas:debate/countries'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/countries',
    'router_path' => 'debate',
    'link_title' => 'País',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_pas:debate/countries',
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
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_pases:debate/countries.
  $menu_links['menu-footer-menu_pases:debate/countries'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate/countries',
    'router_path' => 'debate',
    'link_title' => 'Países',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_pases:debate/countries',
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
    'parent_identifier' => 'menu-footer-menu_land-book:book',
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
    'weight' => -4,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-book:book',
  );
  // Exported menu link: menu-footer-menu_politique-de-confidentialit:node/6884.
  $menu_links['menu-footer-menu_politique-de-confidentialit:node/6884'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/6884',
    'router_path' => 'node/%',
    'link_title' => 'Politique de confidentialité',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_politique-de-confidentialit:node/6884',
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
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_poltica-de-privacidad:node/6884.
  $menu_links['menu-footer-menu_poltica-de-privacidad:node/6884'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/6884',
    'router_path' => 'node/%',
    'link_title' => 'Política de privacidad',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_poltica-de-privacidad:node/6884',
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
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_poltica-de-privacidade:node/6884.
  $menu_links['menu-footer-menu_poltica-de-privacidade:node/6884'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/6884',
    'router_path' => 'node/%',
    'link_title' => 'Política de Privacidade',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_poltica-de-privacidade:node/6884',
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
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_preguntas-frecuentes:node/30529.
  $menu_links['menu-footer-menu_preguntas-frecuentes:node/30529'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/30529',
    'router_path' => 'node/%',
    'link_title' => 'Preguntas Frecuentes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_preguntas-frecuentes:node/30529',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
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
    'weight' => 4,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_procure:library/search.
  $menu_links['menu-footer-menu_procure:library/search'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'library/search',
    'router_path' => 'library/search',
    'link_title' => 'Procure',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_procure:library/search',
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
    'parent_identifier' => 'menu-footer-menu_land-library-pt:node/10158',
  );
  // Exported menu link: menu-footer-menu_questions-frquemment-poses:node/30529.
  $menu_links['menu-footer-menu_questions-frquemment-poses:node/30529'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/30529',
    'router_path' => 'node/%',
    'link_title' => 'Questions fréquemment posées',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_questions-frquemment-poses:node/30529',
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
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_rechercher:library/search.
  $menu_links['menu-footer-menu_rechercher:library/search'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'library/search',
    'router_path' => 'library/search',
    'link_title' => 'Rechercher',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_rechercher:library/search',
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
    'parent_identifier' => 'menu-footer-menu_land-library-fr:node/10158',
  );
  // Exported menu link: menu-footer-menu_reutilizacin-de-datos:node/10159.
  $menu_links['menu-footer-menu_reutilizacin-de-datos:node/10159'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/10159',
    'router_path' => 'node/%',
    'link_title' => 'Reutilización de datos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_reutilizacin-de-datos:node/10159',
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
    'parent_identifier' => 'menu-footer-menu_land-library-es:node/10158',
  );
  // Exported menu link: menu-footer-menu_reutilizao-de-dados:node/10159.
  $menu_links['menu-footer-menu_reutilizao-de-dados:node/10159'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/10159',
    'router_path' => 'node/%',
    'link_title' => 'Reutilização de dados',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_reutilizao-de-dados:node/10159',
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
    'parent_identifier' => 'menu-footer-menu_land-library-pt:node/10158',
  );
  // Exported menu link: menu-footer-menu_rutilisation-des-donnes:node/10159.
  $menu_links['menu-footer-menu_rutilisation-des-donnes:node/10159'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/10159',
    'router_path' => 'node/%',
    'link_title' => 'Réutilisation des données',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_rutilisation-des-donnes:node/10159',
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
    'parent_identifier' => 'menu-footer-menu_land-library-fr:node/10158',
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
    'weight' => -2,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-library:node/10158',
  );
  // Exported menu link: menu-footer-menu_sobre-ns:node/6900.
  $menu_links['menu-footer-menu_sobre-ns:node/6900'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/6900',
    'router_path' => 'node/%',
    'link_title' => 'Sobre nós',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_sobre-ns:node/6900',
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
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_sources:book/sources.
  $menu_links['menu-footer-menu_sources:book/sources'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book/sources',
    'router_path' => 'book',
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
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-library:node/10158',
  );
  // Exported menu link: menu-footer-menu_termes-et-conditions:node/6890.
  $menu_links['menu-footer-menu_termes-et-conditions:node/6890'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/6890',
    'router_path' => 'node/%',
    'link_title' => 'Termes et conditions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_termes-et-conditions:node/6890',
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
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_termos-e-condies:node/6890.
  $menu_links['menu-footer-menu_termos-e-condies:node/6890'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/6890',
    'router_path' => 'node/%',
    'link_title' => 'Termos e Condições',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_termos-e-condies:node/6890',
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
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_terms-and-conditions:node/6890.
  $menu_links['menu-footer-menu_terms-and-conditions:node/6890'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/6890',
    'router_path' => 'node/%',
    'link_title' => 'Terms and Conditions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_terms-and-conditions:node/6890',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 6,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-portal:<front>',
  );
  // Exported menu link: menu-footer-menu_trminos-y-condiciones-de-uso:node/6890.
  $menu_links['menu-footer-menu_trminos-y-condiciones-de-uso:node/6890'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/6890',
    'router_path' => 'node/%',
    'link_title' => 'Términos y condiciones de uso',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_trminos-y-condiciones-de-uso:node/6890',
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
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_land-debate:debate',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About us');
  t('Acerca de nosotros');
  t('Actualités');
  t('Blog');
  t('Blogs');
  t('Blogues');
  t('Buscar');
  t('Catalog');
  t('Catalogue');
  t('Catálogo');
  t('Communauté');
  t('Community');
  t('Comunidad');
  t('Comunidade');
  t('Contact us');
  t('Contactez-nous');
  t('Contato Conosco');
  t('Contribuer');
  t('Contribuir');
  t('Contribute');
  t('Contáctenos');
  t('Countries');
  t('Data Reuse');
  t('Debates');
  t('Débats');
  t('Eventos');
  t('Events');
  t('FAQ');
  t('Fontes');
  t('Fuentes');
  t('Indicadores');
  t('Indicateurs');
  t('Indicators');
  t('Land Book');
  t('Land Debate');
  t('Land Library');
  t('Land Library es');
  t('Land Library fr');
  t('Land Library pt');
  t('Land Portal');
  t('LandVoc');
  t('News');
  t('Noticias');
  t('Notícias');
  t('Pays');
  t('País');
  t('Países');
  t('Politique de confidentialité');
  t('Política de Privacidade');
  t('Política de privacidad');
  t('Preguntas Frecuentes');
  t('Privacy Policy');
  t('Procure');
  t('Questions fréquemment posées');
  t('Rechercher');
  t('Reutilización de datos');
  t('Reutilização de dados');
  t('Réutilisation des données');
  t('Search');
  t('Sobre nós');
  t('Sources');
  t('Termes et conditions');
  t('Termos e Condições');
  t('Terms and Conditions');
  t('Términos y condiciones de uso');
  t('À propos de nous');
  t('Événements');

  return $menu_links;
}
