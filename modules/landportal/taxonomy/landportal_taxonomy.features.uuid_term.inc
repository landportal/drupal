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
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1461163450,
          'entity_uuid' => '04125a5f-4dfc-4c52-a3d4-236cf337deae',
          'user_uuid' => 'c571526a-567e-4c48-bd1c-f4cec8f6eddb',
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
        ),
      ),
    ),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1461586536,
          'entity_uuid' => '168c254f-4c88-49fb-86c8-3163e25272e6',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
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
        ),
      ),
    ),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1453893930,
          'entity_uuid' => '24f045f4-13ce-46b9-9935-bbac1a9a814c',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Creative Commons Attribution-NonCommercial-NoDerivs',
    'description' => '<p>This license only allowing others to download your works and share them with others as long as they credit you, but they can’t change them in any way or use them commercially.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2a4cb06b-c34e-46b1-89f7-34d7c9f80c8c',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'licences',
    'synonyms_synonyms' => array(),
    'field_rdflicense_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://purl.org/NET/rdflicense/cc-by-nc-nd4.0',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'CC-BY-NC-ND',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1484839186,
          'entity_uuid' => '2a4cb06b-c34e-46b1-89f7-34d7c9f80c8c',
          'user_uuid' => 'cfcfad64-b49a-4645-9ecf-3dbcb4411b56',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Journal',
    'description' => '<p>An&nbsp;academic&nbsp;or&nbsp;scholarly journal&nbsp;is a&nbsp;periodical publication&nbsp;in which scholarship relating to a particular&nbsp;academic discipline&nbsp;is published.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2aeddca5-861e-497f-a67f-defcb400c3fe',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Journal',
          'format' => NULL,
        ),
      ),
    ),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '<p>An&nbsp;academic&nbsp;or&nbsp;scholarly journal&nbsp;is a&nbsp;periodical publication&nbsp;in which scholarship relating to a particular&nbsp;academic discipline&nbsp;is published.</p>
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1474543907,
          'entity_uuid' => '2aeddca5-861e-497f-a67f-defcb400c3fe',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
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
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1467905087,
          'entity_uuid' => '36446160-b9d7-49ae-8357-03819751e8e1',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
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
        ),
      ),
    ),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1461586271,
          'entity_uuid' => '41e2cc4d-daa1-4936-880c-effba12854f6',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
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
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1461163450,
          'entity_uuid' => '4ee0ea4c-ab0f-48cf-89df-ee1100e656e3',
          'user_uuid' => 'c571526a-567e-4c48-bd1c-f4cec8f6eddb',
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
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1461163450,
          'entity_uuid' => '5e5e6046-7a3f-4916-bd6b-6b5f845687b2',
          'user_uuid' => 'c571526a-567e-4c48-bd1c-f4cec8f6eddb',
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
        ),
      ),
    ),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1461586220,
          'entity_uuid' => '6033cb9a-c3d5-4a90-95b9-bb71dfb39ce4',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Creative Commons Attribution-NonCommercial-ShareAlike',
    'description' => '<p>This license lets others remix, tweak, and build upon your work non-commercially, as long as they credit you and license their new creations under the identical terms.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '64eb8fde-3d81-4468-8e9c-d481207c3700',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'licences',
    'synonyms_synonyms' => array(),
    'field_rdflicense_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://purl.org/NET/rdflicense/cc-by-nc-sa4.0',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'CC-BY-NC-SA',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1484839221,
          'entity_uuid' => '64eb8fde-3d81-4468-8e9c-d481207c3700',
          'user_uuid' => 'cfcfad64-b49a-4645-9ecf-3dbcb4411b56',
        ),
      ),
    ),
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
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1467288331,
          'entity_uuid' => '6694feb9-cb21-4bc4-b6fe-f4b41e96728a',
          'user_uuid' => 'cfcfad64-b49a-4645-9ecf-3dbcb4411b56',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Creative Commons Attribution',
    'description' => '<p>This license lets others distribute, remix, tweak, and build upon your work, even commercially, as long as they credit you for the original creation. Recommended for maximum dissemination and use of licensed materials.<br></p>',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '6fc71047-4180-4b14-8239-2c70e1ac4819',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'licences',
    'synonyms_synonyms' => array(),
    'field_rdflicense_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://purl.org/NET/rdflicense/cc-by4.0',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'CC-BY',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1484839067,
          'entity_uuid' => '6fc71047-4180-4b14-8239-2c70e1ac4819',
          'user_uuid' => 'cfcfad64-b49a-4645-9ecf-3dbcb4411b56',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
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
        ),
      ),
    ),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1461586398,
          'entity_uuid' => '77c8540c-8efb-4188-957e-3b8991c6c7fd',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
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
        ),
      ),
    ),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1461586590,
          'entity_uuid' => '85fddaff-46fc-4216-8885-30a17334c1fe',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Creative Commons Attribution-NoDerivs',
    'description' => '<p>This license allows for redistribution, commercial and non-commercial, as long as it is passed along unchanged and in whole, with credit to you.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8be61b45-c668-43ac-ae21-113219ce189d',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'licences',
    'synonyms_synonyms' => array(),
    'field_rdflicense_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://purl.org/NET/rdflicense/cc-by-nd4.0',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'CC-BY-ND',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1484839102,
          'entity_uuid' => '8be61b45-c668-43ac-ae21-113219ce189d',
          'user_uuid' => 'cfcfad64-b49a-4645-9ecf-3dbcb4411b56',
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
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Philanthropic foundation',
          'format' => NULL,
        ),
      ),
    ),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1461586572,
          'entity_uuid' => '8c40ae60-9d3f-4bd2-b243-f166f6d1d8ab',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
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
        ),
      ),
    ),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1461586252,
          'entity_uuid' => '8f6740cc-0114-470f-a675-e3adf7b20969',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
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
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1467288128,
          'entity_uuid' => '9074d34f-b5be-41e2-bbe5-4f12fee7ff47',
          'user_uuid' => 'cfcfad64-b49a-4645-9ecf-3dbcb4411b56',
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
        ),
      ),
    ),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1461586556,
          'entity_uuid' => 'a46bc627-9f5a-47d9-98c3-062fb95c1cb7',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Creative Commons Attribution-NonCommercial',
    'description' => '<p>This license lets others remix, tweak, and build upon your work non-commercially, and although their new works must also acknowledge you and be non-commercial, they don’t have to license their derivative works on the same terms.</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a5d05b88-1783-4d86-a95f-bb203d003986',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'licences',
    'synonyms_synonyms' => array(),
    'field_rdflicense_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://purl.org/NET/rdflicense/cc-by-nc4.0',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'CC-BY-NC',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1484839135,
          'entity_uuid' => 'a5d05b88-1783-4d86-a95f-bb203d003986',
          'user_uuid' => 'cfcfad64-b49a-4645-9ecf-3dbcb4411b56',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
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
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1467288309,
          'entity_uuid' => 'b1514f0c-d758-4608-84ad-38f247d5f0cc',
          'user_uuid' => 'cfcfad64-b49a-4645-9ecf-3dbcb4411b56',
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
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1468509500,
          'entity_uuid' => 'b1ff087a-9e04-4748-bb65-dd40c9ac5e23',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Creative Commons Attribution-ShareAlike',
    'description' => '<p>This license lets others remix, tweak, and build upon your work even for commercial purposes, as long as they credit you and license their new creations under the identical terms. All new works based on yours will carry the same license, so any derivatives will also allow commercial use.</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b340e1a0-fa8d-495d-8cc7-b4370dc746eb',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'licences',
    'synonyms_synonyms' => array(),
    'field_rdflicense_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://purl.org/NET/rdflicense/cc-by-sa4.0',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'CC-BY-SA',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1484839283,
          'entity_uuid' => 'b340e1a0-fa8d-495d-8cc7-b4370dc746eb',
          'user_uuid' => 'cfcfad64-b49a-4645-9ecf-3dbcb4411b56',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
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
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1467288323,
          'entity_uuid' => 'c5cbd6e0-889f-4de1-98bc-02531293fc1c',
          'user_uuid' => 'cfcfad64-b49a-4645-9ecf-3dbcb4411b56',
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
        ),
      ),
    ),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1461586618,
          'entity_uuid' => 'd1466f18-deaa-418e-aaa5-fc0b6e4eb1e7',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
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
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'University or Research Institution',
          'format' => NULL,
        ),
      ),
    ),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1461586469,
          'entity_uuid' => 'd821699a-a2a7-443a-89d3-98b60a8dce1b',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'All rights reserved',
    'description' => '<p>Copyright is automatically granted to you when you begin creating your work. You don\'t have to file anything anywhere, or publish anything online to own the copyright of your music. By choosing All Rights Reserved, you ask that other creators not use your material.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ddd7a4db-b452-466f-b8d3-2fc5042da10d',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'licences',
    'synonyms_synonyms' => array(),
    'field_rdflicense_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://purl.org/NET/rdflicense/allrightsreserved',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'ARR',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1484838336,
          'entity_uuid' => 'ddd7a4db-b452-466f-b8d3-2fc5042da10d',
          'user_uuid' => 'cfcfad64-b49a-4645-9ecf-3dbcb4411b56',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Creative Commons Zero (Public Domain)',
    'description' => '<p>The person who associated a work with this deed has dedicated the work to the public domain by waiving all of his or her rights to the work worldwide under copyright law, including all related and neighboring rights, to the extent allowed by law.</p>

<p>You can copy, modify, distribute and perform the work, even for commercial purposes, all without asking permission.&nbsp;</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f1616492-a163-4382-b2d3-225cce468c4e',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'licences',
    'synonyms_synonyms' => array(
      'und' => array(
        0 => array(
          'value' => 'CC Zero',
          'format' => NULL,
        ),
      ),
    ),
    'field_rdflicense_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://purl.org/NET/rdflicense/cc-zero1.0',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'CC0',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1484838773,
          'entity_uuid' => 'f1616492-a163-4382-b2d3-225cce468c4e',
          'user_uuid' => 'cfcfad64-b49a-4645-9ecf-3dbcb4411b56',
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
        ),
      ),
    ),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1461586315,
          'entity_uuid' => 'f18cdf6b-0e61-4305-819d-e8556b565aa6',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
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
          'safe_summary' => '',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1460120020,
          'entity_uuid' => 'ff2269c3-0261-4280-9b46-9ec47db53801',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
