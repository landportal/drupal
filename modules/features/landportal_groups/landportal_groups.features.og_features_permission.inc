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

  // Exported og permission: 'node:partners:create partners_page content'
  $permissions['node:partners:create partners_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:partners:update own partners_page content'
  $permissions['node:partners:update own partners_page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
