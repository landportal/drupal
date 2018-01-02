<?php
/**
 * @file
 * landportal_related.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function landportal_related_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer cer settings'.
  $permissions['administer cer settings'] = array(
    'name' => 'administer cer settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'cer',
  );

  return $permissions;
}
