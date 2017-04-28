<?php
/**
 * @file
 * landlibrary_taxonomy.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function landlibrary_taxonomy_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Conference Papers & Reports',
    'description' => '<p>As a subcategory of Reports &amp; Research, the Land Portal identifies Conference Papers &amp; Reports as a separate category. This category contains reports and papers or powerpoint presentations that have been created for or about a particular conference or event.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '06af3c34-b21a-427c-9b59-59e1eab25af8',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Conference Papers & Reports',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7984,
          'revision_id' => 7984,
          'language' => 'en',
          'source' => '',
          'uid' => 13655,
          'status' => 1,
          'translate' => 0,
          'created' => 1488471571,
          'changed' => 1488471571,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-landlibrary_resource_type-eid-7984-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '0e00119d-b478-4d58-bb38-355e5273da31',
    ),
  );
  $terms[] = array(
    'name' => 'Reports & Research',
    'description' => 'Reports & Research is a resource type for publications where research was involved in establishing the report, but not necessarily with an academic approach. The resource type aims to bring together under which all the different types of resources that have been identified as "research report", "case report", "research report", "case study", "use case report",  as well as "workshop report" or "flagship reports". Good practice reviews are also generally nested under this resource type. ',
    'format' => 'plain_text',
    'weight' => 13,
    'uuid' => '0e00119d-b478-4d58-bb38-355e5273da31',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Reports & Research',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3678,
          'revision_id' => 3678,
          'language' => 'und',
          'source' => '',
          'uid' => 13655,
          'status' => 1,
          'translate' => 0,
          'created' => 1488471506,
          'changed' => 1488471506,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-landlibrary_resource_type-eid-3678-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'National Policies',
    'description' => 'A policy is a statement of intent, and is implemented as a procedure or protocol, accepted and implemented on national level.',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '12f974ab-0144-47ab-b77a-e984eb4f000c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'National Policies',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3992,
          'revision_id' => 3992,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1479225127,
          'changed' => 1479225127,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-landlibrary_resource_type-eid-3992-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'e85fa60b-91d0-49ea-8b44-f46bcc925dcf',
    ),
  );
  $terms[] = array(
    'name' => 'International Conventions or Treaties',
    'description' => 'The Land Portal identifies International Conventions or Treaties as a subcategory of Legislation & Policies. International Conventions or Treaties are agreements between states and/or international organizations, on a land-related issue.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '14e2a781-b9d0-436b-be70-325f9aec7e53',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'International Conventions or Treaties',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3991,
          'revision_id' => 3991,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1479224734,
          'changed' => 1479224734,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-landlibrary_resource_type-eid-3991-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'e85fa60b-91d0-49ea-8b44-f46bcc925dcf',
    ),
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => '<p>While the Land Portal prefers&nbsp;to avoid using a category such as "Other" in metadata - since it does not provide a user with much information - in the case of legislations and policies it has felt that it was unavoidable. This due to the many different of legislation or regulation-formats different countries identify. Because these types of regulations can be nonetheless very important with regards to land governance, these categories are nested under the "Other"-category in the Land Library resource type taxonomy.</p>
',
    'format' => 'filtered_html',
    'weight' => 8,
    'uuid' => '5409c613-1842-4d1c-96fd-d776a3c2d072',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Other',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7890,
          'revision_id' => 7890,
          'language' => 'en',
          'source' => '',
          'uid' => 13655,
          'status' => 1,
          'translate' => 0,
          'created' => 1488471928,
          'changed' => 1488471928,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-landlibrary_resource_type-eid-7890-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'e85fa60b-91d0-49ea-8b44-f46bcc925dcf',
    ),
  );
  $terms[] = array(
    'name' => 'Constitution',
    'description' => '<p>A constitution is the highest level of national legislation. Many countries have included land-related provisions in their constitutions.</p>
',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '5be0c818-ca86-4232-89fb-9f3b0b238d4a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Constitution',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3659,
          'revision_id' => 3659,
          'language' => 'und',
          'source' => '',
          'uid' => 13655,
          'status' => 1,
          'translate' => 0,
          'created' => 1488471676,
          'changed' => 1488471676,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-landlibrary_resource_type-eid-3659-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'e85fa60b-91d0-49ea-8b44-f46bcc925dcf',
    ),
  );
  $terms[] = array(
    'name' => 'Policy Papers & Briefs',
    'description' => 'The Policy Papers & Briefs resource type is meant for publications and resources that contain policy directions and/or assessments, as well as briefs describing a land-related situation. Different terminologies are used by different organizations, such as country profiles, issue briefs, fact sheets and/or knowledge notes, as well as policy focus reports.',
    'format' => 'plain_text',
    'weight' => 14,
    'uuid' => '6ec5c0b7-e3d4-4f45-9c90-df0da61c68ec',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Policy Papers & Briefs',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3993,
          'revision_id' => 3993,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1479224528,
          'changed' => 1479224528,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-landlibrary_resource_type-eid-3993-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Journal Articles & Books',
    'description' => 'Under this resource type, typically you will find land-related information with a more scientific approach. Examples of these documents can be journal articles, academic publications, PhD dissertations and theses, as well as discussions papers, books and book chapters.',
    'format' => 'plain_text',
    'weight' => 12,
    'uuid' => '795d74c2-9665-4a96-b246-a8ae0b058811',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Journal Articles & Books',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3655,
          'revision_id' => 3655,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1479224033,
          'changed' => 1479224033,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-landlibrary_resource_type-eid-3655-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Maps',
    'description' => '<p>For a topic as land governance maps are an extremely important tool. Many organizations and information providers have visualized land-related data in the form of maps, whether they are pictures or advanced geospatial maps. The metadata about and links to these maps are included in this subcategory of the Multimedia-resource type.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '84a7e843-efa0-4939-b1eb-73986e128253',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Maps',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7990,
          'revision_id' => 7990,
          'language' => 'en',
          'source' => '',
          'uid' => 13655,
          'status' => 1,
          'translate' => 0,
          'created' => 1488471328,
          'changed' => 1488471328,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-landlibrary_resource_type-eid-7990-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'f46e9a89-3241-4898-9354-6fb1af1098ad',
    ),
  );
  $terms[] = array(
    'name' => 'Training Resources & Tools',
    'description' => 'This category includes resources on different types of tools and strategies to address land governance issues as well as training packages. Documents that support actors working on land-related organizations are also included in this category. This category is more specific and directly action-focused than the Manuals and Guidelines category.',
    'format' => 'plain_text',
    'weight' => 16,
    'uuid' => '88d423e7-9956-4822-bd52-6ed84a1664b0',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Training Resources & Tools',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3987,
          'revision_id' => 3987,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1479225662,
          'changed' => 1479225662,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-landlibrary_resource_type-eid-3987-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Peer-reviewed publication',
    'description' => '<p>A peer-reviewed publication is a subcategory under Journal Articles &amp; Books, in the sense that it is an article with a more scientific approach. In general, the following description of a peer-reviewed publication is used: "Articles are written by experts and are reviewed by several other experts in the field before the article is published in the journal in order to insure the article\'s quality" (Source: <a href="http://www.angelo.edu/services/library/handouts/peerrev.php">Angelo State University</a>).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8915ee67-2edc-4f9a-9c0e-69a13684844e',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Peer-reviewed publication',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3673,
          'revision_id' => 3673,
          'language' => 'und',
          'source' => '',
          'uid' => 8157,
          'status' => 1,
          'translate' => 0,
          'created' => 1487689226,
          'changed' => 1487689226,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-landlibrary_resource_type-eid-3673-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '795d74c2-9665-4a96-b246-a8ae0b058811',
    ),
  );
  $terms[] = array(
    'name' => 'Manuals & Guidelines',
    'description' => 'The Manuals and Guidelines-resource type on the Land Portal brings together all the types of resources that aim to provide some sort of capacity building or learning-functions. Different terminologies are used by different organizations and institutions, such as frameworks, how-to-documents, guides, manuals, guidelines and general principles.',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => 'c3a76572-fdef-47cf-913f-2216ecc10d63',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Manuals & Guidelines',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3663,
          'revision_id' => 3663,
          'language' => 'und',
          'source' => '',
          'uid' => 13655,
          'status' => 1,
          'translate' => 0,
          'created' => 1488471210,
          'changed' => 1488471210,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-landlibrary_resource_type-eid-3663-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Jurisprudence',
    'description' => '<p>With jurisprudence, the Land Portal identifies case law, or law that has been established by the outcome of former cases in a court of law.</p>
',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'c87b4b7c-d147-4897-9002-40a25443957d',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Jurisprudence',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7889,
          'revision_id' => 7889,
          'language' => 'en',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1479224804,
          'changed' => 1479224804,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-landlibrary_resource_type-eid-7889-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'e85fa60b-91d0-49ea-8b44-f46bcc925dcf',
    ),
  );
  $terms[] = array(
    'name' => 'Institutional & promotional materials',
    'description' => '<p>Institutional and promotional materials for an organization, such as annual reports and brochures.</p>
',
    'format' => 'filtered_html',
    'weight' => 18,
    'uuid' => 'd3f3425c-769d-4c92-b302-2f9019b32cda',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Institutional & promotional materials',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7884,
          'revision_id' => 7884,
          'language' => 'en',
          'source' => '',
          'uid' => 8157,
          'status' => 1,
          'translate' => 0,
          'created' => 1474370631,
          'changed' => 1474370631,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-landlibrary_resource_type-eid-7884-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'UN Resolutions',
    'description' => 'A United Nations resolution (UN resolution) is a formal text adopted by a United Nations (UN) body. Although any UN body can issue resolutions, in practice most resolutions are issued by the Security Council or the General Assembly.',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => 'e00ce92f-dadc-4d8a-8a92-b8ba2ca92244',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'UN Resolutions',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3994,
          'revision_id' => 3994,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1479225410,
          'changed' => 1479225410,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-landlibrary_resource_type-eid-3994-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'e85fa60b-91d0-49ea-8b44-f46bcc925dcf',
    ),
  );
  $terms[] = array(
    'name' => 'Regulations',
    'description' => 'Regulations is used as the general term for lower-level law (below a constitution or statutory law). The category is meant as a broad category for the different terminologies used by various countries to describe lower-level rules and regulations on a national (or regional) level that have not been established through the formal process that the establishment of a formal law or legislations require.',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => 'e14b20cf-5cba-4381-8cc4-abc5355582e8',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Regulations',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3677,
          'revision_id' => 3677,
          'language' => 'und',
          'source' => '',
          'uid' => 13655,
          'status' => 1,
          'translate' => 0,
          'created' => 1488471809,
          'changed' => 1488471809,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-landlibrary_resource_type-eid-3677-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'e85fa60b-91d0-49ea-8b44-f46bcc925dcf',
    ),
  );
  $terms[] = array(
    'name' => 'Agreements & Contracts',
    'description' => '<p>The final Legislation &amp; Policies subcategory is Agreements &amp; Contracts. This subcategory includes metadata from agreements or contracts related to land and land deals. The government is usually a part in one of these contracts, but can also involve solely private sector actors.</p>
',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => 'e84c6fd3-65dc-4557-af3b-5c399fb1b7e8',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Agreements & Contracts',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7891,
          'revision_id' => 7891,
          'language' => 'en',
          'source' => '',
          'uid' => 13655,
          'status' => 1,
          'translate' => 0,
          'created' => 1488471953,
          'changed' => 1488471953,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-landlibrary_resource_type-eid-7891-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'e85fa60b-91d0-49ea-8b44-f46bcc925dcf',
    ),
  );
  $terms[] = array(
    'name' => 'Legislation & Policies',
    'description' => 'Besides publications and articles about land governance, the Land Library also hosts country-level laws and policies that focus on land governance. The classification of different types of laws and policies can differ from country to country, so the classification used on the Land Portal is done through a general classification of elements.',
    'format' => 'plain_text',
    'weight' => 15,
    'uuid' => 'e85fa60b-91d0-49ea-8b44-f46bcc925dcf',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Legislation & Policies',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3982,
          'revision_id' => 3982,
          'language' => 'und',
          'source' => '',
          'uid' => 13655,
          'status' => 1,
          'translate' => 0,
          'created' => 1488471630,
          'changed' => 1488471630,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-landlibrary_resource_type-eid-3982-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Videos',
    'description' => '<p>The Land Portal hosts many interesting videos related to land governance. These can be embedded in the pages or linked through via the metadata.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f18452a0-990f-4c66-8381-d8700a4f2e39',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Videos',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7991,
          'revision_id' => 7991,
          'language' => 'en',
          'source' => '',
          'uid' => 13655,
          'status' => 1,
          'translate' => 0,
          'created' => 1488471354,
          'changed' => 1488471354,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-landlibrary_resource_type-eid-7991-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'f46e9a89-3241-4898-9354-6fb1af1098ad',
    ),
  );
  $terms[] = array(
    'name' => 'Multimedia',
    'description' => 'The multimedia category is fairly self-explanatory in the sense that it contains all non-bibliographic resources that exist in the Land Library. This can vary from videos, maps, audio files, infographics and even website descriptions.',
    'format' => 'plain_text',
    'weight' => 17,
    'uuid' => 'f46e9a89-3241-4898-9354-6fb1af1098ad',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Multimedia',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3671,
          'revision_id' => 3671,
          'language' => 'und',
          'source' => '',
          'uid' => 13655,
          'status' => 1,
          'translate' => 0,
          'created' => 1488471300,
          'changed' => 1488471300,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-landlibrary_resource_type-eid-3671-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Legislation',
    'description' => '<p>With the legislation subcategory, the Land Portal identifies any formal laws on a national level. A formal law is enacted by an official legislator and/or through an official procedure.</p>
',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => 'f49e4f01-aaa0-4af0-ac92-2afe31de85f7',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Legislation',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3668,
          'revision_id' => 3668,
          'language' => 'und',
          'source' => '',
          'uid' => 13655,
          'status' => 1,
          'translate' => 0,
          'created' => 1488471744,
          'changed' => 1488471744,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-landlibrary_resource_type-eid-3668-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'e85fa60b-91d0-49ea-8b44-f46bcc925dcf',
    ),
  );
  return $terms;
}
