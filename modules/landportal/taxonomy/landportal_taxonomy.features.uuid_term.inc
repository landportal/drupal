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
    'name' => 'Socio-Economic & Institutional Context',
    'description' => '<p>This theme include all information which are not directly related to land issues, but are important to understand the general context in which land dynamics occur. For instance, this theme includes socio-economic, demographic and institutional information.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '040a7736-cbd1-4e08-877c-ad3ab18c700c',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'themes',
    'field_related_topics' => array(
      'und' => array(
        0 => array(
          'tid' => '278fcd9b-8eb1-438d-b4b4-62c6903a3a3b',
        ),
        1 => array(
          'tid' => '5fb9de42-f11d-45f3-b58c-96dcda4c7368',
        ),
      ),
    ),
    'field_image' => array(),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7508,
          'revision_id' => 7508,
          'language' => 'en',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1465223878,
          'changed' => 1465223878,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
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
    'name' => 'International or regional financial institution',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '168c254f-4c88-49fb-86c8-3163e25272e6',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7472,
          'revision_id' => 7472,
          'language' => 'en',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1461586536,
          'changed' => 1461586536,
        ),
      ),
    ),
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
    'name' => 'Non-profit organization',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '24f045f4-13ce-46b9-9935-bbac1a9a814c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7273,
          'revision_id' => 7273,
          'language' => 'en',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1453893930,
          'changed' => 1453893930,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Forestry',
    'description' => '<p>The profession embracing the science, art, and practice of creating, managing, using, and conserving&nbsp;forests and associated resources for human benefit and in a sustainable manner to meet desired&nbsp;goals,&nbsp;needs, and values.</p>

<p>Source: <a href="http://dictionaryofforestry.org/dict/term/forestry">SAFNet Dictionary</a></p>
',
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
    'field_image' => array(),
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
          'created' => 1463063653,
          'changed' => 1463063653,
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
    'name' => 'Land & Food Security',
    'description' => '<p>Food security&nbsp;exists when all people, at all times, have physical and economic access to sufficient, safe and nutritious&nbsp;food&nbsp;to meet their dietary needs and&nbsp;foodpreferences for an active and healthy life.</p>

<p>Source:<a href="http://www.fao.org/forestry/13128-0e6f36f27e0091055bec28ebe830f46b3.pdf"> FAO</a></p>
',
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
    'field_image' => array(),
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
          'created' => 1463063984,
          'changed' => 1463063984,
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
    'name' => 'Non Governmental organization',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '41e2cc4d-daa1-4936-880c-effba12854f6',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3379,
          'revision_id' => 3379,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1461586271,
          'changed' => 1461586271,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 0,
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
    'name' => 'Indigenous & Community Land Rights',
    'description' => '<p>Collective land rights are an essential condition for Indigenous Peoples and local communities to enjoy human rights, and uphold cultural diversity.</p>

<p>Source: <a href="http://www.landrightsnow.org/en/why/">Land Rights Now&nbsp;</a></p>
',
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
    'field_image' => array(),
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
          'created' => 1463063842,
          'changed' => 1463063842,
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
    'name' => 'Large-scale Land Acquisitions',
    'description' => '<p>&nbsp;Large scale Land Acquisitions is the buying or leasing of large pieces of land in&nbsp;developing countries, by domestic and&nbsp;transnational companies, governments, and individuals.&nbsp;</p>

<p>Source:&nbsp;&nbsp;<a href="http://www.tandfonline.com/doi/full/10.1080/03066150.2011.559005" rel="nofollow">"Towards a better understanding of global land grabbing: an editorial introduction"</a>.&nbsp;<a href="https://en.wikipedia.org/wiki/Journal_of_Peasant_Studies" title="Journal of Peasant Studies">Journal of Peasant Studies</a>&nbsp;38&nbsp;(2): 209.<a href="https://en.wikipedia.org/wiki/Digital_object_identifier" title="Digital object identifier">doi</a>:<a href="https://dx.doi.org/10.1080%2F03066150.2011.559005" rel="nofollow">10.1080/03066150.2011.559005</a>. Retrieved&nbsp;8 February&nbsp;2012.</p>
',
    'format' => 'full_html',
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
    'field_image' => array(),
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
          'created' => 1463066948,
          'changed' => 1463066948,
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
    'name' => 'United Nations Agency',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6033cb9a-c3d5-4a90-95b9-bb71dfb39ce4',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7471,
          'revision_id' => 7471,
          'language' => 'en',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1461586220,
          'changed' => 1461586220,
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
    'name' => 'Rangelands, Drylands & Pastoralism',
    'description' => '<p>Rangelands&nbsp;are grasslands, shrublands, woodlands, wetlands, and deserts that are grazed by domestic livestock or wild animals. Types of&nbsp;rangelands&nbsp;include tallgrass and shortgrass prairies, desert grasslands and shrublands, woodlands, savannas, chaparrals, steppes, and tundras.</p>

