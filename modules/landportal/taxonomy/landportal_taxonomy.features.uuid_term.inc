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
    'name' => 'International or regional financial institution',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '168c254f-4c88-49fb-86c8-3163e25272e6',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'International or regional financial institution',
          'format' => NULL,
          'safe_value' => 'International or regional financial institution',
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
    'name_original' => 'International or regional financial institution',
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-7472-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 1,
    ),
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
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Non-profit organization',
          'format' => NULL,
          'safe_value' => 'Non-profit organization',
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
          'entity_id' => 7273,
          'revision_id' => 7273,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1453893930,
          'changed' => 1453893930,
        ),
      ),
    ),
    'name_original' => 'Non-profit organization',
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-7273-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Governmental institution',
    'description' => '<p>Local, provincial or nationla governmental institutions.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '36446160-b9d7-49ae-8357-03819751e8e1',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Governmental institution',
          'format' => NULL,
          'safe_value' => 'Governmental institution',
        ),
      ),
    ),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '<p>Local, provincial or nationla governmental institutions.</p>
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Local, provincial or nationla governmental institutions.</p>
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
          'entity_id' => 7883,
          'revision_id' => 7883,
          'language' => 'en',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1467905087,
          'changed' => 1467905087,
        ),
      ),
    ),
    'name_original' => 'Governmental institution',
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-7883-0',
    'description_original' => '<p>Local, provincial or nationla governmental institutions.</p>
',
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
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Non Governmental organization',
          'format' => NULL,
          'safe_value' => 'Non Governmental organization',
        ),
      ),
    ),
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
    'name_original' => 'Non Governmental organization',
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-3379-0',
    'description_original' => '',
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
    'name' => 'United Nations Agency',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6033cb9a-c3d5-4a90-95b9-bb71dfb39ce4',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'United Nations Agency',
          'format' => NULL,
          'safe_value' => 'United Nations Agency',
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
    'name_original' => 'United Nations Agency',
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-7471-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 1,
    ),
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
    'name' => 'Attribution',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6fc71047-4180-4b14-8239-2c70e1ac4819',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'licences',
    'synonyms_synonyms' => array(),
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
    'name' => 'Intergovernmental or Multilateral organization',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '77c8540c-8efb-4188-957e-3b8991c6c7fd',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Intergovernmental or Multilateral organization',
          'format' => NULL,
          'safe_value' => 'Intergovernmental or Multilateral organization',
        ),
      ),
    ),
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
    'name_original' => 'Intergovernmental or Multilateral organization',
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-3384-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 0,
    ),
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
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'International professional body',
          'format' => NULL,
          'safe_value' => 'International professional body',
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
    'name_original' => 'International professional body',
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-7475-0',
    'description_original' => '',
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
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Philanthropic foundation',
          'format' => NULL,
          'safe_value' => 'Philanthropic foundation',
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
    'name_original' => 'Philanthropic foundation',
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-7474-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 1,
    ),
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
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Civil Society Organization',
          'format' => NULL,
          'safe_value' => 'Civil Society Organization',
        ),
      ),
    ),
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
    'name_original' => 'Civil Society Organization',
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-3147-0',
    'description_original' => '',
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
    'name' => 'Private sector',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a46bc627-9f5a-47d9-98c3-062fb95c1cb7',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Private sector',
          'format' => NULL,
          'safe_value' => 'Private sector',
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
    'name_original' => 'Private sector',
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-7473-0',
    'description_original' => '',
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
    'synonyms_synonyms' => array(),
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
    'name' => 'Publishing Company',
    'description' => '<p>A company that publishes materials.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b1ff087a-9e04-4748-bb65-dd40c9ac5e23',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Publishing Company',
          'format' => NULL,
          'safe_value' => 'Publishing Company',
        ),
      ),
    ),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '<p>A company that publishes materials.</p>
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>A company that publishes materials.</p>
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
          'entity_id' => 7888,
          'revision_id' => 7888,
          'language' => 'en',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1468509500,
          'changed' => 1468509500,
        ),
      ),
    ),
    'name_original' => 'Publishing Company',
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-7888-0',
    'description_original' => '<p>A company that publishes materials.</p>
',
    'path' => array(
      'pathauto' => 1,
    ),
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
    'synonyms_synonyms' => array(),
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
    'name' => 'Farmers Associations',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd1466f18-deaa-418e-aaa5-fc0b6e4eb1e7',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Farmers Associations',
          'format' => NULL,
          'safe_value' => 'Farmers Associations',
        ),
      ),
    ),
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
    'name_original' => 'Farmers Associations',
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-2830-0',
    'description_original' => '',
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
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'University or Research Institution',
          'format' => NULL,
          'safe_value' => 'University or Research Institution',
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
    'name_original' => 'University or Research Institution',
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-7278-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'All rights reserved',
    'description' => '<p>Copyright is automatically granted to you when you begin creating your work. You don\'t have to file anything anywhere, or publish anything online to own the copyright of your music. By choosing All Rights Reserved, you ask that other creators not use your material.&nbsp;</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ddd7a4db-b452-466f-b8d3-2fc5042da10d',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'licences',
    'synonyms_synonyms' => array(),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7893,
          'revision_id' => 7893,
          'language' => 'en',
          'source' => '',
          'uid' => 8157,
          'status' => 1,
          'translate' => 0,
          'created' => 1470397647,
          'changed' => 1470397647,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
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
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Network',
          'format' => NULL,
          'safe_value' => 'Network',
        ),
      ),
    ),
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
    'name_original' => 'Network',
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-3157-0',
    'description_original' => '',
    'path' => array(
      'pathauto' => 0,
    ),
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
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Data aggregator',
          'format' => NULL,
          'safe_value' => 'Data aggregator',
        ),
      ),
    ),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Data aggregators&nbsp;are websites or databases that&nbsp;compile&nbsp;information and resources&nbsp;from other&nbsp;databases and sources&nbsp;with intent to prepare combined datasets for&nbsp;data processing.</p>
',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '<p>Data aggregators are websites or databases that compile information and resources from other databases and sources with intent to prepare combined datasets for data processing.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7415,
          'revision_id' => 7415,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1460120020,
          'changed' => 1460120020,
        ),
      ),
    ),
    'name_original' => 'Data aggregator',
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-7415-0',
    'description_original' => '<p>Data aggregators&nbsp;are websites or databases that&nbsp;compile&nbsp;information and resources&nbsp;from other&nbsp;databases and sources&nbsp;with intent to prepare combined datasets for&nbsp;data processing.</p>
',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
