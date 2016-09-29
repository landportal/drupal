<?php
/**
 * Override Drupal default views
 */

function landportal_taxonomy_views_default_views() {
    $export = array();
    $views = array(
        'concepts',
        'domains',
        'themes',
		'landvoc',
		'licenses',
		'languages'
    );
    foreach ($views as $view_name) {
        include 'views/'.$view_name . '.inc';
        $export[$view->name] = $view;

    }
    return $export;
}
