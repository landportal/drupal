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
    'name' => 'codification',
    'description' => 'The process of codification id the development of a coherent legal code from an existing body of law.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '00f760d4-030c-4255-a8b7-9726d1556ab0',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3693-0',
    'description_original' => 'The process of codification id the development of a coherent legal code from an existing body of law.',
  );
  $terms[] = array(
    'name' => 'WB - Health and Nutrition Indicators',
    'description' => '<p>This dataset contains the indicators on health and nutrition (such as <em>Malnutrition Prevalence</em>, <em>Prevalence of HIV</em>, <em>Mortality rate under 5 years</em>, <em>Access to Improved water source</em>...), as provided by the World Bank.</p>
',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '013ed72c-6091-4461-9ce1-98c53160a0dc',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-HN',
          'format' => NULL,
          'safe_value' => 'WB-HN',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '78e2ad5a-ed53-4bc5-aafe-2d39f19da353',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6909,
          'revision_id' => 6909,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465395314,
          'changed' => 1465395314,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'open access (land)',
    'description' => 'Open access is a tenure where there is no control on access to resources: specific rights are not assigned to anyone and no-one can be excluded.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '016e5047-8f0f-4f74-ae87-ddceebab85db',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3748-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
      ),
    ),
    'name_original' => 'forestry',
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-1256-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Total Hectares in deals',
    'description' => '<p>Total Area (ha) calculated as the sum of all deals, in a gven country over the period 2000-2015. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession. It can be compared to the Total Number of Deals.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '020207d0-679d-4174-97bd-0be40658051b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'LM-HA1',
          'format' => NULL,
          'safe_value' => 'LM-HA1',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Ha',
          'format' => NULL,
          'safe_value' => 'Ha',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '54e62811-e826-44cf-a2f7-49b76cf40087',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6972,
          'revision_id' => 6972,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465548042,
          'changed' => 1465548042,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'land dispute',
    'description' => 'a land dispute is a disagreement over land.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '02afb854-359d-4686-9613-f0cdcd666d16',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3726-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7442-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Children in employment, female (% of female children ages 7-14)',
    'description' => '<p>Children in employment refer to the share (%) of children involved in economic activity for at least one hour in the reference week of the survey.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '03695a8b-d417-44e9-bd28-cfa73bf3e4ca',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '08313495-2fcc-450f-990c-95139099d968',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SL.TLF.0714.FE.ZS',
          'format' => NULL,
          'safe_value' => 'WB-SL.TLF.0714.FE.ZS',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7012,
          'revision_id' => 7012,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465463728,
          'changed' => 1465463728,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3690-0',
    'description_original' => 'The term cadastral register may include registers for any of the different types of cadastral systems identified in the definition of cadastres. ',
  );
  $terms[] = array(
    'name' => 'Human Development Index (HDI)',
    'description' => '<p>The Human Development Index (HDI) is a summary measure of average achievement in key dimensions of human development: a long and healthy life, being knowledgeable and have a decent standard of living. The HDI is the geometric mean of normalized indices for each of the three dimensions. Highier values are related to higher levels of human development.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '07fb438a-5632-4944-9170-ca40eee96026',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '9a5b44b5-3fc7-46ec-9d35-3edf40e69d41',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'UNDP-HDI-INDEX',
          'format' => NULL,
          'safe_value' => 'UNDP-HDI-INDEX',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Index (0; 1)',
          'format' => NULL,
          'safe_value' => 'Index (0; 1)',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7005,
          'revision_id' => 7005,
          'language' => 'und',
          'source' => '',
          'uid' => 8157,
          'status' => 1,
          'translate' => 0,
          'created' => 1466631178,
          'changed' => 1466631178,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'WB - Socio-Economic Indicators',
    'description' => '<p>This dataset contains a variety of socio-economic indicators (abour force participation, unemployment, GDP, GINI index...) provided by the World Bank.</p>
',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '08313495-2fcc-450f-990c-95139099d968',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SE',
          'format' => NULL,
          'safe_value' => 'WB-SE',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '78e2ad5a-ed53-4bc5-aafe-2d39f19da353',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6905,
          'revision_id' => 6905,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465395822,
          'changed' => 1465395822,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Mortality Rate - Under 5 (per 1\'000 Live Births)',
    'description' => '<p>Under-five mortality rate is the probability per 1,000 that a newborn baby will die before reaching age five, if subject to current age-specific mortality rates.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '08ee2c15-09e7-44bd-bad5-f781e96bcf9a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '573e86b6-632a-475e-9471-1d2477ac0a4f',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SH.DYN.MORT',
          'format' => NULL,
          'safe_value' => 'WB-SH.DYN.MORT',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Per 1\'000',
          'format' => NULL,
          'safe_value' => 'Per 1&#039;000',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7023,
          'revision_id' => 7023,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465487466,
          'changed' => 1465487466,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'grazing land rights',
    'description' => 'grazing land rights refer to the rights to use pastoral land for the survival and nourishment of livestock.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0a13c87c-e49d-4e3f-ab22-f6c82e6c7609',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3716-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3860-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Shares in Number Operated as Others',
    'description' => '<p>Share (%) of the total number of agricultural holdings under other forms of tenure (different from <em>ownership</em> or <em>tenancy</em>), in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0aa1a129-90f6-4c20-9d8c-2905762a5758',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-ACI-11',
          'format' => NULL,
          'safe_value' => 'FAO-ACI-11',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6923,
          'revision_id' => 6923,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465496339,
          'changed' => 1465496339,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'forest conservation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0af65510-05b9-49c1-b04d-356df98ef517',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3813-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3762-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3843-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3727-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7047-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3764-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
      ),
    ),
    'name_original' => 'climate change',
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-1245-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3849-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7331-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Area Operated as Others',
    'description' => '<p>Area (ha) of agricultural holdings under other forms of tenure (different from ownership or tenency), in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '16ccda33-364c-43db-9c7c-9b0f6cad3ea5',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-ACI-8',
          'format' => NULL,
          'safe_value' => 'FAO-ACI-8',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Ha',
          'format' => NULL,
          'safe_value' => 'Ha',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '4c8373c6-8fb9-4439-af16-a8aa5c9a8138',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6936,
          'revision_id' => 6936,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465409991,
          'changed' => 1465409991,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Discriminatory Familiy Code',
    'description' => '<p>The indicator is a component of the SIGI - Social Institutions and Gender Index and captures social institutions that limit women’s decision-making power and undervalue their status in the household and the family. These formal and informal laws, social norms and practices co-exist in different types of legal systems including civil or common law, customary law, and religious laws and cover areas such as marriage, parental authority and inheritance. Women’s decision-making power and status determine both their ability to choose their own development pathways and the well-being of their families. It ranges from 0 (no discrimination between women and men in both the formal and the customary family code) to 1 (Women are discriminated with respect to men both by the formal and the customary family code).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '16ff8b08-8db5-462b-83dc-585b869f37d3',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'OECD-SIGI-2',
          'format' => NULL,
          'safe_value' => 'OECD-SIGI-2',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Index (0; 1)',
          'format' => NULL,
          'safe_value' => 'Index (0; 1)',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '741b7bd9-9dd9-43f7-bbf1-4689077768a1',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '6834ca25-ae73-4d0d-b257-e3aaa0b7154c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6993,
          'revision_id' => 6993,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465465533,
          'changed' => 1465465533,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Employment in Agriculture (% Total Employment)',
    'description' => '<p>Employees are people who work for a public or private employer and receive remuneration in wages, salary, commission, tips, piece rates, or pay in kind.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '190074d8-a33b-4752-b7d5-ce8c572911ed',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'de6a3ad0-3109-41b9-ac54-9cdbe305b097',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SL.AGR.EMPL.ZS',
          'format' => NULL,
          'safe_value' => 'WB-SL.AGR.EMPL.ZS',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '6e6ab79d-bad7-425f-a719-93901e6f1027',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7014,
          'revision_id' => 7014,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465472011,
          'changed' => 1465472011,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Shares in Number Operated as Owner',
    'description' => '<p>Share (%) of the total number of agricultural holdings operated under ownership, in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '19038f3e-0805-40d8-8303-7f7117d8eff3',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-ACI-9',
          'format' => NULL,
          'safe_value' => 'FAO-ACI-9',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6921,
          'revision_id' => 6921,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465496521,
          'changed' => 1465496521,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'manure contract',
    'description' => 'a manure contract is an agreement where the herders supply the animals\' manure to the farmers\' land.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1956c0a5-89eb-4948-bf82-f09d8c7d917c',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3742-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3823-0',
    'description_original' => 'Land suitability is the fitness of a given type of land for a defined use. The land may be considered in its present condition or after improvements. The process of land suitability classification is the appraisal and grouping of specific areas of land in terms of their suitability for defined uses.',
  );
  $terms[] = array(
    'name' => 'Life expectancy at birth, female',
    'description' => '<p>Life expectancy at birth indicates the number of years a newborn infant would live if prevailing patterns of mortality at the time of its birth were to stay the same throughout its life.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1b331a6c-63e3-4a00-b8df-d178f469e077',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '573e86b6-632a-475e-9471-1d2477ac0a4f',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SP.DYN.LE00.FE.IN',
          'format' => NULL,
          'safe_value' => 'WB-SP.DYN.LE00.FE.IN',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7019,
          'revision_id' => 7019,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465486586,
          'changed' => 1465486586,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'pastoral land rights',
    'description' => 'pastoral land rights refer to the right to use specific pastoral land.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1d24d04b-20f0-431d-9b22-9ff43366d69b',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3752-0',
    'description_original' => 'pastoral land rights refer to the right to use specific pastoral land.',
  );
  $terms[] = array(
    'name' => 'Total Number of Tourism Deals',
    'description' => '<p>Total number of deals having as main object purposes related to Tourism, in a given country in a given year. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1dec08d2-30c8-4b74-bb2c-a3b20db40d3c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'LM-N11',
          'format' => NULL,
          'safe_value' => 'LM-N11',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '54e62811-e826-44cf-a2f7-49b76cf40087',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6966,
          'revision_id' => 6966,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465551432,
          'changed' => 1465551432,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Unemployment, youth male (% of male labor force ages 15-24) (modeled ILO estimate)',
    'description' => '<p>Youth unemployment refers to the share of the labor force ages 15-24 without work but available for and seeking employment. Unemployment, youth male (% of male labor force ages 15-24) (modeled ILO estimate).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1e006c9b-102f-4e87-a4ee-21d0d1fcd617',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '08313495-2fcc-450f-990c-95139099d968',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SL.UEM.1524.MA.ZS',
          'format' => NULL,
          'safe_value' => 'WB-SL.UEM.1524.MA.ZS',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7010,
          'revision_id' => 7010,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465552181,
          'changed' => 1465552181,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'property law',
    'description' => 'Property law is the generic term within which falls the legal framework dealing with property, its use, ownership, regulation and disposition. As such, property law applies both to real property and personal property, and is distinguished from land law which applies only to real property.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1e030e11-dbc4-4d54-8b5b-7973137d7766',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3759-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3767-0',
    'description_original' => 'riparian rights are those rights in respect of the use and entitlement to water enjoyed by a riparian owner whose land is contiguous with a river or a stream.',
  );
  $terms[] = array(
    'name' => 'Share of food expenditure of the poor',
    'description' => '<p>Proportion of food consumption over total consumption (food and non-food) for the lowest income quintile of the population.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '21264dfb-5598-4f96-b7f0-b142b2df5a97',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '704ff095-fce6-4e1d-9c24-4ca9ddd59bdf',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-21022-6121',
          'format' => NULL,
          'safe_value' => 'FAO-21022-6121',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '30505824-ccd9-4d7f-990e-84745b5df726',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6942,
          'revision_id' => 6942,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465495140,
          'changed' => 1465495140,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'town and country planning',
    'description' => 'Town and country planning is the planning framework within which decisions are made about how land is to be used.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '21c24005-24d8-4eb0-a3a8-2d93c0833d85',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3779-0',
    'description_original' => 'Town and country planning is the planning framework within which decisions are made about how land is to be used.',
  );
  $terms[] = array(
    'name' => 'Total number of agriculture deals',
    'description' => '<p>Total number of deals having as main object purposes related to agriculture, in a given country over the period 2000-2015. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession.&nbsp; It can be compared to the Total Number of Deals.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '239a0f14-42fc-403b-a36f-f8934307c53a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'LM-N6',
          'format' => NULL,
          'safe_value' => 'LM-N6',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '54e62811-e826-44cf-a2f7-49b76cf40087',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6976,
          'revision_id' => 6976,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465549034,
          'changed' => 1465549034,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'animal husbandry',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '26f862e0-b9df-4bb5-8178-a52be5ba65cf',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3791-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Relative arable land',
    'description' => '<p>Share (%) of Arable Land with respect to the Total Land Area.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '27652f06-fb3c-40e7-9404-fd480f34f804',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'd9039fd5-e3dc-4883-88f8-363956b48f39',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-X-6621-5110',
          'format' => NULL,
          'safe_value' => 'FAO-X-6621-5110',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '6e6ab79d-bad7-425f-a719-93901e6f1027',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6949,
          'revision_id' => 6949,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465492253,
          'changed' => 1465492253,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'land economics',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '278fcd9b-8eb1-438d-b4b4-62c6903a3a3b',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
          'url' => 'http://aims.fao.org/aos/agrovoc/c_25195',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land economics',
          'format' => 'filtered_html',
          'safe_value' => 'land economics',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Economía de la tierra',
          'format' => 'filtered_html',
          'safe_value' => 'Economía de la tierra',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Économie foncière',
          'format' => 'filtered_html',
          'safe_value' => 'Économie foncière',
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Economia da terra',
          'format' => 'filtered_html',
          'safe_value' => 'Economia da terra',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land economics',
          'format' => 'plain_text',
          'safe_value' => 'land economics',
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
          'entity_id' => 3829,
          'revision_id' => 3829,
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
          'entity_id' => 3829,
          'revision_id' => 3829,
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
          'entity_id' => 3829,
          'revision_id' => 3829,
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
          'entity_id' => 3829,
          'revision_id' => 3829,
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
          'entity_id' => 3829,
          'revision_id' => 3829,
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
    'name_original' => 'land economics',
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3829-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'land access',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '286e5a44-023a-4041-be35-a81e21697730',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3785-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3766-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7443-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Domestic food price level index',
    'description' => '<p>The Domestic Food Price Level Index is calculated by dividing the Food Purchasing Power Parity (FPPP) by the General PPP, thus proiding an index of the price of food in the country relative to the price of the generic cosnumption basket. Data are available for 2005 from the ICP Program . It is then extended to other years by adjusting both numerator and denominator using the relative chenges in Food CPI and General CPI as provided by ILO. It allows comparison of the relative price of food across countries and over time.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2a3c70e9-8932-401c-81a3-02298bb9fd5f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '704ff095-fce6-4e1d-9c24-4ca9ddd59bdf',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-21018-6125',
          'format' => NULL,
          'safe_value' => 'FAO-21018-6125',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Index',
          'format' => NULL,
          'safe_value' => 'Index',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '741b7bd9-9dd9-43f7-bbf1-4689077768a1',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '30505824-ccd9-4d7f-990e-84745b5df726',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6939,
          'revision_id' => 6939,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465471382,
          'changed' => 1465471382,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'land deals',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2c7396db-a39f-4f51-90c0-0c06adc1a7ec',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-6894-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Life expectancy at birth, male',
    'description' => '<p>Life expectancy at birth indicates the number of years a newborn infant would live if prevailing patterns of mortality at the time of its birth were to stay the same throughout its life.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2da1f0d0-776a-4cac-9d10-523f966f9f0a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '573e86b6-632a-475e-9471-1d2477ac0a4f',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SP.DYN.LE00.MA.IN',
          'format' => NULL,
          'safe_value' => 'WB-SP.DYN.LE00.MA.IN',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7018,
          'revision_id' => 7018,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465486788,
          'changed' => 1465486788,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total Hectares in Intended Deals',
    'description' => 'Total Area (ha) calculated as the sum of all Intended deals (with a negotiation status of “Expression of interest” or “Under negotiation”), in a given country over the period 2000-2015. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession.
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2fa43f94-040a-4d08-8943-1dd6f6c08935',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'LM-HA3',
          'format' => NULL,
          'safe_value' => 'LM-HA3',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Ha',
          'format' => NULL,
          'safe_value' => 'Ha',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '54e62811-e826-44cf-a2f7-49b76cf40087',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6969,
          'revision_id' => 6969,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465548233,
          'changed' => 1465548233,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Malnutrition prevalence, height for age',
    'description' => '<p>Prevalence of child malnutrition is the percentage of children under age 5 whose height for age (stunting) is more than two standard deviations below the median for the international reference population ages 0-59 months. For children up to two years old height is measured by recumbent length. For older children height is measured by stature while standing.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2fe25c86-8306-4b46-8689-8c449995a146',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '013ed72c-6091-4461-9ce1-98c53160a0dc',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SH.STA.STNT.ZS',
          'format' => NULL,
          'safe_value' => 'WB-SH.STA.STNT.ZS',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '30505824-ccd9-4d7f-990e-84745b5df726',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7027,
          'revision_id' => 7027,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465487279,
          'changed' => 1465487279,
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3869-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
      ),
    ),
    'name_original' => 'indigenous peoples',
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-1259-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3848-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-1249-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3725-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3855-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Poverty gap at Rural poverty line (%)',
    'description' => '<p>Poverty gap at rural poverty line is the mean shortfall from the poverty line (counting the nonpoor as having zero shortfall) as a percentage of the national rural poverty line. This measure reflects the depth of poverty as well as its incidence.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '34388034-53b2-43f7-947c-441f6994ef9b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '08313495-2fcc-450f-990c-95139099d968',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SI.POV.RUGP',
          'format' => NULL,
          'safe_value' => 'WB-SI.POV.RUGP',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7026,
          'revision_id' => 7026,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465491065,
          'changed' => 1465491065,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Shares in Area Operated under more than One Form of Tenure',
    'description' => '<p>Share (%) of the total area (ha) of agricultural holdings under more than one form of tenure, in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '35806cdb-80d4-4eaa-bec2-e6d29943f969',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-ACI-18',
          'format' => NULL,
          'safe_value' => 'FAO-ACI-18',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '4c8373c6-8fb9-4439-af16-a8aa5c9a8138',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6934,
          'revision_id' => 6934,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465496113,
          'changed' => 1465496113,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Urban Population',
    'description' => '<p>Urban population refers to the share (%) of people living in Urban areas as defined by national statistical offices. It is calculated as the ratio between Rural Population and Total Population.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '358d3b1a-f3ac-474e-a013-4261173cb980',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '573e86b6-632a-475e-9471-1d2477ac0a4f',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SP.URB.TOTL.IN.ZS',
          'format' => NULL,
          'safe_value' => 'WB-SP.URB.TOTL.IN.ZS',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'a300d935-8b42-462a-b14c-3dc5b9bf205b',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7035,
          'revision_id' => 7035,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465552303,
          'changed' => 1465552303,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total Number of Intended Deals',
    'description' => '<p>Total number of Intended deals, in a gven country in a given year. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession. It can be compared to the Total Number of Deals.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '369f500a-c2a5-40ed-8ebf-4be8281156e2',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'LM-N3',
          'format' => NULL,
          'safe_value' => 'LM-N3',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '54e62811-e826-44cf-a2f7-49b76cf40087',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6968,
          'revision_id' => 6968,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465551105,
          'changed' => 1465551105,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Number of rural households headed by women',
    'description' => '<p>It is the number of rural households headed by women in a given country in a given year, as measured by the Agricultural Census. It can be compared with the Total Number of Holdings.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3780e7af-2904-4e2d-a92f-3972d3ed7923',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'af8915e6-281d-41b5-af8b-e210de56cdc5',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOGENDER0',
          'format' => NULL,
          'safe_value' => 'INDFAOGENDER0',
        ),
      ),
    ),
    'field_unit' => array(),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6945,
          'revision_id' => 6945,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449699102,
          'changed' => 1449699102,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'informal property',
    'description' => 'Informal property consists in rights that lack formal, official recognition and protection.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '37a3cf62-94d5-4832-82e8-1cdc18894624',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3720-0',
    'description_original' => 'Informal property consists in rights that lack formal, official recognition and protection.',
  );
  $terms[] = array(
    'name' => 'Total number of agricultural holdings',
    'description' => '<p>Is the total number of Agricultural holding in a given country in a given (agricultural census) year. An agricultural holding is an economic unit of agricultural production under single management comprising all livestock kept and all land used wholly or partly for agricultural production purposes, without regard to title, legal form, or size. Single management may be exercised by an individual or household, jointly by two or more individuals or households, by a clan or tribe, or by a juridical person such as a corporation, cooperative or government agency. The holding\'s land may consist of one or more parcels, located in one or more separate areas.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '37ad9026-4aa0-4917-839d-e29415c26cd3',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-ACI-1',
          'format' => NULL,
          'safe_value' => 'FAO-ACI-1',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6932,
          'revision_id' => 6932,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465550827,
          'changed' => 1465550827,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'statutory tenure',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3a96b910-3f6d-4ad5-b6ee-73dd59bd0c27',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7459-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3871-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3856-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7445-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7446-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3723-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3832-0',
    'description_original' => 'Joining small plots of land together to form larger farms or large fields.',
  );
  $terms[] = array(
    'name' => 'Total Number of Failed Deals',
    'description' => '<p>Total number of failed deals, in a gven country over the period 2000-2015. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession. It can be compared to the Total Number of Deals.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '40d09f66-5815-4d73-a02c-8f9b8ec929ee',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'LM-N4',
          'format' => NULL,
          'safe_value' => 'LM-N4',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '54e62811-e826-44cf-a2f7-49b76cf40087',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6967,
          'revision_id' => 6967,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465550356,
          'changed' => 1465550356,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'waste',
    'description' => 'Waste technically refers to the owner\'s right to change the nature of the land whether for better or for worse, although the most common interpretation is of abuse of the land.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '41b11446-cd66-4796-9824-668df13797fb',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3783-0',
    'description_original' => 'Waste technically refers to the owner\'s right to change the nature of the land whether for better or for worse, although the most common interpretation is of abuse of the land.',
  );
  $terms[] = array(
    'name' => 'Discriminatory Familiy Code - Inheritance Rights of Widows',
    'description' => '<p>This indicator is a sub-component of the Discriminatory Family Code Indicator and measures whether widows and widowers have equal inheritance rights. It ranges from 0 to 1 and the interpretation is as follows:<br />
0: The law guarantees the same inheritance rights to both widows and widowers.<br />
0.5: The law guarantees the same inheritance rights to both widows and widowers, but there are some customary, traditional or religious practices that discriminate against widows.<br />
1: The law does not guarantee the same inheritance rights to widows and widowers, or widows have no inheritance rights at all.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '42520349-ee76-40cd-920b-b71d0baf8686',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'OECD-SIGI-10',
          'format' => NULL,
          'safe_value' => 'OECD-SIGI-10',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Index (0; 1)',
          'format' => NULL,
          'safe_value' => 'Index (0; 1)',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '741b7bd9-9dd9-43f7-bbf1-4689077768a1',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '6834ca25-ae73-4d0d-b257-e3aaa0b7154c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6991,
          'revision_id' => 6991,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465468748,
          'changed' => 1465468748,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Area Operated Under More than One Form of Tenure',
    'description' => '<p>Area (ha) of agricultural holdings operated under more than one form of tenancy, in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '432d823a-9f3e-4784-804f-12b65d59ef3f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-ACI-16',
          'format' => NULL,
          'safe_value' => 'FAO-ACI-16',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Ha',
          'format' => NULL,
          'safe_value' => 'Ha',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '4c8373c6-8fb9-4439-af16-a8aa5c9a8138',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6937,
          'revision_id' => 6937,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465410359,
          'changed' => 1465410359,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'matrilineal',
    'description' => 'A matrilineal lineage group is one where the line of descent and membership is transmitted by the female.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4386102f-5b35-42fe-9d84-be0f221d29c9',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3743-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3771-0',
    'description_original' => 'a servient tenement is a property that is subject to a right of easement.',
  );
  $terms[] = array(
    'name' => 'Prevalence of HIV, total (% of population ages 15-49)',
    'description' => '<p>Prevalence of HIV refers to the percentage of people ages 15-49 who are infected with HIV.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '447dec29-03f5-489f-ad9f-806dfcf15bbc',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '013ed72c-6091-4461-9ce1-98c53160a0dc',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SH.DYN.AIDS.ZS',
          'format' => NULL,
          'safe_value' => 'WB-SH.DYN.AIDS.ZS',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7021,
          'revision_id' => 7021,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465491693,
          'changed' => 1465491693,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'land loans',
    'description' => 'Land loan is the temporary cession of land use, normally without rent payable for its use.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '44bb361e-5066-4cc3-a57b-0b099244a126',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3733-0',
    'description_original' => 'Land loan is the temporary cession of land use, normally without rent payable for its use.',
  );
  $terms[] = array(
    'name' => 'Global Ranking in Social Institution and Gender Index (SIGI)',
    'description' => '<p>Global ranking by country for the SIGI - Social Institutions and Gender Index.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4575f982-b154-4ca3-9ac3-7a47f42a40af',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'OECD-SIGI-1',
          'format' => NULL,
          'safe_value' => 'OECD-SIGI-1',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Index (0; 1)',
          'format' => NULL,
          'safe_value' => 'Index (0; 1)',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '741b7bd9-9dd9-43f7-bbf1-4689077768a1',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '6834ca25-ae73-4d0d-b257-e3aaa0b7154c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6996,
          'revision_id' => 6996,
          'language' => 'und',
          'source' => '',
          'uid' => 8157,
          'status' => 1,
          'translate' => 0,
          'created' => 1466631352,
          'changed' => 1466631352,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'Undernourishment',
    'description' => '<p>The proportion of undernourished as a percentage of the population (reflecting the share of the population with insufficient calorie intake). This indicator is also used to calculate the Global Hunger Index (GHI).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '45db4aed-50ed-4597-b5d8-d2f7e7b32704',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '7afef5d8-54ee-41fd-8012-e40517bbb362',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'IFPRI-GHI-UNDERNOURISHMENT',
          'format' => NULL,
          'safe_value' => 'IFPRI-GHI-UNDERNOURISHMENT',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Index (0; 100)',
          'format' => NULL,
          'safe_value' => 'Index (0; 100)',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '30505824-ccd9-4d7f-990e-84745b5df726',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6956,
          'revision_id' => 6956,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465551593,
          'changed' => 1465551593,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Area Operated as Owner',
    'description' => '<p>Area (ha) of agricultural holdings operated under ownership, in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '45ea0c31-db24-4c0f-ba5f-58060bec55c3',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-ACI-6',
          'format' => NULL,
          'safe_value' => 'FAO-ACI-6',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Ha',
          'format' => NULL,
          'safe_value' => 'Ha',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '4c8373c6-8fb9-4439-af16-a8aa5c9a8138',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6929,
          'revision_id' => 6929,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465409841,
          'changed' => 1465409841,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total Number of Conservation Deals',
    'description' => '<p>Total number of deals having as main object purposes related to Conservation, in a given country over the period 2000-2015. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession. It can be compared to the Total Number of Deals.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4660db50-7d4c-4db5-9397-3fe911bb46f8',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'LM-N7',
          'format' => NULL,
          'safe_value' => 'LM-N7',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '54e62811-e826-44cf-a2f7-49b76cf40087',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6978,
          'revision_id' => 6978,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465549349,
          'changed' => 1465549349,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'scale',
    'description' => 'The scale is the relationship between the representation of an object on a plan or map, and its size in reality.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '46d76deb-ea26-4a65-aefc-0bb2c51be428',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3769-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3734-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3746-0',
    'description_original' => 'The notary is both a conveyancing lawyer and a public official responsible for seeing that the conveyance is properly undertaken. The notary is a vital part of the system of land transactions in many jurisdictions in continental Europe. The notary is bound by a strict code of ethics, enforced by the relevant national bodies.',
  );
  $terms[] = array(
    'name' => 'Unemployment, female (% of female labor force)',
    'description' => '<p>Unemployment refers to the share of the labor force that is without work but available for and seeking employment. Unemployment, female (% of female labor force).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4aa1818b-a199-40d9-8e08-183a4be609ca',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '08313495-2fcc-450f-990c-95139099d968',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SL.UEM.TOTL.FE.ZS',
          'format' => NULL,
          'safe_value' => 'WB-SL.UEM.TOTL.FE.ZS',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7009,
          'revision_id' => 7009,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465551873,
          'changed' => 1465551873,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'indigenous tenure',
    'description' => 'Specific land access and land use principles, in force in particular traditional ethnic groups. ',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4b609bed-6146-444a-95b4-cf57ce6a0d11',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3721-0',
    'description_original' => 'Specific land access and land use principles, in force in particular traditional ethnic groups. ',
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
    'entity_translation_handler_id' => 'taxonomy_term-languages-eid-540-0',
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'Unemployment, male (% of male labor force)',
    'description' => '<p>Unemployment refers to the share of the labor force that is without work but available for and seeking employment. Unemployment, male (% of male labor force).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4fc19547-a34a-49dc-9537-8130720d2c73',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '08313495-2fcc-450f-990c-95139099d968',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SL.UEM.TOTL.MA.ZS',
          'format' => NULL,
          'safe_value' => 'WB-SL.UEM.TOTL.MA.ZS',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7008,
          'revision_id' => 7008,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465552003,
          'changed' => 1465552003,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total hectares in concluded deals',
    'description' => '<p>Total Area (ha) calculated as the sum of all concluded deals, in a gven country over the period 2000-2015. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession. It can be compared to the Total Hectares in Deals.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5007ae1a-642d-465b-bf62-75596dea8bde',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'LM-HA2',
          'format' => NULL,
          'safe_value' => 'LM-HA2',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Ha',
          'format' => NULL,
          'safe_value' => 'Ha',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '54e62811-e826-44cf-a2f7-49b76cf40087',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6973,
          'revision_id' => 6973,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465546685,
          'changed' => 1465546685,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'ASTI - Agricultural Science and Technology Indicators (IFPRI/CGIAR/FAO)',
    'description' => '<p>This dataset contains Agricultural Science and Technology Indicators as provided by IFPRI.</p>
',
    'format' => 'filtered_html',
    'weight' => 14,
    'uuid' => '507b3bec-ad6d-4d9d-971b-52bd053c55de',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-ASTI',
          'format' => NULL,
          'safe_value' => 'FAO-ASTI',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '11005528-e13b-45b2-814a-5bb54c84bdfe',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '6e6ab79d-bad7-425f-a719-93901e6f1027',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6906,
          'revision_id' => 6906,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465396544,
          'changed' => 1465396544,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Child Mortality',
    'description' => '<p>The mortality rate of children younger than the age of five (partially reflecting the fatal synergy of inadequate dietary intake and unhealthy environments). This indicator is also used to calculate the Global Hunger Index (GHI).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '519a3d6f-529a-4b3d-9f4d-7595f33f1a5f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '7afef5d8-54ee-41fd-8012-e40517bbb362',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'IFPRI-GHI-CHILD_MORTALITY',
          'format' => NULL,
          'safe_value' => 'IFPRI-GHI-CHILD_MORTALITY',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '30505824-ccd9-4d7f-990e-84745b5df726',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6959,
          'revision_id' => 6959,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465410623,
          'changed' => 1465410623,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3790-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3747-0',
    'description_original' => 'Occupation is the physical disposition of land.',
  );
  $terms[] = array(
    'name' => 'Labor force participation rate, female (% of female population ages 15+) (modeled ILO estimate)',
    'description' => '<p>Labor force participation rate is the proportion of the population ages 15 and older that is economically active: all people who supply labor for the production of goods and services during a specified period.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '541a1673-2b3b-4f4d-94d3-f73ba82949fd',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '08313495-2fcc-450f-990c-95139099d968',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SL.TLF.CACT.FE.ZS',
          'format' => NULL,
          'safe_value' => 'WB-SL.TLF.CACT.FE.ZS',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7013,
          'revision_id' => 7013,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465485872,
          'changed' => 1465485872,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Global Ranking of Restricted Resources and Entitlements',
    'description' => '<p>Global Rank of Restricted Resources and Entitlements index, a sub-index of the Social Insititution and Gender Index (SIGI).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '56c2325c-3008-4ee9-96c6-4f06dae1e664',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'OECD-SIGI-7',
          'format' => NULL,
          'safe_value' => 'OECD-SIGI-7',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Rank',
          'format' => NULL,
          'safe_value' => 'Rank',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '741b7bd9-9dd9-43f7-bbf1-4689077768a1',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '6834ca25-ae73-4d0d-b257-e3aaa0b7154c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6998,
          'revision_id' => 6998,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465480454,
          'changed' => 1465480454,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'WB - Demographic Indicators',
    'description' => '<p>This dataset contains demographic indicators (such as&nbsp;<em>female and male population,</em>&nbsp;s<em>hare of urban and rural population</em>,&nbsp;<em>total population, fertility rate...)</em>&nbsp;as provided by the World Bank.</p>
',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '573e86b6-632a-475e-9471-1d2477ac0a4f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-DEM',
          'format' => NULL,
          'safe_value' => 'WB-DEM',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '78e2ad5a-ed53-4bc5-aafe-2d39f19da353',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6910,
          'revision_id' => 6910,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465395008,
          'changed' => 1465395008,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Surface area',
    'description' => '<p>Surface area is a country\'s total area (sq. km), including areas under inland bodies of water and some coastal waterways.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '57642206-6298-4ccd-942f-51757c2683f5',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'de6a3ad0-3109-41b9-ac54-9cdbe305b097',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-AG.SRF.TOTL.K2',
          'format' => NULL,
          'safe_value' => 'WB-AG.SRF.TOTL.K2',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'sq. km',
          'format' => NULL,
          'safe_value' => 'sq. km',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7036,
          'revision_id' => 7036,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465497619,
          'changed' => 1465497619,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Forest land',
    'description' => '<p>It measures the area (1\'000 Ha) covered by forest. The forest is aa portion of land bigger than half a hectare &nbsp;with trees higher than 5 meters and a tree canopy cover of more than 10 %, or with trees that will be able to meet these criteria. It does not include land that is predominantly under agricultural or urban land use.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '580df573-9b4f-4edc-8066-1b0f893c7949',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'd9039fd5-e3dc-4883-88f8-363956b48f39',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-6661-5110',
          'format' => NULL,
          'safe_value' => 'FAO-6661-5110',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => '1\'000 Ha',
          'format' => NULL,
          'safe_value' => '1&#039;000 Ha',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '6e6ab79d-bad7-425f-a719-93901e6f1027',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '2748e598-f12f-4ff9-9b26-8f18c7cdda22',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6951,
          'revision_id' => 6951,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465492411,
          'changed' => 1465492411,
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3800-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Population aged 15-64',
    'description' => '<p>Total population between the ages 15 to 64 is the number of people who could potentially be economically active.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '58ba0b75-98a4-4e31-97e4-0e4f2eaf5c93',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '573e86b6-632a-475e-9471-1d2477ac0a4f',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SP.POP.1564.TO.ZS',
          'format' => NULL,
          'safe_value' => 'WB-SP.POP.1564.TO.ZS',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7032,
          'revision_id' => 7032,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465489687,
          'changed' => 1465489687,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'gender equity in access to land',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '59bf9a9e-726d-4ca3-9a5c-7afc975d250e',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7450-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Poverty headcount ratio at $1.90 a day (2011 PPP) (% of population)',
    'description' => '<p>Population below $1.90 a day is the percentage of the population living on less than $1.90 a day at 2011 international prices. As a result of revisions in PPP exchange rates, poverty rates for individual countries cannot be compared with poverty rates reported in earlier editions.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5acd021d-e316-420a-a51c-8087a682eea6',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '08313495-2fcc-450f-990c-95139099d968',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SI.POV.DDAY',
          'format' => NULL,
          'safe_value' => 'WB-SI.POV.DDAY',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7025,
          'revision_id' => 7025,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465491403,
          'changed' => 1465491403,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total number of agricultural holders',
    'description' => '<p>Is the total number of Agricultural holders in a given country in a given year. The agricultural holder is defined as the person who makes the major decisions regarding resource use and exercises management control over the agricultural holding operation. The agricultural holder has technical and economic responsibility for the holding. The agricultural holding can be under single management or there may be more than one joint holder in a holding. A joint holder is a person making the major decisions regarding resource use and exercising management control over the agricultural holding operations, in conjunction with another person (Numbers of Holdings under Women and Men Co-Ownership).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5b2de91c-ff41-4dd3-81d8-f94d12948477',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'af8915e6-281d-41b5-af8b-e210de56cdc5',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-LG.1T',
          'format' => NULL,
          'safe_value' => 'FAO-LG.1T',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6948,
          'revision_id' => 6948,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465548852,
          'changed' => 1465548852,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'parcel plan',
    'description' => 'A parcel plan is generally a large scale map of an area showing all of the property parcels and their use, the boundaries and the distance between them and the buildings and improvements. ',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5b9577a3-8eaf-42a6-a0e0-90daa8603189',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3750-0',
    'description_original' => 'A parcel plan is generally a large scale map of an area showing all of the property parcels and their use, the boundaries and the distance between them and the buildings and improvements. ',
  );
  $terms[] = array(
    'name' => 'Global Ranking of Restricted Civil Liberties',
    'description' => '<p>Global Ranking of Restricted Civil Liberties, a sub-index of the Social Insititution and Gender Index (SIGI).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5bc04d44-c4b6-484f-9eb8-7aa9e99f2120',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'OECD-SIGI-5',
          'format' => NULL,
          'safe_value' => 'OECD-SIGI-5',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Index (0; 1)',
          'format' => NULL,
          'safe_value' => 'Index (0; 1)',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '741b7bd9-9dd9-43f7-bbf1-4689077768a1',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '6834ca25-ae73-4d0d-b257-e3aaa0b7154c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7000,
          'revision_id' => 7000,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465482719,
          'changed' => 1465482719,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'communal land',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5c7c94f4-a902-4db9-990e-98cc5de45875',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7327-0',
    'description_original' => NULL,
  );
  $terms[] = array(
    'name' => 'Number of agricultural holdings operated as others',
    'description' => '<p>Number of agricultural holdings under other form of tenure (different from ownership and tenancy) in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5c8253e9-e598-42f6-bf47-2f6d27d50c7b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-ACI-5',
          'format' => NULL,
          'safe_value' => 'FAO-ACI-5',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6933,
          'revision_id' => 6933,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465487687,
          'changed' => 1465487687,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'scrublands',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5e0b272e-94fa-42ac-98e7-ca5761f2af6b',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3844-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7245-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 1,
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3834-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3868-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3862-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Number of agricultural holdings operated as Owner',
    'description' => '<p>Number of agricultural holdings under ownership in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '606e83ca-c86b-4c7d-a209-dab2b3f6b4e8',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-ACI-3',
          'format' => NULL,
          'safe_value' => 'FAO-ACI-3',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6926,
          'revision_id' => 6926,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465488076,
          'changed' => 1465488076,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'OECD - Social Institutions and Gender Index Database',
    'description' => '<p>Also known as the&nbsp;<em>Gender, Institutions and Development&nbsp;Database - OECD</em>, the SIGI dataset&nbsp;address the<em>&nbsp;de jure</em>&nbsp;and&nbsp;<em>de facto</em>&nbsp;situations of discriminatory social institutions across five sub-indices: d<em>iscriminatory family code</em>, r<em>estricted physical integrity</em>, s<em>on bias</em>, r<em>estricted resources</em> <em>and assets,</em>&nbsp;and<em>&nbsp;restricted civil liberties</em>. Each of the sub-indexes contains sub-dimensions, but not all of them are included in the LB. The SIGI index is computed as an unweighted average of&nbsp;the score for all five sub-indices. The dataset includes the 2009 (partially), the 2012 and 2014 releases of the SIGI Database.</p>
',
    'format' => 'filtered_html',
    'weight' => 12,
    'uuid' => '60861559-fc4d-4704-8407-b9886bad3448',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'OECD-SIGI',
          'format' => NULL,
          'safe_value' => 'OECD-SIGI',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => 'bdc94490-a786-481a-ad33-2aa84edbdfba',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6904,
          'revision_id' => 6904,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465396016,
          'changed' => 1465396016,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'pastoral lands',
    'description' => 'Pastoral land is land used by pastoralists and shepherds for grazing livestock.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '60f1c72e-7510-4bba-8813-837ba13fc3ab',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3751-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3713-0',
    'description_original' => 'International consensus on liberalization of goods exchange. ',
  );
  $terms[] = array(
    'name' => 'security of tenure (land)',
    'description' => 'Security of tenure is the guarantee of continued occupancy or use rights whether by virtue of formal rights, customary rules or other forms of assurance.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '652eed13-7165-4177-a780-0e2e77b0cf61',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7213-0',
    'description_original' => 'Security of tenure is the guarantee of continued occupancy or use rights whether by virtue of formal rights, customary rules or other forms of assurance.',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'forest lands',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '65328f0f-acfd-4923-95e3-7ac9a5df25d9',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
          'entity_id' => 7301,
          'revision_id' => 7301,
          'language' => 'und',
          'source' => '',
          'uid' => 8157,
          'status' => 1,
          'translate' => 0,
          'created' => 1467035447,
          'changed' => 1467035447,
        ),
      ),
    ),
    'name_original' => 'forest lands',
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7301-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'land law',
    'description' => 'Land law is the body of law dealing with land, its definition, ownership and use whether urban or rural.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6533f9c0-c024-4671-9545-008b24bee67e',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3732-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3715-0',
    'description_original' => 'A grazing contract or licence is a legal contract for an agreement, for example between a farmer and a grazier, specifying the terms under which the latter can use the identified land of the former for grazing purposes.',
  );
  $terms[] = array(
    'name' => 'land inheritance rights',
    'description' => 'Legal provisions applying in case of territorial succession. ',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '656ae357-2c18-48f9-81aa-3d4437b45084',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
          'url' => 'http://aims.fao.org/aos/agrovoc/c_70a14ab3',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'land inheritance rights',
          'format' => 'filtered_html',
          'safe_value' => 'land inheritance rights',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'derechos de herencia sobre la tierra',
          'format' => 'filtered_html',
          'safe_value' => 'derechos de herencia sobre la tierra',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'droit d\' héritage sur la terre',
          'format' => 'filtered_html',
          'safe_value' => 'droit d&#039; héritage sur la terre',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'land inheritance rights',
          'format' => 'plain_text',
          'safe_value' => 'land inheritance rights',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Legal provisions applying in case of territorial succession. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Legal provisions applying in case of territorial succession.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Mesures légales régissant les successions territoriales. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Mesures légales régissant les successions territoriales.</p>
',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Legal provisions applying in case of territorial succession. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Legal provisions applying in case of territorial succession.</p>
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
          'entity_id' => 3730,
          'revision_id' => 3730,
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
          'entity_id' => 3730,
          'revision_id' => 3730,
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
          'entity_id' => 3730,
          'revision_id' => 3730,
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
          'entity_id' => 3730,
          'revision_id' => 3730,
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
          'entity_id' => 3730,
          'revision_id' => 3730,
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
    'name_original' => 'land inheritance rights',
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3730-0',
    'description_original' => 'Legal provisions applying in case of territorial succession. ',
  );
  $terms[] = array(
    'name' => 'Prevalence of undernourishment (%) (3-year average)',
    'description' => '<p>The Prevalence of Undernourishment expresses the probability that a randomly selected individual from the population consumes an amount of calories that is insufficient to cover her/his energy requirement for an active and healthy life. The indicator is computed by comparing a probability distribution of habitual daily Dietary Energy Consumption with a threshold level called the Minimum Dietary Energy Requirement. Both are based on the notion of an average individual in the reference population. This is the traditional FAO hunger indicator, adopted as official Millennium Development Goal indicator for Goal 1, Target 1.9. More details on the methodology for computing the Prevalence of undernourishment are in Annex 2 of the State of Food Insecurity in the World 2013 Report.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '678054c7-3b0a-40b9-be00-8419fbf5b1ca',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '704ff095-fce6-4e1d-9c24-4ca9ddd59bdf',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-21004-6121',
          'format' => NULL,
          'safe_value' => 'FAO-21004-6121',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '30505824-ccd9-4d7f-990e-84745b5df726',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6943,
          'revision_id' => 6943,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465491899,
          'changed' => 1465491899,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Shares in Number Operated under more than One Form of Tenure',
    'description' => '<p>Share (%) of the total number of agricultural holdings operated under more than one form of tenure, in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '68f000f9-3ca7-4a8f-9dd2-39fe25a92f51',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-ACI-17',
          'format' => NULL,
          'safe_value' => 'FAO-ACI-17',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6924,
          'revision_id' => 6924,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465496932,
          'changed' => 1465496932,
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3818-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3830-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3795-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3788-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3870-0',
    'description_original' => 'Areas of land whose main purpose it to curb the outward expansion of a large urban area and in which development is strictly controlled.',
  );
  $terms[] = array(
    'name' => 'Land use, Management & Investment',
    'description' => '<p>The objective of land use planning is to ensure that land and its resources are used efficiently for the benefit of the wider economy and population, while protecting the environment.&nbsp;</p>

<p>Land management&nbsp;is the process of&nbsp;managing&nbsp;the use and development (in both urban and rural settings) ofland&nbsp;resources.&nbsp;Land&nbsp;resources are used for a variety of purposes which may include organic agriculture, reforestation, water resource&nbsp;management&nbsp;and eco-tourism projects.<br />
<br />
Land investment is referred to as a long term investment and with land prices on the rise in many parts of the world, it is said to be the safest and smartest way of investing ones money.&nbsp;</p>

<p>Source: <a href="http://www.gltn.net/index.php/land-tools/themes/land-management-and-planning">GLTN</a>&nbsp;&amp; <a href="https://en.wikipedia.org/wiki/Land_management">Wikipedia</a>&nbsp;&amp; <a href="http://www.economywatch.com/investment/land-investment.html">Economy Watch</a></p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6e6ab79d-bad7-425f-a719-93901e6f1027',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'overarching_categories',
    'field_related_topics' => array(
      'und' => array(
        0 => array(
          'tid' => '85235b18-1b64-42a9-8f1c-3189fc74087c',
        ),
        1 => array(
          'tid' => '5253e548-3a31-4dbf-b391-0c7c72caff4d',
        ),
        2 => array(
          'tid' => '26f862e0-b9df-4bb5-8178-a52be5ba65cf',
        ),
        3 => array(
          'tid' => '811f8040-064c-4f16-b422-39c9208a016a',
        ),
        4 => array(
          'tid' => 'e29e1469-a252-42d5-a8e5-ede7db10b66a',
        ),
        5 => array(
          'tid' => '06c23697-6305-4b2f-bf46-04f6b25d9ad6',
        ),
        6 => array(
          'tid' => '6be60571-63a4-402e-b519-f1fa37fa59cd',
        ),
        7 => array(
          'tid' => '7923fe1b-eaa0-40f3-9d28-3d9b4b03c417',
        ),
        8 => array(
          'tid' => 'c824b810-052c-491a-bfa0-fb8c3cbb3e6b',
        ),
        9 => array(
          'tid' => 'c15a4f33-9704-48f0-b354-e6bc0a021dad',
        ),
        10 => array(
          'tid' => '6018cfd1-4850-4d34-89dd-e8ef13bd1c05',
        ),
        11 => array(
          'tid' => 'cc5c16d9-d36a-4580-8ebf-7708d6725475',
        ),
        12 => array(
          'tid' => 'd90b23ad-6e66-4d42-afe6-5bac6d921a54',
        ),
        13 => array(
          'tid' => '0af65510-05b9-49c1-b04d-356df98ef517',
        ),
        14 => array(
          'tid' => '9f394331-4b1f-4b1a-b429-b785b011f80c',
        ),
        15 => array(
          'tid' => 'c2340e93-1076-4ecf-9a04-a070d3f77d87',
        ),
        16 => array(
          'tid' => '81260e71-964d-47ae-a44a-5e8b01f22755',
        ),
        17 => array(
          'tid' => 'a5d8e43f-2a0e-41a9-b35b-a58c8351ed7e',
        ),
        18 => array(
          'tid' => '698f91b4-0017-42d1-937d-b415a2dc196a',
        ),
        19 => array(
          'tid' => '9d0c7ab3-9bf5-4ee8-a0a2-2017447cfd06',
        ),
        20 => array(
          'tid' => 'ac2d7f08-8dc2-45de-87e9-469471a1b9dd',
        ),
        21 => array(
          'tid' => '6554a494-6844-447b-87e5-54606182f196',
        ),
        22 => array(
          'tid' => '0a13c87c-e49d-4e3f-ab22-f6c82e6c7609',
        ),
        23 => array(
          'tid' => '5848a214-8158-4578-a6b4-0cf9187672cb',
        ),
        24 => array(
          'tid' => '6e5a7c32-b826-4fdc-95d1-ff5453883b2e',
        ),
        25 => array(
          'tid' => 'c97f75b3-5c9e-45c2-bd1d-b5e206481e78',
        ),
        26 => array(
          'tid' => '4b609bed-6146-444a-95b4-cf57ce6a0d11',
        ),
        27 => array(
          'tid' => 'ce77bb1e-e800-4864-9c0e-e67f3dc816b6',
        ),
        28 => array(
          'tid' => '3e8370bb-1ef7-46d2-afeb-86edad772c95',
        ),
        29 => array(
          'tid' => '28f44231-1773-485a-b65d-764c683eb4c0',
        ),
        30 => array(
          'tid' => '3f41afef-1eec-437c-b8a8-f426af4a6de8',
        ),
        31 => array(
          'tid' => '9b32b10d-b3f0-4f32-b8d0-e90640619036',
        ),
        32 => array(
          'tid' => '97746d45-2db0-45b1-a037-c6eae85ae01f',
        ),
        33 => array(
          'tid' => '8cf95e12-39ef-474b-b73c-0a674fc9e546',
        ),
        34 => array(
          'tid' => '10223c15-5cec-4ffd-ba89-3c4d77b83a28',
        ),
        35 => array(
          'tid' => '6b47d013-ba88-4e6f-81b7-f4a071768c5f',
        ),
        36 => array(
          'tid' => 'd7a33fbf-5f74-4c95-b461-69a72f6e0769',
        ),
        37 => array(
          'tid' => '44bb361e-5066-4cc3-a57b-0b099244a126',
        ),
        38 => array(
          'tid' => '5f515039-3e53-43b5-b2a1-32ca4b6f9632',
        ),
        39 => array(
          'tid' => '77c172d4-9a04-4c63-99e5-809d1224fd75',
        ),
        40 => array(
          'tid' => '9eaba07d-9709-4b5f-baec-105a13243490',
        ),
        41 => array(
          'tid' => '195eb77f-5538-4c0f-9a16-be01ba1f37a8',
        ),
        42 => array(
          'tid' => 'cd22c471-e564-419c-9e07-856dcc61b442',
        ),
        43 => array(
          'tid' => 'bd657ba9-b442-4ef3-86c7-80379f9239e4',
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
          'uid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
          'filename' => 'lum.gif',
          'uri' => 'public://lum.gif',
          'filemime' => 'image/gif',
          'filesize' => 1242,
          'status' => 1,
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '37acaae7-01eb-4454-947a-47ac1db5d4b5',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 88,
            'width' => 100,
          ),
          'alt' => '',
          'title' => '',
          'height' => 88,
          'width' => 100,
          'uuid_features_file_data' => 'R0lGODlhZABYANUAAAAAAP////7+/v39/fz8/Pv7+/r6+vn5+fj4+Pf39/b29vX19fT09PPz8/Ly8vHx8fDw8O/v7+7u7u3t7ezs7Ovr6+rq6unp6ejo6Ofn5+bm5uXl5eTk5OPj4+Li4uHh4eDg4N/f397e3t3d3dzc3Nvb29ra2tnZ2djY2NfX19bW1v///wAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACH5BAEAACsALAAAAABkAFgAAAb/wJVwSCwaj8ikcslsOp/QqHRKrVqv2Kx2y+16v+CweEwum8/otHrNbrvf8Lh8Tq/b7/i8fs/v+/+AgYKDhIWGh4iJiouMjY6PkJFcEBEQkksXIiUmKCgpJiUjGZdDGCUpqCkqqaqoKiYdkRshq621q7e1KBiLGiMnrrWqwirEraonooQZH5ypwq0jGhMRE762rscnIhx/F87H2SklHA8HBAMCAwQIDx2n0MKdJHkfns+sqycmJx4J6QEEBAgYYEDBBR9SnAB2DJerEyHkcICX7danEBsiOIhwIcOEBgcMDhxggIGFDyCmTcgAogSKYs+E9WPDgUTMmyY+YIDwb2AA/wILJGDAIIGBAgYUOoTgMGEBAQHq2p2kiK0VxAplKoy4NywfqhEQEBDwKZDsgQYeRogYYSIDAwNlCY5EwAADMIdVVZSIGIbCS5jFYKIY8SHECRQXEPhcPHIBBhMmQoAYwcHBWMZmMaAwsfZEPFYmwtAKjApFCRAVFhgUgMCCCBMeIBhIN6CAggohSniQYCAgAQgbQFx4m06dAQceck7oLSCBhHd3K3b7Eh0FCQ+pC8QlaGDCBxIgLERIOgIEBqeLyy6osGEDhQYOvJPgAKEA5gEKJnAQEX0cGJgpgOAAXHJhJsABHLCSAgYIbGegARFswgkKElyG2UACAFWBCQ6BEf8dCRU0yFhcBESwAQm6dSACCiFUcEBc2wlQAAQdoCBCeyBsMEFPBRIkgAKPHQOGCKQNVgGBPg2QgGsmjFBBAgUUcEAEho2AgQIi+WSABCFwthwBUrqTo2UjInABCVypQM8XFQyDi14WKHBAAhWA0OR5ApWV5wIblHDCBxEccAADGZRAwgYMiJRnQN0VNpwBBiSQgQkNqTIKGBjgU4sJJHDSAQQvYpgehgp8Mw4JwGiA5YWLAaWBCLCWAGBXI4yhFWldfeJAlqwORMADIzyDAgUH9MoYAyJUuopp05FxZq6phHBBAlCNOhJwI5CgAQUUYMDWBxWsGmNACFSwokWriLD3hmazlkbCBb0xNmOXJlyJzjoITICmtgyMaAAFK+KDCgkWuKHfKV6dcB6kjnUaQgT26UnQAO649IEECRxgpk3omqABHRtwxUoJsPJTTsTWJrnABacYinA4ydxhLl54hZCAsaMKkKCCqbAYgR4WcOzQKh4nOi5Z5FZAEWDjTODHhuGoYtoGirEqgAHmpplKCZcCIsGJIi+L6FMBGfesRSloi8gFDCnoMUgH3JasOJ9gtUgI4tRynVIil8aXI+cOLXgrJZCS7Gcj80KKEKjGM/XiRnAAAgkkhODBBZBnrvnmnHfu+eeghy766KSXbvrpqKeu+uqst25FEAA7',
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
          'uid' => 8157,
          'status' => 1,
          'translate' => 0,
          'created' => 1467034823,
          'changed' => 1467034823,
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3736-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3692-0',
    'description_original' => 'Convention on the Elimination of all Forms Discrimination Against Women. ',
  );
  $terms[] = array(
    'name' => 'FAO - Food Security',
    'description' => '<p>This dataset contains indicators on the&nbsp;level&nbsp;of food security in several countries&nbsp;as provided by FAO.</p>
',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => '704ff095-fce6-4e1d-9c24-4ca9ddd59bdf',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-FS',
          'format' => NULL,
          'safe_value' => 'FAO-FS',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '11005528-e13b-45b2-814a-5bb54c84bdfe',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '30505824-ccd9-4d7f-990e-84745b5df726',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6918,
          'revision_id' => 6918,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465393868,
          'changed' => 1465393868,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Land policy & Legislation',
    'description' => '<p>The regulatory framework for land administration, land information management, planning and building consists of laws, regulations, standards, norms, and administrative procedures relating to land development that seek to determine what developers, land-owners, communities and residents are entitled to do with and on that land. Unless specified, they should apply equally to all these groups, organisations or individuals seeking to acquire, develop or transfer urban and rural land. The regulatory framework determines also the rules, responsibilities and procedures regarding the collect and the processing of land information, and land administration.</p>

<p>Source: <a href="http://www.gltn.net/index.php/land-tools/themes/access-to-land-and-tenure-security">GLTN</a></p>

<p>&nbsp;</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '741b7bd9-9dd9-43f7-bbf1-4689077768a1',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'overarching_categories',
    'field_related_topics' => array(
      'und' => array(
        0 => array(
          'tid' => 'c69753f9-41d9-4016-8210-5b1072e3db75',
        ),
        1 => array(
          'tid' => '6f22d7fe-e23b-4a4e-9995-a5b16def62bc',
        ),
        2 => array(
          'tid' => '00f760d4-030c-4255-a8b7-9726d1556ab0',
        ),
        3 => array(
          'tid' => 'dc3f7f2c-9a49-4d21-9815-fbb79c1f0fd1',
        ),
        4 => array(
          'tid' => 'cc9a4931-94e9-49b4-b3b4-e4fa582ae73c',
        ),
        5 => array(
          'tid' => '5c7c94f4-a902-4db9-990e-98cc5de45875',
        ),
        6 => array(
          'tid' => 'c6f94f76-f677-4979-9a0c-8c485d460b41',
        ),
        7 => array(
          'tid' => 'baa9738d-bbf6-4a05-834e-1f055123208e',
        ),
        8 => array(
          'tid' => '0af65510-05b9-49c1-b04d-356df98ef517',
        ),
        9 => array(
          'tid' => 'b278ae20-4491-449c-aabb-bedc8d27eff2',
        ),
        10 => array(
          'tid' => 'f11c96a6-4bfb-4fa8-8fb6-665b93320d35',
        ),
        11 => array(
          'tid' => 'a0e1cc30-96fa-407b-b019-e50b4fa9cef6',
        ),
        12 => array(
          'tid' => '62f639da-4e63-4cbc-9cfd-de44e0c79439',
        ),
        13 => array(
          'tid' => '59bf9a9e-726d-4ca3-9a5c-7afc975d250e',
        ),
        14 => array(
          'tid' => 'c666a5bb-274e-4096-925a-a5da7a7a3e02',
        ),
        15 => array(
          'tid' => 'cba39812-c91f-4655-8d9c-b13ff37f9807',
        ),
        16 => array(
          'tid' => '286e5a44-023a-4041-be35-a81e21697730',
        ),
        17 => array(
          'tid' => 'd02aafef-24b5-4261-bd21-46961bf89017',
        ),
        18 => array(
          'tid' => '33c542bc-fdbe-4374-8ff3-1db8c7535205',
        ),
        19 => array(
          'tid' => '3f41afef-1eec-437c-b8a8-f426af4a6de8',
        ),
        20 => array(
          'tid' => '758c989a-4826-4219-a002-c60b8d8bc2cf',
        ),
        21 => array(
          'tid' => '12212d7f-9c3f-46ee-aeae-d8cf08e53528',
        ),
        22 => array(
          'tid' => '6533f9c0-c024-4671-9545-008b24bee67e',
        ),
        23 => array(
          'tid' => '6c990f0b-f385-4689-99a1-4e99b4ae5db3',
        ),
        24 => array(
          'tid' => 'b5451c7a-e658-4120-8fd7-fe1acd098199',
        ),
        25 => array(
          'tid' => '6ed7cc8e-4184-4b5b-af2f-aa1367883c9d',
        ),
        26 => array(
          'tid' => '96b52323-e2a2-4b03-8a1c-457661ad57af',
        ),
        27 => array(
          'tid' => '4386102f-5b35-42fe-9d84-be0f221d29c9',
        ),
        28 => array(
          'tid' => 'bff5e1d0-ff34-43c4-b96b-715dcdf18808',
        ),
        29 => array(
          'tid' => '497e8f59-4c0d-41be-8e17-2458d384535f',
        ),
        30 => array(
          'tid' => '52eeec74-4ee5-4d34-bc57-1ebfdc5ff6f1',
        ),
        31 => array(
          'tid' => '963b93c4-55c1-40f5-bb50-f905240ae189',
        ),
        32 => array(
          'tid' => 'aff2815f-7bb3-43ec-9ea7-64b0027dfcd3',
        ),
        33 => array(
          'tid' => '1e030e11-dbc4-4d54-8b5b-7973137d7766',
        ),
        34 => array(
          'tid' => '3da5ca60-e9bc-412b-be21-8103eb65e1d9',
        ),
        35 => array(
          'tid' => '96139d94-0476-4195-88fd-2f44ca0f2336',
        ),
        36 => array(
          'tid' => '0c669e54-a640-48d8-995e-e681b8857fe8',
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
          'tid' => '84c8fbce-8249-4267-8044-36e40eee32fa',
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
          'uid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
          'filename' => 'lpl.gif',
          'uri' => 'public://lpl.gif',
          'filemime' => 'image/gif',
          'filesize' => 1383,
          'status' => 1,
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '94c5cb34-2d02-4d7c-889a-9316234a7ac5',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 89,
            'width' => 100,
          ),
          'alt' => '',
          'title' => '',
          'height' => 89,
          'width' => 100,
          'uuid_features_file_data' => 'R0lGODlhZABZANUAAAAAAP////7+/v39/fz8/Pv7+/r6+vn5+fj4+Pf39/b29vX19fT09PPz8/Ly8vHx8fDw8O/v7+7u7u3t7ezs7Ovr6+rq6unp6ejo6Ofn5+bm5uXl5eTk5OPj4+Li4uHh4eDg4N/f397e3t3d3dzc3Nvb29ra2tnZ2djY2NfX19bW1v///wAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACH5BAEAACsALAAAAABkAFkAAAb/wJVwSCwaj8ikcslsOp/QqHRKrVqv2Kx2y+16v+CweEwum8/otHrNbrvf8Lh8Tq/b7/i8fs/v+/+AgYKDhIWGh4iJiouMjW0ZHiQoKSoplJQjGY5CGB0hJZWVl6IqopcjGoUVGZ4kJpallpSmsbCXoykkHhF+GiEmk6a3trLCobakliUgqXkhKMayw9MpJSEdGBcer8XSoiYhdyLe5CgnJiUkItgSDQcDAQIB8fEKF58nyMh1F8GXJupAeNhwQYIDBQXkyZtHj6HDAQomcPhV7BudENJCWIhw8ACBhQ5Dihw5IAGECx9K4KKTj5KIBgMEgGw4b6ZNhzcHHGCQ4RaF/zmyUGBAsMEDhAIjkypNisCDrTkb/kGI0BIFiAkJCsRcqLBmAHj0FA4oYADBgwsUIKgMhWIOh28PJvirdKIDBXdgb9YsgGDBgwobREBTgSHDYEsm5mgQdSJCBG61lHm44ODAzAEIGEiwsAEECVyULGjQN8dCUAwLxkWTtSwDgwMSOoEYkS9ZMgsWThxLgUHOB2kgEED4vTpohgknJkmbpqIuBQQFEmConUKEHH9WHcgj4AADPmKWNFzodunciA5YuwowMEF1Ljm3QiCwCXFC57WUMlw4hoIEiA13EeBQAQo0YEAEkX0gh26WnLDBAgksYMBlCDhQAQeCFZaLBxhM4P8OSAIUsIAEG4xgAgUGQHPJBL51o8EEIHywQQUPIABWPAYo8MACDUCwwDsyMTQAAxZ0QFsoHBTwiihz9FQMCBRwgwI6ImwwwQICxiNATCEJkEAFn/gjS5KQpTAHfpZcpRJ4p1j5mlYDGLAABiPcslslFxgwSlvwiVLCBxQ44EEJKoJ2jAkfTODAB4fBIgwKIjDwQC0KxpFBLRZYJkCFFGSQ0iwVyeJBBS3dmcIJIby4QFOjWCDHaLJgAKIABGQWAQYgUFfMBxUseUsJHASawEcBHPDBMXN4YMoDCWhggQJdElDWAxrUKQuv3OSSwQMHaAWiAuPAMoeKlRRgWiUkYMD/gAEfdYXjAxiIwIEEIHQQgaZfSbsTBRFIUGYJcwhDgJNBiYCBA8NyxdB6BSREa18OUKABCK+ccMEGwnQwhwnHGDCebSmgEEIGEixwY006WaiBByMoJ4sJFTiV0RwgjMIABMEcU8sJ8k5wwAEPcNaBZ8joDDMHoOIpx36xGoBBmeQ1OEEGwCzHpsgVIHAABDXDYh18/0ig1ZcfuEJOyBV0cHbIAI1qcjzSmkUun3F03aAHd3kkHAYf0BZU2tKgsAwHFVQWD1+aZZCrNyDQwTEyJnRgAbfrMTB1rifEXM0HGQRqI60J/DXxmlabSYcGh4VSyTIaPJBQrQ200y8DCLRrhNIFnhCq+iiheGDHBbqCZ8IIGzzw0QDIy2QAvJ9UvfYtKGyQRwcktBQ1JShwEMECEWjwmZ3giyI4CZr4sQFFpadvtfjDy2iIp6WGr48sPHPgKiMWPLP7/phIv0kR+RPT3f7XBE/4j4AITKACF8jABjrwgRCMoAQnSMEKWvCCGMygBs8QBAA7',
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
          'uid' => 8157,
          'status' => 1,
          'translate' => 0,
          'created' => 1467034797,
          'changed' => 1467034797,
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3833-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3835-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3691-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3756-0',
    'description_original' => 'prescription is the acquisition or extinction of rights by lapse of time.',
  );
  $terms[] = array(
    'name' => 'IFPRI - Global Hunger Index',
    'description' => '<p>This&nbsp;dataset contains the data used to&nbsp;calculate&nbsp;the Global Hunger Index Scores&nbsp;for the years 1990, 1995, 2000, 2005and 2015 by IFPRI.</p>
',
    'format' => 'filtered_html',
    'weight' => 10,
    'uuid' => '7afef5d8-54ee-41fd-8012-e40517bbb362',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'IFPRI-GHI',
          'format' => NULL,
          'safe_value' => 'IFPRI-GHI',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '81974451-d79e-478b-ae6f-059b4defd11c',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '30505824-ccd9-4d7f-990e-84745b5df726',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7479,
          'revision_id' => 7479,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465394396,
          'changed' => 1465394396,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'rural planning',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '7b62c875-5c14-4b71-95eb-318f3ef436ef',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3864-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Unemployment, youth female (% of female labor force ages 15-24) (modeled ILO estimate)',
    'description' => '<p>Youth unemployment refers to the share of the labor force ages 15-24 without work but available for and seeking employment.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '7e7feb37-6644-4e87-a821-1ab9eeec2996',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '08313495-2fcc-450f-990c-95139099d968',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SL.UEM.1524.FE.ZS',
          'format' => NULL,
          'safe_value' => 'WB-SL.UEM.1524.FE.ZS',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7011,
          'revision_id' => 7011,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465552134,
          'changed' => 1465552134,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Population, total',
    'description' => '<p>Total population is based on the de facto definition of population, which counts all residents regardless of legal status or citizenship--except for refugees not permanently settled in the country of asylum, who are generally considered part of the population of their country of origin.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '7eee5c13-8498-44d6-91bd-0164cd6fa59c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '573e86b6-632a-475e-9471-1d2477ac0a4f',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SP.POP.TOTL',
          'format' => NULL,
          'safe_value' => 'WB-SP.POP.TOTL',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7030,
          'revision_id' => 7030,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465490267,
          'changed' => 1465490267,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'aquaculture',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '811f8040-064c-4f16-b422-39c9208a016a',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3792-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3815-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Social Institutions and Gender Index (SIGI)',
    'description' => '<p>The SIGI is built on 12 innovative indicators on social institutions, which are grouped into 5 categories / subindexes: Family Code, Physical Integrity, Son Preference, Civil Liberties and Ownership Rights. Each of the SIGI indicators is coded between 0, meaning no or very low inequality, and 1, indicating very high inequality.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '834d7411-d4c9-4dc4-a4b8-f5817b945ae4',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'OECD-SIGI-0',
          'format' => NULL,
          'safe_value' => 'OECD-SIGI-0',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Index (0; 1)',
          'format' => NULL,
          'safe_value' => 'Index (0; 1)',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '6834ca25-ae73-4d0d-b257-e3aaa0b7154c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6983,
          'revision_id' => 6983,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465497128,
          'changed' => 1465497128,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'pastoralists',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '83d6a8cb-6b26-407b-a41d-a841c57950bb',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
      ),
    ),
    'name_original' => 'pastoralists',
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-1264-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3773-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3786-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Global Ranking of Discriminatory Family Code',
    'description' => '<p>Global Ranking in Discriminatory Family Code, a sub-index of the Social Insititution and Gender Index (SIGI).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8559f8af-7949-4b26-b6b9-a40c3e6d78cd',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'OECD-SIGI-3',
          'format' => NULL,
          'safe_value' => 'OECD-SIGI-3',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Rank',
          'format' => NULL,
          'safe_value' => 'Rank',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '741b7bd9-9dd9-43f7-bbf1-4689077768a1',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '6834ca25-ae73-4d0d-b257-e3aaa0b7154c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6982,
          'revision_id' => 6982,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465480852,
          'changed' => 1465480852,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'HDI Rank',
    'description' => '<p>Position in the world\'s HDI - Human Devlopment Index ranking.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '89402526-a773-431f-8c37-3419ef6e8211',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '97367277-d0b0-411e-8989-3b53cdab1568',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'UNDP-HDI-RANKING',
          'format' => NULL,
          'safe_value' => 'UNDP-HDI-RANKING',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Rank',
          'format' => NULL,
          'safe_value' => 'Rank',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7006,
          'revision_id' => 7006,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465483610,
          'changed' => 1465483610,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'private forests',
    'description' => 'Private forests where the detailed operations are controlled by the common rules for all forest land, including felling permits.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8b044a2a-7560-49c3-9fcc-dc43c937d0ca',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3758-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3847-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'land degradation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8cf95e12-39ef-474b-b73c-0a674fc9e546',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3826-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
      ),
    ),
    'name_original' => 'food security',
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-1255-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Employees in Agriculture - Male (% of male employment)',
    'description' => '<p>Share (%) of male employees in agriculture with respect to the total male employment</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8da97b68-96bc-4b35-909f-2f55412bf71d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'de6a3ad0-3109-41b9-ac54-9cdbe305b097',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SL.AGR.EMPL.MA.ZS',
          'format' => NULL,
          'safe_value' => 'WB-SL.AGR.EMPL.MA.ZS',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '6e6ab79d-bad7-425f-a719-93901e6f1027',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7016,
          'revision_id' => 7016,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465471771,
          'changed' => 1465471771,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Depth of the food deficit (kcal/capita/day) (3-year average)',
    'description' => '<p>The depth of the food deficit indicates how many calories would be needed to lift the undernourished from their status, everything else being constant. The average intensity of food deprivation of the undernourished, estimated as the difference between the average dietary energy requirement and the average dietary energy consumption of the undernourished population (food-deprived), is multiplied by the number of undernourished to provide an estimate of the total food deficit in the country, which is then normalized by the total population.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '905e7c98-d42c-4e03-a1f9-d03b831d5c16',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '704ff095-fce6-4e1d-9c24-4ca9ddd59bdf',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-21023-6128',
          'format' => NULL,
          'safe_value' => 'FAO-21023-6128',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'kcal/capita/day',
          'format' => NULL,
          'safe_value' => 'kcal/capita/day',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '30505824-ccd9-4d7f-990e-84745b5df726',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6944,
          'revision_id' => 6944,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465465651,
          'changed' => 1465465651,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3761-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3686-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3760-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3749-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3741-0',
    'description_original' => 'Entitlement to enjoy ownership advantages, due to marital status. ',
  );
  $terms[] = array(
    'name' => 'UNDP - Human Developmnet Index',
    'description' => '<p>This&nbsp;dataset contains the Human Development Index (HDI) score and country rank, as provided by UNDP.</p>
',
    'format' => 'filtered_html',
    'weight' => 11,
    'uuid' => '97367277-d0b0-411e-8989-3b53cdab1568',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'UNDP-HDI',
          'format' => NULL,
          'safe_value' => 'UNDP-HDI',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => 'f5e48ffc-d1ea-4bb1-b40d-1e588e6d06b2',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6912,
          'revision_id' => 6912,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465394721,
          'changed' => 1465394721,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'land cover mapping',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '97746d45-2db0-45b1-a037-c6eae85ae01f',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3859-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Total Number of Forestry Deals',
    'description' => '<p>Total number of deals having as main object purposes related to Forestry, in a given country over the period 2000-2015. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '98979864-6b4b-4ef6-896f-0811a46116a2',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'LM-N8',
          'format' => NULL,
          'safe_value' => 'LM-N8',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '54e62811-e826-44cf-a2f7-49b76cf40087',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6979,
          'revision_id' => 6979,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465550566,
          'changed' => 1465550566,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Gender',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '990a1ba9-8e6b-467d-b3ab-836cb2ef2098',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-1257-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Employees in Agriculture - Female (% of female employment)',
    'description' => '<p>Share (%) of female employees in agriculture with respect to the total of female employment.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '99476965-8878-4869-bb85-b1ebdf18d29d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'de6a3ad0-3109-41b9-ac54-9cdbe305b097',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SL.AGR.EMPL.FE.ZS',
          'format' => NULL,
          'safe_value' => 'WB-SL.AGR.EMPL.FE.ZS',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '741b7bd9-9dd9-43f7-bbf1-4689077768a1',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '6834ca25-ae73-4d0d-b257-e3aaa0b7154c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7017,
          'revision_id' => 7017,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465471559,
          'changed' => 1465471559,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'UNDP - Human Development Index',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9a5b44b5-3fc7-46ec-9d35-3edf40e69d41',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(),
    'field_orgref' => array(),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7782,
          'revision_id' => 7782,
          'language' => 'und',
          'source' => '',
          'uid' => 8157,
          'status' => 1,
          'translate' => 0,
          'created' => 1466631178,
          'changed' => 1466631178,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'land cover',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9b32b10d-b3f0-4f32-b8d0-e90640619036',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3825-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Total Number of Deals of Unknown Topic',
    'description' => '<p>Total number of deals having as main object purposes related to an Unknown Topic, in a given country over the period 2000-2015. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession. It can be compared to the Total Number of Deals.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9c18cf73-310c-4400-8895-91756fc9daa5',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'LM-N13',
          'format' => NULL,
          'safe_value' => 'LM-N13',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '54e62811-e826-44cf-a2f7-49b76cf40087',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6980,
          'revision_id' => 6980,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465550181,
          'changed' => 1465550181,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Agricultural land',
    'description' => '<p>Agricultural Area&nbsp;(1\'000 Ha) is the land area mainly devoted to agriculture. It includes arable land, permanent crops, and permanent pasture,&nbsp;as defined by FAO.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9c5a09dc-81cb-4849-a81c-b52087f29c6c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'd9039fd5-e3dc-4883-88f8-363956b48f39',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-6610-5110',
          'format' => NULL,
          'safe_value' => 'FAO-6610-5110',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => '1\'000 Ha',
          'format' => NULL,
          'safe_value' => '1&#039;000 Ha',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '6e6ab79d-bad7-425f-a719-93901e6f1027',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '30505824-ccd9-4d7f-990e-84745b5df726',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6953,
          'revision_id' => 6953,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465407213,
          'changed' => 1465407213,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'government purchases',
    'description' => 'Governmental acquisition (of land).',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9d0c7ab3-9bf5-4ee8-a0a2-2017447cfd06',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3714-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3874-0',
    'description_original' => ' Urban areas as defined by the Census Bureau are densely-populated areas with at least 50,000 people ("urbanized areas") and densely-populated areas with 2,500 to 50,000 people ("urban clusters").',
  );
  $terms[] = array(
    'name' => 'Total Number of Concluded Deals',
    'description' => '<p>Total number calculated as the sum of all concluded deals, in a gven country over the period 2000-2015. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession. It can be compared to the Total Hectares in Deals.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9e5be23b-5fc0-41ed-a7ca-83728a2616b2',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'LM-N2',
          'format' => NULL,
          'safe_value' => 'LM-N2',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '54e62811-e826-44cf-a2f7-49b76cf40087',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6971,
          'revision_id' => 6971,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465549190,
          'changed' => 1465549190,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'land registration',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9eaba07d-9709-4b5f-baec-105a13243490',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3837-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3816-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3754-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3867-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Rural Population',
    'description' => '<p>Rural population refers to the share (%) of people living in rural areas as defined by national statistical offices. It is calculated as the ratio between Urban Population and Total Population.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a15cabf5-ca98-4d55-b055-fd4e79926d22',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '573e86b6-632a-475e-9471-1d2477ac0a4f',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SP.RUR.TOTL.ZS',
          'format' => NULL,
          'safe_value' => 'WB-SP.RUR.TOTL.ZS',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7034,
          'revision_id' => 7034,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465494994,
          'changed' => 1465494994,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total number of renewable energy deals',
    'description' => '<p>Total number of deals having as main object purposes related to Renewable Energy in a given country over the period 2000-2015. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a26eee5c-aa7f-4aad-bdf1-d7d0fa40e7b3',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'LM-N10',
          'format' => NULL,
          'safe_value' => 'LM-N10',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '54e62811-e826-44cf-a2f7-49b76cf40087',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6965,
          'revision_id' => 6965,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465551307,
          'changed' => 1465551307,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Relative forest land',
    'description' => '<p>Share (%) of Forest Land with respect to the Total Land Area.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a441b507-c350-4414-9a25-b07924dd71c3',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'd9039fd5-e3dc-4883-88f8-363956b48f39',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-X-6661-5110',
          'format' => NULL,
          'safe_value' => 'FAO-X-6661-5110',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '6e6ab79d-bad7-425f-a719-93901e6f1027',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '2748e598-f12f-4ff9-9b26-8f18c7cdda22',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6952,
          'revision_id' => 6952,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465492729,
          'changed' => 1465492729,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Shares in Number Operated as Tenant',
    'description' => '<p>Share (%) of the total number of agricultural holdings operated under tenancy, in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a5b775b6-239d-4132-9258-35cd6bffa59c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-ACI-10',
          'format' => NULL,
          'safe_value' => 'FAO-ACI-10',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6920,
          'revision_id' => 6920,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465496809,
          'changed' => 1465496809,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3831-0',
    'description_original' => 'An information system for capturing, storing, integrating, analyzing and displaying geospatial data.',
  );
  $terms[] = array(
    'name' => 'Total hectares in deals in production',
    'description' => '<p>The total Area (ha) of land from deals in which the projects are already operational (in production) over the period 2000-2015. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a74b84b0-501e-4c2c-9a43-b66ba4b5bff4',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'LM-HA5',
          'format' => NULL,
          'safe_value' => 'LM-HA5',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Ha',
          'format' => NULL,
          'safe_value' => 'Ha',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '54e62811-e826-44cf-a2f7-49b76cf40087',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6974,
          'revision_id' => 6974,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465547079,
          'changed' => 1465547079,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Global Hunger Index (GHI)',
    'description' => '<p>The Global Hunger Index (GHI) is calculated as the average of three indicators, the proportion of the population that is undernourished (Undernourishment), the proportion of underweight children under five years old (Child Stunting and Child Wasting), and the proportion of children dying before age five (Child Mortality). The index ranks countries on a 100 point scale, with 0 being the best and 100 the worst.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a7615b59-7a5b-4e2c-b8fa-fda472aa705d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '7afef5d8-54ee-41fd-8012-e40517bbb362',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'IFPRI-GHI',
          'format' => NULL,
          'safe_value' => 'IFPRI-GHI',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Index (0; 100)',
          'format' => NULL,
          'safe_value' => 'Index (0; 100)',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '30505824-ccd9-4d7f-990e-84745b5df726',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6958,
          'revision_id' => 6958,
          'language' => 'und',
          'source' => '',
          'uid' => 8157,
          'status' => 1,
          'translate' => 0,
          'created' => 1466631227,
          'changed' => 1466631227,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'Restricted Resources and Entitlements',
    'description' => '<p>The indicator is a component of the SIGI - Social Institutions and Gender Index &nbsp;and measures whether women and men have equal and secure access to land use, control and ownership. The Restricted Resources and Entitlements - ranging from 0 (the law guarantees the same rights to own, use and control land to both women and men) to 1 (The law does not guarantee the same rights to own) is calculated considerig three dimensions:<br />
1) Women Access to Land: whether women and men have equal and secure access to land use, control and ownership.<br />
2) Women access to non-land assets: whether women and men have equal and secure access to non-land assets use, control and ownership.<br />
3) Access to financial services: whether women and men have equal access to financial services</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a7dbba69-7fc8-44ab-ae10-9571460ba074',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'OECD-SIGI-6',
          'format' => NULL,
          'safe_value' => 'OECD-SIGI-6',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Index (0; 1)',
          'format' => NULL,
          'safe_value' => 'Index (0; 1)',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '741b7bd9-9dd9-43f7-bbf1-4689077768a1',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '6834ca25-ae73-4d0d-b257-e3aaa0b7154c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6985,
          'revision_id' => 6985,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465493809,
          'changed' => 1465493809,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Child Stunting',
    'description' => '<p>The proportion of children under the age of five who suffer from stunting (that is, low height for their age, reflecting chronic undernutrition).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'aa11b39b-8950-46e5-b961-7a38a6a8e18b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '7afef5d8-54ee-41fd-8012-e40517bbb362',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'IFPRI-GHI-CHILD_STUNTING',
          'format' => NULL,
          'safe_value' => 'IFPRI-GHI-CHILD_STUNTING',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '30505824-ccd9-4d7f-990e-84745b5df726',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6957,
          'revision_id' => 6957,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465463448,
          'changed' => 1465463448,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Shares in Area Operated as Others',
    'description' => '<p>Share (%) of the total area (ha) of agricultural holdings under other forms of tenure (different from ownership or tenency), in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ab292761-6228-40a6-a139-cdae070f1b81',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-ACI-14',
          'format' => NULL,
          'safe_value' => 'FAO-ACI-14',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6935,
          'revision_id' => 6935,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465495466,
          'changed' => 1465495466,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'latifundium',
    'description' => 'a latifundium is a very large property.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ab3030b5-54a6-4076-b94b-34a6363f75a8',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3737-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
      ),
    ),
    'name_original' => 'environment',
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-1251-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3799-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7041-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Population aged 65 and above',
    'description' => '<p>Population ages 65 and above as a percentage of the total population. Population is based on the de facto definition of population, which counts all residents regardless of legal status or citizenship--except for refugees not permanently settled in the country of asylum, who are generally considered part of the population of the country of origin.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ade643fa-3925-4d0d-bbc1-cf4271ca87ce',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '573e86b6-632a-475e-9471-1d2477ac0a4f',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SP.POP.65UP.TO.ZS',
          'format' => NULL,
          'safe_value' => 'WB-SP.POP.65UP.TO.ZS',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7033,
          'revision_id' => 7033,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465490067,
          'changed' => 1465490067,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'suburban agriculture',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'aeaff481-12a3-4929-bca3-55e87d43d8a4',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3842-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'FAO - Land and Gender',
    'description' => '<p>The dataset contains indicators from the&nbsp;FAO Gender &amp; Land Rights Database.</p>
