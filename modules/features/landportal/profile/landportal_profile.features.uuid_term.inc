<?php
/**
 * @file
 * landportal_profile.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function landportal_profile_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Land governance practitioner',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '02534029-bb31-4187-bf1c-aac64ef6eadf',
    'hweight' => 3,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'occupation',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Information/data provider',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '2a43dd87-dac5-420b-83de-2dd5dafebda7',
    'hweight' => 1,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'occupation',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Journalist',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '933636f5-fe64-4a8c-8074-344153f3f08a',
    'hweight' => 2,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'occupation',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Academic / Researcher',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '95d058de-8f34-43e9-b7bb-6d16c35eebf6',
    'hweight' => 0,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'occupation',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Policy maker / Governmental organization',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b6ce32df-9e96-409c-a161-74f04e829211',
    'hweight' => 5,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'occupation',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'fff342aa-c849-48cc-886a-9e89e6c8bf81',
    'hweight' => 4,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'occupation',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
