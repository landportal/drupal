<?php
/**
 * @file
 * landportal_taxonomy.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function landportal_taxonomy_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in debate_status'.
  $permissions['delete terms in debate_status'] = array(
    'name' => 'delete terms in debate_status',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in landvoc_concepts'.
  $permissions['delete terms in landvoc_concepts'] = array(
    'name' => 'delete terms in landvoc_concepts',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in organization_relation'.
  $permissions['delete terms in organization_relation'] = array(
    'name' => 'delete terms in organization_relation',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in organization_types'.
  $permissions['delete terms in organization_types'] = array(
    'name' => 'delete terms in organization_types',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in overarching_categories'.
  $permissions['delete terms in overarching_categories'] = array(
    'name' => 'delete terms in overarching_categories',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in themes'.
  $permissions['delete terms in themes'] = array(
    'name' => 'delete terms in themes',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in debate_status'.
  $permissions['edit terms in debate_status'] = array(
    'name' => 'edit terms in debate_status',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in landvoc_concepts'.
  $permissions['edit terms in landvoc_concepts'] = array(
    'name' => 'edit terms in landvoc_concepts',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in organization_relation'.
  $permissions['edit terms in organization_relation'] = array(
    'name' => 'edit terms in organization_relation',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in organization_types'.
  $permissions['edit terms in organization_types'] = array(
    'name' => 'edit terms in organization_types',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in overarching_categories'.
  $permissions['edit terms in overarching_categories'] = array(
    'name' => 'edit terms in overarching_categories',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in themes'.
  $permissions['edit terms in themes'] = array(
    'name' => 'edit terms in themes',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'merge debate_status terms'.
  $permissions['merge debate_status terms'] = array(
    'name' => 'merge debate_status terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge landvoc_concepts terms'.
  $permissions['merge landvoc_concepts terms'] = array(
    'name' => 'merge landvoc_concepts terms',
    'roles' => array(
      'landportal' => 'landportal',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge organization_relation terms'.
  $permissions['merge organization_relation terms'] = array(
    'name' => 'merge organization_relation terms',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge organization_types terms'.
  $permissions['merge organization_types terms'] = array(
    'name' => 'merge organization_types terms',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge overarching_categories terms'.
  $permissions['merge overarching_categories terms'] = array(
    'name' => 'merge overarching_categories terms',
    'roles' => array(),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge terms'.
  $permissions['merge terms'] = array(
    'name' => 'merge terms',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal' => 'landportal',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge themes terms'.
  $permissions['merge themes terms'] = array(
    'name' => 'merge themes terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'term_merge',
  );

  return $permissions;
}
