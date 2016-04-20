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
        'search',
        'browse',
        'promoted',
        'resource_type',
        'organizations',
        'by_providers'
    );
    foreach ($views as $view_name) {
        include 'views/'.$view_name . '.inc';
        $export[$view->name] = $view;

    }
    return $export;
}
