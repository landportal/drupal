<?php
/**
 * @file
 * landportal_taxonomy.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function landportal_taxonomy_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'codification',
    'description' => 'The process of codification id the development of a coherent legal code from an existing body of law.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '00f760d4-030c-4255-a8b7-9726d1556ab0',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_0eca1c57',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'codification',
          'format' => 'filtered_html',
          'safe_value' => 'codification',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'codificación',
          'format' => 'filtered_html',
          'safe_value' => 'codificación',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'codification',
          'format' => 'filtered_html',
          'safe_value' => 'codification',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Codification',
          'format' => 'plain_text',
          'safe_value' => 'Codification',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'The process of codification id the development of a coherent legal code from an existing body of law.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>The process of codification id the development of a coherent legal code from an existing body of law.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Codificación, es la acción de codifica y por extensión, es el resultado de esta acción. La codificación puede también designar la elaboración de un código, como resultado de la ejecución de una reforma. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Codificación, es la acción de codifica y por extensión, es el resultado de esta acción. La codificación puede también designar la elaboración de un código, como resultado de la ejecución de una reforma.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Codification, est l\' élaboration ou la rédaction d\' une règle. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Codification, est l\' élaboration ou la rédaction d\' une règle.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'The process of codification id the development of a coherent legal code from an existing body of law.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>The process of codification id the development of a coherent legal code from an existing body of law.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3693,
          'revision_id' => 3693,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1431355068,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3693,
          'revision_id' => 3693,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3693,
          'revision_id' => 3693,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3693,
          'revision_id' => 3693,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3693,
          'revision_id' => 3693,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'codification',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3693-0',
    'description_original' => 'The process of codification id the development of a coherent legal code from an existing body of law.',
  );
  $terms[] = array(
    'name' => 'open access (land)',
    'description' => 'Open access is a tenure where there is no control on access to resources: specific rights are not assigned to anyone and no-one can be excluded.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '016e5047-8f0f-4f74-ae87-ddceebab85db',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_51a39a94',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'open access (land)',
          'format' => 'filtered_html',
          'safe_value' => 'open access (land)',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'libre acceso (espacio)',
          'format' => 'filtered_html',
          'safe_value' => 'libre acceso (espacio)',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'accès libre (territoire)',
          'format' => 'filtered_html',
          'safe_value' => 'accès libre (territoire)',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'open access (land)',
          'format' => 'plain_text',
          'safe_value' => 'open access (land)',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Open access is a tenure where there is no control on access to resources: specific rights are not assigned to anyone and no-one can be excluded.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Open access is a tenure where there is no control on access to resources: specific rights are not assigned to anyone and no-one can be excluded.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Accès libre, est la faculté d\' utiliser les ressources sans pouvoir en entre empêché.   
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Accès libre, est la faculté d\' utiliser les ressources sans pouvoir en entre empêché.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Open access is a tenure where there is no control on access to resources: specific rights are not assigned to anyone and no-one can be excluded.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Open access is a tenure where there is no control on access to resources: specific rights are not assigned to anyone and no-one can be excluded.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3748,
          'revision_id' => 3748,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1456426184,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3748,
          'revision_id' => 3748,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3748,
          'revision_id' => 3748,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3748,
          'revision_id' => 3748,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3748,
          'revision_id' => 3748,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'open access (land)',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3748-0',
    'description_original' => 'Open access is a tenure where there is no control on access to resources: specific rights are not assigned to anyone and no-one can be excluded.',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'forestry',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '017c77ae-a64c-4038-b4bd-e61ce092c167',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_3055',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'forestry',
          'format' => 'filtered_html',
          'safe_value' => 'forestry',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'ciencias forestales',
          'format' => 'filtered_html',
          'safe_value' => 'ciencias forestales',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'foresterie',
          'format' => 'filtered_html',
          'safe_value' => 'foresterie',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Actividade florestal',
          'format' => 'filtered_html',
          'safe_value' => 'Actividade florestal',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Forestry',
          'format' => 'plain_text',
          'safe_value' => 'Forestry',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1256,
          'revision_id' => 1256,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355180,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1256,
          'revision_id' => 1256,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355180,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1256,
          'revision_id' => 1256,
          'language' => 'und',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355180,
          'changed' => 1461767614,
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1256,
          'revision_id' => 1256,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1460557403,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1256,
          'revision_id' => 1256,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'forestry',
    'entity_translation_handler_id' => 'taxonomy_term-eid-1256-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'land dispute',
    'description' => 'a land dispute is a disagreement over land.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '02afb854-359d-4686-9613-f0cdcd666d16',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_1ada969a',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land dispute',
          'format' => 'filtered_html',
          'safe_value' => 'land dispute',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'conflicto agrario',
          'format' => 'filtered_html',
          'safe_value' => 'conflicto agrario',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'dispute foncière',
          'format' => 'filtered_html',
          'safe_value' => 'dispute foncière',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Land dispute',
          'format' => 'plain_text',
          'safe_value' => 'Land dispute',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'a land dispute is a disagreement over land.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>a land dispute is a disagreement over land.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Conflictos agrarios, estrategias antagónicas en términos de acaparamiento del espacio o de apropiación de los recursos. 
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Conflictos agrarios, estrategias antagónicas en términos de acaparamiento del espacio o de apropiación de los recursos.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Conflits fonciers, antagonisme en termes d\' accaparement d\'espace ou d\'appropriation des ressources. 
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Conflits fonciers, antagonisme en termes d\' accaparement d\'espace ou d\'appropriation des ressources.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'a land dispute is a disagreement over land.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>a land dispute is a disagreement over land.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3726,
          'revision_id' => 3726,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1431355068,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3726,
          'revision_id' => 3726,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3726,
          'revision_id' => 3726,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3726,
          'revision_id' => 3726,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3726,
          'revision_id' => 3726,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'land dispute',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3726-0',
    'description_original' => 'a land dispute is a disagreement over land.',
  );
  $terms[] = array(
    'name' => 'common lands',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '03267af4-c264-4e0d-a04a-22ce90ef099b',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_1782',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'common lands',
          'format' => 'filtered_html',
          'safe_value' => 'common lands',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Tierras comunales',
          'format' => 'filtered_html',
          'safe_value' => 'Tierras comunales',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Terre communale',
          'format' => 'filtered_html',
          'safe_value' => 'Terre communale',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Terra comunitária',
          'format' => 'filtered_html',
          'safe_value' => 'Terra comunitária',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7442,
          'revision_id' => 7442,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1460557403,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7442,
          'revision_id' => 7442,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7442,
          'revision_id' => 7442,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7442,
          'revision_id' => 7442,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7442,
          'revision_id' => 7442,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'common lands',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7442-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Closed',
    'description' => NULL,
    'format' => NULL,
    'weight' => 2,
    'uuid' => '04125a5f-4dfc-4c52-a3d4-236cf337deae',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'debate_status',
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 539,
          'revision_id' => 539,
          'language' => 'und',
          'source' => '',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461163450,
          'changed' => 1461163450,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'cadastral register',
    'description' => 'The term cadastral register may include registers for any of the different types of cadastral systems identified in the definition of cadastres. ',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '06c23697-6305-4b2f-bf46-04f6b25d9ad6',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_b4d51db0',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'cadastral register',
          'format' => 'filtered_html',
          'safe_value' => 'cadastral register',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'registro catastral',
          'format' => 'filtered_html',
          'safe_value' => 'registro catastral',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'registre cadastral',
          'format' => 'filtered_html',
          'safe_value' => 'registre cadastral',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Cadastral register',
          'format' => 'plain_text',
          'safe_value' => 'Cadastral register',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'The term cadastral register may include registers for any of the different types of cadastral systems identified in the definition of cadastres. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>The term cadastral register may include registers for any of the different types of cadastral systems identified in the definition of cadastres.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Registro catastral, se trata de un registro establecido para consignar todos los propietarios aparentes de bienes raíces, llamado matriz catastral. Es la incorporación de la propiedad inmueble en el censo catastral, dentro de los procesos de formación, o conservación. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Registro catastral, se trata de un registro establecido para consignar todos los propietarios aparentes de bienes raíces, llamado matriz catastral. Es la incorporación de la propiedad inmueble en el censo catastral, dentro de los procesos de formación, o conservación.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Ce terme présente plusieurs acceptions; en général il s\'agit du registre établi par propriétaires apparents dit matrice cadastrale. Cependant la liste des parcelles est établie sur un registre dit "état de sections". 
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Ce terme présente plusieurs acceptions; en général il s\'agit du registre établi par propriétaires apparents dit matrice cadastrale. Cependant la liste des parcelles est établie sur un registre dit "état de sections".</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'The term cadastral register may include registers for any of the different types of cadastral systems identified in the definition of cadastres. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>The term cadastral register may include registers for any of the different types of cadastral systems identified in the definition of cadastres.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3690,
          'revision_id' => 3690,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1431355068,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3690,
          'revision_id' => 3690,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3690,
          'revision_id' => 3690,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3690,
          'revision_id' => 3690,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3690,
          'revision_id' => 3690,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'cadastral register',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3690-0',
    'description_original' => 'The term cadastral register may include registers for any of the different types of cadastral systems identified in the definition of cadastres. ',
  );
  $terms[] = array(
    'name' => 'grazing land rights',
    'description' => 'grazing land rights refer to the rights to use pastoral land for the survival and nourishment of livestock.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0a13c87c-e49d-4e3f-ab22-f6c82e6c7609',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_97241aeb',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'grazing land rights',
          'format' => 'filtered_html',
          'safe_value' => 'grazing land rights',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'derechos de pastoreo',
          'format' => 'filtered_html',
          'safe_value' => 'derechos de pastoreo',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'droit sur les terres de parcours',
          'format' => 'filtered_html',
          'safe_value' => 'droit sur les terres de parcours',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Grazing land rights',
          'format' => 'plain_text',
          'safe_value' => 'Grazing land rights',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'grazing land rights refer to the rights to use pastoral land for the survival and nourishment of livestock.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>grazing land rights refer to the rights to use pastoral land for the survival and nourishment of livestock.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'grazing land rights refer to the rights to use pastoral land for the survival and nourishment of livestock.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>grazing land rights refer to the rights to use pastoral land for the survival and nourishment of livestock.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3716,
          'revision_id' => 3716,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1431355068,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3716,
          'revision_id' => 3716,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3716,
          'revision_id' => 3716,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3716,
          'revision_id' => 3716,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3716,
          'revision_id' => 3716,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'grazing land rights',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3716-0',
    'description_original' => 'grazing land rights refer to the rights to use pastoral land for the survival and nourishment of livestock.',
  );
  $terms[] = array(
    'name' => 'land use mapping',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0a42e234-a8c2-4d65-821f-ae4a491794c1',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_9000100',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land use mapping',
          'format' => 'filtered_html',
          'safe_value' => 'land use mapping',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Cartografía del uso de la tierra',
          'format' => 'filtered_html',
          'safe_value' => 'Cartografía del uso de la tierra',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Cartographie de l\' utilisation des terres',
          'format' => 'filtered_html',
          'safe_value' => 'Cartographie de l&#039; utilisation des terres',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Cartografia do uso da terra',
          'format' => 'filtered_html',
          'safe_value' => 'Cartografia do uso da terra',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land use mapping',
          'format' => 'plain_text',
          'safe_value' => 'land use mapping',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3860,
          'revision_id' => 3860,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3860,
          'revision_id' => 3860,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3860,
          'revision_id' => 3860,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3860,
          'revision_id' => 3860,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3860,
          'revision_id' => 3860,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'land use mapping',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3860-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'forest conservation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0af65510-05b9-49c1-b04d-356df98ef517',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_1374158672853',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'forest conservation',
          'format' => 'filtered_html',
          'safe_value' => 'forest conservation',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'conservación de montes',
          'format' => 'filtered_html',
          'safe_value' => 'conservación de montes',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'conservation des forêts',
          'format' => 'filtered_html',
          'safe_value' => 'conservation des forêts',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'forest conservation',
          'format' => 'plain_text',
          'safe_value' => 'forest conservation',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3813,
          'revision_id' => 3813,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3813,
          'revision_id' => 3813,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3813,
          'revision_id' => 3813,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3813,
          'revision_id' => 3813,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3813,
          'revision_id' => 3813,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'forest conservation',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3813-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'regularization of ownership',
    'description' => 'Regularization of ownership is where informal or illegal occupation of land is legalised by statute, giving occupiers the legal right to private ownership of the land.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0c669e54-a640-48d8-995e-e681b8857fe8',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_d190bc52',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'regularization of ownership',
          'format' => 'filtered_html',
          'safe_value' => 'regularization of ownership',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'regularización de tierras',
          'format' => 'filtered_html',
          'safe_value' => 'regularización de tierras',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'régularisation foncière ',
          'format' => 'filtered_html',
          'safe_value' => 'régularisation foncière ',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Regularization of ownership',
          'format' => 'plain_text',
          'safe_value' => 'Regularization of ownership',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Regularization of ownership is where informal or illegal occupation of land is legalised by statute, giving occupiers the legal right to private ownership of the land.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Regularization of ownership is where informal or illegal occupation of land is legalised by statute, giving occupiers the legal right to private ownership of the land.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Régularisation foncière, procédure ayant pour objet de rétablir des droits fonciers jusqu’alors exerces sans justification légale ou de localiser des droits sur des immeubles jusqu\'alors mal identifies (occupations sans titre, rétablissement de limites après des faits de guerre). 
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Régularisation foncière, procédure ayant pour objet de rétablir des droits fonciers jusqu’alors exerces sans justification légale ou de localiser des droits sur des immeubles jusqu\'alors mal identifies (occupations sans titre, rétablissement de limites après des faits de guerre).</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Regularization of ownership is where informal or illegal occupation of land is legalised by statute, giving occupiers the legal right to private ownership of the land.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Regularization of ownership is where informal or illegal occupation of land is legalised by statute, giving occupiers the legal right to private ownership of the land.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3762,
          'revision_id' => 3762,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3762,
          'revision_id' => 3762,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3762,
          'revision_id' => 3762,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3762,
          'revision_id' => 3762,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3762,
          'revision_id' => 3762,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'regularization of ownership',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3762-0',
    'description_original' => 'Regularization of ownership is where informal or illegal occupation of land is legalised by statute, giving occupiers the legal right to private ownership of the land.',
  );
  $terms[] = array(
    'name' => 'rangelands',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0d92bcc5-4916-4968-9de2-3c31a35a3ec8',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_6448',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'rangelands',
          'format' => 'filtered_html',
          'safe_value' => 'rangelands',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Tierras de pastos',
          'format' => 'filtered_html',
          'safe_value' => 'Tierras de pastos',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Parcours',
          'format' => 'filtered_html',
          'safe_value' => 'Parcours',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Área de pastagem',
          'format' => 'filtered_html',
          'safe_value' => 'Área de pastagem',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'rangelands',
          'format' => 'plain_text',
          'safe_value' => 'rangelands',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3843,
          'revision_id' => 3843,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3843,
          'revision_id' => 3843,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3843,
          'revision_id' => 3843,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3843,
          'revision_id' => 3843,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3843,
          'revision_id' => 3843,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'rangelands',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3843-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'land environment',
    'description' => 'Spatial context of land use. ',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '10223c15-5cec-4ffd-ba89-3c4d77b83a28',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land environment',
          'format' => 'filtered_html',
          'safe_value' => 'land environment',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'environnement foncier',
          'format' => 'filtered_html',
          'safe_value' => 'environnement foncier',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land environment',
          'format' => 'plain_text',
          'safe_value' => 'land environment',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Spatial context of land use. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Spatial context of land use.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Contexte spatial de l\'utilisation des terres. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Contexte spatial de l\'utilisation des terres.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Spatial context of land use. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Spatial context of land use.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3727,
          'revision_id' => 3727,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1431355068,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3727,
          'revision_id' => 3727,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3727,
          'revision_id' => 3727,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3727,
          'revision_id' => 3727,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3727,
          'revision_id' => 3727,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'land environment',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3727-0',
    'description_original' => 'Spatial context of land use. ',
  );
  $terms[] = array(
    'name' => 'land inheritance rights',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '12212d7f-9c3f-46ee-aeae-d8cf08e53528',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'land inheritance rights',
          'format' => NULL,
          'safe_value' => 'land inheritance rights',
        ),
      ),
    ),
    'synonyms_synonyms' => array(
      'und' => array(
        0 => array(
          'value' => 'inheritance rights',
          'format' => NULL,
          'safe_value' => 'inheritance rights',
        ),
      ),
    ),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7047,
          'revision_id' => 7047,
          'language' => 'und',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456243783,
          'changed' => 1456243783,
        ),
      ),
    ),
    'name_original' => 'land inheritance rights',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7047-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'rights of clearance',
    'description' => 'Right of clearance is the agreement granted by the first occupant for cutting bush and continuously cultivating.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '12594763-6522-441c-a03d-f72b0fc5f14f',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_62487b4a',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'rights of clearance',
          'format' => 'filtered_html',
          'safe_value' => 'rights of clearance',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'derechos de tala',
          'format' => 'filtered_html',
          'safe_value' => 'derechos de tala',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'droit de la hache',
          'format' => 'filtered_html',
          'safe_value' => 'droit de la hache',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'rights of clearance',
          'format' => 'plain_text',
          'safe_value' => 'rights of clearance',
        ),
      ),
    ),
    'synonyms_synonyms' => array(
      'und' => array(
        0 => array(
          'value' => 'right of clearance',
          'format' => NULL,
          'safe_value' => 'right of clearance',
        ),
      ),
    ),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Right of clearance is the agreement granted by the first occupant for cutting bush and continuously cultivating.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Right of clearance is the agreement granted by the first occupant for cutting bush and continuously cultivating.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Droit à la hache, signifie que celui qui brule ou coupe la végétation naturelle a le droit de culture. 
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Droit à la hache, signifie que celui qui brule ou coupe la végétation naturelle a le droit de culture.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Right of clearance is the agreement granted by the first occupant for cutting bush and continuously cultivating.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Right of clearance is the agreement granted by the first occupant for cutting bush and continuously cultivating.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3764,
          'revision_id' => 3764,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1456258155,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3764,
          'revision_id' => 3764,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3764,
          'revision_id' => 3764,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3764,
          'revision_id' => 3764,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3764,
          'revision_id' => 3764,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'rights of clearance',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3764-0',
    'description_original' => 'Right of clearance is the agreement granted by the first occupant for cutting bush and continuously cultivating.',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'climate change',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '12ad2539-cd65-4f06-8cd6-caf6e1580885',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_1666',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'climate change',
          'format' => 'filtered_html',
          'safe_value' => 'climate change',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Cambio climático',
          'format' => 'filtered_html',
          'safe_value' => 'Cambio climático',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Changement climatique',
          'format' => 'filtered_html',
          'safe_value' => 'Changement climatique',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Mudança de clima',
          'format' => 'filtered_html',
          'safe_value' => 'Mudança de clima',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'climate change',
          'format' => 'plain_text',
          'safe_value' => 'climate change',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1245,
          'revision_id' => 1245,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1245,
          'revision_id' => 1245,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1245,
          'revision_id' => 1245,
          'language' => 'und',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1245,
          'revision_id' => 1245,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557389,
          'changed' => 1460557389,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1245,
          'revision_id' => 1245,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'climate change',
    'entity_translation_handler_id' => 'taxonomy_term-eid-1245-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'urbanization',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '12de1588-7958-4800-9433-074f1de729d2',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_8088',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'urbanization',
          'format' => 'filtered_html',
          'safe_value' => 'urbanization',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Urbanización',
          'format' => 'filtered_html',
          'safe_value' => 'Urbanización',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Urbanisation',
          'format' => 'filtered_html',
          'safe_value' => 'Urbanisation',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Urbanização',
          'format' => 'filtered_html',
          'safe_value' => 'Urbanização',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'urbanization',
          'format' => 'plain_text',
          'safe_value' => 'urbanization',
        ),
      ),
    ),
    'synonyms_synonyms' => array(
      'und' => array(
        0 => array(
          'value' => 'urbanisation',
          'format' => NULL,
          'safe_value' => 'urbanisation',
        ),
      ),
    ),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3849,
          'revision_id' => 3849,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1455912190,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3849,
          'revision_id' => 3849,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3849,
          'revision_id' => 3849,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3849,
          'revision_id' => 3849,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3849,
          'revision_id' => 3849,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'urbanization',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3849-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'slums',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '16b6e4b4-a615-47e3-ad76-131648d90899',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_9001019',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'slums',
          'format' => 'filtered_html',
          'safe_value' => 'slums',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Bairro de lata',
          'format' => 'filtered_html',
          'safe_value' => 'Bairro de lata',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'slums',
          'format' => NULL,
          'safe_value' => 'slums',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7331,
          'revision_id' => 7331,
          'language' => 'en',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1455696906,
          'changed' => 1455696906,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7331,
          'revision_id' => 7331,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557394,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7331,
          'revision_id' => 7331,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557394,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7331,
          'revision_id' => 7331,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7331,
          'revision_id' => 7331,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'slums',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7331-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'manure contract',
    'description' => 'a manure contract is an agreement where the herders supply the animals\' manure to the farmers\' land.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1956c0a5-89eb-4948-bf82-f09d8c7d917c',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_6b8a1f45',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'manure contract',
          'format' => 'filtered_html',
          'safe_value' => 'manure contract',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'contrato sobre abono natural',
          'format' => 'filtered_html',
          'safe_value' => 'contrato sobre abono natural',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'contrat de fumure ',
          'format' => 'filtered_html',
          'safe_value' => 'contrat de fumure ',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Manure contract',
          'format' => 'plain_text',
          'safe_value' => 'Manure contract',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'a manure contract is an agreement where the herders supply the animals\' manure to the farmers\' land.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>a manure contract is an agreement where the herders supply the animals\' manure to the farmers\' land.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Contrat de fumure, est un accord selon lequel les éleveurs cèdent les déjections de leurs animaux aux agricultures sur les terres desquels ils ont fait paitre leurs troupeaux.
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Contrat de fumure, est un accord selon lequel les éleveurs cèdent les déjections de leurs animaux aux agricultures sur les terres desquels ils ont fait paitre leurs troupeaux.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'a manure contract is an agreement where the herders supply the animals\' manure to the farmers\' land.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>a manure contract is an agreement where the herders supply the animals\' manure to the farmers\' land.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3742,
          'revision_id' => 3742,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3742,
          'revision_id' => 3742,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3742,
          'revision_id' => 3742,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3742,
          'revision_id' => 3742,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3742,
          'revision_id' => 3742,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'manure contract',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3742-0',
    'description_original' => 'a manure contract is an agreement where the herders supply the animals\' manure to the farmers\' land.',
  );
  $terms[] = array(
    'name' => 'land suitability',
    'description' => 'Land suitability is the fitness of a given type of land for a defined use. The land may be considered in its present condition or after improvements. The process of land suitability classification is the appraisal and grouping of specific areas of land in terms of their suitability for defined uses.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '195eb77f-5538-4c0f-9a16-be01ba1f37a8',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_15992',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land suitability',
          'format' => 'filtered_html',
          'safe_value' => 'land suitability',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Vocación de la tierra',
          'format' => 'filtered_html',
          'safe_value' => 'Vocación de la tierra',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Aptitude des terres',
          'format' => 'filtered_html',
          'safe_value' => 'Aptitude des terres',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Aptidão da terra',
          'format' => 'filtered_html',
          'safe_value' => 'Aptidão da terra',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land suitability',
          'format' => 'plain_text',
          'safe_value' => 'land suitability',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Land suitability is the fitness of a given type of land for a defined use. The land may be considered in its present condition or after improvements. The process of land suitability classification is the appraisal and grouping of specific areas of land in terms of their suitability for defined uses.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Land suitability is the fitness of a given type of land for a defined use. The land may be considered in its present condition or after improvements. The process of land suitability classification is the appraisal and grouping of specific areas of land in terms of their suitability for defined uses.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Land suitability is the fitness of a given type of land for a defined use. The land may be considered in its present condition or after improvements. The process of land suitability classification is the appraisal and grouping of specific areas of land in terms of their suitability for defined uses.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Land suitability is the fitness of a given type of land for a defined use. The land may be considered in its present condition or after improvements. The process of land suitability classification is the appraisal and grouping of specific areas of land in terms of their suitability for defined uses.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3823,
          'revision_id' => 3823,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3823,
          'revision_id' => 3823,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3823,
          'revision_id' => 3823,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3823,
          'revision_id' => 3823,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3823,
          'revision_id' => 3823,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'land suitability',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3823-0',
    'description_original' => 'Land suitability is the fitness of a given type of land for a defined use. The land may be considered in its present condition or after improvements. The process of land suitability classification is the appraisal and grouping of specific areas of land in terms of their suitability for defined uses.',
  );
  $terms[] = array(
    'name' => 'pastoral land rights',
    'description' => 'pastoral land rights refer to the right to use specific pastoral land.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1d24d04b-20f0-431d-9b22-9ff43366d69b',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_4d6b6100',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'pastoral land rights',
          'format' => 'filtered_html',
          'safe_value' => 'pastoral land rights',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'derechos agropastoriles',
          'format' => 'filtered_html',
          'safe_value' => 'derechos agropastoriles',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'droit foncier pastoral',
          'format' => 'filtered_html',
          'safe_value' => 'droit foncier pastoral',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Pastoral land rights',
          'format' => 'plain_text',
          'safe_value' => 'Pastoral land rights',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'pastoral land rights refer to the right to use specific pastoral land.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>pastoral land rights refer to the right to use specific pastoral land.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Droits de pâture, il s\'agit de l\'ensemble des dispositions qui régissent les relations qu\'entretiennent entre eux groupes et individus en ce qui concerne le statut et l\'usage de la terre et de l\'eau dans le cadre d\'une activité socio-économique donnée: l\'élevage. 
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Droits de pâture, il s\'agit de l\'ensemble des dispositions qui régissent les relations qu\'entretiennent entre eux groupes et individus en ce qui concerne le statut et l\'usage de la terre et de l\'eau dans le cadre d\'une activité socio-économique donnée: l\'élevage.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'pastoral land rights refer to the right to use specific pastoral land.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>pastoral land rights refer to the right to use specific pastoral land.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3752,
          'revision_id' => 3752,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3752,
          'revision_id' => 3752,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3752,
          'revision_id' => 3752,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3752,
          'revision_id' => 3752,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3752,
          'revision_id' => 3752,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'pastoral land rights',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3752-0',
    'description_original' => 'pastoral land rights refer to the right to use specific pastoral land.',
  );
  $terms[] = array(
    'name' => 'property law',
    'description' => 'Property law is the generic term within which falls the legal framework dealing with property, its use, ownership, regulation and disposition. As such, property law applies both to real property and personal property, and is distinguished from land law which applies only to real property.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1e030e11-dbc4-4d54-8b5b-7973137d7766',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_da192f3f',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'property law',
          'format' => 'filtered_html',
          'safe_value' => 'property law',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'derecho inmobiliario',
          'format' => 'filtered_html',
          'safe_value' => 'derecho inmobiliario',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'droit immobilier',
          'format' => 'filtered_html',
          'safe_value' => 'droit immobilier',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'property law',
          'format' => 'plain_text',
          'safe_value' => 'property law',
        ),
      ),
    ),
    'synonyms_synonyms' => array(
      'und' => array(
        0 => array(
          'value' => 'property regulation',
          'format' => NULL,
          'safe_value' => 'property regulation',
        ),
      ),
    ),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Property law is the generic term within which falls the legal framework dealing with property, its use, ownership, regulation and disposition. As such, property law applies both to real property and personal property, and is distinguished from land law which applies only to real property.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Property law is the generic term within which falls the legal framework dealing with property, its use, ownership, regulation and disposition. As such, property law applies both to real property and personal property, and is distinguished from land law which applies only to real property.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Derecho inmobiliario, es el conjunto de disposiciones que se refieren a la administración, traspaso y conservación de inmuebles. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Derecho inmobiliario, es el conjunto de disposiciones que se refieren a la administración, traspaso y conservación de inmuebles.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Le droit immobilier comprend l\' ensemble des dispositions qui se rapportent à la gestion, à la transmission et à la conservation des immeubles. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Le droit immobilier comprend l\' ensemble des dispositions qui se rapportent à la gestion, à la transmission et à la conservation des immeubles.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Property law is the generic term within which falls the legal framework dealing with property, its use, ownership, regulation and disposition. As such, property law applies both to real property and personal property, and is distinguished from land law which applies only to real property.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Property law is the generic term within which falls the legal framework dealing with property, its use, ownership, regulation and disposition. As such, property law applies both to real property and personal property, and is distinguished from land law which applies only to real property.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3759,
          'revision_id' => 3759,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1456426566,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3759,
          'revision_id' => 3759,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3759,
          'revision_id' => 3759,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3759,
          'revision_id' => 3759,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3759,
          'revision_id' => 3759,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'property law',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3759-0',
    'description_original' => 'Property law is the generic term within which falls the legal framework dealing with property, its use, ownership, regulation and disposition. As such, property law applies both to real property and personal property, and is distinguished from land law which applies only to real property.',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'riparian rights',
    'description' => 'riparian rights are those rights in respect of the use and entitlement to water enjoyed by a riparian owner whose land is contiguous with a river or a stream.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1e55a080-08e2-4529-85af-c3a49f056856',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_a6fdfb0e',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'riparian rights',
          'format' => 'filtered_html',
          'safe_value' => 'riparian rights',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'derechos ribereños',
          'format' => 'filtered_html',
          'safe_value' => 'derechos ribereños',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'droit du riverain',
          'format' => 'filtered_html',
          'safe_value' => 'droit du riverain',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Riparian rights',
          'format' => 'plain_text',
          'safe_value' => 'Riparian rights',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'riparian rights are those rights in respect of the use and entitlement to water enjoyed by a riparian owner whose land is contiguous with a river or a stream.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>riparian rights are those rights in respect of the use and entitlement to water enjoyed by a riparian owner whose land is contiguous with a river or a stream.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Droit du riverain, celui d\'utiliser l\'eau du fait que son terrain es continu a un ruisseau, une pièce d\'eau, un cours de l\'eau. 
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Droit du riverain, celui d\'utiliser l\'eau du fait que son terrain es continu a un ruisseau, une pièce d\'eau, un cours de l\'eau.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'riparian rights are those rights in respect of the use and entitlement to water enjoyed by a riparian owner whose land is contiguous with a river or a stream.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>riparian rights are those rights in respect of the use and entitlement to water enjoyed by a riparian owner whose land is contiguous with a river or a stream.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3767,
          'revision_id' => 3767,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3767,
          'revision_id' => 3767,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3767,
          'revision_id' => 3767,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3767,
          'revision_id' => 3767,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3767,
          'revision_id' => 3767,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'riparian rights',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3767-0',
    'description_original' => 'riparian rights are those rights in respect of the use and entitlement to water enjoyed by a riparian owner whose land is contiguous with a river or a stream.',
  );
  $terms[] = array(
    'name' => 'town and country planning',
    'description' => 'Town and country planning is the planning framework within which decisions are made about how land is to be used.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '21c24005-24d8-4eb0-a3a8-2d93c0833d85',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_9f542492',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'town and country planning',
          'format' => 'filtered_html',
          'safe_value' => 'town and country planning',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'plan de ordenamiento territorial',
          'format' => 'filtered_html',
          'safe_value' => 'plan de ordenamiento territorial',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'planification territoriale (villes et campagnes)',
          'format' => 'filtered_html',
          'safe_value' => 'planification territoriale (villes et campagnes)',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Town and country planning',
          'format' => 'plain_text',
          'safe_value' => 'Town and country planning',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Town and country planning is the planning framework within which decisions are made about how land is to be used.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Town and country planning is the planning framework within which decisions are made about how land is to be used.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Planes o plan de ordenamiento territorial, es el nombre genérico que equipara las diferentes denominaciones , que cada país imparte a los instrumentos de planificación, encargados de regir el uso y manejo de las tierras y recursos, propios de un territorio determinado. Surgen de la necesidad de orientar y regular los procesos de utilización y ocupación del espacio (planificación del uso de la tierra), como una condición propia de relación sociedad/naturaleza, y del equilibrio que debe existir entre ésta. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Planes o plan de ordenamiento territorial, es el nombre genérico que equipara las diferentes denominaciones , que cada país imparte a los instrumentos de planificación, encargados de regir el uso y manejo de las tierras y recursos, propios de un territorio determinado. Surgen de la necesidad de orientar y regular los procesos de utilización y ocupación del espacio (planificación del uso de la tierra), como una condición propia de relación sociedad/naturaleza, y del equilibrio que debe existir entre ésta.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'La planification territoriale consiste en l\'élaboration de normes qui deviennent les cadres de programmes destinés à orienter, par des mesures incitatives ou la conclusion de contrats, l\'action des entreprises à moyen ou long terme pour la réalisation d\'objectifs économiques, nationaux ou régionaux à atteindre au cours d\'une période déterminée. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>La planification territoriale consiste en l\'élaboration de normes qui deviennent les cadres de programmes destinés à orienter, par des mesures incitatives ou la conclusion de contrats, l\'action des entreprises à moyen ou long terme pour la réalisation d\'objectifs économiques, nationaux ou régionaux à atteindre au cours d\'une période déterminée.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Town and country planning is the planning framework within which decisions are made about how land is to be used.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Town and country planning is the planning framework within which decisions are made about how land is to be used.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3779,
          'revision_id' => 3779,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3779,
          'revision_id' => 3779,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3779,
          'revision_id' => 3779,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3779,
          'revision_id' => 3779,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3779,
          'revision_id' => 3779,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'town and country planning',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3779-0',
    'description_original' => 'Town and country planning is the planning framework within which decisions are made about how land is to be used.',
  );
  $terms[] = array(
    'name' => 'animal husbandry',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '26f862e0-b9df-4bb5-8178-a52be5ba65cf',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_8532',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'animal husbandry',
          'format' => 'filtered_html',
          'safe_value' => 'animal husbandry',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Ganadería',
          'format' => 'filtered_html',
          'safe_value' => 'Ganadería',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Élevage',
          'format' => 'filtered_html',
          'safe_value' => 'Élevage',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Criação animal',
          'format' => 'filtered_html',
          'safe_value' => 'Criação animal',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'animal husbandry',
          'format' => 'plain_text',
          'safe_value' => 'animal husbandry',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3791,
          'revision_id' => 3791,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3791,
          'revision_id' => 3791,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3791,
          'revision_id' => 3791,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3791,
          'revision_id' => 3791,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3791,
          'revision_id' => 3791,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'animal husbandry',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3791-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Forestry',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2748e598-f12f-4ff9-9b26-8f18c7cdda22',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'themes',
    'field_related_topics' => array(
      'und' => array(
        0 => array(
          'tid' => '65328f0f-acfd-4923-95e3-7ac9a5df25d9',
        ),
        1 => array(
          'tid' => '6018cfd1-4850-4d34-89dd-e8ef13bd1c05',
        ),
        2 => array(
          'tid' => '5253e548-3a31-4dbf-b391-0c7c72caff4d',
        ),
        3 => array(
          'tid' => 'b278ae20-4491-449c-aabb-bedc8d27eff2',
        ),
        4 => array(
          'tid' => 'da161d46-383a-4f7d-974e-55b2b09688ba',
        ),
        5 => array(
          'tid' => '017c77ae-a64c-4038-b4bd-e61ce092c167',
        ),
        6 => array(
          'tid' => 'c15a4f33-9704-48f0-b354-e6bc0a021dad',
        ),
        7 => array(
          'tid' => '0af65510-05b9-49c1-b04d-356df98ef517',
        ),
        8 => array(
          'tid' => '9f394331-4b1f-4b1a-b429-b785b011f80c',
        ),
        9 => array(
          'tid' => 'c2340e93-1076-4ecf-9a04-a070d3f77d87',
        ),
        10 => array(
          'tid' => '81260e71-964d-47ae-a44a-5e8b01f22755',
        ),
        11 => array(
          'tid' => 'f11c96a6-4bfb-4fa8-8fb6-665b93320d35',
        ),
        12 => array(
          'tid' => 'a0e1cc30-96fa-407b-b019-e50b4fa9cef6',
        ),
        13 => array(
          'tid' => '8b044a2a-7560-49c3-9fcc-dc43c937d0ca',
        ),
        14 => array(
          'tid' => 'ff9a0b46-76e1-4868-a4a9-03e3768c0972',
        ),
        15 => array(
          'tid' => 'dd13caa6-b566-4d0c-9021-c7138abededa',
        ),
        16 => array(
          'tid' => '8b750c7d-6dbf-4731-93c0-833598104a99',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7344,
          'revision_id' => 7344,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1461595281,
          'changed' => 1461595281,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'land access',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '286e5a44-023a-4041-be35-a81e21697730',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_9000090',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land access',
          'format' => 'filtered_html',
          'safe_value' => 'land access',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'acceso a la tierra',
          'format' => 'filtered_html',
          'safe_value' => 'acceso a la tierra',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'accès à la terre',
          'format' => 'filtered_html',
          'safe_value' => 'accès à la terre',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Acesso à terra',
          'format' => 'filtered_html',
          'safe_value' => 'Acesso à terra',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land access',
          'format' => 'plain_text',
          'safe_value' => 'land access',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3785,
          'revision_id' => 3785,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3785,
          'revision_id' => 3785,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3785,
          'revision_id' => 3785,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3785,
          'revision_id' => 3785,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3785,
          'revision_id' => 3785,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'land access',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3785-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'pre-emption rights',
    'description' => 'a pre-emption right is the legal opportunity to buy a particular property before it is put on the market.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '287d13da-66e5-432e-b0b3-f5456a0c3b2a',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_9c081fdc',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'pre-emption rights',
          'format' => 'filtered_html',
          'safe_value' => 'pre-emption rights',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'derechos de prelación',
          'format' => 'filtered_html',
          'safe_value' => 'derechos de prelación',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'droit de préemption',
          'format' => 'filtered_html',
          'safe_value' => 'droit de préemption',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Pre-emption rights',
          'format' => 'plain_text',
          'safe_value' => 'Pre-emption rights',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'a pre-emption right is the legal opportunity to buy a particular property before it is put on the market.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>a pre-emption right is the legal opportunity to buy a particular property before it is put on the market.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Derecho de preferencia o prelación es un derecho que permite a un ocupante de un bien, tener la propiedad para adquirir dicho bien puesto en venta por su propietario. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Derecho de preferencia o prelación es un derecho que permite a un ocupante de un bien, tener la propiedad para adquirir dicho bien puesto en venta por su propietario.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Droit de préemption,es un droit qui permet à son titulaire d\'acquérir par priorité un bien mis en vente par son propriétaire
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Droit de préemption,es un droit qui permet à son titulaire d\'acquérir par priorité un bien mis en vente par son propriétaire</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'a pre-emption right is the legal opportunity to buy a particular property before it is put on the market.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>a pre-emption right is the legal opportunity to buy a particular property before it is put on the market.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3766,
          'revision_id' => 3766,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3766,
          'revision_id' => 3766,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3766,
          'revision_id' => 3766,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3766,
          'revision_id' => 3766,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3766,
          'revision_id' => 3766,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'pre-emption rights',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3766-0',
    'description_original' => 'a pre-emption right is the legal opportunity to buy a particular property before it is put on the market.',
  );
  $terms[] = array(
    'name' => 'land area',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '28f44231-1773-485a-b65d-764c683eb4c0',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_298db0d3',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land area',
          'format' => 'filtered_html',
          'safe_value' => 'land area',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'área de tierra',
          'format' => 'filtered_html',
          'safe_value' => 'área de tierra',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'espace foncier',
          'format' => 'filtered_html',
          'safe_value' => 'espace foncier',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7443,
          'revision_id' => 7443,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1460557403,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7443,
          'revision_id' => 7443,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7443,
          'revision_id' => 7443,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7443,
          'revision_id' => 7443,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7443,
          'revision_id' => 7443,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'land area',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7443-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'land deals',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2c7396db-a39f-4f51-90c0-0c06adc1a7ec',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_666dbc26',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land deals',
          'format' => 'filtered_html',
          'safe_value' => 'land deals',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land deals',
          'format' => NULL,
          'safe_value' => 'land deals',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6894,
          'revision_id' => 6894,
          'language' => 'en',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1448450504,
          'changed' => 1448450504,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6894,
          'revision_id' => 6894,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557406,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6894,
          'revision_id' => 6894,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557406,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6894,
          'revision_id' => 6894,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6894,
          'revision_id' => 6894,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'land deals',
    'entity_translation_handler_id' => 'taxonomy_term-eid-6894-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Land & Food Security',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '30505824-ccd9-4d7f-990e-84745b5df726',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'themes',
    'field_related_topics' => array(
      'und' => array(
        0 => array(
          'tid' => '8da4c998-80c1-43bc-9d70-da898d251edf',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7352,
          'revision_id' => 7352,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1461595529,
          'changed' => 1461595529,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'urban population',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '31738ba0-1faa-4828-b3db-c2e2d8dcdb76',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_8086',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'urban population',
          'format' => 'filtered_html',
          'safe_value' => 'urban population',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Población urbana',
          'format' => 'filtered_html',
          'safe_value' => 'Población urbana',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Population urbaine',
          'format' => 'filtered_html',
          'safe_value' => 'Population urbaine',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'População urbana',
          'format' => 'filtered_html',
          'safe_value' => 'População urbana',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'urban population',
          'format' => 'plain_text',
          'safe_value' => 'urban population',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3869,
          'revision_id' => 3869,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3869,
          'revision_id' => 3869,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3869,
          'revision_id' => 3869,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3869,
          'revision_id' => 3869,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3869,
          'revision_id' => 3869,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'urban population',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3869-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'indigenous peoples',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '339c8905-0e1b-4599-8831-1a9973717948',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_331524',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'indigenous peoples',
          'format' => 'filtered_html',
          'safe_value' => 'indigenous peoples',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'pueblos indígenas',
          'format' => 'filtered_html',
          'safe_value' => 'pueblos indígenas',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'peuple autochtone',
          'format' => 'filtered_html',
          'safe_value' => 'peuple autochtone',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Indigenous Peoples',
          'format' => 'plain_text',
          'safe_value' => 'Indigenous Peoples',
        ),
      ),
    ),
    'synonyms_synonyms' => array(
      'und' => array(
        0 => array(
          'value' => 'indigenous communities',
          'format' => NULL,
          'safe_value' => 'indigenous communities',
        ),
        1 => array(
          'value' => 'indigenous community',
          'format' => NULL,
          'safe_value' => 'indigenous community',
        ),
      ),
    ),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1259,
          'revision_id' => 1259,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355180,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1259,
          'revision_id' => 1259,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355180,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1259,
          'revision_id' => 1259,
          'language' => 'und',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355180,
          'changed' => 1461767610,
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1259,
          'revision_id' => 1259,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557394,
          'changed' => 1460557394,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1259,
          'revision_id' => 1259,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'indigenous peoples',
    'entity_translation_handler_id' => 'taxonomy_term-eid-1259-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'urban planning',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '33bb3b85-465c-4d93-a574-b87d5cffc1df',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_37948',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'urban planning',
          'format' => 'filtered_html',
          'safe_value' => 'urban planning',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Planificación urbana',
          'format' => 'filtered_html',
          'safe_value' => 'Planificación urbana',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Aménagement urbain',
          'format' => 'filtered_html',
          'safe_value' => 'Aménagement urbain',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Ordenamento urbano',
          'format' => 'filtered_html',
          'safe_value' => 'Ordenamento urbano',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'urban planning',
          'format' => 'plain_text',
          'safe_value' => 'urban planning',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3848,
          'revision_id' => 3848,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3848,
          'revision_id' => 3848,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3848,
          'revision_id' => 3848,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3848,
          'revision_id' => 3848,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3848,
          'revision_id' => 3848,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'urban planning',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3848-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Conflict',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '33bd506e-e8eb-41f0-963e-0fb0b1e34673',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => '',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Conflict',
          'format' => 'plain_text',
          'safe_value' => 'Conflict',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Conflict',
          'format' => 'plain_text',
          'safe_value' => 'Conflict',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Conflict',
          'format' => 'plain_text',
          'safe_value' => 'Conflict',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Conflict',
          'format' => 'plain_text',
          'safe_value' => 'Conflict',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1249,
          'revision_id' => 1249,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355543,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1249,
          'revision_id' => 1249,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355543,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1249,
          'revision_id' => 1249,
          'language' => 'und',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355543,
        ),
      ),
    ),
    'name_original' => 'Conflict',
    'entity_translation_handler_id' => 'taxonomy_term-eid-1249-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'land conflicts',
    'description' => 'Disagreement over land, where specific individual or collective interests related to land are in opposition. ',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '33c542bc-fdbe-4374-8ff3-1db8c7535205',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_e236b2b1',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land conflicts',
          'format' => 'filtered_html',
          'safe_value' => 'land conflicts',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'conflictos por la tierra',
          'format' => 'filtered_html',
          'safe_value' => 'conflictos por la tierra',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'conflit foncier',
          'format' => 'filtered_html',
          'safe_value' => 'conflit foncier',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land conflicts',
          'format' => 'plain_text',
          'safe_value' => 'land conflicts',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Disagreement over land, where specific individual or collective interests related to land are in opposition. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Disagreement over land, where specific individual or collective interests related to land are in opposition.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Désaccord en ce qui concerne l\'accaparement, le contrôle ou l\'appropriation de ressources en terres, entre individus ou/et entre collectivités. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Désaccord en ce qui concerne l\'accaparement, le contrôle ou l\'appropriation de ressources en terres, entre individus ou/et entre collectivités.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Disagreement over land, where specific individual or collective interests related to land are in opposition. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Disagreement over land, where specific individual or collective interests related to land are in opposition.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3725,
          'revision_id' => 3725,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1431355068,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3725,
          'revision_id' => 3725,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3725,
          'revision_id' => 3725,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3725,
          'revision_id' => 3725,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3725,
          'revision_id' => 3725,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'land conflicts',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3725-0',
    'description_original' => 'Disagreement over land, where specific individual or collective interests related to land are in opposition. ',
  );
  $terms[] = array(
    'name' => 'tenant\'s rights',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '33fad031-7dea-42ba-8212-5c77ecac4f89',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_28775',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'tenant\'s rights',
          'format' => 'filtered_html',
          'safe_value' => 'tenant&#039;s rights',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Derecho del propietario',
          'format' => 'filtered_html',
          'safe_value' => 'Derecho del propietario',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Droit du locataire',
          'format' => 'filtered_html',
          'safe_value' => 'Droit du locataire',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Direito do arrendatário',
          'format' => 'filtered_html',
          'safe_value' => 'Direito do arrendatário',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'tenant\'s rights',
          'format' => 'plain_text',
          'safe_value' => 'tenant&#039;s rights',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3855,
          'revision_id' => 3855,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3855,
          'revision_id' => 3855,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3855,
          'revision_id' => 3855,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3855,
          'revision_id' => 3855,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3855,
          'revision_id' => 3855,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'tenant\'s rights',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3855-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'informal property',
    'description' => 'Informal property consists in rights that lack formal, official recognition and protection.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '37a3cf62-94d5-4832-82e8-1cdc18894624',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_1d4ea7db',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'informal property',
          'format' => 'filtered_html',
          'safe_value' => 'informal property',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'propiedad informal',
          'format' => 'filtered_html',
          'safe_value' => 'propiedad informal',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'propriété informelle',
          'format' => 'filtered_html',
          'safe_value' => 'propriété informelle',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Informal property',
          'format' => 'plain_text',
          'safe_value' => 'Informal property',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Informal property consists in rights that lack formal, official recognition and protection.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Informal property consists in rights that lack formal, official recognition and protection.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Propriété informelle, celle qui manque de reconnaissance formelle, légale ou officielle. 
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Propriété informelle, celle qui manque de reconnaissance formelle, légale ou officielle.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Informal property consists in rights that lack formal, official recognition and protection.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Informal property consists in rights that lack formal, official recognition and protection.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3720,
          'revision_id' => 3720,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1431355068,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3720,
          'revision_id' => 3720,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3720,
          'revision_id' => 3720,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3720,
          'revision_id' => 3720,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3720,
          'revision_id' => 3720,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'informal property',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3720-0',
    'description_original' => 'Informal property consists in rights that lack formal, official recognition and protection.',
  );
  $terms[] = array(
    'name' => 'statutory tenure',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3a96b910-3f6d-4ad5-b6ee-73dd59bd0c27',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_dc5739ab',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'statutory tenure',
          'format' => 'filtered_html',
          'safe_value' => 'statutory tenure',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7459,
          'revision_id' => 7459,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557406,
          'changed' => 1460557406,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7459,
          'revision_id' => 7459,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557406,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7459,
          'revision_id' => 7459,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557406,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7459,
          'revision_id' => 7459,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7459,
          'revision_id' => 7459,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'statutory tenure',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7459-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'protected areas',
    'description' => ' Protected areas refer to areas of at least 1,000 hectares as scientific and natural reserves and strict nature reserves, national parks of national and international reputation, natural monuments and landscapes.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3d4c909b-d200-4db0-b310-29348cdfad9a',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_37952',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'protected areas',
          'format' => 'filtered_html',
          'safe_value' => 'protected areas',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Zonas protegidas',
          'format' => 'filtered_html',
          'safe_value' => 'Zonas protegidas',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Zone protegée',
          'format' => 'filtered_html',
          'safe_value' => 'Zone protegée',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Zona protegida',
          'format' => 'filtered_html',
          'safe_value' => 'Zona protegida',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'protected areas',
          'format' => 'plain_text',
          'safe_value' => 'protected areas',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => ' Protected areas refer to areas of at least 1,000 hectares as scientific and natural reserves and strict nature reserves, national parks of national and international reputation, natural monuments and landscapes.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Protected areas refer to areas of at least 1,000 hectares as scientific and natural reserves and strict nature reserves, national parks of national and international reputation, natural monuments and landscapes.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => ' Protected areas refer to areas of at least 1,000 hectares as scientific and natural reserves and strict nature reserves, national parks of national and international reputation, natural monuments and landscapes.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Protected areas refer to areas of at least 1,000 hectares as scientific and natural reserves and strict nature reserves, national parks of national and international reputation, natural monuments and landscapes.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3871,
          'revision_id' => 3871,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3871,
          'revision_id' => 3871,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3871,
          'revision_id' => 3871,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3871,
          'revision_id' => 3871,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3871,
          'revision_id' => 3871,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'protected areas',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3871-0',
    'description_original' => ' Protected areas refer to areas of at least 1,000 hectares as scientific and natural reserves and strict nature reserves, national parks of national and international reputation, natural monuments and landscapes.',
  );
  $terms[] = array(
    'name' => 'property rights',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3da5ca60-e9bc-412b-be21-8103eb65e1d9',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_37942',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'property rights',
          'format' => 'filtered_html',
          'safe_value' => 'property rights',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Derechos de propiedad',
          'format' => 'filtered_html',
          'safe_value' => 'Derechos de propiedad',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Droit de propriété',
          'format' => 'filtered_html',
          'safe_value' => 'Droit de propriété',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Direito de propriedade',
          'format' => 'filtered_html',
          'safe_value' => 'Direito de propriedade',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'property rights',
          'format' => 'plain_text',
          'safe_value' => 'property rights',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3856,
          'revision_id' => 3856,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3856,
          'revision_id' => 3856,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3856,
          'revision_id' => 3856,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3856,
          'revision_id' => 3856,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3856,
          'revision_id' => 3856,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'property rights',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3856-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'adjudication',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3dfe9c07-cd72-4a6d-834d-9b9db6182d41',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_ee93bbbe',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'adjudication',
          'format' => 'filtered_html',
          'safe_value' => 'adjudication',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7445,
          'revision_id' => 7445,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1460557403,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7445,
          'revision_id' => 7445,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7445,
          'revision_id' => 7445,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7445,
          'revision_id' => 7445,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7445,
          'revision_id' => 7445,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'adjudication',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7445-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'land dispute resolution',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3e1edd7d-4a64-4cce-a73c-98ef28d4a901',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_6f79699c',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land dispute resolution',
          'format' => 'filtered_html',
          'safe_value' => 'land dispute resolution',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7446,
          'revision_id' => 7446,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1460557403,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7446,
          'revision_id' => 7446,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7446,
          'revision_id' => 7446,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7446,
          'revision_id' => 7446,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7446,
          'revision_id' => 7446,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'land dispute resolution',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7446-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'land acquisitions',
    'description' => 'Obtainment of land property/land use. ',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3e8370bb-1ef7-46d2-afeb-86edad772c95',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_89d3dcbb',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land acquisitions',
          'format' => 'filtered_html',
          'safe_value' => 'land acquisitions',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'adquisiciones de tierras',
          'format' => 'filtered_html',
          'safe_value' => 'adquisiciones de tierras',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'acquisition foncière',
          'format' => 'filtered_html',
          'safe_value' => 'acquisition foncière',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land acquisitions',
          'format' => 'plain_text',
          'safe_value' => 'land acquisitions',
        ),
      ),
    ),
    'synonyms_synonyms' => array(
      'und' => array(
        0 => array(
          'value' => 'land acquisition',
          'format' => NULL,
          'safe_value' => 'land acquisition',
        ),
      ),
    ),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Obtainment of land property/land use. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Obtainment of land property/land use.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Opération qui consiste à accroitre la propriété foncière ou la surface utilisable. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Opération qui consiste à accroitre la propriété foncière ou la surface utilisable.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Obtainment of land property/land use. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Obtainment of land property/land use.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3723,
          'revision_id' => 3723,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1456243899,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3723,
          'revision_id' => 3723,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3723,
          'revision_id' => 3723,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3723,
          'revision_id' => 3723,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3723,
          'revision_id' => 3723,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'land acquisitions',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3723-0',
    'description_original' => 'Obtainment of land property/land use. ',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'land consolidation',
    'description' => 'Joining small plots of land together to form larger farms or large fields.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3f41afef-1eec-437c-b8a8-f426af4a6de8',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_4173',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land consolidation',
          'format' => 'filtered_html',
          'safe_value' => 'land consolidation',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Concentración parcelaria',
          'format' => 'filtered_html',
          'safe_value' => 'Concentración parcelaria',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Remembrement',
          'format' => 'filtered_html',
          'safe_value' => 'Remembrement',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Emparcelamento',
          'format' => 'filtered_html',
          'safe_value' => 'Emparcelamento',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land consolidation',
          'format' => 'plain_text',
          'safe_value' => 'land consolidation',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Joining small plots of land together to form larger farms or large fields.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Joining small plots of land together to form larger farms or large fields.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Joining small plots of land together to form larger farms or large fields.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Joining small plots of land together to form larger farms or large fields.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3832,
          'revision_id' => 3832,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3832,
          'revision_id' => 3832,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3832,
          'revision_id' => 3832,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3832,
          'revision_id' => 3832,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3832,
          'revision_id' => 3832,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'land consolidation',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3832-0',
    'description_original' => 'Joining small plots of land together to form larger farms or large fields.',
  );
  $terms[] = array(
    'name' => 'waste',
    'description' => 'Waste technically refers to the owner\'s right to change the nature of the land whether for better or for worse, although the most common interpretation is of abuse of the land.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '41b11446-cd66-4796-9824-668df13797fb',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_ecf20c17',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'waste',
          'format' => 'filtered_html',
          'safe_value' => 'waste',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'abuso',
          'format' => 'filtered_html',
          'safe_value' => 'abuso',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'droit de disposer',
          'format' => 'filtered_html',
          'safe_value' => 'droit de disposer',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Waste',
          'format' => 'plain_text',
          'safe_value' => 'Waste',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Waste technically refers to the owner\'s right to change the nature of the land whether for better or for worse, although the most common interpretation is of abuse of the land.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Waste technically refers to the owner\'s right to change the nature of the land whether for better or for worse, although the most common interpretation is of abuse of the land.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Abuso, proviene del latín abusus, que tiene como significado, uso excesivo.  En derecho se entiende el mal uso o empleo arbitrario de la autoridad, la acción despótica de un poder, la consecuencia exagerada de un principio, el goce inmoderado de la propiedad o posesión; en definitiva, todo acto que, saliendo de los límites impuestos por la razón, la equidad, la justicia, ataque en forma directa o indirecta las leyes o el interés general. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Abuso, proviene del latín abusus, que tiene como significado, uso excesivo.  En derecho se entiende el mal uso o empleo arbitrario de la autoridad, la acción despótica de un poder, la consecuencia exagerada de un principio, el goce inmoderado de la propiedad o posesión; en definitiva, todo acto que, saliendo de los límites impuestos por la razón, la equidad, la justicia, ataque en forma directa o indirecta las leyes o el interés general.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Abus, ce terme provient du latin abusus (du verbe abuti). Il signifie faire un usage excessif d\' une prérogative juridique. Il s\' agit donc pour le titulaire d\' un droit , d\' un pouvoir ou d\' une fonction de sortir des normes qui régissent l\' usage licite de leur exercice.
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Abus, ce terme provient du latin abusus (du verbe abuti). Il signifie faire un usage excessif d\' une prérogative juridique. Il s\' agit donc pour le titulaire d\' un droit , d\' un pouvoir ou d\' une fonction de sortir des normes qui régissent l\' usage licite de leur exercice.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Waste technically refers to the owner\'s right to change the nature of the land whether for better or for worse, although the most common interpretation is of abuse of the land.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Waste technically refers to the owner\'s right to change the nature of the land whether for better or for worse, although the most common interpretation is of abuse of the land.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3783,
          'revision_id' => 3783,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3783,
          'revision_id' => 3783,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3783,
          'revision_id' => 3783,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3783,
          'revision_id' => 3783,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3783,
          'revision_id' => 3783,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'waste',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3783-0',
    'description_original' => 'Waste technically refers to the owner\'s right to change the nature of the land whether for better or for worse, although the most common interpretation is of abuse of the land.',
  );
  $terms[] = array(
    'name' => 'matrilineal',
    'description' => 'A matrilineal lineage group is one where the line of descent and membership is transmitted by the female.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4386102f-5b35-42fe-9d84-be0f221d29c9',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_a0982198',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'matrilineal',
          'format' => 'filtered_html',
          'safe_value' => 'matrilineal',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'matrilineal',
          'format' => 'filtered_html',
          'safe_value' => 'matrilineal',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => ' matrilinéaire',
          'format' => 'filtered_html',
          'safe_value' => ' matrilinéaire',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Matrilineal',
          'format' => 'plain_text',
          'safe_value' => 'Matrilineal',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'A matrilineal lineage group is one where the line of descent and membership is transmitted by the female.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>A matrilineal lineage group is one where the line of descent and membership is transmitted by the female.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Matrilinaje, o linaje matrilineal, es cuando la filiación se transmite por la línea ancestral de las mujeres. Un individuo que pertenece al linaje de su madre, tiene como pariente matrilineal más cercano al hermano o la hermana de la madre; los parientes del padre no son considerados como familiares, sino como aliados. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Matrilinaje, o linaje matrilineal, es cuando la filiación se transmite por la línea ancestral de las mujeres. Un individuo que pertenece al linaje de su madre, tiene como pariente matrilineal más cercano al hermano o la hermana de la madre; los parientes del padre no son considerados como familiares, sino como aliados.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => ' Matrilinéaire, Le lignage groupe les gens qui se considèrent comme issus d\'un ancêtre commun et peuvent reconstituer leur généalogie a partir de cet ancêtre. On parle de matrilignage (ou de lignage matrilinéaire) si la filiation se transmet par les femmes. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Matrilinéaire, Le lignage groupe les gens qui se considèrent comme issus d\'un ancêtre commun et peuvent reconstituer leur généalogie a partir de cet ancêtre. On parle de matrilignage (ou de lignage matrilinéaire) si la filiation se transmet par les femmes.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'A matrilineal lineage group is one where the line of descent and membership is transmitted by the female.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>A matrilineal lineage group is one where the line of descent and membership is transmitted by the female.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3743,
          'revision_id' => 3743,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3743,
          'revision_id' => 3743,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3743,
          'revision_id' => 3743,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3743,
          'revision_id' => 3743,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3743,
          'revision_id' => 3743,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'matrilineal',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3743-0',
    'description_original' => 'A matrilineal lineage group is one where the line of descent and membership is transmitted by the female.',
  );
  $terms[] = array(
    'name' => 'servient tenement',
    'description' => 'a servient tenement is a property that is subject to a right of easement.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '43a43997-cbec-41b9-92f2-a7ccf0c5e0ee',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_31e765ad',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'servient tenement',
          'format' => 'filtered_html',
          'safe_value' => 'servient tenement',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'predio sirviente',
          'format' => 'filtered_html',
          'safe_value' => 'predio sirviente',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'servitude',
          'format' => 'filtered_html',
          'safe_value' => 'servitude',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Servient tenement',
          'format' => 'plain_text',
          'safe_value' => 'Servient tenement',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'a servient tenement is a property that is subject to a right of easement.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>a servient tenement is a property that is subject to a right of easement.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Servidumbre, es una restricción que limita el ejercicio del derecho de propiedad. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Servidumbre, es una restricción que limita el ejercicio del derecho de propiedad.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Une servitude est une contrainte limitative à l\'exercice du droit de propriété.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Une servitude est une contrainte limitative à l\'exercice du droit de propriété.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'a servient tenement is a property that is subject to a right of easement.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>a servient tenement is a property that is subject to a right of easement.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3771,
          'revision_id' => 3771,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3771,
          'revision_id' => 3771,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3771,
          'revision_id' => 3771,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3771,
          'revision_id' => 3771,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3771,
          'revision_id' => 3771,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'servient tenement',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3771-0',
    'description_original' => 'a servient tenement is a property that is subject to a right of easement.',
  );
  $terms[] = array(
    'name' => 'land loans',
    'description' => 'Land loan is the temporary cession of land use, normally without rent payable for its use.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '44bb361e-5066-4cc3-a57b-0b099244a126',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_8b6d895f',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land loans',
          'format' => 'filtered_html',
          'safe_value' => 'land loans',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'préstamos de tierras',
          'format' => 'filtered_html',
          'safe_value' => 'préstamos de tierras',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'prêt foncier',
          'format' => 'filtered_html',
          'safe_value' => 'prêt foncier',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Land loans',
          'format' => 'plain_text',
          'safe_value' => 'Land loans',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Land loan is the temporary cession of land use, normally without rent payable for its use.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Land loan is the temporary cession of land use, normally without rent payable for its use.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Préstamo de tierras, es un contrato por el cual quien tiene el capital, en este caso denominado prestamista, lo pone a disposición de otra persona o de un agente económico, denominado prestatario. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Préstamo de tierras, es un contrato por el cual quien tiene el capital, en este caso denominado prestamista, lo pone a disposición de otra persona o de un agente económico, denominado prestatario.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Prêt foncier, est la cession temporaire de l\'usage d\'une terre. 
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Prêt foncier, est la cession temporaire de l\'usage d\'une terre.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Land loan is the temporary cession of land use, normally without rent payable for its use.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Land loan is the temporary cession of land use, normally without rent payable for its use.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3733,
          'revision_id' => 3733,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1431355068,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3733,
          'revision_id' => 3733,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3733,
          'revision_id' => 3733,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3733,
          'revision_id' => 3733,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3733,
          'revision_id' => 3733,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'land loans',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3733-0',
    'description_original' => 'Land loan is the temporary cession of land use, normally without rent payable for its use.',
  );
  $terms[] = array(
    'name' => 'scale',
    'description' => 'The scale is the relationship between the representation of an object on a plan or map, and its size in reality.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '46d76deb-ea26-4a65-aefc-0bb2c51be428',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_128d5eb6',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'scale',
          'format' => 'filtered_html',
          'safe_value' => 'scale',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'escala ',
          'format' => 'filtered_html',
          'safe_value' => 'escala ',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'échelle (cartographie)',
          'format' => 'filtered_html',
          'safe_value' => 'échelle (cartographie)',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Scale',
          'format' => 'plain_text',
          'safe_value' => 'Scale',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'The scale is the relationship between the representation of an object on a plan or map, and its size in reality.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>The scale is the relationship between the representation of an object on a plan or map, and its size in reality.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'La escala es la relación entre la representación de un fenómeno sobre una mapa, plano o carta, guardando una medida de proporción con la realidad. Entre más detalle contenga un mapa, plano o carta, su escala es mayor. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>La escala es la relación entre la representación de un fenómeno sobre una mapa, plano o carta, guardando una medida de proporción con la realidad. Entre más detalle contenga un mapa, plano o carta, su escala es mayor.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'L\'échelle est le rapport entre le représentation des phénomènes sur la carte (ou le plan) et leur mesure dans la réalité. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>L\'échelle est le rapport entre le représentation des phénomènes sur la carte (ou le plan) et leur mesure dans la réalité.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'The scale is the relationship between the representation of an object on a plan or map, and its size in reality.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>The scale is the relationship between the representation of an object on a plan or map, and its size in reality.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3769,
          'revision_id' => 3769,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3769,
          'revision_id' => 3769,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3769,
          'revision_id' => 3769,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3769,
          'revision_id' => 3769,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3769,
          'revision_id' => 3769,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'scale',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3769-0',
    'description_original' => 'The scale is the relationship between the representation of an object on a plan or map, and its size in reality.',
  );
  $terms[] = array(
    'name' => 'land rent',
    'description' => 'in practical terms rent is the payment for the hire of land and buildings and is a function of the supply and demand for that particular type of property in that particular location.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '46fc5f3a-d5a9-4041-8f9b-a50d5763dbba',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_7bea427c',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land rent',
          'format' => 'filtered_html',
          'safe_value' => 'land rent',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'renta de la tierra',
          'format' => 'filtered_html',
          'safe_value' => 'renta de la tierra',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'rente foncière',
          'format' => 'filtered_html',
          'safe_value' => 'rente foncière',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Land rent',
          'format' => 'plain_text',
          'safe_value' => 'Land rent',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'in practical terms rent is the payment for the hire of land and buildings and is a function of the supply and demand for that particular type of property in that particular location.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>in practical terms rent is the payment for the hire of land and buildings and is a function of the supply and demand for that particular type of property in that particular location.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Renta, es la utilidad o beneficio que rinde periódicamente una cosa, o lo que de ella se cobra. Es lo que paga un arrendatario, en dinero o frutos. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Renta, es la utilidad o beneficio que rinde periódicamente una cosa, o lo que de ella se cobra. Es lo que paga un arrendatario, en dinero o frutos.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'La rente est le sur-revenu d\'un facteur de production. Plus précisément, c\'est le revenu périodique, provenant d\'une source autre que le travail (aliénation d\'un bien, placement d\'un capital, etc.) qui est le plus souvent calcule en argent, parfois en nature. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>La rente est le sur-revenu d\'un facteur de production. Plus précisément, c\'est le revenu périodique, provenant d\'une source autre que le travail (aliénation d\'un bien, placement d\'un capital, etc.) qui est le plus souvent calcule en argent, parfois en nature.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'in practical terms rent is the payment for the hire of land and buildings and is a function of the supply and demand for that particular type of property in that particular location.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>in practical terms rent is the payment for the hire of land and buildings and is a function of the supply and demand for that particular type of property in that particular location.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3734,
          'revision_id' => 3734,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1431355068,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3734,
          'revision_id' => 3734,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3734,
          'revision_id' => 3734,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3734,
          'revision_id' => 3734,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3734,
          'revision_id' => 3734,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'land rent',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3734-0',
    'description_original' => 'in practical terms rent is the payment for the hire of land and buildings and is a function of the supply and demand for that particular type of property in that particular location.',
  );
  $terms[] = array(
    'name' => 'notary',
    'description' => 'The notary is both a conveyancing lawyer and a public official responsible for seeing that the conveyance is properly undertaken. The notary is a vital part of the system of land transactions in many jurisdictions in continental Europe. The notary is bound by a strict code of ethics, enforced by the relevant national bodies.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '497e8f59-4c0d-41be-8e17-2458d384535f',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_72efbdb8',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'notary',
          'format' => 'filtered_html',
          'safe_value' => 'notary',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'notario',
          'format' => 'filtered_html',
          'safe_value' => 'notario',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'notaire',
          'format' => 'filtered_html',
          'safe_value' => 'notaire',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Notary',
          'format' => 'plain_text',
          'safe_value' => 'Notary',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'The notary is both a conveyancing lawyer and a public official responsible for seeing that the conveyance is properly undertaken. The notary is a vital part of the system of land transactions in many jurisdictions in continental Europe. The notary is bound by a strict code of ethics, enforced by the relevant national bodies.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>The notary is both a conveyancing lawyer and a public official responsible for seeing that the conveyance is properly undertaken. The notary is a vital part of the system of land transactions in many jurisdictions in continental Europe. The notary is bound by a strict code of ethics, enforced by the relevant national bodies.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Notario, es el funcionario público autorizado para dar fe de los contratos, testamentos y otros actos extrajudiciales, conforme con las leyes. Puede ser igualmente consejero de las partes para la administración del patrimonio. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Notario, es el funcionario público autorizado para dar fe de los contratos, testamentos y otros actos extrajudiciales, conforme con las leyes. Puede ser igualmente consejero de las partes para la administración del patrimonio.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Notaire, est le titulaire d\'une charge qu\'il exerce à titre libéral et sous sa responsabilité personnelle. Il reçoit délégation pour établir les actes authentiques. Cette authenticité en garantit la valeur juridique (légalité de l\'acte, identification des parties et des biens, constat de l\'accord des parties). Le notaire est également le conseil des parties pour la gestion de leur patrimoine. 
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Notaire, est le titulaire d\'une charge qu\'il exerce à titre libéral et sous sa responsabilité personnelle. Il reçoit délégation pour établir les actes authentiques. Cette authenticité en garantit la valeur juridique (légalité de l\'acte, identification des parties et des biens, constat de l\'accord des parties). Le notaire est également le conseil des parties pour la gestion de leur patrimoine.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'The notary is both a conveyancing lawyer and a public official responsible for seeing that the conveyance is properly undertaken. The notary is a vital part of the system of land transactions in many jurisdictions in continental Europe. The notary is bound by a strict code of ethics, enforced by the relevant national bodies.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>The notary is both a conveyancing lawyer and a public official responsible for seeing that the conveyance is properly undertaken. The notary is a vital part of the system of land transactions in many jurisdictions in continental Europe. The notary is bound by a strict code of ethics, enforced by the relevant national bodies.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3746,
          'revision_id' => 3746,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3746,
          'revision_id' => 3746,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3746,
          'revision_id' => 3746,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3746,
          'revision_id' => 3746,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3746,
          'revision_id' => 3746,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'notary',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3746-0',
    'description_original' => 'The notary is both a conveyancing lawyer and a public official responsible for seeing that the conveyance is properly undertaken. The notary is a vital part of the system of land transactions in many jurisdictions in continental Europe. The notary is bound by a strict code of ethics, enforced by the relevant national bodies.',
  );
  $terms[] = array(
    'name' => 'indigenous tenure',
    'description' => 'Specific land access and land use principles, in force in particular traditional ethnic groups. ',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4b609bed-6146-444a-95b4-cf57ce6a0d11',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_a291ae58',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'indigenous tenure',
          'format' => 'filtered_html',
          'safe_value' => 'indigenous tenure',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'tenencia de tierras indígenas',
          'format' => 'filtered_html',
          'safe_value' => 'tenencia de tierras indígenas',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'tenure foncière indigène',
          'format' => 'filtered_html',
          'safe_value' => 'tenure foncière indigène',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'indigenous tenure',
          'format' => 'plain_text',
          'safe_value' => 'indigenous tenure',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Specific land access and land use principles, in force in particular traditional ethnic groups. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Specific land access and land use principles, in force in particular traditional ethnic groups.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Rapport de droit réel entre les personnes et un fonds de terre, dans les sociétés traditionnelles.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Rapport de droit réel entre les personnes et un fonds de terre, dans les sociétés traditionnelles.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Specific land access and land use principles, in force in particular traditional ethnic groups. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Specific land access and land use principles, in force in particular traditional ethnic groups.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3721,
          'revision_id' => 3721,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1431355068,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3721,
          'revision_id' => 3721,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3721,
          'revision_id' => 3721,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3721,
          'revision_id' => 3721,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3721,
          'revision_id' => 3721,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'indigenous tenure',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3721-0',
    'description_original' => 'Specific land access and land use principles, in force in particular traditional ethnic groups. ',
  );
  $terms[] = array(
    'name' => 'Indigenous & Community Land Rights',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4c8373c6-8fb9-4439-af16-a8aa5c9a8138',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'themes',
    'field_related_topics' => array(
      'und' => array(
        0 => array(
          'tid' => '339c8905-0e1b-4599-8831-1a9973717948',
        ),
        1 => array(
          'tid' => 'acdbd82a-f6e5-462f-932c-1cb848360336',
        ),
        2 => array(
          'tid' => '5e573bf4-a5e4-4eaa-bef1-d78a217f8e12',
        ),
        3 => array(
          'tid' => 'f5b1524f-72c6-4574-9f5e-8cca9c33877d',
        ),
        4 => array(
          'tid' => 'c15a4f33-9704-48f0-b354-e6bc0a021dad',
        ),
        5 => array(
          'tid' => 'cc9a4931-94e9-49b4-b3b4-e4fa582ae73c',
        ),
        6 => array(
          'tid' => '03267af4-c264-4e0d-a04a-22ce90ef099b',
        ),
        7 => array(
          'tid' => '5c7c94f4-a902-4db9-990e-98cc5de45875',
        ),
        8 => array(
          'tid' => 'c97f75b3-5c9e-45c2-bd1d-b5e206481e78',
        ),
        9 => array(
          'tid' => '4b609bed-6146-444a-95b4-cf57ce6a0d11',
        ),
        10 => array(
          'tid' => 'bff5e1d0-ff34-43c4-b96b-715dcdf18808',
        ),
        11 => array(
          'tid' => 'c661f52c-b87f-424a-b26a-fdfa9aea1150',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7346,
          'revision_id' => 7346,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1461595473,
          'changed' => 1461595473,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'English',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'languages',
    'field_machine_name' => array(),
    'field_machine_name_2' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'English',
          'format' => NULL,
          'safe_value' => 'English',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 540,
          'revision_id' => 540,
          'language' => 'und',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1461147771,
          'changed' => 1461147771,
        ),
      ),
    ),
    'name_original' => 'English',
    'entity_translation_handler_id' => 'taxonomy_term-eid-540-0',
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'Coming soon',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '4ee0ea4c-ab0f-48cf-89df-ee1100e656e3',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'debate_status',
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 537,
          'revision_id' => 537,
          'language' => 'und',
          'source' => '',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461163450,
          'changed' => 1461163450,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'agroforestry systems',
    'description' => 'An agroforestry system is a form of multiple land use where woody perennials (trees, shrubs, bamboos, palm trees, woody lianas) are grown on the same land management unit with crops and/or animals.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5253e548-3a31-4dbf-b391-0c7c72caff4d',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_330982',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'agroforestry systems',
          'format' => 'filtered_html',
          'safe_value' => 'agroforestry systems',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'sistemas agroforestales',
          'format' => 'filtered_html',
          'safe_value' => 'sistemas agroforestales',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'systèmes agroforestiers',
          'format' => 'filtered_html',
          'safe_value' => 'systèmes agroforestiers',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'agroforestry systems',
          'format' => 'plain_text',
          'safe_value' => 'agroforestry systems',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'An agroforestry system is a form of multiple land use where woody perennials (trees, shrubs, bamboos, palm trees, woody lianas) are grown on the same land management unit with crops and/or animals.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>An agroforestry system is a form of multiple land use where woody perennials (trees, shrubs, bamboos, palm trees, woody lianas) are grown on the same land management unit with crops and/or animals.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'An agroforestry system is a form of multiple land use where woody perennials (trees, shrubs, bamboos, palm trees, woody lianas) are grown on the same land management unit with crops and/or animals.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>An agroforestry system is a form of multiple land use where woody perennials (trees, shrubs, bamboos, palm trees, woody lianas) are grown on the same land management unit with crops and/or animals.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3790,
          'revision_id' => 3790,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3790,
          'revision_id' => 3790,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3790,
          'revision_id' => 3790,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3790,
          'revision_id' => 3790,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3790,
          'revision_id' => 3790,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'agroforestry systems',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3790-0',
    'description_original' => 'An agroforestry system is a form of multiple land use where woody perennials (trees, shrubs, bamboos, palm trees, woody lianas) are grown on the same land management unit with crops and/or animals.',
  );
  $terms[] = array(
    'name' => 'occupation',
    'description' => 'Occupation is the physical disposition of land.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '52eeec74-4ee5-4d34-bc57-1ebfdc5ff6f1',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_9044ce39',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'occupation',
          'format' => 'filtered_html',
          'safe_value' => 'occupation',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'ocupación',
          'format' => 'filtered_html',
          'safe_value' => 'ocupación',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'occupation',
          'format' => 'filtered_html',
          'safe_value' => 'occupation',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Occupation',
          'format' => 'plain_text',
          'safe_value' => 'Occupation',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Occupation is the physical disposition of land.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Occupation is the physical disposition of land.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Occupation, est le fait d\'utiliser un bien ou d\'y être installe, avec ou sans titre légal. 
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Occupation, est le fait d\'utiliser un bien ou d\'y être installe, avec ou sans titre légal.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Occupation is the physical disposition of land.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Occupation is the physical disposition of land.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3747,
          'revision_id' => 3747,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3747,
          'revision_id' => 3747,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3747,
          'revision_id' => 3747,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3747,
          'revision_id' => 3747,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3747,
          'revision_id' => 3747,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'occupation',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3747-0',
    'description_original' => 'Occupation is the physical disposition of land.',
  );
  $terms[] = array(
    'name' => 'Large-scale Land Acquisitions',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '54e62811-e826-44cf-a2f7-49b76cf40087',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'themes',
    'field_related_topics' => array(
      'und' => array(
        0 => array(
          'tid' => '3e8370bb-1ef7-46d2-afeb-86edad772c95',
        ),
        1 => array(
          'tid' => '2c7396db-a39f-4f51-90c0-0c06adc1a7ec',
        ),
        2 => array(
          'tid' => 'c6f94f76-f677-4979-9a0c-8c485d460b41',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7349,
          'revision_id' => 7349,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1461596231,
          'changed' => 1461596231,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'grazing lands',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5848a214-8158-4578-a6b4-0cf9187672cb',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_3369',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'grazing lands',
          'format' => 'filtered_html',
          'safe_value' => 'grazing lands',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Tierras de pastoreo',
          'format' => 'filtered_html',
          'safe_value' => 'Tierras de pastoreo',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Terre de pâturage',
          'format' => 'filtered_html',
          'safe_value' => 'Terre de pâturage',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Área de pastoreio',
          'format' => 'filtered_html',
          'safe_value' => 'Área de pastoreio',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'grazing lands',
          'format' => 'plain_text',
          'safe_value' => 'grazing lands',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3800,
          'revision_id' => 3800,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3800,
          'revision_id' => 3800,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3800,
          'revision_id' => 3800,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3800,
          'revision_id' => 3800,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3800,
          'revision_id' => 3800,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'grazing lands',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3800-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'gender equity in access to land',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '59bf9a9e-726d-4ca3-9a5c-7afc975d250e',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_1dfe5bfe',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'gender equity in access to land',
          'format' => 'filtered_html',
          'safe_value' => 'gender equity in access to land',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7450,
          'revision_id' => 7450,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1460557403,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7450,
          'revision_id' => 7450,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7450,
          'revision_id' => 7450,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7450,
          'revision_id' => 7450,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7450,
          'revision_id' => 7450,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'gender equity in access to land',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7450-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'parcel plan',
    'description' => 'A parcel plan is generally a large scale map of an area showing all of the property parcels and their use, the boundaries and the distance between them and the buildings and improvements. ',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5b9577a3-8eaf-42a6-a0e0-90daa8603189',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_2ee25bd9',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'parcel plan',
          'format' => 'filtered_html',
          'safe_value' => 'parcel plan',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'plan parcelario',
          'format' => 'filtered_html',
          'safe_value' => 'plan parcelario',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'plan parcellaire',
          'format' => 'filtered_html',
          'safe_value' => 'plan parcellaire',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Parcel plan',
          'format' => 'plain_text',
          'safe_value' => 'Parcel plan',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'A parcel plan is generally a large scale map of an area showing all of the property parcels and their use, the boundaries and the distance between them and the buildings and improvements. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>A parcel plan is generally a large scale map of an area showing all of the property parcels and their use, the boundaries and the distance between them and the buildings and improvements.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Un plano parcelario, o carta predial, es un documento gráfico de registro de predios o parcelas, generalmente a gran escala, en el que figuran todas las parcelas en propiedad o explotación, con indicación de los respectivos límites, mojones y distancias entre éstos . las edificaciones son igualmente representadas, junto con las vías de comunicación. El plano catastral es un plano parcelario. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Un plano parcelario, o carta predial, es un documento gráfico de registro de predios o parcelas, generalmente a gran escala, en el que figuran todas las parcelas en propiedad o explotación, con indicación de los respectivos límites, mojones y distancias entre éstos . las edificaciones son igualmente representadas, junto con las vías de comunicación. El plano catastral es un plano parcelario.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Plan parcellaire, est un plan à grande échelle, où ont reportées les propriétés et leurs limites ainsi que leurs usages respectifs. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Plan parcellaire, est un plan à grande échelle, où ont reportées les propriétés et leurs limites ainsi que leurs usages respectifs.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'A parcel plan is generally a large scale map of an area showing all of the property parcels and their use, the boundaries and the distance between them and the buildings and improvements. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>A parcel plan is generally a large scale map of an area showing all of the property parcels and their use, the boundaries and the distance between them and the buildings and improvements.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3750,
          'revision_id' => 3750,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3750,
          'revision_id' => 3750,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3750,
          'revision_id' => 3750,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3750,
          'revision_id' => 3750,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3750,
          'revision_id' => 3750,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'parcel plan',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3750-0',
    'description_original' => 'A parcel plan is generally a large scale map of an area showing all of the property parcels and their use, the boundaries and the distance between them and the buildings and improvements. ',
  );
  $terms[] = array(
    'name' => 'communal land',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5c7c94f4-a902-4db9-990e-98cc5de45875',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'communal land',
          'format' => NULL,
          'safe_value' => 'communal land',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7327,
          'revision_id' => 7327,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1455265702,
          'changed' => 1455265702,
        ),
      ),
    ),
    'name_original' => 'communal land',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7327-0',
    'description_original' => NULL,
  );
  $terms[] = array(
    'name' => 'scrublands',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5e0b272e-94fa-42ac-98e7-ca5761f2af6b',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_6887',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'scrublands',
          'format' => 'filtered_html',
          'safe_value' => 'scrublands',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Tierras de matorral',
          'format' => 'filtered_html',
          'safe_value' => 'Tierras de matorral',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Brousse',
          'format' => 'filtered_html',
          'safe_value' => 'Brousse',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Área de matagal',
          'format' => 'filtered_html',
          'safe_value' => 'Área de matagal',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'scrublands',
          'format' => 'plain_text',
          'safe_value' => 'scrublands',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3844,
          'revision_id' => 3844,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3844,
          'revision_id' => 3844,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3844,
          'revision_id' => 3844,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3844,
          'revision_id' => 3844,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3844,
          'revision_id' => 3844,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'scrublands',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3844-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'indigenous land rights',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5e573bf4-a5e4-4eaa-bef1-d78a217f8e12',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_d42b49e7',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'indigenous land rights',
          'format' => 'filtered_html',
          'safe_value' => 'indigenous land rights',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'indigenous land rights',
          'format' => NULL,
          'safe_value' => 'indigenous land rights',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7245,
          'revision_id' => 7245,
          'language' => 'en',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456257976,
          'changed' => 1456257976,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7245,
          'revision_id' => 7245,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7245,
          'revision_id' => 7245,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7245,
          'revision_id' => 7245,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7245,
          'revision_id' => 7245,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'indigenous land rights',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7245-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Open',
    'description' => NULL,
    'format' => NULL,
    'weight' => 1,
    'uuid' => '5e5e6046-7a3f-4916-bd6b-6b5f845687b2',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'debate_status',
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 538,
          'revision_id' => 538,
          'language' => 'und',
          'source' => '',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461163450,
          'changed' => 1461163450,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'land management',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5f515039-3e53-43b5-b2a1-32ca4b6f9632',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_24866',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land management',
          'format' => 'filtered_html',
          'safe_value' => 'land management',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Ordenación de tierras',
          'format' => 'filtered_html',
          'safe_value' => 'Ordenación de tierras',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Gestion foncière',
          'format' => 'filtered_html',
          'safe_value' => 'Gestion foncière',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Administração fundiária',
          'format' => 'filtered_html',
          'safe_value' => 'Administração fundiária',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land management',
          'format' => 'plain_text',
          'safe_value' => 'land management',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3834,
          'revision_id' => 3834,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3834,
          'revision_id' => 3834,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3834,
          'revision_id' => 3834,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3834,
          'revision_id' => 3834,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3834,
          'revision_id' => 3834,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'land management',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3834-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'rural population',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5fb9de42-f11d-45f3-b58c-96dcda4c7368',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_6705',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'rural population',
          'format' => 'filtered_html',
          'safe_value' => 'rural population',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Población rural',
          'format' => 'filtered_html',
          'safe_value' => 'Población rural',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Population rurale',
          'format' => 'filtered_html',
          'safe_value' => 'Population rurale',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'População rural',
          'format' => 'filtered_html',
          'safe_value' => 'População rural',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'rural population',
          'format' => 'plain_text',
          'safe_value' => 'rural population',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3868,
          'revision_id' => 3868,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3868,
          'revision_id' => 3868,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3868,
          'revision_id' => 3868,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3868,
          'revision_id' => 3868,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3868,
          'revision_id' => 3868,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'rural population',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3868-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'deforestation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6018cfd1-4850-4d34-89dd-e8ef13bd1c05',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_15590',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'deforestation',
          'format' => 'filtered_html',
          'safe_value' => 'deforestation',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Deforestación',
          'format' => 'filtered_html',
          'safe_value' => 'Deforestación',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Déboisement',
          'format' => 'filtered_html',
          'safe_value' => 'Déboisement',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Desflorestação',
          'format' => 'filtered_html',
          'safe_value' => 'Desflorestação',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'deforestation',
          'format' => 'plain_text',
          'safe_value' => 'deforestation',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3862,
          'revision_id' => 3862,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3862,
          'revision_id' => 3862,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3862,
          'revision_id' => 3862,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3862,
          'revision_id' => 3862,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3862,
          'revision_id' => 3862,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'deforestation',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3862-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'pastoral lands',
    'description' => 'Pastoral land is land used by pastoralists and shepherds for grazing livestock.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '60f1c72e-7510-4bba-8813-837ba13fc3ab',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_8e487587',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'pastoral lands',
          'format' => 'filtered_html',
          'safe_value' => 'pastoral lands',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'tierras de pastoreo',
          'format' => 'filtered_html',
          'safe_value' => 'tierras de pastoreo',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'espace pastoral',
          'format' => 'filtered_html',
          'safe_value' => 'espace pastoral',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Pastoral lands',
          'format' => 'plain_text',
          'safe_value' => 'Pastoral lands',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Pastoral land is land used by pastoralists and shepherds for grazing livestock.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Pastoral land is land used by pastoralists and shepherds for grazing livestock.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Espace pastoral, est le support physique des ressources et des aménagements qui permettent l\'activité d\'élevage.
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Espace pastoral, est le support physique des ressources et des aménagements qui permettent l\'activité d\'élevage.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Pastoral land is land used by pastoralists and shepherds for grazing livestock.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Pastoral land is land used by pastoralists and shepherds for grazing livestock.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3751,
          'revision_id' => 3751,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3751,
          'revision_id' => 3751,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3751,
          'revision_id' => 3751,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3751,
          'revision_id' => 3751,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3751,
          'revision_id' => 3751,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'pastoral lands',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3751-0',
    'description_original' => 'Pastoral land is land used by pastoralists and shepherds for grazing livestock.',
  );
  $terms[] = array(
    'name' => 'free trade agreements',
    'description' => 'International consensus on liberalization of goods exchange. ',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '62f639da-4e63-4cbc-9cfd-de44e0c79439',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_3ffda84e',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'free trade agreements',
          'format' => 'filtered_html',
          'safe_value' => 'free trade agreements',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'accord de libre échange commercial ',
          'format' => 'filtered_html',
          'safe_value' => 'accord de libre échange commercial ',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Free trade agreements',
          'format' => 'plain_text',
          'safe_value' => 'Free trade agreements',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'International consensus on liberalization of goods exchange. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>International consensus on liberalization of goods exchange.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Application des thèses libérales de suppression des entraves aux échanges commerciaux.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Application des thèses libérales de suppression des entraves aux échanges commerciaux.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'International consensus on liberalization of goods exchange. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>International consensus on liberalization of goods exchange.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3713,
          'revision_id' => 3713,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1431355068,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3713,
          'revision_id' => 3713,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3713,
          'revision_id' => 3713,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3713,
          'revision_id' => 3713,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3713,
          'revision_id' => 3713,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'free trade agreements',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3713-0',
    'description_original' => 'International consensus on liberalization of goods exchange. ',
  );
  $terms[] = array(
    'name' => 'Rangelands, Drylands & Pastoralism',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '647c2b63-84c3-4e42-9575-a5676e7fd48c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'themes',
    'field_related_topics' => array(
      'und' => array(
        0 => array(
          'tid' => '0d92bcc5-4916-4968-9de2-3c31a35a3ec8',
        ),
        1 => array(
          'tid' => '83d6a8cb-6b26-407b-a41d-a841c57950bb',
        ),
        2 => array(
          'tid' => '94f8635f-68be-4c04-86da-6dd69ab326f4',
        ),
        3 => array(
          'tid' => '60f1c72e-7510-4bba-8813-837ba13fc3ab',
        ),
        4 => array(
          'tid' => '1d24d04b-20f0-431d-9b22-9ff43366d69b',
        ),
        5 => array(
          'tid' => 'ac2d7f08-8dc2-45de-87e9-469471a1b9dd',
        ),
        6 => array(
          'tid' => '6554a494-6844-447b-87e5-54606182f196',
        ),
        7 => array(
          'tid' => '5848a214-8158-4578-a6b4-0cf9187672cb',
        ),
        8 => array(
          'tid' => '0a13c87c-e49d-4e3f-ab22-f6c82e6c7609',
        ),
        9 => array(
          'tid' => '1956c0a5-89eb-4948-bf82-f09d8c7d917c',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7345,
          'revision_id' => 7345,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1461596336,
          'changed' => 1461596336,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'security of tenure (land)',
    'description' => 'Security of tenure is the guarantee of continued occupancy or use rights whether by virtue of formal rights, customary rules or other forms of assurance.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '652eed13-7165-4177-a780-0e2e77b0cf61',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_7fc44e33',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'security of tenure (land)',
          'format' => 'filtered_html',
          'safe_value' => 'security of tenure (land)',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'reconocimiento de la posesión (de la tierra)',
          'format' => 'filtered_html',
          'safe_value' => 'reconocimiento de la posesión (de la tierra)',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'sécurité de tenure (foncière)',
          'format' => 'filtered_html',
          'safe_value' => 'sécurité de tenure (foncière)',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'security of tenure (land)',
          'format' => NULL,
          'safe_value' => 'security of tenure (land)',
        ),
      ),
    ),
    'synonyms_synonyms' => array(
      'und' => array(
        0 => array(
          'value' => 'land tenure security',
          'format' => NULL,
          'safe_value' => 'land tenure security',
        ),
        1 => array(
          'value' => 'secure land tenure',
          'format' => NULL,
          'safe_value' => 'secure land tenure',
        ),
      ),
    ),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Security of tenure is the guarantee of continued occupancy or use rights whether by virtue of formal rights, customary rules or other forms of assurance.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Security of tenure is the guarantee of continued occupancy or use rights whether by virtue of formal rights, customary rules or other forms of assurance.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Sécurité de tenure (foncière), l\'assurance que les droits fonciers d\'une personne ou d\'une communauté. 
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Sécurité de tenure (foncière), l\'assurance que les droits fonciers d\'une personne ou d\'une communauté.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Security of tenure is the guarantee of continued occupancy or use rights whether by virtue of formal rights, customary rules or other forms of assurance.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Security of tenure is the guarantee of continued occupancy or use rights whether by virtue of formal rights, customary rules or other forms of assurance.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7213,
          'revision_id' => 7213,
          'language' => 'en',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456424400,
          'changed' => 1456424400,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7213,
          'revision_id' => 7213,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557400,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7213,
          'revision_id' => 7213,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557400,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7213,
          'revision_id' => 7213,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7213,
          'revision_id' => 7213,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'security of tenure (land)',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7213-0',
    'description_original' => 'Security of tenure is the guarantee of continued occupancy or use rights whether by virtue of formal rights, customary rules or other forms of assurance.',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'forest lands',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '65328f0f-acfd-4923-95e3-7ac9a5df25d9',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'forest lands',
          'format' => NULL,
          'safe_value' => 'forest lands',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7301,
          'revision_id' => 7301,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1454315827,
          'changed' => 1454315827,
        ),
      ),
    ),
    'name_original' => 'forest lands',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7301-0',
    'description_original' => NULL,
  );
  $terms[] = array(
    'name' => 'land law',
    'description' => 'Land law is the body of law dealing with land, its definition, ownership and use whether urban or rural.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6533f9c0-c024-4671-9545-008b24bee67e',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_573abb9f',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land law',
          'format' => 'filtered_html',
          'safe_value' => 'land law',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'derecho agrario',
          'format' => 'filtered_html',
          'safe_value' => 'derecho agrario',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'loi foncière',
          'format' => 'filtered_html',
          'safe_value' => 'loi foncière',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land law',
          'format' => 'plain_text',
          'safe_value' => 'land law',
        ),
      ),
    ),
    'synonyms_synonyms' => array(
      'und' => array(
        0 => array(
          'value' => 'land legislation',
          'format' => NULL,
          'safe_value' => 'land legislation',
        ),
      ),
    ),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Land law is the body of law dealing with land, its definition, ownership and use whether urban or rural.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Land law is the body of law dealing with land, its definition, ownership and use whether urban or rural.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Derecho de tierras o derecho agrario, desde el punto di vista estrictamente jurídico, es el conjunto de disposiciones y reglas relativas al acceso de tierras, y de su administración. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Derecho de tierras o derecho agrario, desde el punto di vista estrictamente jurídico, es el conjunto de disposiciones y reglas relativas al acceso de tierras, y de su administración.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Droit foncier, concerne le corps de lois ayant trait au sol, à sa propriété, à sa utilisation. 
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Droit foncier, concerne le corps de lois ayant trait au sol, à sa propriété, à sa utilisation.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Land law is the body of law dealing with land, its definition, ownership and use whether urban or rural.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Land law is the body of law dealing with land, its definition, ownership and use whether urban or rural.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3732,
          'revision_id' => 3732,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1456426041,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3732,
          'revision_id' => 3732,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3732,
          'revision_id' => 3732,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3732,
          'revision_id' => 3732,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3732,
          'revision_id' => 3732,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'land law',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3732-0',
    'description_original' => 'Land law is the body of law dealing with land, its definition, ownership and use whether urban or rural.',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'grazing contracts',
    'description' => 'A grazing contract or licence is a legal contract for an agreement, for example between a farmer and a grazier, specifying the terms under which the latter can use the identified land of the former for grazing purposes.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6554a494-6844-447b-87e5-54606182f196',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_bac66d94',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'grazing contracts',
          'format' => 'filtered_html',
          'safe_value' => 'grazing contracts',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'contratos de pastoreo ',
          'format' => 'filtered_html',
          'safe_value' => 'contratos de pastoreo ',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'contrat de pâturage',
          'format' => 'filtered_html',
          'safe_value' => 'contrat de pâturage',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Grazing contracts',
          'format' => 'plain_text',
          'safe_value' => 'Grazing contracts',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'A grazing contract or licence is a legal contract for an agreement, for example between a farmer and a grazier, specifying the terms under which the latter can use the identified land of the former for grazing purposes.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>A grazing contract or licence is a legal contract for an agreement, for example between a farmer and a grazier, specifying the terms under which the latter can use the identified land of the former for grazing purposes.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Contrato de pastoreo, hace referencia a un acuerdo legalizado, en el cual un agricultor y un ganadero pactan el uso relativo de un terreno para el pastoreo, generalmente sobre predios que no serán sometidos a la agricultura en un determinado tiempo del año.  ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Contrato de pastoreo, hace referencia a un acuerdo legalizado, en el cual un agricultor y un ganadero pactan el uso relativo de un terreno para el pastoreo, generalmente sobre predios que no serán sometidos a la agricultura en un determinado tiempo del año.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Le contrat de pâturage renvoie à un accord légalise, liant par exemple un cultivateur et un éleveur (éventuellement représentants de groupes différents) accord relatif au pâturage d\'une terre non cultivée. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Le contrat de pâturage renvoie à un accord légalise, liant par exemple un cultivateur et un éleveur (éventuellement représentants de groupes différents) accord relatif au pâturage d\'une terre non cultivée.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'A grazing contract or licence is a legal contract for an agreement, for example between a farmer and a grazier, specifying the terms under which the latter can use the identified land of the former for grazing purposes.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>A grazing contract or licence is a legal contract for an agreement, for example between a farmer and a grazier, specifying the terms under which the latter can use the identified land of the former for grazing purposes.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3715,
          'revision_id' => 3715,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1431355068,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3715,
          'revision_id' => 3715,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3715,
          'revision_id' => 3715,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3715,
          'revision_id' => 3715,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3715,
          'revision_id' => 3715,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'grazing contracts',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3715-0',
    'description_original' => 'A grazing contract or licence is a legal contract for an agreement, for example between a farmer and a grazier, specifying the terms under which the latter can use the identified land of the former for grazing purposes.',
  );
  $terms[] = array(
    'name' => 'Landportal Partner',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6694feb9-cb21-4bc4-b6fe-f4b41e96728a',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_relation',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6119,
          'revision_id' => 6119,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1442819270,
          'changed' => 1442819270,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Land & Gender',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6834ca25-ae73-4d0d-b257-e3aaa0b7154c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'themes',
    'field_related_topics' => array(
      'und' => array(
        0 => array(
          'tid' => '990a1ba9-8e6b-467d-b3ab-836cb2ef2098',
        ),
        1 => array(
          'tid' => 'c214617a-6bd6-4662-a5f2-b98e7740019f',
        ),
        2 => array(
          'tid' => 'b0f06864-74ad-47c5-be33-ddcbc8f2b7f8',
        ),
        3 => array(
          'tid' => '6f22d7fe-e23b-4a4e-9995-a5b16def62bc',
        ),
        4 => array(
          'tid' => '12212d7f-9c3f-46ee-aeae-d8cf08e53528',
        ),
        5 => array(
          'tid' => '96b52323-e2a2-4b03-8a1c-457661ad57af',
        ),
        6 => array(
          'tid' => '4386102f-5b35-42fe-9d84-be0f221d29c9',
        ),
        7 => array(
          'tid' => 'aff2815f-7bb3-43ec-9ea7-64b0027dfcd3',
        ),
        8 => array(
          'tid' => 'b7312d35-e143-4a91-a88d-09413aef749c',
        ),
        9 => array(
          'tid' => '59bf9a9e-726d-4ca3-9a5c-7afc975d250e',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7347,
          'revision_id' => 7347,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1461595877,
          'changed' => 1461595877,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'geomatics',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '698f91b4-0017-42d1-937d-b415a2dc196a',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_92332',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'geomatics',
          'format' => 'filtered_html',
          'safe_value' => 'geomatics',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'geomática',
          'format' => 'filtered_html',
          'safe_value' => 'geomática',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'géomatique',
          'format' => 'filtered_html',
          'safe_value' => 'géomatique',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Geomática',
          'format' => 'filtered_html',
          'safe_value' => 'Geomática',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'geomatics',
          'format' => 'plain_text',
          'safe_value' => 'geomatics',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3818,
          'revision_id' => 3818,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3818,
          'revision_id' => 3818,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3818,
          'revision_id' => 3818,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3818,
          'revision_id' => 3818,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3818,
          'revision_id' => 3818,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'geomatics',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3818-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'land information systems',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6b47d013-ba88-4e6f-81b7-f4a071768c5f',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_9000096',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land information systems',
          'format' => 'filtered_html',
          'safe_value' => 'land information systems',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Sistemas de información de tierras',
          'format' => 'filtered_html',
          'safe_value' => 'Sistemas de información de tierras',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Systèmes d\'information foncière',
          'format' => 'filtered_html',
          'safe_value' => 'Systèmes d&#039;information foncière',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Sistema de informação de terras',
          'format' => 'filtered_html',
          'safe_value' => 'Sistema de informação de terras',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land information systems',
          'format' => 'plain_text',
          'safe_value' => 'land information systems',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3830,
          'revision_id' => 3830,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3830,
          'revision_id' => 3830,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3830,
          'revision_id' => 3830,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3830,
          'revision_id' => 3830,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3830,
          'revision_id' => 3830,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'land information systems',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3830-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'cadastres',
    'description' => 'A public record, survey, or map of the value, extent, and ownership of land as a basis of taxation.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6be60571-63a4-402e-b519-f1fa37fa59cd',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_1177',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'cadastres',
          'format' => 'filtered_html',
          'safe_value' => 'cadastres',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Catastros',
          'format' => 'filtered_html',
          'safe_value' => 'Catastros',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Cadastre',
          'format' => 'filtered_html',
          'safe_value' => 'Cadastre',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Cadastro',
          'format' => 'filtered_html',
          'safe_value' => 'Cadastro',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'cadastres',
          'format' => 'plain_text',
          'safe_value' => 'cadastres',
        ),
      ),
    ),
    'synonyms_synonyms' => array(
      'und' => array(
        0 => array(
          'value' => 'cadastre',
          'format' => NULL,
          'safe_value' => 'cadastre',
        ),
      ),
    ),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'A public record, survey, or map of the value, extent, and ownership of land as a basis of taxation.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>A public record, survey, or map of the value, extent, and ownership of land as a basis of taxation.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'A public record, survey, or map of the value, extent, and ownership of land as a basis of taxation.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>A public record, survey, or map of the value, extent, and ownership of land as a basis of taxation.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3795,
          'revision_id' => 3795,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1455911031,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3795,
          'revision_id' => 3795,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3795,
          'revision_id' => 3795,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3795,
          'revision_id' => 3795,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3795,
          'revision_id' => 3795,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'cadastres',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3795-0',
    'description_original' => 'A public record, survey, or map of the value, extent, and ownership of land as a basis of taxation.',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'land policies',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6c990f0b-f385-4689-99a1-4e99b4ae5db3',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_195',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land policies',
          'format' => 'filtered_html',
          'safe_value' => 'land policies',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Política agraria',
          'format' => 'filtered_html',
          'safe_value' => 'Política agraria',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Politique foncière',
          'format' => 'filtered_html',
          'safe_value' => 'Politique foncière',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Política agrária',
          'format' => 'filtered_html',
          'safe_value' => 'Política agrária',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land policies',
          'format' => 'plain_text',
          'safe_value' => 'land policies',
        ),
      ),
    ),
    'synonyms_synonyms' => array(
      'und' => array(
        0 => array(
          'value' => 'land policy',
          'format' => NULL,
          'safe_value' => 'land policy',
        ),
      ),
    ),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3788,
          'revision_id' => 3788,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1456256272,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3788,
          'revision_id' => 3788,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3788,
          'revision_id' => 3788,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3788,
          'revision_id' => 3788,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3788,
          'revision_id' => 3788,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'land policies',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3788-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'green belts',
    'description' => 'Areas of land whose main purpose it to curb the outward expansion of a large urban area and in which development is strictly controlled.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6e5a7c32-b826-4fdc-95d1-ff5453883b2e',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_37720',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'green belts',
          'format' => 'filtered_html',
          'safe_value' => 'green belts',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Zonas verdes',
          'format' => 'filtered_html',
          'safe_value' => 'Zonas verdes',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Espace vert',
          'format' => 'filtered_html',
          'safe_value' => 'Espace vert',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Área verde urbana',
          'format' => 'filtered_html',
          'safe_value' => 'Área verde urbana',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'green belts',
          'format' => 'plain_text',
          'safe_value' => 'green belts',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Areas of land whose main purpose it to curb the outward expansion of a large urban area and in which development is strictly controlled.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Areas of land whose main purpose it to curb the outward expansion of a large urban area and in which development is strictly controlled.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Areas of land whose main purpose it to curb the outward expansion of a large urban area and in which development is strictly controlled.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Areas of land whose main purpose it to curb the outward expansion of a large urban area and in which development is strictly controlled.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3870,
          'revision_id' => 3870,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3870,
          'revision_id' => 3870,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3870,
          'revision_id' => 3870,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3870,
          'revision_id' => 3870,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3870,
          'revision_id' => 3870,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'green belts',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3870-0',
    'description_original' => 'Areas of land whose main purpose it to curb the outward expansion of a large urban area and in which development is strictly controlled.',
  );
  $terms[] = array(
    'name' => 'Land use, Management & Investment',
    'description' => '<p>The objective of land use planning is to ensure that land and its resources are used efficiently for the benefit of the wider economy and population, while protecting the environment. Land information is an essential tool for land use and spatial planning. It can be acquired through conventional land information systems. Land information systems may have various forms and varying levels of accuracy, depending on the purpose for which they were created: planning (delineation of properties and existing land use); legal (determination of legal ownership, registrations of transactions); taxation (determination of the assessed value of the land). Land information is usually provided by cadastres. They usually combine these three objectives (multipurpose cadastres) or only two of them. Cadastres must be descriptive, exhaustive and permanently updated. An updated cadastral system is usually required for the systematic registration of land titles.</p>

<p>[source:&nbsp;http://www.gltn.net/index.php/land-tools/themes/land-management-and-planning]</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6e6ab79d-bad7-425f-a719-93901e6f1027',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'domains',
    'field_related_topics' => array(
      'und' => array(
        0 => array(
          'tid' => 'bd657ba9-b442-4ef3-86c7-80379f9239e4',
        ),
        1 => array(
          'tid' => '5f515039-3e53-43b5-b2a1-32ca4b6f9632',
        ),
        2 => array(
          'tid' => 'd7a33fbf-5f74-4c95-b461-69a72f6e0769',
        ),
        3 => array(
          'tid' => '85235b18-1b64-42a9-8f1c-3189fc74087c',
        ),
        4 => array(
          'tid' => '5253e548-3a31-4dbf-b391-0c7c72caff4d',
        ),
        5 => array(
          'tid' => '26f862e0-b9df-4bb5-8178-a52be5ba65cf',
        ),
        6 => array(
          'tid' => '811f8040-064c-4f16-b422-39c9208a016a',
        ),
        7 => array(
          'tid' => 'e29e1469-a252-42d5-a8e5-ede7db10b66a',
        ),
        8 => array(
          'tid' => '06c23697-6305-4b2f-bf46-04f6b25d9ad6',
        ),
        9 => array(
          'tid' => '6be60571-63a4-402e-b519-f1fa37fa59cd',
        ),
        10 => array(
          'tid' => '7923fe1b-eaa0-40f3-9d28-3d9b4b03c417',
        ),
        11 => array(
          'tid' => 'c824b810-052c-491a-bfa0-fb8c3cbb3e6b',
        ),
        12 => array(
          'tid' => 'c15a4f33-9704-48f0-b354-e6bc0a021dad',
        ),
        13 => array(
          'tid' => '6018cfd1-4850-4d34-89dd-e8ef13bd1c05',
        ),
        14 => array(
          'tid' => 'cc5c16d9-d36a-4580-8ebf-7708d6725475',
        ),
        15 => array(
          'tid' => 'd90b23ad-6e66-4d42-afe6-5bac6d921a54',
        ),
        16 => array(
          'tid' => '0af65510-05b9-49c1-b04d-356df98ef517',
        ),
        17 => array(
          'tid' => '9f394331-4b1f-4b1a-b429-b785b011f80c',
        ),
        18 => array(
          'tid' => 'c2340e93-1076-4ecf-9a04-a070d3f77d87',
        ),
        19 => array(
          'tid' => '81260e71-964d-47ae-a44a-5e8b01f22755',
        ),
        20 => array(
          'tid' => 'a5d8e43f-2a0e-41a9-b35b-a58c8351ed7e',
        ),
        21 => array(
          'tid' => '698f91b4-0017-42d1-937d-b415a2dc196a',
        ),
        22 => array(
          'tid' => '9d0c7ab3-9bf5-4ee8-a0a2-2017447cfd06',
        ),
        23 => array(
          'tid' => '6554a494-6844-447b-87e5-54606182f196',
        ),
        24 => array(
          'tid' => '5848a214-8158-4578-a6b4-0cf9187672cb',
        ),
        25 => array(
          'tid' => 'ac2d7f08-8dc2-45de-87e9-469471a1b9dd',
        ),
        26 => array(
          'tid' => '6e5a7c32-b826-4fdc-95d1-ff5453883b2e',
        ),
        27 => array(
          'tid' => '0a13c87c-e49d-4e3f-ab22-f6c82e6c7609',
        ),
        28 => array(
          'tid' => 'c97f75b3-5c9e-45c2-bd1d-b5e206481e78',
        ),
        29 => array(
          'tid' => '4b609bed-6146-444a-95b4-cf57ce6a0d11',
        ),
        30 => array(
          'tid' => 'ce77bb1e-e800-4864-9c0e-e67f3dc816b6',
        ),
        31 => array(
          'tid' => '3e8370bb-1ef7-46d2-afeb-86edad772c95',
        ),
        32 => array(
          'tid' => '28f44231-1773-485a-b65d-764c683eb4c0',
        ),
        33 => array(
          'tid' => '3f41afef-1eec-437c-b8a8-f426af4a6de8',
        ),
        34 => array(
          'tid' => '97746d45-2db0-45b1-a037-c6eae85ae01f',
        ),
        35 => array(
          'tid' => '9b32b10d-b3f0-4f32-b8d0-e90640619036',
        ),
        36 => array(
          'tid' => '8cf95e12-39ef-474b-b73c-0a674fc9e546',
        ),
        37 => array(
          'tid' => '10223c15-5cec-4ffd-ba89-3c4d77b83a28',
        ),
        38 => array(
          'tid' => '6b47d013-ba88-4e6f-81b7-f4a071768c5f',
        ),
        39 => array(
          'tid' => '44bb361e-5066-4cc3-a57b-0b099244a126',
        ),
        40 => array(
          'tid' => '77c172d4-9a04-4c63-99e5-809d1224fd75',
        ),
        41 => array(
          'tid' => '9eaba07d-9709-4b5f-baec-105a13243490',
        ),
        42 => array(
          'tid' => '195eb77f-5538-4c0f-9a16-be01ba1f37a8',
        ),
        43 => array(
          'tid' => 'cd22c471-e564-419c-9e07-856dcc61b442',
        ),
        44 => array(
          'tid' => '0a42e234-a8c2-4d65-821f-ae4a491794c1',
        ),
        45 => array(
          'tid' => 'ec0ef9d7-ea84-49ad-81d8-937e4af9e87b',
        ),
        46 => array(
          'tid' => 'ab3030b5-54a6-4076-b94b-34a6363f75a8',
        ),
        47 => array(
          'tid' => 'ef917104-7e3d-45c6-a4c7-576ca182c9f7',
        ),
        48 => array(
          'tid' => '1956c0a5-89eb-4948-bf82-f09d8c7d917c',
        ),
        49 => array(
          'tid' => '497e8f59-4c0d-41be-8e17-2458d384535f',
        ),
        50 => array(
          'tid' => '5b9577a3-8eaf-42a6-a0e0-90daa8603189',
        ),
        51 => array(
          'tid' => '60f1c72e-7510-4bba-8813-837ba13fc3ab',
        ),
        52 => array(
          'tid' => 'a0459926-4909-4ff9-9f61-2911d3e949b0',
        ),
        53 => array(
          'tid' => '8b044a2a-7560-49c3-9fcc-dc43c937d0ca',
        ),
        54 => array(
          'tid' => '3d4c909b-d200-4db0-b310-29348cdfad9a',
        ),
        55 => array(
          'tid' => '12594763-6522-441c-a03d-f72b0fc5f14f',
        ),
        56 => array(
          'tid' => 'c3cb1731-7228-4857-ac17-40eca7f08647',
        ),
        57 => array(
          'tid' => '7b62c875-5c14-4b71-95eb-318f3ef436ef',
        ),
        58 => array(
          'tid' => '46d76deb-ea26-4a65-aefc-0bb2c51be428',
        ),
      ),
    ),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '2748e598-f12f-4ff9-9b26-8f18c7cdda22',
        ),
        1 => array(
          'tid' => '4c8373c6-8fb9-4439-af16-a8aa5c9a8138',
        ),
        2 => array(
          'tid' => '30505824-ccd9-4d7f-990e-84745b5df726',
        ),
        3 => array(
          'tid' => '6834ca25-ae73-4d0d-b257-e3aaa0b7154c',
        ),
        4 => array(
          'tid' => 'dd4dcec0-11c9-4819-85d2-3472eb7dbc6c',
        ),
        5 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
        6 => array(
          'tid' => '8bdb81e7-d676-42c3-9294-6811dd157385',
        ),
        7 => array(
          'tid' => '54e62811-e826-44cf-a2f7-49b76cf40087',
        ),
        8 => array(
          'tid' => '647c2b63-84c3-4e42-9575-a5676e7fd48c',
        ),
        9 => array(
          'tid' => 'a300d935-8b42-462a-b14c-3dc5b9bf205b',
        ),
      ),
    ),
    'field_related_domains' => array(),
    'field_image' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'uid' => 'c571526a-567e-4c48-bd1c-f4cec8f6eddb',
          'filename' => '3_1.png',
          'uri' => 'public://3_1_0.png',
          'filemime' => 'image/png',
          'filesize' => 2623,
          'status' => 1,
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '2a4d8e62-0155-4169-aad3-83ef26b1e8d8',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 120,
            'width' => 120,
          ),
          'alt' => '',
          'title' => '',
          'height' => 120,
          'width' => 120,
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAHgAAAB4CAYAAAA5ZDbSAAAACXBIWXMAAAsTAAALEwEAmpwYAAAAIGNIUk0AAHolAACAgwAA+f8AAIDpAAB1MAAA6mAAADqYAAAXb5JfxUYAAAnFSURBVHja7JxvjCNlHcc/nXa6bafTaZu9O0guaOTFPUjgAI1GBGN4ZfSVGhNNfCUCghoRI/GFvvKVwAtjgkZMTDSBaDTCK2MikSDGi/yJEsVMMAeaU27vYLcz7cxO2+nM+GJnhu7e7m3b7bLdvd836Yu923k6+/s8v3/P88wUkiRBdHSliQkEsEgAiwSwSACLBLBIAIsEsAAWCWCRABYJYJEAFglgkQAWwCIBLBLAIgEsEsAiASwSwCIBLIBFAlgkgEUCWCSARQJYJIAFsEgAiwSwSACLBLBIAIsEsAAWCWDR4VTpoG/Atu39/ooPAbcBtwMKaAI+8BrwHPCn9NM/iL9fKXW0Ae+TbgPuBD4OHN/m/48B7wbuGPu3P6egfwT8Wzx48fQJ4Isp3OUZrr81/TwI/GUM9lkBfHD1w3Vp6D0F3D/HsT+Yfr4EfBV4Bfg7EAjg/dW7gHtTL/3wO/B9BvDTsZ9fHPPsVwXwfFRIc2kG1jrAe3l/+rkf+OcY7L8trPEW9W2ztm1/OoV6Rwp5thlcKmEYBqZpUi6XKRaLxHHMcDjE9316vR5hGO71dl8Ffgc8rpR6XgBvD7SZtjEngI8AD8w6VrlcplKp0Gg0qNVqaNrO7X4cx/T7fbrdLv1+n8FgwB5t8g3gDHBBKfXaFQ3Ytu0bxkLvDfMYs91uc/z48ZmvdxyHlZWVef2J/8vCuFLq2SsCsG3bp4C7gI8B1+9lLF3XMQyDcrlMkiT0+32iKELXder1OrVajWKxONFY/X6fTqdDEAQMh0OWlpaoVCoADAaDeXh2D3g6zdnPKaX6Rwawbds3pwsPtwM37mWspaUlqtUqpmlSrVYvCb9ZuA2CgCRJqFQqmKaJYRiXjDUYDPB9n06nQxiGlEolKpUK7XabarVKobCR+pMkIQxDer0enucxHA6JomivZjkz5t2vHzrAtm2rsfB7y17GqlQqGIZBtVqlXq9PfJ3neXieRxAElEql3KPH8y5AvV6nXq/TaDQum6+3TowgCPB9nziO92quF8Zg/2vhAdu2/YU0FJX3OpZlWVx11VW5N82iMAw5e/bsthX2NddcQ7k8+21GUcTKygq9Xm8epguAe5VSP1tYwKnnvjwtXE3TWFpaynNmGIYMBoO8cMpC8jTq9/v4vo/rugyHQ3RdR9d1NE0jiiJGo1Ee7qfJ1+NwgyBgZWWF0WiEruuUShtLC6PRaNb2KwBOz8uT92Oh495J4RYKBQzDoFarUavV8qImy3vdbpdut8va2hpra2vUajVM08SyrB1D6XiuXF9fz0NwNknGIQ4GA1zX5a233iKO43z83dJAEAS4rovruiRJQq1WY3l5mXq9ngOOomhTGB8Oh5Par5ra8IFF9eCXLpdzNU3LDVmpVFhaWprIE13XpdPp5NWzaZqYpomu65tyqu/7JElCqVSi3W5jGMZE3+F5Xt4La5pGtVql1Wqh63o+4TzPw3GcfOKYpkmr1aJWq+3q6Vk0yYq03XKyUuoDCwfYtm0D8LaDmoXC8Vk+rUajEd1ul4sXL+YRoFAokCRJ3sJYloVlWZuq4GnDbq/Xo9fr5cWZpmmMRiNGoxEArVaLVqs1U+5OkoQgCOj1evi+TxiGO7Vf1Xm0UvMO0ZWdQvGJEyf2VMxkRVG1WqVYLBJF0SawAMVikeXl5dzrZlGxWKTZbKLrOufOnbvE23Rd59ixYxNV2zvZIktJWf7Oao0tOpXWMgsXol8B3rvdooRpmrTb7ak9OAxDHMeh2+3mhUuWszVNYzgcsr6+nntYFjqn9eIsDK+trREEQf49hmFQLBYZjUZ4nkcURZTLZRqNBvV6feriLI5jHMfBdV3CMNypzbKUUt1FBPxj4O7dPMSyrMt6dBiGBEGwKecVi8Uc3ta8GkURjuPgOE4+CSqVSp4jL+fV2cbD6urqJZNka35NkoT19XVc12UwGBBFEYZhTJQWsvC/urq6W4X9slLqpkUtsm4C/jpJW9RqtWg0GjmsrPL0fZ9ut0uSJGialudu0zQnuoes+vY8L58YlmVd0mplu0lZNazrOo1GIw/Rk3h89j2+71MqlfLib7wjiKII13VxHGfSavpRpdRXFnmh4z7g0UlzXmbMKIo2heBms0m1Wp05p2aVteM4xHFMoVCgXC6jaRpxHOe5L6uYs1A862KK53l0Oh3iOEbXdYrFYr7MOUWbFKV98CuLvlT5IPC9Wa49efLkVEuSu8n3fc6dO7fjBLv22mtnLpq20/nz53Fdd6aFsXQl6yfzupd9OxetlHqIjc2FJ6a9dsJecSL1ej3W1tYuqWTHw+cbb7yRr0vvVd1ud6eq+LI5N414p+cJd189eIs338LGAba7pmlXsqp72vZqu4IrC/nlcplCoUAcx/kyZvY7WWVsWdZUaSFJknwi9ftTta6/BR5RSj2zX7Z/R/eD0w3+LwP3TNM3NptNms3mritSW1e8xpcpd1ptiuM4z9MZnEKhgGVZ+YmQ3dqq1dXVacH+ho2do6f32+YHcqLDtu3TvL2VeP2koC3LotlsbqpQ4zjOV56yqrlUKuUrWtN4v+d5eVWdqVar0Wg0MAwj9+rsOx3HyfvlCbTC21uCf3inbH3gZ7Js224Dv2LzUwaXba+yBY6tFeo8quGsL84AZuG7VCptqvanrBEeUUp98yDsu0iH7r4LfHvW66+++mosa74napMk4cKFCziOM+sQZ4CHlVJPHpRdF+bpQqXUd4CbgceAqcrQbNNh7rN/9nH/CHxGKXXrQcJdKA/e4s2n0hx9JzBxQ7xbQTWN53a7XTqdzrTF0wvAQ0qpXy+KLRf24HsK+j0p6K8B+n6D3kO7kxVPTyyaDRca8Bjo68aq7psnvS47/THJqli2VjxFVfzmGNjfL6rtDgXgLbDrwCeBn096jWEYuUeP59QZQ/FzwN1KKfsw2OvQAR4D/Tk2Tm5OVDprmpaf/8r2drOdqyn0sFLqwcNkp0Xog/dyefY46X2AuY+3+QzwA+Cpfegerow2aUb9B/gWcBp4mPk/jX8G+FS6CPPUYTTQUXnLzutsvHrhRuDr7P3h7GeBz7LxSocnD7NhjtprlNaB77NxYO0eYNpnSnrA54GPAr88CgY5yu/JeiwN3T8EdntK4MU0xJ8GHj9KRihxtPUPNrYnAU7y9vuyWmzs7mTvyXrzqBrgqAMe13+BX6SfK0byKsMjrkO70CESDxYJYAEsEsAiASwSwCIBLBLAIgEsgEUCWCSARQJYJIBFAlgkgAWwSACLBLBIAIsEsGiuKjx/5/vECuLBosOqEiAHo8WDRQJYJIBFAlgkgEUCWCSABbBIAIsEsEgAiwSwaGb9fwChKJatUysm3gAAAABJRU5ErkJggg==',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7341,
          'revision_id' => 7341,
          'language' => 'und',
          'source' => '',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1462464470,
          'changed' => 1462464470,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'land tenure systems',
    'description' => 'The land tenure system is the way and conditions under which land may be used.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6ed7cc8e-4184-4b5b-af2f-aa1367883c9d',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_66afb052',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land tenure systems',
          'format' => 'filtered_html',
          'safe_value' => 'land tenure systems',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'modos de aprovechamiento ',
          'format' => 'filtered_html',
          'safe_value' => 'modos de aprovechamiento ',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'systèmes de tenure ',
          'format' => 'filtered_html',
          'safe_value' => 'systèmes de tenure ',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land tenure systems',
          'format' => 'plain_text',
          'safe_value' => 'land tenure systems',
        ),
      ),
    ),
    'synonyms_synonyms' => array(
      'und' => array(
        0 => array(
          'value' => 'land tenure system',
          'format' => NULL,
          'safe_value' => 'land tenure system',
        ),
      ),
    ),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'The land tenure system is the way and conditions under which land may be used.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>The land tenure system is the way and conditions under which land may be used.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Las formas de explotación de la tierra, hacen referencia a la manera como una propiedad agrícola es utilizada, aprovechada o usufructuada. El aprovechamiento puede ser directo o indirecto. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Las formas de explotación de la tierra, hacen referencia a la manera como una propiedad agrícola es utilizada, aprovechada o usufructuada. El aprovechamiento puede ser directo o indirecto.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Système de tenure foncière, est le mode d\'organisation et l\'ensemble des conditions pour l\'utilisation des ressources naturelles de la terre. 
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Système de tenure foncière, est le mode d\'organisation et l\'ensemble des conditions pour l\'utilisation des ressources naturelles de la terre.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'The land tenure system is the way and conditions under which land may be used.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>The land tenure system is the way and conditions under which land may be used.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3736,
          'revision_id' => 3736,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1456256631,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3736,
          'revision_id' => 3736,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3736,
          'revision_id' => 3736,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3736,
          'revision_id' => 3736,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3736,
          'revision_id' => 3736,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'land tenure systems',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3736-0',
    'description_original' => 'The land tenure system is the way and conditions under which land may be used.',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'CEDAW',
    'description' => 'Convention on the Elimination of all Forms Discrimination Against Women. ',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6f22d7fe-e23b-4a4e-9995-a5b16def62bc',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_958edb9d',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'CEDAW',
          'format' => 'filtered_html',
          'safe_value' => 'CEDAW',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'CEDAW',
          'format' => 'filtered_html',
          'safe_value' => 'CEDAW',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'CEDEF',
          'format' => 'filtered_html',
          'safe_value' => 'CEDEF',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'CEDAW',
          'format' => 'plain_text',
          'safe_value' => 'CEDAW',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Convention on the Elimination of all Forms Discrimination Against Women. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Convention on the Elimination of all Forms Discrimination Against Women.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Convention sur l\'élimination de toutes les formes de discrimination à l\'égard des femmes.  ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Convention sur l\'élimination de toutes les formes de discrimination à l\'égard des femmes.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Convention on the Elimination of all Forms Discrimination Against Women. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Convention on the Elimination of all Forms Discrimination Against Women.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3692,
          'revision_id' => 3692,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1431355068,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3692,
          'revision_id' => 3692,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3692,
          'revision_id' => 3692,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3692,
          'revision_id' => 3692,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3692,
          'revision_id' => 3692,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'CEDAW',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3692-0',
    'description_original' => 'Convention on the Elimination of all Forms Discrimination Against Women. ',
  );
  $terms[] = array(
    'name' => 'Attribution',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6fc71047-4180-4b14-8239-2c70e1ac4819',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'licences',
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3651,
          'revision_id' => 3651,
          'language' => 'und',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431281909,
          'changed' => 1431281909,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Land policy & Legislation',
    'description' => '<p>The regulatory framework for land administration, land information management, planning and building consists of laws, regulations, standards, norms, and administrative procedures relating to land development that seek to determine what developers, land-owners, communities and residents are entitled to do with and on that land. Unless specified, they should apply equally to all these groups, organisations or individuals seeking to acquire, develop or transfer urban and rural land. The regulatory framework determines also the rules, responsibilities and procedures regarding the collect and the processing of land information, and land administration.</p>

<p>[source: http://www.gltn.net/index.php/land-tools/themes/access-to-land-and-tenure-security]</p>

<p>&nbsp;</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '741b7bd9-9dd9-43f7-bbf1-4689077768a1',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'domains',
    'field_related_topics' => array(
      'und' => array(
        0 => array(
          'tid' => '6c990f0b-f385-4689-99a1-4e99b4ae5db3',
        ),
        1 => array(
          'tid' => '6533f9c0-c024-4671-9545-008b24bee67e',
        ),
        2 => array(
          'tid' => 'c69753f9-41d9-4016-8210-5b1072e3db75',
        ),
        3 => array(
          'tid' => 'a0e1cc30-96fa-407b-b019-e50b4fa9cef6',
        ),
        4 => array(
          'tid' => '1e030e11-dbc4-4d54-8b5b-7973137d7766',
        ),
        5 => array(
          'tid' => '6f22d7fe-e23b-4a4e-9995-a5b16def62bc',
        ),
        6 => array(
          'tid' => '00f760d4-030c-4255-a8b7-9726d1556ab0',
        ),
        7 => array(
          'tid' => 'dc3f7f2c-9a49-4d21-9815-fbb79c1f0fd1',
        ),
        8 => array(
          'tid' => 'baa9738d-bbf6-4a05-834e-1f055123208e',
        ),
        9 => array(
          'tid' => '0af65510-05b9-49c1-b04d-356df98ef517',
        ),
        10 => array(
          'tid' => 'b278ae20-4491-449c-aabb-bedc8d27eff2',
        ),
        11 => array(
          'tid' => 'f11c96a6-4bfb-4fa8-8fb6-665b93320d35',
        ),
        12 => array(
          'tid' => '62f639da-4e63-4cbc-9cfd-de44e0c79439',
        ),
        13 => array(
          'tid' => 'c666a5bb-274e-4096-925a-a5da7a7a3e02',
        ),
        14 => array(
          'tid' => '286e5a44-023a-4041-be35-a81e21697730',
        ),
        15 => array(
          'tid' => '3f41afef-1eec-437c-b8a8-f426af4a6de8',
        ),
        16 => array(
          'tid' => '33c542bc-fdbe-4374-8ff3-1db8c7535205',
        ),
        17 => array(
          'tid' => '758c989a-4826-4219-a002-c60b8d8bc2cf',
        ),
        18 => array(
          'tid' => '12212d7f-9c3f-46ee-aeae-d8cf08e53528',
        ),
        19 => array(
          'tid' => '6ed7cc8e-4184-4b5b-af2f-aa1367883c9d',
        ),
        20 => array(
          'tid' => 'b5451c7a-e658-4120-8fd7-fe1acd098199',
        ),
        21 => array(
          'tid' => '96b52323-e2a2-4b03-8a1c-457661ad57af',
        ),
        22 => array(
          'tid' => '4386102f-5b35-42fe-9d84-be0f221d29c9',
        ),
        23 => array(
          'tid' => 'bff5e1d0-ff34-43c4-b96b-715dcdf18808',
        ),
        24 => array(
          'tid' => '497e8f59-4c0d-41be-8e17-2458d384535f',
        ),
        25 => array(
          'tid' => '52eeec74-4ee5-4d34-bc57-1ebfdc5ff6f1',
        ),
        26 => array(
          'tid' => '963b93c4-55c1-40f5-bb50-f905240ae189',
        ),
        27 => array(
          'tid' => 'aff2815f-7bb3-43ec-9ea7-64b0027dfcd3',
        ),
        28 => array(
          'tid' => '3da5ca60-e9bc-412b-be21-8103eb65e1d9',
        ),
        29 => array(
          'tid' => '96139d94-0476-4195-88fd-2f44ca0f2336',
        ),
        30 => array(
          'tid' => '0c669e54-a640-48d8-995e-e681b8857fe8',
        ),
        31 => array(
          'tid' => 'f8a4ff58-982c-415a-8ce6-c9a17f9b4e1b',
        ),
        32 => array(
          'tid' => 'c661f52c-b87f-424a-b26a-fdfa9aea1150',
        ),
        33 => array(
          'tid' => 'b7312d35-e143-4a91-a88d-09413aef749c',
        ),
        34 => array(
          'tid' => '84c8fbce-8249-4267-8044-36e40eee32fa',
        ),
        35 => array(
          'tid' => 'cc9a4931-94e9-49b4-b3b4-e4fa582ae73c',
        ),
        36 => array(
          'tid' => '5c7c94f4-a902-4db9-990e-98cc5de45875',
        ),
        37 => array(
          'tid' => 'c6f94f76-f677-4979-9a0c-8c485d460b41',
        ),
        38 => array(
          'tid' => '59bf9a9e-726d-4ca3-9a5c-7afc975d250e',
        ),
        39 => array(
          'tid' => 'cba39812-c91f-4655-8d9c-b13ff37f9807',
        ),
        40 => array(
          'tid' => 'd02aafef-24b5-4261-bd21-46961bf89017',
        ),
        41 => array(
          'tid' => '3a96b910-3f6d-4ad5-b6ee-73dd59bd0c27',
        ),
      ),
    ),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '2748e598-f12f-4ff9-9b26-8f18c7cdda22',
        ),
        1 => array(
          'tid' => '4c8373c6-8fb9-4439-af16-a8aa5c9a8138',
        ),
        2 => array(
          'tid' => '30505824-ccd9-4d7f-990e-84745b5df726',
        ),
        3 => array(
          'tid' => '6834ca25-ae73-4d0d-b257-e3aaa0b7154c',
        ),
        4 => array(
          'tid' => 'dd4dcec0-11c9-4819-85d2-3472eb7dbc6c',
        ),
        5 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
        6 => array(
          'tid' => '8bdb81e7-d676-42c3-9294-6811dd157385',
        ),
        7 => array(
          'tid' => '54e62811-e826-44cf-a2f7-49b76cf40087',
        ),
        8 => array(
          'tid' => '647c2b63-84c3-4e42-9575-a5676e7fd48c',
        ),
        9 => array(
          'tid' => 'a300d935-8b42-462a-b14c-3dc5b9bf205b',
        ),
      ),
    ),
    'field_related_domains' => array(),
    'field_image' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'uid' => 'c571526a-567e-4c48-bd1c-f4cec8f6eddb',
          'filename' => '14_1.png',
          'uri' => 'public://14_1_0.png',
          'filemime' => 'image/png',
          'filesize' => 2696,
          'status' => 1,
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '829827df-316d-4927-8772-26b1a605b2fc',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 120,
            'width' => 120,
          ),
          'alt' => '',
          'title' => '',
          'height' => 120,
          'width' => 120,
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAHgAAAB4CAYAAAA5ZDbSAAAACXBIWXMAAAsTAAALEwEAmpwYAAAAIGNIUk0AAHolAACAgwAA+f8AAIDpAAB1MAAA6mAAADqYAAAXb5JfxUYAAAoOSURBVHja7J3fj9tYFce/Tuw4tpNMmnT6Y6adHQpFVwjtSvyslkErISTEIqEFHnhB4oEHVHhA/Ce8FSH+AoR4YNlFq5UqoY66bHeFxPJDRqXsUmZKp51J4jix40li8xBfk2Rsx8lMx5n6fKWrtBk78dyPz7nnnHt9R/A8D6TnVznqAgJMIsAkAkwiwCQCTCLAJAJMgEkEmESASQSYRIBJBJhEgAkwiQCTCDCJAJMIMIkAkwgwiQATYBIBJhFgEgEmEWASASYRYAJMIsAkAkwiwKRTkJj2Bei6ntZXnwNw1W9X/LYG4J8A7gB4H0Bv1ocwxghwSpJ8eB+fatf811KCz3gPwDaA3wG4TRZ8+qr4wK6FgPzYCXz+5/32UwBNAG/4bRvAzlnoICHtXXYSuOhLAD45BfIagE8AOJ/ipb/jg/4NY+yPBDg5YBnAVwF8B8AWgOtnwFA+AvAWgN8C2GaMtQlwOOCvALjlW+xZlee78Z8DuJM27GUC/BMAPzut783n8xBFEZIkQRTFoPX7fViWhV6vhxPom38DuMkY+33WAX8dwJsn+osJAkRRRKFQgCRJwSv/dy4XXwLwPA/dbhedTgedTgeDweA4l/NqWpCXAXAFwAcAXpi7SpPLTcAbfxVFEYIgnNh1Oo4TwLZtexFLfjENd70MadLX4uCOW+E0xHw+f2oXKcsyZFlGvV7HcDgMrLvb7WI4HM46/QU/YHwzi4BvRoG9fPkyNE1buigqn8+jUqmgUqkAACzLCoA7jhN1WmYBb4W9uba2BlVV4XneibraZyFVVaGqKlZXV2FZFh4+fBh22JfTuLZUAeu6fgOjkuKEFEWBqqowTROPHj1CoVBAuVxGuVyGLMtLC9qyLOzv70f9+E7mAAN4OexNRVEAAI1GA57nwXEcOI6D/f19SJIUwObHpSHHcdDr9dDr9aCqKgBgd3c37pTtLAJeiYqOAYSmJv1+H41GA41GA6IoolQqoVwuQ1XVZ+bKx2HyNp59VKtV7O3tzYqiMwnYispBeS4bp8FggFarhVarhVwuF8DWNG1mnpsUpuM4cF039hxJknB4eDgriv40gLtZA/yvsDd5ZxUKhVkdF8h1XbTbbbTbbQiCAE3TUC6XUSqVItOpRWBGeZwE9YSbWQTcigpWAKBSqaDT6cz9oZ7nBUUJQRCgqirq9TpyuRwMwzgWzDANh0OoqopOpxMHeiuLLvpmVIe1221UKhW4rgvTNGFZ1kK1YV5y1DQNruui2WyeSB7MUyNFUZDP57G+vh54kf39/bD4YVPX9auMsf9kCXDkXd1ut1Eul1GtVlGtVuF5XlBQ6Ha7cQWFUAmCsLDFiqIYAFVVFYVCIfLYQqEARVFgmmbYjz8HIBuAdV1nAFbDOmhjYwOiKB4BpGlaUNkaDAbodrsB9FmTAfNE2BwSBypJUqLz9vb2YBhG3CGnngunacEfhr3Z7/dhGAaq1WpsrVkURaysrGBlZSUImLh1h7lzQRAia8ayLE8Anb65wmTbNkzThGmayOVy2NjYQL1ejwOsM8b2MwOYMeboun4PwBemx8ynT5/CMAxsbm7i4OAA+XwexWIRxWIxMv3hkwG1Wi3UnY+fVywWj4yhScZyy7Jgmmbo9KFpmsFNGXEj3cpikLU9DXg8VTJNE57n4cmTJxMgOexisQhZlo9AD3PngiCgUCjg4sWLiXNk13XR7XYDqHFjeL/fD1KmCMCvZxHwu7OKDtMBDS9bjrvCWdC5y01iqcPhEJ1OB6ZpotvtJo7c+Rgfc/wgi4B/NMstJgmOFoE+XRHjVrpoOlYoFOB5Xtzc8F6mAOu6/ikAr8RZhCzLSSbTF4JerVbRarXQbrcXWaFxpJKlaRps2466Od5ljB1mzYJDc2BFUVCr1VAqlYLIVxRFWJYF27bnzn+joGuaFlS1jgNWVVXUajXk83m0Wq24WANZAxw6AV6tVqFpWuCap1dPDIfDADZf/biIFl2LViwWgwBOUZTgOg3DQLsdueTqdhYB/xnA96bfbDabAcyoMiGfD+aRLoc9z3JXz/MSRdOSJAVAVVWNDNR4yhXh7s0sAg510fV6HYIgYHd3F4eHh8EUYLFYjB3/eErked4R4GHpjeu6oQEcd7v8M+PKkuM3i23bcTNf/yAXPWYJvKDAx82DgwNIkjQxuR8XnPEiBu/8Xq8XALdtG67rTlhwlNuN0uHhYTAjdf78eezs7KDb7UbCZYw9yRRgXdcFALUoF8yLBtOFhGaziWaziXw+PzG5HwdEEAQoigJFUVCv1wEAvV4PoiiiXq/j0qVLsfkxhzneuEcolUro9XpxcFMNsFIDzBjzdF0fhH1/kvFzOBzCMAwYhhG4aD65n2Rc5e5+uubc7/dh23YozKjcN0FUfy9zgH09xOgx0CNFhyTj3vhYyov+vETJrTvOMnn5kpciLcuaO+fO5XJJpiBv6bp+lzH216wB3g4DbFkWKpUKRFGc+3mg8ZUcjx8/hqqqKJVKqNVqME1zwjIXLaBMexJZliEIQpznyWG0sOHHaXRympuwhM6NGoYBQRCwvr4+c3ydpfF1yru7uzg4OEj6qElsmlYqlXDhwgWcO3cO5XIZ169fx9raWtwy3q20OjltCw6F0mg0UKvVcPXq1VRXcvBxmue4qqqGLrzP5XIol8sQRRE7Ozth3/eirusrjDHjtDs51acLdV1/B8CNqHSpUqmgVCpNBEPzruSQJAmbm5u4f/9+omuSJGkCaFQ8MBwOYdv2REUtpi8/YIy9lDULBkaT4DeiLJmvrlQUJaheSZI0sZKD57hRKzl4IBYXCY9P/kctz+ER9oI18dRSpWV4PvjXGO3HkUiyLAcp0XR1K8ydy7KMK1eu4MGDB0GKNL48J27N9DjQsNw8aaAP4KW0ouhlALyKUV368rznznpOaTAYwHEcFItF2LYduTxnvNrF3e5JRNm+fsgY+0WWLRgYra68NY8lh0W33LJnRd/jExQc6DPohw8x2p/jrTT7d9l22fm+nzN+8Vi5n/+cEm+u607APM4ccIKq1TaAtzHaTqmDlLWsG6F9BsB3/fzxZSyv7vpAXwfwHmPMWbYLXNatDP/kNwBgPujXAHwjxWva8Ysz2377G4AhbUZ6Akbut19itBvsFoBv+e1ZPu7/dx8kh/oRzqDO2makjwD8ym8rPuxvA/gmjr9v5fs+yNu+6z3Ac6CzvNusgf/v/ipgtL/lawBeBbCZ4Hy+megbfnBk4znU87JftOdHrm/7/38Fo93ztgB8CcB/p8bPvyClhegE+GT0B78BoxkzFxlVFv5mQ2bhZgVwppV6oYNEFkwiwCQCTIBJBJhEgEkEmESASQSYRIBJBJgAkwgwiQCTCDCJAJPml3DvB5+lXiALJp1ViRgtOSWRBZMIMIkAkwgwiQCTCDCJABNgEgEmEWASASYRYNJC+t8Az7IzKyCKLYQAAAAASUVORK5CYII=',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7342,
          'revision_id' => 7342,
          'language' => 'und',
          'source' => '',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1462464451,
          'changed' => 1462464451,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'land development (urbanization)',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '758c989a-4826-4219-a002-c60b8d8bc2cf',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_4174',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land development (urbanization)',
          'format' => 'filtered_html',
          'safe_value' => 'land development (urbanization)',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Desarrollo tierras (urbanización)',
          'format' => 'filtered_html',
          'safe_value' => 'Desarrollo tierras (urbanización)',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Développement foncier (urbanisme)',
          'format' => 'filtered_html',
          'safe_value' => 'Développement foncier (urbanisme)',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Desenvolvimento terra (urbanização)',
          'format' => 'filtered_html',
          'safe_value' => 'Desenvolvimento terra (urbanização)',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land development (urbanization)',
          'format' => 'plain_text',
          'safe_value' => 'land development (urbanization)',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3833,
          'revision_id' => 3833,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3833,
          'revision_id' => 3833,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3833,
          'revision_id' => 3833,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3833,
          'revision_id' => 3833,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3833,
          'revision_id' => 3833,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'land development (urbanization)',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3833-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'land markets',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '77c172d4-9a04-4c63-99e5-809d1224fd75',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_4175',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land markets',
          'format' => 'filtered_html',
          'safe_value' => 'land markets',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Mercado de tierras',
          'format' => 'filtered_html',
          'safe_value' => 'Mercado de tierras',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Marché foncier',
          'format' => 'filtered_html',
          'safe_value' => 'Marché foncier',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Mercado fundiário',
          'format' => 'filtered_html',
          'safe_value' => 'Mercado fundiário',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land markets',
          'format' => 'plain_text',
          'safe_value' => 'land markets',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3835,
          'revision_id' => 3835,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3835,
          'revision_id' => 3835,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3835,
          'revision_id' => 3835,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3835,
          'revision_id' => 3835,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3835,
          'revision_id' => 3835,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'land markets',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3835-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'capital value (land)',
    'description' => 'The capital value of a property is what a property will sell for. ',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '7923fe1b-eaa0-40f3-9d28-3d9b4b03c417',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_a9966ac9',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'capital value (land)',
          'format' => 'filtered_html',
          'safe_value' => 'capital value (land)',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'valor de capital (tierra)',
          'format' => 'filtered_html',
          'safe_value' => 'valor de capital (tierra)',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'valeur du bien (foncier)',
          'format' => 'filtered_html',
          'safe_value' => 'valeur du bien (foncier)',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Capital value (land)',
          'format' => 'plain_text',
          'safe_value' => 'Capital value (land)',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'The capital value of a property is what a property will sell for. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>The capital value of a property is what a property will sell for.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Valeur du bien, est le montant que l\'on obtiendrait avec la vente de ce bien. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Valeur du bien, est le montant que l\'on obtiendrait avec la vente de ce bien.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'The capital value of a property is what a property will sell for. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>The capital value of a property is what a property will sell for.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3691,
          'revision_id' => 3691,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1431355068,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3691,
          'revision_id' => 3691,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3691,
          'revision_id' => 3691,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3691,
          'revision_id' => 3691,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3691,
          'revision_id' => 3691,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'capital value (land)',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3691-0',
    'description_original' => 'The capital value of a property is what a property will sell for. ',
  );
  $terms[] = array(
    'name' => 'prescription',
    'description' => 'prescription is the acquisition or extinction of rights by lapse of time.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '794d047c-93e5-4fa6-bb3a-9b379fbfdf26',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_f86e1a09',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'prescription',
          'format' => 'filtered_html',
          'safe_value' => 'prescription',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'prescripción',
          'format' => 'filtered_html',
          'safe_value' => 'prescripción',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'prescription',
          'format' => 'filtered_html',
          'safe_value' => 'prescription',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Prescription',
          'format' => 'plain_text',
          'safe_value' => 'Prescription',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'prescription is the acquisition or extinction of rights by lapse of time.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>prescription is the acquisition or extinction of rights by lapse of time.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'La prescription est le mode d\'acquisition ou d\'extinction d\'un droit, par l\'écoulement d\'un certain laps de temps.  ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>La prescription est le mode d\'acquisition ou d\'extinction d\'un droit, par l\'écoulement d\'un certain laps de temps.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'prescription is the acquisition or extinction of rights by lapse of time.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>prescription is the acquisition or extinction of rights by lapse of time.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3756,
          'revision_id' => 3756,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3756,
          'revision_id' => 3756,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3756,
          'revision_id' => 3756,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3756,
          'revision_id' => 3756,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3756,
          'revision_id' => 3756,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'prescription',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3756-0',
    'description_original' => 'prescription is the acquisition or extinction of rights by lapse of time.',
  );
  $terms[] = array(
    'name' => 'rural planning',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '7b62c875-5c14-4b71-95eb-318f3ef436ef',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_6704',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'rural planning',
          'format' => 'filtered_html',
          'safe_value' => 'rural planning',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Planificación rural',
          'format' => 'filtered_html',
          'safe_value' => 'Planificación rural',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Aménagement rural',
          'format' => 'filtered_html',
          'safe_value' => 'Aménagement rural',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Planeamento rural',
          'format' => 'filtered_html',
          'safe_value' => 'Planeamento rural',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'rural planning',
          'format' => 'plain_text',
          'safe_value' => 'rural planning',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3864,
          'revision_id' => 3864,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3864,
          'revision_id' => 3864,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3864,
          'revision_id' => 3864,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3864,
          'revision_id' => 3864,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3864,
          'revision_id' => 3864,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'rural planning',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3864-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'aquaculture',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '811f8040-064c-4f16-b422-39c9208a016a',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_550',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'aquaculture',
          'format' => 'filtered_html',
          'safe_value' => 'aquaculture',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Acuicultura',
          'format' => 'filtered_html',
          'safe_value' => 'Acuicultura',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Aquaculture',
          'format' => 'filtered_html',
          'safe_value' => 'Aquaculture',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Aquicultura',
          'format' => 'filtered_html',
          'safe_value' => 'Aquicultura',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'aquaculture',
          'format' => 'plain_text',
          'safe_value' => 'aquaculture',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3792,
          'revision_id' => 3792,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3792,
          'revision_id' => 3792,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3792,
          'revision_id' => 3792,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3792,
          'revision_id' => 3792,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3792,
          'revision_id' => 3792,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'aquaculture',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3792-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'forest monitoring and assessment',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '81260e71-964d-47ae-a44a-5e8b01f22755',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_1374155312641',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'forest monitoring and assessment',
          'format' => 'filtered_html',
          'safe_value' => 'forest monitoring and assessment',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'evaluación de los recursos forestales',
          'format' => 'filtered_html',
          'safe_value' => 'evaluación de los recursos forestales',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'évaluation des ressources forestières',
          'format' => 'filtered_html',
          'safe_value' => 'évaluation des ressources forestières',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'forest monitoring and assessment',
          'format' => 'plain_text',
          'safe_value' => 'forest monitoring and assessment',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3815,
          'revision_id' => 3815,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3815,
          'revision_id' => 3815,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3815,
          'revision_id' => 3815,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3815,
          'revision_id' => 3815,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3815,
          'revision_id' => 3815,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'forest monitoring and assessment',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3815-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'pastoralists',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '83d6a8cb-6b26-407b-a41d-a841c57950bb',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_653f04fe',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'pastoralists',
          'format' => 'filtered_html',
          'safe_value' => 'pastoralists',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Pastoralists',
          'format' => 'plain_text',
          'safe_value' => 'Pastoralists',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1264,
          'revision_id' => 1264,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355180,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1264,
          'revision_id' => 1264,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355180,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1264,
          'revision_id' => 1264,
          'language' => 'und',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355180,
          'changed' => 1461767614,
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1264,
          'revision_id' => 1264,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557406,
          'changed' => 1460557406,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1264,
          'revision_id' => 1264,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'pastoralists',
    'entity_translation_handler_id' => 'taxonomy_term-eid-1264-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'statute law',
    'description' => 'Statutory law refers to the legislation (or other legal instruments also referred to as statutes) passed by a legislative body and formally placed on record in a written or printed form.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '84c8fbce-8249-4267-8044-36e40eee32fa',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_86cb818a',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'statute law',
          'format' => 'filtered_html',
          'safe_value' => 'statute law',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'derecho escrito',
          'format' => 'filtered_html',
          'safe_value' => 'derecho escrito',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'droit écrit de l\' état',
          'format' => 'filtered_html',
          'safe_value' => 'droit écrit de l&#039; état',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Statute law',
          'format' => 'plain_text',
          'safe_value' => 'Statute law',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Statutory law refers to the legislation (or other legal instruments also referred to as statutes) passed by a legislative body and formally placed on record in a written or printed form.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Statutory law refers to the legislation (or other legal instruments also referred to as statutes) passed by a legislative body and formally placed on record in a written or printed form.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Derecho escrito, es el conjunto de reglas jurídicas establecidas por las autoridades investidas de poder legislativo o reglamentadas y constatadas, por textos oficiales. En la teoría jurídica clásica, el derecho escrito se opone al derecho consuetudinario u oral. Estas teorías ofrecen en general una visión peyorativa de la oralidad jurídica, y se define negativamente con respecto al derecho escrito. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Derecho escrito, es el conjunto de reglas jurídicas establecidas por las autoridades investidas de poder legislativo o reglamentadas y constatadas, por textos oficiales. En la teoría jurídica clásica, el derecho escrito se opone al derecho consuetudinario u oral. Estas teorías ofrecen en general una visión peyorativa de la oralidad jurídica, y se define negativamente con respecto al derecho escrito.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Le droit écrit consiste en l\'ensemble des règles juridiques par les autorités investies du pouvoir législatif ou réglementaire et constatées par des textes officiels. Dans la théorie juridique classique, le droit écrit s\'oppose au droit oral. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Le droit écrit consiste en l\'ensemble des règles juridiques par les autorités investies du pouvoir législatif ou réglementaire et constatées par des textes officiels. Dans la théorie juridique classique, le droit écrit s\'oppose au droit oral.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Statutory law refers to the legislation (or other legal instruments also referred to as statutes) passed by a legislative body and formally placed on record in a written or printed form.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Statutory law refers to the legislation (or other legal instruments also referred to as statutes) passed by a legislative body and formally placed on record in a written or printed form.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3773,
          'revision_id' => 3773,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3773,
          'revision_id' => 3773,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3773,
          'revision_id' => 3773,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3773,
          'revision_id' => 3773,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3773,
          'revision_id' => 3773,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'statute law',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3773-0',
    'description_original' => 'Statutory law refers to the legislation (or other legal instruments also referred to as statutes) passed by a legislative body and formally placed on record in a written or printed form.',
  );
  $terms[] = array(
    'name' => 'agricultural landscape',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '85235b18-1b64-42a9-8f1c-3189fc74087c',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_37277',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'agricultural landscape',
          'format' => 'filtered_html',
          'safe_value' => 'agricultural landscape',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Paisaje agrícola',
          'format' => 'filtered_html',
          'safe_value' => 'Paisaje agrícola',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Paysage agricole',
          'format' => 'filtered_html',
          'safe_value' => 'Paysage agricole',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Paisagem agrícola',
          'format' => 'filtered_html',
          'safe_value' => 'Paisagem agrícola',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'agricultural landscape',
          'format' => 'plain_text',
          'safe_value' => 'agricultural landscape',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3786,
          'revision_id' => 3786,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3786,
          'revision_id' => 3786,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3786,
          'revision_id' => 3786,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3786,
          'revision_id' => 3786,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3786,
          'revision_id' => 3786,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'agricultural landscape',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3786-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'private forests',
    'description' => 'Private forests where the detailed operations are controlled by the common rules for all forest land, including felling permits.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8b044a2a-7560-49c3-9fcc-dc43c937d0ca',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_1882e93f',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'private forests',
          'format' => 'filtered_html',
          'safe_value' => 'private forests',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'bosques privados',
          'format' => 'filtered_html',
          'safe_value' => 'bosques privados',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'forêts privées',
          'format' => 'filtered_html',
          'safe_value' => 'forêts privées',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Private forests',
          'format' => 'plain_text',
          'safe_value' => 'Private forests',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Private forests where the detailed operations are controlled by the common rules for all forest land, including felling permits.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Private forests where the detailed operations are controlled by the common rules for all forest land, including felling permits.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Foret privée, foret des particuliers dont l\'exploitation est soumise aux règles communes a tout terrain forestier (permis de couple, bordereau de route…). 
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Foret privée, foret des particuliers dont l\'exploitation est soumise aux règles communes a tout terrain forestier (permis de couple, bordereau de route…).</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Private forests where the detailed operations are controlled by the common rules for all forest land, including felling permits.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Private forests where the detailed operations are controlled by the common rules for all forest land, including felling permits.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3758,
          'revision_id' => 3758,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3758,
          'revision_id' => 3758,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3758,
          'revision_id' => 3758,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3758,
          'revision_id' => 3758,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3758,
          'revision_id' => 3758,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'private forests',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3758-0',
    'description_original' => 'Private forests where the detailed operations are controlled by the common rules for all forest land, including felling permits.',
  );
  $terms[] = array(
    'name' => 'urban forestry',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8b750c7d-6dbf-4731-93c0-833598104a99',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_32620',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'urban forestry',
          'format' => 'filtered_html',
          'safe_value' => 'urban forestry',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'arboricultura urbana',
          'format' => 'filtered_html',
          'safe_value' => 'arboricultura urbana',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'foresterie urbaine',
          'format' => 'filtered_html',
          'safe_value' => 'foresterie urbaine',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Arborização urbana',
          'format' => 'filtered_html',
          'safe_value' => 'Arborização urbana',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'urban forestry',
          'format' => 'plain_text',
          'safe_value' => 'urban forestry',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3847,
          'revision_id' => 3847,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3847,
          'revision_id' => 3847,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3847,
          'revision_id' => 3847,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3847,
          'revision_id' => 3847,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3847,
          'revision_id' => 3847,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'urban forestry',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3847-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Land, Climate change and Environment',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8bdb81e7-d676-42c3-9294-6811dd157385',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'themes',
    'field_related_topics' => array(
      'und' => array(
        0 => array(
          'tid' => '12ad2539-cd65-4f06-8cd6-caf6e1580885',
        ),
        1 => array(
          'tid' => 'ac0bc2d3-74b5-4b3d-95ea-389d2802aea3',
        ),
        2 => array(
          'tid' => '10223c15-5cec-4ffd-ba89-3c4d77b83a28',
        ),
        3 => array(
          'tid' => '6018cfd1-4850-4d34-89dd-e8ef13bd1c05',
        ),
        4 => array(
          'tid' => '0af65510-05b9-49c1-b04d-356df98ef517',
        ),
        5 => array(
          'tid' => '6e5a7c32-b826-4fdc-95d1-ff5453883b2e',
        ),
        6 => array(
          'tid' => '8cf95e12-39ef-474b-b73c-0a674fc9e546',
        ),
        7 => array(
          'tid' => '3d4c909b-d200-4db0-b310-29348cdfad9a',
        ),
        8 => array(
          'tid' => '12594763-6522-441c-a03d-f72b0fc5f14f',
        ),
        9 => array(
          'tid' => '1e55a080-08e2-4529-85af-c3a49f056856',
        ),
        10 => array(
          'tid' => '5e0b272e-94fa-42ac-98e7-ca5761f2af6b',
        ),
        11 => array(
          'tid' => 'd1034b93-1c0b-46e1-906a-b70b3f300aeb',
        ),
        12 => array(
          'tid' => 'e2d4d37e-28c8-4ca5-a20b-1937dbe71208',
        ),
        13 => array(
          'tid' => 'd8792d68-2bbe-4dc1-a794-7dde4cb0db69',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7351,
          'revision_id' => 7351,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1461596187,
          'changed' => 1461596187,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'land degradation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8cf95e12-39ef-474b-b73c-0a674fc9e546',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_34823',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land degradation',
          'format' => 'filtered_html',
          'safe_value' => 'land degradation',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Degradación de tierras',
          'format' => 'filtered_html',
          'safe_value' => 'Degradación de tierras',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Dégradation des terres',
          'format' => 'filtered_html',
          'safe_value' => 'Dégradation des terres',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Degradação de terras',
          'format' => 'filtered_html',
          'safe_value' => 'Degradação de terras',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land degradation',
          'format' => 'plain_text',
          'safe_value' => 'land degradation',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3826,
          'revision_id' => 3826,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3826,
          'revision_id' => 3826,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3826,
          'revision_id' => 3826,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3826,
          'revision_id' => 3826,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3826,
          'revision_id' => 3826,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'land degradation',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3826-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'food security',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8da4c998-80c1-43bc-9d70-da898d251edf',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_10967',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'food security',
          'format' => 'filtered_html',
          'safe_value' => 'food security',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Seguridad alimentaría',
          'format' => 'filtered_html',
          'safe_value' => 'Seguridad alimentaría',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Sécurité alimentaire',
          'format' => 'filtered_html',
          'safe_value' => 'Sécurité alimentaire',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Segurança alimentar',
          'format' => 'filtered_html',
          'safe_value' => 'Segurança alimentar',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Food Security',
          'format' => 'plain_text',
          'safe_value' => 'Food Security',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1255,
          'revision_id' => 1255,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355180,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1255,
          'revision_id' => 1255,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355180,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1255,
          'revision_id' => 1255,
          'language' => 'und',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355180,
          'changed' => 1461767607,
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1255,
          'revision_id' => 1255,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557389,
          'changed' => 1460557389,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1255,
          'revision_id' => 1255,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'food security',
    'entity_translation_handler_id' => 'taxonomy_term-eid-1255-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Library content provider',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9074d34f-b5be-41e2-bbe5-4f12fee7ff47',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_relation',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6121,
          'revision_id' => 6121,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1442819321,
          'changed' => 1442819321,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'regularization of illegal occupation',
    'description' => 'Regularization of illegal occupation is the legalization of the disposition of land.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '949b365c-4179-406c-9707-26bfa2bca2b4',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_3b50d6b6',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'regularization of illegal occupation',
          'format' => 'filtered_html',
          'safe_value' => 'regularization of illegal occupation',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'regularización de ocupación',
          'format' => 'filtered_html',
          'safe_value' => 'regularización de ocupación',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'régularisation d\' occupation',
          'format' => 'filtered_html',
          'safe_value' => 'régularisation d&#039; occupation',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Regularization of illegal occupation',
          'format' => 'plain_text',
          'safe_value' => 'Regularization of illegal occupation',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Regularization of illegal occupation is the legalization of the disposition of land.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Regularization of illegal occupation is the legalization of the disposition of land.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'La regularización de tierras, consiste en legalizar es estatus de los ocupantes ilegales de un terreno, acordándoles el derecho de acceder a la propiedad privada del suelo. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>La regularización de tierras, consiste en legalizar es estatus de los ocupantes ilegales de un terreno, acordándoles el derecho de acceder a la propiedad privada del suelo.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Régularisation d\'occupation, est la légalisation d\'une occupation abusive du sol.
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Régularisation d\'occupation, est la légalisation d\'une occupation abusive du sol.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Regularization of illegal occupation is the legalization of the disposition of land.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Regularization of illegal occupation is the legalization of the disposition of land.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3761,
          'revision_id' => 3761,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3761,
          'revision_id' => 3761,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3761,
          'revision_id' => 3761,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3761,
          'revision_id' => 3761,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3761,
          'revision_id' => 3761,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'regularization of illegal occupation',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3761-0',
    'description_original' => 'Regularization of illegal occupation is the legalization of the disposition of land.',
  );
  $terms[] = array(
    'name' => 'agropastoral systems',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '94f8635f-68be-4c04-86da-6dd69ab326f4',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_16112',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'agropastoral systems',
          'format' => 'filtered_html',
          'safe_value' => 'agropastoral systems',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Sistemas agropascícolas',
          'format' => 'filtered_html',
          'safe_value' => 'Sistemas agropascícolas',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Système agropastoral',
          'format' => 'filtered_html',
          'safe_value' => 'Système agropastoral',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Sistema agropastoril',
          'format' => 'filtered_html',
          'safe_value' => 'Sistema agropastoril',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'agropastoral systems',
          'format' => 'plain_text',
          'safe_value' => 'agropastoral systems',
        ),
      ),
    ),
    'synonyms_synonyms' => array(
      'und' => array(
        0 => array(
          'value' => 'agropastoralism',
          'format' => NULL,
          'safe_value' => 'agropastoralism',
        ),
      ),
    ),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3686,
          'revision_id' => 3686,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1455910867,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3686,
          'revision_id' => 3686,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3686,
          'revision_id' => 3686,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3686,
          'revision_id' => 3686,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3686,
          'revision_id' => 3686,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'agropastoral systems',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3686-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'reforms',
    'description' => 'A reform is a modification of an existing law or institution, either by the revision of an existing law or by the enactment of a new law.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '96139d94-0476-4195-88fd-2f44ca0f2336',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_bb4738d4',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'reforms',
          'format' => 'filtered_html',
          'safe_value' => 'reforms',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'reforma',
          'format' => 'filtered_html',
          'safe_value' => 'reforma',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'réforme',
          'format' => 'filtered_html',
          'safe_value' => 'réforme',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Reforms',
          'format' => 'plain_text',
          'safe_value' => 'Reforms',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'A reform is a modification of an existing law or institution, either by the revision of an existing law or by the enactment of a new law.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>A reform is a modification of an existing law or institution, either by the revision of an existing law or by the enactment of a new law.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Reforma, consiste en la modificación de un derecho existente, hecha mediante la expedición de un decreto, o por la promulgación de una nueva ley. Es una intervención voluntaria del Estado. Es una intervención voluntaria del Estado, justificada por consideraciones técnicas, económicas, doctrinales e ideológicas. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Reforma, consiste en la modificación de un derecho existente, hecha mediante la expedición de un decreto, o por la promulgación de una nueva ley. Es una intervención voluntaria del Estado. Es una intervención voluntaria del Estado, justificada por consideraciones técnicas, económicas, doctrinales e ideológicas.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Une réforme consiste en la modification du droit existant, par décret ou par la promulgation d\'une nouvelle loi. C\'est une invention volontaire de l\'Etat justifiée par des considérations techniques, économiques, doctrinales ou idéologiques ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Une réforme consiste en la modification du droit existant, par décret ou par la promulgation d\'une nouvelle loi. C\'est une invention volontaire de l\'Etat justifiée par des considérations techniques, économiques, doctrinales ou idéologiques</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'A reform is a modification of an existing law or institution, either by the revision of an existing law or by the enactment of a new law.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>A reform is a modification of an existing law or institution, either by the revision of an existing law or by the enactment of a new law.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3760,
          'revision_id' => 3760,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3760,
          'revision_id' => 3760,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3760,
          'revision_id' => 3760,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3760,
          'revision_id' => 3760,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3760,
          'revision_id' => 3760,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'reforms',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3760-0',
    'description_original' => 'A reform is a modification of an existing law or institution, either by the revision of an existing law or by the enactment of a new law.',
  );
  $terms[] = array(
    'name' => 'orphans land rights',
    'description' => 'Legal framework and provisions under a given land regime, concerning orphans. ',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '963b93c4-55c1-40f5-bb50-f905240ae189',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_e5f9b786',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'orphans land rights',
          'format' => 'filtered_html',
          'safe_value' => 'orphans land rights',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'derechos sobre la tierra de los huérfanos',
          'format' => 'filtered_html',
          'safe_value' => 'derechos sobre la tierra de los huérfanos',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'droit des orphelins à la terre',
          'format' => 'filtered_html',
          'safe_value' => 'droit des orphelins à la terre',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Orphans land rights',
          'format' => 'plain_text',
          'safe_value' => 'Orphans land rights',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Legal framework and provisions under a given land regime, concerning orphans. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Legal framework and provisions under a given land regime, concerning orphans.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Mesures prévues, dans un régime foncier donne, en ce qui concerne la protection des droits des orphelins. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Mesures prévues, dans un régime foncier donne, en ce qui concerne la protection des droits des orphelins.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Legal framework and provisions under a given land regime, concerning orphans. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Legal framework and provisions under a given land regime, concerning orphans.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3749,
          'revision_id' => 3749,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3749,
          'revision_id' => 3749,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3749,
          'revision_id' => 3749,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3749,
          'revision_id' => 3749,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3749,
          'revision_id' => 3749,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'orphans land rights',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3749-0',
    'description_original' => 'Legal framework and provisions under a given land regime, concerning orphans. ',
  );
  $terms[] = array(
    'name' => 'marital property rights',
    'description' => 'Entitlement to enjoy ownership advantages, due to marital status. ',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '96b52323-e2a2-4b03-8a1c-457661ad57af',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_64d8574a',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'marital property rights',
          'format' => 'filtered_html',
          'safe_value' => 'marital property rights',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'derechos de propiedad maritales',
          'format' => 'filtered_html',
          'safe_value' => 'derechos de propiedad maritales',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'droits patrilinéaires de la propriété',
          'format' => 'filtered_html',
          'safe_value' => 'droits patrilinéaires de la propriété',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'marital property rights',
          'format' => 'plain_text',
          'safe_value' => 'marital property rights',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Entitlement to enjoy ownership advantages, due to marital status. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Entitlement to enjoy ownership advantages, due to marital status.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Possibilité légale de jouir des avantages réservés au propriétaire, en vertu de son statut conjugal. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Possibilité légale de jouir des avantages réservés au propriétaire, en vertu de son statut conjugal.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Entitlement to enjoy ownership advantages, due to marital status. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Entitlement to enjoy ownership advantages, due to marital status.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3741,
          'revision_id' => 3741,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3741,
          'revision_id' => 3741,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3741,
          'revision_id' => 3741,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3741,
          'revision_id' => 3741,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3741,
          'revision_id' => 3741,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'marital property rights',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3741-0',
    'description_original' => 'Entitlement to enjoy ownership advantages, due to marital status. ',
  );
  $terms[] = array(
    'name' => 'land cover mapping',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '97746d45-2db0-45b1-a037-c6eae85ae01f',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_9000094',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land cover mapping',
          'format' => 'filtered_html',
          'safe_value' => 'land cover mapping',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Cartografía de la cubierta vegetal',
          'format' => 'filtered_html',
          'safe_value' => 'Cartografía de la cubierta vegetal',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Cartographie de l\'occupation du sol',
          'format' => 'filtered_html',
          'safe_value' => 'Cartographie de l&#039;occupation du sol',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Cartografia da ocupação do solo',
          'format' => 'filtered_html',
          'safe_value' => 'Cartografia da ocupação do solo',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land cover mapping',
          'format' => 'plain_text',
          'safe_value' => 'land cover mapping',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3859,
          'revision_id' => 3859,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3859,
          'revision_id' => 3859,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3859,
          'revision_id' => 3859,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3859,
          'revision_id' => 3859,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3859,
          'revision_id' => 3859,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'land cover mapping',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3859-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Gender',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '990a1ba9-8e6b-467d-b3ab-836cb2ef2098',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Gender',
          'format' => 'plain_text',
          'safe_value' => 'Gender',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Gender',
          'format' => 'plain_text',
          'safe_value' => 'Gender',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Gender',
          'format' => NULL,
          'safe_value' => 'Gender',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Gender',
          'format' => 'plain_text',
          'safe_value' => 'Gender',
        ),
      ),
    ),
    'synonyms_synonyms' => array(
      'und' => array(
        0 => array(
          'value' => 'women, marital',
          'format' => NULL,
          'safe_value' => 'women, marital',
        ),
      ),
    ),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1257,
          'revision_id' => 1257,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355180,
          'changed' => 1431355543,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1257,
          'revision_id' => 1257,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355180,
          'changed' => 1442250605,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1257,
          'revision_id' => 1257,
          'language' => 'und',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355180,
          'changed' => 1431355543,
        ),
      ),
    ),
    'name_original' => 'Gender',
    'entity_translation_handler_id' => 'taxonomy_term-eid-1257-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'land cover',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9b32b10d-b3f0-4f32-b8d0-e90640619036',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_37897',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land cover',
          'format' => 'filtered_html',
          'safe_value' => 'land cover',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'cobertura de suelos',
          'format' => 'filtered_html',
          'safe_value' => 'cobertura de suelos',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'couverture du sol',
          'format' => 'filtered_html',
          'safe_value' => 'couverture du sol',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Cobertura do solo',
          'format' => 'filtered_html',
          'safe_value' => 'Cobertura do solo',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land cover',
          'format' => 'plain_text',
          'safe_value' => 'land cover',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3825,
          'revision_id' => 3825,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3825,
          'revision_id' => 3825,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3825,
          'revision_id' => 3825,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3825,
          'revision_id' => 3825,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3825,
          'revision_id' => 3825,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'land cover',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3825-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'government purchases',
    'description' => 'Governmental acquisition (of land).',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9d0c7ab3-9bf5-4ee8-a0a2-2017447cfd06',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_b3864149',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'government purchases',
          'format' => 'filtered_html',
          'safe_value' => 'government purchases',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'achat gouvernemental',
          'format' => 'filtered_html',
          'safe_value' => 'achat gouvernemental',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Government purchases',
          'format' => 'plain_text',
          'safe_value' => 'Government purchases',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Governmental acquisition (of land).',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Governmental acquisition (of land).</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Acquisition (de terres) par le gouvernement. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Acquisition (de terres) par le gouvernement.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Governmental acquisition (of land).',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Governmental acquisition (of land).</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3714,
          'revision_id' => 3714,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1431355068,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3714,
          'revision_id' => 3714,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3714,
          'revision_id' => 3714,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3714,
          'revision_id' => 3714,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3714,
          'revision_id' => 3714,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'government purchases',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3714-0',
    'description_original' => 'Governmental acquisition (of land).',
  );
  $terms[] = array(
    'name' => 'urban areas',
    'description' => ' Urban areas as defined by the Census Bureau are densely-populated areas with at least 50,000 people ("urbanized areas") and densely-populated areas with 2,500 to 50,000 people ("urban clusters").',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9d1f5bd8-fd30-4284-8df1-fdf2147ed801',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_8085',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'urban areas',
          'format' => 'filtered_html',
          'safe_value' => 'urban areas',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Zonas urbanas',
          'format' => 'filtered_html',
          'safe_value' => 'Zonas urbanas',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Zone urbaine',
          'format' => 'filtered_html',
          'safe_value' => 'Zone urbaine',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Zona urbana',
          'format' => 'filtered_html',
          'safe_value' => 'Zona urbana',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'urban areas',
          'format' => 'plain_text',
          'safe_value' => 'urban areas',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => ' Urban areas as defined by the Census Bureau are densely-populated areas with at least 50,000 people ("urbanized areas") and densely-populated areas with 2,500 to 50,000 people ("urban clusters").',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Urban areas as defined by the Census Bureau are densely-populated areas with at least 50,000 people ("urbanized areas") and densely-populated areas with 2,500 to 50,000 people ("urban clusters").</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => ' Urban areas as defined by the Census Bureau are densely-populated areas with at least 50,000 people ("urbanized areas") and densely-populated areas with 2,500 to 50,000 people ("urban clusters").',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Urban areas as defined by the Census Bureau are densely-populated areas with at least 50,000 people ("urbanized areas") and densely-populated areas with 2,500 to 50,000 people ("urban clusters").</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3874,
          'revision_id' => 3874,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3874,
          'revision_id' => 3874,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3874,
          'revision_id' => 3874,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3874,
          'revision_id' => 3874,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3874,
          'revision_id' => 3874,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'urban areas',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3874-0',
    'description_original' => ' Urban areas as defined by the Census Bureau are densely-populated areas with at least 50,000 people ("urbanized areas") and densely-populated areas with 2,500 to 50,000 people ("urban clusters").',
  );
  $terms[] = array(
    'name' => 'land registration',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9eaba07d-9709-4b5f-baec-105a13243490',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_9000098',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land registration',
          'format' => 'filtered_html',
          'safe_value' => 'land registration',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Registro de tierras',
          'format' => 'filtered_html',
          'safe_value' => 'Registro de tierras',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Enregistrement foncier',
          'format' => 'filtered_html',
          'safe_value' => 'Enregistrement foncier',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land registration',
          'format' => 'plain_text',
          'safe_value' => 'land registration',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3837,
          'revision_id' => 3837,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3837,
          'revision_id' => 3837,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3837,
          'revision_id' => 3837,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3837,
          'revision_id' => 3837,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3837,
          'revision_id' => 3837,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'land registration',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3837-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'forest grazing',
    'description' => 'The combined use of forestland or woodland for both wood production and animal production by grazing of the coexisting indigenous forage, or vegetation that is managed like indigenous forage.Also called as silvopastoral system.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9f394331-4b1f-4b1a-b429-b785b011f80c',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_3046',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'forest grazing',
          'format' => 'filtered_html',
          'safe_value' => 'forest grazing',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Pastoreo en el bosque',
          'format' => 'filtered_html',
          'safe_value' => 'Pastoreo en el bosque',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Pâturage en forêt',
          'format' => 'filtered_html',
          'safe_value' => 'Pâturage en forêt',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Pastoreio na floresta',
          'format' => 'filtered_html',
          'safe_value' => 'Pastoreio na floresta',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'forest grazing',
          'format' => 'plain_text',
          'safe_value' => 'forest grazing',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'The combined use of forestland or woodland for both wood production and animal production by grazing of the coexisting indigenous forage, or vegetation that is managed like indigenous forage.Also called as silvopastoral system.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>The combined use of forestland or woodland for both wood production and animal production by grazing of the coexisting indigenous forage, or vegetation that is managed like indigenous forage.Also called as silvopastoral system.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'The combined use of forestland or woodland for both wood production and animal production by grazing of the coexisting indigenous forage, or vegetation that is managed like indigenous forage.Also called as silvopastoral system.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>The combined use of forestland or woodland for both wood production and animal production by grazing of the coexisting indigenous forage, or vegetation that is managed like indigenous forage.Also called as silvopastoral system.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3816,
          'revision_id' => 3816,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3816,
          'revision_id' => 3816,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3816,
          'revision_id' => 3816,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3816,
          'revision_id' => 3816,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3816,
          'revision_id' => 3816,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'forest grazing',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3816-0',
    'description_original' => 'The combined use of forestland or woodland for both wood production and animal production by grazing of the coexisting indigenous forage, or vegetation that is managed like indigenous forage.Also called as silvopastoral system.',
  );
  $terms[] = array(
    'name' => 'perimeter (land)',
    'description' => 'a perimeter is a boundary',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a0459926-4909-4ff9-9f61-2911d3e949b0',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_db4161cb',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'perimeter (land)',
          'format' => 'filtered_html',
          'safe_value' => 'perimeter (land)',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'perímetro (de la tierra)',
          'format' => 'filtered_html',
          'safe_value' => 'perímetro (de la tierra)',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'périmètre (terrain)',
          'format' => 'filtered_html',
          'safe_value' => 'périmètre (terrain)',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Perimeter (land)',
          'format' => 'plain_text',
          'safe_value' => 'Perimeter (land)',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'a perimeter is a boundary',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>a perimeter is a boundary</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Un perímetro es una línea que define un espacio delimitado al interior del cual se aplica una reglamentación particular. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Un perímetro es una línea que define un espacio delimitado al interior del cual se aplica una reglamentación particular.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Un périmètre est un espace délimite à l\'intérieur duquel s\'applique une règlementation particulière. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Un périmètre est un espace délimite à l\'intérieur duquel s\'applique une règlementation particulière.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'a perimeter is a boundary',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>a perimeter is a boundary</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3754,
          'revision_id' => 3754,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3754,
          'revision_id' => 3754,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3754,
          'revision_id' => 3754,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3754,
          'revision_id' => 3754,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3754,
          'revision_id' => 3754,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'perimeter (land)',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3754-0',
    'description_original' => 'a perimeter is a boundary',
  );
  $terms[] = array(
    'name' => 'forestry policies',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a0e1cc30-96fa-407b-b019-e50b4fa9cef6',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_3060',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'forestry policies',
          'format' => 'filtered_html',
          'safe_value' => 'forestry policies',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Política forestal',
          'format' => 'filtered_html',
          'safe_value' => 'Política forestal',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Politique forestière',
          'format' => 'filtered_html',
          'safe_value' => 'Politique forestière',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Política florestal',
          'format' => 'filtered_html',
          'safe_value' => 'Política florestal',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'forestry policies',
          'format' => 'plain_text',
          'safe_value' => 'forestry policies',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3867,
          'revision_id' => 3867,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3867,
          'revision_id' => 3867,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3867,
          'revision_id' => 3867,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3867,
          'revision_id' => 3867,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3867,
          'revision_id' => 3867,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'forestry policies',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3867-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Urbanisation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a300d935-8b42-462a-b14c-3dc5b9bf205b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'themes',
    'field_related_topics' => array(
      'und' => array(
        0 => array(
          'tid' => '12de1588-7958-4800-9433-074f1de729d2',
        ),
        1 => array(
          'tid' => '33bb3b85-465c-4d93-a574-b87d5cffc1df',
        ),
        2 => array(
          'tid' => '758c989a-4826-4219-a002-c60b8d8bc2cf',
        ),
        3 => array(
          'tid' => '9d1f5bd8-fd30-4284-8df1-fdf2147ed801',
        ),
        4 => array(
          'tid' => '31738ba0-1faa-4828-b3db-c2e2d8dcdb76',
        ),
        5 => array(
          'tid' => 'aeaff481-12a3-4929-bca3-55e87d43d8a4',
        ),
        6 => array(
          'tid' => '21c24005-24d8-4eb0-a3a8-2d93c0833d85',
        ),
        7 => array(
          'tid' => '8b750c7d-6dbf-4731-93c0-833598104a99',
        ),
        8 => array(
          'tid' => 'cba39812-c91f-4655-8d9c-b13ff37f9807',
        ),
        9 => array(
          'tid' => '16b6e4b4-a615-47e3-ad76-131648d90899',
        ),
        10 => array(
          'tid' => 'f9c7fdff-5432-41e5-8f2b-18fc7961b084',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7343,
          'revision_id' => 7343,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1461596436,
          'changed' => 1461596436,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Attribution-NonCommercial',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a5d05b88-1783-4d86-a95f-bb203d003986',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'licences',
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3652,
          'revision_id' => 3652,
          'language' => 'und',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431281909,
          'changed' => 1431281909,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'geographical information systems',
    'description' => 'An information system for capturing, storing, integrating, analyzing and displaying geospatial data.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a5d8e43f-2a0e-41a9-b35b-a58c8351ed7e',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_35131',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'geographical information systems',
          'format' => 'filtered_html',
          'safe_value' => 'geographical information systems',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Sistemas de información geográfica',
          'format' => 'filtered_html',
          'safe_value' => 'Sistemas de información geográfica',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Système d\'information géographique',
          'format' => 'filtered_html',
          'safe_value' => 'Système d&#039;information géographique',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Sistema de informação geográfica',
          'format' => 'filtered_html',
          'safe_value' => 'Sistema de informação geográfica',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Geographical information systems',
          'format' => 'plain_text',
          'safe_value' => 'Geographical information systems',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'An information system for capturing, storing, integrating, analyzing and displaying geospatial data.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>An information system for capturing, storing, integrating, analyzing and displaying geospatial data.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'An information system for capturing, storing, integrating, analyzing and displaying geospatial data.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>An information system for capturing, storing, integrating, analyzing and displaying geospatial data.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3831,
          'revision_id' => 3831,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3831,
          'revision_id' => 3831,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3831,
          'revision_id' => 3831,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3831,
          'revision_id' => 3831,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3831,
          'revision_id' => 3831,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'geographical information systems',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3831-0',
    'description_original' => 'An information system for capturing, storing, integrating, analyzing and displaying geospatial data.',
  );
  $terms[] = array(
    'name' => 'latifundium',
    'description' => 'a latifundium is a very large property.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ab3030b5-54a6-4076-b94b-34a6363f75a8',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_9c0e84b3',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'latifundium',
          'format' => 'filtered_html',
          'safe_value' => 'latifundium',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'latifundio',
          'format' => 'filtered_html',
          'safe_value' => 'latifundio',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'latifundium',
          'format' => 'filtered_html',
          'safe_value' => 'latifundium',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Latifundium',
          'format' => 'plain_text',
          'safe_value' => 'Latifundium',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'a latifundium is a very large property.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>a latifundium is a very large property.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Latifundio proviene de latín latus, ancho y fundus, propiedad rustica. Se denomina con éste nombre a las fincas de gran extensión que son generalmente objeto de una explotación deficiente por parte de su propietario, que generalmente es una sola persona. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Latifundio proviene de latín latus, ancho y fundus, propiedad rustica. Se denomina con éste nombre a las fincas de gran extensión que son generalmente objeto de una explotación deficiente por parte de su propietario, que generalmente es una sola persona.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Un latifundium est une grande propriété caractérisée a la fois par sa grande taille, de quelques centaines d\'hectares a des dizaines de milliers d\'hectares, et par sa très faible mise en valeur des terres. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Un latifundium est une grande propriété caractérisée a la fois par sa grande taille, de quelques centaines d\'hectares a des dizaines de milliers d\'hectares, et par sa très faible mise en valeur des terres.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'a latifundium is a very large property.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>a latifundium is a very large property.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3737,
          'revision_id' => 3737,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3737,
          'revision_id' => 3737,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3737,
          'revision_id' => 3737,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3737,
          'revision_id' => 3737,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3737,
          'revision_id' => 3737,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'latifundium',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3737-0',
    'description_original' => 'a latifundium is a very large property.',
  );
  $terms[] = array(
    'name' => 'environment',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ac0bc2d3-74b5-4b3d-95ea-389d2802aea3',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_2593',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'environment',
          'format' => 'filtered_html',
          'safe_value' => 'environment',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Medio ambiente',
          'format' => 'filtered_html',
          'safe_value' => 'Medio ambiente',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Environnement',
          'format' => 'filtered_html',
          'safe_value' => 'Environnement',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Ambiente',
          'format' => 'filtered_html',
          'safe_value' => 'Ambiente',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Environment',
          'format' => 'plain_text',
          'safe_value' => 'Environment',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1251,
          'revision_id' => 1251,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355180,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1251,
          'revision_id' => 1251,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355180,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1251,
          'revision_id' => 1251,
          'language' => 'und',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355180,
          'changed' => 1461767614,
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1251,
          'revision_id' => 1251,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1460557403,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1251,
          'revision_id' => 1251,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'environment',
    'entity_translation_handler_id' => 'taxonomy_term-eid-1251-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'grazing',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ac2d7f08-8dc2-45de-87e9-469471a1b9dd',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_25243',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'grazing',
          'format' => 'filtered_html',
          'safe_value' => 'grazing',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Pastoreo',
          'format' => 'filtered_html',
          'safe_value' => 'Pastoreo',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Pâturage',
          'format' => 'filtered_html',
          'safe_value' => 'Pâturage',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Pastoreio',
          'format' => 'filtered_html',
          'safe_value' => 'Pastoreio',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'grazing',
          'format' => 'plain_text',
          'safe_value' => 'grazing',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3799,
          'revision_id' => 3799,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3799,
          'revision_id' => 3799,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3799,
          'revision_id' => 3799,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3799,
          'revision_id' => 3799,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3799,
          'revision_id' => 3799,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'grazing',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3799-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'community land rights',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'acdbd82a-f6e5-462f-932c-1cb848360336',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_ff890f6b',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'community land rights',
          'format' => 'filtered_html',
          'safe_value' => 'community land rights',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'community land rights',
          'format' => NULL,
          'safe_value' => 'community land rights',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7041,
          'revision_id' => 7041,
          'language' => 'en',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1450092427,
          'changed' => 1450092427,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7041,
          'revision_id' => 7041,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7041,
          'revision_id' => 7041,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7041,
          'revision_id' => 7041,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7041,
          'revision_id' => 7041,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'community land rights',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7041-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'suburban agriculture',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'aeaff481-12a3-4929-bca3-55e87d43d8a4',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_18389',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'suburban agriculture',
          'format' => 'filtered_html',
          'safe_value' => 'suburban agriculture',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Agricultura peri urbana',
          'format' => 'filtered_html',
          'safe_value' => 'Agricultura peri urbana',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Agriculture périurbaine',
          'format' => 'filtered_html',
          'safe_value' => 'Agriculture périurbaine',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Agricultura suburbana',
          'format' => 'filtered_html',
          'safe_value' => 'Agricultura suburbana',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'suburban agriculture',
          'format' => 'plain_text',
          'safe_value' => 'suburban agriculture',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3842,
          'revision_id' => 3842,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3842,
          'revision_id' => 3842,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3842,
          'revision_id' => 3842,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3842,
          'revision_id' => 3842,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3842,
          'revision_id' => 3842,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'suburban agriculture',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3842-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'patrilineal',
    'description' => 'A patrilineal lineage group is one where the line of descent and membership is transmitted by the male.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'aff2815f-7bb3-43ec-9ea7-64b0027dfcd3',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_85dfd05c',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'patrilineal',
          'format' => 'filtered_html',
          'safe_value' => 'patrilineal',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'patrilineal',
          'format' => 'filtered_html',
          'safe_value' => 'patrilineal',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'patrilinéaire',
          'format' => 'filtered_html',
          'safe_value' => 'patrilinéaire',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Patrilineal',
          'format' => 'plain_text',
          'safe_value' => 'Patrilineal',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'A patrilineal lineage group is one where the line of descent and membership is transmitted by the male.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>A patrilineal lineage group is one where the line of descent and membership is transmitted by the male.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Patrilinaje, o linaje patrilineal, es cuando la filiación se transmite por la línea ancestral de los hombres. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Patrilinaje, o linaje patrilineal, es cuando la filiación se transmite por la línea ancestral de los hombres.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'On parle de patrilignage (ou de lignage patrilinéaire) si la filiation se transmet par les hommes. 
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>On parle de patrilignage (ou de lignage patrilinéaire) si la filiation se transmet par les hommes.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'A patrilineal lineage group is one where the line of descent and membership is transmitted by the male.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>A patrilineal lineage group is one where the line of descent and membership is transmitted by the male.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3753,
          'revision_id' => 3753,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3753,
          'revision_id' => 3753,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3753,
          'revision_id' => 3753,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3753,
          'revision_id' => 3753,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3753,
          'revision_id' => 3753,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'patrilineal',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3753-0',
    'description_original' => 'A patrilineal lineage group is one where the line of descent and membership is transmitted by the male.',
  );
  $terms[] = array(
    'name' => 'discriminatory tenure',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b0f06864-74ad-47c5-be33-ddcbc8f2b7f8',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'discriminatory tenure',
          'format' => NULL,
          'safe_value' => 'discriminatory tenure',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7311,
          'revision_id' => 7311,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1455095189,
          'changed' => 1455095189,
        ),
      ),
    ),
    'name_original' => 'discriminatory tenure',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7311-0',
    'description_original' => NULL,
  );
  $terms[] = array(
    'name' => 'Data source provider',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b1514f0c-d758-4608-84ad-38f247d5f0cc',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_relation',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6120,
          'revision_id' => 6120,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1442819283,
          'changed' => 1442819283,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'access to resources',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b1c075b0-bd56-4a46-9e30-89b722b48db1',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'access to resources',
          'format' => NULL,
          'safe_value' => 'access to resources',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7282,
          'revision_id' => 7282,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1453909547,
          'changed' => 1453909547,
        ),
      ),
    ),
    'name_original' => 'access to resources',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7282-0',
    'description_original' => NULL,
  );
  $terms[] = array(
    'name' => 'forest law',
    'description' => 'Forest law comprises the package of laws and regulations governing production and protection of forests, as well as those that regulate the powers of the administration in forests subject to the forest law.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b278ae20-4491-449c-aabb-bedc8d27eff2',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_8c59c597',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'forest law',
          'format' => 'filtered_html',
          'safe_value' => 'forest law',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'legislación forestal',
          'format' => 'filtered_html',
          'safe_value' => 'legislación forestal',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'droit forestier',
          'format' => 'filtered_html',
          'safe_value' => 'droit forestier',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Forest law',
          'format' => 'plain_text',
          'safe_value' => 'Forest law',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Forest law comprises the package of laws and regulations governing production and protection of forests, as well as those that regulate the powers of the administration in forests subject to the forest law.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Forest law comprises the package of laws and regulations governing production and protection of forests, as well as those that regulate the powers of the administration in forests subject to the forest law.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Droit forestier, formellement. Il s\'agit de l\'ensemble des dispositions comprenant les règles relatives à l\'exploitation, à la protection des forêts ainsi que celles règlementant les pouvoirs de l\'administration dans les forêts soumises au régime forestier.
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Droit forestier, formellement. Il s\'agit de l\'ensemble des dispositions comprenant les règles relatives à l\'exploitation, à la protection des forêts ainsi que celles règlementant les pouvoirs de l\'administration dans les forêts soumises au régime forestier.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Forest law comprises the package of laws and regulations governing production and protection of forests, as well as those that regulate the powers of the administration in forests subject to the forest law.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Forest law comprises the package of laws and regulations governing production and protection of forests, as well as those that regulate the powers of the administration in forests subject to the forest law.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3712,
          'revision_id' => 3712,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1431355068,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3712,
          'revision_id' => 3712,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3712,
          'revision_id' => 3712,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3712,
          'revision_id' => 3712,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3712,
          'revision_id' => 3712,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'forest law',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3712-0',
    'description_original' => 'Forest law comprises the package of laws and regulations governing production and protection of forests, as well as those that regulate the powers of the administration in forests subject to the forest law.',
  );
  $terms[] = array(
    'name' => 'Attribution-ShareAlike',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b340e1a0-fa8d-495d-8cc7-b4370dc746eb',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'licences',
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3653,
          'revision_id' => 3653,
          'language' => 'und',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431281909,
          'changed' => 1431281909,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'land tenure',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b5451c7a-e658-4120-8fd7-fe1acd098199',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_12069',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land tenure',
          'format' => 'filtered_html',
          'safe_value' => 'land tenure',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Tenencia de la tierra',
          'format' => 'filtered_html',
          'safe_value' => 'Tenencia de la tierra',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'tenure foncière',
          'format' => 'filtered_html',
          'safe_value' => 'tenure foncière',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land tenure',
          'format' => 'plain_text',
          'safe_value' => 'land tenure',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3846,
          'revision_id' => 3846,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3846,
          'revision_id' => 3846,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3846,
          'revision_id' => 3846,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3846,
          'revision_id' => 3846,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3846,
          'revision_id' => 3846,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'land tenure',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3846-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'rights in divorce',
    'description' => 'Legal framework and provisions applying in case of separation/divorce. ',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b7312d35-e143-4a91-a88d-09413aef749c',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_b3372020',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'rights in divorce',
          'format' => 'filtered_html',
          'safe_value' => 'rights in divorce',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'droits lors du divorce',
          'format' => 'filtered_html',
          'safe_value' => 'droits lors du divorce',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'rights in divorce',
          'format' => 'plain_text',
          'safe_value' => 'rights in divorce',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Legal framework and provisions applying in case of separation/divorce. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Legal framework and provisions applying in case of separation/divorce.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Règles juridiques applicables en cas de séparation ou divorce. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Règles juridiques applicables en cas de séparation ou divorce.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Legal framework and provisions applying in case of separation/divorce. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Legal framework and provisions applying in case of separation/divorce.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3763,
          'revision_id' => 3763,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3763,
          'revision_id' => 3763,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3763,
          'revision_id' => 3763,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3763,
          'revision_id' => 3763,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3763,
          'revision_id' => 3763,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'rights in divorce',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3763-0',
    'description_original' => 'Legal framework and provisions applying in case of separation/divorce. ',
  );
  $terms[] = array(
    'name' => 'development agencies',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'baa9738d-bbf6-4a05-834e-1f055123208e',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_2224',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'development agencies',
          'format' => 'filtered_html',
          'safe_value' => 'development agencies',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Agencias de desarrollo',
          'format' => 'filtered_html',
          'safe_value' => 'Agencias de desarrollo',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Agence de développement',
          'format' => 'filtered_html',
          'safe_value' => 'Agence de développement',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Agência de desenvolvimento',
          'format' => 'filtered_html',
          'safe_value' => 'Agência de desenvolvimento',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'development agencies',
          'format' => 'plain_text',
          'safe_value' => 'development agencies',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3808,
          'revision_id' => 3808,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3808,
          'revision_id' => 3808,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3808,
          'revision_id' => 3808,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3808,
          'revision_id' => 3808,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3808,
          'revision_id' => 3808,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'development agencies',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3808-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'land use',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bd657ba9-b442-4ef3-86c7-80379f9239e4',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_4182',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land use',
          'format' => 'filtered_html',
          'safe_value' => 'land use',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Utilización de la tierra',
          'format' => 'filtered_html',
          'safe_value' => 'Utilización de la tierra',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Utilisation des terres',
          'format' => 'filtered_html',
          'safe_value' => 'Utilisation des terres',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Uso da terra',
          'format' => 'filtered_html',
          'safe_value' => 'Uso da terra',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land use',
          'format' => NULL,
          'safe_value' => 'land use',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6487,
          'revision_id' => 6487,
          'language' => 'en',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456257711,
          'changed' => 1456257711,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6487,
          'revision_id' => 6487,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6487,
          'revision_id' => 6487,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6487,
          'revision_id' => 6487,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6487,
          'revision_id' => 6487,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'land use',
    'entity_translation_handler_id' => 'taxonomy_term-eid-6487-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'non indigenous peoples',
    'description' => 'Non-indigenous refers to an entity or concept that originally comes from outside the area specified.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bff5e1d0-ff34-43c4-b96b-715dcdf18808',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_28e0dafa',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'non indigenous peoples',
          'format' => 'filtered_html',
          'safe_value' => 'non indigenous peoples',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'foráneo',
          'format' => 'filtered_html',
          'safe_value' => 'foráneo',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'population allochtone',
          'format' => 'filtered_html',
          'safe_value' => 'population allochtone',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Non-indigenous refers to an entity or concept that originally comes from outside the area specified.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Non-indigenous refers to an entity or concept that originally comes from outside the area specified.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Foràneo, es el individuo extranjero, en referencia con los naturales del país o la región donde se instaló. Alude preferentemente al origen étnico u origen diferente respecto al de la población autóctona del país o región en referencia. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Foràneo, es el individuo extranjero, en referencia con los naturales del país o la región donde se instaló. Alude preferentemente al origen étnico u origen diferente respecto al de la población autóctona del país o región en referencia.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Population allochtone, provenant d\' un endroit différent ( contraire: autochtone). Ce terme renvoie aux conditions d\' intégration des migrants parmi les populations autochtones. 
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Population allochtone, provenant d\' un endroit différent ( contraire: autochtone). Ce terme renvoie aux conditions d\' intégration des migrants parmi les populations autochtones.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Non-indigenous refers to an entity or concept that originally comes from outside the area specified.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Non-indigenous refers to an entity or concept that originally comes from outside the area specified.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7438,
          'revision_id' => 7438,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557400,
          'changed' => 1460557400,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7438,
          'revision_id' => 7438,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557400,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7438,
          'revision_id' => 7438,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557400,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7438,
          'revision_id' => 7438,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7438,
          'revision_id' => 7438,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'non indigenous peoples',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7438-0',
    'description_original' => 'Non-indigenous refers to an entity or concept that originally comes from outside the area specified.',
  );
  $terms[] = array(
    'name' => 'community forestry',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c15a4f33-9704-48f0-b354-e6bc0a021dad',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_16532',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'community forestry',
          'format' => 'filtered_html',
          'safe_value' => 'community forestry',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'silvicultura comunitaria',
          'format' => 'filtered_html',
          'safe_value' => 'silvicultura comunitaria',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'foresterie communautaire',
          'format' => 'filtered_html',
          'safe_value' => 'foresterie communautaire',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Silvicultura comunitária',
          'format' => 'filtered_html',
          'safe_value' => 'Silvicultura comunitária',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'community forestry',
          'format' => 'plain_text',
          'safe_value' => 'community forestry',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3801,
          'revision_id' => 3801,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3801,
          'revision_id' => 3801,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3801,
          'revision_id' => 3801,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3801,
          'revision_id' => 3801,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3801,
          'revision_id' => 3801,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'community forestry',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3801-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Women',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c214617a-6bd6-4662-a5f2-b98e7740019f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => '',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Women',
          'format' => 'plain_text',
          'safe_value' => 'Women',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Women',
          'format' => 'plain_text',
          'safe_value' => 'Women',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Women',
          'format' => 'plain_text',
          'safe_value' => 'Women',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Women',
          'format' => 'plain_text',
          'safe_value' => 'Women',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1271,
          'revision_id' => 1271,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355180,
          'changed' => 1431355543,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1271,
          'revision_id' => 1271,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355180,
          'changed' => 1431355543,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1271,
          'revision_id' => 1271,
          'language' => 'und',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355180,
          'changed' => 1431355543,
        ),
      ),
    ),
    'name_original' => 'Women',
    'entity_translation_handler_id' => 'taxonomy_term-eid-1271-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'forest management plans',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c2340e93-1076-4ecf-9a04-a070d3f77d87',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_1374070277659',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'forest management plans',
          'format' => 'filtered_html',
          'safe_value' => 'forest management plans',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'planes de ordenación forestal',
          'format' => 'filtered_html',
          'safe_value' => 'planes de ordenación forestal',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'plan d\'aménagement forestier',
          'format' => 'filtered_html',
          'safe_value' => 'plan d&#039;aménagement forestier',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'forest management plans',
          'format' => 'plain_text',
          'safe_value' => 'forest management plans',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3814,
          'revision_id' => 3814,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3814,
          'revision_id' => 3814,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3814,
          'revision_id' => 3814,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3814,
          'revision_id' => 3814,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3814,
          'revision_id' => 3814,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'forest management plans',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3814-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'rural areas',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c3cb1731-7228-4857-ac17-40eca7f08647',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_6699',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'rural areas',
          'format' => 'filtered_html',
          'safe_value' => 'rural areas',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Zonas rurales',
          'format' => 'filtered_html',
          'safe_value' => 'Zonas rurales',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Zone rurale',
          'format' => 'filtered_html',
          'safe_value' => 'Zone rurale',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Zona rural',
          'format' => 'filtered_html',
          'safe_value' => 'Zona rural',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'rural areas',
          'format' => 'plain_text',
          'safe_value' => 'rural areas',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3873,
          'revision_id' => 3873,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3873,
          'revision_id' => 3873,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3873,
          'revision_id' => 3873,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3873,
          'revision_id' => 3873,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3873,
          'revision_id' => 3873,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'rural areas',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3873-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'landlessness',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c4427131-7189-4005-bb0f-f28c6de892bf',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_24403',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'landlessness',
          'format' => 'filtered_html',
          'safe_value' => 'landlessness',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Campesino sin tierra',
          'format' => 'filtered_html',
          'safe_value' => 'Campesino sin tierra',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Paysannat sans terre',
          'format' => 'filtered_html',
          'safe_value' => 'Paysannat sans terre',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Agricultor sem terra',
          'format' => 'filtered_html',
          'safe_value' => 'Agricultor sem terra',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Landlessness',
          'format' => 'plain_text',
          'safe_value' => 'Landlessness',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1261,
          'revision_id' => 1261,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1261,
          'revision_id' => 1261,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1261,
          'revision_id' => 1261,
          'language' => 'und',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1261,
          'revision_id' => 1261,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557394,
          'changed' => 1460557394,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1261,
          'revision_id' => 1261,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'landlessness',
    'entity_translation_handler_id' => 'taxonomy_term-eid-1261-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Landportal Hub',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c5cbd6e0-889f-4de1-98bc-02531293fc1c',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_relation',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6122,
          'revision_id' => 6122,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1442819331,
          'changed' => 1442819331,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'right of first occupancy',
    'description' => 'the right of first occupancy traditionally derives from the arrival and installation of people in an unoccupied area.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c661f52c-b87f-424a-b26a-fdfa9aea1150',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_9904d265',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'right of first occupancy',
          'format' => 'filtered_html',
          'safe_value' => 'right of first occupancy',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'derecho de primer ocupante',
          'format' => 'filtered_html',
          'safe_value' => 'derecho de primer ocupante',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'droit du premier occupant',
          'format' => 'filtered_html',
          'safe_value' => 'droit du premier occupant',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Right of first occupancy',
          'format' => 'plain_text',
          'safe_value' => 'Right of first occupancy',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'the right of first occupancy traditionally derives from the arrival and installation of people in an unoccupied area.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>the right of first occupancy traditionally derives from the arrival and installation of people in an unoccupied area.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Derecho del primer ocupante, entendiendo ocupante como aquel que se apropia de hecho de algún terreno según el principio la tierra pertenece al primer ocupante, se refiere a la adquisición de la propiedad como resultado de la toma en posesión de un bien mueble o de un bien inmueble sin dueño, con la intención de apropiárselo. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Derecho del primer ocupante, entendiendo ocupante como aquel que se apropia de hecho de algún terreno según el principio la tierra pertenece al primer ocupante, se refiere a la adquisición de la propiedad como resultado de la toma en posesión de un bien mueble o de un bien inmueble sin dueño, con la intención de apropiárselo.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Droit du premier occupant, acquisition de la propriété résultant de la prise de possession d\'une chose mobilière ou immobilière sans maitre, avec l\' intention de se l\' approprier.  
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Droit du premier occupant, acquisition de la propriété résultant de la prise de possession d\'une chose mobilière ou immobilière sans maitre, avec l\' intention de se l\' approprier.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'the right of first occupancy traditionally derives from the arrival and installation of people in an unoccupied area.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>the right of first occupancy traditionally derives from the arrival and installation of people in an unoccupied area.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3765,
          'revision_id' => 3765,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3765,
          'revision_id' => 3765,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3765,
          'revision_id' => 3765,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3765,
          'revision_id' => 3765,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3765,
          'revision_id' => 3765,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'right of first occupancy',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3765-0',
    'description_original' => 'the right of first occupancy traditionally derives from the arrival and installation of people in an unoccupied area.',
  );
  $terms[] = array(
    'name' => 'illegal occupation',
    'description' => 'Illegal occupation is the disposition of land without rights.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c666a5bb-274e-4096-925a-a5da7a7a3e02',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_8dd43c79',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'illegal occupation',
          'format' => 'filtered_html',
          'safe_value' => 'illegal occupation',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'ocupación ilegal',
          'format' => 'filtered_html',
          'safe_value' => 'ocupación ilegal',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'occupation illégale',
          'format' => 'filtered_html',
          'safe_value' => 'occupation illégale',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Illegal occupation',
          'format' => 'plain_text',
          'safe_value' => 'Illegal occupation',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Illegal occupation is the disposition of land without rights.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Illegal occupation is the disposition of land without rights.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Occupation illégale, utilisation d\'un lieu ou installation en un endroit, sans y avoir droit. 
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Occupation illégale, utilisation d\'un lieu ou installation en un endroit, sans y avoir droit.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Illegal occupation is the disposition of land without rights.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Illegal occupation is the disposition of land without rights.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3717,
          'revision_id' => 3717,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1431355068,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3717,
          'revision_id' => 3717,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3717,
          'revision_id' => 3717,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3717,
          'revision_id' => 3717,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3717,
          'revision_id' => 3717,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'illegal occupation',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3717-0',
    'description_original' => 'Illegal occupation is the disposition of land without rights.',
  );
  $terms[] = array(
    'name' => 'agricultural and rural legislation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c69753f9-41d9-4016-8210-5b1072e3db75',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_28633',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'agricultural and rural legislation',
          'format' => 'filtered_html',
          'safe_value' => 'agricultural and rural legislation',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Legislación agraria',
          'format' => 'filtered_html',
          'safe_value' => 'Legislación agraria',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Droit agricole et rural',
          'format' => 'filtered_html',
          'safe_value' => 'Droit agricole et rural',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Legislação agrária',
          'format' => 'filtered_html',
          'safe_value' => 'Legislação agrária',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'agricultural and rural legislation',
          'format' => 'plain_text',
          'safe_value' => 'agricultural and rural legislation',
        ),
      ),
    ),
    'synonyms_synonyms' => array(
      'und' => array(
        0 => array(
          'value' => 'agrarian law',
          'format' => NULL,
          'safe_value' => 'agrarian law',
        ),
      ),
    ),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3787,
          'revision_id' => 3787,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1455910634,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3787,
          'revision_id' => 3787,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3787,
          'revision_id' => 3787,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3787,
          'revision_id' => 3787,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3787,
          'revision_id' => 3787,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'agricultural and rural legislation',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3787-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'compulsory acquisitions',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c6f94f76-f677-4979-9a0c-8c485d460b41',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_95fedfc9',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'compulsory acquisitions',
          'format' => 'filtered_html',
          'safe_value' => 'compulsory acquisitions',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7462,
          'revision_id' => 7462,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557406,
          'changed' => 1460557406,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7462,
          'revision_id' => 7462,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557406,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7462,
          'revision_id' => 7462,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557406,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7462,
          'revision_id' => 7462,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7462,
          'revision_id' => 7462,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'compulsory acquisitions',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7462-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'collateral (land)',
    'description' => 'Property used as collateral is pledged as a guarantee for the repayment of a loan. The most common form of use of collateral is the mortgage.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c824b810-052c-491a-bfa0-fb8c3cbb3e6b',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_931da360',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'collateral (land)',
          'format' => 'filtered_html',
          'safe_value' => 'collateral (land)',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'garantía (fundo)',
          'format' => 'filtered_html',
          'safe_value' => 'garantía (fundo)',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'collatéral (bien foncier)',
          'format' => 'filtered_html',
          'safe_value' => 'collatéral (bien foncier)',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Collateral (land)',
          'format' => 'plain_text',
          'safe_value' => 'Collateral (land)',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Property used as collateral is pledged as a guarantee for the repayment of a loan. The most common form of use of collateral is the mortgage.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Property used as collateral is pledged as a guarantee for the repayment of a loan. The most common form of use of collateral is the mortgage.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Garantía, significa generalmente cualquier obligación que se contrae para la seguridad de otra obligación, propia o ajena. Caución, es la garantía que da una persona a otra frente a un compromiso adquirido. En el contexto de tierras es el compromiso adoptado por una persona física o moral (generalmente un banco) de ejecutar una obligación suscrita por un tercero, en caso de incumplimiento de éste.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Garantía, significa generalmente cualquier obligación que se contrae para la seguridad de otra obligación, propia o ajena. Caución, es la garantía que da una persona a otra frente a un compromiso adquirido. En el contexto de tierras es el compromiso adoptado por una persona física o moral (generalmente un banco) de ejecutar una obligación suscrita por un tercero, en caso de incumplimiento de éste.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Collatéral, bien mis en gage, comme garantie de remboursement. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Collatéral, bien mis en gage, comme garantie de remboursement.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Property used as collateral is pledged as a guarantee for the repayment of a loan. The most common form of use of collateral is the mortgage.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Property used as collateral is pledged as a guarantee for the repayment of a loan. The most common form of use of collateral is the mortgage.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3694,
          'revision_id' => 3694,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1431355068,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3694,
          'revision_id' => 3694,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3694,
          'revision_id' => 3694,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3694,
          'revision_id' => 3694,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3694,
          'revision_id' => 3694,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'collateral (land)',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3694-0',
    'description_original' => 'Property used as collateral is pledged as a guarantee for the repayment of a loan. The most common form of use of collateral is the mortgage.',
  );
  $terms[] = array(
    'name' => 'indigenous lands',
    'description' => 'territory whose owners legitimacy is drawn from prior occupancy (founding fathers). ',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c97f75b3-5c9e-45c2-bd1d-b5e206481e78',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_86524ff8',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'indigenous lands',
          'format' => 'filtered_html',
          'safe_value' => 'indigenous lands',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'tierras indígenas',
          'format' => 'filtered_html',
          'safe_value' => 'tierras indígenas',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'territoire indigène',
          'format' => 'filtered_html',
          'safe_value' => 'territoire indigène',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'indigenous lands',
          'format' => 'plain_text',
          'safe_value' => 'indigenous lands',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'territory whose owners legitimacy is drawn from prior occupancy (founding fathers). ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>territory whose owners legitimacy is drawn from prior occupancy (founding fathers).</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Territoire dont la propriété et l\'usage sont régis par le droit foncier coutumier (droit du premier occupant). ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Territoire dont la propriété et l\'usage sont régis par le droit foncier coutumier (droit du premier occupant).</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'territory whose owners legitimacy is drawn from prior occupancy (founding fathers). ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>territory whose owners legitimacy is drawn from prior occupancy (founding fathers).</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3719,
          'revision_id' => 3719,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1431355068,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3719,
          'revision_id' => 3719,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3719,
          'revision_id' => 3719,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3719,
          'revision_id' => 3719,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3719,
          'revision_id' => 3719,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'indigenous lands',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3719-0',
    'description_original' => 'territory whose owners legitimacy is drawn from prior occupancy (founding fathers). ',
  );
  $terms[] = array(
    'name' => 'informal settlements',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'cba39812-c91f-4655-8d9c-b13ff37f9807',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_ba3b2ea7',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'informal settlements',
          'format' => 'filtered_html',
          'safe_value' => 'informal settlements',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'informal settlements',
          'format' => NULL,
          'safe_value' => 'informal settlements',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7271,
          'revision_id' => 7271,
          'language' => 'en',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1453813799,
          'changed' => 1453813799,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7271,
          'revision_id' => 7271,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7271,
          'revision_id' => 7271,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7271,
          'revision_id' => 7271,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7271,
          'revision_id' => 7271,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'informal settlements',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7271-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'estate management',
    'description' => 'estate management is the maintenance or enhancement of the value of the land interests owned.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'cc5c16d9-d36a-4580-8ebf-7708d6725475',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_21323863',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'estate management',
          'format' => 'filtered_html',
          'safe_value' => 'estate management',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'gestión de bienes',
          'format' => 'filtered_html',
          'safe_value' => 'gestión de bienes',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'gestion de biens (fonciers)',
          'format' => 'filtered_html',
          'safe_value' => 'gestion de biens (fonciers)',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Estate management',
          'format' => 'plain_text',
          'safe_value' => 'Estate management',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'estate management is the maintenance or enhancement of the value of the land interests owned.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>estate management is the maintenance or enhancement of the value of the land interests owned.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Gestion de biens (fonciers), est l\'action d\'assurer l\'exploitation ou le maintien de la valeur de biens fonciers. 
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Gestion de biens (fonciers), est l\'action d\'assurer l\'exploitation ou le maintien de la valeur de biens fonciers.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'estate management is the maintenance or enhancement of the value of the land interests owned.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>estate management is the maintenance or enhancement of the value of the land interests owned.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3709,
          'revision_id' => 3709,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1431355068,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3709,
          'revision_id' => 3709,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3709,
          'revision_id' => 3709,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3709,
          'revision_id' => 3709,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3709,
          'revision_id' => 3709,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'estate management',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3709-0',
    'description_original' => 'estate management is the maintenance or enhancement of the value of the land interests owned.',
  );
  $terms[] = array(
    'name' => 'common property',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'cc9a4931-94e9-49b4-b3b4-e4fa582ae73c',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_9000022',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'common property',
          'format' => 'filtered_html',
          'safe_value' => 'common property',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Propiedad comunal',
          'format' => 'filtered_html',
          'safe_value' => 'Propiedad comunal',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Propriété commune',
          'format' => 'filtered_html',
          'safe_value' => 'Propriété commune',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Propriedade comum',
          'format' => 'filtered_html',
          'safe_value' => 'Propriedade comum',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Common Property',
          'format' => 'plain_text',
          'safe_value' => 'Common Property',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1247,
          'revision_id' => 1247,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1247,
          'revision_id' => 1247,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1247,
          'revision_id' => 1247,
          'language' => 'und',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767614,
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1247,
          'revision_id' => 1247,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1460557403,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1247,
          'revision_id' => 1247,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'common property',
    'entity_translation_handler_id' => 'taxonomy_term-eid-1247-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'land tax',
    'description' => 'A tax on the amount of land owned.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'cd22c471-e564-419c-9e07-856dcc61b442',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_4180',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land tax',
          'format' => 'filtered_html',
          'safe_value' => 'land tax',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Impuesto a la tierra',
          'format' => 'filtered_html',
          'safe_value' => 'Impuesto a la tierra',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Impôt foncier',
          'format' => 'filtered_html',
          'safe_value' => 'Impôt foncier',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Imposto sobre propriedade da terra',
          'format' => 'filtered_html',
          'safe_value' => 'Imposto sobre propriedade da terra',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land tax',
          'format' => 'plain_text',
          'safe_value' => 'land tax',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'A tax on the amount of land owned.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>A tax on the amount of land owned.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'A tax on the amount of land owned.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>A tax on the amount of land owned.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3821,
          'revision_id' => 3821,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3821,
          'revision_id' => 3821,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3821,
          'revision_id' => 3821,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3821,
          'revision_id' => 3821,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3821,
          'revision_id' => 3821,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'land tax',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3821-0',
    'description_original' => 'A tax on the amount of land owned.',
  );
  $terms[] = array(
    'name' => 'intensive land use',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ce77bb1e-e800-4864-9c0e-e67f3dc816b6',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_36551',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'intensive land use',
          'format' => 'filtered_html',
          'safe_value' => 'intensive land use',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Utilización intensiva de la tierra',
          'format' => 'filtered_html',
          'safe_value' => 'Utilización intensiva de la tierra',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Utilisation intensive des terres',
          'format' => 'filtered_html',
          'safe_value' => 'Utilisation intensive des terres',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Utilização intensiva da terra',
          'format' => 'filtered_html',
          'safe_value' => 'Utilização intensiva da terra',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'intensive land use',
          'format' => 'plain_text',
          'safe_value' => 'intensive land use',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3810,
          'revision_id' => 3810,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3810,
          'revision_id' => 3810,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3810,
          'revision_id' => 3810,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3810,
          'revision_id' => 3810,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3810,
          'revision_id' => 3810,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'intensive land use',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3810-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Access to Land & Tenure Security',
    'description' => '<p>Land tenure is the relationship, whether legally or customarily defined, among people, as individuals or groups, with respect to land. (For convenience, "land" is used here to include other natural resources such as water and trees.) Land tenure is an institution, i.e., rules invented by societies to regulate behaviour. Rules of tenure define how property rights to land are to be allocated within societies. They define how access is granted to rights to use, control, and transfer land, as well as associated responsibilities and restraints. In simple terms, land tenure systems determine who can use what resources for how long, and under what conditions.</p>

<p>Land tenure is an important part of social, political and economic structures. It is multi-dimensional, bringing into play social, technical, economic, institutional, legal and political aspects that are often ignored but must be taken into account. Land tenure relationships may be well-defined and enforceable in a formal court of law or through customary structures in a community. Alternatively, they may be relatively poorly defined with ambiguities open to exploitation.</p>

<p>[source:&nbsp;</p>

<p>http://www.gltn.net/index.php/land-tools/themes/access-to-land-and-tenure-security]</p>

<p>&nbsp;</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'domains',
    'field_related_topics' => array(
      'und' => array(
        0 => array(
          'tid' => 'b1c075b0-bd56-4a46-9e30-89b722b48db1',
        ),
        1 => array(
          'tid' => '652eed13-7165-4177-a780-0e2e77b0cf61',
        ),
        2 => array(
          'tid' => '6be60571-63a4-402e-b519-f1fa37fa59cd',
        ),
        3 => array(
          'tid' => '7923fe1b-eaa0-40f3-9d28-3d9b4b03c417',
        ),
        4 => array(
          'tid' => '6f22d7fe-e23b-4a4e-9995-a5b16def62bc',
        ),
        5 => array(
          'tid' => '9d0c7ab3-9bf5-4ee8-a0a2-2017447cfd06',
        ),
        6 => array(
          'tid' => '0a13c87c-e49d-4e3f-ab22-f6c82e6c7609',
        ),
        7 => array(
          'tid' => '5848a214-8158-4578-a6b4-0cf9187672cb',
        ),
        8 => array(
          'tid' => 'c666a5bb-274e-4096-925a-a5da7a7a3e02',
        ),
        9 => array(
          'tid' => 'c97f75b3-5c9e-45c2-bd1d-b5e206481e78',
        ),
        10 => array(
          'tid' => '4b609bed-6146-444a-95b4-cf57ce6a0d11',
        ),
        11 => array(
          'tid' => '37a3cf62-94d5-4832-82e8-1cdc18894624',
        ),
        12 => array(
          'tid' => '286e5a44-023a-4041-be35-a81e21697730',
        ),
        13 => array(
          'tid' => '3e8370bb-1ef7-46d2-afeb-86edad772c95',
        ),
        14 => array(
          'tid' => '33c542bc-fdbe-4374-8ff3-1db8c7535205',
        ),
        15 => array(
          'tid' => '758c989a-4826-4219-a002-c60b8d8bc2cf',
        ),
        16 => array(
          'tid' => '12212d7f-9c3f-46ee-aeae-d8cf08e53528',
        ),
        17 => array(
          'tid' => '6c990f0b-f385-4689-99a1-4e99b4ae5db3',
        ),
        18 => array(
          'tid' => '46fc5f3a-d5a9-4041-8f9b-a50d5763dbba',
        ),
        19 => array(
          'tid' => '6ed7cc8e-4184-4b5b-af2f-aa1367883c9d',
        ),
        20 => array(
          'tid' => 'ef882f64-9197-4e40-92f9-02602c13c666',
        ),
        21 => array(
          'tid' => 'c4427131-7189-4005-bb0f-f28c6de892bf',
        ),
        22 => array(
          'tid' => 'ef917104-7e3d-45c6-a4c7-576ca182c9f7',
        ),
        23 => array(
          'tid' => '96b52323-e2a2-4b03-8a1c-457661ad57af',
        ),
        24 => array(
          'tid' => '4386102f-5b35-42fe-9d84-be0f221d29c9',
        ),
        25 => array(
          'tid' => 'bff5e1d0-ff34-43c4-b96b-715dcdf18808',
        ),
        26 => array(
          'tid' => '52eeec74-4ee5-4d34-bc57-1ebfdc5ff6f1',
        ),
        27 => array(
          'tid' => '016e5047-8f0f-4f74-ae87-ddceebab85db',
        ),
        28 => array(
          'tid' => '963b93c4-55c1-40f5-bb50-f905240ae189',
        ),
        29 => array(
          'tid' => '5b9577a3-8eaf-42a6-a0e0-90daa8603189',
        ),
        30 => array(
          'tid' => '1d24d04b-20f0-431d-9b22-9ff43366d69b',
        ),
        31 => array(
          'tid' => 'aff2815f-7bb3-43ec-9ea7-64b0027dfcd3',
        ),
        32 => array(
          'tid' => '287d13da-66e5-432e-b0b3-f5456a0c3b2a',
        ),
        33 => array(
          'tid' => '794d047c-93e5-4fa6-bb3a-9b379fbfdf26',
        ),
        34 => array(
          'tid' => '8b044a2a-7560-49c3-9fcc-dc43c937d0ca',
        ),
        35 => array(
          'tid' => '3da5ca60-e9bc-412b-be21-8103eb65e1d9',
        ),
        36 => array(
          'tid' => '949b365c-4179-406c-9707-26bfa2bca2b4',
        ),
        37 => array(
          'tid' => 'f8a4ff58-982c-415a-8ce6-c9a17f9b4e1b',
        ),
        38 => array(
          'tid' => 'c661f52c-b87f-424a-b26a-fdfa9aea1150',
        ),
        39 => array(
          'tid' => 'b7312d35-e143-4a91-a88d-09413aef749c',
        ),
        40 => array(
          'tid' => '12594763-6522-441c-a03d-f72b0fc5f14f',
        ),
        41 => array(
          'tid' => '1e55a080-08e2-4529-85af-c3a49f056856',
        ),
        42 => array(
          'tid' => '5fb9de42-f11d-45f3-b58c-96dcda4c7368',
        ),
        43 => array(
          'tid' => 'ff9a0b46-76e1-4868-a4a9-03e3768c0972',
        ),
        44 => array(
          'tid' => '43a43997-cbec-41b9-92f2-a7ccf0c5e0ee',
        ),
        45 => array(
          'tid' => 'dd13caa6-b566-4d0c-9021-c7138abededa',
        ),
        46 => array(
          'tid' => 'd4a43270-77bc-47a6-a1ef-baf85546e115',
        ),
        47 => array(
          'tid' => 'da363a4d-711a-477d-b217-91fa975dcd99',
        ),
        48 => array(
          'tid' => '33fad031-7dea-42ba-8212-5c77ecac4f89',
        ),
        49 => array(
          'tid' => '31738ba0-1faa-4828-b3db-c2e2d8dcdb76',
        ),
        50 => array(
          'tid' => '12de1588-7958-4800-9433-074f1de729d2',
        ),
        51 => array(
          'tid' => 'e53bbebf-0765-47e4-823e-68b17fb19157',
        ),
        52 => array(
          'tid' => '41b11446-cd66-4796-9824-668df13797fb',
        ),
        53 => array(
          'tid' => 'e3230d24-89a4-4359-83d8-1c3372c5a6c1',
        ),
        54 => array(
          'tid' => '3dfe9c07-cd72-4a6d-834d-9b9db6182d41',
        ),
        55 => array(
          'tid' => 'cc9a4931-94e9-49b4-b3b4-e4fa582ae73c',
        ),
      ),
    ),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '2748e598-f12f-4ff9-9b26-8f18c7cdda22',
        ),
        1 => array(
          'tid' => '4c8373c6-8fb9-4439-af16-a8aa5c9a8138',
        ),
        2 => array(
          'tid' => '30505824-ccd9-4d7f-990e-84745b5df726',
        ),
        3 => array(
          'tid' => '6834ca25-ae73-4d0d-b257-e3aaa0b7154c',
        ),
        4 => array(
          'tid' => 'dd4dcec0-11c9-4819-85d2-3472eb7dbc6c',
        ),
        5 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
        6 => array(
          'tid' => '8bdb81e7-d676-42c3-9294-6811dd157385',
        ),
        7 => array(
          'tid' => '54e62811-e826-44cf-a2f7-49b76cf40087',
        ),
        8 => array(
          'tid' => '647c2b63-84c3-4e42-9575-a5676e7fd48c',
        ),
        9 => array(
          'tid' => 'a300d935-8b42-462a-b14c-3dc5b9bf205b',
        ),
      ),
    ),
    'field_related_domains' => array(),
    'field_image' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'uid' => 'c571526a-567e-4c48-bd1c-f4cec8f6eddb',
          'filename' => '2_1.png',
          'uri' => 'public://2_1_0.png',
          'filemime' => 'image/png',
          'filesize' => 3694,
          'status' => 1,
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'f7a1e320-7192-4eec-b4ac-d2ee69495a8c',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 120,
            'width' => 120,
          ),
          'alt' => '',
          'title' => '',
          'height' => 120,
          'width' => 120,
          'uuid_features_file_data' => 'iVBORw0KGgoAAAANSUhEUgAAAHgAAAB4CAYAAAA5ZDbSAAAACXBIWXMAAAsTAAALEwEAmpwYAAAAIGNIUk0AAHolAACAgwAA+f8AAIDpAAB1MAAA6mAAADqYAAAXb5JfxUYAAA30SURBVHja7F1bbCPVGf7GnhnHie2ML4mdODhJV1VPaaWWS2mBXUpfgEqoL22pVKgEAiQWKkGhpUI88FIhFZWlLagrUQkqQVUh9aWlD4WHVsByKS2sQC0cVdpt2CXEduz1LZvEjmfcB4+NY8+Zi2PHnuz5JGuzczlnzvnm/8//n/Off4RGowGOgwsP7wJOMAcnmIMTzMEJ5uAEc3CCOTjBnGAOTjAHJ5iDE8zBCebgBHNwgjnBHJxgDk4wByeYgxPMMTCIo34ASqnTW4SOv10fMUgIOdgEWyAA4LD+OwLgYgCxjvM5AB8AeA3ACf23weXWHQTfD+CHAJZNrokBuEb/AcD/ADwJ4AlO7fiOwQTA3wE8bkGuEZYBHNPvJ5ze8SP4VgDvAbh2j+Vcq5dzK1fR44PbADwzwPJkAM/qRtmzXIJHi88BOD6kso/r5XMJHpWbQCl9BICPdU0wGEQ4HIbP54PX620fV1UV1WoVhUIBlUqFdbsPwCOEkO+PiZu3rxBGvfmMUnodgJcMH04QkEgkMD09bVlOqVRCOp2GSXuuJ4S8bPIcyQ537HzL9SKEFIdJ8IXgB9/FIveiiy7C5OSkrUKmp6chSRLOnj3LIvkuAC8bEHQDgKMAvtV16kH9/B8AHCeEvOZGFT1SCaaURgDkjc7NzMwgGo06LjOfz2N9fZ11OkIIKeh1fwPA3QC+Y7Po3wF4khDyrpskeNRG1mFD81eWEYlE+iowEolAlmVmfZTSKymlfwTwNwfktly4dyilv6WUfplb0fZwDUvdCoLQn0oSBLMx+3sA3gDw7T088x0ATupEX8oJ7kOC7Y67LJjcf/MAn/0OAO8A+AWAQ5zg3vFXBvBVIwnsdIX6gdfr7UsD+Hw+xONxzMzMQJIku7c9gOas2TEAn+UEfwo/S8UOxHp0UI4kSZidncXS0hLC4TCi0SgWFxcRi8XsvmxTAH6kE30fn+hoYuRruaIoIhKJIBQKQRTFnnOxWAzT09MolUooFApQVdXOS/sEgKsA3HShEzwySJKEUCiESCRiKaGSJLWJPnfuHMrlsh2ivwvg5wB+ygneR3i9XiiKgnA43COxdl6KeDyOcDiMQqGAYrEIizmEB3WL/U+c4GEbGh4PwuEwFEVxYjyB5aPH43EoioJisWhF9FFO8BAgCEK70xVFQTQatSR2e3sbmqb1vBgTExOmFreiKMjlcqzFjut1X/9VTvAAsb29jUajgUAggEQiYXm9pmlYXV3Fzs5OD4nLy8uWrlUymcTKygq2t7eNLrltlAQfyLDZc+fOAYCj6U4jY8uJP64oCuvUrQA+zwkeELa2trC1tQWfzwe/379v9Rq5Wl1jMSd4kNKrKIqjyQ4jQ8nJSpvH4zGT4tsAfOZAj8GUUgXNxfQ5NBfTVwddR61WQ6VSgdfrtRUkMGi0fOVuYw3N+O6jaMacHQGwpvdB0fUEU0rv1hv3xa5T+UHXVSqV2urS47GvnARBQCwWQ71eb0u9pmlmy45MXzkQCKBcLrOk+Mddx/5NKT1OCPnN0DyKYS74U0qfh8MVHI/Hg6WlJcedq2kaTp06BVVVcejQoT37u/1ic3PTLKqEhd8TQm5x1RhMKf0ZBrs8Z4pKpQJVVREKhUZGLtBcqmT5zia4We8vdxBMKf0mgIdHYVyFw+GRG3omxpYZHtb7zRUSfHg/O/T8+fOoVquYmpraV9fIzNjy+Xxj0W/7SnAgEICiKHte0O9GPt+014LBIDRNM7JimeO23Z/dMbV1fSgUMpw4URQFgUBg3wgelhV9xOjgwsJCW41+/PHHPVOD/Ro1m5ubAIB0Oo1sNgtZlpFKpSwt6Ww2y7J4DdXu7OyspZt25swZaJrW44NLkoSFhYW2ZDOiMY+MvQRTSgXs3qTdg9b8rRNXhoVqtQpZljExMQGfzwdN01Cv123dq6qqIyl2UmbnmrHH40EymbSjtgW9/9w30dGNiYkJ+P1+nD9/fk/lhEIhhEIhCIIATdNw+vRp2+rUyUyX3Ws7V7Ja8Pv9/VjW7ia4pbb2is7x3OPxDCyma9zaOXZ+sN1JjUHCrhp1eztdQ/Ao32wuwX2CENIAYGjldI9NoxqXRmFvmPVDB+p6/429BFfsqFCfz+c4+M1tEEWxx3o2GUoqblHRtgj2eDxmTv+BQCAQ6BmDTQguu4Xgol0j6EIg2MhXdtJv40hwnjUJ0I3JycmepcF+pzI7JcWO5erEpbJTXvdzy7JsuBHORILPucUPztkl2OPxIBKJIJ1Otxt/9uzZvlyLRqPR7ryPPvrIksBqtWq77FKphK2tLUs3rZO8SCRi2A4TCc65heCMoYlocwqREX7qCFZkmCALYAZd0631et3281vBpJyMW1R02m7DisViW3rHBH8B8PxAOiGdRrFYdEJw2i0SvGaHYFVVkclkIAgC5ufnIYoiMpnMQCR4DzgOQALwg3593ng8jnq9jk8++QSZTAbBYHDX+GxC8JpbJPisHYJb66yyLCMYDMLv9+9aUhsB7iWE/IsQ8iZ6A+Qs4fP5sLCwAL/fj2AwCFmWd9kFNgg+4xaCTxkdrNVquxoniiIkSUKtVkOtVmsfSyaTAw8KMMF/0Qxn/Qoh5Netg4SQx9Hc5/scmllsLS3oZDLZnrhptUmSpF2TOfV6vd1WA5x2i4peMTq4s7MDVVXbDW4lTMnlciiVSpiZmWm7F4lEAqurzNDpGpobu3oMVABv6X9/DYDVW/IhIYRp2OiS/CYA6Jl1/oFmDsweJBKJXe5eqVRCo9HoSSijqqpZoMOKKwgmhGiU0tcBXG1EcqcKnp6eRj6fR6FQ2LW9MxgMtrdoGkBGM2Xw/YQQVm7ogSUuo5Tej2Z6Y0MoioJgMLirjYVCwTDjjwm5rxNCBr4cNszVpBN2XCBJkhCJRKBpGrLZ7K5zs7OzVvHRxyilf6WUDiXIj1J6mFL6khm5siz3hPJks1lomoZIJNKzkmRiQJ4YRhuGSfArdv3TaDQKURRRqVTa8VWtSZC5uTmrCYvrAbxGKX2MUjo5IGInKaWP6VrgOrOZsLm5uV2TGZubm6hUKhBF0TBTn4l//orbCP4nS4KNFh1a428ms3tI9Pv9tvb4AvgJgPcppTfukdwbAbyvl2eKRCLRE6bbev6ZmRnDRQYTCX7bVQQTQnIAPjSapuuU0s6xOBAIoFqttsNgO8/ZtKwPAXiRUvpon+Q+CuBFWCQ2a1nM3eNrPp9HtVpFIBAw3Py2ubnJmqb8gBCSd5sEM8cVVm7n2dlZCIKAXC7XY4wEg0EsLS3tMmZM8BCl9AWH5L4A4CGr61jPsbOzg1wuB0EQmOG1JjmtTwyLgGET/JzRwY2NDUNfUJZlhMNhNBoNw4yxkiQhmUwikUjYCYO5iVL6tE1yn4ZFXitJkpBIJJBMJg3rXl9fR6PRQDgcNjQMa7UaNjY2HPXT2BOs51heM1LTa2trhqEr0WgUXq8X5XKZ+cYrioLFxUU7+5DupJTeY0HuPQDuNLsmHA5jcXGRueeoUqmgXC7D6/UaGlaNRgNra2ss9ZwmhLhWggHgzyxr2miRwev1to2q1dVVlh8MURQRj8eRSqWspjafopRewiD3EgBPmU09plIpxONxZmhRsVhsT8gkEglDOyGdTptZz0NNs7QfBDM/tlEqlXqs5tY4Nzc31+6cdDrNXEOdnJxEKpWyGpuPOjyOYDCIVCrFzFyrqmr72QBgbm7O8BkymUx7Y7rT/nEFwYSQ99DMrG6IQqHQM8HRspxTqRQkSUKxWMTKygpTZXu9XszPz5ulEb7RyfHJyUnMz88zrfZKpYKVlRUUi0VIkoRUKmVoNWezWRQKBbPuuVvvn6Fh31L6U0p/CeBe1vloNNr2hTtRr9eRy+XaqjoQCCAWixmG3O7s7GBlZYUl7ZcSQk52qed3jV6WpaUlQ0Nqe3sbuVyubSwpioJYLGaovtfX13vcvS78CsB9ByalPyHkPjC+rtLyIY3UtSiKu6zXjY0N5HI5pqVrEsR3i8X/2y8Qy0JvkdtpzRuRm8lkrMh9CfuUdnhfdzYQQm6AvjrDUtdGJLfGxOXlZUSjUVPr2cHe28MO72/nkl5eXmaO+ZlMxkotvwnghv3q833fukIIuQrNVPhMkllfTWlNaU5NTTHLl2WZNXd9BaXUp6tnH4AresYrQTBd3JiamjKcguxUyxbkvoPmGjMOLME6yZcDOGmmri0sTyZEUTRbnPB1/dtDcL87LUqlkpVaPgng8v3u65FtPiOEXIpmPmUmyf0YgBYrTx6rdvez/bTRaFiR+waAkXyhZaS7CwkhVwN4ndVpo/7snhOCTZ7VMPDhgiBYx+2DkqRRwuR5bx/lcx3IdMIc40WwMMjxcK+SP4Q6BU7wgMkyuU8wq3MI9Y2c4HHYfW24J1bTNJTLZXg8HkdZc1RVNbu+1vVvj7HUWvZzUqdFmqXySKVnDD4QDTQD5YedMPtdAJd1TToM23U5DYvwn4P+edkWToygjhMHpF2uIPj4kMuvGdRxnKWqXdQu1xD8Fppf8RwGdtBc2O9ODkn14ztDqvcBfLqNhvvBaH6e9UoM9htDrwD4Epqby4zwjH5+kEHnr+rtODYOnTpuOYzeAvB1AF9AcznvCICQAymTAJTQ3JFwAsAHNu75EMC1AC7uqHPaYZ3ljjr/M04dOi5W9AWLC8WK5jioEswBLsEcnGAOlop++/bLeC9wCeZwK0QA3MriEszBCebgBHNwgjk4wRycYA5OMCeYgxPMwQnm4ARzcII5+sb/BwAtsmC9b08dMgAAAABJRU5ErkJggg==',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7340,
          'revision_id' => 7340,
          'language' => 'und',
          'source' => '',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1462464337,
          'changed' => 1462464337,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'land allocation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd02aafef-24b5-4261-bd21-46961bf89017',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_1464c114',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land allocation',
          'format' => 'filtered_html',
          'safe_value' => 'land allocation',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7452,
          'revision_id' => 7452,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1460557403,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7452,
          'revision_id' => 7452,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7452,
          'revision_id' => 7452,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7452,
          'revision_id' => 7452,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7452,
          'revision_id' => 7452,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'land allocation',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7452-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'sustainable land management',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd1034b93-1c0b-46e1-906a-b70b3f300aeb',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_36580',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'sustainable land management',
          'format' => 'filtered_html',
          'safe_value' => 'sustainable land management',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Ordenación de tierras sostenible',
          'format' => 'filtered_html',
          'safe_value' => 'Ordenación de tierras sostenible',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Gestion foncière durable',
          'format' => 'filtered_html',
          'safe_value' => 'Gestion foncière durable',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Ordenamento sustentável da terra',
          'format' => 'filtered_html',
          'safe_value' => 'Ordenamento sustentável da terra',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'sustainable land management',
          'format' => 'plain_text',
          'safe_value' => 'sustainable land management',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3863,
          'revision_id' => 3863,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3863,
          'revision_id' => 3863,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3863,
          'revision_id' => 3863,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3863,
          'revision_id' => 3863,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3863,
          'revision_id' => 3863,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'sustainable land management',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3863-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'state property',
    'description' => 'State property is property owned by the state.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd4a43270-77bc-47a6-a1ef-baf85546e115',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_22d01a32',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'state property',
          'format' => 'filtered_html',
          'safe_value' => 'state property',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'propiedad pública',
          'format' => 'filtered_html',
          'safe_value' => 'propiedad pública',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'propriété publique',
          'format' => 'filtered_html',
          'safe_value' => 'propriété publique',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'State property',
          'format' => 'plain_text',
          'safe_value' => 'State property',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'State property is property owned by the state.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>State property is property owned by the state.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Propiedad pública, es la propiedad poseída por cualquier nivel del gobierno. En los asuntos de bienes raíces, un buen número de reformas parten del principio según el cual, la tierra es propiedad del Estado. En este sentido, se habla de propiedad fiscal, o estatal, de la tierra. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Propiedad pública, es la propiedad poseída por cualquier nivel del gobierno. En los asuntos de bienes raíces, un buen número de reformas parten del principio según el cual, la tierra es propiedad del Estado. En este sentido, se habla de propiedad fiscal, o estatal, de la tierra.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'La propriété étatique fait référence à ce qui appartient à l\'Etat. Elle est effective si elle porte sur le domaine prive synonyme d\'un droit éminent sur les autres portions du domaine (public, national, etc.).',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>La propriété étatique fait référence à ce qui appartient à l\'Etat. Elle est effective si elle porte sur le domaine prive synonyme d\'un droit éminent sur les autres portions du domaine (public, national, etc.).</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'State property is property owned by the state.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>State property is property owned by the state.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3772,
          'revision_id' => 3772,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3772,
          'revision_id' => 3772,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3772,
          'revision_id' => 3772,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3772,
          'revision_id' => 3772,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3772,
          'revision_id' => 3772,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'state property',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3772-0',
    'description_original' => 'State property is property owned by the state.',
  );
  $terms[] = array(
    'name' => 'land investments',
    'description' => 'Acquisition of land for future benefits',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd7a33fbf-5f74-4c95-b461-69a72f6e0769',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_9a4f48b4',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land investments',
          'format' => 'filtered_html',
          'safe_value' => 'land investments',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'inversiones en tierras',
          'format' => 'filtered_html',
          'safe_value' => 'inversiones en tierras',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'investissement foncier',
          'format' => 'filtered_html',
          'safe_value' => 'investissement foncier',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land investments',
          'format' => 'plain_text',
          'safe_value' => 'land investments',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Acquisition of land for future benefits',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Acquisition of land for future benefits</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Acquisition de biens fonciers. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Acquisition de biens fonciers.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Acquisition of land for future benefits',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Acquisition of land for future benefits</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3731,
          'revision_id' => 3731,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1431355068,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3731,
          'revision_id' => 3731,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3731,
          'revision_id' => 3731,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3731,
          'revision_id' => 3731,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3731,
          'revision_id' => 3731,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'land investments',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3731-0',
    'description_original' => 'Acquisition of land for future benefits',
  );
  $terms[] = array(
    'name' => 'sustainable land use',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd8792d68-2bbe-4dc1-a794-7dde4cb0db69',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_bdedf48c',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'sustainable land use',
          'format' => 'filtered_html',
          'safe_value' => 'sustainable land use',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7460,
          'revision_id' => 7460,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557406,
          'changed' => 1460557406,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7460,
          'revision_id' => 7460,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557406,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7460,
          'revision_id' => 7460,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557406,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7460,
          'revision_id' => 7460,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7460,
          'revision_id' => 7460,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'sustainable land use',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7460-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'extensive land use',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd90b23ad-6e66-4d42-afe6-5bac6d921a54',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_36552',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'extensive land use',
          'format' => 'filtered_html',
          'safe_value' => 'extensive land use',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Utilización extensiva de la tierra',
          'format' => 'filtered_html',
          'safe_value' => 'Utilización extensiva de la tierra',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Utilisation extensive des terres',
          'format' => 'filtered_html',
          'safe_value' => 'Utilisation extensive des terres',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Utilização extensiva da terra',
          'format' => 'filtered_html',
          'safe_value' => 'Utilização extensiva da terra',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'extensive land use',
          'format' => 'plain_text',
          'safe_value' => 'extensive land use',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3809,
          'revision_id' => 3809,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3809,
          'revision_id' => 3809,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3809,
          'revision_id' => 3809,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3809,
          'revision_id' => 3809,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3809,
          'revision_id' => 3809,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'extensive land use',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3809-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Forest Rights',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'da161d46-383a-4f7d-974e-55b2b09688ba',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Forest Rights',
          'format' => NULL,
          'safe_value' => 'Forest Rights',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7284,
          'revision_id' => 7284,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1453911601,
          'changed' => 1453911601,
        ),
      ),
    ),
    'name_original' => 'Forest Rights',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7284-0',
    'description_original' => NULL,
  );
  $terms[] = array(
    'name' => 'tenant farmers',
    'description' => 'A tenant farmer is someone who holds a farm as a farmer or a share cropper.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'da363a4d-711a-477d-b217-91fa975dcd99',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_f73955fb',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'tenant farmers',
          'format' => 'filtered_html',
          'safe_value' => 'tenant farmers',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'tenedor',
          'format' => 'filtered_html',
          'safe_value' => 'tenedor',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'tenancier',
          'format' => 'filtered_html',
          'safe_value' => 'tenancier',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'tenant farmers',
          'format' => 'plain_text',
          'safe_value' => 'tenant farmers',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'A tenant farmer is someone who holds a farm as a farmer or a share cropper.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>A tenant farmer is someone who holds a farm as a farmer or a share cropper.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Tenedor, es quien ejerce la tenencia de una cosa mueble o inmueble, no como dueño, sino en lugar, o a nombre del dueño. En general, se denomina como tenedor, a todo el que tiene una cosa reconociendo domino ajeno. Ejemplo: el secuestre, el usufructuario, el arrendatario y el usuario son tenedores de la tierra, de un bien raíz o de un inmueble. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Tenedor, es quien ejerce la tenencia de una cosa mueble o inmueble, no como dueño, sino en lugar, o a nombre del dueño. En general, se denomina como tenedor, a todo el que tiene una cosa reconociendo domino ajeno. Ejemplo: el secuestre, el usufructuario, el arrendatario y el usuario son tenedores de la tierra, de un bien raíz o de un inmueble.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Tenancier, dans son sens le plus général, ce terme désigne une personne qui tient une exploitation(fermier, métayer). 
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Tenancier, dans son sens le plus général, ce terme désigne une personne qui tient une exploitation(fermier, métayer).</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'A tenant farmer is someone who holds a farm as a farmer or a share cropper.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>A tenant farmer is someone who holds a farm as a farmer or a share cropper.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3775,
          'revision_id' => 3775,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1455912044,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3775,
          'revision_id' => 3775,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3775,
          'revision_id' => 3775,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3775,
          'revision_id' => 3775,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3775,
          'revision_id' => 3775,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'tenant farmers',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3775-0',
    'description_original' => 'A tenant farmer is someone who holds a farm as a farmer or a share cropper.',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'common law',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'dc3f7f2c-9a49-4d21-9815-fbb79c1f0fd1',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_1783',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'common law',
          'format' => 'filtered_html',
          'safe_value' => 'common law',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Derecho común',
          'format' => 'filtered_html',
          'safe_value' => 'Derecho común',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Droit commun',
          'format' => 'filtered_html',
          'safe_value' => 'Droit commun',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Direito comum',
          'format' => 'filtered_html',
          'safe_value' => 'Direito comum',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'common law',
          'format' => 'plain_text',
          'safe_value' => 'common law',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3798,
          'revision_id' => 3798,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3798,
          'revision_id' => 3798,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3798,
          'revision_id' => 3798,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3798,
          'revision_id' => 3798,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3798,
          'revision_id' => 3798,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'common law',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3798-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'state forests',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'dd13caa6-b566-4d0c-9021-c7138abededa',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_14569',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'state forests',
          'format' => 'filtered_html',
          'safe_value' => 'state forests',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Bosques estatales',
          'format' => 'filtered_html',
          'safe_value' => 'Bosques estatales',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Forêt domaniale',
          'format' => 'filtered_html',
          'safe_value' => 'Forêt domaniale',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Floresta do estado',
          'format' => 'filtered_html',
          'safe_value' => 'Floresta do estado',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'state forests',
          'format' => 'plain_text',
          'safe_value' => 'state forests',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3845,
          'revision_id' => 3845,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3845,
          'revision_id' => 3845,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3845,
          'revision_id' => 3845,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3845,
          'revision_id' => 3845,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3845,
          'revision_id' => 3845,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'state forests',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3845-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Land Conflicts',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'dd4dcec0-11c9-4819-85d2-3472eb7dbc6c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'themes',
    'field_related_topics' => array(
      'und' => array(
        0 => array(
          'tid' => '33bd506e-e8eb-41f0-963e-0fb0b1e34673',
        ),
        1 => array(
          'tid' => '33c542bc-fdbe-4374-8ff3-1db8c7535205',
        ),
        2 => array(
          'tid' => '02afb854-359d-4686-9613-f0cdcd666d16',
        ),
        3 => array(
          'tid' => '3dfe9c07-cd72-4a6d-834d-9b9db6182d41',
        ),
        4 => array(
          'tid' => 'c6f94f76-f677-4979-9a0c-8c485d460b41',
        ),
        5 => array(
          'tid' => '3e1edd7d-4a64-4cce-a73c-98ef28d4a901',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7348,
          'revision_id' => 7348,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1461595995,
          'changed' => 1461595995,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'area',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e29e1469-a252-42d5-a8e5-ede7db10b66a',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_330588',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'area',
          'format' => 'filtered_html',
          'safe_value' => 'area',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'area',
          'format' => 'plain_text',
          'safe_value' => 'area',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3793,
          'revision_id' => 3793,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3793,
          'revision_id' => 3793,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3793,
          'revision_id' => 3793,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3793,
          'revision_id' => 3793,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3793,
          'revision_id' => 3793,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'area',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3793-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'sustainable development',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e2d4d37e-28c8-4ca5-a20b-1937dbe71208',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_35332',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'sustainable development',
          'format' => 'filtered_html',
          'safe_value' => 'sustainable development',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Desarrollo sostenible',
          'format' => 'filtered_html',
          'safe_value' => 'Desarrollo sostenible',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Développement durable',
          'format' => 'filtered_html',
          'safe_value' => 'Développement durable',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Desenvolvimento sustentável',
          'format' => 'filtered_html',
          'safe_value' => 'Desenvolvimento sustentável',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'sustainable development',
          'format' => NULL,
          'safe_value' => 'sustainable development',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7210,
          'revision_id' => 7210,
          'language' => 'en',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1451304461,
          'changed' => 1451304461,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7210,
          'revision_id' => 7210,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7210,
          'revision_id' => 7210,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7210,
          'revision_id' => 7210,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7210,
          'revision_id' => 7210,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'sustainable development',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7210-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'water rights',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e3230d24-89a4-4359-83d8-1c3372c5a6c1',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_16062',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'water rights',
          'format' => 'filtered_html',
          'safe_value' => 'water rights',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Derecho de aguas',
          'format' => 'filtered_html',
          'safe_value' => 'Derecho de aguas',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Réglementation des eaux',
          'format' => 'filtered_html',
          'safe_value' => 'Réglementation des eaux',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Direito relativo à água',
          'format' => 'filtered_html',
          'safe_value' => 'Direito relativo à água',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'water rights',
          'format' => 'plain_text',
          'safe_value' => 'water rights',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3854,
          'revision_id' => 3854,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3854,
          'revision_id' => 3854,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3854,
          'revision_id' => 3854,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3854,
          'revision_id' => 3854,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3854,
          'revision_id' => 3854,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'water rights',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3854-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Land Stakeholders & Institutions',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'themes',
    'field_related_topics' => array(
      'und' => array(
        0 => array(
          'tid' => 'baa9738d-bbf6-4a05-834e-1f055123208e',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7350,
          'revision_id' => 7350,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1461596062,
          'changed' => 1461596062,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'use rights',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e53bbebf-0765-47e4-823e-68b17fb19157',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_945c9e82',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'use rights',
          'format' => 'filtered_html',
          'safe_value' => 'use rights',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'derechos de uso',
          'format' => 'filtered_html',
          'safe_value' => 'derechos de uso',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'droits d\' usage',
          'format' => 'filtered_html',
          'safe_value' => 'droits d&#039; usage',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Use rights',
          'format' => 'plain_text',
          'safe_value' => 'Use rights',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3782,
          'revision_id' => 3782,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3782,
          'revision_id' => 3782,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3782,
          'revision_id' => 3782,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3782,
          'revision_id' => 3782,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3782,
          'revision_id' => 3782,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'use rights',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3782-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'land use planning',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ec0ef9d7-ea84-49ad-81d8-937e4af9e87b',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_37899',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land use planning',
          'format' => 'filtered_html',
          'safe_value' => 'land use planning',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Ordenación territorial',
          'format' => 'filtered_html',
          'safe_value' => 'Ordenación territorial',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Aménagement du territoire',
          'format' => 'filtered_html',
          'safe_value' => 'Aménagement du territoire',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Ordenamento do território',
          'format' => 'filtered_html',
          'safe_value' => 'Ordenamento do território',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land use planning',
          'format' => 'plain_text',
          'safe_value' => 'land use planning',
        ),
      ),
    ),
    'synonyms_synonyms' => array(
      'und' => array(
        0 => array(
          'value' => 'land planning',
          'format' => NULL,
          'safe_value' => 'land planning',
        ),
      ),
    ),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3838,
          'revision_id' => 3838,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1456244895,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3838,
          'revision_id' => 3838,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3838,
          'revision_id' => 3838,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767607,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3838,
          'revision_id' => 3838,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3838,
          'revision_id' => 3838,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767607,
          'changed' => 1461767607,
        ),
      ),
    ),
    'name_original' => 'land use planning',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3838-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'land transfers',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ef882f64-9197-4e40-92f9-02602c13c666',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_4181',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land transfers',
          'format' => 'filtered_html',
          'safe_value' => 'land transfers',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Asignación de tierras',
          'format' => 'filtered_html',
          'safe_value' => 'Asignación de tierras',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Mutation foncière',
          'format' => 'filtered_html',
          'safe_value' => 'Mutation foncière',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Transferência da terra (jurídica)',
          'format' => 'filtered_html',
          'safe_value' => 'Transferência da terra (jurídica)',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land transfers',
          'format' => 'plain_text',
          'safe_value' => 'land transfers',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3861,
          'revision_id' => 3861,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3861,
          'revision_id' => 3861,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3861,
          'revision_id' => 3861,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3861,
          'revision_id' => 3861,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3861,
          'revision_id' => 3861,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'land transfers',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3861-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'management rights',
    'description' => 'management rights are the rights to manage the interest in land in accordance with the limitations imposed by the interest.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ef917104-7e3d-45c6-a4c7-576ca182c9f7',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_862db225',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'management rights',
          'format' => 'filtered_html',
          'safe_value' => 'management rights',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'derechos de gestión',
          'format' => 'filtered_html',
          'safe_value' => 'derechos de gestión',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'droit de gestion',
          'format' => 'filtered_html',
          'safe_value' => 'droit de gestion',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Management rights',
          'format' => 'plain_text',
          'safe_value' => 'Management rights',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'management rights are the rights to manage the interest in land in accordance with the limitations imposed by the interest.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>management rights are the rights to manage the interest in land in accordance with the limitations imposed by the interest.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Derecho de gestión es el que se ejerce sobre el suelo y los recursos naturales, le confiere a su titular la potestad de reglamentar las formas de uso y de transformación de los recursos. Su titular tiene por lo tanto el derecho de realizar mejoras. El titular de un derecho de gestión, está autorizado también a descuidar el recurso sobre el cual se extiende el derecho. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Derecho de gestión es el que se ejerce sobre el suelo y los recursos naturales, le confiere a su titular la potestad de reglamentar las formas de uso y de transformación de los recursos. Su titular tiene por lo tanto el derecho de realizar mejoras. El titular de un derecho de gestión, está autorizado también a descuidar el recurso sobre el cual se extiende el derecho.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Le droit de gestion, sur la terre et les ressources naturelles qu\' elle supporte, confère a son titulaire l\' autorisation de règlementer les modes d\'usage et de transformation des ressources. Il a ainsi le droit de procéder a des améliorations. Mais s\'il le désire, être titulaire d\'un droit de gestion l\'autorise aussi a négliger la ressource sur laquelle ce droit porte. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Le droit de gestion, sur la terre et les ressources naturelles qu\' elle supporte, confère a son titulaire l\' autorisation de règlementer les modes d\'usage et de transformation des ressources. Il a ainsi le droit de procéder a des améliorations. Mais s\'il le désire, être titulaire d\'un droit de gestion l\'autorise aussi a négliger la ressource sur laquelle ce droit porte.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'management rights are the rights to manage the interest in land in accordance with the limitations imposed by the interest.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>management rights are the rights to manage the interest in land in accordance with the limitations imposed by the interest.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3740,
          'revision_id' => 3740,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3740,
          'revision_id' => 3740,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3740,
          'revision_id' => 3740,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3740,
          'revision_id' => 3740,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3740,
          'revision_id' => 3740,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'management rights',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3740-0',
    'description_original' => 'management rights are the rights to manage the interest in land in accordance with the limitations imposed by the interest.',
  );
  $terms[] = array(
    'name' => 'forest regulations',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f11c96a6-4bfb-4fa8-8fb6-665b93320d35',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_28079',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'forest regulations',
          'format' => 'filtered_html',
          'safe_value' => 'forest regulations',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Reglamentación forestal',
          'format' => 'filtered_html',
          'safe_value' => 'Reglamentación forestal',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Réglementation forestière',
          'format' => 'filtered_html',
          'safe_value' => 'Réglementation forestière',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Regulamentação florestal',
          'format' => 'filtered_html',
          'safe_value' => 'Regulamentação florestal',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'forest regulations',
          'format' => 'plain_text',
          'safe_value' => 'forest regulations',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3817,
          'revision_id' => 3817,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1431355172,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3817,
          'revision_id' => 3817,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3817,
          'revision_id' => 3817,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355172,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3817,
          'revision_id' => 3817,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3817,
          'revision_id' => 3817,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'forest regulations',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3817-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'local community',
    'description' => 'Local community is a traditional collectivity with a range of powers covering a certain geographical area and an autonomous management structure. ',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f5b1524f-72c6-4574-9f5e-8cca9c33877d',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_45cd8441',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'local community',
          'format' => 'filtered_html',
          'safe_value' => 'local community',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'comunidad local',
          'format' => 'filtered_html',
          'safe_value' => 'comunidad local',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'communauté locale',
          'format' => 'filtered_html',
          'safe_value' => 'communauté locale',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Local community',
          'format' => 'plain_text',
          'safe_value' => 'Local community',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Local community is a traditional collectivity with a range of powers covering a certain geographical area and an autonomous management structure. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Local community is a traditional collectivity with a range of powers covering a certain geographical area and an autonomous management structure.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Communauté locale, est une collectivité bénéficiant d\' un certain contrôle sur une aire géographique déterminée et de structures autonome de gestion. 
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Communauté locale, est une collectivité bénéficiant d\' un certain contrôle sur une aire géographique déterminée et de structures autonome de gestion.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Local community is a traditional collectivity with a range of powers covering a certain geographical area and an autonomous management structure. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Local community is a traditional collectivity with a range of powers covering a certain geographical area and an autonomous management structure.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3739,
          'revision_id' => 3739,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3739,
          'revision_id' => 3739,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3739,
          'revision_id' => 3739,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3739,
          'revision_id' => 3739,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3739,
          'revision_id' => 3739,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'local community',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3739-0',
    'description_original' => 'Local community is a traditional collectivity with a range of powers covering a certain geographical area and an autonomous management structure. ',
  );
  $terms[] = array(
    'name' => 'right of access',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f8a4ff58-982c-415a-8ce6-c9a17f9b4e1b',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_6604',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'right of access',
          'format' => 'filtered_html',
          'safe_value' => 'right of access',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Derecho de uso',
          'format' => 'filtered_html',
          'safe_value' => 'Derecho de uso',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'droit d\'usage',
          'format' => 'filtered_html',
          'safe_value' => 'droit d&#039;usage',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Direito de uso',
          'format' => 'filtered_html',
          'safe_value' => 'Direito de uso',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'right of access',
          'format' => 'plain_text',
          'safe_value' => 'right of access',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3857,
          'revision_id' => 3857,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355175,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3857,
          'revision_id' => 3857,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3857,
          'revision_id' => 3857,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1461767610,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3857,
          'revision_id' => 3857,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3857,
          'revision_id' => 3857,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767610,
          'changed' => 1461767610,
        ),
      ),
    ),
    'name_original' => 'right of access',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3857-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'squatters',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f9c7fdff-5432-41e5-8f2b-18fc7961b084',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_34ea1b1e',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'squatters',
          'format' => 'filtered_html',
          'safe_value' => 'squatters',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7458,
          'revision_id' => 7458,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1460557403,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7458,
          'revision_id' => 7458,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7458,
          'revision_id' => 7458,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1461767614,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7458,
          'revision_id' => 7458,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7458,
          'revision_id' => 7458,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767614,
          'changed' => 1461767614,
        ),
      ),
    ),
    'name_original' => 'squatters',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7458-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'sacred woods',
    'description' => 'A sacred wood is a wood which has a spiritual significance where the land is held by the local spirits and its spiritual character is venerated.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ff9a0b46-76e1-4868-a4a9-03e3768c0972',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landportal_topics',
    'field_language' => array(
      'und' => array(
        0 => array(
          'tid' => '4df363ab-6658-4c7f-bcaa-78e26dd184a0',
        ),
      ),
    ),
    'field_agrovoc_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://aims.fao.org/aos/agrovoc/c_c0a7f4fb',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'sacred woods',
          'format' => 'filtered_html',
          'safe_value' => 'sacred woods',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'bosques sagrados',
          'format' => 'filtered_html',
          'safe_value' => 'bosques sagrados',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'bois sacré',
          'format' => 'filtered_html',
          'safe_value' => 'bois sacré',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Sacred woods',
          'format' => 'plain_text',
          'safe_value' => 'Sacred woods',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'A sacred wood is a wood which has a spiritual significance where the land is held by the local spirits and its spiritual character is venerated.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>A sacred wood is a wood which has a spiritual significance where the land is held by the local spirits and its spiritual character is venerated.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Bois sacré, espace boise qui revêt une signification spirituelle, vénérée comme telle.
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Bois sacré, espace boise qui revêt une signification spirituelle, vénérée comme telle.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'A sacred wood is a wood which has a spiritual significance where the land is held by the local spirits and its spiritual character is venerated.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>A sacred wood is a wood which has a spiritual significance where the land is held by the local spirits and its spiritual character is venerated.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3768,
          'revision_id' => 3768,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1431355070,
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3768,
          'revision_id' => 3768,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3768,
          'revision_id' => 3768,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355070,
          'changed' => 1461767613,
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3768,
          'revision_id' => 3768,
          'language' => 'pt',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3768,
          'revision_id' => 3768,
          'language' => 'und',
          'source' => 'en',
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1461767613,
          'changed' => 1461767613,
        ),
      ),
    ),
    'name_original' => 'sacred woods',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3768-0',
    'description_original' => 'A sacred wood is a wood which has a spiritual significance where the land is held by the local spirits and its spiritual character is venerated.',
  );
  return $terms;
}
