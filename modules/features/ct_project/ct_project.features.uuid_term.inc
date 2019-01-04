<?php
/**
 * @file
 * ct_project.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function ct_project_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Euro',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5aaa6d4a-8541-4c40-9973-9b6a318fb87f',
    'hweight' => 0,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'currency',
    'field_iso_4217_code' => array(
      'und' => array(
        0 => array(
          'value' => 'EUR',
          'format' => NULL,
        ),
      ),
    ),
    'field_currency_symbol' => array(
      'und' => array(
        0 => array(
          'value' => '€',
          'format' => NULL,
        ),
      ),
    ),
    'field_eu_currency_nal_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://publications.europa.eu/resource/authority/currency/EUR',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
    'status' => 1,
  );
  $terms[] = array(
    'name' => 'United States dollar',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '7d62fb3a-faa1-4e71-a994-0efb8c0c2d5a',
    'hweight' => 2,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'currency',
    'field_iso_4217_code' => array(
      'und' => array(
        0 => array(
          'value' => 'USD',
          'format' => NULL,
        ),
      ),
    ),
    'field_currency_symbol' => array(
      'und' => array(
        0 => array(
          'value' => '$',
          'format' => NULL,
        ),
      ),
    ),
    'field_eu_currency_nal_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://publications.europa.eu/resource/authority/currency/USD',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
    'status' => 1,
  );
  $terms[] = array(
    'name' => 'Pound sterling',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '93bec4ab-4b2b-492b-b519-4e3594f3966b',
    'hweight' => 1,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'currency',
    'field_iso_4217_code' => array(
      'und' => array(
        0 => array(
          'value' => 'GBP',
          'format' => NULL,
        ),
      ),
    ),
    'field_currency_symbol' => array(
      'und' => array(
        0 => array(
          'value' => '£',
          'format' => NULL,
        ),
      ),
    ),
    'field_eu_currency_nal_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://publications.europa.eu/resource/authority/currency/GBP',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
    'status' => 1,
  );
  return $terms;
}
