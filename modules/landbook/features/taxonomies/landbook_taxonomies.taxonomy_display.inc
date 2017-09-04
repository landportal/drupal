<?php
/**
 * @file
 * landbook_taxonomies.taxonomy_display.inc
 */

/**
 * Implements hook_taxonomy_display_default_displays().
 */
function landbook_taxonomies_taxonomy_display_default_displays() {
  $export = array();

  $taxonomy_display = new stdClass();
  $taxonomy_display->api_version = 1;
  $taxonomy_display->machine_name = 'datasets';
  $taxonomy_display->term_display_plugin = 'TaxonomyDisplayTermDisplayHandlerCore';
  $taxonomy_display->term_display_options = '';
  $taxonomy_display->associated_display_plugin = 'TaxonomyDisplayAssociatedDisplayHandlerHidden';
  $taxonomy_display->associated_display_options = '';
  $taxonomy_display->add_feed = TRUE;
  $taxonomy_display->breadcrumb_display_plugin = 'TaxonomyDisplayBreadcrumbDisplayHandlerCore';
  $taxonomy_display->breadcrumb_display_options = '';
  $export['datasets'] = $taxonomy_display;

  return $export;
}
