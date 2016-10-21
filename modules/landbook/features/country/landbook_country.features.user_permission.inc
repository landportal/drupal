<?php
/**
 * @file
 * landbook_country.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function landbook_country_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create landbook_country content'.
  $permissions['create landbook_country content'] = array(
    'name' => 'create landbook_country content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any landbook_country content'.
  $permissions['delete any landbook_country content'] = array(
    'name' => 'delete any landbook_country content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own landbook_country content'.
  $permissions['delete own landbook_country content'] = array(
    'name' => 'delete own landbook_country content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any landbook_country content'.
  $permissions['edit any landbook_country content'] = array(
    'name' => 'edit any landbook_country content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own landbook_country content'.
  $permissions['edit own landbook_country content'] = array(
    'name' => 'edit own landbook_country content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
