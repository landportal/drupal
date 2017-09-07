<?php
/**
 * @file
 * landportal_sdgs_taxonomies.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function landportal_sdgs_taxonomies_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Agriculture',
    'description' => '<p>Proportion of agricultural area under productive and sustainable agriculture</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '18d70415-746c-4faf-a093-a33ffeccd867',
    'hweight' => 8,
    'hdepth' => 2,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => '2.4.1',
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'indicator',
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Agriculture',
          'format' => NULL,
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Agriculture',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8327-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '237eb1bb-6cde-4370-b11c-fe715f48f993',
    ),
  );
  $terms[] = array(
    'name' => 'Housing',
    'description' => 'By 2030, ensure access for all to adequate, safe and affordable housing and basic services and upgrade slums',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1e4fed5b-0b4c-4044-90a2-cfe15a5ff07c',
    'hweight' => 14,
    'hdepth' => 1,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 11.1,
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'target',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Housing',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8292-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'e6afcb19-5d23-4416-919b-7e3ae972150e',
    ),
  );
  $terms[] = array(
    'name' => 'Sustainable food',
    'description' => 'By 2030, ensure sustainable food production systems and implement resilient agricultural practices that increase productivity and production, that help maintain ecosystems, that strengthen capacity for adaptation to climate change, extreme weather, drought, flooding and other disasters and that progressively improve land and soil quality',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '237eb1bb-6cde-4370-b11c-fe715f48f993',
    'hweight' => 7,
    'hdepth' => 1,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 2.4,
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'target',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Sustainable food',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8293-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'bf413a5b-e03f-4cf0-9a41-45b8075df7a1',
    ),
  );
  $terms[] = array(
    'name' => 'Universal access',
    'description' => 'By 2030, provide universal access to safe, inclusive and accessible, green and public spaces, in particular for women and children, older persons and persons with disabilities',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '24b359a8-4e56-469f-bb34-1ac07c8e9b9a',
    'hweight' => 18,
    'hdepth' => 1,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 11.7,
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'target',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Universal access',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8294-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'e6afcb19-5d23-4416-919b-7e3ae972150e',
    ),
  );
  $terms[] = array(
    'name' => 'Tenure',
    'description' => '<p>Proportion of total adult population with secure tenure rights to land, with legally recognized documentation and who perceive their rights to land as secure, by sex and by type of tenure</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '28615a04-52bb-4826-b648-b9af56aaa51a',
    'hweight' => 2,
    'hdepth' => 2,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => '1.4.2',
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'indicator',
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Tenure',
          'format' => NULL,
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Tenure',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8328-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '46907bb4-b4d8-40c8-9004-0cab02c289fe',
    ),
  );
  $terms[] = array(
    'name' => 'Gender equality',
    'description' => 'Achieve gender equality and empower all women and girls',
    'format' => 'plain_text',
    'weight' => 23,
    'uuid' => '33aec81f-00ea-45da-ad09-5e8f11920cf0',
    'hweight' => 9,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 5,
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(
      'und' => array(
        0 => array(
          'uid' => 1,
          'filename' => '05.png',
          'uri' => 'public://05.png',
          'filemime' => 'image/png',
          'filesize' => 39126,
          'status' => 1,
          'type' => 'image',
          'uuid' => 'cdab1d97-f0cf-40d5-8893-53e592e1aa10',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 1536,
            'width' => 1536,
          ),
          'alt' => '',
          'title' => '',
          'height' => 1536,
          'width' => 1536,
          'uuid_features_file_path' => 'public://05.png',
        ),
      ),
    ),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'goal',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Gender equality',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8295-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Forest',
    'description' => '<p>Forest area as a proportion of total land area</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '35625f0a-d057-429b-b11a-698e4fc15b89',
    'hweight' => 22,
    'hdepth' => 2,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => '15.1.1',
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'indicator',
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Forest',
          'format' => NULL,
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Forest',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8329-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '6aa2e871-4ea4-4464-9fdf-4a4ee21f9662',
    ),
  );
  $terms[] = array(
    'name' => 'Restore degraded land and soil',
    'description' => 'By 2030, combat desertification, restore degraded land and soil, including land affected by desertification, drought and floods, and strive to achieve a land degradation-neutral world',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '439dbb02-9dea-489c-8912-9793b24cfcda',
    'hweight' => 24,
    'hdepth' => 1,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 15.3,
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'target',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Restore degraded land and soil',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8296-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'e0b77041-b168-417e-93b4-7e7394043190',
    ),
  );
  $terms[] = array(
    'name' => 'Equal rights',
    'description' => 'By 2030, ensure that all men and women, in particular the poor and the vulnerable, have equal rights to economic resources, as well as access to basic services, ownership and control over land and other forms of property, inheritance, natural resources, appropriate new technology and financial services, including microfinance',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '46907bb4-b4d8-40c8-9004-0cab02c289fe',
    'hweight' => 1,
    'hdepth' => 1,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 1.4,
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'target',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Equal rights',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8297-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '56410748-9858-4d86-a99f-71654b33b21b',
    ),
  );
  $terms[] = array(
    'name' => 'Rights',
    'description' => '<p>Proportion of countries where the legal framework (including customary law) guarantees women’s equal rights to land ownership and/or control</p>
',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '4c400ae8-4e3f-48f8-b43f-67c65f7dc1b2',
    'hweight' => 12,
    'hdepth' => 2,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => '5.a.2',
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'indicator',
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Rights',
          'format' => NULL,
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Rights',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8330-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'ae439fb1-7608-44f4-ae45-29ee0111d666',
    ),
  );
  $terms[] = array(
    'name' => 'Land consumption',
    'description' => '<p>Ratio of land consumption rate to population growth rate</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4c465b0a-b381-4be8-86c1-23aadac86e99',
    'hweight' => 17,
    'hdepth' => 2,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => '11.3.1',
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'indicator',
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Land consumption',
          'format' => NULL,
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Land consumption',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8331-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'de58ff7d-8ce4-4138-9f41-0c8b6ac4a278',
    ),
  );
  $terms[] = array(
    'name' => 'No poverty',
    'description' => 'End poverty in all its forms everywhere',
    'format' => 'plain_text',
    'weight' => 21,
    'uuid' => '56410748-9858-4d86-a99f-71654b33b21b',
    'hweight' => 0,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 1,
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(
      'und' => array(
        0 => array(
          'uid' => 1,
          'filename' => '01.png',
          'uri' => 'public://01.png',
          'filemime' => 'image/png',
          'filesize' => 52125,
          'status' => 1,
          'type' => 'image',
          'uuid' => 'e2a79472-8724-4312-be6d-28833edc3c84',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 1536,
            'width' => 1536,
          ),
          'alt' => '',
          'title' => '',
          'height' => 1536,
          'width' => 1536,
          'uuid_features_file_path' => 'public://01.png',
        ),
      ),
    ),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'goal',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'No poverty',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8298-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Conservation and sustainable use',
    'description' => 'By 2020, ensure the conservation, restoration and sustainable use of terrestrial and inland freshwater ecosystems and their services, in particular forests, wetlands, mountains and drylands, in line with obligations under international agreements',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6aa2e871-4ea4-4464-9fdf-4a4ee21f9662',
    'hweight' => 21,
    'hdepth' => 1,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 15.1,
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'target',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Conservation and sustainable use',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8299-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'e0b77041-b168-417e-93b4-7e7394043190',
    ),
  );
  $terms[] = array(
    'name' => 'Tier 3',
    'description' => '"Tier 3" means that internationally established methodology or standards is not yet available for the indicator, but methodology/standards are being (or will be) developed or tested.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '981b7cc9-9559-4493-b07a-3fec1225640a',
    'hweight' => 2,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs_tiers',
    'field_date' => array(
      'und' => array(
        0 => array(
          'value' => '2017-06-22 00:00:00',
          'value2' => '2017-06-22 00:00:00',
          'timezone' => 'Europe/Rome',
          'timezone_db' => 'Europe/Rome',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Tier 3',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs_tiers-eid-8300-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Agriculture',
    'description' => '<p>(a) Proportion of total agricultural population with ownership or secure rights over agricultural land, by sex; (b) share of women among owners or rights-bearers of agricultural land, by type of tenure</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '9917ac6d-3296-48e9-a3de-38c5b31bd2ba',
    'hweight' => 11,
    'hdepth' => 2,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => '5.a.1',
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'indicator',
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Agriculture',
          'format' => NULL,
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Agriculture',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8332-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'ae439fb1-7608-44f4-ae45-29ee0111d666',
    ),
  );
  $terms[] = array(
    'name' => 'Undertake reforms',
    'description' => 'Undertake reforms to give women equal rights to economic resources, as well as access to ownership and control over land and other forms of property, financial services, inheritance and natural resources, in accordance with national laws',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ae439fb1-7608-44f4-ae45-29ee0111d666',
    'hweight' => 10,
    'hdepth' => 1,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => '5.a',
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'target',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Undertake reforms',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8301-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '33aec81f-00ea-45da-ad09-5e8f11920cf0',
    ),
  );
  $terms[] = array(
    'name' => 'Protection',
    'description' => '<p>Proportion of important sites for terrestrial and freshwater biodiversity that are covered by protected areas, by ecosystem type</p>
',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => 'b6b77883-127c-4db7-826d-1888b37c4598',
    'hweight' => 23,
    'hdepth' => 2,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => '15.1.2',
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'indicator',
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Protection',
          'format' => NULL,
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Protection',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8333-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '6aa2e871-4ea4-4464-9fdf-4a4ee21f9662',
    ),
  );
  $terms[] = array(
    'name' => 'Tier 2',
    'description' => '"Tier 2" means the indicator is conceptually clear, has an internationally established methodology and standards are available, but data is not regularly produced by countries.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b8381b37-16f6-4c32-8622-cf8bce134430',
    'hweight' => 1,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs_tiers',
    'field_date' => array(
      'und' => array(
        0 => array(
          'value' => '2017-06-22 00:00:00',
          'value2' => '2017-06-22 00:00:00',
          'timezone' => 'Europe/Rome',
          'timezone_db' => 'Europe/Rome',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Tier 2',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs_tiers-eid-8302-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Zero hunger',
    'description' => 'End hunger, achieve food security and improved nutrition and promote sustainable agriculture',
    'format' => 'plain_text',
    'weight' => 22,
    'uuid' => 'bf413a5b-e03f-4cf0-9a41-45b8075df7a1',
    'hweight' => 3,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 2,
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(
      'und' => array(
        0 => array(
          'uid' => 1,
          'filename' => '02.png',
          'uri' => 'public://02.png',
          'filemime' => 'image/png',
          'filesize' => 38240,
          'status' => 1,
          'type' => 'image',
          'uuid' => 'f0601b8c-8add-4886-8b9b-d8a479034924',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 1536,
            'width' => 1536,
          ),
          'alt' => '',
          'title' => '',
          'height' => 1536,
          'width' => 1536,
          'uuid_features_file_path' => 'public://02.png',
        ),
      ),
    ),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'goal',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Zero hunger',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8303-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Urban',
    'description' => '<p>Proportion of urban population living in slums, informal settlements or inadequate housing</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c370054f-efc0-482c-8bba-be9945119d40',
    'hweight' => 15,
    'hdepth' => 2,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => '11.1.1',
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'indicator',
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Urban',
          'format' => NULL,
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Urban',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8334-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '1e4fed5b-0b4c-4044-90a2-cfe15a5ff07c',
    ),
  );
  $terms[] = array(
    'name' => 'Degraded land',
    'description' => '<p>Proportion of land that is degraded over total land area</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c64007c2-d84e-4405-b8c0-6624c53adcef',
    'hweight' => 25,
    'hdepth' => 2,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => '15.3.1',
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'indicator',
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Degraded land',
          'format' => NULL,
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Degraded land',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8335-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '439dbb02-9dea-489c-8912-9793b24cfcda',
    ),
  );
  $terms[] = array(
    'name' => 'Tier 1',
    'description' => '"Tier 1" means the Indicator is conceptually clear, has an internationally established and available methodology and standards, and that data is regularly produced by countries for at least 50 per cent of countries and of the population in every region where the indicator is relevant.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ca682b36-0536-444d-9ad3-58ff30a3e0a6',
    'hweight' => 0,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs_tiers',
    'field_date' => array(
      'und' => array(
        0 => array(
          'value' => '2017-10-02 00:00:00',
          'value2' => '2017-10-02 00:00:00',
          'timezone' => 'Europe/Rome',
          'timezone_db' => 'Europe/Rome',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Tier 1',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs_tiers-eid-8304-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Open space',
    'description' => '<p>Average share of the built-up area of cities that is open space for public use for all, by sex, age and persons with disabilities</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd62fe6d1-6051-4764-8237-510a53cbcc31',
    'hweight' => 19,
    'hdepth' => 2,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => '11.7.1',
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'indicator',
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Open space',
          'format' => NULL,
        ),
      ),
      'und' => array(
        0 => array(
          'value' => 'Open space',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8336-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '24b359a8-4e56-469f-bb34-1ac07c8e9b9a',
    ),
  );
  $terms[] = array(
    'name' => 'Urbanization',
    'description' => 'By 2030, enhance inclusive and sustainable urbanization and capacity for participatory, integrated and sustainable human settlement planning and management in all countries',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'de58ff7d-8ce4-4138-9f41-0c8b6ac4a278',
    'hweight' => 16,
    'hdepth' => 1,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 11.3,
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'target',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Urbanization',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8305-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'e6afcb19-5d23-4416-919b-7e3ae972150e',
    ),
  );
  $terms[] = array(
    'name' => 'Life on land',
    'description' => 'Protect, restore and promote sustainable use of terrestrial ecosystems, sustainably manage forests, combat desertification, and halt and reverse land degradation and halt biodiversity loss',
    'format' => 'plain_text',
    'weight' => 25,
    'uuid' => 'e0b77041-b168-417e-93b4-7e7394043190',
    'hweight' => 20,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 15,
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(
      'und' => array(
        0 => array(
          'uid' => 1,
          'filename' => '15.png',
          'uri' => 'public://15.png',
          'filemime' => 'image/png',
          'filesize' => 34736,
          'status' => 1,
          'type' => 'image',
          'uuid' => 'ccb683f2-c465-48df-9fea-3636ff51a24e',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 1536,
            'width' => 1536,
          ),
          'alt' => '',
          'title' => '',
          'height' => 1536,
          'width' => 1536,
          'uuid_features_file_path' => 'public://15.png',
        ),
      ),
    ),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'goal',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Life on land',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8306-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Sustainable cities and communities',
    'description' => 'Make cities and human settlements inclusive, safe, resilient and sustainable',
    'format' => 'plain_text',
    'weight' => 24,
    'uuid' => 'e6afcb19-5d23-4416-919b-7e3ae972150e',
    'hweight' => 13,
    'hdepth' => 0,
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'sdgs',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 11,
          'format' => NULL,
        ),
      ),
    ),
    'field_image' => array(
      'und' => array(
        0 => array(
          'uid' => 1,
          'filename' => '11.png',
          'uri' => 'public://11_2.png',
          'filemime' => 'image/png',
          'filesize' => 47517,
          'status' => 1,
          'type' => 'image',
          'uuid' => 'fbc5d5a2-42a6-484d-b800-1710f1d2f2da',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'rdf_mapping' => array(),
          'metadata' => array(
            'height' => 1536,
            'width' => 1536,
          ),
          'alt' => '',
          'title' => '',
          'height' => 1536,
          'width' => 1536,
          'uuid_features_file_path' => 'public://11_2.png',
        ),
      ),
    ),
    'field_sdgs_type' => array(
      'und' => array(
        0 => array(
          'value' => 'goal',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Sustainable cities and communities',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8307-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
