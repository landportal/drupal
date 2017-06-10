<?php
/**
 * @file
 * landportal_partners.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function landportal_partners_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_partners';
  $strongarm->value = array(
    0 => 'default',
    1 => 'listing',
  );
  $export['ds_extras_view_modes_partners'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_partners_page';
  $strongarm->value = array(
    0 => 'default',
    1 => 'listing',
  );
  $export['ds_extras_view_modes_partners_page'] = $strongarm;

  return $export;
}