',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => 'af8915e6-281d-41b5-af8b-e210de56cdc5',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-LG',
          'format' => NULL,
          'safe_value' => 'FAO-LG',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '11005528-e13b-45b2-814a-5bb54c84bdfe',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '6834ca25-ae73-4d0d-b257-e3aaa0b7154c',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6917,
          'revision_id' => 6917,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465393996,
          'changed' => 1465393996,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'patrilineal',
    'description' => 'A patrilineal lineage group is one where the line of descent and membership is transmitted by the male.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'aff2815f-7bb3-43ec-9ea7-64b0027dfcd3',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3753-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7311-0',
    'description_original' => NULL,
  );
  $terms[] = array(
    'name' => 'access to resources',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b1c075b0-bd56-4a46-9e30-89b722b48db1',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7282-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3712-0',
    'description_original' => 'Forest law comprises the package of laws and regulations governing production and protection of forests, as well as those that regulate the powers of the administration in forests subject to the forest law.',
  );
  $terms[] = array(
    'name' => 'land tenure',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b5451c7a-e658-4120-8fd7-fe1acd098199',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3846-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Land Matrix - Large-Scale Land Acquisitions',
    'description' => '<p>This dataset contains information provided by the Land Matrix&nbsp;on the size, nature, state and purpose of Large-Scale Land Aquisitions around the world.</p>
',
    'format' => 'filtered_html',
    'weight' => 13,
    'uuid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'LM-LANDMATRIX',
          'format' => NULL,
          'safe_value' => 'LM-LANDMATRIX',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => 'f8184144-8687-48d8-b0de-c91045c27f43',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6913,
          'revision_id' => 6913,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465392159,
          'changed' => 1465392159,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Literacy rate, adult total',
    'description' => '<p>Total Adult (15+) Literacy Rate (%) is the percentage of the population age 15 and above who can, with understanding, read and write a short, simple statement on their everyday life. Generally, "literacy" also encompasses "numeracy", the ability to make simple arithmetic calculations. This indicator is calculated by dividing the number of literates aged 15 years and over by the corresponding age group population and multiplying the result by 100.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b69dd9d7-2b49-4f2a-9cd7-acba416e7b29',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '08313495-2fcc-450f-990c-95139099d968',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SE.ADT.LITR.ZS',
          'format' => NULL,
          'safe_value' => 'WB-SE.ADT.LITR.ZS',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7007,
          'revision_id' => 7007,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465487081,
          'changed' => 1465487081,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Number of agricultural holdings operated as Tenant',
    'description' => '<p>Number of agricultural holdings operated under tenancy, in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b70c0517-f8d6-4884-864d-faa8e8ca75e0',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-ACI-4',
          'format' => NULL,
          'safe_value' => 'FAO-ACI-4',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6922,
          'revision_id' => 6922,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465488337,
          'changed' => 1465488337,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'rights in divorce',
    'description' => 'Legal framework and provisions applying in case of separation/divorce. ',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b7312d35-e143-4a91-a88d-09413aef749c',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3763-0',
    'description_original' => 'Legal framework and provisions applying in case of separation/divorce. ',
  );
  $terms[] = array(
    'name' => 'Area Operated as Tenant',
    'description' => '<p>Area (ha) of agricultural holdings operated under tenancy, in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b7851149-c2c9-42f9-9411-a92f57d12031',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-ACI-7',
          'format' => NULL,
          'safe_value' => 'FAO-ACI-7',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Ha',
          'format' => NULL,
          'safe_value' => 'Ha',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '4c8373c6-8fb9-4439-af16-a8aa5c9a8138',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6931,
          'revision_id' => 6931,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465410122,
          'changed' => 1465410122,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Children in employment, male (% of male children ages 7-14)',
    'description' => '<p>Children in employment refer to children involved in economic activity for at least one hour in the reference week of the survey.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b8ff700a-86c6-47da-9ada-d5fa7fb62206',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '08313495-2fcc-450f-990c-95139099d968',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SL.TLF.0714.MA.ZS',
          'format' => NULL,
          'safe_value' => 'WB-SL.TLF.0714.MA.ZS',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7015,
          'revision_id' => 7015,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465463854,
          'changed' => 1465463854,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'development agencies',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'baa9738d-bbf6-4a05-834e-1f055123208e',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3808-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Restricted Resources and Entitlements - Woman Access to Land',
    'description' => '<p>This indicator is a sub-component of the Restricted Resources and Entitlements Indicator and measures whether women and men have equal and secure access to land use, control and ownership. It ranges from 0 (equal access for women and men) to 1 (The law does not guarantee the same rights to own, use and control land to women and men, or women have no legal rights to own, use and control land).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bcb757a9-3730-4dde-9957-9c761faafdba',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'OECD-SIGI-11',
          'format' => NULL,
          'safe_value' => 'OECD-SIGI-11',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Index (0; 1)',
          'format' => NULL,
          'safe_value' => 'Index (0; 1)',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '741b7bd9-9dd9-43f7-bbf1-4689077768a1',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '6834ca25-ae73-4d0d-b257-e3aaa0b7154c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7004,
          'revision_id' => 7004,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465493336,
          'changed' => 1465493336,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Shares in Area Operated as Tenant',
    'description' => '<p>Share (%) of the total area (ha) of agricultural holdings under tenancy, in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bd2fa778-e626-4c07-a021-82dd4d387bdd',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-ACI-13',
          'format' => NULL,
          'safe_value' => 'FAO-ACI-13',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6928,
          'revision_id' => 6928,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465495855,
          'changed' => 1465495855,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'land use',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bd657ba9-b442-4ef3-86c7-80379f9239e4',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-6487-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total Number of Industry Deals',
    'description' => '<p>Total number of deals having as main object purposes related to Industry, in a given country over the period 2000-2015. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bea006b5-70a3-4b4a-a91c-7870ec0137f2',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'LM-N9',
          'format' => NULL,
          'safe_value' => 'LM-N9',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '54e62811-e826-44cf-a2f7-49b76cf40087',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6964,
          'revision_id' => 6964,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465550987,
          'changed' => 1465550987,
        ),
      ),
    ),
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7438-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3801-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-1271-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Arable Land',
    'description' => '<p>Arable land (1\'000 Ha) is the land under temporary agricultural crops (multiple-cropped areas are counted only once), temporary meadows for mowing or pasture, land under market and kitchen gardens and land temporarily fallow (less than five years). The abandoned land resulting from shifting cultivation is not included in this category. Data for "Arable land" are not meant to indicate the amount of land that is potentially cultivable.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c22781d9-f982-4f5f-974f-082bc0afe899',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'd9039fd5-e3dc-4883-88f8-363956b48f39',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-6621-5110',
          'format' => NULL,
          'safe_value' => 'FAO-6621-5110',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => '1\'000 Ha',
          'format' => NULL,
          'safe_value' => '1&#039;000 Ha',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '6e6ab79d-bad7-425f-a719-93901e6f1027',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6950,
          'revision_id' => 6950,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465409308,
          'changed' => 1465409308,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'forest management plans',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c2340e93-1076-4ecf-9a04-a070d3f77d87',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3814-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3873-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Total Number of Deals',
    'description' => '<p>Total number of deals in a given country over the period 2000-2015. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c3f86d9d-e6cc-47ba-9798-135caf5214a1',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'LM-N1',
          'format' => NULL,
          'safe_value' => 'LM-N1',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '54e62811-e826-44cf-a2f7-49b76cf40087',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6977,
          'revision_id' => 6977,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465549521,
          'changed' => 1465549521,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'landlessness',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c4427131-7189-4005-bb0f-f28c6de892bf',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
      ),
    ),
    'name_original' => 'landlessness',
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-1261-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'FAO - Agricultural Census',
    'description' => '<p>This dataset contains information from agricultural censuses&nbsp;conducted in different countries&nbsp;as&nbsp;provided by FAO.</p>
