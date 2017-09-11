<?php
/**
 * @file
 * Landbook menus
 *
 * Landbook menus consists of:
 *  - a main-menu entry pointing to book
 *  - a 'header-section' menu to navigate the landbook modules
 *  - an admin menu to manage the module settings
 */


function landbook_menu() {
    $items = array();

    // Drupal main menu (main-menu) link
    $items['book'] = array(
        'title'		=> 'Landbook',
        'menu_name'		=> 'main-menu',
        'type'              => MENU_NORMAL_ITEM,
        'access callback'	=> TRUE,
        'page callback'	=> 'drupal_goto',
        'page arguments'    => array('book/countries'),
    );
    $translatables['book'][] = t('Landbook');

    // Admin menu for the Landbook
    landbook_menu_admin($items);
    return $items;
}

function landbook_menu_admin(&$items) {
  // Admin section
  $items['admin/config/landbook'] = array(
    'title'             => 'Landbook',
    'description'       => 'Configure the landbook',
    'postition'         => 'right',
    'weight'            => -4,
    'page callback'	=> 'system_admin_menu_block_page',
    'access arguments'  => array('administer site configuration'),
    'file'              => 'system.admin.inc',
    'file path'         => drupal_get_path('module', 'system'),
  );
  $items['admin/config/landbook/settings'] = array(
    'title'             => 'Landbook settings',
    'description'       => 'Base landbook configuration',
    'page callback'	=> 'drupal_get_form',
    'page arguments'	=> array('landbook_admin_settings'),
    'access arguments'  => array('administer site configuration'),
    'file'              => 'landbook.admin.inc',
    'file path'         => drupal_get_path('module', 'landbook').'/includes'
  );

  // LB Content
  $items['admin/content/landbook'] = array(
    'title'             => 'Land Book',
    'type'              => MENU_LOCAL_TASK,
    'description'       => 'Land Book content admin',
    'access arguments'  => array('administer taxonomy'),
    'callback' => 'systems_view_data',
    'weight' => 10,
  );
  $items['admin/content/landbook/catalog/%'] = array(
    'title' => 'Indicators',
    'type' => MENU_LOCAL_TASK,
    'access arguments' => array('administer taxonomy'),
    'callback' => 'systems_view_data',
    'weight' => 12,
  );
  // Futur (soon) LB Datasets
  /* $items['admin/content/landbook/datasets'] = array( */
  /*   'title' => 'Datasets', */
  /*   'type' => MENU_LOCAL_TASK, */
  /*   'access arguments' => array('administer content'), */
  /*   'callback' => 'systems_view_data', */
  /*   'weight' => 10, */
  /* ); */

  // Shortcut to add tax. term to LB -- BORKEN
/*   $items['admin/content/landbook/catalogs/add'] = array( */
/*     'title' => 'New catalog', */
/*     'type' => MENU_LOCAL_ACTION, */
/*     'access arguments' => array('administer taxonomy'), */
/*     'page callback' => 'drupal_get_form', */
/*     'page arguments' => array('taxonomy_form_vocabulary', array(), 'datasets'), */
/*   ); */
/*   $items['admin/content/landbook/indicators/add'] = array( */
/*     'title' => 'New indicator', */
/*     'type' => MENU_LOCAL_ACTION, */
/*     'access arguments' => array('administer taxonomy'), */
/*     'page callback' => 'drupal_get_form', */
/*     'page arguments' => array('taxonomy_form_vocabulary', array('indicators')), */
/* //    'callback' => 'systems_view_data', */
/*     // args: http://landportal.ker/admin/structure/taxonomy/datasets/add */
/* //    'weight' => 10, */
/*   ); */
/*     // args: http://landportal.ker/admin/structure/taxonomy/indicators/add */
}
