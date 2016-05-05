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
    'name' => 'forestry',
    'description' => '',
    'format' => 'plain_text',
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
          'format' => 'plain_text',
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
          'changed' => 1460557403,
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
          'changed' => 1460557403,
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
          'changed' => 1431355543,
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
          'changed' => 1460557397,
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
          'changed' => 1460557397,
        ),
      ),
    ),
    'name_original' => 'land dispute',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3726-0',
    'description_original' => NULL,
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
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'rangelands',
    'description' => NULL,
    'format' => NULL,
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
      'und' => array(
        0 => array(
          'value' => 'rangelands',
          'format' => 'plain_text',
          'safe_value' => 'rangelands',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(),
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
          'changed' => 1460557394,
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
          'changed' => 1460557394,
        ),
      ),
    ),
    'name_original' => 'rangelands',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3843-0',
    'description_original' => NULL,
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
          'changed' => 1460557397,
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
          'changed' => 1460557397,
        ),
      ),
    ),
    'name_original' => 'land environment',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3727-0',
    'description_original' => NULL,
  );
  $terms[] = array(
    'name' => 'climate change',
    'description' => '',
    'format' => 'plain_text',
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
          'format' => 'plain_text',
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
          'changed' => 1460557389,
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
          'changed' => 1460557389,
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
          'changed' => 1431355543,
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
          'changed' => 1460557389,
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
          'changed' => 1460557389,
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
          'changed' => 1460557397,
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
          'changed' => 1460557397,
        ),
      ),
    ),
    'name_original' => 'pastoral land rights',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3752-0',
    'description_original' => NULL,
  );
  $terms[] = array(
    'name' => 'property law',
    'description' => '',
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
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
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
          'changed' => 1460557400,
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
          'changed' => 1460557400,
        ),
      ),
    ),
    'name_original' => 'property law',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3759-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 1,
    ),
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
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1459428262,
          'changed' => 1459428262,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'land deals',
    'description' => NULL,
    'format' => NULL,
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
    'description_field' => array(),
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
          'changed' => 1460557406,
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
          'changed' => 1460557406,
        ),
      ),
    ),
    'name_original' => 'land deals',
    'entity_translation_handler_id' => 'taxonomy_term-eid-6894-0',
    'description_original' => NULL,
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
        1 => array(
          'tid' => '5490003f-735e-498a-b876-c6293849c6b8',
        ),
        2 => array(
          'tid' => '3eec878a-ec17-482d-ab8f-da54444f1b7f',
        ),
        3 => array(
          'tid' => 'b1c075b0-bd56-4a46-9e30-89b722b48db1',
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
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1459425474,
          'changed' => 1459425474,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'cadastral administration',
    'description' => 'the cadastral administration in any given jurisdiction is the organisation (or organisations) responsible for creating, maintaining and dealing with cadastre.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '308738ca-311b-4f17-b6fa-1f4f13aa968b',
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
          'url' => 'http://aims.fao.org/aos/agrovoc/c_d774aa00',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'cadastral administration',
          'format' => 'filtered_html',
          'safe_value' => 'cadastral administration',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'administración catastral',
          'format' => 'filtered_html',
          'safe_value' => 'administración catastral',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'administration cadastrale',
          'format' => 'filtered_html',
          'safe_value' => 'administration cadastrale',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Cadastral administration',
          'format' => 'plain_text',
          'safe_value' => 'Cadastral administration',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'the cadastral administration in any given jurisdiction is the organisation (or organisations) responsible for creating, maintaining and dealing with cadastre.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>the cadastral administration in any given jurisdiction is the organisation (or organisations) responsible for creating, maintaining and dealing with cadastre.</p>
',
          'safe_summary' => '',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Administración catastral, tiene como misión la puesta en funcionamiento de los procedimientos catastrales, así como la actualización de los documentos que de ellos resultan. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Administración catastral, tiene como misión la puesta en funcionamiento de los procedimientos catastrales, así como la actualización de los documentos que de ellos resultan.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Administration cadastrale, est la mise en œuvre des procédures cadastrales ainsi que la mise à jour des documents qui en résultent. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Administration cadastrale, est la mise en œuvre des procédures cadastrales ainsi que la mise à jour des documents qui en résultent.</p>
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
          'entity_id' => 3689,
          'revision_id' => 3689,
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
          'entity_id' => 3689,
          'revision_id' => 3689,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1460557394,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3689,
          'revision_id' => 3689,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1460557394,
        ),
      ),
    ),
    'name_original' => 'cadastral administration',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3689-0',
    'description_original' => NULL,
  );
  $terms[] = array(
    'name' => 'urban population',
    'description' => NULL,
    'format' => NULL,
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
      'und' => array(
        0 => array(
          'value' => 'urban population',
          'format' => 'plain_text',
          'safe_value' => 'urban population',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(),
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
          'changed' => 1460557403,
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
          'changed' => 1460557403,
        ),
      ),
    ),
    'name_original' => 'urban population',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3869-0',
    'description_original' => NULL,
  );
  $terms[] = array(
    'name' => 'indigenous peoples',
    'description' => '',
    'format' => 'plain_text',
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
          'format' => 'plain_text',
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
          'changed' => 1460557394,
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
          'changed' => 1460557394,
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
          'changed' => 1431355543,
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
    'description' => NULL,
    'format' => NULL,
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
      'und' => array(
        0 => array(
          'value' => 'urban planning',
          'format' => 'plain_text',
          'safe_value' => 'urban planning',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(),
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
          'changed' => 1460557389,
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
          'changed' => 1460557389,
        ),
      ),
    ),
    'name_original' => 'urban planning',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3848-0',
    'description_original' => NULL,
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
          'changed' => 1460557397,
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
          'changed' => 1460557397,
        ),
      ),
    ),
    'name_original' => 'land conflicts',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3725-0',
    'description_original' => NULL,
  );
  $terms[] = array(
    'name' => 'land acquisitions',
    'description' => '',
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
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
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
          'changed' => 1460557397,
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
          'changed' => 1460557397,
        ),
      ),
    ),
    'name_original' => 'land acquisitions',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3723-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'agriculture',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3eec878a-ec17-482d-ab8f-da54444f1b7f',
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
          'url' => 'http://aims.fao.org/aos/agrovoc/c_203',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'agriculture',
          'format' => 'filtered_html',
          'safe_value' => 'agriculture',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Agricultura',
          'format' => 'filtered_html',
          'safe_value' => 'Agricultura',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Agriculture',
          'format' => 'filtered_html',
          'safe_value' => 'Agriculture',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Agriculture',
          'format' => 'plain_text',
          'safe_value' => 'Agriculture',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
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
      'original' => 'en',
      'data' => array(
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1241,
          'revision_id' => 1241,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1460557403,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1241,
          'revision_id' => 1241,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1460557403,
        ),
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1241,
          'revision_id' => 1241,
          'language' => 'und',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1431355543,
        ),
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1241,
          'revision_id' => 1241,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1460557403,
          'changed' => 1460557403,
        ),
      ),
    ),
    'name_original' => 'agriculture',
    'entity_translation_handler_id' => 'taxonomy_term-eid-1241-0',
    'description_original' => '',
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
          'created' => 1459852554,
          'changed' => 1459852554,
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
      'original' => NULL,
      'data' => array(),
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
          'changed' => 1460557394,
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
          'changed' => 1460557394,
        ),
      ),
    ),
    'name_original' => 'agroforestry systems',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3790-0',
    'description_original' => NULL,
  );
  $terms[] = array(
    'name' => 'agricultural land management',
    'description' => 'Organization, use and conservation of soils adopted to cultivate, at large.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5490003f-735e-498a-b876-c6293849c6b8',
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
          'url' => 'http://aims.fao.org/aos/agrovoc/c_4bd6790a',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'agricultural land management',
          'format' => 'filtered_html',
          'safe_value' => 'agricultural land management',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'gestión de tierras agricolas',
          'format' => 'filtered_html',
          'safe_value' => 'gestión de tierras agricolas',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'gestion de terre agricole',
          'format' => 'filtered_html',
          'safe_value' => 'gestion de terre agricole',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Agricultural land management',
          'format' => 'plain_text',
          'safe_value' => 'Agricultural land management',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Organization, use and conservation of soils adopted to cultivate, at large.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Organization, use and conservation of soils adopted to cultivate, at large.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Organisation, utilisation et conservation de sols consacrés aux cultures.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Organisation, utilisation et conservation de sols consacrés aux cultures.</p>
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
          'entity_id' => 3685,
          'revision_id' => 3685,
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
          'entity_id' => 3685,
          'revision_id' => 3685,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1460557397,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3685,
          'revision_id' => 3685,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1460557397,
        ),
      ),
    ),
    'name_original' => 'agricultural land management',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3685-0',
    'description_original' => NULL,
  );
  $terms[] = array(
    'name' => 'landowners',
    'description' => 'An owner or proprietor of land. ',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '54a00e7e-799c-4918-b61a-8c03e47536e5',
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
          'url' => 'http://aims.fao.org/aos/agrovoc/c_4184',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'landowners',
          'format' => 'filtered_html',
          'safe_value' => 'landowners',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Propietarios rurales',
          'format' => 'filtered_html',
          'safe_value' => 'Propietarios rurales',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Propriétaire foncier',
          'format' => 'filtered_html',
          'safe_value' => 'Propriétaire foncier',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'landowners',
          'format' => 'plain_text',
          'safe_value' => 'landowners',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'An owner or proprietor of land. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>An owner or proprietor of land.</p>
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
          'entity_id' => 3839,
          'revision_id' => 3839,
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
          'entity_id' => 3839,
          'revision_id' => 3839,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1460557394,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3839,
          'revision_id' => 3839,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355175,
          'changed' => 1460557394,
        ),
      ),
    ),
    'name_original' => 'landowners',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3839-0',
    'description_original' => NULL,
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
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1459428595,
          'changed' => 1459428595,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
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
          'changed' => 1460557403,
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
          'changed' => 1460557403,
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
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'land management',
    'description' => NULL,
    'format' => NULL,
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
      'und' => array(
        0 => array(
          'value' => 'land management',
          'format' => 'plain_text',
          'safe_value' => 'land management',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(),
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
          'changed' => 1460557389,
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
          'changed' => 1460557389,
        ),
      ),
    ),
    'name_original' => 'land management',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3834-0',
    'description_original' => NULL,
  );
  $terms[] = array(
    'name' => 'deforestation',
    'description' => NULL,
    'format' => NULL,
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
      'und' => array(
        0 => array(
          'value' => 'deforestation',
          'format' => 'plain_text',
          'safe_value' => 'deforestation',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(),
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
          'changed' => 1460557389,
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
          'changed' => 1460557389,
        ),
      ),
    ),
    'name_original' => 'deforestation',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3862-0',
    'description_original' => NULL,
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
          'changed' => 1460557397,
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
          'changed' => 1460557397,
        ),
      ),
    ),
    'name_original' => 'pastoral lands',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3751-0',
    'description_original' => NULL,
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
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1459428614,
          'changed' => 1459428614,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'security of tenure (land)',
    'description' => '',
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
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
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
          'changed' => 1460557400,
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
          'changed' => 1460557400,
        ),
      ),
    ),
    'name_original' => 'security of tenure (land)',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7213-0',
    'description_original' => '',
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
    'description' => '',
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
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
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
          'changed' => 1460557397,
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
          'changed' => 1460557397,
        ),
      ),
    ),
    'name_original' => 'land law',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3732-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 1,
    ),
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
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1459428410,
          'changed' => 1459428410,
        ),
      ),
    ),
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
          'changed' => 1460557394,
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
          'changed' => 1460557394,
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
          'created' => 1461144494,
          'changed' => 1461144494,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 0,
    ),
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
          'created' => 1461144486,
          'changed' => 1461144486,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'land development (urbanization)',
    'description' => NULL,
    'format' => NULL,
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
      'und' => array(
        0 => array(
          'value' => 'land development (urbanization)',
          'format' => 'plain_text',
          'safe_value' => 'land development (urbanization)',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(),
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
          'changed' => 1460557389,
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
          'changed' => 1460557389,
        ),
      ),
    ),
    'name_original' => 'land development (urbanization)',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3833-0',
    'description_original' => NULL,
  );
  $terms[] = array(
    'name' => 'land holders',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '7b7aa406-8505-4990-b0f7-2229ead2f7d4',
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
          'value' => 'land holders',
          'format' => NULL,
          'safe_value' => 'land holders',
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
          'entity_id' => 7044,
          'revision_id' => 7044,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1450346047,
          'changed' => 1450346047,
        ),
      ),
    ),
    'name_original' => 'land holders',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7044-0',
    'description_original' => NULL,
  );
  $terms[] = array(
    'name' => 'pastoralists',
    'description' => '',
    'format' => 'plain_text',
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
          'format' => 'plain_text',
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
          'changed' => 1460557406,
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
          'changed' => 1460557406,
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
          'changed' => 1431355543,
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
      ),
    ),
    'name_original' => 'pastoralists',
    'entity_translation_handler_id' => 'taxonomy_term-eid-1264-0',
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
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1459428574,
          'changed' => 1459428574,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'food security',
    'description' => '',
    'format' => 'plain_text',
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
          'format' => 'plain_text',
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
          'changed' => 1460557389,
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
          'changed' => 1460557389,
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
          'changed' => 1431355543,
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
          'changed' => 1460557394,
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
          'changed' => 1460557394,
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
          'changed' => 1460557403,
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
          'changed' => 1460557403,
        ),
      ),
    ),
    'name_original' => 'urban areas',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3874-0',
    'description_original' => NULL,
  );
  $terms[] = array(
    'name' => 'forestry policies',
    'description' => NULL,
    'format' => NULL,
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
      'und' => array(
        0 => array(
          'value' => 'forestry policies',
          'format' => 'plain_text',
          'safe_value' => 'forestry policies',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(),
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
          'changed' => 1460557389,
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
          'changed' => 1460557389,
        ),
      ),
    ),
    'name_original' => 'forestry policies',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3867-0',
    'description_original' => NULL,
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
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1459428548,
          'changed' => 1459428548,
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
    'name' => 'environment',
    'description' => '',
    'format' => 'plain_text',
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
          'format' => 'plain_text',
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
          'changed' => 1460557403,
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
          'changed' => 1460557403,
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
          'changed' => 1431355543,
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
      ),
    ),
    'name_original' => 'environment',
    'entity_translation_handler_id' => 'taxonomy_term-eid-1251-0',
    'description_original' => '',
  );
  $terms[] = array(
    'name' => 'community land rights',
    'description' => NULL,
    'format' => NULL,
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
    'description_field' => array(),
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
          'changed' => 1460557403,
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
          'changed' => 1460557403,
        ),
      ),
    ),
    'name_original' => 'community land rights',
    'entity_translation_handler_id' => 'taxonomy_term-eid-7041-0',
    'description_original' => NULL,
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
          'changed' => 1460557400,
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
          'changed' => 1460557400,
        ),
      ),
    ),
    'name_original' => 'forest law',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3712-0',
    'description_original' => NULL,
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
    'description' => NULL,
    'format' => NULL,
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
    'description_field' => array(),
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
          'changed' => 1460557394,
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
          'changed' => 1460557394,
        ),
      ),
    ),
    'name_original' => 'land tenure',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3846-0',
    'description_original' => NULL,
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
          'changed' => 1460557403,
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
          'changed' => 1460557403,
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
          'changed' => 1460557394,
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
          'changed' => 1460557394,
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
          'tid' => 'b5451c7a-e658-4120-8fd7-fe1acd098199',
        ),
        1 => array(
          'tid' => 'b1c075b0-bd56-4a46-9e30-89b722b48db1',
        ),
        2 => array(
          'tid' => '652eed13-7165-4177-a780-0e2e77b0cf61',
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
          'created' => 1461144457,
          'changed' => 1461144457,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 0,
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
          'changed' => 1460557397,
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
          'changed' => 1460557397,
        ),
      ),
    ),
    'name_original' => 'land investments',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3731-0',
    'description_original' => NULL,
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
          'tid' => 'f26d9226-ad31-4508-977c-2df6e82ef5d0',
        ),
        3 => array(
          'tid' => '02afb854-359d-4686-9613-f0cdcd666d16',
        ),
        4 => array(
          'tid' => 'f8a4ff58-982c-415a-8ce6-c9a17f9b4e1b',
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
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1459428453,
          'changed' => 1459428453,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
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
          'tid' => '308738ca-311b-4f17-b6fa-1f4f13aa968b',
        ),
        1 => array(
          'tid' => '7b7aa406-8505-4990-b0f7-2229ead2f7d4',
        ),
        2 => array(
          'tid' => '54a00e7e-799c-4918-b61a-8c03e47536e5',
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
          'uid' => 30,
          'status' => 1,
          'translate' => 0,
          'created' => 1459428506,
          'changed' => 1459428506,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'conflict of interest',
    'description' => 'A conflict of interest is a situation where an individual or corporate entity is invited to act on behalf of one party, but has an actual or potential relationship with or interest in the other party or parties.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f26d9226-ad31-4508-977c-2df6e82ef5d0',
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
          'url' => 'http://aims.fao.org/aos/agrovoc/c_854e9e62',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'conflict of interest',
          'format' => 'filtered_html',
          'safe_value' => 'conflict of interest',
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'conflicto de interés',
          'format' => 'filtered_html',
          'safe_value' => 'conflicto de interés',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'conflit d\'intérêts',
          'format' => 'filtered_html',
          'safe_value' => 'conflit d&#039;intérêts',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Conflict of interest',
          'format' => 'plain_text',
          'safe_value' => 'Conflict of interest',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => 'A conflict of interest is a situation where an individual or corporate entity is invited to act on behalf of one party, but has an actual or potential relationship with or interest in the other party or parties.',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>A conflict of interest is a situation where an individual or corporate entity is invited to act on behalf of one party, but has an actual or potential relationship with or interest in the other party or parties.</p>
',
          'safe_summary' => '',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Conflit d\' intérêt, est une situation dans laquelle un individu ou un group est invite à agir pour un parti alors qu\'il a un lien ou partage des intérêts avec un autre parti. ',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Conflit d\' intérêt, est une situation dans laquelle un individu ou un group est invite à agir pour un parti alors qu\'il a un lien ou partage des intérêts avec un autre parti.</p>
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
          'entity_id' => 3700,
          'revision_id' => 3700,
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
          'entity_id' => 3700,
          'revision_id' => 3700,
          'language' => 'es',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1460557400,
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3700,
          'revision_id' => 3700,
          'language' => 'fr',
          'source' => 'en',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1431355068,
          'changed' => 1460557400,
        ),
      ),
    ),
    'name_original' => 'conflict of interest',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3700-0',
    'description_original' => NULL,
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
          'changed' => 1460557400,
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
          'changed' => 1460557400,
        ),
      ),
    ),
    'name_original' => 'local community',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3739-0',
    'description_original' => NULL,
  );
  $terms[] = array(
    'name' => 'right of access',
    'description' => NULL,
    'format' => NULL,
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
      'und' => array(
        0 => array(
          'value' => 'right of access',
          'format' => 'plain_text',
          'safe_value' => 'right of access',
        ),
      ),
    ),
    'synonyms_synonyms' => array(),
    'description_field' => array(),
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
          'changed' => 1460557394,
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
          'changed' => 1460557394,
        ),
      ),
    ),
    'name_original' => 'right of access',
    'entity_translation_handler_id' => 'taxonomy_term-eid-3857-0',
    'description_original' => NULL,
  );
  return $terms;
}
