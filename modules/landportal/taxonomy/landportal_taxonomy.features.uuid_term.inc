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
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '04125a5f-4dfc-4c52-a3d4-236cf337deae',
    'hweight' => 2,
    'hdepth' => 0,
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'debate_status',
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Closed',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Cerrado',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Clos',
          'format' => NULL,
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Clos',
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
          'created' => 1487249436,
          'entity_uuid' => '04125a5f-4dfc-4c52-a3d4-236cf337deae',
          'user_uuid' => 'c571526a-567e-4c48-bd1c-f4cec8f6eddb',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1487249511,
          'entity_uuid' => '04125a5f-4dfc-4c52-a3d4-236cf337deae',
          'user_uuid' => 'cfcfad64-b49a-4645-9ecf-3dbcb4411b56',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1487251164,
          'entity_uuid' => '04125a5f-4dfc-4c52-a3d4-236cf337deae',
          'user_uuid' => 'c571526a-567e-4c48-bd1c-f4cec8f6eddb',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'International or regional financial institution',
    'description' => '<p>An&nbsp;international financial institution&nbsp;(IFI) is a&nbsp;financial institution&nbsp;that has been established (or chartered) by more than one country, and hence are subjects of&nbsp;international law. Its owners or shareholders are generally national governments, although other&nbsp;international institutions&nbsp;and other organizations occasionally figure as shareholders.</p>

<p>&nbsp;</p>

<p>Source: <a href="https://en.wikipedia.org/wiki/International_financial_institutions">Wikipedia</a></p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '168c254f-4c88-49fb-86c8-3163e25272e6',
    'hweight' => 5,
    'hdepth' => 0,
    'language' => 'und',
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
          'value' => '<p>An&nbsp;international financial institution&nbsp;(IFI) is a&nbsp;financial institution&nbsp;that has been established (or chartered) by more than one country, and hence are subjects of&nbsp;international law. Its owners or shareholders are generally national governments, although other&nbsp;international institutions&nbsp;and other organizations occasionally figure as shareholders.</p>

<p>&nbsp;</p>

<p>Source: <a href="https://en.wikipedia.org/wiki/International_financial_institutions">Wikipedia</a></p>
',
          'summary' => '',
          'format' => 'full_html',
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
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-7472-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Non-profit organization',
    'description' => '<p>A&nbsp;nonprofit organization&nbsp;(also known as a&nbsp;non-business entity) is an&nbsp;organization&nbsp;whose purpose is something other than making a profit.&nbsp;A nonprofit organization is often dedicated to furthering a particular&nbsp;social cause&nbsp;or advocating for a particular point of view.</p>

<p>&nbsp;</p>

<p>Source: <a href="https://en.wikipedia.org/wiki/Nonprofit_organization">Wikipedia</a></p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '24f045f4-13ce-46b9-9935-bbac1a9a814c',
    'hweight' => 10,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'synonyms_synonyms' => array(
      'und' => array(
        0 => array(
          'value' => 'Not-for-profit organization',
          'format' => NULL,
        ),
        1 => array(
          'value' => 'Nonprofit organization',
          'format' => NULL,
        ),
        2 => array(
          'value' => 'Non-profit organisation',
          'format' => NULL,
        ),
        3 => array(
          'value' => 'Not-for-profit organisation',
          'format' => NULL,
        ),
        4 => array(
          'value' => 'Nonprofit organisation',
          'format' => NULL,
        ),
      ),
    ),
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
          'value' => '<p>A&nbsp;nonprofit organization&nbsp;(also known as a&nbsp;non-business entity) is an&nbsp;organization&nbsp;whose purpose is something other than making a profit.&nbsp;A nonprofit organization is often dedicated to furthering a particular&nbsp;social cause&nbsp;or advocating for a particular point of view.</p>

<p>&nbsp;</p>

