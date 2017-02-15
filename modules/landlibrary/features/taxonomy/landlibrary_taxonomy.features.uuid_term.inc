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
    'description' => '<p>As a subcategory of Reports &amp; Research, the Land Portal identifies Conference Papers &amp; Reports as a separate category. This category contains reports and papers that have been written for or about a particular conference or event.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '06af3c34-b21a-427c-9b59-59e1eab25af8',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1479224368,
          'entity_uuid' => '06af3c34-b21a-427c-9b59-59e1eab25af8',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '0e00119d-b478-4d58-bb38-355e5273da31',
    ),
  );
  $terms[] = array(
    'name' => 'Reports & Research',
    'description' => 'Reports & Research is a resource type under which case, project and status reports are generally nested, as well as workshop and flagship reports. Good practice reviews are also generally nested under this resource type. There is research involved in establishing the reports, but not necessarily with an academic approach.',
    'format' => 'plain_text',
    'weight' => 13,
    'uuid' => '0e00119d-b478-4d58-bb38-355e5273da31',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1479224311,
          'entity_uuid' => '0e00119d-b478-4d58-bb38-355e5273da31',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
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
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1479225127,
          'entity_uuid' => '12f974ab-0144-47ab-b77a-e984eb4f000c',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
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
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1479224734,
          'entity_uuid' => '14e2a781-b9d0-436b-be70-325f9aec7e53',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'e85fa60b-91d0-49ea-8b44-f46bcc925dcf',
    ),
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => '<p>The "Other" subcategory for Legislation &amp; Policies is meant for types of law that do not fit under any of the other categories, that are unique for a country.</p>
',
    'format' => 'filtered_html',
    'weight' => 8,
    'uuid' => '5409c613-1842-4d1c-96fd-d776a3c2d072',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1479225504,
          'entity_uuid' => '5409c613-1842-4d1c-96fd-d776a3c2d072',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'e85fa60b-91d0-49ea-8b44-f46bcc925dcf',
    ),
  );
  $terms[] = array(
    'name' => 'Constitution',
    'description' => '<p>A constitution is a set of fundamental principles or established precedents according to which a state or other organization is governed. These rules together make up, i.e. constitute, what the entity is. (Source: <a href="https://www.google.nl/url?sa=t&amp;rct=j&amp;q=&amp;esrc=s&amp;source=web&amp;cd=3&amp;cad=rja&amp;uact=8&amp;ved=0ahUKEwih6q-LjqvQAhWIIMAKHeHtCjcQFggjMAI&amp;url=https%3A%2F%2Fen.wikipedia.org%2Fwiki%2FConstitution&amp;usg=AFQjCNG9TJP-5obtAsW9m8VnOLoSzJ4Q9g&amp;bvm=bv.138493631,d.d24">Wikipedia</a>)</p>
',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '5be0c818-ca86-4232-89fb-9f3b0b238d4a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1479224924,
          'entity_uuid' => '5be0c818-ca86-4232-89fb-9f3b0b238d4a',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
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
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1479224528,
          'entity_uuid' => '6ec5c0b7-e3d4-4f45-9c90-df0da61c68ec',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
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
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1479224033,
          'entity_uuid' => '795d74c2-9665-4a96-b246-a8ae0b058811',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Maps',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '84a7e843-efa0-4939-b1eb-73986e128253',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1479298455,
          'entity_uuid' => '84a7e843-efa0-4939-b1eb-73986e128253',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
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
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1479225662,
          'entity_uuid' => '88d423e7-9956-4822-bd52-6ed84a1664b0',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Peer-reviewed publication',
    'description' => '<p>A peer-reviewed publication is a subcategory under Journal Articles &amp; Books, in the sense that it is an article with a more scientific approach. In general, the following description of a peer-reviewed publication is used: "Articles are written by experts and are reviewed by several other experts in the field before the article is published in the journal in order to insure the article\'s quality" (Source: <a href="https://www.google.nl/url?sa=t&amp;rct=j&amp;q=&amp;esrc=s&amp;source=web&amp;cd=2&amp;cad=rja&amp;uact=8&amp;ved=0ahUKEwiIkuOci6vQAhUGCcAKHTl5CgMQFgghMAE&amp;url=http%3A%2F%2Fwww.angelo.edu%2Fservices%2Flibrary%2Fhandouts%2Fpeerrev.php&amp;usg=AFQjCNF3r7LqswUItVrQOR-HdumH617xNQ&amp;bvm=bv.138493631,d.d24">Angelo State University</a>).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8915ee67-2edc-4f9a-9c0e-69a13684844e',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1479224182,
          'entity_uuid' => '8915ee67-2edc-4f9a-9c0e-69a13684844e',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '795d74c2-9665-4a96-b246-a8ae0b058811',
    ),
  );
  $terms[] = array(
    'name' => 'Manuals & Guidelines',
    'description' => 'Manuals & Guidelines are that are intended to provide guidance or principles on how to approach issues related to land governance. Different terminologies are used by different organizations and institutions, such as frameworks, how-to-documents, guides, manuals, guidelines and general principles. ',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => 'c3a76572-fdef-47cf-913f-2216ecc10d63',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1479223924,
          'entity_uuid' => 'c3a76572-fdef-47cf-913f-2216ecc10d63',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
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
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1479224804,
          'entity_uuid' => 'c87b4b7c-d147-4897-9002-40a25443957d',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
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
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1474370631,
          'entity_uuid' => 'd3f3425c-769d-4c92-b302-2f9019b32cda',
          'user_uuid' => 'cfcfad64-b49a-4645-9ecf-3dbcb4411b56',
        ),
      ),
    ),
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
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1479225410,
          'entity_uuid' => 'e00ce92f-dadc-4d8a-8a92-b8ba2ca92244',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'e85fa60b-91d0-49ea-8b44-f46bcc925dcf',
    ),
  );
  $terms[] = array(
    'name' => 'Regulations',
    'description' => 'Regulations is used as the general term for lower-level law (below a constitution or statutory law). The category is meant as a broad category for the different terminologies used by various countries to describe lower-level rules and regulations on a national (or regional) level.',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => 'e14b20cf-5cba-4381-8cc4-abc5355582e8',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1479225383,
          'entity_uuid' => 'e14b20cf-5cba-4381-8cc4-abc5355582e8',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'e85fa60b-91d0-49ea-8b44-f46bcc925dcf',
    ),
  );
  $terms[] = array(
    'name' => 'Agreements & Contracts',
    'description' => '<p>Agreements and Contracts on a national or regional level.</p>
',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => 'e84c6fd3-65dc-4557-af3b-5c399fb1b7e8',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1468595614,
          'entity_uuid' => 'e84c6fd3-65dc-4557-af3b-5c399fb1b7e8',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'e85fa60b-91d0-49ea-8b44-f46bcc925dcf',
    ),
  );
  $terms[] = array(
    'name' => 'Legislation & Policies',
    'description' => 'Under the broad category of \'Legislation & Policies\', the Land Portal classifies all types of law (international and national) related to land.',
    'format' => 'plain_text',
    'weight' => 15,
    'uuid' => 'e85fa60b-91d0-49ea-8b44-f46bcc925dcf',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1479224648,
          'entity_uuid' => 'e85fa60b-91d0-49ea-8b44-f46bcc925dcf',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Videos',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f18452a0-990f-4c66-8381-d8700a4f2e39',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1479298483,
          'entity_uuid' => 'f18452a0-990f-4c66-8381-d8700a4f2e39',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'f46e9a89-3241-4898-9354-6fb1af1098ad',
    ),
  );
  $terms[] = array(
    'name' => 'Multimedia',
    'description' => 'The multimedia section contains everything ranging from videos, audio files and podcasts, to infographics and maps.',
    'format' => 'plain_text',
    'weight' => 17,
    'uuid' => 'f46e9a89-3241-4898-9354-6fb1af1098ad',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1479225743,
          'entity_uuid' => 'f46e9a89-3241-4898-9354-6fb1af1098ad',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Legislation',
    'description' => '<p>Legislation (or "statutory law") is law which has been promulgated (or "enacted") by a legislature or other governing body or the process of making it. (Source: Article 289(3) of the <a href="http://eur-lex.europa.eu/legal-content/EN/TXT/?uri=celex%3A12012E%2FTXT">Treaty on the Functioning of the European Union</a>).</p>
',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => 'f49e4f01-aaa0-4af0-ac92-2afe31de85f7',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'landlibrary_resource_type',
    'synonyms_synonyms' => array(),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'und',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1479225062,
          'entity_uuid' => 'f49e4f01-aaa0-4af0-ac92-2afe31de85f7',
          'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'e85fa60b-91d0-49ea-8b44-f46bcc925dcf',
    ),
  );
  return $terms;
}
