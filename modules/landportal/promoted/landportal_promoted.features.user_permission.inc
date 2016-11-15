<?php
/**
 * @file
 * landportal_promoted.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function landportal_promoted_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit_custom_pub_promoted_to_country_page'.
  $permissions['edit_custom_pub_promoted_to_country_page'] = array(
    'name' => 'edit_custom_pub_promoted_to_country_page',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'custom_pub',
  );

  // Exported permission: 'edit_custom_pub_promoted_to_thematic_page'.
  $permissions['edit_custom_pub_promoted_to_thematic_page'] = array(
    'name' => 'edit_custom_pub_promoted_to_thematic_page',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'custom_pub',
  );

  return $permissions;
}
