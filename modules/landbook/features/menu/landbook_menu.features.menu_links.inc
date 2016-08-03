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
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'landbook-menu_catalog:book/catalog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
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
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'landbook-menu_catalogue:book/catalog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_catlogo-:book/catalog.
  $menu_links['landbook-menu_catlogo-:book/catalog'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/catalog',
    'router_path' => 'book/catalog',
    'link_title' => 'Catálogo ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'landbook-menu_catlogo-:book/catalog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_catlogo:book/catalog.
  $menu_links['landbook-menu_catlogo:book/catalog'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/catalog',
    'router_path' => 'book/catalog',
    'link_title' => 'Catálogo',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'landbook-menu_catlogo:book/catalog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
    'customized' => 1,
    'language' => 'pt',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_countries:book/countries.
  $menu_links['landbook-menu_countries:book/countries'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/countries',
    'router_path' => 'book/countries',
    'link_title' => 'Countries',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'landbook-menu_countries:book/countries',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
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
    'link_title' => 'fontes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'landbook-menu_fontes:book/sources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -29,
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
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'landbook-menu_fuentes:book/sources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -30,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_indicadores-:book/indicators.
  $menu_links['landbook-menu_indicadores-:book/indicators'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/indicators',
    'router_path' => 'book/indicators',
    'link_title' => 'Indicadores ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'landbook-menu_indicadores-:book/indicators',
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
  // Exported menu link: landbook-menu_indicadores:book/indicators.
  $menu_links['landbook-menu_indicadores:book/indicators'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/indicators',
    'router_path' => 'book/indicators',
    'link_title' => 'Indicadores',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'landbook-menu_indicadores:book/indicators',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -33,
    'customized' => 1,
    'language' => 'pt',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_indicateurs:book/indicators.
  $menu_links['landbook-menu_indicateurs:book/indicators'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/indicators',
    'router_path' => 'book/indicators',
    'link_title' => 'Indicateurs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'landbook-menu_indicateurs:book/indicators',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -34,
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
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'landbook-menu_indicators:book/indicators',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -36,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_landbook:book.
  $menu_links['landbook-menu_landbook:book'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book',
    'router_path' => 'book',
    'link_title' => 'Landbook',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'landbook-menu_landbook:book',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_pases---:book/countries.
  $menu_links['landbook-menu_pases---:book/countries'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/countries',
    'router_path' => 'book/countries',
    'link_title' => 'Países   ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'landbook-menu_pases---:book/countries',
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
  // Exported menu link: landbook-menu_pases:book/countries.
  $menu_links['landbook-menu_pases:book/countries'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/countries',
    'router_path' => 'book/countries',
    'link_title' => 'Países',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'landbook-menu_pases:book/countries',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'language' => 'pt',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_pays:book/countries.
  $menu_links['landbook-menu_pays:book/countries'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/countries',
    'router_path' => 'book/countries',
    'link_title' => 'Pays',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
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
  // Exported menu link: landbook-menu_reuse:book/reuse.
  $menu_links['landbook-menu_reuse:book/reuse'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/reuse',
    'router_path' => 'book',
    'link_title' => 'Reuse',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'landbook-menu_reuse:book/reuse',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -28,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_reutilizar-:book/reuse.
  $menu_links['landbook-menu_reutilizar-:book/reuse'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/reuse',
    'router_path' => 'book',
    'link_title' => 'Reutilizar ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'landbook-menu_reutilizar-:book/reuse',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -27,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: landbook-menu_reutilizar:book/reuse.
  $menu_links['landbook-menu_reutilizar:book/reuse'] = array(
    'menu_name' => 'landbook-menu',
    'link_path' => 'book/reuse',
    'router_path' => 'book',
    'link_title' => 'Reutilizar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'landbook-menu_reutilizar:book/reuse',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -25,
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
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'landbook-menu_rutilisation:book/reuse',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -26,
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
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'landbook-menu_sources:book/sources',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -31,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Catalog');
  t('Catalogue');
  t('Catálogo');
  t('Catálogo ');
  t('Countries');
  t('Fuentes');
  t('Indicadores');
  t('Indicadores ');
  t('Indicateurs');
  t('Indicators');
  t('Landbook');
  t('Pays');
  t('Países');
  t('Países   ');
  t('Reuse');
  t('Reutilizar');
  t('Reutilizar ');
  t('Réutilisation');
  t('Sources');
  t('fontes');

  return $menu_links;
}
