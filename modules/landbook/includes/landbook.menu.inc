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
        'page arguments'    => array('book'),
    );

    /**
     * Landbook menu (landbook-menu)
     */
    /* $items['book'] = array( */
    /*   'title'		=> 'Landbook', */
    /*   'menu_name'		=> 'landbook-menu', */
    /*   'type'              => MENU_NORMAL_ITEM, */
    /*   'access callback'	=> TRUE, */
    /*   'page callback'	=> 'drupal_goto', */
    /*   'page arguments'    => array('book/countries'), */
    /*   'weight'         => -10 */
    /* ); */
    $items['book/<front>'] = array(
        'title'		=> 'Home',
        'menu_name'		=> 'landbook-menu',
        'type'              => MENU_NORMAL_ITEM,
        'access callback'	=> TRUE,
        'page callback'	=> 'drupal_goto',
        'page arguments'    => array('<front>'),
        'weight'         => -11
    );

    // Admin menu for the Landbook
    landbook_menu_admin($items);

    /**
     * Other menus
     */
    // TMP HACK / TODO remove
    $items['admin/fill_regions_terms'] = array(
        'access callback'   => TRUE,
        'page callback' => 'landbook_fill_regions_terms',
    );

    $translatables['book'][] = t('Landbook');
    $translatables['book'][] = t('Home');
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
}
