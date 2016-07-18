<?php


/**
 * Alter theme registry to automatically 'get' this module template files
 * See: https://www.drupal.org/node/715160
 */
function landbook_theme_registry_alter(&$theme_registry) {
    $tpl_path = drupal_get_path('module', 'landbook') . '/templates';
    $tpl_files = drupal_find_theme_templates($theme_registry, '.tpl.php', $tpl_path);
    
    foreach ($tpl_files as $key => $file) {
        if (!isset($theme_registry[$key]['theme path']) || !preg_match('#/themes/#', $theme_registry[$key]['theme path'])) {
            $theme_registry[$key]['theme path'] = $tpl_path;
            $theme_registry[$key] = array_merge($theme_registry[$key], $file);
            $theme_registry[$key]['type'] = 'module';
        }
    }
}

/**
 * Declare specific theme hook functions for LB elements
 */
function landbook_theme($existing, $type, $theme, $path) {
    $struct = array(
        'variables'         => array('data' => NULL, 'title' => 'landbook page'),
        'path'              => drupal_get_path('module', 'landbook') . '/templates',
    );
    return array(
        //'landbook-country-indicators-table' => $struct + array('template' => 'block--landbook--country-indicators-table'),
        'regions-selectors'         => $struct + array('template' => 'regions--selectors'),
        'country-sidebar-first'     => $struct + array('template' => 'block--country-sidebar-first'),
        'country-sidebar-second'    => $struct + array('template' => 'block--country-sidebar-second'),
        'indicator-sidebar-second'  => $struct + array('template' => 'block--indicator-sidebar-second'),

        'regions'           => $struct + array('template' => 'regions'),
        'catalog'           => $struct + array('template' => 'catalog'),
        'countries'         => $struct + array('template' => 'countries'),
        'country'           => $struct + array('template' => 'country', 'country' => NULL),
        'details'           => $struct + array('template' => 'details', 'country' => NULL),
        'datasource'        => $struct + array('template' => 'datasource', 'datasource' => NULL),
        'datasources'       => $struct + array('template' => 'datasources'),
        'indicator'         => $struct + array('template' => 'indicator', 'indicator' => NULL),
        'indicators'        => $struct + array('template' => 'indicators'),
        'indicators-table'  => $struct + array('template' => 'indicators-table'),
        'reuse'             => $struct + array('template' => 'reuse'),
        'widgets'           => $struct + array('template' => 'widgets'),
        'compare-contries'  => $struct + array('template' => 'compare-contries'),
        'infographics'  => $struct + array('template' => 'infographics'),
        'mapping'  => $struct + array('template' => 'mapping'),
    );
}
