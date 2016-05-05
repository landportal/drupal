<?php
/**
 * @file
 * landportal_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function landportal_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'webform',
  );

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

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'media',
  );

  // Exported permission: 'access own authorizations'.
  $permissions['access own authorizations'] = array(
    'name' => 'access own authorizations',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'access own consumers'.
  $permissions['access own consumers'] = array(
    'name' => 'access own consumers',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access resource comment'.
  $permissions['access resource comment'] = array(
    'name' => 'access resource comment',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource file'.
  $permissions['access resource file'] = array(
    'name' => 'access resource file',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource i18n_translation'.
  $permissions['access resource i18n_translation'] = array(
    'name' => 'access resource i18n_translation',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource node'.
  $permissions['access resource node'] = array(
    'name' => 'access resource node',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource profile2'.
  $permissions['access resource profile2'] = array(
    'name' => 'access resource profile2',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource profile2_type'.
  $permissions['access resource profile2_type'] = array(
    'name' => 'access resource profile2_type',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource rules_config'.
  $permissions['access resource rules_config'] = array(
    'name' => 'access resource rules_config',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource search_api_index'.
  $permissions['access resource search_api_index'] = array(
    'name' => 'access resource search_api_index',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource search_api_server'.
  $permissions['access resource search_api_server'] = array(
    'name' => 'access resource search_api_server',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource taxonomy_term'.
  $permissions['access resource taxonomy_term'] = array(
    'name' => 'access resource taxonomy_term',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource taxonomy_vocabulary'.
  $permissions['access resource taxonomy_vocabulary'] = array(
    'name' => 'access resource taxonomy_vocabulary',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource user'.
  $permissions['access resource user'] = array(
    'name' => 'access resource user',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'admin_classes'.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'administer CAPTCHA settings'.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'administer RDF field mappings'.
  $permissions['administer RDF field mappings'] = array(
    'name' => 'administer RDF field mappings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rdfui',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer consumers'.
  $permissions['administer consumers'] = array(
    'name' => 'administer consumers',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer elysia_cron'.
  $permissions['administer elysia_cron'] = array(
    'name' => 'administer elysia_cron',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'elysia_cron',
  );

  // Exported permission: 'administer entity translation'.
  $permissions['administer entity translation'] = array(
    'name' => 'administer entity translation',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer honeypot'.
  $permissions['administer honeypot'] = array(
    'name' => 'administer honeypot',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer language_switcher'.
  $permissions['administer language_switcher'] = array(
    'name' => 'administer language_switcher',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'language_switcher',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer masquerade'.
  $permissions['administer masquerade'] = array(
    'name' => 'administer masquerade',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer media wysiwyg view mode'.
  $permissions['administer media wysiwyg view mode'] = array(
    'name' => 'administer media wysiwyg view mode',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'media_wysiwyg_view_mode',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer oauth'.
  $permissions['administer oauth'] = array(
    'name' => 'administer oauth',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer profile types'.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer profiles'.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer rdf'.
  $permissions['administer rdf'] = array(
    'name' => 'administer rdf',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rdfx',
  );

  // Exported permission: 'administer recaptcha'.
  $permissions['administer recaptcha'] = array(
    'name' => 'administer recaptcha',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'recaptcha',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api',
  );

  // Exported permission: 'administer services'.
  $permissions['administer services'] = array(
    'name' => 'administer services',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'services',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer unit tests'.
  $permissions['administer unit tests'] = array(
    'name' => 'administer unit tests',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simpletest',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer user locations'.
  $permissions['administer user locations'] = array(
    'name' => 'administer user locations',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'location_user',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass honeypot protection'.
  $permissions['bypass honeypot protection'] = array(
    'name' => 'bypass honeypot protection',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear topic_taxonomy_land_terms_importer feeds'.
  $permissions['clear topic_taxonomy_land_terms_importer feeds'] = array(
    'name' => 'clear topic_taxonomy_land_terms_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'create blog_post content'.
  $permissions['create blog_post content'] = array(
    'name' => 'create blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create debate content'.
  $permissions['create debate content'] = array(
    'name' => 'create debate content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create landlibrary_resource content'.
  $permissions['create landlibrary_resource content'] = array(
    'name' => 'create landlibrary_resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

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

  // Exported permission: 'create organization content'.
  $permissions['create organization content'] = array(
    'name' => 'create organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create person content'.
  $permissions['create person content'] = array(
    'name' => 'create person content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any blog_post content'.
  $permissions['delete any blog_post content'] = array(
    'name' => 'delete any blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any debate content'.
  $permissions['delete any debate content'] = array(
    'name' => 'delete any debate content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any landlibrary_resource content'.
  $permissions['delete any landlibrary_resource content'] = array(
    'name' => 'delete any landlibrary_resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
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

  // Exported permission: 'delete any organization content'.
  $permissions['delete any organization content'] = array(
    'name' => 'delete any organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own blog_post content'.
  $permissions['delete own blog_post content'] = array(
    'name' => 'delete own blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own debate content'.
  $permissions['delete own debate content'] = array(
    'name' => 'delete own debate content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own landlibrary_resource content'.
  $permissions['delete own landlibrary_resource content'] = array(
    'name' => 'delete own landlibrary_resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
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

  // Exported permission: 'delete own organization content'.
  $permissions['delete own organization content'] = array(
    'name' => 'delete own organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in continents'.
  $permissions['delete terms in continents'] = array(
    'name' => 'delete terms in continents',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in countries'.
  $permissions['delete terms in countries'] = array(
    'name' => 'delete terms in countries',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in debate_status'.
  $permissions['delete terms in debate_status'] = array(
    'name' => 'delete terms in debate_status',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in format'.
  $permissions['delete terms in format'] = array(
    'name' => 'delete terms in format',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in interests'.
  $permissions['delete terms in interests'] = array(
    'name' => 'delete terms in interests',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in keywords'.
  $permissions['delete terms in keywords'] = array(
    'name' => 'delete terms in keywords',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in landlibrary_resource_type'.
  $permissions['delete terms in landlibrary_resource_type'] = array(
    'name' => 'delete terms in landlibrary_resource_type',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in landportal_topics'.
  $permissions['delete terms in landportal_topics'] = array(
    'name' => 'delete terms in landportal_topics',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in languages'.
  $permissions['delete terms in languages'] = array(
    'name' => 'delete terms in languages',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in licences'.
  $permissions['delete terms in licences'] = array(
    'name' => 'delete terms in licences',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in organization_relation'.
  $permissions['delete terms in organization_relation'] = array(
    'name' => 'delete terms in organization_relation',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in organization_types'.
  $permissions['delete terms in organization_types'] = array(
    'name' => 'delete terms in organization_types',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in regions'.
  $permissions['delete terms in regions'] = array(
    'name' => 'delete terms in regions',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in terms_of_use'.
  $permissions['delete terms in terms_of_use'] = array(
    'name' => 'delete terms in terms_of_use',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any blog_post content'.
  $permissions['edit any blog_post content'] = array(
    'name' => 'edit any blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any debate content'.
  $permissions['edit any debate content'] = array(
    'name' => 'edit any debate content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any landlibrary_resource content'.
  $permissions['edit any landlibrary_resource content'] = array(
    'name' => 'edit any landlibrary_resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any main profile'.
  $permissions['edit any main profile'] = array(
    'name' => 'edit any main profile',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'profile2',
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

  // Exported permission: 'edit any organization content'.
  $permissions['edit any organization content'] = array(
    'name' => 'edit any organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any work_profile profile'.
  $permissions['edit any work_profile profile'] = array(
    'name' => 'edit any work_profile profile',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own blog_post content'.
  $permissions['edit own blog_post content'] = array(
    'name' => 'edit own blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own debate content'.
  $permissions['edit own debate content'] = array(
    'name' => 'edit own debate content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own landlibrary_resource content'.
  $permissions['edit own landlibrary_resource content'] = array(
    'name' => 'edit own landlibrary_resource content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own main profile'.
  $permissions['edit own main profile'] = array(
    'name' => 'edit own main profile',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'profile2',
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

  // Exported permission: 'edit own organization content'.
  $permissions['edit own organization content'] = array(
    'name' => 'edit own organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit own work_profile profile'.
  $permissions['edit own work_profile profile'] = array(
    'name' => 'edit own work_profile profile',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit terms in continents'.
  $permissions['edit terms in continents'] = array(
    'name' => 'edit terms in continents',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in countries'.
  $permissions['edit terms in countries'] = array(
    'name' => 'edit terms in countries',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in debate_status'.
  $permissions['edit terms in debate_status'] = array(
    'name' => 'edit terms in debate_status',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in format'.
  $permissions['edit terms in format'] = array(
    'name' => 'edit terms in format',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in interests'.
  $permissions['edit terms in interests'] = array(
    'name' => 'edit terms in interests',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in keywords'.
  $permissions['edit terms in keywords'] = array(
    'name' => 'edit terms in keywords',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in landlibrary_resource_type'.
  $permissions['edit terms in landlibrary_resource_type'] = array(
    'name' => 'edit terms in landlibrary_resource_type',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in landportal_topics'.
  $permissions['edit terms in landportal_topics'] = array(
    'name' => 'edit terms in landportal_topics',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in languages'.
  $permissions['edit terms in languages'] = array(
    'name' => 'edit terms in languages',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in licences'.
  $permissions['edit terms in licences'] = array(
    'name' => 'edit terms in licences',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in organization_relation'.
  $permissions['edit terms in organization_relation'] = array(
    'name' => 'edit terms in organization_relation',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in organization_types'.
  $permissions['edit terms in organization_types'] = array(
    'name' => 'edit terms in organization_types',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in regions'.
  $permissions['edit terms in regions'] = array(
    'name' => 'edit terms in regions',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in terms_of_use'.
  $permissions['edit terms in terms_of_use'] = array(
    'name' => 'edit terms in terms_of_use',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit webform components'.
  $permissions['edit webform components'] = array(
    'name' => 'edit webform components',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'entityconnect add button'.
  $permissions['entityconnect add button'] = array(
    'name' => 'entityconnect add button',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'entityconnect',
  );

  // Exported permission: 'entityconnect edit button'.
  $permissions['entityconnect edit button'] = array(
    'name' => 'entityconnect edit button',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'entityconnect',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'get a system variable'.
  $permissions['get a system variable'] = array(
    'name' => 'get a system variable',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'services',
  );

  // Exported permission: 'get any binary files'.
  $permissions['get any binary files'] = array(
    'name' => 'get any binary files',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'services',
  );

  // Exported permission: 'get own binary files'.
  $permissions['get own binary files'] = array(
    'name' => 'get own binary files',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'services',
  );

  // Exported permission: 'import topic_taxonomy_land_terms_importer feeds'.
  $permissions['import topic_taxonomy_land_terms_importer feeds'] = array(
    'name' => 'import topic_taxonomy_land_terms_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'masquerade as admin'.
  $permissions['masquerade as admin'] = array(
    'name' => 'masquerade as admin',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'masquerade as any user'.
  $permissions['masquerade as any user'] = array(
    'name' => 'masquerade as any user',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'masquerade as user'.
  $permissions['masquerade as user'] = array(
    'name' => 'masquerade as user',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: 'merge continents terms'.
  $permissions['merge continents terms'] = array(
    'name' => 'merge continents terms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge countries terms'.
  $permissions['merge countries terms'] = array(
    'name' => 'merge countries terms',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge debate_status terms'.
  $permissions['merge debate_status terms'] = array(
    'name' => 'merge debate_status terms',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge format terms'.
  $permissions['merge format terms'] = array(
    'name' => 'merge format terms',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge interests terms'.
  $permissions['merge interests terms'] = array(
    'name' => 'merge interests terms',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge keywords terms'.
  $permissions['merge keywords terms'] = array(
    'name' => 'merge keywords terms',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge landlibrary_resource_type terms'.
  $permissions['merge landlibrary_resource_type terms'] = array(
    'name' => 'merge landlibrary_resource_type terms',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge landportal_topics terms'.
  $permissions['merge landportal_topics terms'] = array(
    'name' => 'merge landportal_topics terms',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge languages terms'.
  $permissions['merge languages terms'] = array(
    'name' => 'merge languages terms',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge licences terms'.
  $permissions['merge licences terms'] = array(
    'name' => 'merge licences terms',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge organization_relation terms'.
  $permissions['merge organization_relation terms'] = array(
    'name' => 'merge organization_relation terms',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge organization_types terms'.
  $permissions['merge organization_types terms'] = array(
    'name' => 'merge organization_types terms',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge regions terms'.
  $permissions['merge regions terms'] = array(
    'name' => 'merge regions terms',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge tags terms'.
  $permissions['merge tags terms'] = array(
    'name' => 'merge tags terms',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge terms'.
  $permissions['merge terms'] = array(
    'name' => 'merge terms',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'merge terms_of_use terms'.
  $permissions['merge terms_of_use terms'] = array(
    'name' => 'merge terms_of_use terms',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'term_merge',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'oauth authorize any consumers'.
  $permissions['oauth authorize any consumers'] = array(
    'name' => 'oauth authorize any consumers',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'oauth register any consumers'.
  $permissions['oauth register any consumers'] = array(
    'name' => 'oauth register any consumers',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'perform unlimited index queries'.
  $permissions['perform unlimited index queries'] = array(
    'name' => 'perform unlimited index queries',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'services',
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

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'save file information'.
  $permissions['save file information'] = array(
    'name' => 'save file information',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'services',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'set a system variable'.
  $permissions['set a system variable'] = array(
    'name' => 'set a system variable',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'services',
  );

  // Exported permission: 'set own user location'.
  $permissions['set own user location'] = array(
    'name' => 'set own user location',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'location_user',
  );

  // Exported permission: 'show format selection for comment'.
  $permissions['show format selection for comment'] = array(
    'name' => 'show format selection for comment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for file'.
  $permissions['show format selection for file'] = array(
    'name' => 'show format selection for file',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for node'.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for profile2'.
  $permissions['show format selection for profile2'] = array(
    'name' => 'show format selection for profile2',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for rules_config'.
  $permissions['show format selection for rules_config'] = array(
    'name' => 'show format selection for rules_config',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for taxonomy_term'.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for user'.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format tips'.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show more format tips link'.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'skip CAPTCHA'.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'submit latitude/longitude'.
  $permissions['submit latitude/longitude'] = array(
    'name' => 'submit latitude/longitude',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'location',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'tamper topic_taxonomy_land_terms_importer'.
  $permissions['tamper topic_taxonomy_land_terms_importer'] = array(
    'name' => 'tamper topic_taxonomy_land_terms_importer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'toggle field translatability'.
  $permissions['toggle field translatability'] = array(
    'name' => 'toggle field translatability',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate any entity'.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate node entities'.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate taxonomy_term entities'.
  $permissions['translate taxonomy_term entities'] = array(
    'name' => 'translate taxonomy_term entities',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'unlock topic_taxonomy_land_terms_importer feeds'.
  $permissions['unlock topic_taxonomy_land_terms_importer feeds'] = array(
    'name' => 'unlock topic_taxonomy_land_terms_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(),
    'module' => 'ctools',
  );

  // Exported permission: 'use hybridauth'.
  $permissions['use hybridauth'] = array(
    'name' => 'use hybridauth',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'hybridauth',
  );

  // Exported permission: 'use media wysiwyg'.
  $permissions['use media wysiwyg'] = array(
    'name' => 'use media wysiwyg',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'media_wysiwyg',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view all user locations'.
  $permissions['view all user locations'] = array(
    'name' => 'view all user locations',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'location_user',
  );

  // Exported permission: 'view any main profile'.
  $permissions['view any main profile'] = array(
    'name' => 'view any main profile',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any work_profile profile'.
  $permissions['view any work_profile profile'] = array(
    'name' => 'view any work_profile profile',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view date repeats'.
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'date_repeat_field',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view location directory'.
  $permissions['view location directory'] = array(
    'name' => 'view location directory',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view node location table'.
  $permissions['view node location table'] = array(
    'name' => 'view node location table',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own main profile'.
  $permissions['view own main profile'] = array(
    'name' => 'view own main profile',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view own user location'.
  $permissions['view own user location'] = array(
    'name' => 'view own user location',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'location_user',
  );

  // Exported permission: 'view own work_profile profile'.
  $permissions['view own work_profile profile'] = array(
    'name' => 'view own work_profile profile',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'view user location table'.
  $permissions['view user location table'] = array(
    'name' => 'view user location table',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'location',
  );

  return $permissions;
}
