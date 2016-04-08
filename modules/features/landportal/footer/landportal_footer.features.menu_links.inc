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

  // Exported menu link: menu-footer-menu_about:node/6900.
  $menu_links['menu-footer-menu_about:node/6900'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/6900',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_about:node/6900',
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
    'parent_identifier' => 'menu-footer-menu_landdebate:debate',
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
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-footer-menu_landlibrary:node/10158',
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
    'parent_identifier' => 'menu-footer-menu_landbook:book',
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
    'parent_identifier' => 'menu-footer-menu_landdebate:debate',
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
    'parent_identifier' => 'menu-footer-menu_landbook:book',
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
    'parent_identifier' => 'menu-footer-menu_landdebate:debate',
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
    'parent_identifier' => 'menu-footer-menu_landdebate:debate',
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
    'parent_identifier' => 'menu-footer-menu_landbook:book',
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
  // Exported menu link: menu-footer-menu_landbook:book.
  $menu_links['menu-footer-menu_landbook:book'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'book',
    'router_path' => 'book',
    'link_title' => 'Landbook',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_landbook:book',
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
  // Exported menu link: menu-footer-menu_landdebate:debate.
  $menu_links['menu-footer-menu_landdebate:debate'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'debate',
    'router_path' => 'debate',
    'link_title' => 'Landdebate',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_landdebate:debate',
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
  // Exported menu link: menu-footer-menu_landlibrary:node/10158.
  $menu_links['menu-footer-menu_landlibrary:node/10158'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/10158',
    'router_path' => 'node/%',
    'link_title' => 'Landlibrary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_landlibrary:node/10158',
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
    'parent_identifier' => 'menu-footer-menu_landdebate:debate',
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
    'parent_identifier' => 'menu-footer-menu_landbook:book',
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
    'parent_identifier' => 'menu-footer-menu_landlibrary:node/10158',
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
    'parent_identifier' => 'menu-footer-menu_landbook:book',
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
    'parent_identifier' => 'menu-footer-menu_landlibrary:node/10158',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Blogs');
  t('Browse');
  t('Catalog');
  t('Community');
  t('Countries');
  t('Debates');
  t('Documentation');
  t('Events');
  t('Indicators');
  t('Land Portal');
  t('Landbook');
  t('Landdebate');
  t('Landlibrary');
  t('News');
  t('Regions');
  t('Search');
  t('Sources');

  return $menu_links;
}
