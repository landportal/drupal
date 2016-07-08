<?php
/**
 * @file
 * ct_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ct_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}