',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-ACI',
          'format' => NULL,
          'safe_value' => 'FAO-ACI',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '11005528-e13b-45b2-814a-5bb54c84bdfe',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6919,
          'revision_id' => 6919,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465392786,
          'changed' => 1465392786,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3765-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3717-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3787-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7462-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3694-0',
    'description_original' => 'Property used as collateral is pledged as a guarantee for the repayment of a loan. The most common form of use of collateral is the mortgage.',
  );
  $terms[] = array(
    'name' => 'Population growth',
    'description' => '<p>Population growth (annual %) is the exponential rate of growth of midyear population from year t-1 to t, expressed as a percentage.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c8cafe30-118b-4d07-b677-c7c9b566d52f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '573e86b6-632a-475e-9471-1d2477ac0a4f',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SP.POP.GROW',
          'format' => NULL,
          'safe_value' => 'WB-SP.POP.GROW',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7029,
          'revision_id' => 7029,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465490632,
          'changed' => 1465490632,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Shares in Area Operated as Owner',
    'description' => '<p>Share (%) of the total area (ha) of agricultural holdings under ownership, in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c8e79904-7382-4eb9-ae7b-a306d7953d0b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-ACI-12',
          'format' => NULL,
          'safe_value' => 'FAO-ACI-12',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6927,
          'revision_id' => 6927,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465495600,
          'changed' => 1465495600,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'indigenous lands',
    'description' => 'territory whose owners legitimacy is drawn from prior occupancy (founding fathers). ',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c97f75b3-5c9e-45c2-bd1d-b5e206481e78',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3719-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7271-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3709-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
      ),
    ),
    'name_original' => 'common property',
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-1247-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3821-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3810-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Access to Land & Tenure Security',
    'description' => '<p>Land tenure is the relationship, whether legally or customarily defined, among people, as individuals or groups, with respect to land. (For convenience, "land" is used here to include other natural resources such as water and trees.) Land tenure is an institution, i.e., rules invented by societies to regulate behaviour. Rules of tenure define how property rights to land are to be allocated within societies. They define how access is granted to rights to use, control, and transfer land, as well as associated responsibilities and restraints. In simple terms, land tenure systems determine who can use what resources for how long, and under what conditions.</p>

