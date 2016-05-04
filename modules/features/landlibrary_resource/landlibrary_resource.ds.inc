<?php
/**
 * @file
 * landlibrary_resource.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function landlibrary_resource_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|landlibrary_resource|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'landlibrary_resource';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '22',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|landlibrary_resource|default'] = $ds_fieldsetting;

  return $export;
}
