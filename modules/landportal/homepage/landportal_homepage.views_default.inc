<?php
/**
 * Add views to Drupal
 */

function landportal_homepage_views_default_views() {
    $export = array();
    $views = array(
        'front_page_promoted',
        'front_page_teasers',
    );
    foreach ($views as $view_name) {
        include 'views/'.$view_name . '.inc';
        $export[$view->name] = $view;

    }
    return $export;
}
