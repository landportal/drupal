<?php
/**
 * @file
 * landcommunity.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function landcommunity_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'comment',
  );

  return $permissions;
}
