<?php
/**
 * Override Drupal default views
 */

/* function landportal_taxonomy_views_default_views_alter(&$views) { */
/*     $path = drupal_get_path('module', 'landportal_taxonomy') . '/views'; */

/*     $views_override = array( */
/*         'domains', 'themes' */
/*     ); */
/*     foreach ($views_override as $view_name) { */
/*         /\** */
/*          * View module export code, this file MUST declare a '$view' object */
/*          * (as per Drupal default 'view > export' functionality) */
/*          *\/ */
/*         include $path.'/'.$view_name . '.inc'; */
/*         $views[$view_name] = $view; */
/*     } */
/* } */
