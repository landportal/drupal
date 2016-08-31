<?php

function landportal_menu_tree($variables) {
  if($variables['theme_hook_original']=='menu_tree__landdebate_menu' || $variables['theme_hook_original']=='menu_tree__menu_landlibrary_menu'|| $variables['theme_hook_original']=='menu_tree__landbook_menu'){
  $menu_type = str_replace('menu_tree__menu_', '', $variables['theme_hook_original']);  
  return '<ul class="menu nav navbar-nav">' . $variables['tree'] . '</ul>';
  }
  else{
    return '<ul class="menu">' . $variables['tree'] . '</ul>';
  }
}

/* // Turns menu tree into a navbar */
/* function landportal_menu_tree($variables) { */
/*     // If we are not in those menus, exit */
/*     if (!in_array($variables['theme_hook_original'], array( */
/*         'menu_tree__landdebate_menu','menu_tree__menu_landlibrary_menu', 'menu_tree__landbook_menu', */
/*         'menu_tree__user_menu'))) */
/*         return '<ul class="menu">' . $variables['tree'] . '</ul>'; */
    
/*   if (in_array($variables['theme_hook_original'], array( */
/*       'menu_tree__user_menu'))) { */
/*       dpm($variables, 'tree'); */
/*   } */

/*     $menu_type = str_replace('menu_tree__menu_', '', $variables['theme_hook_original']); */
/*     return '<ul class="menu nav navbar-nav">' . $variables['tree'] . '</ul>'; */
/* } */

/* function landportal_menu_link($variables) { */

/*     $element = $variables['element']; */
/*     $sub_menu = ''; */

/*     // User menu hack */
/*     if (in_array($variables['theme_hook_original'], array( */
/*         'menu_link__user_menu'))) { */
/*         /\* if ($element['#title'] == 'User account') { *\/ */
/*         /\*     //$element['#original_link']['options']['attributes']['class'] = 'stuff'; *\/ */
/*         /\*     //$element['#title'] = '@glyphicon-user@'; *\/ */
/*         /\* } *\/ */
/*         $element['theme_hook_original'] = 'nice_menus__main_menu'; */
/*         $element['#theme'] = 'nice_menus__main_menu'; */
/*         $variables['element'] = $element; */
/*         dpm($variables, 'menu_link'); */
/*         return theme_menu_link($variables); */
/*         return; */
/*         dsm(drupal_render($variables['element']['#original_link'])); */
/*         return ; */
/*         dpm($element, 'menu_link'); */
/*         return '<li><span class="glyphicon glyphicon-user" style="font-size: 32px; color: green;" aria-hidden="true"></span>' */
/*             . theme('nice_menus', $element['#original_link'])['content'] */
/*             . '</li>' */
/*             ; */
/*         /\* dpm($variables, 'menu_link var'); *\/ */
/*         //$variables['element'] = $element; */
/*         //theme_menu_link($variables); */
/*         //return ; */
/*     } */
/*     if ($element['#below']) { */
/*         $sub_menu = drupal_render($element['#below']); */
/*     } */
/*     $output = l($element['#title'], $element['#href'], $element['#localized_options']); */
/*     return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n"; */
/* } */

/******************************************
 * Locale / Language switcher menu
 */

/**
 * Override the 'language switcher' block links
 * Display ISO 2 letters code instead of the full language name.
 */
/* function landportal_links__locale_block(&$vars) { */
/*   foreach($vars['links'] as $language => $langInfo) { */
/*         $vars['links'][$language]['title'] = $vars['links'][$language]['language']->language; */
/*   } */
/*   $content = theme_links($vars); */
/*   return $content; */
/* } */

function landportal_links__locale_block($vars) {
  global $language_url;

  dpm($vars, 'LANG SW');
  $content = '';
  $languages = $vars['links'];
  $items = array();
  $language_selected = '';

  foreach ($languages as $lang_code => $lang_options) {
      $title = $lang_options['language']->language;
      if (isset($lang_options['href']) &&
            ($lang_options['href'] == $_GET['q'] ||
            ($lang_options['href'] == '<front>' &&
            drupal_is_front_page())) &&
            (empty($lang_options['language']) ||
            $lang_options['language']->language == $language_url->language)
      ) {
          $language_selected  = '<ul><li class="' . $lang_code . '">';
          //$language_selected .= '<span class="flag-icon flag-icon-' . $lang_code . '"></span>';
          $language_selected .= '<span class="flag-title">' . $title . '</span></li></ul>';
      }else{
          if(isset($lang_options['href'])) {
              $li  = '<li class="' . $lang_code . '">';
              //$li .= '<span class="flag-icon flag-icon-' . $lang_code . '"></span>';
              $li .= '<span class="flag-title">';
              $li .= l($title, $lang_options['href'], array('language' => $lang_options['language']));
              $li .= '</span></li>';
              $items[] = $li;
          }else{
              $li  = '<li class="' . $lang_code . ' language-nexist">';
              //$li .= '<span class="flag-icon flag-icon-' . $lang_code . '"></span>';
              $li .= '<span class="flag-title">' . $title . '</span>';
              $li .= '</li>';
              $items[] = $li;
          }
      }
  }

  $content .= '<div class="dropdown">';
  $content .= '<button class="btn btn-default dropdown-toggle" type="button" id="dropdown-language" data-toggle="dropdown" aria-haspopup="true" aria-expanded="true">';
  $content .= $language_selected;
  $content .= '<span class="caret"></span></button>';
  $content .= '<ul class="dropdown-menu" aria-labelledby="dropdown-language">';
  $content .= implode($items);
  $content .= '</ul>';
  $content .= '</div>';

  return $content;
}
