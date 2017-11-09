<?php
/**
 * @file
 * landportal_search_mlike.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function landportal_search_mlike_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:block_cache:apachesolr@mlike_search';
  $strongarm->value = -1;
  $export['facetapi:block_cache:apachesolr@mlike_search'] = $strongarm;

  return $export;
}
