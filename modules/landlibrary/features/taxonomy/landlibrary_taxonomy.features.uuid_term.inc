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
          'entity_id' => 3678,
          'revision_id' => 3678,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1479224311,
          'changed' => 1479224311,
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
          'entity_id' => 3659,
          'revision_id' => 3659,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1479224924,
          'changed' => 1479224924,
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
    'path' => array(
      'pathauto' => 1,
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
          'entity_id' => 3673,
          'revision_id' => 3673,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1479224182,
          'changed' => 1479224182,
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
          'entity_id' => 3663,
          'revision_id' => 3663,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1479223924,
          'changed' => 1479223924,
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
          'entity_id' => 3677,
          'revision_id' => 3677,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1479225383,
          'changed' => 1479225383,
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
          'entity_id' => 3982,
          'revision_id' => 3982,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1479224648,
          'changed' => 1479224648,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
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
          'entity_id' => 3671,
          'revision_id' => 3671,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1479225743,
          'changed' => 1479225743,
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
          'entity_id' => 3668,
          'revision_id' => 3668,
          'language' => 'und',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1479225062,
          'changed' => 1479225062,
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
