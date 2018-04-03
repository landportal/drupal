<?php
/**
 * @file
 * landportal_geo.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function landportal_geo_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete terms in regions'.
  $permissions['delete terms in regions'] = array(
    'name' => 'delete terms in regions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in regions'.
  $permissions['edit terms in regions'] = array(
    'name' => 'edit terms in regions',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'merge regions terms'.
  $permissions['merge regions terms'] = array(
    'name' => 'merge regions terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'term_merge',
  );

  return $permissions;
}
