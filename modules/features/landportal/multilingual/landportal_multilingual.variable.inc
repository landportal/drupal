<?php
/**
 * @file
 * landportal_multilingual.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function landportal_multilingual_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['language']['en'] = array(
  'site_frontpage' => 'node/10064',
  'site_name' => 'Land Portal',
  'site_slogan' => '',
);
  $realm_variables['language']['es'] = array(
  'site_frontpage' => 'node/10071',
  'site_name' => 'Land Portal',
  'site_slogan' => '',
);
  $realm_variables['language']['fr'] = array(
  'site_frontpage' => 'node/10070',
  'site_name' => 'Land Portal',
  'site_slogan' => '',
);
  $realm_variables['language']['pt'] = array(
  'site_frontpage' => 'node/28444',
  'site_name' => 'Land Portal',
  'site_slogan' => '',
);

return $realm_variables;
}
