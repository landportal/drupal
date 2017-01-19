<?php
/**
 * @file
 * landportal_base.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function landportal_base_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_fields_extra_list';
  $strongarm->value = 'node|event|locations
node|organization|locations';
  $export['ds_extras_fields_extra_list'] = $strongarm;

  return $export;
}
