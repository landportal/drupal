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


require_once 'includes/menus.php';

function landportal_theme($existing, $type, $theme, $path) {
  $items = array();
  return $items;
}

/**
 * TMP Hack
 * Until users & profile field have been cleaned up / sync'ed
 */
function landportal_user_view_alter(&$build) {
    foreach (profile2_get_types() as $type => $profile_type) {
        if (array_key_exists('profile_'.$type, $build)) {
            unset($build['profile_'.$type]['#prefix']);
            $build['profile_'.$type]['#profile_type'] = $profile_type->type;
        }
    }
    //dpm($build);
}

/**
 * The right place to add common css & js for all pages
 */
function landportal_preprocess_html(&$variables) {
  global $user;
  drupal_add_css(
    "//fonts.googleapis.com/css?family=News+Cycle|Source+Sans+Pro:300,400|Josefin+Sans:300",
    array('type' => 'external')
  );
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

  // This should be in the Landlibrary module... prone to fail this is all bad
  $p = drupal_get_path_alias();
  if (substr($p, 0, 7) == 'library') {
    $variables['classes_array'][] = 'page-library';
  }

  if ($user->uid > 0) {
    $role_class = '';
    foreach ($user->roles as $key => $value) {
      if ($value != 'authenticated user') {
        $role_class = $value . '-role';
        $variables['classes_array'][] = $role_class;
      }
    }
  }

  if (!empty($_GET['pdf'])) {
    $meta = array(
      'url' => url(current_path(), array('absolute' => true)),
      'name' => 'author',
      'title' => drupal_get_title(),
      'node' => new stdClass()
    );
    module_load_include('inc', 'print_pdf');
    header('Cache-Control: private');
    header('Content-Type: application/pdf');

    $html = '';
    $exclude_blocks = array('landbook_vis_map_region_map', 'landbook_country_pdf_block', 'landbook_vis_map_world_map');
    foreach ($variables['page']['content'] as $key => $value) {
      if (!in_array($key, $exclude_blocks)) {
        $html.= drupal_render($value);
      }
    }

    $html = '<html><body>' . $html . '</body></html>';
    print print_pdf_generate_html($html, $meta);

    flush();
  }
}

/**
 * Force page title to be 'Join us' on user registration and login pages
 *
 * TODO: pretty bad hook in there, surely a better way to do that.
 */
function landportal_preprocess_page(&$variables) {
    if (isset($variables['node']->type)) {
        $variables['theme_hook_suggestions'][] = 'page__' . $variables['node']->type;
    }
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
  if((arg(0) == 'search' && arg(1) == 'all') || (arg(0) == 'library' && arg(1) == 'search')){
    drupal_set_title('');
  }
  
  /* if (isset($variables['page']['header']['lang_dropdown_language']['#weight'])) { */
  /*   $variables['page']['header']['lang_dropdown_language']['#weight'] = -60; */
  /* } */
  /* if (isset($variables['page']['header']['nice_menus_1']['#weight'])) { */
  /*   $variables['page']['header']['nice_menus_1']['#weight'] = -60; */
  /* } */
}

/**
 * Add the menu description to section-header (used as a tagline for the section)
 * If no menu is found, remove the whole block.
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

  // Remove sidebars from homepage?
}

/**
 * Override the search results page
 */
function landportal_preprocess_search_result(&$vars){
  $vars['content'] = array();

  if (!empty($vars['result']['node'])) {
    $node = node_load($vars['result']['node']->entity_id);
    if (!empty($node)) {
      $vars['content'] = node_view($node,'listing');
    }
  }
}

/**
 * Implements hook_preprocess_field()
 */
 
function landportal_preprocess_field(&$vars) {
  $name = $vars['element']['#field_name'];
  if ($name == 'field_status') {
    $value = str_replace(' ','-',strtolower($vars['items'][0]['#markup']));
    if (!empty($value)) {
      $vars['classes_array'][] = 'status-' . $value;
    }
  }
}