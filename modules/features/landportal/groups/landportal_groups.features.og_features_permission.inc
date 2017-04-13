<?php
/**
 * @file
 * landportal_groups.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function landportal_groups_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:partners:access all webform results'
  $permissions['node:partners:access all webform results'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:partners:access own webform submissions'
  $permissions['node:partners:access own webform submissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:partners:add user'
  $permissions['node:partners:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:partners:administer group'
  $permissions['node:partners:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:partners:approve and deny subscription'
  $permissions['node:partners:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:partners:create partners_page content'
  $permissions['node:partners:create partners_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:partners:create webform content'
  $permissions['node:partners:create webform content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:partners:delete all webform submissions'
  $permissions['node:partners:delete all webform submissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:partners:delete any partners_page content'
  $permissions['node:partners:delete any partners_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:partners:delete any webform content'
  $permissions['node:partners:delete any webform content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:partners:delete own partners_page content'
  $permissions['node:partners:delete own partners_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:partners:delete own webform content'
  $permissions['node:partners:delete own webform content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:partners:delete own webform submissions'
  $permissions['node:partners:delete own webform submissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:partners:edit all webform submissions'
  $permissions['node:partners:edit all webform submissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:partners:edit own webform submissions'
  $permissions['node:partners:edit own webform submissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:partners:manage members'
  $permissions['node:partners:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:partners:manage permissions'
  $permissions['node:partners:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:partners:manage roles'
  $permissions['node:partners:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:partners:subscribe'
  $permissions['node:partners:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:partners:subscribe without approval'
  $permissions['node:partners:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:partners:unsubscribe'
  $permissions['node:partners:unsubscribe'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:partners:update any partners_page content'
  $permissions['node:partners:update any partners_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:partners:update any webform content'
  $permissions['node:partners:update any webform content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:partners:update group'
  $permissions['node:partners:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:partners:update own partners_page content'
  $permissions['node:partners:update own partners_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:partners:update own webform content'
  $permissions['node:partners:update own webform content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