<p>Pastoralism&nbsp;is the branch of agriculture concerned with the raising of livestock.&nbsp;"Pastoralism" generally has a mobile aspect, moving the herds in search of fresh&nbsp;pasture&nbsp;and water (in contrast to&nbsp;pastoral farming, in which non-nomadic farmers grow crops and improve pastures for their livestock).&nbsp;<br />
&nbsp;</p>

<p>Drylands conventionally are defined in terms of water stress: as terrestrial areas where the mean annual rainfall (including snow, fog, hail, etc) is lower than the total amount of water evaporated to the atmosphere.</p>

<p>Sources: <a href="http://globalrangelands.org/">GlobalRangelands.org</a>&nbsp;&amp; <a href="https://en.wikipedia.org/wiki/Pastoralism#cite_note-1">Wikipedia</a>&nbsp;&amp;&nbsp;<a href="https://www.iucn.org/wisp/pastoralist_portal/drylands_and_pastoralism/">IUCN</a>&nbsp;&nbsp;</p>
',
    'format' => 'full_html',
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
    'field_image' => array(),
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
          'created' => 1463067337,
          'changed' => 1463067337,
        ),
      ),
    ),
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
    'name' => 'Land Portal Partner',
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
          'uid' => 8157,
          'status' => 1,
          'translate' => 0,
          'created' => 1467288331,
          'changed' => 1467288331,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Land & Gender',
    'description' => '<p>Despite progress on women’s rights, rights to land and security of tenure are not enjoyed equally by women and men in many parts of the world. This goes against international human rights, and also impacts negatively on households and the economy.</p>

<p>Gender issues related to land are complicated. They involve sensitive social and cultural territories and challenge deeply rooted power structures.&nbsp;</p>

<p>Source: <a href="http://landportal.info/sites/landportal.info/files/gltngendercriteria_english.pdf">GLTN / Gender Evaluation Criteria</a></p>
',
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
          'tid' => '656ae357-2c18-48f9-81aa-3d4437b45084',
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
    'field_image' => array(),
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
          'created' => 1463066342,
          'changed' => 1463066342,
        ),
      ),
    ),
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
    'name' => 'Intergovernmental or Multilateral organization',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '77c8540c-8efb-4188-957e-3b8991c6c7fd',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3384,
          'revision_id' => 3384,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1461586398,
          'changed' => 1461586398,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 0,
    ),
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
    'name' => 'International professional body',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '85fddaff-46fc-4216-8885-30a17334c1fe',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7475,
          'revision_id' => 7475,
          'language' => 'en',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1461586590,
          'changed' => 1461586590,
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
    'name' => 'Land, Climate change and Environment',
    'description' => '<p>Environment, as a cross-cutting issue, addresses global challenges of environmental impact related to land use, land management and land tenure, including the issues surrounding climate change and natural resource management.</p>

<p>Environmental and land tenure challenges include the following:</p>

<ul>
	<li>landlessness that drives poor urban and rural people to occupy and misuse fragile ecosystems;</li>
	<li>tenure insecurity undermining investment incentives and leading to environmental mismanagement in urban as well as in rural areas;</li>
	<li>large scale land acquisitions and investments may lead to tenure insecurity of poor and vulnerable groups and environmental damages;</li>
	<li>encroachment in particularly vulnerable and valuable habitats;</li>
	<li>increasing threats in coastal areas due to sea water rise and severe weather risk;</li>
	<li>shortage of arable and liveable lands results to more disputes and conflicts;</li>
	<li>increasing tensions between land, land tenure arrangements and land use;</li>
	<li>increasing land fragmentation in densely populated areas;</li>
	<li>deforestation and forest degradation leading to carbon emissions and loss of biodiversity.</li>
</ul>