<p>Land tenure is an important part of social, political and economic structures. It is multi-dimensional, bringing into play social, technical, economic, institutional, legal and political aspects that are often ignored but must be taken into account. Land tenure relationships may be well-defined and enforceable in a formal court of law or through customary structures in a community. Alternatively, they may be relatively poorly defined with ambiguities open to exploitation.</p>

<p>Source: <a href="http://www.gltn.net/index.php/land-tools/themes/access-to-land-and-tenure-security">GLTN</a></p>

<p>&nbsp;</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'overarching_categories',
    'field_related_topics' => array(
      'und' => array(
        0 => array(
          'tid' => 'b1c075b0-bd56-4a46-9e30-89b722b48db1',
        ),
        1 => array(
          'tid' => '3dfe9c07-cd72-4a6d-834d-9b9db6182d41',
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
          'tid' => 'cc9a4931-94e9-49b4-b3b4-e4fa582ae73c',
        ),
        6 => array(
          'tid' => '5c7c94f4-a902-4db9-990e-98cc5de45875',
        ),
        7 => array(
          'tid' => '9d0c7ab3-9bf5-4ee8-a0a2-2017447cfd06',
        ),
        8 => array(
          'tid' => '0a13c87c-e49d-4e3f-ab22-f6c82e6c7609',
        ),
        9 => array(
          'tid' => '5848a214-8158-4578-a6b4-0cf9187672cb',
        ),
        10 => array(
          'tid' => 'c666a5bb-274e-4096-925a-a5da7a7a3e02',
        ),
        11 => array(
          'tid' => 'c97f75b3-5c9e-45c2-bd1d-b5e206481e78',
        ),
        12 => array(
          'tid' => '4b609bed-6146-444a-95b4-cf57ce6a0d11',
        ),
        13 => array(
          'tid' => '37a3cf62-94d5-4832-82e8-1cdc18894624',
        ),
        14 => array(
          'tid' => '286e5a44-023a-4041-be35-a81e21697730',
        ),
        15 => array(
          'tid' => '3e8370bb-1ef7-46d2-afeb-86edad772c95',
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
          'tid' => '6c990f0b-f385-4689-99a1-4e99b4ae5db3',
        ),
        20 => array(
          'tid' => '46fc5f3a-d5a9-4041-8f9b-a50d5763dbba',
        ),
        21 => array(
          'tid' => '6ed7cc8e-4184-4b5b-af2f-aa1367883c9d',
        ),
        22 => array(
          'tid' => 'ef882f64-9197-4e40-92f9-02602c13c666',
        ),
        23 => array(
          'tid' => 'c4427131-7189-4005-bb0f-f28c6de892bf',
        ),
        24 => array(
          'tid' => 'ef917104-7e3d-45c6-a4c7-576ca182c9f7',
        ),
        25 => array(
          'tid' => '96b52323-e2a2-4b03-8a1c-457661ad57af',
        ),
        26 => array(
          'tid' => '4386102f-5b35-42fe-9d84-be0f221d29c9',
        ),
        27 => array(
          'tid' => 'bff5e1d0-ff34-43c4-b96b-715dcdf18808',
        ),
        28 => array(
          'tid' => '52eeec74-4ee5-4d34-bc57-1ebfdc5ff6f1',
        ),
        29 => array(
          'tid' => '016e5047-8f0f-4f74-ae87-ddceebab85db',
        ),
        30 => array(
          'tid' => '963b93c4-55c1-40f5-bb50-f905240ae189',
        ),
        31 => array(
          'tid' => '5b9577a3-8eaf-42a6-a0e0-90daa8603189',
        ),
        32 => array(
          'tid' => '1d24d04b-20f0-431d-9b22-9ff43366d69b',
        ),
        33 => array(
          'tid' => 'aff2815f-7bb3-43ec-9ea7-64b0027dfcd3',
        ),
        34 => array(
          'tid' => '287d13da-66e5-432e-b0b3-f5456a0c3b2a',
        ),
        35 => array(
          'tid' => '794d047c-93e5-4fa6-bb3a-9b379fbfdf26',
        ),
        36 => array(
          'tid' => '8b044a2a-7560-49c3-9fcc-dc43c937d0ca',
        ),
        37 => array(
          'tid' => '3da5ca60-e9bc-412b-be21-8103eb65e1d9',
        ),
        38 => array(
          'tid' => '949b365c-4179-406c-9707-26bfa2bca2b4',
        ),
        39 => array(
          'tid' => 'f8a4ff58-982c-415a-8ce6-c9a17f9b4e1b',
        ),
        40 => array(
          'tid' => 'c661f52c-b87f-424a-b26a-fdfa9aea1150',
        ),
        41 => array(
          'tid' => 'b7312d35-e143-4a91-a88d-09413aef749c',
        ),
        42 => array(
          'tid' => '12594763-6522-441c-a03d-f72b0fc5f14f',
        ),
        43 => array(
          'tid' => '1e55a080-08e2-4529-85af-c3a49f056856',
        ),
        44 => array(
          'tid' => '5fb9de42-f11d-45f3-b58c-96dcda4c7368',
        ),
        45 => array(
          'tid' => 'ff9a0b46-76e1-4868-a4a9-03e3768c0972',
        ),
        46 => array(
          'tid' => '652eed13-7165-4177-a780-0e2e77b0cf61',
        ),
        47 => array(
          'tid' => '43a43997-cbec-41b9-92f2-a7ccf0c5e0ee',
        ),
        48 => array(
          'tid' => 'dd13caa6-b566-4d0c-9021-c7138abededa',
        ),
        49 => array(
          'tid' => 'd4a43270-77bc-47a6-a1ef-baf85546e115',
        ),
        50 => array(
          'tid' => 'da363a4d-711a-477d-b217-91fa975dcd99',
        ),
        51 => array(
          'tid' => '33fad031-7dea-42ba-8212-5c77ecac4f89',
        ),
        52 => array(
          'tid' => '31738ba0-1faa-4828-b3db-c2e2d8dcdb76',
        ),
        53 => array(
          'tid' => '12de1588-7958-4800-9433-074f1de729d2',
        ),
        54 => array(
          'tid' => 'e53bbebf-0765-47e4-823e-68b17fb19157',
        ),
        55 => array(
          'tid' => '41b11446-cd66-4796-9824-668df13797fb',
        ),
        56 => array(
          'tid' => 'e3230d24-89a4-4359-83d8-1c3372c5a6c1',
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
          'uid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
          'filename' => 'ats.gif',
          'uri' => 'public://ats.gif',
          'filemime' => 'image/gif',
          'filesize' => 2015,
          'status' => 1,
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'ed966d86-e260-4c47-9af3-8e7ee4361701',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 89,
            'width' => 100,
          ),
          'alt' => '',
          'title' => '',
          'height' => 89,
          'width' => 100,
          'uuid_features_file_data' => 'R0lGODlhZABZANUAAAAAAP////7+/v39/fz8/Pv7+/r6+vn5+fj4+Pf39/b29vX19fT09PPz8/Ly8vHx8fDw8O/v7+7u7u3t7ezs7Ovr6+rq6unp6ejo6Ofn5+bm5uXl5eTk5OPj4+Li4uHh4eDg4N/f397e3t3d3dzc3Nvb29ra2tnZ2djY2NfX19bW1v///wAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACH5BAEAACsALAAAAABkAFkAAAb/wJVwSCwaj8ikcslsOp/QqHRKrVqv2Kx2y+16v+CweEwum8/otHrNbrvf8Lh8Tq/b7/i8fs8vWjQcHBt9XxcjJigqKSoqKCYhhFojioyLi5QpI5FVFpeMn6CfJ5tTJ5cpqJWpiqglpFAirIoiFRAPDxAXJJgpH69NF54pGwgDAgECAgQLH54ov0wllygXBAHX2NcGHJYqIkUdlYwcr5+9CMjH6uoKk59DGyeqlyYZkRusJxPH2f0CGKcubCjBqluqFCU09AmBCqECbPyuRWRQkGBDgxhJKNRzcYSBfiADHLDUsGCvCwxLokJBwh4eTCIKIJM4c6YAAygONjwBwsEx/wIQRJiStejZHZIxI9akiZNkChMfJHzMZmBCiKEFUbikoypmyH44K6HwIAGBUogIKDTjNarORa80IWJrmiLEBLNy8w5AUEGEym9cG8L9qg0hhQMD+iFQwBhdtr0WTDQ0OgemTH7qaAp4cEJCTXUDLKoYYZNmhZyKIM1BWkCp6wEeRBhwHWDAJFQhvibYxYorq8FfG5iwcPaabUoivg7I0E11nLcy49IcEO9AtogDSFgSQfuaAtQpKK/hQMJEiduogINcIKJDcYkTLFi44PmrABAHSZAoQcLDGQvimDPLZZoZZ8EJC5Q2U2IKZlbaA+AZ1BYZOWH0W2vXYYMACBxE1/8dYSAZgN8qJbkyhl/CnJKCetgMEEEJELwHonITJHKQLB2MQZAiJYBggkmDKVXAByAkYEyGAgyg5JJLYvaYAikhBMJQmYzhCQYGMPCjYNGBBOEJI3TAYDYMeBDCmWiG0EGCYIEgwpYhLGCAB5ONAUoFxzRApVdOHjOBBx2UYMKRmD0gTUYN9GlANycccAw3lljJSgXahHBhd0vGk5hShqq4CAkNhGhjL9hwU4mdqRAXQAEeXAiiABqcMCY2DhzKC6iiUrJBqQdJqgilq27AZV6abTBohrVaiOtSTSmCAT+mLmLnJ8Ql2Ul6XYYkgLGzXpOsSiksS1WFKkQgEaSo+Kr/wgWbOrAlnwWmo6mDAnx7a6KahYVQAsgM0EEqE4IhDyoYMIhAMytiSGxt3C4VQKfzqCDuXDZ2eA0BdDJiwhimLKKBNQEQcEFOIoBsX6zF2UvSCKH2U0AiKEzAoAEIq2BiGDsO42EDIzx1QQVABy20BSKgYIHQQHNApSwmbIB0BcGkUGQyIuGnCAk6fuKBo8hAuRIKYIctdoVjhz3ZwF+XjUoH1nmHYl1juKNCkcgcbAIJ5F5k0t56o0KCLjcGjkIJJ1gsAAM9L+KfGJYqMoICyUSAAgUIbFDhRZhnnrnRK1hw+d4oVIAABiiw2Skq5IhRcwmJCgCBCQ/cJCxRtAdu/wkKtAxRwQgdX4RCwQJUYMJDAkjQ+1ZgcKCKBMkoIEIGBAiggNWUcCBfBURUcPT1SqxFCdsCHNDBB7MRAFAlF4wRwSkWJEZABiYk6LqtT1lBwZaojMBAMhCcQEFiBcAHKjZGhh8pogOXcR4IjCEAz6kkR1KwFElMEIFjIEAEW7tGAkDACk2QwSLh4lrwUBCjVaGrISXAnhMw0DtF/A5kF6CgOhoAQl+QIWPhccBcPhACxyCATiRphA2XEILLrSQDswlAApoWnQFMYDIWKEMFMJGBbDTgdwazgDTEgRAlQEA0lCABBaJDgA6Q4CHXKEA4inIGcZQgicgwY8uU4YARFf/Eg0foGCtQsKYxvU5V19CSJbBmBjAicCYJKIEHEpAZAkiAfis6gmRg8oAjIYMBIiBB9JBhgNsoAnljAEgqftfER35gfxFZQAd6l4LUDWFEqDjBBtp2sQdkUofXOAC6FJEGv+TjAmSUwAhEIBWIHEAD5CLkEHp3AmDS5ACGCEElc4nMiwzxDNqpxHA2OQAGKI0DDdiUAA5GEiJQ4BQbmM1PIOABE2hAAZsyQAbkQQnnpIGeijgBBiBSgMiEAI3IoACVXIkwhMSOVoeIwCaDNapwuSFnzrKGOhDwAA8FQAGH6qIQ8AcCrnESAh9RB8ZuBQcjnqACJqNNARKXLiFcpAP8JgtJAZiTHzlQKVw+IcwAfCktl7KCA7NyjfEucrM4YGVyDorLACTISyFgYgNOkosAmEOJosZBA5OhgIxqw5DeuLQhUCXMVC8SRTpgIB/7iNcxllqSIZAEqn2SyFTBYwdRhietDlNHlFLgVrBu9R8XqeseLYCAwhr2sAngqQrcyooOJOCwkK1cYO2QiKuB4LKYzWwRKUHAFVDpEZkNrY9udwdI6uS0lhjiXp3C2oIApg4c+FzfwFU/3eWtdhhJQfruwAHJaG5zeBwC4FDLtxKA0g4bAAEJhslcEYhgBND1wG6PkIEPPNe52HXuMD9wXGh497vgDa94x0teOgQBADs=',
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
          'uid' => 8157,
          'status' => 1,
          'translate' => 0,
          'created' => 1467034770,
          'changed' => 1467034770,
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7452-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3863-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Discriminatory Family Code - Inheritance Rights of Women',
    'description' => '<p>This indicator was a sub-component of the Discriminatory Family Code Index in the Gender Institutions and Development Database in the 2009 edition. It ranges from 0 (same inheritance rights to both Women and men) to 1 (The law does not guarantee the same inheritance rights to widows and widowers, or widows have no inheritance rights at all). In the 2012 edition of the same database made by OECD, this index was splitted into two separated sub-component:<br />
1) Discriminatory Familiy Code - Inheritance Rights of Widows<br />
2) Discriminatory Familiy Code - Inheritance Rights of Daughters</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd280dd0f-9ef3-4ea6-aa71-f17af22a3dc7',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'OECD-SIGI-8',
          'format' => NULL,
          'safe_value' => 'OECD-SIGI-8',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Index (0; 1)',
          'format' => NULL,
          'safe_value' => 'Index (0; 1)',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '741b7bd9-9dd9-43f7-bbf1-4689077768a1',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '6834ca25-ae73-4d0d-b257-e3aaa0b7154c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6989,
          'revision_id' => 6989,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465469190,
          'changed' => 1465469190,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Land area',
    'description' => '<p>Land area is the total area (1\'000 Ha) of the country excluding area under inland water bodies.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd300d02d-9000-4443-a436-df3393355a8b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'd9039fd5-e3dc-4883-88f8-363956b48f39',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-6601-5110',
          'format' => NULL,
          'safe_value' => 'FAO-6601-5110',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => '1\'000 Ha',
          'format' => NULL,
          'safe_value' => '1&#039;000 Ha',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '6e6ab79d-bad7-425f-a719-93901e6f1027',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6954,
          'revision_id' => 6954,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465486248,
          'changed' => 1465486248,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Population aged 0-14',
    'description' => '<p>Population, age 0-14 (% of total) is the population between the ages of 0 and 14 as a percentage of the total population.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd3809525-0a86-4a4e-969a-e890f766428b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '573e86b6-632a-475e-9471-1d2477ac0a4f',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SP.POP.0014.TO.ZS',
          'format' => NULL,
          'safe_value' => 'WB-SP.POP.0014.TO.ZS',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7031,
          'revision_id' => 7031,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465489924,
          'changed' => 1465489924,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'state property',
    'description' => 'State property is property owned by the state.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd4a43270-77bc-47a6-a1ef-baf85546e115',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3772-0',
    'description_original' => 'State property is property owned by the state.',
  );
  $terms[] = array(
    'name' => 'Fertility Rate - Total (Births per Woman)',
    'description' => '<p>Total fertility rate represents the number of children that would be born to a woman if she were to live to the end of her childbearing years and bear children in accordance with current age-specific fertility rates.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd6dfc1e1-0515-45bd-8c3c-efaa520e0b44',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '573e86b6-632a-475e-9471-1d2477ac0a4f',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SP.DYN.TFRT.IN',
          'format' => NULL,
          'safe_value' => 'WB-SP.DYN.TFRT.IN',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7024,
          'revision_id' => 7024,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465472161,
          'changed' => 1465472161,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'land investments',
    'description' => 'Acquisition of land for future benefits',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd7a33fbf-5f74-4c95-b461-69a72f6e0769',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3731-0',
    'description_original' => 'Acquisition of land for future benefits',
  );
  $terms[] = array(
    'name' => 'Discriminatory Familiy Code - Inheritance Rights of Daughters',
    'description' => '<p>This indicator is a sub-component of the Discriminatory Family Code Indicator and measures whether daughters and sons have equal inheritance rights. It ranges from 0 (same inheritance rights for both daughters and sons) to one (The law does not guarantee the same inheritance rights to daughters and sons, or daughters have no inheritance rights at all).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd7d57084-653b-4edd-ad0e-cccfcd782d55',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'OECD-SIGI-9',
          'format' => NULL,
          'safe_value' => 'OECD-SIGI-9',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Index (0; 1)',
          'format' => NULL,
          'safe_value' => 'Index (0; 1)',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '741b7bd9-9dd9-43f7-bbf1-4689077768a1',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '6834ca25-ae73-4d0d-b257-e3aaa0b7154c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6990,
          'revision_id' => 6990,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465465850,
          'changed' => 1465465850,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'sustainable land use',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd8792d68-2bbe-4dc1-a794-7dde4cb0db69',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7460-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'FAO - Land Use',
    'description' => '<p>This dataset contains indicators on various aspects of land use (e.g.<em>&nbsp;agricultural land; arable land; land use; etc.)</em>&nbsp;as provided by the Statistics Division of FAO.</p>
',
    'format' => 'filtered_html',
    'weight' => 9,
    'uuid' => 'd9039fd5-e3dc-4883-88f8-363956b48f39',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-LU',
          'format' => NULL,
          'safe_value' => 'FAO-LU',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '11005528-e13b-45b2-814a-5bb54c84bdfe',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6916,
          'revision_id' => 6916,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465393610,
          'changed' => 1465393610,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'extensive land use',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd90b23ad-6e66-4d42-afe6-5bac6d921a54',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3809-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7284-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3775-0',
    'description_original' => 'A tenant farmer is someone who holds a farm as a farmer or a share cropper.',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Agriculture - Value Added',
    'description' => '<p>Share (%) of Agricultural Value added with respect to the Total Value Added produced in a given country in a given year. Agriculture corresponds to ISIC divisions 1-5 and includes forestry, hunting, and fishing, as well as cultivation of crops and livestock production. Value added is the net output of a sector after adding up all outputs and subtracting intermediate inputs. It is calculated without making deductions for depreciation of fabricated assets or depletion and degradation of natural resources.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'dc272c22-a5e5-48b9-80b4-73c97c1624b2',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'de6a3ad0-3109-41b9-ac54-9cdbe305b097',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-NV.AGR.TOTL.ZS',
          'format' => NULL,
          'safe_value' => 'WB-NV.AGR.TOTL.ZS',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '6e6ab79d-bad7-425f-a719-93901e6f1027',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7037,
          'revision_id' => 7037,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465409040,
          'changed' => 1465409040,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'WB - World Governance Indicators',
    'description' => '<p>This dataset contains&nbsp;indicators on institutional quality (<em>Control of Corruption</em> and <em>Rule of Law</em>)&nbsp;as provided by the World Bank World Governance Indicators (WGI) Database.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'dc286b77-08c7-44f6-ba1d-4e465269101d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-WGI',
          'format' => NULL,
          'safe_value' => 'WB-WGI',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '78e2ad5a-ed53-4bc5-aafe-2d39f19da353',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6908,
          'revision_id' => 6908,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465396193,
          'changed' => 1465396193,
        ),
      ),
    ),
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3798-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3845-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Relative agricultural land',
    'description' => '<p>Share (%) of Agricultural Land with respect to the Total Land Area.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'de1f6210-2c59-4973-8fc1-9d6deea8061c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'd9039fd5-e3dc-4883-88f8-363956b48f39',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-X-6610-5110',
          'format' => NULL,
          'safe_value' => 'FAO-X-6610-5110',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '6e6ab79d-bad7-425f-a719-93901e6f1027',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6955,
          'revision_id' => 6955,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465492117,
          'changed' => 1465492117,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'WB - Rural Development Indicators',
    'description' => '<p>This dataset contains indicators on rural areas and agricultural activities (such as <em>Employees in Agriculture</em>, <em>Agriculture Value Added, Agricultural Irrigated Land</em>...), as provided by the World Bank.</p>
