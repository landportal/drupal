<?php
/**
 * @file
 * landbook_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function landbook_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: landbook-menu_catalog:book/catalog.
  $menu_links['landbook-menu_catalog:book/catalog'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/catalog',
    'router_path' => 'book/catalog',
    'link_title' => 'Catalog',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landbook-menu_catalog:book/catalog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -36,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_catalogue:book/catalog.
  $menu_links['landbook-menu_catalogue:book/catalog'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/catalog',
    'router_path' => 'book/catalog',
    'link_title' => 'Catalogue',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landbook-menu_catalogue:book/catalog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -35,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_catlogo:book/catalog.
  $menu_links['landbook-menu_catlogo:book/catalog'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/catalog',
    'router_path' => 'book/catalog',
    'link_title' => 'Catálogo',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landbook-menu_catlogo:book/catalog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -34,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_countries:book/countries.
  $menu_links['landbook-menu_countries:book/countries'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/countries',
    'router_path' => 'book/countries',
    'link_title' => 'Countries',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landbook-menu_countries:book/countries',
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
  );
  // Exported menu link: landbook-menu_fontes:book/sources.
  $menu_links['landbook-menu_fontes:book/sources'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/sources',
    'router_path' => 'book/sources',
    'link_title' => 'Fontes',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landbook-menu_fontes:book/sources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -24,
    'customized' => 1,
    'language' => 'pt',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_fuentes:book/sources.
  $menu_links['landbook-menu_fuentes:book/sources'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/sources',
    'router_path' => 'book/sources',
    'link_title' => 'Fuentes',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landbook-menu_fuentes:book/sources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -26,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_indicadores:book/indicators.
  $menu_links['landbook-menu_indicadores:book/indicators'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/indicators',
    'router_path' => 'book/indicators',
    'link_title' => 'Indicadores',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landbook-menu_indicadores:book/indicators',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -31,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_indicateurs:book/indicators.
  $menu_links['landbook-menu_indicateurs:book/indicators'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/indicators',
    'router_path' => 'book/indicators',
    'link_title' => 'Indicateurs',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landbook-menu_indicateurs:book/indicators',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -30,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_indicators:book/indicators.
  $menu_links['landbook-menu_indicators:book/indicators'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/indicators',
    'router_path' => 'book/indicators',
    'link_title' => 'Indicators',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landbook-menu_indicators:book/indicators',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -32,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_pases:book/countries.
  $menu_links['landbook-menu_pases:book/countries'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/countries',
    'router_path' => 'book/countries',
    'link_title' => 'Países',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landbook-menu_pases:book/countries',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_pays:book/countries.
  $menu_links['landbook-menu_pays:book/countries'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/countries',
    'router_path' => 'book/countries',
    'link_title' => 'Pays',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landbook-menu_pays:book/countries',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_reuse:node/35680.
  $menu_links['landbook-menu_reuse:node/35680'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'node/35680',
    'router_path' => 'node/%',
    'link_title' => 'Reuse',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landbook-menu_reuse:node/35680',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -25,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_reutilizar:book/reuse.
  $menu_links['landbook-menu_reutilizar:book/reuse'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/reuse',
    'router_path' => 'book',
    'link_title' => 'Reutilizar',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landbook-menu_reutilizar:book/reuse',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -21,
    'customized' => 1,
    'language' => 'pt',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_rutilisation:book/reuse.
  $menu_links['landbook-menu_rutilisation:book/reuse'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/reuse',
    'router_path' => 'book',
    'link_title' => 'Réutilisation',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landbook-menu_rutilisation:book/reuse',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -22,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_sources:book/sources.
  $menu_links['landbook-menu_sources:book/sources'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/sources',
    'router_path' => 'book/sources',
    'link_title' => 'Sources',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landbook-menu_sources:book/sources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -27,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Catalog');
  t('Catalogue');
  t('Catálogo');
  t('Countries');
  t('Fontes');
  t('Fuentes');
  t('Indicadores');
  t('Indicateurs');
  t('Indicators');
  t('Pays');
  t('Países');
  t('Reuse');
  t('Reutilizar');
  t('Réutilisation');
  t('Sources');

  return $menu_links;
}