<p>Source: <a href="http://gltn.net/index.php/land-tools/cross-cutting-issues/environment">GLTN</a></p>
',
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
    'field_image' => array(),
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
          'created' => 1463066701,
          'changed' => 1463066701,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Philanthropic foundation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8c40ae60-9d3f-4bd2-b243-f166f6d1d8ab',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7474,
          'revision_id' => 7474,
          'language' => 'en',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1461586572,
          'changed' => 1461586572,
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
    'name' => 'Civil Society Organization',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8f6740cc-0114-470f-a675-e3adf7b20969',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3147,
          'revision_id' => 3147,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1461586252,
          'changed' => 1461586252,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'LandLibrary content provider',
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
          'uid' => 8157,
          'status' => 1,
          'translate' => 0,
          'created' => 1467288128,
          'changed' => 1467288128,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
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
    'name' => 'Urbanization',
    'description' => '<p>Urbanization&nbsp;is a population shift from rural to urban areas, "the gradual increase in the proportion of people living in urban areas", and the ways in which each society adapts to the change.</p>

<p>Source: <a href="http://www.nlm.nih.gov/cgi/mesh/2014/MB_cgi?term=Urbanization">National Library of Medicine</a></p>
',
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
    'field_image' => array(),
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
          'created' => 1463067393,
          'changed' => 1463067393,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Private sector',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a46bc627-9f5a-47d9-98c3-062fb95c1cb7',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7473,
          'revision_id' => 7473,
          'language' => 'en',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1461586556,
          'changed' => 1461586556,
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
    'name' => 'LandBook data provider',
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
          'uid' => 8157,
          'status' => 1,
          'translate' => 0,
          'created' => 1467288309,
          'changed' => 1467288309,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
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
    'name' => 'Land Portal Hub',
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
          'uid' => 8157,
          'status' => 1,
          'translate' => 0,
          'created' => 1467288323,
          'changed' => 1467288323,
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
    'name' => 'Farmers Associations',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd1466f18-deaa-418e-aaa5-fc0b6e4eb1e7',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 2830,
          'revision_id' => 2830,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1461586618,
          'changed' => 1461586618,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'University or Research Institution',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd821699a-a2a7-443a-89d3-98b60a8dce1b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7278,
          'revision_id' => 7278,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1461586469,
          'changed' => 1461586469,
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
    'name' => 'Land Conflicts',
    'description' => '<p>A “land conflict” involves competing claims to large areas of land by groups, of a breadth and depth not easily resolved within existing law. There is often no consensus on the rules to be applied, and the parties may have quite different understandings of the nature of the conflict. As used in this paper, “conflict” implies tension and the danger of violence, but not violence unless this is specified. Longstanding potentials for conflict based in structural or other fundamental problems may be the result of “trigger” events turned violent.&nbsp;</p>

<p>Source: <a href="http://www.usaidlandtenure.net/sites/default/files/USAID_Land_Tenure_Land_and_Conflict_Issue_Brief-061214.pdf">USAID</a></p>
',
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
    'field_image' => array(),
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
          'created' => 1463066488,
          'changed' => 1463066488,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
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
    'name' => 'Land Stakeholders & Institutions',
    'description' => '<p>A&nbsp;stakeholder&nbsp;is anyone or any institution who has interests in, or is affected by, an issue or activity or transaction, and therefore has a natural right to participate in decisions relating to it.&nbsp;</p>

<p>There may be more than one stakeholder, or stakeholder group, claiming an interest in the land use on a particular area of land.</p>

<p>As examples, a farmer is a stakeholder in relation to the distribution or management of irrigation water from a common source, or as regards decisions on grazing rights on communal land. The term can also be applied to groups, as when several groups have an interest in, or are affected by, the exploitation of the water from a reservoir or products extracted from a forest. Stakeholders include those individuals or groups, such as women or indigenous communities, who have genuine and legitimate claims on use, but whose opinion may not be valued in current negotiations for cultural or religious reasons. Groups resident outside the area, such as non-governmental organizations (NGOs) and research institutions, can also be stakeholders. Also the government of a country may have ministries with the position of stakeholders. The concept can be extended to include unborn generations who have a future interest in the resource.</p>

<p>Source: <a href="http://www.fao.org/docrep/004/x3810e/x3810e06.htm#t">FAO</a></p>
',
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
    'field_image' => array(),
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
          'created' => 1463066596,
          'changed' => 1463066596,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
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
    'name' => 'Network',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f18cdf6b-0e61-4305-819d-e8556b565aa6',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3157,
          'revision_id' => 3157,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1461586315,
          'changed' => 1461586315,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 0,
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
    'name' => 'Data aggregator',
    'description' => '<p>Data aggregators&nbsp;are websites or databases that&nbsp;compile&nbsp;information and resources&nbsp;from other&nbsp;databases and sources&nbsp;with intent to prepare combined datasets for&nbsp;data processing.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ff2269c3-0261-4280-9b46-9ec47db53801',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7415,
          'revision_id' => 7415,
          'language' => 'en',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1460120020,
          'changed' => 1460120020,
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
