<?php
/**
 * @file
 * landlibrary.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function landlibrary_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_landlibrary_resource';
  $strongarm->value = 0;
  $export['comment_anonymous_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_person';
  $strongarm->value = 0;
  $export['comment_anonymous_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_landlibrary_resource';
  $strongarm->value = 1;
  $export['comment_default_mode_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_person';
  $strongarm->value = 1;
  $export['comment_default_mode_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_landlibrary_resource';
  $strongarm->value = '50';
  $export['comment_default_per_page_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_person';
  $strongarm->value = '50';
  $export['comment_default_per_page_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_landlibrary_resource';
  $strongarm->value = 1;
  $export['comment_form_location_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_person';
  $strongarm->value = 1;
  $export['comment_form_location_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_landlibrary_resource';
  $strongarm->value = '1';
  $export['comment_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_person';
  $strongarm->value = '1';
  $export['comment_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_landlibrary_resource';
  $strongarm->value = '1';
  $export['comment_preview_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_person';
  $strongarm->value = '1';
  $export['comment_preview_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_landlibrary_resource';
  $strongarm->value = 1;
  $export['comment_subject_field_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_person';
  $strongarm->value = 1;
  $export['comment_subject_field_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__landlibrary_resource';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'resource' => array(
        'custom_settings' => FALSE,
      ),
      'library_source' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '5',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'language' => array(
          'weight' => '4',
        ),
        'xmlsitemap' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__person';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'resource' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '30',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_landlibrary_resource';
  $strongarm->value = 1;
  $export['i18n_node_extended_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_landlibrary_resource';
  $strongarm->value = array();
  $export['i18n_node_options_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_landlibrary_resource';
  $strongarm->value = array();
  $export['i18n_sync_node_type_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_landlibrary_resource';
  $strongarm->value = '4';
  $export['language_content_type_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_person';
  $strongarm->value = '0';
  $export['language_content_type_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_landlibrary_resource';
  $strongarm->value = '0';
  $export['location_defaultnum_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_person';
  $strongarm->value = '1';
  $export['location_defaultnum_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_landlibrary_resource';
  $strongarm->value = '0';
  $export['location_maxnum_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_person';
  $strongarm->value = '1';
  $export['location_maxnum_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_landlibrary_resource';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '0',
      'add' => '0',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 0,
      'full' => 0,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_person';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_landlibrary_resource';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_person';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_landlibrary_resource';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_person';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_landlibrary_resource';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_person';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_landlibrary_resource';
  $strongarm->value = '1';
  $export['node_preview_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_person';
  $strongarm->value = '1';
  $export['node_preview_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_landlibrary_resource';
  $strongarm->value = 0;
  $export['node_submitted_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_person';
  $strongarm->value = 0;
  $export['node_submitted_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_landlibrary_resource_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_landlibrary_resource_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_landlibrary_resource_es_pattern';
  $strongarm->value = '';
  $export['pathauto_node_landlibrary_resource_es_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_landlibrary_resource_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_landlibrary_resource_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_landlibrary_resource_pattern';
  $strongarm->value = 'library/resources/[node:field_doc_identifier]/[node:title]';
  $export['pathauto_node_landlibrary_resource_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_landlibrary_resource_pt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_landlibrary_resource_pt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_landlibrary_resource_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_landlibrary_resource_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_person_pattern';
  $strongarm->value = '';
  $export['pathauto_node_person_pattern'] = $strongarm;

  return $export;
}
