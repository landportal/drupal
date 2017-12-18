<?php
/**
 * Land Portal menus
 *
 * Author: Jules <jules@ker.bz>
 *
 * Import helper functions
 */

function landportal_menus_import_menu($menu) {
  if (!in_array($menu['menu_name'], array('landportal-menu', 'about-menu', 'main-menu'))) {
    return;
  }
  // Import menus from file
  $options = array(
    'create_content'  => NULL,
    'link_to_content' => TRUE,
    'remove_menu_items' => TRUE,
    'language' => NULL,
    'alter' => 1,
  );
  $file = drupal_get_path('module', 'landportal_menus').'/' . $menu['menu_name'] . '.txt';
  module_load_include('inc', 'menu_import', 'includes/import');
  $result = menu_import_parse_menu_from_file($file, $menu['menu_name'], $options);
  if (!empty($result['errors'])) {
    print_r($result['errors']);
    return ;
  }
  if (!empty($result['warnings'])) {
    print_r($result['warnings']);
  }
  landportal_menus_import_save($result);
  //return;
  /* menu_import_save_menu($result, $options); */
  drush_log('Imported ' . $menu['menu_name'], 'ok');
}

// see: menu_import/includes/import.inc / menu_import_save_menu
function landportal_menus_import_save($menu) {
  static $fmlid;
  $menu_name = $menu[0]['menu_name'];
  $menu[0]['mlid'] = 0;
  // Delete all items
  $deleted_cnt = count(menu_load_links($menu_name));
  menu_delete_links($menu_name);
  /* print 'IMPORT ' . $menu_name . "\n"; */
  /* print 'DEL ' . $deleted_cnt . "\n"; */
  foreach ($menu as $item) {
    if (!isset($item['children'])) {
      continue;
    }
    foreach ($item['children'] as $index) {
      $menuitem = $menu[$index];
      $menuitem['plid'] = $menu[$menuitem['parent']]['mlid'];
      $menuitem['menu_name'] = $menu_name;
      // LP: Set 'alter' in menuitem options
      $menuitem['options'] = array('alter' => 1);
      if (!$deleted_cnt) {
        menu_import_delete_node_menuitem($menuitem);
      }
      // Ensure we link to at least front page.
      /* if (empty($menuitem['link_path'])) { */
      /*   $menuitem['link_path'] = '<front>'; */
      /* } */
      // Save description if available.
      if (isset($menuitem['description'])) {
        $menuitem['options']['attributes']['title'] = $menuitem['description'];
      }
      // Allow other modules to alter the imported data.
      drupal_alter('menu_import', $menuitem);
      $mlid = menu_link_save($menuitem);
      // main menu Dropdown for lang
      if ($menu_name == 'main-menu') {
        if ($menuitem['link_path'] == 'voc/language' && $menuitem['link_title'] == 'Language') {
          $fmlid = $mlid;
        }
        if ($menuitem['link_path'] == '<droplink>') {
          $menuitem['options'] = array(
            "menu_attach_block" => [
              "name" => "locale|language_content",
              "use_ajax" => 0,
              "no_drop" => 1,
              "dropped" => 0,
              "on_hover" => 0,
              "orientation" => "vertical",
              "mlid" => $mlid,
              "plid" => $fmlid,
            ],
            "attributes" => [
              "title" => "",
            ],
            "alter" => true
          );
          $mlid = menu_link_save($menuitem);
          print "Language dropdown on " . $fmlid . ' / ' . $mlid . "\n";
        }
      }
      if (!$mlid) {
        print "FAIL \n";
        print_r($menuitem);
      /* } else { */
      /*   print 'GOT ' . $mlid . ' / ' . $menuitem['link_title'] . "\n"; */
      }
      // so that children can map their parents
      $menu[$index]['mlid'] = $mlid;
    }
  }
}