<p>Source: <a href="https://en.wikipedia.org/wiki/Nonprofit_organization">Wikipedia</a></p>
',
          'summary' => '',
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
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-7273-0',
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
    'hweight' => 4,
    'hdepth' => 0,
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
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Creative Commons Attribution-NonCommercial-NoDerivs',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7988,
          'revision_id' => 7988,
          'language' => 'en',
          'source' => '',
          'uid' => 8157,
          'status' => 1,
          'translate' => 0,
          'created' => 1484839186,
          'changed' => 1484839186,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-licences-eid-7988-0',
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
    'hweight' => 7,
    'hdepth' => 0,
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
          'entity_id' => 7957,
          'revision_id' => 7957,
          'language' => 'en',
          'source' => '',
          'uid' => 7082,
          'status' => 1,
          'translate' => 0,
          'created' => 1474543907,
          'changed' => 1474543907,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-7957-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Governmental institution',
    'description' => '<p>Local, provincial or national&nbsp;governmental institutions.</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '36446160-b9d7-49ae-8357-03819751e8e1',
    'hweight' => 3,
    'hdepth' => 0,
    'language' => 'und',
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
      'und' => array(
        0 => array(
          'value' => 'Governmental institution',
          'format' => NULL,
        ),
      ),
    ),
    'description_field' => array(
      'en' => array(
        0 => array(
          'value' => '<p>Local, provincial or national&nbsp;governmental institutions.</p>
',
          'summary' => NULL,
          'format' => 'full_html',
          'safe_summary' => '',
        ),
      ),
      'und' => array(
        0 => array(
          'value' => '<p>Local, provincial or national&nbsp;governmental institutions.</p>
',
          'summary' => '',
          'format' => 'full_html',
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
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-7883-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Non Governmental organization',
    'description' => '<p>A non-governmental organization (NGO) is a not-for-profit organization that is independent from states and international governmental organizations.</p>

<p>&nbsp;</p>

<p>Source: <a href="https://en.wikipedia.org/wiki/Non-governmental_organization">Wikipedia</a></p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '41e2cc4d-daa1-4936-880c-effba12854f6',
    'hweight' => 9,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'synonyms_synonyms' => array(
      'und' => array(
        0 => array(
          'value' => 'NGO',
          'format' => NULL,
        ),
        1 => array(
          'value' => 'Non-Governmental organization',
          'format' => NULL,
        ),
        2 => array(
          'value' => 'Non Governmental organisation',
          'format' => NULL,
        ),
        3 => array(
          'value' => 'Non-Governmental organisation',
          'format' => NULL,
        ),
      ),
    ),
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
          'value' => '<p>A non-governmental organization (NGO) is a not-for-profit organization that is independent from states and international governmental organizations.</p>

<p>&nbsp;</p>

<p>Source: <a href="https://en.wikipedia.org/wiki/Non-governmental_organization">Wikipedia</a></p>
',
          'summary' => '',
          'format' => 'full_html',
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
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-3379-0',
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'Coming soon',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4ee0ea4c-ab0f-48cf-89df-ee1100e656e3',
    'hweight' => 0,
    'hdepth' => 0,
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'debate_status',
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Coming soon',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'Próximamente',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Prochainement',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Brevemente',
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
          'created' => 1461163450,
          'entity_uuid' => '4ee0ea4c-ab0f-48cf-89df-ee1100e656e3',
          'user_uuid' => 'c571526a-567e-4c48-bd1c-f4cec8f6eddb',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1487249470,
          'entity_uuid' => '4ee0ea4c-ab0f-48cf-89df-ee1100e656e3',
          'user_uuid' => 'cfcfad64-b49a-4645-9ecf-3dbcb4411b56',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1487249401,
          'entity_uuid' => '4ee0ea4c-ab0f-48cf-89df-ee1100e656e3',
          'user_uuid' => 'c571526a-567e-4c48-bd1c-f4cec8f6eddb',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1487251582,
          'entity_uuid' => '4ee0ea4c-ab0f-48cf-89df-ee1100e656e3',
          'user_uuid' => 'c571526a-567e-4c48-bd1c-f4cec8f6eddb',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Open',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '5e5e6046-7a3f-4916-bd6b-6b5f845687b2',
    'hweight' => 1,
    'hdepth' => 0,
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'debate_status',
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Open',
          'format' => NULL,
        ),
      ),
      'es' => array(
        0 => array(
          'value' => 'En curso',
          'format' => NULL,
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'En cours',
          'format' => NULL,
        ),
      ),
      'pt' => array(
        0 => array(
          'value' => 'Aberto',
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
          'created' => 1461163450,
          'entity_uuid' => '5e5e6046-7a3f-4916-bd6b-6b5f845687b2',
          'user_uuid' => 'c571526a-567e-4c48-bd1c-f4cec8f6eddb',
        ),
        'es' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'es',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1487249495,
          'entity_uuid' => '5e5e6046-7a3f-4916-bd6b-6b5f845687b2',
          'user_uuid' => 'cfcfad64-b49a-4645-9ecf-3dbcb4411b56',
        ),
        'fr' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'fr',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1487249416,
          'entity_uuid' => '5e5e6046-7a3f-4916-bd6b-6b5f845687b2',
          'user_uuid' => 'c571526a-567e-4c48-bd1c-f4cec8f6eddb',
        ),
        'pt' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'pt',
          'source' => 'en',
          'status' => 1,
          'translate' => 0,
          'created' => 1487251534,
          'entity_uuid' => '5e5e6046-7a3f-4916-bd6b-6b5f845687b2',
          'user_uuid' => 'c571526a-567e-4c48-bd1c-f4cec8f6eddb',
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'United Nations Agency',
    'description' => '<p>United Nations institutions and the&nbsp;agencies that are linked to the United Nations through special agreements, the separate, autonomous specialized agencies of the UN family set standards and guidelines, help formulate policies, provide technical assistance, and other forms of practical help in virtually all areas of economic and social endeavor.</p>

