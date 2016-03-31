<?php
/**
 * @file
 * landbook_taxonomies.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function landbook_taxonomies_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Malnutrition Prevalence - World Bank',
    'description' => '<p>This dataset contains the indicator on&nbsp;malnutrition prevalence (height for age), as provided by the World Bank.</p>
',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => '013ed72c-6091-4461-9ce1-98c53160a0dc',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'DATWB4',
          'format' => NULL,
          'safe_value' => 'DATWB4',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '78e2ad5a-ed53-4bc5-aafe-2d39f19da353',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6909,
          'revision_id' => 6909,
          'language' => 'und',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456852994,
          'changed' => 1456852994,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total Hectares in Deals',
    'description' => '<p>Total Area (ha) calculated as the sum of all deals, in a gven country in a given year. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession. It can be compared to the Total Number of Deals.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '020207d0-679d-4174-97bd-0be40658051b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDLM12',
          'format' => NULL,
          'safe_value' => 'INDLM12',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6972,
          'revision_id' => 6972,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449700480,
          'changed' => 1449700480,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Children in Employment - Female',
    'description' => '<p>Children in employment refer to the share (%) of children involved in economic activity for at least one hour in the reference week of the survey.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '03695a8b-d417-44e9-bd28-cfa73bf3e4ca',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '08313495-2fcc-450f-990c-95139099d968',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB25',
          'format' => NULL,
          'safe_value' => 'INDWB25',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7012,
          'revision_id' => 7012,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449703043,
          'changed' => 1449703043,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Human Development Index (HDI)',
    'description' => '<p>The Human Development Index (HDI) is a summary measure of average achievement in key dimensions of human development: a long and healthy life, being knowledgeable and have a decent standard of living. The HDI is the geometric mean of normalized indices for each of the three dimensions. Highier values are related to higher levels of human development.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '07fb438a-5632-4944-9170-ca40eee96026',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '97367277-d0b0-411e-8989-3b53cdab1568',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDUNDP0',
          'format' => NULL,
          'safe_value' => 'INDUNDP0',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7005,
          'revision_id' => 7005,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449702564,
          'changed' => 1449702564,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Socio-Economic Indicators - World Bank',
    'description' => '<p>This dataset contains indicators&nbsp;on both male and female&nbsp;labour force participation, unemployment, children in employment and employment in agriculture, as provided by the World Bank.</p>
',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '08313495-2fcc-450f-990c-95139099d968',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'DATWB1',
          'format' => NULL,
          'safe_value' => 'DATWB1',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '78e2ad5a-ed53-4bc5-aafe-2d39f19da353',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6905,
          'revision_id' => 6905,
          'language' => 'und',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456852950,
          'changed' => 1456852950,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Mortality Rate - Under 5 (per 1\'000 Live Births)',
    'description' => '<p>Under-five mortality rate is the probability per 1,000 that a newborn baby will die before reaching age five, if subject to current age-specific mortality rates.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '08ee2c15-09e7-44bd-bad5-f781e96bcf9a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'dc286b77-08c7-44f6-ba1d-4e465269101d',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB18',
          'format' => NULL,
          'safe_value' => 'INDWB18',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7023,
          'revision_id' => 7023,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449703551,
          'changed' => 1449703551,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Shares in Number Operated as Others',
    'description' => '<p>Share (%) of the total number of agricultural holdings under other forms of tenure (different from <em>ownership</em> or <em>tenancy</em>), in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0aa1a129-90f6-4c20-9d8c-2905762a5758',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOACI11',
          'format' => NULL,
          'safe_value' => 'INDFAOACI11',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6923,
          'revision_id' => 6923,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449688376,
          'changed' => 1449688376,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Area Operated as Others',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '16ccda33-364c-43db-9c7c-9b0f6cad3ea5',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOACI8',
          'format' => NULL,
          'safe_value' => 'INDFAOACI8',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6936,
          'revision_id' => 6936,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1455123775,
          'changed' => 1455123775,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Discriminatory Familiy Code',
    'description' => '<p>The indicator is a component of the SIGI - Social Institutions and Gender Index and captures social institutions that limit women’s decision-making power and undervalue their status in the household and the family. These formal and informal laws, social norms and practices co-exist in different types of legal systems including civil or common law, customary law, and religious laws and cover areas such as marriage, parental authority and inheritance. Women’s decision-making power and status determine both their ability to choose their own development pathways and the well-being of their families. It ranges from 0 (no discrimination between women and men in both the formal and the customary family code) to 1 (Women are discriminated with respect to men both by the formal and the customary family code).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '16ff8b08-8db5-462b-83dc-585b869f37d3',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD2',
          'format' => NULL,
          'safe_value' => 'INDOECD2',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6993,
          'revision_id' => 6993,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449702002,
          'changed' => 1449702002,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Employment in Agriculture (% Total Employment)',
    'description' => '<p>Employees are people who work for a public or private employer and receive remuneration in wages, salary, commission, tips, piece rates, or pay in kind.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '190074d8-a33b-4752-b7d5-ce8c572911ed',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '08313495-2fcc-450f-990c-95139099d968',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB27',
          'format' => NULL,
          'safe_value' => 'INDWB27',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7014,
          'revision_id' => 7014,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449703162,
          'changed' => 1449703162,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Shares in Number Operated as Owner',
    'description' => '<p>Share (%) of the total number of agricultural holdings operated under ownership, in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '19038f3e-0805-40d8-8303-7f7117d8eff3',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOACI9',
          'format' => NULL,
          'safe_value' => 'INDFAOACI9',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6921,
          'revision_id' => 6921,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449688075,
          'changed' => 1449688075,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Restricted Resources and Entitlements ‐ Woman Access to Land',
    'description' => '<p>This indicator is a sub-component of the Restricted Resources and Entitlements Indicator and measures whether women and men have equal and secure access to land use, control and ownership. It ranges from 0 (equal access for women and men) to 1 (The law does not guarantee the same rights to own, use and control land to women and men, or women have no legal rights to own, use and control land).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '19e0e3d9-1a1e-4ac5-8b61-95fa7c0ec4e9',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '80f9dae9-1dcf-42f2-ac65-9e3ce0738f1d',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD11',
          'format' => NULL,
          'safe_value' => 'INDOECD11',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6992,
          'revision_id' => 6992,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1455127446,
          'changed' => 1455127446,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Life Expectancy at Birth - Female',
    'description' => '<p>Life expectancy at birth indicates the number of years a newborn infant would live if prevailing patterns of mortality at the time of its birth were to stay the same throughout its life.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1b331a6c-63e3-4a00-b8df-d178f469e077',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'ef4b0f37-3295-4059-896f-8943f9e05f14',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB3',
          'format' => NULL,
          'safe_value' => 'INDWB3',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7019,
          'revision_id' => 7019,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449703359,
          'changed' => 1449703359,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total Number of Tourism Deals',
    'description' => '<p>Total number of deals having as main object purposes related to Tourism, in a given country in a given year. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1dec08d2-30c8-4b74-bb2c-a3b20db40d3c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDLM6',
          'format' => NULL,
          'safe_value' => 'INDLM6',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6966,
          'revision_id' => 6966,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449700205,
          'changed' => 1449700205,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Unemployment - Youth Male',
    'description' => '<p>Youth unemployment refers to the share of the labor force ages 15-24 without work but available for and seeking employment.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1e006c9b-102f-4e87-a4ee-21d0d1fcd617',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '08313495-2fcc-450f-990c-95139099d968',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB23',
          'format' => NULL,
          'safe_value' => 'INDWB23',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7010,
          'revision_id' => 7010,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449702957,
          'changed' => 1449702957,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Discriminatory Family Code - Inheritance Rights of Women',
    'description' => '<p>This indicator was a sub-component of the Discriminatory Family Code Index in the Gender Institutions and Development Database [link to: http://www.oecd.org/dev/poverty/genderinstitutionsanddevelopmentdatabase.htm] in the 2009 edition. It ranges from 0 (same inheritance rights to both Women and men) to 1 (The law does not guarantee the same inheritance rights to widows and widowers, or widows have no inheritance rights at all). In the 2012 edition of the same database made by OECD, this index was splitted into two separated sub-component:<br />
1) Discriminatory Familiy Code - Inheritance Rights of Widows<br />
2) Discriminatory Familiy Code - Inheritance Rights of Daughters</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1e557d49-55bd-4f26-819c-c7ac6a08354c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD8',
          'format' => NULL,
          'safe_value' => 'INDOECD8',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7001,
          'revision_id' => 7001,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449702392,
          'changed' => 1449702392,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Share of food expenditure of the poor',
    'description' => '<p>Proportion of food consumption over total consumption (food and non-food) for the lowest income quintile of the population.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '21264dfb-5598-4f96-b7f0-b142b2df5a97',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '704ff095-fce6-4e1d-9c24-4ca9ddd59bdf',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOFSEC5',
          'format' => NULL,
          'safe_value' => 'INDFAOFSEC5',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6942,
          'revision_id' => 6942,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449698885,
          'changed' => 1449698885,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total number of agriculture deals',
    'description' => '<p>Total number of deals having as main object purposes related to agriculture, in a given country in a given year. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession.&nbsp; It can be compared to the Total Number of Deals.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '239a0f14-42fc-403b-a36f-f8934307c53a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDLM1',
          'format' => NULL,
          'safe_value' => 'INDLM1',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6976,
          'revision_id' => 6976,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449701128,
          'changed' => 1449701128,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Relative arable land',
    'description' => '<p>Share (%) of Arable Land with respect to the Total Land Area.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '27652f06-fb3c-40e7-9404-fd480f34f804',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'd9039fd5-e3dc-4883-88f8-363956b48f39',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOSTAT6',
          'format' => NULL,
          'safe_value' => 'INDFAOSTAT6',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6949,
          'revision_id' => 6949,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449699352,
          'changed' => 1449699352,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Domestic food price level index',
    'description' => '<p>The Domestic Food Price Level Index is calculated by dividing the Food Purchasing Power Parity (FPPP) by the General PPP, thus proiding an index of the price of food in the country relative to the price of the generic cosnumption basket. Data are available for 2005 from the ICP Program . It is then extended to other years by adjusting both numerator and denominator using the relative chenges in Food CPI and General CPI as provided by ILO. It allows comparison of the relative price of food across countries and over time.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2a3c70e9-8932-401c-81a3-02298bb9fd5f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '704ff095-fce6-4e1d-9c24-4ca9ddd59bdf',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOFSEC1',
          'format' => NULL,
          'safe_value' => 'INDFAOFSEC1',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6939,
          'revision_id' => 6939,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449698519,
          'changed' => 1449698519,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Life Expectancy at Birth - Male',
    'description' => '<p>Life expectancy at birth indicates the number of years a newborn infant would live if prevailing patterns of mortality at the time of its birth were to stay the same throughout its life.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2da1f0d0-776a-4cac-9d10-523f966f9f0a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'ef4b0f37-3295-4059-896f-8943f9e05f14',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB4',
          'format' => NULL,
          'safe_value' => 'INDWB4',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7018,
          'revision_id' => 7018,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449703321,
          'changed' => 1449703321,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total Hectares in Intended Deals',
    'description' => '<p>Total Area (ha) calculated as the sum of all Intended deals, in a gven country in a given year. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession. It can be compared to the Total Hectares in Deals.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2fa43f94-040a-4d08-8943-1dd6f6c08935',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDLM13',
          'format' => NULL,
          'safe_value' => 'INDLM13',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6969,
          'revision_id' => 6969,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449700348,
          'changed' => 1449700348,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Malnutrition Prevalence (Height for Age)',
    'description' => '<p>Prevalence of child malnutrition is the percentage of children under age 5 whose height for age (stunting) is more than two standard deviations below the median for the international reference population ages 0-59 months. For children up to two years old height is measured by recumbent length. For older children height is measured by stature while standing.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2fe25c86-8306-4b46-8689-8c449995a146',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '013ed72c-6091-4461-9ce1-98c53160a0dc',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB31',
          'format' => NULL,
          'safe_value' => 'INDWB31',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7027,
          'revision_id' => 7027,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449703694,
          'changed' => 1449703694,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Child Mortality',
    'description' => '<p>The mortality rate of children younger than the age of five (partially reflecting the fatal synergy of inadequate dietary intake and unhealthy environments). This indicator is also used to calculate the Global Hunger Index (GHI).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '33a57122-8cac-406c-ae76-48703e499cbd',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '7880a96d-0de1-44bb-9f6b-2a5e480d0b4e',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDIFPRI1',
          'format' => NULL,
          'safe_value' => 'INDIFPRI1',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6963,
          'revision_id' => 6963,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1455123749,
          'changed' => 1455123749,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Poverty Gap at Rural Poverty Line',
    'description' => '<p>Poverty gap at rural poverty line is the mean shortfall from the poverty line (counting the nonpoor as having zero shortfall) as a percentage of the national rural poverty line. This measure reflects the depth of poverty as well as its incidence.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '34388034-53b2-43f7-947c-441f6994ef9b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'dc286b77-08c7-44f6-ba1d-4e465269101d',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB14',
          'format' => NULL,
          'safe_value' => 'INDWB14',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7026,
          'revision_id' => 7026,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449703655,
          'changed' => 1449703655,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Shares in Area Operated under more than One Form of Tenure',
    'description' => '<p>Share (%) of the total area (ha) of agricultural holdings under more than one form of tenure, in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '35806cdb-80d4-4eaa-bec2-e6d29943f969',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOACI18',
          'format' => NULL,
          'safe_value' => 'INDFAOACI18',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6934,
          'revision_id' => 6934,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449698200,
          'changed' => 1449698200,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Urban Population',
    'description' => '<p>Urban population refers to the share (%) of people living in Urban areas as defined by national statistical offices. It is calculated as the ratio between Rural Population and Total Population.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '358d3b1a-f3ac-474e-a013-4261173cb980',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '573e86b6-632a-475e-9471-1d2477ac0a4f',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB12',
          'format' => NULL,
          'safe_value' => 'INDWB12',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7035,
          'revision_id' => 7035,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1450449851,
          'changed' => 1450449851,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total Number of Intended Deals',
    'description' => '<p>Total number of Intended deals, in a gven country in a given year. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession. It can be compared to the Total Number of Deals.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '369f500a-c2a5-40ed-8ebf-4be8281156e2',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDLM9',
          'format' => NULL,
          'safe_value' => 'INDLM9',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6968,
          'revision_id' => 6968,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449700311,
          'changed' => 1449700311,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Number of rural households headed by women',
    'description' => '<p>It is the number of rural households headed by women in a given country in a given year, as measured by the Agricultural Census. It can be compared with the Total Number of Holdings.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3780e7af-2904-4e2d-a92f-3972d3ed7923',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'af8915e6-281d-41b5-af8b-e210de56cdc5',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOGENDER0',
          'format' => NULL,
          'safe_value' => 'INDFAOGENDER0',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6945,
          'revision_id' => 6945,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449699102,
          'changed' => 1449699102,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total Number of Holdings',
    'description' => '<p>Is the total number of Agricultural holding in a given country in a given (agricultural census) year. An agricultural holding is an economic unit of agricultural production under single management comprising all livestock kept and all land used wholly or partly for agricultural production purposes, without regard to title, legal form, or size. Single management may be exercised by an individual or household, jointly by two or more individuals or households, by a clan or tribe, or by a juridical person such as a corporation, cooperative or government agency. The holding\'s land may consist of one or more parcels, located in one or more separate areas.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '37ad9026-4aa0-4917-839d-e29415c26cd3',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOACI1',
          'format' => NULL,
          'safe_value' => 'INDFAOACI1',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6932,
          'revision_id' => 6932,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449689652,
          'changed' => 1449689652,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total Number of Failed Deals',
    'description' => '<p>Total number of failed deals, in a gven country in a given year. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession. It can be compared to the Total Number of Deals.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '40d09f66-5815-4d73-a02c-8f9b8ec929ee',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDLM11',
          'format' => NULL,
          'safe_value' => 'INDLM11',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6967,
          'revision_id' => 6967,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449700265,
          'changed' => 1449700265,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Discriminatory Familiy Code - Inheritance Rights of Widows',
    'description' => '<p>This indicator is a sub-component of the Discriminatory Family Code Indicator and measures whether widows and widowers have equal inheritance rights. It ranges from 0 to 1 and the interpretation is as follows:<br />
0: The law guarantees the same inheritance rights to both widows and widowers.<br />
0.5: The law guarantees the same inheritance rights to both widows and widowers, but there are some customary, traditional or religious practices that discriminate against widows.<br />
1: The law does not guarantee the same inheritance rights to widows and widowers, or widows have no inheritance rights at all.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '42520349-ee76-40cd-920b-b71d0baf8686',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '80f9dae9-1dcf-42f2-ac65-9e3ce0738f1d',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD10',
          'format' => NULL,
          'safe_value' => 'INDOECD10',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6991,
          'revision_id' => 6991,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449701915,
          'changed' => 1449701915,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Area Operated Under More than One Form of Tenure',
    'description' => '<p>Area (ha) of agricultural holdings operated under more than one form of tenancy, in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '432d823a-9f3e-4784-804f-12b65d59ef3f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOACI16',
          'format' => NULL,
          'safe_value' => 'INDFAOACI16',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6937,
          'revision_id' => 6937,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1455123815,
          'changed' => 1455123815,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Prevalence of HIV - Total',
    'description' => '<p>Prevalence of HIV refers to the percentage of people ages 15-49 who are infected with HIV.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '447dec29-03f5-489f-ad9f-806dfcf15bbc',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'dc286b77-08c7-44f6-ba1d-4e465269101d',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB17',
          'format' => NULL,
          'safe_value' => 'INDWB17',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7021,
          'revision_id' => 7021,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449703444,
          'changed' => 1449703444,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Global ranking in Social Institutions and Gender Index',
    'description' => '<p>Global ranking by country for the SIGI - Social Institutions and Gender Index</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4575f982-b154-4ca3-9ac3-7a47f42a40af',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD1',
          'format' => NULL,
          'safe_value' => 'INDOECD1',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6996,
          'revision_id' => 6996,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449702181,
          'changed' => 1449702181,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Undernourishment',
    'description' => '<p>The proportion of undernourished as a percentage of the population (reflecting the share of the population with insufficient calorie intake). This indicator is also used to calculate the Global Hunger Index (GHI).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '45db4aed-50ed-4597-b5d8-d2f7e7b32704',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '7afef5d8-54ee-41fd-8012-e40517bbb362',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDIFPRI2',
          'format' => NULL,
          'safe_value' => 'INDIFPRI2',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6956,
          'revision_id' => 6956,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449699730,
          'changed' => 1449699730,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Area Operated as Owner',
    'description' => '<p>Area (ha) of agricultural holdings operated under ownership, in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '45ea0c31-db24-4c0f-ba5f-58060bec55c3',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOACI6',
          'format' => NULL,
          'safe_value' => 'INDFAOACI6',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6929,
          'revision_id' => 6929,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449689018,
          'changed' => 1449689018,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total Number of Conservation Deals',
    'description' => '<p>Total number of deals having as main object purposes related to Conservation, in a given country in a given year. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession. It can be compared to the Total Number of Deals.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4660db50-7d4c-4db5-9397-3fe911bb46f8',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDLM2',
          'format' => NULL,
          'safe_value' => 'INDLM2',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6978,
          'revision_id' => 6978,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449701195,
          'changed' => 1449701195,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Unemployment - Female',
    'description' => '<p>Unemployment refers to the share of the labor force that is without work but available for and seeking employment.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4aa1818b-a199-40d9-8e08-183a4be609ca',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '08313495-2fcc-450f-990c-95139099d968',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB20',
          'format' => NULL,
          'safe_value' => 'INDWB20',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7009,
          'revision_id' => 7009,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449702925,
          'changed' => 1449702925,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Unemployment - Male',
    'description' => '<p>Unemployment refers to the share of the labor force that is without work but available for and seeking employment.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4fc19547-a34a-49dc-9537-8130720d2c73',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '08313495-2fcc-450f-990c-95139099d968',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB21',
          'format' => NULL,
          'safe_value' => 'INDWB21',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7008,
          'revision_id' => 7008,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449702896,
          'changed' => 1449702896,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total hectares in contracted deals',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5007ae1a-642d-465b-bf62-75596dea8bde',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDLM14',
          'format' => NULL,
          'safe_value' => 'INDLM14',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6973,
          'revision_id' => 6973,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449700910,
          'changed' => 1449700910,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Literacy - World Bank',
    'description' => '<p>This dataset contains the&nbsp;adult literacy rate as provided by the World Bank.</p>
',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '507b3bec-ad6d-4d9d-971b-52bd053c55de',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'DATWB0',
          'format' => NULL,
          'safe_value' => 'DATWB0',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '78e2ad5a-ed53-4bc5-aafe-2d39f19da353',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6906,
          'revision_id' => 6906,
          'language' => 'und',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456852903,
          'changed' => 1456852903,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Discriminatory Familiy Code - Inheritance Rights of Daughters',
    'description' => '<p>This indicator is a sub-component of the Discriminatory Family Code Indicator and measures whether daughters and sons have equal inheritance rights. It ranges from 0 (same inheritance rights for both daughters and sons) to one (The law does not guarantee the same inheritance rights to daughters and sons, or daughters have no inheritance rights at all).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '51504968-32bc-4d4e-a4e9-fa5823006de0',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD9',
          'format' => NULL,
          'safe_value' => 'INDOECD9',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7002,
          'revision_id' => 7002,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449702436,
          'changed' => 1449702436,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Child Mortality',
    'description' => '<p>The mortality rate of children younger than the age of five (partially reflecting the fatal synergy of inadequate dietary intake and unhealthy environments). This indicator is also used to calculate the Global Hunger Index (GHI).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '519a3d6f-529a-4b3d-9f4d-7595f33f1a5f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '7afef5d8-54ee-41fd-8012-e40517bbb362',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDIFPRI1',
          'format' => NULL,
          'safe_value' => 'INDIFPRI1',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6959,
          'revision_id' => 6959,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1455123730,
          'changed' => 1455123730,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Labor Force Participation Rate - Female',
    'description' => '<p>Labor force participation rate is the proportion of the population ages 15 and older that is economically active: all people who supply labor for the production of goods and services during a specified period.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '541a1673-2b3b-4f4d-94d3-f73ba82949fd',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '08313495-2fcc-450f-990c-95139099d968',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB24',
          'format' => NULL,
          'safe_value' => 'INDWB24',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7013,
          'revision_id' => 7013,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449703087,
          'changed' => 1449703087,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Global Rank of Restricted Resources and Entitlements',
    'description' => '<p>Global Rank of Restricted Resources and Entitlements index.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '56c2325c-3008-4ee9-96c6-4f06dae1e664',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD7',
          'format' => NULL,
          'safe_value' => 'INDOECD7',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6998,
          'revision_id' => 6998,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449702260,
          'changed' => 1449702260,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Population Indicators - World Bank',
    'description' => '<p>This dataset contains population-related indicators (such as&nbsp;<em>female and male population,</em>&nbsp;s<em>hare of urban and rural population</em>,&nbsp;<em>total population)</em>&nbsp;as provided by the World Bank.</p>
',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => '573e86b6-632a-475e-9471-1d2477ac0a4f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'DATWB5',
          'format' => NULL,
          'safe_value' => 'DATWB5',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '78e2ad5a-ed53-4bc5-aafe-2d39f19da353',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6910,
          'revision_id' => 6910,
          'language' => 'und',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456853080,
          'changed' => 1456853080,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Surface area',
    'description' => '<p>Surface area is a country\'s total area (1\'000 Ha), including areas under inland bodies of water and some coastal waterways.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '57642206-6298-4ccd-942f-51757c2683f5',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'de6a3ad0-3109-41b9-ac54-9cdbe305b097',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB2',
          'format' => NULL,
          'safe_value' => 'INDWB2',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7036,
          'revision_id' => 7036,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449704125,
          'changed' => 1449704125,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Forest land',
    'description' => '<p>It measures the area (1\'000 Ha) covered by forest. The forest is aa portion of land bigger than half a hectare &nbsp;with trees higher than 5 meters and a tree canopy cover of more than 10 %, or with trees that will be able to meet these criteria. It does not include land that is predominantly under agricultural or urban land use.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '580df573-9b4f-4edc-8066-1b0f893c7949',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'd9039fd5-e3dc-4883-88f8-363956b48f39',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOSTAT3',
          'format' => NULL,
          'safe_value' => 'INDFAOSTAT3',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6951,
          'revision_id' => 6951,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449699437,
          'changed' => 1449699437,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Population - aged 15‐64',
    'description' => '<p>Total population between the ages 15 to 64 is the number of people who could potentially be economically active.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '58ba0b75-98a4-4e31-97e4-0e4f2eaf5c93',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '573e86b6-632a-475e-9471-1d2477ac0a4f',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB9',
          'format' => NULL,
          'safe_value' => 'INDWB9',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7032,
          'revision_id' => 7032,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449705592,
          'changed' => 1449705592,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Poverty Headcount ratio at $1.25 a Day',
    'description' => '<p>Population below $1.25 a day is the percentage of the population living on less than $1.25 a day at 2005 international prices. As a result of revisions in PPP exchange rates, poverty rates for individual countries cannot be compared with poverty rates reported in earlier editions.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5acd021d-e316-420a-a51c-8087a682eea6',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'dc286b77-08c7-44f6-ba1d-4e465269101d',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB16',
          'format' => NULL,
          'safe_value' => 'INDWB16',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7025,
          'revision_id' => 7025,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449703617,
          'changed' => 1449703617,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total Number of Holders',
    'description' => '<p>Is the total number of Agricultural holders in a given country in a given year. The agricultural holder is defined as the person who makes the major decisions regarding resource use and exercises management control over the agricultural holding operation. The agricultural holder has technical and economic responsibility for the holding. The agricultural holding can be under single management or there may be more than one joint holder in a holding. A joint holder is a person making the major decisions regarding resource use and exercising management control over the agricultural holding operations, in conjunction with another person (Numbers of Holdings under Women and Men Co-Ownership).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5b2de91c-ff41-4dd3-81d8-f94d12948477',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'af8915e6-281d-41b5-af8b-e210de56cdc5',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOGENDER3',
          'format' => NULL,
          'safe_value' => 'INDFAOGENDER3',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6948,
          'revision_id' => 6948,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449699289,
          'changed' => 1449699289,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Global rank of restricted Civil Liberties',
    'description' => '<p>Global ranking of the Restricted Civil Liberties index</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5bc04d44-c4b6-484f-9eb8-7aa9e99f2120',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD5',
          'format' => NULL,
          'safe_value' => 'INDOECD5',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7000,
          'revision_id' => 7000,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449705065,
          'changed' => 1449705065,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Number of agricultural holdings operated as others',
    'description' => '<p>Number of agricultural holdings under other form of tenure (different from ownership and tenancy) in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5c8253e9-e598-42f6-bf47-2f6d27d50c7b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOACI5',
          'format' => NULL,
          'safe_value' => 'INDFAOACI5',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6933,
          'revision_id' => 6933,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449705399,
          'changed' => 1449705399,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Number of agricultural holdings operated as Owner',
    'description' => '<p>Number of agricultural holdings under ownership in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '606e83ca-c86b-4c7d-a209-dab2b3f6b4e8',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOACI3',
          'format' => NULL,
          'safe_value' => 'INDFAOACI3',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6926,
          'revision_id' => 6926,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449705452,
          'changed' => 1449705452,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Social Institutions and Gender Index (SIGI) Database 2012 - OECD',
    'description' => '<p>Also known as the&nbsp;<em>Gender, Institutions and Development&nbsp;Database 2012 - OECD</em>, the SIGI dataset&nbsp;address the<em>&nbsp;de jure</em>&nbsp;and&nbsp;<em>de facto</em>&nbsp;situations of discriminatory social institutions across five sub-indices: d<em>iscriminatory family code</em>, r<em>estricted physical integrity</em>, s<em>on bias</em>, r<em>estricted resources</em> <em>and assets,</em>&nbsp;and<em>&nbsp;restricted civil liberties</em>. The SIGI index is computed as an unweighted average of&nbsp;the score for all five sub-indices.&nbsp;The 2012 verson of this&nbsp;dataset contains data for 121 countries.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '60861559-fc4d-4704-8407-b9886bad3448',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'DATOECD2',
          'format' => NULL,
          'safe_value' => 'DATOECD2',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => 'bdc94490-a786-481a-ad33-2aa84edbdfba',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6904,
          'revision_id' => 6904,
          'language' => 'und',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456851036,
          'changed' => 1456851036,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Restricted Civil Liberties',
    'description' => '<p>This indicator is a component of the SIGI - Social Institutions and Gender Index&nbsp; captures discriminatory laws and practices that restrict women’s access to public space, their political voice and their participation in all aspects of public life. This includes a lack of freedom of movement, the inability to vote or run for election, and negative attitudes toward women as public figures or as leaders. This sub-index highlights the importance of women’s participation in community actions and public decision making for a range of development outcomes such as governance, health and education.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6651f535-15eb-4428-a9d0-2feaae22f44d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD4',
          'format' => NULL,
          'safe_value' => 'INDOECD4',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6999,
          'revision_id' => 6999,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449702293,
          'changed' => 1449702293,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Prevalence of undernourishment',
    'description' => '<p>The Prevalence of Undernourishment expresses the probability that a randomly selected individual from the population consumes an amount of calories that is insufficient to cover her/his energy requirement for an active and healthy life. The indicator is computed by comparing a probability distribution of habitual daily Dietary Energy Consumption with a threshold level called the Minimum Dietary Energy Requirement. Both are based on the notion of an average individual in the reference population. This is the traditional FAO hunger indicator, adopted as official Millennium Development Goal indicator for Goal 1, Target 1.9. More details on the methodology for computing the Prevalence of undernourishment are in Annex 2 of the State of Food Insecurity in the World 2013 Report.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '678054c7-3b0a-40b9-be00-8419fbf5b1ca',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '704ff095-fce6-4e1d-9c24-4ca9ddd59bdf',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOFSEC4',
          'format' => NULL,
          'safe_value' => 'INDFAOFSEC4',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6943,
          'revision_id' => 6943,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449698976,
          'changed' => 1449698976,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Shares in Number Operated under more than One Form of Tenure',
    'description' => '<p>Share (%) of the total number of agricultural holdings operated under more than one form of tenure, in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '68f000f9-3ca7-4a8f-9dd2-39fe25a92f51',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOACI17',
          'format' => NULL,
          'safe_value' => 'INDFAOACI17',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6924,
          'revision_id' => 6924,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449688453,
          'changed' => 1449688453,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Women holders',
    'description' => '<p>The agricultural holder is the civil or juridical person who makes the major decisions regarding resource use and exercises management control over the agricultural holding. This indicator counts the number of women holders for agricultural holding in a given country. It can be compared with the Total Number of Holders.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6b27e26d-12ab-4d78-bae7-a632ed142456',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'af8915e6-281d-41b5-af8b-e210de56cdc5',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOGENDER2',
          'format' => NULL,
          'safe_value' => 'INDFAOGENDER2',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6946,
          'revision_id' => 6946,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449699151,
          'changed' => 1449699151,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Food Security indicators - FAO',
    'description' => '<p>This dataset contains indicators on the&nbsp;level&nbsp;of food security in several countries&nbsp;as provided by FAO.</p>
',
    'format' => 'filtered_html',
    'weight' => 12,
    'uuid' => '704ff095-fce6-4e1d-9c24-4ca9ddd59bdf',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'DATFAOFSEC0',
          'format' => NULL,
          'safe_value' => 'DATFAOFSEC0',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '11005528-e13b-45b2-814a-5bb54c84bdfe',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6918,
          'revision_id' => 6918,
          'language' => 'und',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456853478,
          'changed' => 1456853478,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Global Rank of Restricted Resources and Entitlements',
    'description' => '<p>Global Rank of Restricted Resources and Entitlements index.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '748a7531-cff9-4d27-a89a-a02160a8f9c9',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '80f9dae9-1dcf-42f2-ac65-9e3ce0738f1d',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD7',
          'format' => NULL,
          'safe_value' => 'INDOECD7',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7312,
          'revision_id' => 7312,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1455126246,
          'changed' => 1455126246,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Global Hunger Index (GHI) 2013 - IFPRI',
    'description' => '<p>This&nbsp;dataset contains the data used to calculate&nbsp;the Global Hunger Index Scores for the years&nbsp;1990, 1995, 2000, 2005, and 2013 by IFPRI for 130 countries.</p>
',
    'format' => 'filtered_html',
    'weight' => 11,
    'uuid' => '7880a96d-0de1-44bb-9f6b-2a5e480d0b4e',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'DATIFPRI1',
          'format' => NULL,
          'safe_value' => 'DATIFPRI1',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '81974451-d79e-478b-ae6f-059b4defd11c',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6915,
          'revision_id' => 6915,
          'language' => 'und',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456853346,
          'changed' => 1456853346,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Global Hunger Index (GHI) 2012 - IFPRI',
    'description' => '<p>This&nbsp;dataset contains the data used to&nbsp;calculate&nbsp;the Global Hunger Index Scores&nbsp;for the years 1990, 1996, 2001, and 2012 by IFPRI.</p>
',
    'format' => 'filtered_html',
    'weight' => 10,
    'uuid' => '7afef5d8-54ee-41fd-8012-e40517bbb362',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'DATIFPRI0',
          'format' => NULL,
          'safe_value' => 'DATIFPRI0',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '81974451-d79e-478b-ae6f-059b4defd11c',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6914,
          'revision_id' => 6914,
          'language' => 'und',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456853399,
          'changed' => 1456853399,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Unemployment - Youth Female',
    'description' => '<p>Youth unemployment refers to the share of the labor force ages 15-24 without work but available for and seeking employment.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '7e7feb37-6644-4e87-a821-1ab9eeec2996',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '08313495-2fcc-450f-990c-95139099d968',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB22',
          'format' => NULL,
          'safe_value' => 'INDWB22',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7011,
          'revision_id' => 7011,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449702984,
          'changed' => 1449702984,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Population -Total',
    'description' => '<p>Total population is based on the de facto definition of population, which counts all residents regardless of legal status or citizenship--except for refugees not permanently settled in the country of asylum, who are generally considered part of the population of their country of origin.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '7eee5c13-8498-44d6-91bd-0164cd6fa59c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '573e86b6-632a-475e-9471-1d2477ac0a4f',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB5',
          'format' => NULL,
          'safe_value' => 'INDWB5',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7030,
          'revision_id' => 7030,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449703819,
          'changed' => 1449703819,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Global ranking in Discriminator Family Code',
    'description' => '<p>Global ranking for the Discriminatory Family Code Index.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '7feab9f2-239f-473e-83ad-b5caea6ed382',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD3',
          'format' => NULL,
          'safe_value' => 'INDOECD3',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6994,
          'revision_id' => 6994,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449702049,
          'changed' => 1449702049,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Social Institutions and Gender Index (SIGI) Database 2009 - OECD',
    'description' => '<p>Also known as the&nbsp;<em>Gender, Institutions and Development&nbsp;Database 2009 - OECD</em>, the SIGI dataset&nbsp;address the <em>de jure</em> and <em>de facto</em> situations of discriminatory social institutions across five sub-indices: <em>discriminatory family code</em>, <em>restricted physical integrity</em>, <em>son bias</em>,<em> restricted resources and assets</em> and <em>restricted civil liberties</em>. The SIGI index is computed as an unwighted average of the score for all the five sub-indices. The 2009 verson of this&nbsp;dataset contains data for 102 non-OECD countries.</p>
',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '80f9dae9-1dcf-42f2-ac65-9e3ce0738f1d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'DATOECD1',
          'format' => NULL,
          'safe_value' => 'DATOECD1',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => 'bdc94490-a786-481a-ad33-2aa84edbdfba',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6903,
          'revision_id' => 6903,
          'language' => 'und',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456851076,
          'changed' => 1456851076,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Social Institutions and Gender Index (SIGI)',
    'description' => '<p>The SIGI is built on 12 innovative indicators on social institutions, which are grouped into 5 categories / subindexes: Family Code, Physical Integrity, Son Preference, Civil Liberties and Ownership Rights. Each of the SIGI indicators is coded between 0, meaning no or very low inequality, and 1, indicating very high inequality.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '834d7411-d4c9-4dc4-a4b8-f5817b945ae4',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '80f9dae9-1dcf-42f2-ac65-9e3ce0738f1d',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD0',
          'format' => NULL,
          'safe_value' => 'INDOECD0',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6983,
          'revision_id' => 6983,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449701524,
          'changed' => 1449701524,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Global Ranking in Discriminatory Family Code',
    'description' => '<p>Global country&nbsp;ranking for the Discriminatory Family Code Index.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8559f8af-7949-4b26-b6b9-a40c3e6d78cd',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '80f9dae9-1dcf-42f2-ac65-9e3ce0738f1d',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD3',
          'format' => NULL,
          'safe_value' => 'INDOECD3',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6982,
          'revision_id' => 6982,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449701489,
          'changed' => 1449701489,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'HDI Rank',
    'description' => '<p>Position in the world\'s HDI - Human Devlopment Index ranking.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '89402526-a773-431f-8c37-3419ef6e8211',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '97367277-d0b0-411e-8989-3b53cdab1568',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDUNDP1',
          'format' => NULL,
          'safe_value' => 'INDUNDP1',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7006,
          'revision_id' => 7006,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449702614,
          'changed' => 1449702614,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Employees in Agriculture - Male (% of male employment)',
    'description' => '<p>Share (%) of male employees in agriculture with respect to the total male employment</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8da97b68-96bc-4b35-909f-2f55412bf71d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '08313495-2fcc-450f-990c-95139099d968',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB29',
          'format' => NULL,
          'safe_value' => 'INDWB29',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7016,
          'revision_id' => 7016,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449703235,
          'changed' => 1449703235,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Depth of the food deficit',
    'description' => '<p>The depth of the food deficit indicates how many calories would be needed to lift the undernourished from their status, everything else being constant. The average intensity of food deprivation of the undernourished, estimated as the difference between the average dietary energy requirement and the average dietary energy consumption of the undernourished population (food-deprived), is multiplied by the number of undernourished to provide an estimate of the total food deficit in the country, which is then normalized by the total population.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '905e7c98-d42c-4e03-a1f9-d03b831d5c16',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '704ff095-fce6-4e1d-9c24-4ca9ddd59bdf',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOFSEC6',
          'format' => NULL,
          'safe_value' => 'INDFAOFSEC6',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6944,
          'revision_id' => 6944,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449699032,
          'changed' => 1449699032,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Discriminatory Familiy Code - Inheritance Rights of Widows',
    'description' => '<p>This indicator is a sub-component of the Discriminatory Family Code Indicator and measures whether widows and widowers have equal inheritance rights. It ranges from 0 to 1 and the interpretation is as follows:<br />
0: The law guarantees the same inheritance rights to both widows and widowers.<br />
0.5: The law guarantees the same inheritance rights to both widows and widowers, but there are some customary, traditional or religious practices that discriminate against widows.<br />
1: The law does not guarantee the same inheritance rights to widows and widowers, or widows have no inheritance rights at all.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '924a4a24-1425-45b1-b35e-7df63466f468',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD10',
          'format' => NULL,
          'safe_value' => 'INDOECD10',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7003,
          'revision_id' => 7003,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449702474,
          'changed' => 1449702474,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Discriminatory Family Code',
    'description' => '<p>The indicator is a component of the SIGI - Social Institutions and Gender Index and captures social institutions that limit women’s decision-making power and undervalue their status in the household and the family. These formal and informal laws, social norms and practices co-exist in different types of legal systems including civil or common law, customary law, and religious laws and cover areas such as marriage, parental authority and inheritance. Women’s decision-making power and status determine both their ability to choose their own development pathways and the well-being of their families. It ranges from 0 (no discrimination between women and men in both the formal and the customary family code) to 1 (Women are discriminated with respect to men both by the formal and the customary family code).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '95c88853-ee7e-490e-bcbe-2de407e2ca60',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '80f9dae9-1dcf-42f2-ac65-9e3ce0738f1d',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD2',
          'format' => NULL,
          'safe_value' => 'INDOECD2',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6981,
          'revision_id' => 6981,
          'language' => 'und',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456862349,
          'changed' => 1456862349,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Global Hunger Index (GHI)',
    'description' => '<p>The Global Hunger Index (GHI) is calculated as the average of three indicators, the proportion of the population that is undernourished (Undernourishment), the proportion of underweight children under five years old (Child Underweight), and the proportion of children dying before age five (Child Mortality). The index ranks countries on a 100 point scale, with 0 being the best and 100 the worst.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '96716cae-93f7-4c0e-a958-e66e5a713070',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '7880a96d-0de1-44bb-9f6b-2a5e480d0b4e',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDIFPRI0',
          'format' => NULL,
          'safe_value' => 'INDIFPRI0',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6962,
          'revision_id' => 6962,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449699989,
          'changed' => 1449699989,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Human Development Index - UNDP',
    'description' => '<p>This&nbsp;dataset contains the Human Development Index (HDI) score and country rank, as provided by UNDP.</p>
',
    'format' => 'filtered_html',
    'weight' => 9,
    'uuid' => '97367277-d0b0-411e-8989-3b53cdab1568',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'DATUNDP0',
          'format' => NULL,
          'safe_value' => 'DATUNDP0',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => 'f5e48ffc-d1ea-4bb1-b40d-1e588e6d06b2',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6912,
          'revision_id' => 6912,
          'language' => 'und',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456852859,
          'changed' => 1456852859,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total Number of Forestry Deals',
    'description' => '<p>Total number of deals having as main object purposes related to Forestry, in a given country in a given year. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '98979864-6b4b-4ef6-896f-0811a46116a2',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDLM3',
          'format' => NULL,
          'safe_value' => 'INDLM3',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6979,
          'revision_id' => 6979,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449701232,
          'changed' => 1449701232,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Employees in Agriculture - Female (% of female employment)',
    'description' => '<p>Share (%) of female employees in agriculture with respect to the total of female employment</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '99476965-8878-4869-bb85-b1ebdf18d29d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '08313495-2fcc-450f-990c-95139099d968',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB28',
          'format' => NULL,
          'safe_value' => 'INDWB28',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7017,
          'revision_id' => 7017,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449703280,
          'changed' => 1449703280,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total Number of Deals of Unknown Topic',
    'description' => '<p>Total number of deals having as main object purposes related to an Unknown Topic, in a given country in a given year. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession. It can be compared to the Total Number of Deals.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9c18cf73-310c-4400-8895-91756fc9daa5',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDLM8',
          'format' => NULL,
          'safe_value' => 'INDLM8',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6980,
          'revision_id' => 6980,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449701281,
          'changed' => 1449701281,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Agricultural land',
    'description' => '<p>Agricultural Area&nbsp;(1\'000 Ha) is the land area mainly devoted to agriculture. It includes arable land, permanent crops, and permanent pasture,&nbsp;as defined by FAO.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9c5a09dc-81cb-4849-a81c-b52087f29c6c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'd9039fd5-e3dc-4883-88f8-363956b48f39',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOSTAT1',
          'format' => NULL,
          'safe_value' => 'INDFAOSTAT1',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6953,
          'revision_id' => 6953,
          'language' => 'und',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456860521,
          'changed' => 1456860521,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Global rank of restricted Civil Liberties',
    'description' => '<p>Global ranking for the Restricted Civil Liberties index.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9e344b45-d032-44be-818c-564452f2d019',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '80f9dae9-1dcf-42f2-ac65-9e3ce0738f1d',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD5',
          'format' => NULL,
          'safe_value' => 'INDOECD5',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6988,
          'revision_id' => 6988,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449705051,
          'changed' => 1449705051,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total Number of Concluded Deals',
    'description' => '<p>Total number of Concluded deals, in a gven country in a given year. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession. It can be compared to the Total Number of Deals.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9e5be23b-5fc0-41ed-a7ca-83728a2616b2',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDLM10',
          'format' => NULL,
          'safe_value' => 'INDLM10',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6971,
          'revision_id' => 6971,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449700435,
          'changed' => 1449700435,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Rural Population',
    'description' => '<p>Rural population refers to the share (%) of people living in rural areas as defined by national statistical offices. It is calculated as the ratio between Urban Population and Total Population.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a15cabf5-ca98-4d55-b055-fd4e79926d22',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'dc286b77-08c7-44f6-ba1d-4e465269101d',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB11',
          'format' => NULL,
          'safe_value' => 'INDWB11',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7034,
          'revision_id' => 7034,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449704033,
          'changed' => 1449704033,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total number of renewable energy deals',
    'description' => '<p>Total number of deals having as main object purposes related to Renewable Energy in a given country in a given year. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession. It can be compared to the Total Number of Deals.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a26eee5c-aa7f-4aad-bdf1-d7d0fa40e7b3',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDLM5',
          'format' => NULL,
          'safe_value' => 'INDLM5',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6965,
          'revision_id' => 6965,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449700164,
          'changed' => 1449700164,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Relative forest land',
    'description' => '<p>Share (%) of Forest Land with respect to the Total Land Area.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a441b507-c350-4414-9a25-b07924dd71c3',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'd9039fd5-e3dc-4883-88f8-363956b48f39',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOSTAT7',
          'format' => NULL,
          'safe_value' => 'INDFAOSTAT7',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6952,
          'revision_id' => 6952,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449699486,
          'changed' => 1449699486,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Restricted Resources and Entitlements',
    'description' => '<p>The indicator is a component of the SIGI - Social Institutions and Gender Index &nbsp;and measures whether women and men have equal and secure access to land use, control and ownership. The Restricted Resources and Entitlements - ranging from 0 (the law guarantees the same rights to own, use and control land to both women and men) to 1 (The law does not guarantee the same rights to own) is calculated considerig three dimensions:<br />
1) Women Access to Land: whether women and men have equal and secure access to land use, control and ownership.<br />
2) Women access to non-land assets: whether women and men have equal and secure access to non-land assets use, control and ownership.<br />
3) Access to financial services: whether women and men have equal access to financial services</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a50bc81c-2770-421f-a250-9dff2a0170bd',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD6',
          'format' => NULL,
          'safe_value' => 'INDOECD6',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6997,
          'revision_id' => 6997,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449702219,
          'changed' => 1449702219,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Shares in Number Operated as Tenant',
    'description' => '<p>Share (%) of the total number of agricultural holdings operated under tenancy, in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a5b775b6-239d-4132-9258-35cd6bffa59c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOACI10',
          'format' => NULL,
          'safe_value' => 'INDFAOACI10',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6920,
          'revision_id' => 6920,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449687993,
          'changed' => 1449687993,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total Hectares in Deals in Production',
    'description' => '<p>Total Area (ha) calculated as the sum of deals referring project in production state, in a gven country in a given year. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession.&nbsp; It can be compared to the Total Hectares in Deals.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a74b84b0-501e-4c2c-9a43-b66ba4b5bff4',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDLM15',
          'format' => NULL,
          'safe_value' => 'INDLM15',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6974,
          'revision_id' => 6974,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449700953,
          'changed' => 1449700953,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Global Hunger Index (GHI)',
    'description' => '<p>The Global Hunger Index (GHI) is calculated as the average of three indicators, the proportion of the population that is undernourished (Undernourishment), the proportion of underweight children under five years old (Child Underweight), and the proportion of children dying before age five (Child Mortality). The index ranks countries on a 100 point scale, with 0 being the best and 100 the worst.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a7615b59-7a5b-4e2c-b8fa-fda472aa705d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '7afef5d8-54ee-41fd-8012-e40517bbb362',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDIFPRI0',
          'format' => NULL,
          'safe_value' => 'INDIFPRI0',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6958,
          'revision_id' => 6958,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449699812,
          'changed' => 1449699812,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Restricted Resources and Entitlements',
    'description' => '<p>The indicator is a component of the SIGI - Social Institutions and Gender Index &nbsp;and measures whether women and men have equal and secure access to land use, control and ownership. The Restricted Resources and Entitlements - ranging from 0 (the law guarantees the same rights to own, use and control land to both women and men) to 1 (The law does not guarantee the same rights to own) is calculated considerig three dimensions:<br />
1) Women Access to Land: whether women and men have equal and secure access to land use, control and ownership.<br />
2) Women access to non-land assets: whether women and men have equal and secure access to non-land assets use, control and ownership.<br />
3) Access to financial services: whether women and men have equal access to financial services</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a7dbba69-7fc8-44ab-ae10-9571460ba074',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '80f9dae9-1dcf-42f2-ac65-9e3ce0738f1d',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD6',
          'format' => NULL,
          'safe_value' => 'INDOECD6',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6985,
          'revision_id' => 6985,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449701629,
          'changed' => 1449701629,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Child Underweight',
    'description' => '<p>The proportion of children younger than the age of five who are underweight (low weight for age reflecting wasting, stunted growth, or both), which is one indicator of child undernutrition. This indicator is also used to calculate the Global Hunger Index (GHI).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'aa11b39b-8950-46e5-b961-7a38a6a8e18b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '7afef5d8-54ee-41fd-8012-e40517bbb362',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDIFPRI3',
          'format' => NULL,
          'safe_value' => 'INDIFPRI3',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6957,
          'revision_id' => 6957,
          'language' => 'und',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1455123692,
          'changed' => 1455123692,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Shares in Area Operated as Others',
    'description' => '<p>Share (%) of the total area (ha) of agricultural holdings under other forms of tenure (different from ownership or tenency), in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ab292761-6228-40a6-a139-cdae070f1b81',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOACI14',
          'format' => NULL,
          'safe_value' => 'INDFAOACI14',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6935,
          'revision_id' => 6935,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449698250,
          'changed' => 1449698250,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Population - Aged 65 and above',
    'description' => '<p>Population ages 65 and above as a percentage of the total population. Population is based on the de facto definition of population, which counts all residents regardless of legal status or citizenship--except for refugees not permanently settled in the country of asylum, who are generally considered part of the population of the country of origin.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ade643fa-3925-4d0d-bbc1-cf4271ca87ce',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '573e86b6-632a-475e-9471-1d2477ac0a4f',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB10',
          'format' => NULL,
          'safe_value' => 'INDWB10',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7033,
          'revision_id' => 7033,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449703979,
          'changed' => 1449703979,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Land and Gender - FAO',
    'description' => '<p>The dataset contains indicators from the&nbsp;FAO Gender &amp; Land Rights Database.</p>
',
    'format' => 'filtered_html',
    'weight' => 13,
    'uuid' => 'af8915e6-281d-41b5-af8b-e210de56cdc5',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'DATFAOGENDER0',
          'format' => NULL,
          'safe_value' => 'DATFAOGENDER0',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '11005528-e13b-45b2-814a-5bb54c84bdfe',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6917,
          'revision_id' => 6917,
          'language' => 'und',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456853527,
          'changed' => 1456853527,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Large-Scale Land Acquisitions - Land Matrix',
    'description' => '<p>This dataset contains information provided by the Land Matrix&nbsp;on the size, nature, state and purpose of Large-Scale Land Aquisitions around the world.</p>
',
    'format' => 'filtered_html',
    'weight' => 16,
    'uuid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'DATLM0',
          'format' => NULL,
          'safe_value' => 'DATLM0',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '78d3bab6-e3af-4ce1-952c-b6e6901ae924',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6913,
          'revision_id' => 6913,
          'language' => 'und',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456853987,
          'changed' => 1456853987,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Literacy rate, adult total',
    'description' => '<p>Total Adult (15+) Literacy Rate (%) is the percentage of the population age 15 and above who can, with understanding, read and write a short, simple statement on their everyday life. Generally, "literacy" also encompasses "numeracy", the ability to make simple arithmetic calculations. This indicator is calculated by dividing the number of literates aged 15 years and over by the corresponding age group population and multiplying the result by 100.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b69dd9d7-2b49-4f2a-9cd7-acba416e7b29',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '507b3bec-ad6d-4d9d-971b-52bd053c55de',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB30',
          'format' => NULL,
          'safe_value' => 'INDWB30',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7007,
          'revision_id' => 7007,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449702714,
          'changed' => 1449702714,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Number of agricultural holdings operated as Tenant',
    'description' => '<p>Number of agricultural holdings operated under tenancy, in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b70c0517-f8d6-4884-864d-faa8e8ca75e0',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOACI4',
          'format' => NULL,
          'safe_value' => 'INDFAOACI4',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6922,
          'revision_id' => 6922,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449705417,
          'changed' => 1449705417,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Area Operated as Tenant',
    'description' => '<p>Area (ha) of agricultural holdings operated under tenancy, in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b7851149-c2c9-42f9-9411-a92f57d12031',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOACI7',
          'format' => NULL,
          'safe_value' => 'INDFAOACI7',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6931,
          'revision_id' => 6931,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449689557,
          'changed' => 1449689557,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Children in Employment - Male',
    'description' => '<p>Children in employment refer to children involved in economic activity for at least one hour in the reference week of the survey.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b8ff700a-86c6-47da-9ada-d5fa7fb62206',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '08313495-2fcc-450f-990c-95139099d968',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB26',
          'format' => NULL,
          'safe_value' => 'INDWB26',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7015,
          'revision_id' => 7015,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449703191,
          'changed' => 1449703191,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Social Institutions and Gender Index (SIGI)',
    'description' => '<p>The SIGI is built on 12 innovative indicators on social institutions, which are grouped into 5 categories / subindexes: Family Code, Physical Integrity, Son Preference, Civil Liberties and Ownership Rights. Each of the SIGI indicators is coded between 0, meaning no or very low inequality, and 1, indicating very high inequality.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b9dc7b83-b6dd-4cef-8c69-22d9ee8f6d18',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD0',
          'format' => NULL,
          'safe_value' => 'INDOECD0',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6995,
          'revision_id' => 6995,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449702104,
          'changed' => 1449702104,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Restricted Resources and Entitlements - Woman Access to Land',
    'description' => '<p>This indicator is a sub-component of the Restricted Resources and Entitlements Indicator and measures whether women and men have equal and secure access to land use, control and ownership. It ranges from 0 (equal access for women and men) to 1 (The law does not guarantee the same rights to own, use and control land to women and men, or women have no legal rights to own, use and control land).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bcb757a9-3730-4dde-9957-9c761faafdba',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '60861559-fc4d-4704-8407-b9886bad3448',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD11',
          'format' => NULL,
          'safe_value' => 'INDOECD11',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7004,
          'revision_id' => 7004,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449702518,
          'changed' => 1449702518,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Shares in Area Operated as Tenant',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bd2fa778-e626-4c07-a021-82dd4d387bdd',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOACI13',
          'format' => NULL,
          'safe_value' => 'INDFAOACI13',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6928,
          'revision_id' => 6928,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449688933,
          'changed' => 1449688933,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total Number of Industry Deals',
    'description' => '<p>Total number of deals having as main object purposes related to Industry, in a given country in a given year. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession. It can be compared to the Total Number of Deals.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bea006b5-70a3-4b4a-a91c-7870ec0137f2',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDLM4',
          'format' => NULL,
          'safe_value' => 'INDLM4',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6964,
          'revision_id' => 6964,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449700135,
          'changed' => 1449700135,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Arable Land',
    'description' => '<p>Arable land (1\'000 Ha) is the land under temporary agricultural crops (multiple-cropped areas are counted only once), temporary meadows for mowing or pasture, land under market and kitchen gardens and land temporarily fallow (less than five years). The abandoned land resulting from shifting cultivation is not included in this category. Data for "Arable land" are not meant to indicate the amount of land that is potentially cultivable.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c22781d9-f982-4f5f-974f-082bc0afe899',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'd9039fd5-e3dc-4883-88f8-363956b48f39',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOSTAT2',
          'format' => NULL,
          'safe_value' => 'INDFAOSTAT2',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6950,
          'revision_id' => 6950,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449699394,
          'changed' => 1449699394,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total Number of Deals',
    'description' => '<p>Total number of deals in a given country in a given year. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession. It can be compared to the Total Hectares in Deals.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c3f86d9d-e6cc-47ba-9798-135caf5214a1',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDLM0',
          'format' => NULL,
          'safe_value' => 'INDLM0',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6977,
          'revision_id' => 6977,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449701154,
          'changed' => 1449701154,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Agricultural Census - FAO',
    'description' => '<p>This dataset contains information from agricultural censuses&nbsp;conducted in different countries&nbsp;as&nbsp;provided by FAO.&nbsp;</p>
',
    'format' => 'filtered_html',
    'weight' => 15,
    'uuid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'DATFAOACI0',
          'format' => NULL,
          'safe_value' => 'DATFAOACI0',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '11005528-e13b-45b2-814a-5bb54c84bdfe',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6919,
          'revision_id' => 6919,
          'language' => 'und',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456853736,
          'changed' => 1456853736,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Population Growth',
    'description' => '<p>Population growth (annual %) is the exponential rate of growth of midyear population from year t-1 to t, expressed as a percentage.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c8cafe30-118b-4d07-b677-c7c9b566d52f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '573e86b6-632a-475e-9471-1d2477ac0a4f',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB7',
          'format' => NULL,
          'safe_value' => 'INDWB7',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7029,
          'revision_id' => 7029,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449703765,
          'changed' => 1449703765,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Shares in Area Operated as Owner',
    'description' => '<p>Share (%) of the total area (ha) of agricultural holdings under ownership, in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c8e79904-7382-4eb9-ae7b-a306d7953d0b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOACI12',
          'format' => NULL,
          'safe_value' => 'INDFAOACI12',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6927,
          'revision_id' => 6927,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449688873,
          'changed' => 1449688873,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'Undernourishment',
    'description' => '<p>The proportion of undernourished as a percentage of the population (reflecting the share of the population with insufficient calorie intake). This indicator is also used to calculate the Global Hunger Index (GHI).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c9ac6c79-94c2-44e8-813e-53fa154c310b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '7880a96d-0de1-44bb-9f6b-2a5e480d0b4e',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'Undernourishment',
          'format' => NULL,
          'safe_value' => 'Undernourishment',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6960,
          'revision_id' => 6960,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449699897,
          'changed' => 1449699897,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Discriminatory Family Code - Inheritance Rights of Women',
    'description' => '<p>This indicator was a sub-component of the Discriminatory Family Code Index in the Gender Institutions and Development Database [link to: http://www.oecd.org/dev/poverty/genderinstitutionsanddevelopmentdatabase.htm] in the 2009 edition. It ranges from 0 (same inheritance rights to both Women and men) to 1 (The law does not guarantee the same inheritance rights to widows and widowers, or widows have no inheritance rights at all). In the 2012 edition of the same database made by OECD, this index was splitted into two separated sub-component:<br />
1) Discriminatory Familiy Code - Inheritance Rights of Widows<br />
2) Discriminatory Familiy Code - Inheritance Rights of Daughters</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd280dd0f-9ef3-4ea6-aa71-f17af22a3dc7',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '80f9dae9-1dcf-42f2-ac65-9e3ce0738f1d',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD8',
          'format' => NULL,
          'safe_value' => 'INDOECD8',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6989,
          'revision_id' => 6989,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449701822,
          'changed' => 1449701822,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Land area',
    'description' => '<p>Land area is the total area (1\'000 Ha) of the country excluding area under inland water bodies.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd300d02d-9000-4443-a436-df3393355a8b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'd9039fd5-e3dc-4883-88f8-363956b48f39',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOSTAT4',
          'format' => NULL,
          'safe_value' => 'INDFAOSTAT4',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6954,
          'revision_id' => 6954,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449699554,
          'changed' => 1449699554,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Population - aged 0-14',
    'description' => '<p>Population, age 0-14 (% of total) is the population between the ages of 0 and 14 as a percentage of the total population.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd3809525-0a86-4a4e-969a-e890f766428b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '573e86b6-632a-475e-9471-1d2477ac0a4f',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB8',
          'format' => NULL,
          'safe_value' => 'INDWB8',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7031,
          'revision_id' => 7031,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449705575,
          'changed' => 1449705575,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Fertility Rate - Total (Births per Woman)',
    'description' => '<p>Total fertility rate represents the number of children that would be born to a woman if she were to live to the end of her childbearing years and bear children in accordance with current age-specific fertility rates.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd6dfc1e1-0515-45bd-8c3c-efaa520e0b44',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'dc286b77-08c7-44f6-ba1d-4e465269101d',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB19',
          'format' => NULL,
          'safe_value' => 'INDWB19',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7024,
          'revision_id' => 7024,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449703582,
          'changed' => 1449703582,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Discriminatory Familiy Code - Inheritance Rights of Daughters',
    'description' => '<p>This indicator is a sub-component of the Discriminatory Family Code Indicator and measures whether daughters and sons have equal inheritance rights. It ranges from 0 (same inheritance rights for both daughters and sons) to one (The law does not guarantee the same inheritance rights to daughters and sons, or daughters have no inheritance rights at all).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd7d57084-653b-4edd-ad0e-cccfcd782d55',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '80f9dae9-1dcf-42f2-ac65-9e3ce0738f1d',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD9',
          'format' => NULL,
          'safe_value' => 'INDOECD9',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6990,
          'revision_id' => 6990,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449701880,
          'changed' => 1449701880,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Land Use - FAO',
    'description' => '<p>This dataset contains indicators on various aspects of land use (e.g.<em>&nbsp;agricultural land; arable land; land use; etc.)</em>&nbsp;as provided by the Statistics Division of FAO.</p>
',
    'format' => 'filtered_html',
    'weight' => 14,
    'uuid' => 'd9039fd5-e3dc-4883-88f8-363956b48f39',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'DATFAOSTAT0',
          'format' => NULL,
          'safe_value' => 'DATFAOSTAT0',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '11005528-e13b-45b2-814a-5bb54c84bdfe',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6916,
          'revision_id' => 6916,
          'language' => 'und',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456853613,
          'changed' => 1456853613,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Agriculture - Value Added',
    'description' => '<p>Share (%) of Agricultural Value added with respect to the Total Value Added produced in a given country in a given year. Agriculture corresponds to ISIC divisions 1-5 and includes forestry, hunting, and fishing, as well as cultivation of crops and livestock production. Value added is the net output of a sector after adding up all outputs and subtracting intermediate inputs. It is calculated without making deductions for depreciation of fabricated assets or depletion and degradation of natural resources.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'dc272c22-a5e5-48b9-80b4-73c97c1624b2',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'de6a3ad0-3109-41b9-ac54-9cdbe305b097',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB1',
          'format' => NULL,
          'safe_value' => 'INDWB1',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7037,
          'revision_id' => 7037,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449704198,
          'changed' => 1449704198,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Poverty Indicators - World Bank',
    'description' => '<p>This dataset contains&nbsp;indicators on various dimensions of poverty (such as the poverty level at national, urban and rural poverty lines)&nbsp;as provided by the World Bank.</p>
',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => 'dc286b77-08c7-44f6-ba1d-4e465269101d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'DATWB3',
          'format' => NULL,
          'safe_value' => 'DATWB3',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '78e2ad5a-ed53-4bc5-aafe-2d39f19da353',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6908,
          'revision_id' => 6908,
          'language' => 'und',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456853164,
          'changed' => 1456853164,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Relative agricultural land',
    'description' => '<p>Share (%) of Agricultural Land with respect to the Total Land Area.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'de1f6210-2c59-4973-8fc1-9d6deea8061c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'd9039fd5-e3dc-4883-88f8-363956b48f39',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOSTAT5',
          'format' => NULL,
          'safe_value' => 'INDFAOSTAT5',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6955,
          'revision_id' => 6955,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449699607,
          'changed' => 1449699607,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Rural Development - World Bank',
    'description' => '<p>This dataset contains the country\'s surface area and value added in agriculture, as provided by the World Bank.</p>
',
    'format' => 'filtered_html',
    'weight' => 8,
    'uuid' => 'de6a3ad0-3109-41b9-ac54-9cdbe305b097',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'DATWB6',
          'format' => NULL,
          'safe_value' => 'DATWB6',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '78e2ad5a-ed53-4bc5-aafe-2d39f19da353',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6911,
          'revision_id' => 6911,
          'language' => 'und',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456853205,
          'changed' => 1456853205,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Poverty Gap at Nationl Poverty Line',
    'description' => '<p>Poverty gap at national poverty line is the mean shortfall from the poverty line (counting the nonpoor as having zero shortfall) as a percentage of the poverty line. This measure reflects the depth of poverty as well as its incidence.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'de984451-dbbd-4ecb-90c9-623ba57e0bf0',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'dc286b77-08c7-44f6-ba1d-4e465269101d',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB13',
          'format' => NULL,
          'safe_value' => 'INDWB13',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7022,
          'revision_id' => 7022,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449703499,
          'changed' => 1449703499,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total Area of Holdings',
    'description' => '<p>Total Area (Ha) of agricultural holdings in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'deaeac26-fea2-4683-a57a-67981616c63d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOACI2',
          'format' => NULL,
          'safe_value' => 'INDFAOACI2',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6925,
          'revision_id' => 6925,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449688824,
          'changed' => 1449688824,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'Population - Female',
    'description' => '<p>Population, female (% of total) is the percentage of the population that is female.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'df652058-cd73-46ce-9b41-231ec60bd111',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '573e86b6-632a-475e-9471-1d2477ac0a4f',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB6',
          'format' => NULL,
          'safe_value' => 'INDWB6',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7028,
          'revision_id' => 7028,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449703735,
          'changed' => 1449703735,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Child Underweight',
    'description' => '<p>The proportion of children younger than the age of five who are underweight (low weight for age reflecting wasting, stunted growth, or both), which is one indicator of child undernutrition. This indicator is also used to calculate the Global Hunger Index (GHI).</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'dfb02af0-b960-4ee3-a76b-e98839bc46a0',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '7880a96d-0de1-44bb-9f6b-2a5e480d0b4e',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDIFPRI3',
          'format' => NULL,
          'safe_value' => 'INDIFPRI3',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6961,
          'revision_id' => 6961,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449699940,
          'changed' => 1449699940,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Number of holdings under women and men co‐ownership',
    'description' => '<p>It is the total number of holdings jointly holded by women and men in a given country in a given year. It can be compared with the Total Number of Holdings and with the Number of Rural Households Headed by Women.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e33b1d56-226b-4664-a796-07288b7a1b77',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'af8915e6-281d-41b5-af8b-e210de56cdc5',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOGENDER1',
          'format' => NULL,
          'safe_value' => 'INDFAOGENDER1',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6947,
          'revision_id' => 6947,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449699233,
          'changed' => 1449699233,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Restricted Civil Liberties',
    'description' => '<p>This indicator is a component of the SIGI - Social Institutions and Gender Index&nbsp; captures discriminatory laws and practices that restrict women’s access to public space, their political voice and their participation in all aspects of public life. This includes a lack of freedom of movement, the inability to vote or run for election, and negative attitudes toward women as public figures or as leaders. This sub-index highlights the importance of women’s participation in community actions and public decision making for a range of development outcomes such as governance, health and education.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e5d62091-93ea-423a-b4ea-06d5cf4a4aaf',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '80f9dae9-1dcf-42f2-ac65-9e3ce0738f1d',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD4',
          'format' => NULL,
          'safe_value' => 'INDOECD4',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6987,
          'revision_id' => 6987,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449701708,
          'changed' => 1449701708,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Percentage of Population with Access to Sanitation Facilities',
    'description' => '<p>Share (%) of the total population with Access to Sanitation Facilities.&nbsp;Access to improved sanitation facilities refers to the percentage of the population with at least adequate access to excreta disposal facilities that can effectively prevent human, animal, and insect contact with excreta. Improved facilities range from simple but protected pit latrines to flush toilets with a sewerage connection. To be effective, facilities must be correctly constructed and properly maintained.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e8f6ec42-b9bd-4c7b-aa58-1e534c9b80c3',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '704ff095-fce6-4e1d-9c24-4ca9ddd59bdf',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOFSEC3',
          'format' => NULL,
          'safe_value' => 'INDFAOFSEC3',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6940,
          'revision_id' => 6940,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449698718,
          'changed' => 1449698718,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Global ranking in Social Institutions and Gender Index',
    'description' => '<p>Global ranking by country for the SIGI - Social Institutions and Gender Index</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ea341bd5-a627-4df7-a3eb-b82bcc50ed3d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '80f9dae9-1dcf-42f2-ac65-9e3ce0738f1d',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDOECD1',
          'format' => NULL,
          'safe_value' => 'INDOECD1',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6984,
          'revision_id' => 6984,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449701595,
          'changed' => 1449701595,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Poverty Gap at Urban Poverty Line',
    'description' => '<p>Poverty gap at urban poverty line is the mean shortfall from the poverty line (counting the nonpoor as having zero shortfall) as a percentage of the national urban poverty line. This measure reflects the depth of poverty as well as its incidence.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ef17fe9d-a53d-4586-9d0d-1a82201cfd70',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'dc286b77-08c7-44f6-ba1d-4e465269101d',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDWB15',
          'format' => NULL,
          'safe_value' => 'INDWB15',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7020,
          'revision_id' => 7020,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449703408,
          'changed' => 1449703408,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Life Expectancy - World Bank',
    'description' => '<p>This dataset contains indicators on&nbsp;life expectancy at birth for both males and females, as provided by the World Bank.</p>
',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => 'ef4b0f37-3295-4059-896f-8943f9e05f14',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'datasets',
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'DATWB2',
          'format' => NULL,
          'safe_value' => 'DATWB2',
        ),
      ),
    ),
    'field_orgref' => array(
      'und' => array(
        0 => array(
          'target_id' => '78e2ad5a-ed53-4bc5-aafe-2d39f19da353',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'und',
      'data' => array(
        'und' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6907,
          'revision_id' => 6907,
          'language' => 'und',
          'source' => '',
          'uid' => 7117,
          'status' => 1,
          'translate' => 0,
          'created' => 1456852971,
          'changed' => 1456852971,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Total Number of Deals of Other Topic',
    'description' => '<p>Total number of deals having as main object purposes related to other topic - that is different from deals intended for Agriculture (Total Number of Agriculture Deals), Industry (Total Number of Industry Deals), Conservation (Total Number of Conservation Deals), Renewable Energy (Total Number of Renewable Energy Deals), Forestry (Total Number of Forestry Deals), Tourism (Total Number of Tourism Deals) and Unknow (Total Number of Deals of Unknown Topic) in a given country in a given year. A "deal" is referred to as an intended, concluded or failed attempt to acquire at least 200 Ha of land through purchase, lease or concession.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f2a59eba-4bb1-4032-83cd-5af96c79e2cc',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'b628c90c-2e83-48cf-bed4-d68576cc920c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDLM7',
          'format' => NULL,
          'safe_value' => 'INDLM7',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6970,
          'revision_id' => 6970,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449700395,
          'changed' => 1449700395,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Number of agricultural holdings operated under more than One Form of Tenure',
    'description' => '<p>Number of agricultural holdings under more than one form of tenure in a given country in a given year.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f8137ca1-2dee-4add-b38b-15f4d4124330',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => 'c4cf50c0-982d-4be5-9b9e-3c9a889ccd2c',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOACI15',
          'format' => NULL,
          'safe_value' => 'INDFAOACI15',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6938,
          'revision_id' => 6938,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449705507,
          'changed' => 1449705507,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Percentage of Population with Access to Improved Drinking Water Sources',
    'description' => '<p>Share (%) of the total population with access to improved drinking water sources. Access to an improved water source refers to the percentage of the population with reasonable access to an adequate amount of water from an improved source, such as a household connection, public standpipe, borehole, protected well or spring, and rainwater collection. Unimproved sources include vendors, tanker trucks, and unprotected wells and springs. Reasonable access is defined as the availability of at least 20 liters a person a day from a source within one kilometer of the dwelling.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'fc8db238-545e-4d83-97f1-9ce42bde12eb',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'indicators',
    'field_dataset' => array(
      'und' => array(
        0 => array(
          'tid' => '704ff095-fce6-4e1d-9c24-4ca9ddd59bdf',
        ),
      ),
    ),
    'field_id' => array(
      'und' => array(
        0 => array(
          'value' => 'INDFAOFSEC2',
          'format' => NULL,
          'safe_value' => 'INDFAOFSEC2',
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6941,
          'revision_id' => 6941,
          'language' => 'en',
          'source' => '',
          'uid' => 8076,
          'status' => 1,
          'translate' => 0,
          'created' => 1449698797,
          'changed' => 1449698797,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
