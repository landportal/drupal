<?php
/**
 * @file
 * ct_debate.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ct_debate_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create debate content'.
  $permissions['create debate content'] = array(
    'name' => 'create debate content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'landportal' => 'landportal',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any debate content'.
  $permissions['delete any debate content'] = array(
    'name' => 'delete any debate content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own debate content'.
  $permissions['delete own debate content'] = array(
    'name' => 'delete own debate content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any debate content'.
  $permissions['edit any debate content'] = array(
    'name' => 'edit any debate content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own debate content'.
  $permissions['edit own debate content'] = array(
    'name' => 'edit own debate content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'landportal' => 'landportal',
    ),
    'module' => 'node',
  );

  return $permissions;
}
