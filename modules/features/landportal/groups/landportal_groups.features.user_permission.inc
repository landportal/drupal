<?php
/**
 * @file
 * landportal_groups.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function landportal_groups_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create partners content'.
  $permissions['create partners content'] = array(
    'name' => 'create partners content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create partners_page content'.
  $permissions['create partners_page content'] = array(
    'name' => 'create partners_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'landportal' => 'landportal',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any partners content'.
  $permissions['delete any partners content'] = array(
    'name' => 'delete any partners content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any partners_page content'.
  $permissions['delete any partners_page content'] = array(
    'name' => 'delete any partners_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own partners content'.
  $permissions['delete own partners content'] = array(
    'name' => 'delete own partners content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own partners_page content'.
  $permissions['delete own partners_page content'] = array(
    'name' => 'delete own partners_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any partners content'.
  $permissions['edit any partners content'] = array(
    'name' => 'edit any partners content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any partners_page content'.
  $permissions['edit any partners_page content'] = array(
    'name' => 'edit any partners_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own partners content'.
  $permissions['edit own partners content'] = array(
    'name' => 'edit own partners content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own partners_page content'.
  $permissions['edit own partners_page content'] = array(
    'name' => 'edit own partners_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'landportal' => 'landportal',
    ),
    'module' => 'node',
  );

  return $permissions;
}
