<?php
/**
 * @file
 * landbook_taxonomies.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function landbook_taxonomies_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Somewhat insecure',
    'description' => '<p>Those who said it is possible that they could lose the right to live in their homes against their will in the next five years, but that it is not probable (i.e., they said “no” to the second question), or who say it is possible but are unsure whether or not it is probable (i.e., they said “don’t know” or did not respond to the second question).</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '02f84584-8827-4a3b-ae82-6bb8df57df8f',
    'hweight' => 2,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'observations',
    'field_obstype' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Somewhat insecure',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-observations-eid-8375-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Secure',
    'description' => '<p>Those who simply answer “no” to the first question, indicating they do not believe it is possible they could lose the right to live in their home against their will in the next five years. These respondents were not asked the second question above. Those who said they don’t know or did not answer this question were removed from the results, while those who said it is possible moved on to question 2.</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '2d5d0c26-2e2c-402f-8c99-7d2dab943f9c',
    'hweight' => 1,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'observations',
    'field_obstype' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Secure',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-observations-eid-8374-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Insecure',
    'description' => '<p>Those who said it is both possible and probable that they will lose the right to live in their homes in the next five years.</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e2fe2982-d6b8-406c-8546-2c8078e9998e',
    'hweight' => 0,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'observations',
    'field_obstype' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Insecure',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-observations-eid-8376-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
