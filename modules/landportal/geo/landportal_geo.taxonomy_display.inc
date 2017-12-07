<?php
/**
 * @file
 * landportal_geo.taxonomy_display.inc
 */

/**
 * Implements hook_taxonomy_display_default_displays().
 */
function landportal_geo_taxonomy_display_default_displays() {
  $export = array();

  $taxonomy_display = new stdClass();
  $taxonomy_display->api_version = 1;
  $taxonomy_display->machine_name = 'regions';
  $taxonomy_display->term_display_plugin = 'TaxonomyDisplayTermDisplayHandlerCore';
  $taxonomy_display->term_display_options = '';
  $taxonomy_display->associated_display_plugin = 'TaxonomyDisplayAssociatedDisplayHandlerViews';
  $taxonomy_display->associated_display_options = array(
    'view' => 'country_narrative',
    'display' => 'last',
  );
  $taxonomy_display->add_feed = TRUE;
  $taxonomy_display->breadcrumb_display_plugin = 'TaxonomyDisplayBreadcrumbDisplayHandlerCore';
  $taxonomy_display->breadcrumb_display_options = '';
  $export['regions'] = $taxonomy_display;

  return $export;
}
