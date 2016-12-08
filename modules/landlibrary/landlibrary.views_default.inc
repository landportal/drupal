<?php
/**
 * @file
 * landlibrary.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function landlibrary_views_default_views() {
    $export = array();
    $views = array(
        'admin',
        'browse',
        'by_providers',
        'organizations',
        'resource_type',
    );
    foreach ($views as $view_name) {
        include 'views/'.$view_name . '.inc';
        $export[$view->name] = $view;

    }
    return $export;
}