',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'de6a3ad0-3109-41b9-ac54-9cdbe305b097',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-RD',
          'format' => NULL,
          'safe_value' => 'WB-RD',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '78e2ad5a-ed53-4bc5-aafe-2d39f19da353',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6911,
          'revision_id' => 6911,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465395607,
          'changed' => 1465395607,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Poverty Gap at Nationl Poverty Line',
    'description' => '<p>Poverty gap at national poverty line is the mean shortfall from the poverty line (counting the nonpoor as having zero shortfall) as a percentage of the poverty line. This measure reflects the depth of poverty as well as its incidence.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'de984451-dbbd-4ecb-90c9-623ba57e0bf0',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '08313495-2fcc-450f-990c-95139099d968',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SI.POV.NAGP',
          'format' => NULL,
          'safe_value' => 'WB-SI.POV.NAGP',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7022,
          'revision_id' => 7022,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465490871,
          'changed' => 1465490871,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total Area of Holdings',
    'description' => '<p>Total Area (Ha) of agricultural holdings in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'deaeac26-fea2-4683-a57a-67981616c63d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-ACI-2',
          'format' => NULL,
          'safe_value' => 'FAO-ACI-2',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Ha',
          'format' => NULL,
          'safe_value' => 'Ha',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6925,
          'revision_id' => 6925,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465497946,
          'changed' => 1465497946,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'Population, female',
    'description' => '<p>Population, female (% of total) is the percentage of the population that is female.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'df652058-cd73-46ce-9b41-231ec60bd111',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '573e86b6-632a-475e-9471-1d2477ac0a4f',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SP.POP.TOTL.FE.ZS',
          'format' => NULL,
          'safe_value' => 'WB-SP.POP.TOTL.FE.ZS',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7028,
          'revision_id' => 7028,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465490479,
          'changed' => 1465490479,
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3793-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7210-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3854-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Number of holdings under women and men co‐ownership',
    'description' => '<p>It is the total number of holdings jointly holded by women and men in a given country in a given year. It can be compared with the Total Number of Holdings and with the Number of Rural Households Headed by Women.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e33b1d56-226b-4664-a796-07288b7a1b77',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'af8915e6-281d-41b5-af8b-e210de56cdc5',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOGENDER1',
          'format' => NULL,
          'safe_value' => 'INDFAOGENDER1',
        ),
      ),
    ),
    'field_unit' => array(),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6947,
          'revision_id' => 6947,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449699233,
          'changed' => 1449699233,
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3782-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Restricted Civil Liberties',
    'description' => '<p>This indicator is a component of the SIGI - Social Institutions and Gender Index&nbsp; captures discriminatory laws and practices that restrict women’s access to public space, their political voice and their participation in all aspects of public life. This includes a lack of freedom of movement, the inability to vote or run for election, and negative attitudes toward women as public figures or as leaders. This sub-index highlights the importance of women’s participation in community actions and public decision making for a range of development outcomes such as governance, health and education.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e5d62091-93ea-423a-b4ea-06d5cf4a4aaf',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'OECD-SIGI-4',
          'format' => NULL,
          'safe_value' => 'OECD-SIGI-4',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Index (0; 1)',
          'format' => NULL,
          'safe_value' => 'Index (0; 1)',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => '741b7bd9-9dd9-43f7-bbf1-4689077768a1',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '6834ca25-ae73-4d0d-b257-e3aaa0b7154c',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6987,
          'revision_id' => 6987,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465492978,
          'changed' => 1465492978,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Access to improved sanitation facilities (%)',
    'description' => '<p>Share (%) of the total population with Access to Sanitation Facilities.&nbsp;Access to improved sanitation facilities refers to the percentage of the population with at least adequate access to excreta disposal facilities that can effectively prevent human, animal, and insect contact with excreta. Improved facilities range from simple but protected pit latrines to flush toilets with a sewerage connection. To be effective, facilities must be correctly constructed and properly maintained.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e8f6ec42-b9bd-4c7b-aa58-1e534c9b80c3',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '704ff095-fce6-4e1d-9c24-4ca9ddd59bdf',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-21020-6121',
          'format' => NULL,
          'safe_value' => 'FAO-21020-6121',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '30505824-ccd9-4d7f-990e-84745b5df726',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6940,
          'revision_id' => 6940,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465404729,
          'changed' => 1465404729,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'land use planning',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ec0ef9d7-ea84-49ad-81d8-937e4af9e87b',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3838-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Poverty gap at Urban poverty line (%)',
    'description' => '<p>Poverty gap at urban poverty line is the mean shortfall from the poverty line (counting the nonpoor as having zero shortfall) as a percentage of the national urban poverty line. This measure reflects the depth of poverty as well as its incidence.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ef17fe9d-a53d-4586-9d0d-1a82201cfd70',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'dc286b77-08c7-44f6-ba1d-4e465269101d',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'WB-SI.POV.URGP',
          'format' => NULL,
          'safe_value' => 'WB-SI.POV.URGP',
        ),
      ),
    ),
    'field_unit' => array(),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7020,
          'revision_id' => 7020,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465491189,
          'changed' => 1465491189,
        ),
      ),
    ),
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3861-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3740-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3817-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Total Number of Deals of Other Topic',
    'description' => '<p>Total number of deals having as main object purposes related to other topic - that is different from deals intended for Agriculture (Total Number of Agriculture Deals), Industry (Total Number of Industry Deals), Conservation (Total Number of Conservation Deals), Renewable Energy (Total Number of Renewable Energy Deals), Forestry (Total Number of Forestry Deals), Tourism (Total Number of Tourism Deals) and Unknow (Total Number of Deals of Unknown Topic) in a given country over the period 2000-2015. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f2a59eba-4bb1-4032-83cd-5af96c79e2cc',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'LM-N12',
          'format' => NULL,
          'safe_value' => 'LM-N12',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '54e62811-e826-44cf-a2f7-49b76cf40087',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6970,
          'revision_id' => 6970,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465550021,
          'changed' => 1465550021,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'local community',
    'description' => 'Local community is a traditional collectivity with a range of powers covering a certain geographical area and an autonomous management structure. ',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f5b1524f-72c6-4574-9f5e-8cca9c33877d',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3739-0',
    'description_original' => 'Local community is a traditional collectivity with a range of powers covering a certain geographical area and an autonomous management structure. ',
  );
  $terms[] = array(
    'name' => 'Number of agricultural holdings operated under more than One Form of Tenure',
    'description' => '<p>Number of agricultural holdings under more than one form of tenure in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f8137ca1-2dee-4add-b38b-15f4d4124330',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-ACI-15',
          'format' => NULL,
          'safe_value' => 'FAO-ACI-15',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Number',
          'format' => NULL,
          'safe_value' => 'Number',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(
      'und' => array(
        0 => array(
          'tid' => 'cf2ba52f-5139-4410-90fc-e11be383bf16',
        ),
      ),
    ),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => 'e36e1c4c-1ec7-4f27-88ee-575d87463eba',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6938,
          'revision_id' => 6938,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465488504,
          'changed' => 1465488504,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'right of access',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f8a4ff58-982c-415a-8ce6-c9a17f9b4e1b',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3857-0',
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
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-7458-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'Access to improved water sources (%)',
    'description' => '<p>Share (%) of the total population with access to improved drinking water sources. Access to an improved water source refers to the percentage of the population with reasonable access to an adequate amount of water from an improved source, such as a household connection, public standpipe, borehole, protected well or spring, and rainwater collection. Unimproved sources include vendors, tanker trucks, and unprotected wells and springs. Reasonable access is defined as the availability of at least 20 liters a person a day from a source within one kilometer of the dwelling.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'fc8db238-545e-4d83-97f1-9ce42bde12eb',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '704ff095-fce6-4e1d-9c24-4ca9ddd59bdf',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'FAO-21019-6121',
          'format' => NULL,
          'safe_value' => 'FAO-21019-6121',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'value' => 'Percentage',
          'format' => NULL,
          'safe_value' => 'Percentage',
        ),
      ),
    ),
    'field_geographical_focus' => array(),
    'field_related_domains' => array(),
    'field_related_topics' => array(),
    'field_related_themes' => array(
      'und' => array(
        0 => array(
          'tid' => '30505824-ccd9-4d7f-990e-84745b5df726',
        ),
      ),
    ),
    'field_min' => array(),
    'field_max' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6941,
          'revision_id' => 6941,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1465404987,
          'changed' => 1465404987,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'sacred woods',
    'description' => 'A sacred wood is a wood which has a spiritual significance where the land is held by the local spirits and its spiritual character is venerated.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ff9a0b46-76e1-4868-a4a9-03e3768c0972',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landvoc_concepts',
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
    'entity_translation_handler_id' => 'taxonomy_term-landvoc_concepts-eid-3768-0',
    'description_original' => 'A sacred wood is a wood which has a spiritual significance where the land is held by the local spirits and its spiritual character is venerated.',
  );
  return $terms;
}
