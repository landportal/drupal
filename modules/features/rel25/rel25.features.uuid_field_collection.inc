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
    'uuid' => '3d78da3a-a0ea-4ad9-97d2-8e9f9d092f51',
    'field_description' => array(),
    'title_field' => array(),
    'field_date' => array(
      'und' => array(
        0 => array(
          'value' => '2017-11-20 00:00:00',
          'value2' => '2017-11-20 00:00:00',
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
    'uuid' => '418e551a-ca00-4bfc-a297-4ea379183885',
    'field_description' => array(),
    'title_field' => array(),
    'field_date' => array(
      'und' => array(
        0 => array(
          'value' => '2017-11-10 00:00:00',
          'value2' => '2017-11-10 00:00:00',
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
    'uuid' => '8fdbe146-ec78-498c-95ae-8c2a81428aaa',
    'field_description' => array(),
    'title_field' => array(),
    'field_date' => array(
      'und' => array(
        0 => array(
          'value' => '2017-11-21 00:00:00',
          'value2' => '2017-11-21 00:00:00',
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
  return $field_collections;
}