<p>&nbsp;</p>

<p>Source: <a href="http://www.infoplease.com/ipa/A0001308.html">Infoplease.com</a></p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6033cb9a-c3d5-4a90-95b9-bb71dfb39ce4',
    'hweight' => 14,
    'hdepth' => 0,
    'language' => 'und',
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
          'value' => '<p>United Nations institutions and the&nbsp;agencies that are linked to the United Nations through special agreements, the separate, autonomous specialized agencies of the UN family set standards and guidelines, help formulate policies, provide technical assistance, and other forms of practical help in virtually all areas of economic and social endeavor.</p>

<p>&nbsp;</p>

<p>Source: <a href="http://www.infoplease.com/ipa/A0001308.html">Infoplease.com</a></p>
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
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-7471-0',
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
    'hweight' => 5,
    'hdepth' => 0,
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
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Creative Commons Attribution-NonCommercial-ShareAlike',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7987,
          'revision_id' => 7987,
          'language' => 'en',
          'source' => '',
          'uid' => 8157,
          'status' => 1,
          'translate' => 0,
          'created' => 1484839221,
          'changed' => 1484839221,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-licences-eid-7987-0',
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
    'hweight' => 24,
    'hdepth' => 0,
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
    'name' => 'Creative Commons Attribution',
    'description' => '<p>This license lets others distribute, remix, tweak, and build upon your work, even commercially, as long as they credit you for the original creation. Recommended for maximum dissemination and use of licensed materials.<br></p>',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '6fc71047-4180-4b14-8239-2c70e1ac4819',
    'hweight' => 1,
    'hdepth' => 0,
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
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Creative Commons Attribution',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3651,
          'revision_id' => 3651,
          'language' => 'und',
          'source' => '',
          'uid' => 8157,
          'status' => 1,
          'translate' => 0,
          'created' => 1484839067,
          'changed' => 1484839067,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-licences-eid-3651-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Intergovernmental or Multilateral organization',
    'description' => '<p>An intergovernmental organization or international governmental organization (IGO) is an organization composed primarily of sovereign states (referred to as member states), or of other intergovernmental organizations. Multilateral organizations obtain their funding from multiple governments and spend it on projects in various countries.</p>

