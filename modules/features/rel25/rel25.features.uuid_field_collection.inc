<?php
/**
 * @file
 * rel25.features.uuid_field_collection.inc
 */

/**
 * Implements hook_uuid_features_default_field_collections().
 */
function rel25_uuid_features_default_field_collections() {
  $field_collections = array();

  $field_collections[] = array(
    'field_name' => 'field_milestone',
    'default_revision' => 1,
    'archived' => 0,
    'uuid' => 'b85bb2e1-8757-4550-b8aa-9ec0010411b7',
    'field_description' => array(),
    'title_field' => array(),
    'field_date' => array(
      'und' => array(
        0 => array(
          'value' => '2017-09-06 00:00:00',
          'value2' => '2017-09-06 00:00:00',
          'timezone' => 'Europe/Berlin',
          'timezone_db' => 'Europe/Berlin',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'rdf_mapping' => array(),
  );
  $field_collections[] = array(
    'field_name' => 'field_milestone',
    'default_revision' => 1,
    'archived' => 0,
    'uuid' => 'be57a255-b64d-43c8-ae4f-c9504ea2e084',
    'field_description' => array(),
    'title_field' => array(),
    'field_date' => array(
      'und' => array(
        0 => array(
          'value' => '2017-11-15 00:00:00',
          'value2' => '2017-11-15 00:00:00',
          'timezone' => 'Europe/Rome',
          'timezone_db' => 'Europe/Rome',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'rdf_mapping' => array(),
  );
  return $field_collections;
}
