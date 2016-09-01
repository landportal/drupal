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
}