<p>&nbsp;</p>

<p>Sources: <a href="https://en.wikipedia.org/wiki/Intergovernmental_organization">Wikipedia</a> &amp; <a href="http://www.uniteforsight.org/global-health-careers/module5">Unite for Sight</a></p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '77c8540c-8efb-4188-957e-3b8991c6c7fd',
    'hweight' => 4,
    'hdepth' => 0,
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
          'value' => '<p>An intergovernmental organization or international governmental organization (IGO) is an organization composed primarily of sovereign states (referred to as member states), or of other intergovernmental organizations. Multilateral organizations obtain their funding from multiple governments and spend it on projects in various countries.</p>

<p>&nbsp;</p>

<p>Sources: <a href="https://en.wikipedia.org/wiki/Intergovernmental_organization">Wikipedia</a> &amp; <a href="http://www.uniteforsight.org/global-health-careers/module5">Unite for Sight</a></p>
',
          'summary' => '',
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
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-3384-0',
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'International professional body',
    'description' => '<p>A&nbsp;professional association&nbsp;(also called a&nbsp;professional body,&nbsp;professional organization, or&nbsp;professional society) is usually a&nbsp;nonprofit organization&nbsp;seeking to&nbsp;further&nbsp;a particular&nbsp;profession, the interests of individuals engaged in that profession and the&nbsp;public interest.</p>

<p>&nbsp;</p>

<p>Source: <a href="https://en.wikipedia.org/wiki/Professional_association">Wikipedia</a></p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '85fddaff-46fc-4216-8885-30a17334c1fe',
    'hweight' => 6,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'synonyms_synonyms' => array(
      'und' => array(
        0 => array(
          'value' => 'International professional association',
          'format' => NULL,
        ),
        1 => array(
          'value' => 'International professional organization',
          'format' => NULL,
        ),
        2 => array(
          'value' => 'International professional society',
          'format' => NULL,
        ),
      ),
    ),
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
          'value' => '<p>A&nbsp;professional association&nbsp;(also called a&nbsp;professional body,&nbsp;professional organization, or&nbsp;professional society) is usually a&nbsp;nonprofit organization&nbsp;seeking to&nbsp;further&nbsp;a particular&nbsp;profession, the interests of individuals engaged in that profession and the&nbsp;public interest.</p>

<p>&nbsp;</p>

<p>Source: <a href="https://en.wikipedia.org/wiki/Professional_association">Wikipedia</a></p>
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
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-7475-0',
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
    'hweight' => 2,
    'hdepth' => 0,
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
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Creative Commons Attribution-NoDerivs',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7986,
          'revision_id' => 7986,
          'language' => 'en',
          'source' => '',
          'uid' => 8157,
          'status' => 1,
          'translate' => 0,
          'created' => 1484839102,
          'changed' => 1484839102,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-licences-eid-7986-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Philanthropic foundation',
    'description' => '<p>Philanthropic&nbsp;foundation, a nongovernmental, nonprofit&nbsp;organization, with assets provided by donors and managed by its own officials and with income expended for socially useful purposes.</p>

<p>Source: <a href="https://www.britannica.com/topic/philanthropic-foundation">Encyclopedia Britannica</a></p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8c40ae60-9d3f-4bd2-b243-f166f6d1d8ab',
    'hweight' => 11,
    'hdepth' => 0,
    'language' => 'und',
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
          'value' => '<p>Philanthropic&nbsp;foundation, a nongovernmental, nonprofit&nbsp;organization, with assets provided by donors and managed by its own officials and with income expended for socially useful purposes.</p>

