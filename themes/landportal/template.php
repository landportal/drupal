<?php
/**
 * @file
 * Main Landportal theme file
 *
 * The Landportal theme for Drupal 7.x
 *
 * Original work by: WESO (http://www.weso.es/)
 * Drupal refactoring: Jules <jules@ker.bz>
 */

function landportal_theme($existing, $type, $theme, $path) {
  $items = array();
  return $items;
}

/**
 * The right place to add common css & js for all pages
 */
function landportal_preprocess_html(&$variables) {
  drupal_add_css(
    "//fonts.googleapis.com/css?family=News+Cycle|Source+Sans+Pro:300,400|Josefin+Sans:300",
    array('type' => 'external')
  );
  //drupal_add_js(drupal_get_path('module', 'landbook').'/js/libraries/bootstrap.min.js');
  drupal_add_css(drupal_get_path('theme', 'landportal').'/css/font-awesome.min.css');
  drupal_add_css(drupal_get_path('theme', 'landportal').'/css/bootstrap.min.css');

  $meta_viewport = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'content' => 'width=device-width',
      'name' => 'viewport',
    )
  );
  drupal_add_html_head($meta_viewport, 'viewport');

  $p = drupal_get_path_alias();
  if (substr($p, 0, 7) == 'library') {
    $variables['classes_array'][] = 'page-library';
  }
}

function landportal_preprocess_page(&$variables) {
  if (arg(0) == 'user') {
    switch (arg(1)) {
      case 'register':
      case 'password':
      case '':
      case 'login':
        drupal_set_title(t('Join us'));
        break;
    }
  }
}

/**
 * Add description to section-header menus
 * If no menu are found in the section-header remove the whole block
 */
function landportal_page_alter(&$page) {
  if (!isset($page['section_header'])) return;
  $check = FALSE;
  foreach (array('landbook-menu', 'landdebate-menu', 'menu-landlibrary-menu', 'user-signin') as $i) {
    if (isset($page['section_header']['menu_' . $i])) {
      $m = menu_load($i);
      $m_desc = i18n_string_translate('menu:menu:'.$i.':description', $m['description']);
      $page['section_header']['menu_'. $i]['#block']->description = $m_desc;
      $check = TRUE;
    }
  }
  if (!$check) unset($page['section_header']);
}

/**
 * Override language switcher locale block links
 * Display ISO (2 letters) code instead of the full lang name.
 */
function landportal_links__locale_block(&$vars) {
  foreach($vars['links'] as $language => $langInfo) {
        $vars['links'][$language]['title'] = $vars['links'][$language]['language']->language;
  }
  $content = theme_links($vars);
  return $content;
}
