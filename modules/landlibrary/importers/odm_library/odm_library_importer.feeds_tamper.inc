<?php
/**
 * @file
 * odm_library_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function odm_library_importer_feeds_tamper_default() {

$export = array();

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-blank_source_1-copy';
$feeds_tamper->importer = 'odm_library_importer';
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
$feeds_tamper->id = 'odm_library_importer-blank_source_1-explode';
$feeds_tamper->importer = 'odm_library_importer';
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
$feeds_tamper->id = 'odm_library_importer-blank_source_1-find_replace_multiple';
$feeds_tamper->importer = 'odm_library_importer';
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
    55 => array(
      'source' => 'Law and judiciary',
      'target' => 'Land Policy & Legislation',
    ),
    56 => array(
      'source' => 'Law making process',
      'target' => 'Land Policy & Legislation',
    ),
    57 => array(
      'source' => 'Regulation of legal professions',
      'target' => 'Land Policy & Legislation',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 6;
$feeds_tamper->description = 'ODM taxonomy to LandVoc OA categories';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-blank_source_1-trim';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'Blank source 1';
$feeds_tamper->plugin_id = 'trim';
$feeds_tamper->settings = array(
  'mask' => '',
  'side' => 'trim',
);
$feeds_tamper->weight = 8;
$feeds_tamper->description = 'Trim';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-blank_source_1-truncate_text';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'Blank source 1';
$feeds_tamper->plugin_id = 'truncate_text';
$feeds_tamper->settings = array(
  'num_char' => '10',
  'ellipses' => 0,
  'wordsafe' => 0,
);
$feeds_tamper->weight = 10;
$feeds_tamper->description = 'Truncate';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-blank_source_1-unique';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'Blank source 1';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 9;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-blank_source_2-copy';
$feeds_tamper->importer = 'odm_library_importer';
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
$feeds_tamper->id = 'odm_library_importer-blank_source_2-explode';
$feeds_tamper->importer = 'odm_library_importer';
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
$feeds_tamper->id = 'odm_library_importer-blank_source_2-find_replace_multiple';
$feeds_tamper->importer = 'odm_library_importer';
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
      'target' => 'Land, Climate change & Environment',
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
      'target' => 'Forest Tenure;Land, Climate change & Environment',
    ),
    11 => array(
      'source' => 'Development and assistance for land tenure and land titling',
      'target' => 'Land Stakeholders & Institutions',
    ),
    12 => array(
      'source' => 'Disasters and emergency response',
      'target' => 'Land, Climate change & Environment',
    ),
    13 => array(
      'source' => 'Environment and natural resources',
      'target' => 'Land, Climate change & Environment',
    ),
    14 => array(
      'source' => 'Environment and natural resources policy and administration',
      'target' => 'Land, Climate change & Environment',
    ),
    15 => array(
      'source' => 'Environmental and biodiversity protection',
      'target' => 'Land, Climate change & Environment',
    ),
    16 => array(
      'source' => 'Environmental impact assessments',
      'target' => 'Land, Climate change & Environment',
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
      'target' => 'Land & Investments',
    ),
    20 => array(
      'source' => 'Food and Agriculture Organization FAO',
      'target' => 'Land Stakeholders & Institutions',
    ),
    21 => array(
      'source' => 'Foreign investors',
      'target' => 'Land & Investments',
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
      'target' => 'Forest Tenure;Land, Climate change & Environment',
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
      'target' => 'Land & Investments',
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
      'target' => 'Land, Climate change & Environment',
    ),
    37 => array(
      'source' => 'Protected forests',
      'target' => 'Forest Tenure;Land, Climate change & Environment',
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
    43 => array(
      'source' => 'Forest classifications',
      'target' => 'Forest Tenure',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'ODM taxonomy to LandVoc themes';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-blank_source_2-trim';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'Blank source 2';
$feeds_tamper->plugin_id = 'trim';
$feeds_tamper->settings = array(
  'mask' => '',
  'side' => 'trim',
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Trim';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-blank_source_2-unique';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'Blank source 2';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-blank_source_4-explode';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'Blank source 4';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => '%n',
  'limit' => '',
  'real_separator' => '
',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Explode';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-blank_source_4-explode_semi_colon';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'Blank source 4';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Explode (multiple values \';\' separated)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-blank_source_4-find_replace_multiple';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'Blank source 4';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'ADHOC',
      'target' => 'Cambodian Human Rights and Development Association',
    ),
    1 => array(
      'source' => 'Amnesty International',
      'target' => 'Amnesty International',
    ),
    2 => array(
      'source' => 'APRODEV',
      'target' => 'Act Alliance EU',
    ),
    3 => array(
      'source' => 'ARD, Inc.',
      'target' => 'ARD, Inc.',
    ),
    4 => array(
      'source' => 'Ash Center for Democratic Governance and Innovation',
      'target' => 'Ash Center for Democratic Governance and Innovation',
    ),
    5 => array(
      'source' => 'Ash Center for Democratic Governance and Innovation; UNDP',
      'target' => 'Ash Center for Democratic Governance and Innovation;United Nations Development Programme',
    ),
    6 => array(
      'source' => 'Asian Coalition for Agrarian Reform and Rural Development (ANGOC)',
      'target' => 'Asian NGO Coalition (ANGOC)',
    ),
    7 => array(
      'source' => 'Asian Development Bank',
      'target' => 'Asian Development Bank',
    ),
    8 => array(
      'source' => 'Bridges Across Borders',
      'target' => 'Bridges Across Borders',
    ),
    9 => array(
      'source' => 'CamAgra',
      'target' => 'CAMAGRA Investment Group Ltd',
    ),
    10 => array(
      'source' => 'Cambodia Center for Human Rights',
      'target' => 'Cambodian Center for Human Rights',
    ),
    11 => array(
      'source' => 'Cambodia Investment Board (CIB) of CDC',
      'target' => 'Cambodian Investment Board of the Council for the Development of Cambodia',
    ),
    12 => array(
      'source' => 'Cambodia. Ministry of Commerce',
      'target' => 'Cambodian Ministry of Commerce',
    ),
    13 => array(
      'source' => 'Cambodian Center for Human Rights',
      'target' => 'Cambodian Center for Human Rights',
    ),
    14 => array(
      'source' => 'Cambodian Human Rights Action Committee (CHRAC)',
      'target' => 'The Cambodian Human Rights Action Committee',
    ),
    15 => array(
      'source' => 'Cambodian Human Rights and Development Association (ADHOC)',
      'target' => 'Cambodian Human Rights and Development Association',
    ),
    16 => array(
      'source' => 'Cambodian Institute for Cooperation and Peace',
      'target' => 'Cambodian Institute for Cooperation and Peace',
    ),
    17 => array(
      'source' => 'Cambodian League for the Promotion and Defense of Human Rights (LICADHO)',
      'target' => 'Cambodian League for the Promotion and Defense of Human Rights',
    ),
    18 => array(
      'source' => 'Cambodian League for the Promotion and Defense of Human Rights (LICADHO); LICADHO Canada',
      'target' => 'Cambodian League for the Promotion and Defense of Human Rights',
    ),
    19 => array(
      'source' => 'Centre for Agricultural Policy (CAP), Vietnam Farmers’ Union, Vietnam Chamber of Commerce and Industry (VCCI), and Advancement of Community Empowerment and Partnership (ACEP)',
      'target' => 'Vietnam Farmers Union;Vietnam Chamber of Commerce and Industry',
    ),
    20 => array(
      'source' => 'CGIAR Program on Collective Action and Property Rights (CAPRi)',
      'target' => 'CGIAR System-wide Program on Property Rights and Collective Action',
    ),
    21 => array(
      'source' => 'CHRAC',
      'target' => 'Cambodian Human Rights Action Committee',
    ),
    22 => array(
      'source' => 'CIDSE-Laos, Plan International',
      'target' => 'Plan International CIDSE-Laos',
    ),
    23 => array(
      'source' => 'Columbia University School of International and Public Affairs',
      'target' => 'Columbia University',
    ),
    24 => array(
      'source' => 'Community Forest International',
      'target' => 'Community Forestry International',
    ),
    25 => array(
      'source' => 'Community Forestry International',
      'target' => 'Community Forestry International',
    ),
    26 => array(
      'source' => 'Community Forestry International (CFI)',
      'target' => 'Community Forestry International',
    ),
    27 => array(
      'source' => 'Community Forestry International / The East-West Center',
      'target' => 'Community Forestry International',
    ),
    28 => array(
      'source' => 'Deutsche Gesellschaft für Internationale Zusammenarbeit (GIZ) GmbH',
      'target' => 'GIZ',
    ),
    29 => array(
      'source' => 'Development Alternatives Inc,International Centre for Environmental Management',
      'target' => 'Development Alternatives International Inc;International Centre for Environmental Management',
    ),
    30 => array(
      'source' => 'EarthRights International',
      'target' => 'EarthRights International',
    ),
    31 => array(
      'source' => 'E-Investment Cambodia',
      'target' => 'E-Investment Cambodia',
    ),
    32 => array(
      'source' => 'FAO',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    33 => array(
      'source' => 'Focus on the Global South',
      'target' => 'Focus on the Global South',
    ),
    34 => array(
      'source' => 'Food and Agriculture Organization of the United Nations',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    35 => array(
      'source' => 'Food and Agriculture Organization of the United Nations (FAO)',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    36 => array(
      'source' => 'Food and Agriculture Organization of the United Nations (FAO); International Institute for Environment and Development',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO);International Institute for Environment and Development',
    ),
    37 => array(
      'source' => 'Food Security Working Group’s Land Core Group',
      'target' => 'Food Security Working Group',
    ),
    38 => array(
      'source' => 'Forest Trends',
      'target' => 'Forest Trends',
    ),
    39 => array(
      'source' => 'Forest Trends Association',
      'target' => 'Forest Trends',
    ),
    40 => array(
      'source' => 'Future Directions International',
      'target' => 'Future Directions International',
    ),
    41 => array(
      'source' => 'Genetic Resources Action International (GRAIN)',
      'target' => 'GRAIN',
    ),
    42 => array(
      'source' => 'Geoffrey Payne and Associates',
      'target' => 'Geoffrey Payne and Associates',
    ),
    43 => array(
      'source' => 'Germanwatch e.V.',
      'target' => 'Germanwatch e.V.',
    ),
    44 => array(
      'source' => 'Global Witness',
      'target' => 'Global Witness',
    ),
    45 => array(
      'source' => 'Heinrich Boll Foundation',
      'target' => 'Heinrich Böll Foundation',
    ),
    46 => array(
      'source' => 'Heinrich Boll Stiftung',
      'target' => 'Heinrich Böll Foundation',
    ),
    47 => array(
      'source' => 'HLH Agriculture (Cambodia) Co., Ltd',
      'target' => 'HLH Group Unlimited',
    ),
    48 => array(
      'source' => 'Institute of Environmental Systems Research',
      'target' => 'Osnabrück University',
    ),
    49 => array(
      'source' => 'International Federation for Human Rights (FIDH)',
      'target' => 'International Federation for Human Rights',
    ),
    50 => array(
      'source' => 'International Food Policy Research Institute (IFPRI)',
      'target' => 'International Food Policy Research Institute',
    ),
    51 => array(
      'source' => 'International Fund for Agricultural Development (IFAD)',
      'target' => 'IFAD',
    ),
    52 => array(
      'source' => 'International Fund for Agricultural Development',
      'target' => 'IFAD',
    ),
    53 => array(
      'source' => 'IFAD',
      'target' => 'International Fund for Agricultural Development (IFAD)',
    ),
    54 => array(
      'source' => 'International Land Coalition (ILC)',
      'target' => 'International Land Coalition (ILC)',
    ),
    55 => array(
      'source' => 'International Water Management Institute, and iDE Cambodia',
      'target' => 'International Water Management Institute',
    ),
    56 => array(
      'source' => 'International Water Management Institute, iDE Cambodia',
      'target' => 'iDe',
    ),
    57 => array(
      'source' => 'IUCN',
      'target' => 'IUCN',
    ),
    58 => array(
      'source' => 'Kepa',
      'target' => 'Kepa',
    ),
    59 => array(
      'source' => 'L.Y.P Group',
      'target' => 'L.Y.P. Group',
    ),
    60 => array(
      'source' => 'L.Y.P. Group',
      'target' => 'L.Y.P. Group',
    ),
    61 => array(
      'source' => 'Land Deal Politics Inititiative (LDPI)',
      'target' => 'Land Deal Politics Initiative (LDPI)',
    ),
    62 => array(
      'source' => 'landobservatory.org',
      'target' => 'Land Observatory',
    ),
    63 => array(
      'source' => 'Lao Embassy',
      'target' => 'Embassy of the Lao People\'s Democratic Republic in the United States of America',
    ),
    64 => array(
      'source' => 'Lao-German Land Policy Development Project',
      'target' => 'GIZ',
    ),
    65 => array(
      'source' => 'LICADHO',
      'target' => 'Cambodian League for the Promotion and Defense of Human Rights',
    ),
    66 => array(
      'source' => 'LICADHO Canada',
      'target' => 'Cambodian League for the Promotion and Defense of Human Rights',
    ),
    67 => array(
      'source' => 'Long Sreng.Com',
      'target' => 'Long Sreng International',
    ),
    68 => array(
      'source' => 'Mega First Corporation Berhad (MFCB)',
      'target' => 'Mega First Corporation Berhad',
    ),
    69 => array(
      'source' => 'Mekong Land Research Forum',
      'target' => 'Mekong Land Research Forum',
    ),
    70 => array(
      'source' => 'Mekong Region Land Governance',
      'target' => 'Mekong Region Land Governance',
    ),
    71 => array(
      'source' => 'Mekong Region Land Governance (MRLG)',
      'target' => 'Mekong Region Land Governance',
    ),
    72 => array(
      'source' => 'Ministry of Agriculture, Forestry and Fisheries (MAFF)',
      'target' => 'Cambodian Ministry of Agriculture, Forestry and Fisheries',
    ),
    73 => array(
      'source' => 'Ministry of Commerce (MoC)',
      'target' => 'Cambodian Ministry of Commerce',
    ),
    74 => array(
      'source' => 'Ministry of Environment (MoE)',
      'target' => 'Cambodia Ministry of Environment',
    ),
    75 => array(
      'source' => 'National Statistical Office, Ministry of Information and Communication Technology',
      'target' => 'Cambodian National Institute of Statistics',
    ),
    76 => array(
      'source' => 'New Proposals: Journal of Marxism and Interdisciplinary Inquiry.',
      'target' => 'University of British Colombia - Journal of Marxism and Interdisciplinary Inquiry.',
    ),
    77 => array(
      'source' => 'NGO Forum on Cambodia',
      'target' => 'The NGO Forum on Cambodia',
    ),
    78 => array(
      'source' => 'Office of High Commissioner for Human Rights',
      'target' => 'Office of the United Nations High Commissioner for Human Rights',
    ),
    79 => array(
      'source' => 'Office of the High Commissioner for Human Rights',
      'target' => 'Office of the United Nations High Commissioner for Human Rights',
    ),
    80 => array(
      'source' => 'Office of the United Nations High Commissioner for Human Rights',
      'target' => 'Office of the United Nations High Commissioner for Human Rights',
    ),
    81 => array(
      'source' => 'Office of the United Nations High Commissioner for Human Rights, Cambodia Country Office',
      'target' => 'Office of the United Nations High Commissioner for Human Rights',
    ),
    82 => array(
      'source' => 'Oxfam',
      'target' => 'Oxfam International',
    ),
    83 => array(
      'source' => 'Oxfam Australia',
      'target' => 'Oxfam Australia',
    ),
    84 => array(
      'source' => 'Oxfam Country office Vietnam',
      'target' => 'Oxfam Country office Vietnam',
    ),
    85 => array(
      'source' => 'Potsdam Institute for Climate Impact Research, Mekong River Commission',
      'target' => 'Potsdam Institute for Climate Impact Research',
    ),
    86 => array(
      'source' => 'Princess Maha Chakri Sirindhorn Anthropology Centre',
      'target' => 'Princess Maha Chakri Sirindhorn Anthropology Centre',
    ),
    87 => array(
      'source' => 'Rights and Resources Initiative',
      'target' => 'Rights and Resources Initiative',
    ),
    88 => array(
      'source' => 'Rivers Coalition in Cambodia',
      'target' => 'The NGO Forum on Cambodia',
    ),
    89 => array(
      'source' => 'Royal University of Phnom Penh (RUPP)',
      'target' => 'Royal University of Phnom Penh',
    ),
    90 => array(
      'source' => 'Sahmakum Teang Tnaut',
      'target' => 'Sahmakum Teang Tnaut',
    ),
    91 => array(
      'source' => 'Sahmakum Teang Tnaut (STT)',
      'target' => 'Sahmakum Teang Tnaut',
    ),
    92 => array(
      'source' => 'Sahrika.com',
      'target' => 'Sahrika',
    ),
    93 => array(
      'source' => 'SEAS – Gesellschaft für Südostasienwissenschaften / Society for South-East Asian Studies',
      'target' => 'Society for South-East Asian Studies',
    ),
    94 => array(
      'source' => 'SIT Graduate Institute',
      'target' => 'SIT Graduate Institute',
    ),
    95 => array(
      'source' => 'Sustainable Development Institute (SDI)',
      'target' => 'Sustainable Development Institute',
    ),
    96 => array(
      'source' => 'Sustainable Development Institute (SDI); Namati',
      'target' => 'Sustainable Development Institute',
    ),
    97 => array(
      'source' => 'Thai Society of Higher Education Institutes on Environment',
      'target' => 'Thai Society of Higher Education Institutes on Environment',
    ),
    98 => array(
      'source' => 'The Cambodia Daily',
      'target' => 'The Cambodia Daily',
    ),
    99 => array(
      'source' => 'The Center for Lao Studies',
      'target' => 'Center for Lao Studies',
    ),
    100 => array(
      'source' => 'The Council for the Development of Cambodia (CDC)',
      'target' => 'The Council for the Development of Cambodia',
    ),
    101 => array(
      'source' => 'The Land Core Group',
      'target' => 'International Institute of Social Studies',
    ),
    102 => array(
      'source' => 'The NGO Forum on Cambodia',
      'target' => 'The NGO Forum on Cambodia',
    ),
    103 => array(
      'source' => 'The NGO Forum on Cambodia (NGOF)',
      'target' => 'The NGO Forum on Cambodia',
    ),
    104 => array(
      'source' => 'The Phnom Penh Post',
      'target' => 'The Phnom Penh Post',
    ),
    105 => array(
      'source' => 'ttycorp.com',
      'target' => 'TTY Corporation Co., Ltd',
    ),
    106 => array(
      'source' => 'U.S. State Department',
      'target' => 'US Department of State',
    ),
    107 => array(
      'source' => 'UN Human Rights Council',
      'target' => 'Office of the United Nations High Commissioner for Human Rights',
    ),
    108 => array(
      'source' => 'UN-Habitat',
      'target' => 'United Nations Human Settlements Programme',
    ),
    109 => array(
      'source' => 'United Nations',
      'target' => 'United Nations',
    ),
    110 => array(
      'source' => 'United Nations (UN)',
      'target' => 'United Nations',
    ),
    111 => array(
      'source' => 'United Nations, Human Rights Council',
      'target' => 'Office of the United Nations High Commissioner for Human Rights',
    ),
    112 => array(
      'source' => 'University of Liege',
      'target' => 'University of Liege',
    ),
    113 => array(
      'source' => 'USAID',
      'target' => 'USAID',
    ),
    114 => array(
      'source' => 'WITNESS Forced Evictions',
      'target' => 'WITNESS Forced Evictions',
    ),
    115 => array(
      'source' => 'Working Group on Land Issues',
      'target' => 'Food Security Working Group',
    ),
    116 => array(
      'source' => 'World Bank',
      'target' => 'World Bank Group',
    ),
    117 => array(
      'source' => 'The World Bank',
      'target' => 'World Bank Group',
    ),
    118 => array(
      'source' => 'WorldFish',
      'target' => 'WorldFish',
    ),
    119 => array(
      'source' => 'Center for International Forestry Research; Probe International; Rights and Resources Initiative; York Centre for Asian Research',
      'target' => 'Center for International Forestry Research;Probe International;Rights and Resources Initiative;York Centre for Asian Research',
    ),
    120 => array(
      'source' => 'Inclusive Development International, Bank Information Center, 11.11.11, Urgewald and Accountability Counsel',
      'target' => 'Inclusive Development International;Bank Information Center;Accountability Counsel',
    ),
    121 => array(
      'source' => 'OHRE International Secretariat',
      'target' => 'Centre on Housing Rights and Evictions',
    ),
    122 => array(
      'source' => 'Center for International Forestry Research (CIFOR)',
      'target' => 'Center for International Forestry Research',
    ),
    123 => array(
      'source' => 'Food and Agriculture Organization (FAO)',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    124 => array(
      'source' => 'GIZ',
      'target' => 'GIZ',
    ),
    125 => array(
      'source' => 'Geoforum',
      'target' => 'Geoforum',
    ),
    126 => array(
      'source' => 'Geographica Bernensia',
      'target' => 'University of Bern',
    ),
    127 => array(
      'source' => 'Information Management and Strategic Planning Division - Lao National Agriculture and Forestry Research Institute',
      'target' => 'National Agriculture and Forestry Research Institute (Lao)',
    ),
    128 => array(
      'source' => 'Institut de hautes études internationales et du développement',
      'target' => 'The Graduate Institute of International and Development Studies',
    ),
    129 => array(
      'source' => 'International Fund for Agricultural Development	International',
      'target' => 'Fund for Agricultural Development (IFAD)',
    ),
    130 => array(
      'source' => 'Journal of Social Sciences and Humanities',
      'target' => 'Journal of Social Sciences and Humanities',
    ),
    131 => array(
      'source' => 'Land Core Group, Loka Ahlinn and Mekong Region Land Governance',
      'target' => 'Land Core Group;Loka Ahlinn;Mekong Region Land Governance',
    ),
    132 => array(
      'source' => 'Land Matrix Partnership;Land Matrix
',
      'target' => '',
    ),
    133 => array(
      'source' => '',
      'target' => '',
    ),
    134 => array(
      'source' => 'Mekong Region Land Governance (MRLG), Ministry of Natural Resources and Environmental Conservation - Myanmar (MOREC)',
      'target' => 'Mekong Region Land Governance;Ministry of Natural Resources and Environmental Conservation (Myanmar)',
    ),
    135 => array(
      'source' => 'Mekong Region Land Governance and the Ministry of Natural Resources and Environmental Conservation, Myanmar',
      'target' => 'Mekong Region Land Governance;Ministry of Natural Resources and Environmental Conservation (Myanmar)',
    ),
    136 => array(
      'source' => 'Mekong Regional Land Governance',
      'target' => 'Mekong Region Land Governance',
    ),
    137 => array(
      'source' => 'NGO Forum on Cambodia',
      'target' => 'The NGO Forum on Cambodia',
    ),
    138 => array(
      'source' => 'National Political Publishing House',
      'target' => 'National Political Publishing House of Vietnam',
    ),
    139 => array(
      'source' => 'Oxfarm Vietnam',
      'target' => 'Oxfam Country office Vietnam',
    ),
    140 => array(
      'source' => 'Routledge',
      'target' => 'Routledge',
    ),
    141 => array(
      'source' => 'The Land Core Group',
      'target' => 'Land Core Group',
    ),
    142 => array(
      'source' => 'UNDP',
      'target' => 'United Nations Development Programme',
    ),
    143 => array(
      'source' => 'សម្ព័ន្ធខ្មែរជំរឿន និងការពារសិទ្ធិមនុស្ស (លីកាដូ)',
      'target' => 'Cambodian League for the Promotion and Defense of Human Rights',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Find replace multiple (organizations)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-blank_source_4-rewrite';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'Blank source 4';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => '[jsonpath_parser:23]
[jsonpath_parser:24]',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-blank_source_4-trim';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'Blank source 4';
$feeds_tamper->plugin_id = 'trim';
$feeds_tamper->settings = array(
  'mask' => '',
  'side' => 'trim',
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Trim';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-blank_source_4-unique';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'Blank source 4';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-blank_source_5-default_value';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'Blank source 5';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'private://feeds/ODM-thumbnail.png',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set private path for thumbnail';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_10-efq_finder';
$feeds_tamper->importer = 'odm_library_importer';
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
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_10-find_replace_multiple';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:10';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'en',
      'target' => 'English',
    ),
    1 => array(
      'source' => 'es',
      'target' => 'Español',
    ),
    2 => array(
      'source' => 'fr',
      'target' => 'Français',
    ),
  ),
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Find replace multiple';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_10-keyword_filter';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:10';
$feeds_tamper->plugin_id = 'keyword_filter';
$feeds_tamper->settings = array(
  'words' => 'en',
  'word_boundaries' => 0,
  'exact' => 1,
  'case_sensitive' => 0,
  'invert' => 0,
  'word_list' => array(
    0 => '/^en$/ui',
  ),
  'regex' => TRUE,
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Keyword filter';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_10-php';
$feeds_tamper->importer = 'odm_library_importer';
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
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_10-unique';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:10';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_11-find_replace_multiple';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:11';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'advocacy_and_promotional_materials',
      'target' => 'Institutional & promotional materials',
    ),
    1 => array(
      'source' => 'analysis_discussion_papers_and_blogs',
      'target' => 'Policy Papers & Briefs',
    ),
    2 => array(
      'source' => 'books_and_book_chapters',
      'target' => 'Journal Articles & Books',
    ),
    3 => array(
      'source' => 'case_studies',
      'target' => 'Reports & Research',
    ),
    4 => array(
      'source' => 'issue_and_policy_briefs',
      'target' => 'Policy Papers & Briefs',
    ),
    5 => array(
      'source' => 'conference_workshops_proceedings_and_presentations',
      'target' => 'Conference Papers & Reports',
    ),
    6 => array(
      'source' => 'reports_journal_articles_and_research_papers',
      'target' => 'Reports & Research',
    ),
    7 => array(
      'source' => 'company_profiles',
      'target' => 'Institutional & promotional materials',
    ),
    8 => array(
      'source' => 'guidelines_manuals_handbooks',
      'target' => 'Manuals & Guidelines',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Find replace document type';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_11-keyword_filter';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:11';
$feeds_tamper->plugin_id = 'keyword_filter';
$feeds_tamper->settings = array(
  'words' => 'archived_web_content
profiles_people
profiles_organizations_and_projects
profiles_geographical_areas_and_sites',
  'word_boundaries' => 0,
  'exact' => 1,
  'case_sensitive' => 0,
  'invert' => 1,
  'word_list' => array(
    0 => '/^archived_web_content$/ui',
    1 => '/^profiles_people$/ui',
    2 => '/^profiles_organizations_and_projects$/ui',
    3 => '/^profiles_geographical_areas_and_sites$/ui',
  ),
  'regex' => TRUE,
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Not import some ODM resource types';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_12-rewrite';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:12';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => '[jsonpath_parser:12]
[jsonpath_parser:17]',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_13-explode';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:13';
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
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_15-find_replace_multiple';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:15';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'MRLG',
      'target' => 'Open Development Mekong',
    ),
    1 => array(
      'source' => 'Village Focus International',
      'target' => 'Open Development Mekong',
    ),
    2 => array(
      'source' => 'GIZ',
      'target' => 'Open Development Mekong',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Find replace multiple';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_18-find_replace_multiple';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:18';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'CC-BY-4.0',
      'target' => 'Creative Commons Attribution',
    ),
    1 => array(
      'source' => 'CC-BY-3.0-IGO',
      'target' => 'Creative Commons Attribution',
    ),
    2 => array(
      'source' => 'CC-BY-SA-4.0',
      'target' => 'Creative Commons Attribution-ShareAlike',
    ),
    3 => array(
      'source' => 'CC-BY-SA-3.0-IGO',
      'target' => 'Creative Commons Attribution-ShareAlike',
    ),
    4 => array(
      'source' => 'CC-BY-NC-4.0',
      'target' => 'Creative Commons Attribution-NonCommercial',
    ),
    5 => array(
      'source' => 'CC0-1.0',
      'target' => 'Creative Commons Zero (Public Domain)',
    ),
    6 => array(
      'source' => 'unspecified',
      'target' => '',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Find replace multiple';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_19-explode';
$feeds_tamper->importer = 'odm_library_importer';
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
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_19-find_replace_multiple';
$feeds_tamper->importer = 'odm_library_importer';
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
    11 => array(
      'source' => 'cx',
      'target' => 'Christmas Island',
    ),
    12 => array(
      'source' => 'tl',
      'target' => 'Timor-Leste',
    ),
    13 => array(
      'source' => 'cc',
      'target' => 'Cocos (Keeling) Islands',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Find replace multiple(from ISO2 code to Country names)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_19-find_replace_multiple_regions';
$feeds_tamper->importer = 'odm_library_importer';
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
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_19-unique';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:19';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 6;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_21-feeds_tamper_conditional';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:21';
$feeds_tamper->plugin_id = 'feeds_tamper_conditional';
$feeds_tamper->settings = array(
  'conditional_field' => 'jsonpath_parser:20',
  'operator' => 'empty',
  'negate' => 0,
  'value' => '',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Add only if there is not ISBN value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_25-copy';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:25';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'to',
  'source' => 'Blank source 4',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_25-explode';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:25';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Explode (multiple values \';\' separated)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_25-find_replace_multiple';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:25';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'ADHOC',
      'target' => 'Cambodian Human Rights and Development Association',
    ),
    1 => array(
      'source' => 'Amnesty International',
      'target' => 'Amnesty International',
    ),
    2 => array(
      'source' => 'APRODEV',
      'target' => 'Act Alliance EU',
    ),
    3 => array(
      'source' => 'ARD, Inc.',
      'target' => 'ARD, Inc.',
    ),
    4 => array(
      'source' => 'Ash Center for Democratic Governance and Innovation',
      'target' => 'Ash Center for Democratic Governance and Innovation',
    ),
    5 => array(
      'source' => 'Ash Center for Democratic Governance and Innovation; UNDP',
      'target' => 'Ash Center for Democratic Governance and Innovation;United Nations Development Programme',
    ),
    6 => array(
      'source' => 'Asian Coalition for Agrarian Reform and Rural Development (ANGOC)',
      'target' => 'Asian NGO Coalition (ANGOC)',
    ),
    7 => array(
      'source' => 'Asian Development Bank',
      'target' => 'Asian Development Bank',
    ),
    8 => array(
      'source' => 'Bridges Across Borders',
      'target' => 'Bridges Across Borders',
    ),
    9 => array(
      'source' => 'CamAgra',
      'target' => 'CAMAGRA Investment Group Ltd',
    ),
    10 => array(
      'source' => 'Cambodia Center for Human Rights',
      'target' => 'Cambodian Center for Human Rights',
    ),
    11 => array(
      'source' => 'Cambodia Investment Board (CIB) of CDC',
      'target' => 'Cambodian Investment Board of the Council for the Development of Cambodia',
    ),
    12 => array(
      'source' => 'Cambodia. Ministry of Commerce',
      'target' => 'Cambodian Ministry of Commerce',
    ),
    13 => array(
      'source' => 'Cambodian Center for Human Rights',
      'target' => 'Cambodian Center for Human Rights',
    ),
    14 => array(
      'source' => 'Cambodian Human Rights Action Committee (CHRAC)',
      'target' => 'The Cambodian Human Rights Action Committee',
    ),
    15 => array(
      'source' => 'Cambodian Human Rights and Development Association (ADHOC)',
      'target' => 'Cambodian Human Rights and Development Association',
    ),
    16 => array(
      'source' => 'Cambodian Institute for Cooperation and Peace',
      'target' => 'Cambodian Institute for Cooperation and Peace',
    ),
    17 => array(
      'source' => 'Cambodian League for the Promotion and Defense of Human Rights (LICADHO)',
      'target' => 'Cambodian League for the Promotion and Defense of Human Rights',
    ),
    18 => array(
      'source' => 'Cambodian League for the Promotion and Defense of Human Rights (LICADHO); LICADHO Canada',
      'target' => 'Cambodian League for the Promotion and Defense of Human Rights',
    ),
    19 => array(
      'source' => 'Centre for Agricultural Policy (CAP), Vietnam Farmers’ Union, Vietnam Chamber of Commerce and Industry (VCCI), and Advancement of Community Empowerment and Partnership (ACEP)',
      'target' => 'Vietnam Farmers Union;Vietnam Chamber of Commerce and Industry',
    ),
    20 => array(
      'source' => 'CGIAR Program on Collective Action and Property Rights (CAPRi)',
      'target' => 'CGIAR System-wide Program on Property Rights and Collective Action',
    ),
    21 => array(
      'source' => 'CHRAC',
      'target' => 'Cambodian Human Rights Action Committee',
    ),
    22 => array(
      'source' => 'CIDSE-Laos, Plan International',
      'target' => 'Plan International CIDSE-Laos',
    ),
    23 => array(
      'source' => 'Columbia University School of International and Public Affairs',
      'target' => 'Columbia University',
    ),
    24 => array(
      'source' => 'Community Forest International',
      'target' => 'Community Forestry International',
    ),
    25 => array(
      'source' => 'Community Forestry International',
      'target' => 'Community Forestry International',
    ),
    26 => array(
      'source' => 'Community Forestry International (CFI)',
      'target' => 'Community Forestry International',
    ),
    27 => array(
      'source' => 'Community Forestry International / The East-West Center',
      'target' => 'Community Forestry International',
    ),
    28 => array(
      'source' => 'Deutsche Gesellschaft für Internationale Zusammenarbeit (GIZ) GmbH',
      'target' => 'GIZ',
    ),
    29 => array(
      'source' => 'Development Alternatives Inc,International Centre for Environmental Management',
      'target' => 'Development Alternatives International Inc;International Centre for Environmental Management',
    ),
    30 => array(
      'source' => 'EarthRights International',
      'target' => 'EarthRights International',
    ),
    31 => array(
      'source' => 'E-Investment Cambodia',
      'target' => 'E-Investment Cambodia',
    ),
    32 => array(
      'source' => 'FAO',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    33 => array(
      'source' => 'Focus on the Global South',
      'target' => 'Focus on the Global South',
    ),
    34 => array(
      'source' => 'Food and Agriculture Organization of the United Nations',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    35 => array(
      'source' => 'Food and Agriculture Organization of the United Nations (FAO)',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    36 => array(
      'source' => 'Food and Agriculture Organization of the United Nations (FAO); International Institute for Environment and Development',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO);International Institute for Environment and Development',
    ),
    37 => array(
      'source' => 'Food Security Working Group’s Land Core Group',
      'target' => 'Food Security Working Group',
    ),
    38 => array(
      'source' => 'Forest Trends',
      'target' => 'Forest Trends',
    ),
    39 => array(
      'source' => 'Forest Trends Association',
      'target' => 'Forest Trends',
    ),
    40 => array(
      'source' => 'Future Directions International',
      'target' => 'Future Directions International',
    ),
    41 => array(
      'source' => 'Genetic Resources Action International (GRAIN)',
      'target' => 'GRAIN',
    ),
    42 => array(
      'source' => 'Geoffrey Payne and Associates',
      'target' => 'Geoffrey Payne and Associates',
    ),
    43 => array(
      'source' => 'Germanwatch e.V.',
      'target' => 'Germanwatch e.V.',
    ),
    44 => array(
      'source' => 'Global Witness',
      'target' => 'Global Witness',
    ),
    45 => array(
      'source' => 'Heinrich Boll Foundation',
      'target' => 'Heinrich Böll Foundation',
    ),
    46 => array(
      'source' => 'Heinrich Boll Stiftung',
      'target' => 'Heinrich Böll Foundation',
    ),
    47 => array(
      'source' => 'HLH Agriculture (Cambodia) Co., Ltd',
      'target' => 'HLH Group Unlimited',
    ),
    48 => array(
      'source' => 'Institute of Environmental Systems Research',
      'target' => 'Osnabrück University',
    ),
    49 => array(
      'source' => 'International Federation for Human Rights (FIDH)',
      'target' => 'International Federation for Human Rights',
    ),
    50 => array(
      'source' => 'International Food Policy Research Institute (IFPRI)',
      'target' => 'International Food Policy Research Institute',
    ),
    51 => array(
      'source' => 'International Fund for Agricultural Development (IFAD)',
      'target' => 'IFAD',
    ),
    52 => array(
      'source' => 'International Fund for Agricultural Development',
      'target' => 'IFAD',
    ),
    53 => array(
      'source' => 'IFAD',
      'target' => 'International Fund for Agricultural Development (IFAD)',
    ),
    54 => array(
      'source' => 'International Land Coalition (ILC)',
      'target' => 'International Land Coalition (ILC)',
    ),
    55 => array(
      'source' => 'International Water Management Institute, and iDE Cambodia',
      'target' => 'International Water Management Institute',
    ),
    56 => array(
      'source' => 'International Water Management Institute, iDE Cambodia',
      'target' => 'iDe',
    ),
    57 => array(
      'source' => 'IUCN',
      'target' => 'IUCN',
    ),
    58 => array(
      'source' => 'Kepa',
      'target' => 'Kepa',
    ),
    59 => array(
      'source' => 'L.Y.P Group',
      'target' => 'L.Y.P. Group',
    ),
    60 => array(
      'source' => 'L.Y.P. Group',
      'target' => 'L.Y.P. Group',
    ),
    61 => array(
      'source' => 'Land Deal Politics Inititiative (LDPI)',
      'target' => 'Land Deal Politics Initiative (LDPI)',
    ),
    62 => array(
      'source' => 'landobservatory.org',
      'target' => 'Land Observatory',
    ),
    63 => array(
      'source' => 'Lao Embassy',
      'target' => 'Embassy of the Lao People\'s Democratic Republic in the United States of America',
    ),
    64 => array(
      'source' => 'Lao-German Land Policy Development Project',
      'target' => 'GIZ',
    ),
    65 => array(
      'source' => 'LICADHO',
      'target' => 'Cambodian League for the Promotion and Defense of Human Rights',
    ),
    66 => array(
      'source' => 'LICADHO Canada',
      'target' => 'Cambodian League for the Promotion and Defense of Human Rights',
    ),
    67 => array(
      'source' => 'Long Sreng.Com',
      'target' => 'Long Sreng International',
    ),
    68 => array(
      'source' => 'Mega First Corporation Berhad (MFCB)',
      'target' => 'Mega First Corporation Berhad',
    ),
    69 => array(
      'source' => 'Mekong Land Research Forum',
      'target' => 'Mekong Land Research Forum',
    ),
    70 => array(
      'source' => 'Mekong Region Land Governance',
      'target' => 'Mekong Region Land Governance',
    ),
    71 => array(
      'source' => 'Mekong Region Land Governance (MRLG)',
      'target' => 'Mekong Region Land Governance',
    ),
    72 => array(
      'source' => 'Ministry of Agriculture, Forestry and Fisheries (MAFF)',
      'target' => 'Cambodian Ministry of Agriculture, Forestry and Fisheries',
    ),
    73 => array(
      'source' => 'Ministry of Commerce (MoC)',
      'target' => 'Cambodian Ministry of Commerce',
    ),
    74 => array(
      'source' => 'Ministry of Environment (MoE)',
      'target' => 'Cambodia Ministry of Environment',
    ),
    75 => array(
      'source' => 'National Statistical Office, Ministry of Information and Communication Technology',
      'target' => 'Cambodian National Institute of Statistics',
    ),
    76 => array(
      'source' => 'New Proposals: Journal of Marxism and Interdisciplinary Inquiry.',
      'target' => 'University of British Colombia - Journal of Marxism and Interdisciplinary Inquiry.',
    ),
    77 => array(
      'source' => 'NGO Forum on Cambodia',
      'target' => 'The NGO Forum on Cambodia',
    ),
    78 => array(
      'source' => 'Office of High Commissioner for Human Rights',
      'target' => 'Office of the United Nations High Commissioner for Human Rights',
    ),
    79 => array(
      'source' => 'Office of the High Commissioner for Human Rights',
      'target' => 'Office of the United Nations High Commissioner for Human Rights',
    ),
    80 => array(
      'source' => 'Office of the United Nations High Commissioner for Human Rights',
      'target' => 'Office of the United Nations High Commissioner for Human Rights',
    ),
    81 => array(
      'source' => 'Office of the United Nations High Commissioner for Human Rights, Cambodia Country Office',
      'target' => 'Office of the United Nations High Commissioner for Human Rights',
    ),
    82 => array(
      'source' => 'Oxfam',
      'target' => 'Oxfam International',
    ),
    83 => array(
      'source' => 'Oxfam Australia',
      'target' => 'Oxfam Australia',
    ),
    84 => array(
      'source' => 'Oxfam Country office Vietnam',
      'target' => 'Oxfam Country office Vietnam',
    ),
    85 => array(
      'source' => 'Potsdam Institute for Climate Impact Research, Mekong River Commission',
      'target' => 'Potsdam Institute for Climate Impact Research',
    ),
    86 => array(
      'source' => 'Princess Maha Chakri Sirindhorn Anthropology Centre',
      'target' => 'Princess Maha Chakri Sirindhorn Anthropology Centre',
    ),
    87 => array(
      'source' => 'Rights and Resources Initiative',
      'target' => 'Rights and Resources Initiative',
    ),
    88 => array(
      'source' => 'Rivers Coalition in Cambodia',
      'target' => 'The NGO Forum on Cambodia',
    ),
    89 => array(
      'source' => 'Royal University of Phnom Penh (RUPP)',
      'target' => 'Royal University of Phnom Penh',
    ),
    90 => array(
      'source' => 'Sahmakum Teang Tnaut',
      'target' => 'Sahmakum Teang Tnaut',
    ),
    91 => array(
      'source' => 'Sahmakum Teang Tnaut (STT)',
      'target' => 'Sahmakum Teang Tnaut',
    ),
    92 => array(
      'source' => 'Sahrika.com',
      'target' => 'Sahrika',
    ),
    93 => array(
      'source' => 'SEAS – Gesellschaft für Südostasienwissenschaften / Society for South-East Asian Studies',
      'target' => 'Society for South-East Asian Studies',
    ),
    94 => array(
      'source' => 'SIT Graduate Institute',
      'target' => 'SIT Graduate Institute',
    ),
    95 => array(
      'source' => 'Sustainable Development Institute (SDI)',
      'target' => 'Sustainable Development Institute',
    ),
    96 => array(
      'source' => 'Sustainable Development Institute (SDI); Namati',
      'target' => 'Sustainable Development Institute',
    ),
    97 => array(
      'source' => 'Thai Society of Higher Education Institutes on Environment',
      'target' => 'Thai Society of Higher Education Institutes on Environment',
    ),
    98 => array(
      'source' => 'The Cambodia Daily',
      'target' => 'The Cambodia Daily',
    ),
    99 => array(
      'source' => 'The Center for Lao Studies',
      'target' => 'Center for Lao Studies',
    ),
    100 => array(
      'source' => 'The Council for the Development of Cambodia (CDC)',
      'target' => 'The Council for the Development of Cambodia',
    ),
    101 => array(
      'source' => 'The Land Core Group',
      'target' => 'International Institute of Social Studies',
    ),
    102 => array(
      'source' => 'The NGO Forum on Cambodia',
      'target' => 'The NGO Forum on Cambodia',
    ),
    103 => array(
      'source' => 'The NGO Forum on Cambodia (NGOF)',
      'target' => 'The NGO Forum on Cambodia',
    ),
    104 => array(
      'source' => 'The Phnom Penh Post',
      'target' => 'The Phnom Penh Post',
    ),
    105 => array(
      'source' => 'ttycorp.com',
      'target' => 'TTY Corporation Co., Ltd',
    ),
    106 => array(
      'source' => 'U.S. State Department',
      'target' => 'US Department of State',
    ),
    107 => array(
      'source' => 'UN Human Rights Council',
      'target' => 'Office of the United Nations High Commissioner for Human Rights',
    ),
    108 => array(
      'source' => 'UN-Habitat',
      'target' => 'United Nations Human Settlements Programme',
    ),
    109 => array(
      'source' => 'United Nations',
      'target' => 'United Nations',
    ),
    110 => array(
      'source' => 'United Nations (UN)',
      'target' => 'United Nations',
    ),
    111 => array(
      'source' => 'United Nations, Human Rights Council',
      'target' => 'Office of the United Nations High Commissioner for Human Rights',
    ),
    112 => array(
      'source' => 'University of Liege',
      'target' => 'University of Liege',
    ),
    113 => array(
      'source' => 'USAID',
      'target' => 'USAID',
    ),
    114 => array(
      'source' => 'WITNESS Forced Evictions',
      'target' => 'WITNESS Forced Evictions',
    ),
    115 => array(
      'source' => 'Working Group on Land Issues',
      'target' => 'Food Security Working Group',
    ),
    116 => array(
      'source' => 'World Bank',
      'target' => 'World Bank Group',
    ),
    117 => array(
      'source' => 'The World Bank',
      'target' => 'World Bank Group',
    ),
    118 => array(
      'source' => 'WorldFish',
      'target' => 'WorldFish',
    ),
    119 => array(
      'source' => 'Center for International Forestry Research; Probe International; Rights and Resources Initiative; York Centre for Asian Research',
      'target' => 'Center for International Forestry Research;Probe International;Rights and Resources Initiative;York Centre for Asian Research',
    ),
    120 => array(
      'source' => 'Inclusive Development International, Bank Information Center, 11.11.11, Urgewald and Accountability Counsel',
      'target' => 'Inclusive Development International;Bank Information Center;Accountability Counsel',
    ),
    121 => array(
      'source' => 'OHRE International Secretariat',
      'target' => 'Centre on Housing Rights and Evictions',
    ),
    122 => array(
      'source' => 'Center for International Forestry Research (CIFOR)',
      'target' => 'Center for International Forestry Research',
    ),
    123 => array(
      'source' => 'Food and Agriculture Organization (FAO)',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    124 => array(
      'source' => 'GIZ',
      'target' => 'GIZ',
    ),
    125 => array(
      'source' => 'Geoforum',
      'target' => 'Geoforum',
    ),
    126 => array(
      'source' => 'Geographica Bernensia',
      'target' => 'University of Bern',
    ),
    127 => array(
      'source' => 'Information Management and Strategic Planning Division - Lao National Agriculture and Forestry Research Institute',
      'target' => 'National Agriculture and Forestry Research Institute (Lao)',
    ),
    128 => array(
      'source' => 'Institut de hautes études internationales et du développement',
      'target' => 'The Graduate Institute of International and Development Studies',
    ),
    129 => array(
      'source' => 'International Fund for Agricultural Development	International',
      'target' => 'Fund for Agricultural Development (IFAD)',
    ),
    130 => array(
      'source' => 'Journal of Social Sciences and Humanities',
      'target' => 'Journal of Social Sciences and Humanities',
    ),
    131 => array(
      'source' => 'Land Core Group, Loka Ahlinn and Mekong Region Land Governance',
      'target' => 'Land Core Group;Loka Ahlinn;Mekong Region Land Governance',
    ),
    132 => array(
      'source' => 'Land Matrix Partnership;Land Matrix
',
      'target' => '',
    ),
    133 => array(
      'source' => '',
      'target' => '',
    ),
    134 => array(
      'source' => 'Mekong Region Land Governance (MRLG), Ministry of Natural Resources and Environmental Conservation - Myanmar (MOREC)',
      'target' => 'Mekong Region Land Governance;Ministry of Natural Resources and Environmental Conservation (Myanmar)',
    ),
    135 => array(
      'source' => 'Mekong Region Land Governance and the Ministry of Natural Resources and Environmental Conservation, Myanmar',
      'target' => 'Mekong Region Land Governance;Ministry of Natural Resources and Environmental Conservation (Myanmar)',
    ),
    136 => array(
      'source' => 'Mekong Regional Land Governance',
      'target' => 'Mekong Region Land Governance',
    ),
    137 => array(
      'source' => 'NGO Forum on Cambodia',
      'target' => 'The NGO Forum on Cambodia',
    ),
    138 => array(
      'source' => 'National Political Publishing House',
      'target' => 'National Political Publishing House of Vietnam',
    ),
    139 => array(
      'source' => 'Oxfarm Vietnam',
      'target' => 'Oxfam Country office Vietnam',
    ),
    140 => array(
      'source' => 'Routledge',
      'target' => 'Routledge',
    ),
    141 => array(
      'source' => 'The Land Core Group',
      'target' => 'Land Core Group',
    ),
    142 => array(
      'source' => 'UNDP',
      'target' => 'United Nations Development Programme',
    ),
    143 => array(
      'source' => 'សម្ព័ន្ធខ្មែរជំរឿន និងការពារសិទ្ធិមនុស្ស (លីកាដូ)',
      'target' => 'Cambodian League for the Promotion and Defense of Human Rights',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Find replace multiple (organizations)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_25-trim';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:25';
$feeds_tamper->plugin_id = 'trim';
$feeds_tamper->settings = array(
  'mask' => '',
  'side' => 'trim',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Trim';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_25-unique';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:25';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_5-array_filter';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:5';
$feeds_tamper->plugin_id = 'array_filter';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 6;
$feeds_tamper->description = 'Filter empty items';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_5-find_replace_regex';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:5';
$feeds_tamper->plugin_id = 'find_replace_regex';
$feeds_tamper->settings = array(
  'find' => '/^(.*\\.pdf)?.*$/',
  'replace' => '$1',
  'limit' => '',
  'real_limit' => -1,
);
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Find replace REGEX';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_5-implode';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:5';
$feeds_tamper->plugin_id = 'implode';
$feeds_tamper->settings = array(
  'glue' => '%n',
  'real_glue' => '
',
);
$feeds_tamper->weight = 7;
$feeds_tamper->description = 'Implode';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_5-keyword_filter';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:5';
$feeds_tamper->plugin_id = 'keyword_filter';
$feeds_tamper->settings = array(
  'words' => 'pdf',
  'word_boundaries' => 0,
  'exact' => 0,
  'case_sensitive' => 0,
  'invert' => 0,
  'word_list' => array(
    0 => 'pdf',
  ),
  'regex' => FALSE,
  'func' => 'mb_stripos',
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'is a pdf, doc or zip';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_6-explode';
$feeds_tamper->importer = 'odm_library_importer';
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
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_7-explode';
$feeds_tamper->importer = 'odm_library_importer';
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
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_7-find_replace_multiple';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:7';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'Agricultural commodities processing and products',
      'target' => 'agricultural land management; farming systems',
    ),
    1 => array(
      'source' => 'Agricultural management systems and technologies',
      'target' => 'agricultural land management; farming systems',
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
      'target' => 'agriculture; fisheries',
    ),
    5 => array(
      'source' => 'Agro-industrial production',
      'target' => 'agricultural land management; farming systems',
    ),
    6 => array(
      'source' => 'Aid and development',
      'target' => 'development agencies',
    ),
    7 => array(
      'source' => 'Alternative dispute resolution',
      'target' => 'land dispute resolution',
    ),
    8 => array(
      'source' => 'Anti-corruption',
      'target' => 'corruption',
    ),
    9 => array(
      'source' => 'Biodiversity',
      'target' => 'agricultural land management; agriculture',
    ),
    10 => array(
      'source' => 'Biofuel crops',
      'target' => 'agricultural land management; agriculture',
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
      'target' => 'common lands',
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
      'target' => 'concession (land)',
    ),
    19 => array(
      'source' => 'Construction policy and regulation',
      'target' => 'land policies; urban planning',
    ),
    20 => array(
      'source' => 'Contract farming',
      'target' => 'contract farming; farming systems',
    ),
    21 => array(
      'source' => 'Deforestration drivers',
      'target' => 'deforestation',
    ),
    22 => array(
      'source' => 'Development and assistance for land tenure and land titling',
      'target' => 'development agencies; capacity building; land tenure systems; continuum in land rights',
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
      'target' => 'concession (land)',
    ),
    26 => array(
      'source' => 'Economic social and cultural rights',
      'target' => 'land rights',
    ),
    27 => array(
      'source' => 'Environment and natural resources',
      'target' => 'environment; natural resources management',
    ),
    28 => array(
      'source' => 'Environment and natural resources policy and administration',
      'target' => 'natural resources management; environment',
    ),
    29 => array(
      'source' => 'Environmental and biodiversity protection',
      'target' => 'environment; sustainable land management',
    ),
    30 => array(
      'source' => 'Environmental impact assessments',
      'target' => 'environment',
    ),
    31 => array(
      'source' => 'Ethnic minorities and indigenous people',
      'target' => 'indigenous peoples; local community',
    ),
    32 => array(
      'source' => 'Ethnic minorities and indigenous people policy and rights',
      'target' => 'indigenous land rights; indigenous peoples',
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
      'target' => 'agricultural land management; agriculture',
    ),
    36 => array(
      'source' => 'Fisheries production',
      'target' => 'fisheries; farming systems',
    ),
    37 => array(
      'source' => 'Fishing fisheries and aquaculture',
      'target' => 'fisheries; aquaculture',
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
      'target' => 'forest land; land cover',
    ),
    42 => array(
      'source' => 'Forest industry',
      'target' => 'forestry',
    ),
    43 => array(
      'source' => 'Forest policy and administration',
      'target' => 'forestry policies',
    ),
    44 => array(
      'source' => 'Forest protection',
      'target' => 'forest conservation; forestry; sustainable land use; sustainable land management',
    ),
    45 => array(
      'source' => 'Forests and forestry',
      'target' => 'forestry; forest land',
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
      'target' => 'land investments; land economics',
    ),
    55 => array(
      'source' => 'Land tenure and land titling',
      'target' => 'land tenure systems; title deed',
    ),
    56 => array(
      'source' => 'Land transfers',
      'target' => 'land transfers',
    ),
    57 => array(
      'source' => 'Laws and regulations',
      'target' => 'land law; land policies',
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
      'target' => 'farming systems; agricultural land management',
    ),
    61 => array(
      'source' => 'Overview of policy and legal framework',
      'target' => 'land policies; land law',
    ),
    62 => array(
      'source' => 'Palm oil',
      'target' => 'palm oil industries',
    ),
    63 => array(
      'source' => 'Pest management',
      'target' => 'agricultural land management; farming systems',
    ),
    64 => array(
      'source' => 'Population',
      'target' => 'rural population; urban population',
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
      'target' => 'forest conservation; environment',
    ),
    70 => array(
      'source' => 'Public land lease',
      'target' => 'leases; land tenure systems',
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
      'target' => 'water management; land cover',
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
      'target' => 'land management; sustainable land management',
    ),
    78 => array(
      'source' => 'Special economic zones',
      'target' => 'land economics',
    ),
    79 => array(
      'source' => 'State public land',
      'target' => 'state property; public ownership',
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
      'target' => 'agricultural land management; agriculture',
    ),
    85 => array(
      'source' => 'United Nations',
      'target' => 'development agencies',
    ),
    86 => array(
      'source' => 'Urban administration and development',
      'target' => 'urbanization; urban areas; urban population',
    ),
    87 => array(
      'source' => 'Urban development trends',
      'target' => 'urbanization; land development (urbanization)',
    ),
    88 => array(
      'source' => 'Urban policy and administration',
      'target' => 'urbanization; land policies',
    ),
    89 => array(
      'source' => 'Water and sanitation policy and administration',
      'target' => 'water management',
    ),
    90 => array(
      'source' => 'Water policy and administration',
      'target' => 'water management; water rights',
    ),
    91 => array(
      'source' => 'Water resources',
      'target' => 'water management; natural resources management',
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
    95 => array(
      'source' => 'Agricultural production',
      'target' => 'farming systems;agriculture',
    ),
    96 => array(
      'source' => 'Forest classifications',
      'target' => 'forest land',
    ),
    97 => array(
      'source' => 'Law and judiciary',
      'target' => 'land governance;land law',
    ),
    98 => array(
      'source' => 'Law making process',
      'target' => 'land governance;land law',
    ),
    99 => array(
      'source' => 'Regulation of legal professions',
      'target' => 'land governance',
    ),
    100 => array(
      'source' => 'State private land',
      'target' => 'private ownership;state property',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'ODM taxonomy to LandVoc Concepts';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_7-trim';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:7';
$feeds_tamper->plugin_id = 'trim';
$feeds_tamper->settings = array(
  'mask' => '',
  'side' => 'trim',
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Trim';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_7-unique';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:7';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_9-feeds_tamper_conditional';
$feeds_tamper->importer = 'odm_library_importer';
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
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_9-str_pad';
$feeds_tamper->importer = 'odm_library_importer';
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
$feeds_tamper->id = 'odm_library_importer-odm_author-default_value';
$feeds_tamper->importer = 'odm_library_importer';
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
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_creators-copy';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM creators';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:12',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Copy creators value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_creators_guid-copy';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM creators guid';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:12',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Copy creators value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_provider-copy';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM provider';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:15',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Copy Provider name';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_provider_guid-copy';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM provider guid';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:15',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Copy Provider name';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_provider_guid-copy2';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM provider guid';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:15',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Copy Provider name';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_provider_guid-efq_finder';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM provider guid';
$feeds_tamper->plugin_id = 'efq_finder';
$feeds_tamper->settings = array(
  'update' => 'Update',
  'entity_type' => 'node',
  'bundle' => 'organization',
  'field' => 'title',
  'property' => TRUE,
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Find organization';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_provider_guid-feeds_tamper_conditional';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM provider guid';
$feeds_tamper->plugin_id = 'feeds_tamper_conditional';
$feeds_tamper->settings = array(
  'conditional_field' => 'ODM provider guid',
  'operator' => 'equals',
  'value' => '',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Conditional';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_publishers-copy';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM publishers';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:14',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy publisher value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_publishers_guid-copy';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM publishers guid';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:14',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy publisher value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_publishers_guid-copy2';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM publishers guid';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:14',
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Copy not found publisher value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_publishers_guid-feeds_tamper_conditional';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM publishers guid';
$feeds_tamper->plugin_id = 'feeds_tamper_conditional';
$feeds_tamper->settings = array(
  'conditional_field' => 'ODM publishers guid',
  'operator' => 'equals',
  'value' => '',
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Conditional';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_regorg-default_value';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM regorg';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'ODM Mekong regional organization',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set value or default value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_url-rewrite';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM url';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => 'https://opendevelopmentmekong.net/dataset/?id=[jsonpath_parser:1]',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite';

$export[$feeds_tamper->id] = $feeds_tamper;

/****************/

    return $export;
}
