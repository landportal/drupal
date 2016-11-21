<?php
/**
 * @file
 * odm_laws_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function odm_laws_importer_feeds_tamper_default() {

$export = array();

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-blank_source_1-copy';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'Blank source 1';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:22',
);
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Copy source value (get taxonomy values)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-blank_source_1-explode';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'Blank source 1';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 7;
$feeds_tamper->description = 'Explode (multiple values \';\' separated)	';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-blank_source_1-find_replace_multiple';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'Blank source 1';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'Investment',
      'target' => 'Land Use, Management & Investment',
    ),
    1 => array(
      'source' => 'Agricultural commodities processing and products',
      'target' => 'Land Use, Management & Investment',
    ),
    2 => array(
      'source' => 'Agricultural management systems and technologies',
      'target' => 'Land Use, Management & Investment',
    ),
    3 => array(
      'source' => 'Agricultural policy and administration',
      'target' => 'Land Use, Management & Investment',
    ),
    4 => array(
      'source' => 'Agriculture and fishing',
      'target' => 'Land Use, Management & Investment',
    ),
    5 => array(
      'source' => 'Agro-industrial production',
      'target' => 'Land Use, Management & Investment',
    ),
    6 => array(
      'source' => 'Biodiversity',
      'target' => 'Land Use, Management & Investment',
    ),
    7 => array(
      'source' => 'Biofuel crops',
      'target' => 'Land Use, Management & Investment',
    ),
    8 => array(
      'source' => 'Community fisheries',
      'target' => 'Land Use, Management & Investment',
    ),
    9 => array(
      'source' => 'Construction policy and regulation',
      'target' => 'Land Policy & Legislation',
    ),
    10 => array(
      'source' => 'Contract farming',
      'target' => 'Land Use, Management & Investment',
    ),
    11 => array(
      'source' => 'Development and assistance for land tenure and land titling',
      'target' => 'Access to Land & Tenure Security',
    ),
    12 => array(
      'source' => 'Electricity infrastructure',
      'target' => 'Land Use, Management & Investment',
    ),
    13 => array(
      'source' => 'Environment and natural resources',
      'target' => 'Land Use, Management & Investment',
    ),
    14 => array(
      'source' => 'Environment and natural resources policy and administration',
      'target' => 'Land Use, Management & Investment',
    ),
    15 => array(
      'source' => 'Environmental and biodiversity protection',
      'target' => 'Land Use, Management & Investment',
    ),
    16 => array(
      'source' => 'Ethnic minorities and indigenous people policy and rights',
      'target' => 'Land Policy & Legislation',
    ),
    17 => array(
      'source' => 'Expropriation',
      'target' => 'Access to Land & Tenure Security;Land Policy & Legislation',
    ),
    18 => array(
      'source' => 'Fertilizer',
      'target' => 'Land Use, Management & Investment',
    ),
    19 => array(
      'source' => 'Fisheries production',
      'target' => 'Land Use, Management & Investment',
    ),
    20 => array(
      'source' => 'Foreign investors',
      'target' => 'Land Use, Management & Investment',
    ),
    21 => array(
      'source' => 'Forest protection',
      'target' => 'Land Use, Management & Investment',
    ),
    22 => array(
      'source' => 'Ground water',
      'target' => 'Land Use, Management & Investment',
    ),
    23 => array(
      'source' => 'Infrastructure',
      'target' => 'Land Use, Management & Investment',
    ),
    24 => array(
      'source' => 'International laws and treaties',
      'target' => 'Land Policy & Legislation',
    ),
    25 => array(
      'source' => 'Irrigation and water management',
      'target' => 'Land Use, Management & Investment',
    ),
    26 => array(
      'source' => 'Land and housing rights and evictions',
      'target' => 'Access to Land & Tenure Security',
    ),
    27 => array(
      'source' => 'Land classifications',
      'target' => 'Land Use, Management & Investment',
    ),
    28 => array(
      'source' => 'Land policy and administration',
      'target' => 'Land Policy & Legislation',
    ),
    29 => array(
      'source' => 'Land sales and trades',
      'target' => 'Land Use, Management & Investment',
    ),
    30 => array(
      'source' => 'Land tenure and land titling',
      'target' => 'Access to Land & Tenure Security;Land Policy & Legislation',
    ),
    31 => array(
      'source' => 'Land transfers',
      'target' => 'Land Use, Management & Investment',
    ),
    32 => array(
      'source' => 'Laws and regulations',
      'target' => 'Land Policy & Legislation',
    ),
    33 => array(
      'source' => 'Legal framework',
      'target' => 'Land Policy & Legislation',
    ),
    34 => array(
      'source' => 'Maize corn',
      'target' => 'Land Use, Management & Investment',
    ),
    35 => array(
      'source' => 'Overview of policy and legal framework',
      'target' => 'Land Policy & Legislation',
    ),
    36 => array(
      'source' => 'Palm oil',
      'target' => 'Land Use, Management & Investment',
    ),
    37 => array(
      'source' => 'Pest management',
      'target' => 'Land Use, Management & Investment',
    ),
    38 => array(
      'source' => 'Private land',
      'target' => 'Access to Land & Tenure Security',
    ),
    39 => array(
      'source' => 'Public land lease',
      'target' => 'Access to Land & Tenure Security',
    ),
    40 => array(
      'source' => 'Rail',
      'target' => 'Land Use, Management & Investment',
    ),
    41 => array(
      'source' => 'Rice',
      'target' => 'Land Use, Management & Investment',
    ),
    42 => array(
      'source' => 'Rubber',
      'target' => 'Land Use, Management & Investment',
    ),
    43 => array(
      'source' => 'Small and medium scale farming',
      'target' => 'Land Use, Management & Investment',
    ),
    44 => array(
      'source' => 'Soil management',
      'target' => 'Land Use, Management & Investment',
    ),
    45 => array(
      'source' => 'System of government',
      'target' => 'Land Policy & Legislation',
    ),
    46 => array(
      'source' => 'Trade',
      'target' => 'Land Use, Management & Investment',
    ),
    47 => array(
      'source' => 'Tree plantation',
      'target' => 'Land Use, Management & Investment',
    ),
    48 => array(
      'source' => 'Urban administration and development',
      'target' => 'Land Use, Management & Investment',
    ),
    49 => array(
      'source' => 'Urban policy and administration',
      'target' => 'Land Policy & Legislation',
    ),
    50 => array(
      'source' => 'Water and sanitation policy and administration',
      'target' => 'Land Use, Management & Investment',
    ),
    51 => array(
      'source' => 'Water policy and administration',
      'target' => 'Land Use, Management & Investment',
    ),
    52 => array(
      'source' => 'Water resources',
      'target' => 'Land Use, Management & Investment',
    ),
    53 => array(
      'source' => 'Water rights',
      'target' => 'Land Use, Management & Investment',
    ),
    54 => array(
      'source' => 'Wild capture commercial fishing and natural fisheries',
      'target' => 'Land Use, Management & Investment',
    ),
  ),
);
$feeds_tamper->weight = 6;
$feeds_tamper->description = 'ODM taxonomy to LandVoc OA categories';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-blank_source_1-unique';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'Blank source 1';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 8;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-blank_source_2-copy';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'Blank source 2';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:22',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy source value (get taxonomy values)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-blank_source_2-explode';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'Blank source 2';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Explode (multiple values \';\' separated)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-blank_source_2-find_replace_multiple';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'Blank source 2';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'Gender',
      'target' => 'Land & Gender',
    ),
    1 => array(
      'source' => 'Food security',
      'target' => 'Land & Food Security',
    ),
    2 => array(
      'source' => 'Aid and development',
      'target' => 'Land Stakeholders & Institutions',
    ),
    3 => array(
      'source' => 'Alternative dispute resolution',
      'target' => 'Land Conflicts',
    ),
    4 => array(
      'source' => 'City profiles',
      'target' => 'Urban Tenure',
    ),
    5 => array(
      'source' => 'Civi society coalitions and cooperation',
      'target' => 'Land Stakeholders & Institutions',
    ),
    6 => array(
      'source' => 'Civil society',
      'target' => 'Land Stakeholders & Institutions',
    ),
    7 => array(
      'source' => 'Climate change',
      'target' => 'Land, Climate Change & Environment',
    ),
    8 => array(
      'source' => 'Communal land',
      'target' => 'Indigenous & Community Land Rights',
    ),
    9 => array(
      'source' => 'Community forest',
      'target' => 'Forest Tenure;Indigenous & Community Land Rights',
    ),
    10 => array(
      'source' => 'Deforestration drivers',
      'target' => 'Forest Tenure;Land, Climate Change & Environment',
    ),
    11 => array(
      'source' => 'Development and assistance for land tenure and land titling',
      'target' => 'Land Stakeholders & Institutions',
    ),
    12 => array(
      'source' => 'Disasters and emergency response',
      'target' => 'Land, Climate Change & Environment',
    ),
    13 => array(
      'source' => 'Environment and natural resources',
      'target' => 'Land, Climate Change & Environment',
    ),
    14 => array(
      'source' => 'Environment and natural resources policy and administration',
      'target' => 'Land, Climate Change & Environment',
    ),
    15 => array(
      'source' => 'Environmental and biodiversity protection',
      'target' => 'Land, Climate Change & Environment',
    ),
    16 => array(
      'source' => 'Environmental impact assessments',
      'target' => 'Land, Climate Change & Environment',
    ),
    17 => array(
      'source' => 'Ethnic minorities and indigenous people',
      'target' => 'Indigenous & Community Land Rights',
    ),
    18 => array(
      'source' => 'Ethnic minorities and indigenous people policy and rights',
      'target' => 'Indigenous & Community Land Rights',
    ),
    19 => array(
      'source' => 'Extractive industries',
      'target' => 'Commercial pressures on land',
    ),
    20 => array(
      'source' => 'Food and Agriculture Organization FAO',
      'target' => 'Land Stakeholders & Institutions',
    ),
    21 => array(
      'source' => 'Foreign investors',
      'target' => 'Commercial Pressures on Land',
    ),
    22 => array(
      'source' => 'Forest cover',
      'target' => 'Forest Tenure',
    ),
    23 => array(
      'source' => 'Forest industry',
      'target' => 'Forest Tenure',
    ),
    24 => array(
      'source' => 'Forest policy and administration',
      'target' => 'Forest Tenure',
    ),
    25 => array(
      'source' => 'Forest protection',
      'target' => 'Forest Tenure;Land, Climate Change & Environment',
    ),
    26 => array(
      'source' => 'Forests and forestry',
      'target' => 'Forest Tenure',
    ),
    27 => array(
      'source' => 'German aid',
      'target' => 'Land Stakeholders & Institutions',
    ),
    28 => array(
      'source' => 'Government',
      'target' => 'Land Stakeholders & Institutions',
    ),
    29 => array(
      'source' => 'Human rights associations',
      'target' => 'Land Stakeholders & Institutions',
    ),
    30 => array(
      'source' => 'Human rights NGOs',
      'target' => 'Land Stakeholders & Institutions',
    ),
    31 => array(
      'source' => 'Infrastructure',
      'target' => 'Urban Tenure',
    ),
    32 => array(
      'source' => 'Land transfers',
      'target' => 'Commercial Pressures on Land',
    ),
    33 => array(
      'source' => 'National government',
      'target' => 'Land Stakeholders & Institutions',
    ),
    34 => array(
      'source' => 'NGOs',
      'target' => 'Land Stakeholders & Institutions',
    ),
    35 => array(
      'source' => 'Non-timber forest products',
      'target' => 'Forest Tenure',
    ),
    36 => array(
      'source' => 'Protected areas',
      'target' => 'Land, Climate Change & Environment',
    ),
    37 => array(
      'source' => 'Protected forests',
      'target' => 'Forest Tenure;Land, Climate Change & Environment',
    ),
    38 => array(
      'source' => 'United Nations',
      'target' => 'Land Stakeholders & Institutions',
    ),
    39 => array(
      'source' => 'Urban administration and development',
      'target' => 'Urban Tenure',
    ),
    40 => array(
      'source' => 'Urban development trends',
      'target' => 'Urban Tenure',
    ),
    41 => array(
      'source' => 'Urban policy and administration',
      'target' => 'Urban Tenure',
    ),
    42 => array(
      'source' => 'World Bank',
      'target' => 'Land Stakeholders & Institutions',
    ),
  ),
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'ODM taxonomy to LandVoc themes';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-blank_source_2-unique';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'Blank source 2';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-blank_source_3-copy';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'Blank source 3';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:23',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-blank_source_3-find_replace_multiple';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'Blank source 3';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'Council of Ministers',
      'target' => 'COCM',
    ),
    1 => array(
      'source' => 'Office of the Council of Ministers',
      'target' => 'COCM',
    ),
    2 => array(
      'source' => 'The Office of the Council of Ministers',
      'target' => 'COCM',
    ),
    3 => array(
      'source' => 'The office of the Council of Ministers',
      'target' => 'COCM',
    ),
    4 => array(
      'source' => 'COCM',
      'target' => 'Cambodian Office of the Council of Ministers',
    ),
  ),
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Find replace multiple (Cambodian Office of the Council of Ministers)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-blank_source_4-copy';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'Blank source 4';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:23',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-blank_source_4-find_replace_multiple';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'Blank source 4';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'Council of Ministers',
      'target' => 'COCM',
    ),
    1 => array(
      'source' => 'Office of the Council of Ministers',
      'target' => 'COCM',
    ),
    2 => array(
      'source' => 'The Office of the Council of Ministers',
      'target' => 'COCM',
    ),
    3 => array(
      'source' => 'The office of the Council of Ministers',
      'target' => 'COCM',
    ),
    4 => array(
      'source' => 'COCM',
      'target' => 'Cambodian Office of the Council of Ministers',
    ),
  ),
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Find replace multiple (Cambodian Office of the Council of Ministers)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-jsonpath_parser_10-efq_finder';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'jsonpath_parser:10';
$feeds_tamper->plugin_id = 'efq_finder';
$feeds_tamper->settings = array(
  'update' => 'Update',
  'entity_type' => 'taxonomy_term',
  'bundle' => 'languages',
  'field' => 'field_language_code_iso_639_1',
  'column' => 'value',
  'property' => FALSE,
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Get the Entity TID from ISO 639-1 code	';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-jsonpath_parser_10-php';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'jsonpath_parser:10';
$feeds_tamper->plugin_id = 'php';
$feeds_tamper->settings = array(
  'php' => '// field could be an item or an array
if ($field != null) {
    if (is_array($field)){
       $terms = array();
       foreach ($field as $f) {
          $term = taxonomy_term_load($f);
          $name = $term->name;
          array_push($terms, $name);
       }
       return $terms;
    } else {
      $term = taxonomy_term_load($field);
      $name = $term->name;
      return $name;
    }
}',
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Get Term Name from Term ID (TID)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-jsonpath_parser_11-find_replace_multiple';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'jsonpath_parser:11';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'anukretsub-decree',
      'target' => 'Regulations',
    ),
    1 => array(
      'source' => 'chbablawkram',
      'target' => 'Legislation',
    ),
    2 => array(
      'source' => 'kech-sonyacontractagreement',
      'target' => 'Agreements & Contracts',
    ),
    3 => array(
      'source' => 'sarachorcircular',
      'target' => 'Regulations',
    ),
    4 => array(
      'source' => '',
      'target' => '',
    ),
  ),
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Find replace document type';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-jsonpath_parser_11-keyword_filter';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'jsonpath_parser:11';
$feeds_tamper->plugin_id = 'keyword_filter';
$feeds_tamper->settings = array(
  'words' => 'prakasjoint-prakasproclamation
sechkdei-chhun-damneoungnoticeannouncement
likhetletter
',
  'word_boundaries' => 0,
  'exact' => 1,
  'case_sensitive' => 0,
  'invert' => 1,
  'word_list' => array(
    0 => '/^prakasjoint\\-prakasproclamation$/ui',
    1 => '/^sechkdei\\-chhun\\-damneoungnoticeannouncement$/ui',
    2 => '/^likhetletter$/ui',
    3 => '/^$/ui',
  ),
  'regex' => TRUE,
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Not import some ODM resource types';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-jsonpath_parser_18-find_replace_multiple';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'jsonpath_parser:18';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'CC-BY-4.0',
      'target' => 'Creative Commons Attribution',
    ),
    1 => array(
      'source' => 'CC-BY-SA-4.0',
      'target' => 'Creative Commons Attribution-ShareAlike',
    ),
    2 => array(
      'source' => 'CC0-1.0',
      'target' => 'Creative Commons Zero (Public Domain)',
    ),
    3 => array(
      'source' => 'unspecified',
      'target' => '',
    ),
  ),
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Find replace multiple';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-jsonpath_parser_19-explode';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'jsonpath_parser:19';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ',',
  'limit' => '',
  'real_separator' => ',',
);
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Explode (multiple values \',\' separated)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-jsonpath_parser_19-find_replace_multiple';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'jsonpath_parser:19';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'kh',
      'target' => 'Cambodia',
    ),
    1 => array(
      'source' => 'vn',
      'target' => 'Vietnam',
    ),
    2 => array(
      'source' => 'la',
      'target' => 'Lao',
    ),
    3 => array(
      'source' => 'th',
      'target' => 'Thailand',
    ),
    4 => array(
      'source' => 'mm',
      'target' => 'Myanmar',
    ),
    5 => array(
      'source' => 'my',
      'target' => 'Malaysia',
    ),
    6 => array(
      'source' => 'id',
      'target' => 'Indonesia',
    ),
    7 => array(
      'source' => 'cn',
      'target' => 'China',
    ),
    8 => array(
      'source' => 'ph',
      'target' => 'Philippines',
    ),
    9 => array(
      'source' => 'sg',
      'target' => 'Singapore',
    ),
    10 => array(
      'source' => 'bn',
      'target' => 'Brunei Darussalam',
    ),
  ),
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Find replace multiple(from ISO2 code to Country names)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-jsonpath_parser_19-find_replace_multiple_regions';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'jsonpath_parser:19';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'asean',
      'target' => 'id,my,ph,sg,th,bn,kh,la,mm,vn',
    ),
    1 => array(
      'source' => 'lmc',
      'target' => 'kh,vn,la,th,mm',
    ),
    2 => array(
      'source' => 'gms',
      'target' => 'kh,vn,la,mm,cn',
    ),
    3 => array(
      'source' => 'lmb',
      'target' => 'kh,vn,la,th,mm',
    ),
    4 => array(
      'source' => 'global',
      'target' => 'Global',
    ),
  ),
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Find replace multiple (regions to countries ISO2 code)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-jsonpath_parser_19-unique';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'jsonpath_parser:19';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 6;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-jsonpath_parser_2-truncate_text';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'jsonpath_parser:2';
$feeds_tamper->plugin_id = 'truncate_text';
$feeds_tamper->settings = array(
  'num_char' => '255',
  'ellipses' => 1,
  'wordsafe' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Truncate';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-jsonpath_parser_6-explode';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'jsonpath_parser:6';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ',',
  'limit' => '',
  'real_separator' => ',',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Explode';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-jsonpath_parser_7-explode';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'jsonpath_parser:7';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ',',
  'limit' => '',
  'real_separator' => ',',
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Explode (multiple values \',\' separated)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-jsonpath_parser_7-find_replace_multiple';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'jsonpath_parser:7';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'Agricultural commodities processing and products',
      'target' => 'agricultural land management, farming systems',
    ),
    1 => array(
      'source' => 'Agricultural management systems and technologies',
      'target' => 'agricultural land management, farming systems',
    ),
    2 => array(
      'source' => 'Agricultural policy and administration',
      'target' => 'agricultural land management',
    ),
    3 => array(
      'source' => 'Agriculture',
      'target' => 'agriculture',
    ),
    4 => array(
      'source' => 'Agriculture and fishing',
      'target' => 'agriculture, fisheries',
    ),
    5 => array(
      'source' => 'Agro-industrial production',
      'target' => 'agricultural land management, farming systems',
    ),
    6 => array(
      'source' => 'Aid and development',
      'target' => 'development agencies',
    ),
    7 => array(
      'source' => 'Alternative dispute resolution',
      'target' => 'dispute resolution',
    ),
    8 => array(
      'source' => 'Anti-corruption',
      'target' => 'corruption',
    ),
    9 => array(
      'source' => 'Biodiversity',
      'target' => 'agricultural land management, agriculture',
    ),
    10 => array(
      'source' => 'Biofuel crops',
      'target' => 'agricultural land management, agriculture',
    ),
    11 => array(
      'source' => 'Censuses',
      'target' => 'land governance',
    ),
    12 => array(
      'source' => 'City profiles',
      'target' => 'urbanization',
    ),
    13 => array(
      'source' => 'Civil and political rights',
      'target' => 'land rights',
    ),
    14 => array(
      'source' => 'Climate change',
      'target' => 'climate change',
    ),
    15 => array(
      'source' => 'Communal land',
      'target' => 'communal lands',
    ),
    16 => array(
      'source' => 'Community fisheries',
      'target' => 'fisheries',
    ),
    17 => array(
      'source' => 'Community forest',
      'target' => 'community forestry',
    ),
    18 => array(
      'source' => 'Concessions',
      'target' => 'land concessions',
    ),
    19 => array(
      'source' => 'Construction policy and regulation',
      'target' => 'land policies, urban planning',
    ),
    20 => array(
      'source' => 'Contract farming',
      'target' => 'contract farming, farming systems',
    ),
    21 => array(
      'source' => 'Deforestration drivers',
      'target' => 'deforestation',
    ),
    22 => array(
      'source' => 'Development and assistance for land tenure and land titling',
      'target' => 'development agencies, capacity building, land tenure systems, continuum in land rights',
    ),
    23 => array(
      'source' => 'Development assistance',
      'target' => 'development agencies',
    ),
    24 => array(
      'source' => 'Disasters and emergency response',
      'target' => 'natural disasters',
    ),
    25 => array(
      'source' => 'Economic land concessions and plantations',
      'target' => 'land concessions',
    ),
    26 => array(
      'source' => 'Economic social and cultural rights',
      'target' => 'land rights',
    ),
    27 => array(
      'source' => 'Environment and natural resources',
      'target' => 'environment, natural resources management',
    ),
    28 => array(
      'source' => 'Environment and natural resources policy and administration',
      'target' => 'natural resources management, environment',
    ),
    29 => array(
      'source' => 'Environmental and biodiversity protection',
      'target' => 'environment, sustainable land management',
    ),
    30 => array(
      'source' => 'Environmental impact assessments',
      'target' => 'environment',
    ),
    31 => array(
      'source' => 'Ethnic minorities and indigenous people',
      'target' => 'indigenous peoples, local community',
    ),
    32 => array(
      'source' => 'Ethnic minorities and indigenous people policy and rights',
      'target' => 'indigenous land rights, indigenous peoples',
    ),
    33 => array(
      'source' => 'Expropriation',
      'target' => 'expropriation',
    ),
    34 => array(
      'source' => 'Extractive industries',
      'target' => 'extractive industries',
    ),
    35 => array(
      'source' => 'Fertilizer',
      'target' => 'agricultural land management, agriculture',
    ),
    36 => array(
      'source' => 'Fisheries production',
      'target' => 'fisheries, farming systems',
    ),
    37 => array(
      'source' => 'Fishing fisheries and aquaculture',
      'target' => 'fisheries, aquaculture',
    ),
    38 => array(
      'source' => 'Food and Agriculture Organization FAO',
      'target' => 'development agencies',
    ),
    39 => array(
      'source' => 'Food security',
      'target' => 'food security',
    ),
    40 => array(
      'source' => 'Foreign investors',
      'target' => 'land investments',
    ),
    41 => array(
      'source' => 'Forest cover',
      'target' => 'forest land, land cover',
    ),
    42 => array(
      'source' => 'Forest industry',
      'target' => 'forestry',
    ),
    43 => array(
      'source' => 'Forest policy and administration',
      'target' => 'forest policies',
    ),
    44 => array(
      'source' => 'Forest protection',
      'target' => 'forest conservation, forestry, sustainable land use, sustainable land managament',
    ),
    45 => array(
      'source' => 'Forests and forestry',
      'target' => 'forestry, forest land',
    ),
    46 => array(
      'source' => 'German aid',
      'target' => 'development agencies',
    ),
    47 => array(
      'source' => 'Ground water',
      'target' => 'water management',
    ),
    48 => array(
      'source' => 'Human rights associations',
      'target' => 'development agencies',
    ),
    49 => array(
      'source' => 'Infrastructure',
      'target' => 'land use planning',
    ),
    50 => array(
      'source' => 'Investment',
      'target' => 'land investments',
    ),
    51 => array(
      'source' => 'Irrigation and water management',
      'target' => 'water management',
    ),
    52 => array(
      'source' => 'Land',
      'target' => 'land',
    ),
    53 => array(
      'source' => 'Land classifications',
      'target' => 'land management',
    ),
    54 => array(
      'source' => 'Land sales and trades',
      'target' => 'land investments, land economics',
    ),
    55 => array(
      'source' => 'Land tenure and land titling',
      'target' => 'land tenure systems, title deed',
    ),
    56 => array(
      'source' => 'Land transfers',
      'target' => 'land transfers',
    ),
    57 => array(
      'source' => 'Laws and regulations',
      'target' => 'land law, land policies',
    ),
    58 => array(
      'source' => 'Legal aid',
      'target' => 'legal empowerment',
    ),
    59 => array(
      'source' => 'Livelihood rights',
      'target' => 'land rights',
    ),
    60 => array(
      'source' => 'Maize corn',
      'target' => 'farming systems, agricultural land management',
    ),
    61 => array(
      'source' => 'Overview of policy and legal framework',
      'target' => 'land policies, land law',
    ),
    62 => array(
      'source' => 'Palm oil',
      'target' => 'palm oil industries',
    ),
    63 => array(
      'source' => 'Pest management',
      'target' => 'agricultural land management, farming systems',
    ),
    64 => array(
      'source' => 'Population',
      'target' => 'rural population, urban population',
    ),
    65 => array(
      'source' => 'Poverty policy and regulation',
      'target' => 'poverty',
    ),
    66 => array(
      'source' => 'poverty reduction',
      'target' => 'poverty',
    ),
    67 => array(
      'source' => 'Private land',
      'target' => 'private ownership',
    ),
    68 => array(
      'source' => 'Protected areas',
      'target' => 'protected areas',
    ),
    69 => array(
      'source' => 'Protected forests',
      'target' => 'forest conservation, environment',
    ),
    70 => array(
      'source' => 'Public land lease',
      'target' => 'leases, land tenure systems',
    ),
    71 => array(
      'source' => 'Rail',
      'target' => 'land use planning',
    ),
    72 => array(
      'source' => 'Rice',
      'target' => 'agricultural land management',
    ),
    73 => array(
      'source' => 'Rivers and lakes',
      'target' => 'water management, land cover',
    ),
    74 => array(
      'source' => 'Rubber',
      'target' => 'agriculture',
    ),
    75 => array(
      'source' => 'Small and medium scale farming',
      'target' => 'farming systems',
    ),
    76 => array(
      'source' => 'Social development',
      'target' => 'development',
    ),
    77 => array(
      'source' => 'Soil management',
      'target' => 'land management, sustainable land management',
    ),
    78 => array(
      'source' => 'Special economic zones',
      'target' => 'land economics',
    ),
    79 => array(
      'source' => 'State public land',
      'target' => 'state property, public ownership',
    ),
    80 => array(
      'source' => 'System of government',
      'target' => 'land governance',
    ),
    81 => array(
      'source' => 'The poor',
      'target' => 'poverty',
    ),
    82 => array(
      'source' => 'Trade',
      'target' => 'land economics',
    ),
    83 => array(
      'source' => 'Transport infrastructure and facilities',
      'target' => 'land use planning',
    ),
    84 => array(
      'source' => 'Tree plantation',
      'target' => 'agricultural land management, agriculture',
    ),
    85 => array(
      'source' => 'United Nations',
      'target' => 'development agencies',
    ),
    86 => array(
      'source' => 'Urban administration and development',
      'target' => 'urbanization, urban areas, urban population',
    ),
    87 => array(
      'source' => 'Urban development trends',
      'target' => 'urbanization, land development (urbanization)',
    ),
    88 => array(
      'source' => 'Urban policy and administration',
      'target' => 'urbanization, land policies',
    ),
    89 => array(
      'source' => 'Water and sanitation policy and administration',
      'target' => 'water management',
    ),
    90 => array(
      'source' => 'Water policy and administration',
      'target' => 'water management, water rights',
    ),
    91 => array(
      'source' => 'Water resources',
      'target' => 'water management, natural resources management',
    ),
    92 => array(
      'source' => 'Water rights',
      'target' => 'water rights',
    ),
    93 => array(
      'source' => 'Wild capture commercial fishing and natural fisheries',
      'target' => 'fisheries',
    ),
    94 => array(
      'source' => 'World Bank',
      'target' => 'development agencies',
    ),
  ),
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'ODM taxonomy to LandVoc Concepts';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-jsonpath_parser_7-unique';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'jsonpath_parser:7';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-jsonpath_parser_9-feeds_tamper_conditional';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'jsonpath_parser:9';
$feeds_tamper->plugin_id = 'feeds_tamper_conditional';
$feeds_tamper->settings = array(
  'conditional_field' => 'jsonpath_parser:9',
  'operator' => 'empty',
  'negate' => 1,
  'value' => '',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Conditional';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-jsonpath_parser_9-str_pad';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'jsonpath_parser:9';
$feeds_tamper->plugin_id = 'str_pad';
$feeds_tamper->settings = array(
  'pad_length' => 10,
  'pad_string' => '-12-31',
  'pad_type' => '1',
  'real_pad_string' => '-12-31',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Add the month (12) and day (31) at the end of the string';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-odm_author-default_value';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'ODM author';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'importer_odm',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "importer_odm"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_laws_importer-odm_url-rewrite';
$feeds_tamper->importer = 'odm_laws_importer';
$feeds_tamper->source = 'ODM url';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => 'https://data.opendevelopmentmekong.net/dataset/[jsonpath_parser:1]',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite';

$export[$feeds_tamper->id] = $feeds_tamper;

/******************/
    return $export;
}
