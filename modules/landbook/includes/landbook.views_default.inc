<?php
/**
 * @file
 * landbook.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function landbook_views_default_views() {
    $export = array();
    $views = array(
        'landbook_countries',
        'landbook_countries_related',
        'landbook_catalog',
        'landbook_indicators',
        'organizations_overview'
    );
    foreach ($views as $view_name) {
        include drupal_get_path('module', 'landbook').'/views/'.$view_name . '.inc';
        $export[$view->name] = $view;

    }
    return $export;
}