<p>Source: <a href="https://www.britannica.com/topic/philanthropic-foundation">Encyclopedia Britannica</a></p>
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
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-7474-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Civil Society Organization',
    'description' => '<p>Civil society is the "aggregate of non-governmental organizations and institutions that manifest interests and will of citizens."</p>

<p>&nbsp;</p>

<p>Source:&nbsp;&nbsp;<cite><a href="http://dictionary.reference.com/browse/civil+society?r=66" rel="nofollow">"Civil society – Define Civil society at Dictionary.com"</a></cite></p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '8f6740cc-0114-470f-a675-e3adf7b20969',
    'hweight' => 0,
    'hdepth' => 0,
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
          'value' => '<p>Civil society is the "aggregate of non-governmental organizations and institutions that manifest interests and will of citizens."</p>

<p>&nbsp;</p>

<p>Source:&nbsp;&nbsp;<cite><a href="http://dictionary.reference.com/browse/civil+society?r=66" rel="nofollow">"Civil society – Define Civil society at Dictionary.com"</a></cite></p>
',
          'summary' => '',
          'format' => 'full_html',
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
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-3147-0',
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'Land Library content provider',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9074d34f-b5be-41e2-bbe5-4f12fee7ff47',
    'hweight' => 23,
    'hdepth' => 0,
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
          'created' => 1487924754,
          'changed' => 1487924754,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Private sector',
    'description' => '<p>The&nbsp;private sector&nbsp;is the part of the economy, sometimes referred to as the&nbsp;citizen sector, which is run by private individuals or groups, usually as a means of enterprise for&nbsp;profit, and is not controlled by the&nbsp;State.</p>

<p>&nbsp;</p>

<p>Source: <a href="https://en.wikipedia.org/wiki/Private_sector">Wikipedia</a></p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a46bc627-9f5a-47d9-98c3-062fb95c1cb7',
    'hweight' => 12,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'synonyms_synonyms' => array(
      'und' => array(
        0 => array(
          'value' => 'Private companies',
          'format' => NULL,
        ),
      ),
    ),
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
          'value' => '<p>The&nbsp;private sector&nbsp;is the part of the economy, sometimes referred to as the&nbsp;citizen sector, which is run by private individuals or groups, usually as a means of enterprise for&nbsp;profit, and is not controlled by the&nbsp;State.</p>

<p>&nbsp;</p>

<p>Source: <a href="https://en.wikipedia.org/wiki/Private_sector">Wikipedia</a></p>
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
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-7473-0',
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
    'hweight' => 3,
    'hdepth' => 0,
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
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Creative Commons Attribution-NonCommercial',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3652,
          'revision_id' => 3652,
          'language' => 'und',
          'source' => '',
          'uid' => 8157,
          'status' => 1,
          'translate' => 0,
          'created' => 1484839135,
          'changed' => 1484839135,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-licences-eid-3652-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Land Book data provider',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b1514f0c-d758-4608-84ad-38f247d5f0cc',
    'hweight' => 22,
    'hdepth' => 0,
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
          'created' => 1487924736,
          'changed' => 1487924736,
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
    'hweight' => 13,
    'hdepth' => 0,
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
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-7888-0',
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
    'hweight' => 6,
    'hdepth' => 0,
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
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Creative Commons Attribution-ShareAlike',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 3653,
          'revision_id' => 3653,
          'language' => 'und',
          'source' => '',
          'uid' => 8157,
          'status' => 1,
          'translate' => 0,
          'created' => 1484839283,
          'changed' => 1484839283,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-licences-eid-3653-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Farmers Association',
    'description' => 'Farmers associations or organizations work to the benefit of farmers and are often composed of farmers.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd1466f18-deaa-418e-aaa5-fc0b6e4eb1e7',
    'hweight' => 2,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'synonyms_synonyms' => array(
      'und' => array(
        0 => array(
          'value' => 'Farmers Organization',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Farmers Association',
          'format' => NULL,
        ),
      ),
    ),
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Farmers associations or organizations work to the benefit of farmers and are often composed of farmers.',
          'summary' => '',
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
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-2830-0',
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'University or Research Institution',
    'description' => '<p>A&nbsp;research institute or universities are&nbsp;establishments endowed for doing&nbsp;research and/or education.&nbsp;Research institutes may specialize in basic research or may be oriented to applied research.</p>

