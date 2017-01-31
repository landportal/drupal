<?php
/**
 * @file
 * landportal_display.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function landportal_display_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_fields_extra';
  $strongarm->value = 1;
  $export['ds_extras_fields_extra'] = $strongarm;

  return $export;
}
