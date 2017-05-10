<?php
/**
 * @file
 * landportal_sdgs.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function landportal_sdgs_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Housing',
    'description' => '<p>
<style type="text/css"><!--td {border: 1px solid #ccc;}br {mso-data-placement:same-cell;}-->
</style>
11.1 By 2030, ensure access for all to adequate, safe and affordable housing and basic services and upgrade slums</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '1e4fed5b-0b4c-4044-90a2-cfe15a5ff07c',
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
    'field_type' => array(
      'und' => array(
        0 => array(
          'value' => 'target',
        ),
      ),
    ),
    'field_parent' => array(
      'und' => array(
        0 => array(
          'target_id' => 'e6afcb19-5d23-4416-919b-7e3ae972150e',
          'uuid' => 'e6afcb19-5d23-4416-919b-7e3ae972150e',
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Housing',
          'format' => NULL,
        ),
      ),
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
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8244-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'e6afcb19-5d23-4416-919b-7e3ae972150e',
    ),
  );
  $terms[] = array(
    'name' => 'Sustainable food production',
    'description' => '<p>By 2030, ensure sustainable food production systems and implement resilient agricultural practices that increase productivity and production, that help maintain ecosystems, that strengthen capacity for adaptation to climate change, extreme weather, drought, flooding and other disasters and that progressively improve land and soil quality</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '237eb1bb-6cde-4370-b11c-fe715f48f993',
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
    'field_type' => array(
      'und' => array(
        0 => array(
          'value' => 'target',
        ),
      ),
    ),
    'field_parent' => array(
      'und' => array(
        0 => array(
          'target_id' => 'bf413a5b-e03f-4cf0-9a41-45b8075df7a1',
          'uuid' => 'bf413a5b-e03f-4cf0-9a41-45b8075df7a1',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Sustainable food production',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8239-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'bf413a5b-e03f-4cf0-9a41-45b8075df7a1',
    ),
  );
  $terms[] = array(
    'name' => 'Gender equality',
    'description' => '<p>Achieve gender equality and empower all women and girls</p>
',
    'format' => 'full_html',
    'weight' => 7,
    'uuid' => '33aec81f-00ea-45da-ad09-5e8f11920cf0',
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
    'field_type' => array(
      'und' => array(
        0 => array(
          'value' => 'goal',
        ),
      ),
    ),
    'field_parent' => array(),
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
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8240-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Equal rights',
    'description' => '<p>By 2030, ensure that all men and women, in particular the poor and the vulnerable, have equal rights to economic resources, as well as access to basic services, ownership and control over land and other forms of property, inheritance, natural resources, appropriate new technology and financial services, including microfinance</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '46907bb4-b4d8-40c8-9004-0cab02c289fe',
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
    'field_type' => array(
      'und' => array(
        0 => array(
          'value' => 'target',
        ),
      ),
    ),
    'field_parent' => array(
      'und' => array(
        0 => array(
          'target_id' => '56410748-9858-4d86-a99f-71654b33b21b',
          'uuid' => '56410748-9858-4d86-a99f-71654b33b21b',
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
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8237-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '56410748-9858-4d86-a99f-71654b33b21b',
    ),
  );
  $terms[] = array(
    'name' => 'No poverty',
    'description' => '<p>End poverty in all its forms everywhere</p>
',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '56410748-9858-4d86-a99f-71654b33b21b',
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
    'field_type' => array(
      'und' => array(
        0 => array(
          'value' => 'goal',
        ),
      ),
    ),
    'field_parent' => array(),
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
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8236-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Undertake reforms',
    'description' => '<p>Undertake reforms to give women equal rights to economic resources, as well as access to ownership and control over land and other forms of property, financial services, inheritance and natural resources, in accordance with national laws</p>
',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ae439fb1-7608-44f4-ae45-29ee0111d666',
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
    'field_type' => array(
      'und' => array(
        0 => array(
          'value' => 'target',
        ),
      ),
    ),
    'field_parent' => array(
      'und' => array(
        0 => array(
          'target_id' => '33aec81f-00ea-45da-ad09-5e8f11920cf0',
          'uuid' => '33aec81f-00ea-45da-ad09-5e8f11920cf0',
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
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8241-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '33aec81f-00ea-45da-ad09-5e8f11920cf0',
    ),
  );
  $terms[] = array(
    'name' => 'Zero hunger',
    'description' => '<p>End hunger, achieve food security and improved nutrition and promote sustainable agriculture</p>
',
    'format' => 'full_html',
    'weight' => 6,
    'uuid' => 'bf413a5b-e03f-4cf0-9a41-45b8075df7a1',
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
    'field_type' => array(
      'und' => array(
        0 => array(
          'value' => 'goal',
        ),
      ),
    ),
    'field_parent' => array(),
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
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8238-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Urbanization',
    'description' => '<p>
<style type="text/css"><!--td {border: 1px solid #ccc;}br {mso-data-placement:same-cell;}-->
</style>
11.3 By 2030, enhance inclusive and sustainable urbanization and capacity for participatory, integrated and sustainable human settlement planning and management in all countries</p>
',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => 'de58ff7d-8ce4-4138-9f41-0c8b6ac4a278',
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
    'field_type' => array(
      'und' => array(
        0 => array(
          'value' => 'target',
        ),
      ),
    ),
    'field_parent' => array(
      'und' => array(
        0 => array(
          'target_id' => 'e6afcb19-5d23-4416-919b-7e3ae972150e',
          'uuid' => 'e6afcb19-5d23-4416-919b-7e3ae972150e',
        ),
      ),
    ),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Urbanization',
          'format' => NULL,
        ),
      ),
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
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8245-0',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'e6afcb19-5d23-4416-919b-7e3ae972150e',
    ),
  );
  $terms[] = array(
    'name' => 'Life on land',
    'description' => '<p>
<style type="text/css"><!--td {border: 1px solid #ccc;}br {mso-data-placement:same-cell;}-->
</style>
Goal 15. Protect, restore and promote sustainable use of terrestrial ecosystems, sustainably manage forests, combat desertification, and halt and reverse land degradation and halt biodiversity loss</p>
',
    'format' => 'full_html',
    'weight' => 9,
    'uuid' => 'e0b77041-b168-417e-93b4-7e7394043190',
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
    'field_type' => array(
      'und' => array(
        0 => array(
          'value' => 'goal',
        ),
      ),
    ),
    'field_parent' => array(),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Life on land',
          'format' => NULL,
        ),
      ),
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
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8243-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Sustainable cities and communities',
    'description' => '<p>
<style type="text/css"><!--td {border: 1px solid #ccc;}br {mso-data-placement:same-cell;}-->
</style>
Goal 11. Make cities and human settlements inclusive, safe, resilient and sustainable</p>
',
    'format' => 'full_html',
    'weight' => 8,
    'uuid' => 'e6afcb19-5d23-4416-919b-7e3ae972150e',
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
    'field_type' => array(
      'und' => array(
        0 => array(
          'value' => 'goal',
        ),
      ),
    ),
    'field_parent' => array(),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Sustainable cities and communities',
          'format' => NULL,
        ),
      ),
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
    'entity_translation_handler_id' => 'taxonomy_term-sdgs-eid-8242-0',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