<p>&nbsp;</p>

<p>Source: <a href="https://en.wikipedia.org/wiki/Research_institute">Wikipedia</a></p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd821699a-a2a7-443a-89d3-98b60a8dce1b',
    'hweight' => 15,
    'hdepth' => 0,
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
          'value' => '<p>A&nbsp;research institute or universities are&nbsp;establishments endowed for doing&nbsp;research and/or education.&nbsp;Research institutes may specialize in basic research or may be oriented to applied research.</p>

<p>&nbsp;</p>

<p>Source: <a href="https://en.wikipedia.org/wiki/Research_institute">Wikipedia</a></p>
',
          'summary' => '',
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
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-7278-0',
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
    'hweight' => 0,
    'hdepth' => 0,
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
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'All rights reserved',
          'format' => NULL,
        ),
      ),
    ),
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
          'created' => 1484838336,
          'changed' => 1484838336,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-licences-eid-7893-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Open Data Commons Public Domain Dedication and License',
    'description' => '<p><strong>You are free:</strong></p>

<ul>
	<li><em>To Share:</em>&nbsp;To copy, distribute and use the database.</li>
	<li><em>To Create:</em>&nbsp;To produce works from the database.</li>
	<li><em>To Adapt:</em>&nbsp;To modify, transform and build upon the database.</li>
</ul>

<p><strong>As long as you:</strong></p>

<ul>
	<li><em>Blank:</em>&nbsp;This section is intentionally left blank. The PDDL imposes no restrictions on your use of the PDDL licensed database.</li>
</ul>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e892afd3-889d-4cda-bbe1-a1bd4789727f',
    'hweight' => 8,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'licences',
    'synonyms_synonyms' => array(),
    'field_rdflicense_uri' => array(
      'und' => array(
        0 => array(
          'url' => 'http://purl.org/NET/rdflicense/odbc-pddl1.0',
          'title' => NULL,
          'attributes' => array(),
        ),
      ),
    ),
    'field_acronym' => array(
      'und' => array(
        0 => array(
          'value' => 'PDDL',
          'format' => NULL,
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Open Data Commons Public Domain Dedication and License',
          'format' => NULL,
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Open Data Commons Public Domain Dedication and License',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-licences-eid-8432-0',
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
    'hweight' => 7,
    'hdepth' => 0,
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
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Creative Commons Zero (Public Domain)',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7989,
          'revision_id' => 7989,
          'language' => 'en',
          'source' => '',
          'uid' => 8157,
          'status' => 1,
          'translate' => 0,
          'created' => 1484838773,
          'changed' => 1484838773,
        ),
      ),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-licences-eid-7989-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Network',
    'description' => 'A network is a group or association of several organizations working together to achieve a mutual goal, usually facilitated by a dedicated secretariat.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f18cdf6b-0e61-4305-819d-e8556b565aa6',
    'hweight' => 8,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'organization_types',
    'synonyms_synonyms' => array(
      'und' => array(
        0 => array(
          'value' => 'Coalition',
          'format' => NULL,
        ),
      ),
    ),
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
          'value' => 'A network is a group or association of several organizations working together to achieve a mutual goal, usually facilitated by a dedicated secretariat.',
          'summary' => '',
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
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-3157-0',
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
    'hweight' => 1,
    'hdepth' => 0,
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
    'entity_translation_handler_id' => 'taxonomy_term-organization_types-eid-7415-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
