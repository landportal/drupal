<?php

/**
 * Implements hook_views_plugins().
 */
function landportal_views_views_plugins() {
  $plugins = array(
    'module' => 'landportal_views',
    'row' => array(
      'landportal_views_wrap' => array(
        'title' => t('LP Wrapper'),
        'help' => t('Displays the CT wrapped.'),
        'handler' => 'landportal_views_plugin_row_fields',
        'path' => drupal_get_path('module', 'landportal_views'),
        'base' => array('node', 'taxonomy_term_data'),
        'theme' => 'landportal_views_wrap',
        //'theme path' => drupal_get_path('module', 'views') . '/theme',
        //'theme file' => 'landportal_views.views-view.inc',
        /* 'uses fields' => TRUE, */
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
  return $plugins;
}
