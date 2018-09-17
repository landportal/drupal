<?php
/**
 * @file
 * landwise_json_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function landwise_json_importer_feeds_tamper_default() {

$export = array();

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_1-default_value';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 1';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'importer_landwise_json',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "importer_landwise_json"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_10-copy';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 10';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:10',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_10-explode';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 10';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Explode';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_10-find_replace_multiple';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 10';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => '39',
      'target' => 'climate change; environment',
    ),
    1 => array(
      'source' => '26',
      'target' => 'co-ownership rights',
    ),
    2 => array(
      'source' => '20',
      'target' => 'customary law; customary tenure; customary land rights; continuum in land rights',
    ),
    3 => array(
      'source' => '23',
      'target' => 'dowry (land); marital property rights',
    ),
    4 => array(
      'source' => '38',
      'target' => 'environment',
    ),
    5 => array(
      'source' => '22',
      'target' => 'forest land; forestry',
    ),
    6 => array(
      'source' => '15',
      'target' => 'gender equity in access to land',
    ),
    7 => array(
      'source' => '42',
      'target' => 'fender equity in access to land; women',
    ),
    8 => array(
      'source' => '41',
      'target' => 'land conflicts',
    ),
    9 => array(
      'source' => '27',
      'target' => 'land dispute; land dispute resolution',
    ),
    10 => array(
      'source' => '30',
      'target' => 'land governance',
    ),
    11 => array(
      'source' => '28',
      'target' => 'land governance',
    ),
    12 => array(
      'source' => '9',
      'target' => 'land inheritance rights; land policies',
    ),
    13 => array(
      'source' => '29',
      'target' => 'land law',
    ),
    14 => array(
      'source' => '14',
      'target' => 'land law',
    ),
    15 => array(
      'source' => '8',
      'target' => 'land reform; land governance; land policies',
    ),
    16 => array(
      'source' => '7',
      'target' => 'land tax; land valuation; capital value (land)',
    ),
    17 => array(
      'source' => '19',
      'target' => 'marital property rights; gender equity in access to land; women',
    ),
    18 => array(
      'source' => '24',
      'target' => 'marital property rights; women',
    ),
    19 => array(
      'source' => '52',
      'target' => 'poverty',
    ),
    20 => array(
      'source' => '10',
      'target' => 'property rights; land rights',
    ),
    21 => array(
      'source' => '25',
      'target' => 'women; gender equity in access to land',
    ),
    22 => array(
      'source' => '21',
      'target' => 'youth',
    ),
    23 => array(
      'source' => '31',
      'target' => 'youth; women',
    ),
    24 => array(
      'source' => '62',
      'target' => 'mining',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Find replace multiple';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_10-sprintf';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 10';
$feeds_tamper->plugin_id = 'sprintf';
$feeds_tamper->settings = array(
  'format' => '%s',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Convert number to string';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_10-unique';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 10';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_11-default_value';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 11';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'This is a resource from the Resource Equity LandWise database of resources.',
  'only_if_empty' => 1,
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Set value or default value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_11-php';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 11';
$feeds_tamper->plugin_id = 'php';
$feeds_tamper->settings = array(
  'php' => '$record_description = $item[\'jsonpath_parser:12\'];
$item_description = $item[\'jsonpath_parser:13\'];
if (($item_description != "") && ($item_description)){
   return $item_description;
} else if (($record_description != "") && ($record_description)){
   return $record_description;
} else {
   return NULL;
}',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Generate the description (retuns if item description exists, if not, returns the record description, if not returns NULL)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_12-default_value';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 12';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'private://feeds/resource-equity-thumbnail.png',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set value or default value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_13-copy';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 13';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:2',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Copy source value (get creators)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_13-explode';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 13';
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
$feeds_tamper->id = 'landwise_json_importer-blank_source_13-find_replace_multiple';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 13';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'ACORD-DRC',
      'target' => 'ACORD',
    ),
    1 => array(
      'source' => 'ActionAid',
      'target' => 'ActionAid',
    ),
    2 => array(
      'source' => 'ActionAid International',
      'target' => 'ActionAid',
    ),
    3 => array(
      'source' => 'African Commission on Human and Peoples\' Rights',
      'target' => 'African Commission on Human and Peoples\' Rights',
    ),
    4 => array(
      'source' => 'African Development Bank (AfDB), United Nations United Nations Economic Commission for Africa (ECA) and African Union Commission (AUC)',
      'target' => 'African Development Bank;United Nations Economic Commission for Africa;African Union',
    ),
    5 => array(
      'source' => 'AKRSP',
      'target' => 'Aga Khan Rural Support Programme',
    ),
    6 => array(
      'source' => 'All-China Women\'s Federation (ACWF)',
      'target' => 'All-China Women\'s Federation',
    ),
    7 => array(
      'source' => 'Amnesty International',
      'target' => 'Amnesty International',
    ),
    8 => array(
      'source' => 'Andhra Pradesh State Government',
      'target' => 'Andhra Pradesh State Government',
    ),
    9 => array(
      'source' => 'Arab Republic of Egypt',
      'target' => 'Arab Republic of Egypt',
    ),
    10 => array(
      'source' => 'ARD & Landesa',
      'target' => 'ARD, Inc.;Landesa - Rural Development Institute',
    ),
    11 => array(
      'source' => 'Asia Indigenous People Pact (AIPP)',
      'target' => 'Asia Indigenous Peoples Pact',
    ),
    12 => array(
      'source' => 'ADB',
      'target' => 'Asian Development Bank',
    ),
    13 => array(
      'source' => 'Asian Development Bank',
      'target' => 'Asian Development Bank',
    ),
    14 => array(
      'source' => 'Association of Parents of Disappeared Persons (APDP)',
      'target' => 'Association of Parents of Disappeared Persons',
    ),
    15 => array(
      'source' => 'BBC News',
      'target' => 'BBC News',
    ),
    16 => array(
      'source' => 'BBC News Staff',
      'target' => 'BBC News',
    ),
    17 => array(
      'source' => 'Caritas Ghana',
      'target' => 'Caritas Ghana',
    ),
    18 => array(
      'source' => 'Associates for Development (AfD) and Centre for Basic Research',
      'target' => 'Centre for Basic Research;Associates for Development',
    ),
    19 => array(
      'source' => 'COHRE and WLLA',
      'target' => 'Centre on Housing Rights and Evictions',
    ),
    20 => array(
      'source' => 'Chronic Poverty Research Centre',
      'target' => 'Chronic Poverty Research Centre',
    ),
    21 => array(
      'source' => 'Chronic Poverty Research Centre (CPRC)',
      'target' => 'Chronic Poverty Research Centre',
    ),
    22 => array(
      'source' => 'Afar Regional State Government',
      'target' => 'Ethiopia Regional State Government Afar',
    ),
    23 => array(
      'source' => 'Amhara National Regional State',
      'target' => 'Ethiopia Regional State Government Amhar',
    ),
    24 => array(
      'source' => 'Amhara Regional State Government',
      'target' => 'Ethiopia Regional State Government Amhar',
    ),
    25 => array(
      'source' => 'FAO',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    26 => array(
      'source' => 'FAO-Dimitra Team',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    27 => array(
      'source' => 'Food and Agricultural Organization of the United Nations (FAO)',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    28 => array(
      'source' => 'Food and Agriculture Organization (FAO)',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    29 => array(
      'source' => 'FAO, IFAD and World Bank',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO);International Fund for Agricultural Development (IFAD);World Bank Group',
    ),
    30 => array(
      'source' => 'World Bank, FAO, and IFAD',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO);International Fund for Agricultural Development (IFAD);World Bank Group',
    ),
    31 => array(
      'source' => 'FAO, IFAD and WFP',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO); International Fund for Agricultural Development (IFAD); World Food Programme',
    ),
    32 => array(
      'source' => 'Forest Peoples Programme',
      'target' => 'Forest Peoples Programme (FPP)',
    ),
    33 => array(
      'source' => 'Deutsche Gesellschaft fr Internationale Zusammenarbeit (GIZ)',
      'target' => 'GIZ',
    ),
    34 => array(
      'source' => 'Global Land Tool Network (GLTN)',
      'target' => 'Global Land Tool Network',
    ),
    35 => array(
      'source' => 'Argentine Nation',
      'target' => 'Gobierno de la República Argentina',
    ),
    36 => array(
      'source' => 'Board of Revenue Government of West Bengal',
      'target' => 'Government of West Bengal',
    ),
    37 => array(
      'source' => 'West Bengal State Government',
      'target' => 'Government of West Bengal',
    ),
    38 => array(
      'source' => 'GRAIN',
      'target' => 'GRAIN',
    ),
    39 => array(
      'source' => 'Habitat for Humanity',
      'target' => 'Habitat for Humanity International (HFHI)',
    ),
    40 => array(
      'source' => 'Human Rights Watch',
      'target' => 'Human Rights Watch',
    ),
    41 => array(
      'source' => 'Human Rights Watch (HRW)',
      'target' => 'Human Rights Watch',
    ),
    42 => array(
      'source' => 'ICRW',
      'target' => 'International Center for Research on Women',
    ),
    43 => array(
      'source' => 'International Center for Research on Women (ICRW)',
      'target' => 'International Center for Research on Women',
    ),
    44 => array(
      'source' => 'ICRW, HSRC, AfD',
      'target' => 'International Center for Research on Women;African Development Bank',
    ),
    45 => array(
      'source' => 'International Center for Research on Women (ICRW) and Uganda Land Alliance (ULA)',
      'target' => 'International Center for Research on Women;Uganda Land Alliance (ULA)',
    ),
    46 => array(
      'source' => 'International Criminal Court (ICC)',
      'target' => 'International Criminal Court Office of the Prosecutor',
    ),
    47 => array(
      'source' => 'FIDH',
      'target' => 'International Federation for Human Rights',
    ),
    48 => array(
      'source' => 'IFPRI',
      'target' => 'International Food Policy Research Institute',
    ),
    49 => array(
      'source' => 'International Food Policy Research Institute (IFPRI)',
      'target' => 'International Food Policy Research Institute',
    ),
    50 => array(
      'source' => 'International Food and Policy Research (IFPRI)',
      'target' => 'International Food Policy Research Institute',
    ),
    51 => array(
      'source' => 'FIDA',
      'target' => 'International Fund for Agricultural Development (IFAD)',
    ),
    52 => array(
      'source' => 'International Fund for Agricultural Development (IFAD)',
      'target' => 'International Fund for Agricultural Development (IFAD)',
    ),
    53 => array(
      'source' => 'International Institute for Environment and Development (IIED)',
      'target' => 'International Institute for Environment and Development',
    ),
    54 => array(
      'source' => 'International Land Coalition',
      'target' => 'International Land Coalition (ILC)',
    ),
    55 => array(
      'source' => 'International Land Coalition (ILC)',
      'target' => 'International Land Coalition (ILC)',
    ),
    56 => array(
      'source' => 'International Lands Coalition (ILC)',
      'target' => 'International Land Coalition (ILC)',
    ),
    57 => array(
      'source' => 'IISD',
      'target' => 'International Sustainable Development Institute',
    ),
    58 => array(
      'source' => 'Kenya Land Alliance (KLA)',
      'target' => 'Kenya Land Alliance (KLA)',
    ),
    59 => array(
      'source' => 'Land Matrix',
      'target' => 'Land Matrix',
    ),
    60 => array(
      'source' => 'Landesa',
      'target' => 'Landesa - Rural Development Institute',
    ),
    61 => array(
      'source' => 'RDI (Landesa)',
      'target' => 'Landesa - Rural Development Institute',
    ),
    62 => array(
      'source' => 'Landesa and Oxfam',
      'target' => 'Landesa - Rural Development Institute;Oxfam International',
    ),
    63 => array(
      'source' => 'Africa Feel Free Network',
      'target' => 'MIFUMI',
    ),
    64 => array(
      'source' => 'Oakland Institute Researchers',
      'target' => 'Oakland Institute',
    ),
    65 => array(
      'source' => 'OHCHR and UN Women ',
      'target' => 'Office of the United Nations High Commissioner for Human Rights; United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    66 => array(
      'source' => 'OHCHR and UNWOMEN',
      'target' => 'Office of the United Nations High Commissioner for Human Rights; United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    67 => array(
      'source' => 'OECD',
      'target' => 'Organisation for Economic Co-operation and Development (OECD)',
    ),
    68 => array(
      'source' => 'OECD and Social Institutions & Gender Index',
      'target' => 'Organisation for Economic Co-operation and Development (OECD)',
    ),
    69 => array(
      'source' => 'ODI',
      'target' => 'Overseas Development Institute',
    ),
    70 => array(
      'source' => 'Oxfam',
      'target' => 'Oxfam International',
    ),
    71 => array(
      'source' => 'Assembly of Kosovo',
      'target' => 'Republic of Kosovo Assembly',
    ),
    72 => array(
      'source' => 'Assembly of Republic of Kosovo',
      'target' => 'Republic of Kosovo Assembly',
    ),
    73 => array(
      'source' => 'Bolivarian Republic of Venezuela',
      'target' => 'República Bolivariana de Venezuela',
    ),
    74 => array(
      'source' => 'Resource Equity and Landesa',
      'target' => 'Resource Equity;Landesa - Rural Development Institute',
    ),
    75 => array(
      'source' => 'Rights and Resources Initiative',
      'target' => 'Rights and Resources Initiative',
    ),
    76 => array(
      'source' => 'Rwanda Initiative for Sustainable Development (RISD)',
      'target' => 'Rwanda Initiative for Sustainable Development',
    ),
    77 => array(
      'source' => 'Rwanda Women Network (RWN)',
      'target' => 'Rwanda Women Network',
    ),
    78 => array(
      'source' => 'Standing Committee of Peoples Congress of Anhui Province',
      'target' => 'Standing Committee of Peoples Congress of Anhui Province',
    ),
    79 => array(
      'source' => 'Standing Committee of Peoples Congress of Anhui Province ',
      'target' => 'Standing Committee of Peoples Congress of Anhui Province',
    ),
    80 => array(
      'source' => 'Standing Committee of Peoples Congress of Beijing City',
      'target' => 'Standing Committee of Peoples Congress of Beijing City',
    ),
    81 => array(
      'source' => 'Standing Committee of Peoples Congress of Chongqing Province ',
      'target' => 'Standing Committee of Peoples Congress of Chongqing Province',
    ),
    82 => array(
      'source' => 'Standing Committee of Peoples Congress of Fujian Province',
      'target' => 'Standing Committee of Peoples Congress of Fujian Province',
    ),
    83 => array(
      'source' => 'Standing Committee of Peoples Congress of Fujian Province ',
      'target' => 'Standing Committee of Peoples Congress of Fujian Province',
    ),
    84 => array(
      'source' => 'Standing Committee of Peoples Congress of Gansu Province',
      'target' => 'Standing Committee of Peoples Congress of Gansu Province',
    ),
    85 => array(
      'source' => 'Standing Committee of Peoples Congress of Gansu Province ',
      'target' => 'Standing Committee of Peoples Congress of Gansu Province',
    ),
    86 => array(
      'source' => 'Standing Committee of Peoples Congress of Guangdong Province',
      'target' => 'Standing Committee of Peoples Congress of Guangdong Province',
    ),
    87 => array(
      'source' => 'Standing Committee of Peoples Congress of Guangxi zhuang autonomous region ',
      'target' => 'Standing Committee of Peoples Congress of Guangxi zhuang autonomous region',
    ),
    88 => array(
      'source' => 'Standing Committee of Peoples Congress of Guizhou Province',
      'target' => 'Standing Committee of Peoples Congress of Guizhou Province',
    ),
    89 => array(
      'source' => 'Standing Committee of Peoples Congress of Guizhou Province ',
      'target' => 'Standing Committee of Peoples Congress of Guizhou Province',
    ),
    90 => array(
      'source' => 'Standing Committee of Peoples Congress of Hainan Province',
      'target' => 'Standing Committee of Peoples Congress of Hainan Province',
    ),
    91 => array(
      'source' => 'Standing Committee of Peoples Congress of Hainan Province ',
      'target' => 'Standing Committee of Peoples Congress of Hainan Province',
    ),
    92 => array(
      'source' => 'Standing Committee of Peoples Congress of Hebei Province',
      'target' => 'Standing Committee of Peoples Congress of Hebei Province',
    ),
    93 => array(
      'source' => 'Standing Committee of Peoples Congress of Henan Province',
      'target' => 'Standing Committee of Peoples Congress of Henan Province',
    ),
    94 => array(
      'source' => 'Standing Committee of Peoples Congress of Hubei Province',
      'target' => 'Standing Committee of Peoples Congress of Hubei Province',
    ),
    95 => array(
      'source' => 'Standing Committee of Peoples Congress of Hunan Province',
      'target' => 'Standing Committee of Peoples Congress of Hunan Province',
    ),
    96 => array(
      'source' => 'Standing Committee of Peoples Congress of Inner Mongolia Autonomous Region',
      'target' => 'Standing Committee of Peoples Congress of Inner Mongolia Autonomous Region',
    ),
    97 => array(
      'source' => 'Standing Committee of Peoples Congress of Inner Mongolia Autonomous Region ',
      'target' => 'Standing Committee of Peoples Congress of Inner Mongolia Autonomous Region',
    ),
    98 => array(
      'source' => 'Standing Committee of Peoples Congress of Jiangsu Province',
      'target' => 'Standing Committee of Peoples Congress of Jiangsu Province',
    ),
    99 => array(
      'source' => 'Standing Committee of Peoples Congress of Jiangxi Province',
      'target' => 'Standing Committee of Peoples Congress of Jiangxi Province',
    ),
    100 => array(
      'source' => 'Standing Committee of Peoples Congress of Jiangxi Province ',
      'target' => 'Standing Committee of Peoples Congress of Jiangxi Province',
    ),
    101 => array(
      'source' => 'Standing Committee of Peoples Congress of Jilin Province',
      'target' => 'Standing Committee of Peoples Congress of Jilin Province',
    ),
    102 => array(
      'source' => 'Standing Committee of Peoples Congress of Jilin Province ',
      'target' => 'Standing Committee of Peoples Congress of Jilin Province',
    ),
    103 => array(
      'source' => 'Standing Committee of Peoples Congress of Liaoning Province',
      'target' => 'Standing Committee of Peoples Congress of Liaoning Province',
    ),
    104 => array(
      'source' => 'Standing Committee of Peoples Congress of Liaoning Province ',
      'target' => 'Standing Committee of Peoples Congress of Liaoning Province',
    ),
    105 => array(
      'source' => 'Standing Committee of Peoples Congress of Ningxia Hui Autonomous Region',
      'target' => 'Standing Committee of Peoples Congress of Ningxia Hui Autonomous Region',
    ),
    106 => array(
      'source' => 'Standing Committee of Peoples Congress of Qinghai Province',
      'target' => 'Standing Committee of Peoples Congress of Qinghai Province',
    ),
    107 => array(
      'source' => 'Standing Committee of Peoples Congress of Qinghai Province  ',
      'target' => 'Standing Committee of Peoples Congress of Qinghai Province',
    ),
    108 => array(
      'source' => 'Standing Committee of Peoples Congress of Shandong Province',
      'target' => 'Standing Committee of Peoples Congress of Shandong Province',
    ),
    109 => array(
      'source' => 'Standing Committee of Peoples Congress of Shandong Province ',
      'target' => 'Standing Committee of Peoples Congress of Shandong Province',
    ),
    110 => array(
      'source' => 'Standing Committee of Peoples Congress of Shanghai City',
      'target' => 'Standing Committee of Peoples Congress of Shanghai City',
    ),
    111 => array(
      'source' => 'Standing Committee of Peoples Congress of Shanxi Province',
      'target' => 'Standing Committee of Peoples Congress of Shanxi Province',
    ),
    112 => array(
      'source' => 'Standing Committee of Peoples Congress of Sichuan Province',
      'target' => 'Standing Committee of Peoples Congress of Sichuan Province',
    ),
    113 => array(
      'source' => 'Standing Committee of Peoples Congress of Tianjin City',
      'target' => 'Standing Committee of Peoples Congress of Tianjin City',
    ),
    114 => array(
      'source' => 'Standing Committee of Peoples Congress of Tibet autonomous region',
      'target' => 'Standing Committee of Peoples Congress of Tibet autonomous region',
    ),
    115 => array(
      'source' => 'Standing Committee of Peoples Congress of Xinjiang Uygur Autonomous Region',
      'target' => 'Standing Committee of Peoples Congress of Xinjiang Uygur Autonomous Region',
    ),
    116 => array(
      'source' => 'Standing Committee of Peoples Congress of Yunnan Province',
      'target' => 'Standing Committee of Peoples Congress of Yunnan Province',
    ),
    117 => array(
      'source' => 'Standing Committee of Peoples Congress of Yunnan Province ',
      'target' => 'Standing Committee of Peoples Congress of Yunnan Province',
    ),
    118 => array(
      'source' => 'Standing Committee of Peoples Congress of Zhejiang Province',
      'target' => 'Standing Committee of Peoples Congress of Zhejiang Province',
    ),
    119 => array(
      'source' => 'Standing Committee of Peoples Congress of Zhejiang Province ',
      'target' => 'Standing Committee of Peoples Congress of Zhejiang Province',
    ),
    120 => array(
      'source' => 'Adjudication Committee of the Supreme People\'s Court',
      'target' => 'Supreme People\'s Court China',
    ),
    121 => array(
      'source' => 'ULA',
      'target' => 'Uganda Land Alliance (ULA)',
    ),
    122 => array(
      'source' => 'Uganda Land Alliance',
      'target' => 'Uganda Land Alliance (ULA)',
    ),
    123 => array(
      'source' => 'United Nations',
      'target' => 'United Nations',
    ),
    124 => array(
      'source' => 'United Nations (UN)',
      'target' => 'United Nations',
    ),
    125 => array(
      'source' => 'UNDP',
      'target' => 'United Nations Development Programme',
    ),
    126 => array(
      'source' => 'United Nations Development Fund (UNDP)',
      'target' => 'United Nations Development Programme',
    ),
    127 => array(
      'source' => 'UN United Nations Economic Commission for Africa',
      'target' => 'United Nations Economic Commission for Africa',
    ),
    128 => array(
      'source' => 'UNECA',
      'target' => 'United Nations Economic Commission for Africa',
    ),
    129 => array(
      'source' => 'United Nations Economic Commission for Africa',
      'target' => 'United Nations Economic Commission for Africa',
    ),
    130 => array(
      'source' => 'UN Women',
      'target' => 'United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    131 => array(
      'source' => 'UN Women ',
      'target' => 'United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    132 => array(
      'source' => 'UN-Women',
      'target' => 'United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    133 => array(
      'source' => 'United Nations Development Fund for Womem (UNIFEM)',
      'target' => 'United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    134 => array(
      'source' => 'United Nations Development Fund for Women (UNIFEM)',
      'target' => 'United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    135 => array(
      'source' => 'UNEP-UN',
      'target' => 'United Nations Environment Programme',
    ),
    136 => array(
      'source' => 'UN-HABITAT',
      'target' => 'United Nations Human Settlements Programme',
    ),
    137 => array(
      'source' => 'USAID',
      'target' => 'USAID',
    ),
    138 => array(
      'source' => 'United States Agency International Development (USAID)',
      'target' => 'USAID',
    ),
    139 => array(
      'source' => 'The World Bank Group',
      'target' => 'World Bank Group',
    ),
    140 => array(
      'source' => 'World Bank',
      'target' => 'World Bank Group',
    ),
    141 => array(
      'source' => 'The World Bank and ADB',
      'target' => 'World Bank Group;Asian Development Bank',
    ),
    142 => array(
      'source' => 'World Resources Institute (WRI)',
      'target' => 'World Resources Institute',
    ),
    143 => array(
      'source' => 'World Wildlife Fund (WWF)',
      'target' => 'World Wildlife Fund',
    ),
    144 => array(
      'source' => 'Andhra Pradesh State Government',
      'target' => 'Andhra Pradesh State Government',
    ),
    145 => array(
      'source' => 'Arab Republic of Egypt',
      'target' => 'Arab Republic of Egypt',
    ),
    146 => array(
      'source' => 'Republic of Austria',
      'target' => 'Austrian Federal Government',
    ),
    147 => array(
      'source' => 'CARE',
      'target' => 'Care International',
    ),
    148 => array(
      'source' => 'FAO',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    149 => array(
      'source' => 'Government of Chile',
      'target' => 'Gobierno de Chile',
    ),
    150 => array(
      'source' => 'Republic of Chile',
      'target' => 'Gobierno de Chile',
    ),
    151 => array(
      'source' => 'Republic of Albania',
      'target' => 'Government of Albania',
    ),
    152 => array(
      'source' => 'Government of Algeria',
      'target' => 'Government of Algeria',
    ),
    153 => array(
      'source' => 'Government of Antigua and Barbuda',
      'target' => 'Government of Antigua and Barbuda',
    ),
    154 => array(
      'source' => 'Argentine Nation',
      'target' => 'Government of Argentina',
    ),
    155 => array(
      'source' => 'Republic of Armenia',
      'target' => 'Government of Armenia',
    ),
    156 => array(
      'source' => 'Commonwealth of Australia',
      'target' => 'Government of Australia',
    ),
    157 => array(
      'source' => 'Government of Belize',
      'target' => 'Government of Belize',
    ),
    158 => array(
      'source' => 'Republic of Benin',
      'target' => 'Government of Benin',
    ),
    159 => array(
      'source' => 'Government of Bermuda',
      'target' => 'Government of Bermuda',
    ),
    160 => array(
      'source' => 'Republic of Bolivia',
      'target' => 'Government of Bolivia',
    ),
    161 => array(
      'source' => 'Republic of Botswana',
      'target' => 'Government of Botswana',
    ),
    162 => array(
      'source' => 'Republic of Brazil',
      'target' => 'Government of Brazil',
    ),
    163 => array(
      'source' => 'Government of Burkina Faso',
      'target' => 'Government of Burkina Faso',
    ),
    164 => array(
      'source' => 'Republic of Burundi',
      'target' => 'Government of Burundi',
    ),
    165 => array(
      'source' => 'Government of Canada',
      'target' => 'Government of Canada',
    ),
    166 => array(
      'source' => 'Government of Cabo Verde',
      'target' => 'Government of Cape Verde',
    ),
    167 => array(
      'source' => 'Republic of Cape Verde',
      'target' => 'Government of Cape Verde',
    ),
    168 => array(
      'source' => 'Republic of Chad',
      'target' => 'Government of Chad',
    ),
    169 => array(
      'source' => 'Republic of Colombia',
      'target' => 'Government of Colombia',
    ),
    170 => array(
      'source' => 'Union of the Comoros',
      'target' => 'Government of Comoros',
    ),
    171 => array(
      'source' => 'Republic of Costa Rica',
      'target' => 'Government of Costa Rica',
    ),
    172 => array(
      'source' => 'Republic of Croatia',
      'target' => 'Government of Croatia',
    ),
    173 => array(
      'source' => 'Government of Cuba',
      'target' => 'Government of Cuba',
    ),
    174 => array(
      'source' => 'Republic of Cuba',
      'target' => 'Government of Cuba',
    ),
    175 => array(
      'source' => 'Government of the DRC',
      'target' => 'Government of Democratic Republic of the Congo',
    ),
    176 => array(
      'source' => 'Government of Denmark',
      'target' => 'Government of Denmark',
    ),
    177 => array(
      'source' => 'Republic of Djibouti',
      'target' => 'Government of Djibouti',
    ),
    178 => array(
      'source' => 'Commonwealth of Dominica',
      'target' => 'Government of Dominica',
    ),
    179 => array(
      'source' => 'Republic of Ecuador',
      'target' => 'Government of Ecuador',
    ),
    180 => array(
      'source' => 'Republic of Equatorial Guinea',
      'target' => 'Government of Equatorial Guinea',
    ),
    181 => array(
      'source' => 'Republic of Estonia',
      'target' => 'Government of Estonia',
    ),
    182 => array(
      'source' => 'Federal Democratic Republic of Ethiopia',
      'target' => 'Government of Ethiopia',
    ),
    183 => array(
      'source' => 'Republic of Finland',
      'target' => 'Government of Finland',
    ),
    184 => array(
      'source' => 'French Republic',
      'target' => 'Government of France',
    ),
    185 => array(
      'source' => 'Gabonese Republic',
      'target' => 'Government of Gabon',
    ),
    186 => array(
      'source' => 'Government of Georgia',
      'target' => 'Government of Georgia',
    ),
    187 => array(
      'source' => 'Government of Germany',
      'target' => 'Government of Germany',
    ),
    188 => array(
      'source' => 'Government of Ghana',
      'target' => 'Government of Ghana',
    ),
    189 => array(
      'source' => 'Parliament of the Republic of Ghana',
      'target' => 'Government of Ghana',
    ),
    190 => array(
      'source' => 'Hellenic Parliament',
      'target' => 'Government of Greece',
    ),
    191 => array(
      'source' => 'Government of Grenada',
      'target' => 'Government of Grenada',
    ),
    192 => array(
      'source' => 'Republic of Guinea',
      'target' => 'Government of Guinea',
    ),
    193 => array(
      'source' => 'Republic of Haiti',
      'target' => 'Government of Haiti',
    ),
    194 => array(
      'source' => 'Republic of Honduras',
      'target' => 'Government of Honduras',
    ),
    195 => array(
      'source' => 'Hungarian Government',
      'target' => 'Government of Hungary',
    ),
    196 => array(
      'source' => 'Republic of Iceland',
      'target' => 'Government of Iceland',
    ),
    197 => array(
      'source' => 'India',
      'target' => 'Government of India',
    ),
    198 => array(
      'source' => 'India\'s Ministry of Law and Justice',
      'target' => 'Government of India',
    ),
    199 => array(
      'source' => 'Government of Indonesia',
      'target' => 'Government of Indonesia',
    ),
    200 => array(
      'source' => 'Republic of Iran',
      'target' => 'Government of Iran',
    ),
    201 => array(
      'source' => 'Republic of Iraq',
      'target' => 'Government of Iraq',
    ),
    202 => array(
      'source' => 'Republic of Ireland',
      'target' => 'Government of Ireland',
    ),
    203 => array(
      'source' => 'Government of Cote d\'Ivoire',
      'target' => 'Government of Ivory Coast',
    ),
    204 => array(
      'source' => 'Republic of Cote d\'Ivoire',
      'target' => 'Government of Ivory Coast',
    ),
    205 => array(
      'source' => 'Parliament of Jamaica',
      'target' => 'Government of Jamaica',
    ),
    206 => array(
      'source' => 'Government of Jordan',
      'target' => 'Government of Jordan',
    ),
    207 => array(
      'source' => 'Karnataka State Government',
      'target' => 'Government of Karnataka (India)',
    ),
    208 => array(
      'source' => 'Government of Kenya',
      'target' => 'Government of Kenya',
    ),
    209 => array(
      'source' => 'Republic of Kenya',
      'target' => 'Government of Kenya',
    ),
    210 => array(
      'source' => 'Kyrgyz Republic',
      'target' => 'Government of Kyrgyzstan',
    ),
    211 => array(
      'source' => 'Lao People\'s Democratic Republic',
      'target' => 'Government of Lao People\'s Democratic Republic',
    ),
    212 => array(
      'source' => 'Kingdom of Lesotho',
      'target' => 'Government of Lesotho',
    ),
    213 => array(
      'source' => 'Republic of Lithuania',
      'target' => 'Government of Lithuania',
    ),
    214 => array(
      'source' => 'Republic of Macedonia',
      'target' => 'Government of Macedonia',
    ),
    215 => array(
      'source' => 'Government of Madagascar',
      'target' => 'Government of Madagascar',
    ),
    216 => array(
      'source' => 'Government of Malawi',
      'target' => 'Government of Malawi',
    ),
    217 => array(
      'source' => 'Republic of Malawi',
      'target' => 'Government of Malawi',
    ),
    218 => array(
      'source' => 'Government of Malaysia',
      'target' => 'Government of Malaysia',
    ),
    219 => array(
      'source' => 'Republic of Maldives',
      'target' => 'Government of Maldives',
    ),
    220 => array(
      'source' => 'Government of Mali',
      'target' => 'Government of Mali',
    ),
    221 => array(
      'source' => 'Republic of Mali',
      'target' => 'Government of Mali',
    ),
    222 => array(
      'source' => 'Republic of Malta',
      'target' => 'Government of Malta',
    ),
    223 => array(
      'source' => 'Government of Mauritius',
      'target' => 'Government of Mauritius',
    ),
    224 => array(
      'source' => 'Republic of Mauritius',
      'target' => 'Government of Mauritius',
    ),
    225 => array(
      'source' => 'United Mexican States',
      'target' => 'Government of Mexico',
    ),
    226 => array(
      'source' => 'Republic of Moldova',
      'target' => 'Government of Moldova',
    ),
    227 => array(
      'source' => 'Government of Mongolia',
      'target' => 'Government of Mongolia',
    ),
    228 => array(
      'source' => 'Republic of Montenegro',
      'target' => 'Government of Montenegro',
    ),
    229 => array(
      'source' => 'Government of Morocco',
      'target' => 'Government of Morocco',
    ),
    230 => array(
      'source' => 'Government of Nepal',
      'target' => 'Government of Nepal',
    ),
    231 => array(
      'source' => 'Government of New Zealand',
      'target' => 'Government of New Zealand',
    ),
    232 => array(
      'source' => 'Government of Niger',
      'target' => 'Government of Niger',
    ),
    233 => array(
      'source' => 'Federal Republic of Nigeria',
      'target' => 'Government of Nigeria',
    ),
    234 => array(
      'source' => 'Government of Nigeria',
      'target' => 'Government of Nigeria',
    ),
    235 => array(
      'source' => 'Government of Norway',
      'target' => 'Government of Norway',
    ),
    236 => array(
      'source' => 'Orissa State Government',
      'target' => 'Government of Odisha (India)',
    ),
    237 => array(
      'source' => 'Independent State of Papua New Guinea',
      'target' => 'Government of Papua New Guinea',
    ),
    238 => array(
      'source' => 'Government of Peru',
      'target' => 'Government of Peru',
    ),
    239 => array(
      'source' => 'Government of the Philippines',
      'target' => 'Government of Philippines',
    ),
    240 => array(
      'source' => 'Republic of Liberia',
      'target' => 'Government of Republic of Liberia',
    ),
    241 => array(
      'source' => 'Russian Federation',
      'target' => 'Government of Russia',
    ),
    242 => array(
      'source' => 'Government of Rwanda',
      'target' => 'Government of Rwanda',
    ),
    243 => array(
      'source' => 'Republic of Rwanda',
      'target' => 'Government of Rwanda',
    ),
    244 => array(
      'source' => 'Government of Senegal',
      'target' => 'Government of Senegal',
    ),
    245 => array(
      'source' => 'Republic of Senegal',
      'target' => 'Government of Senegal',
    ),
    246 => array(
      'source' => 'Republic of Serbia',
      'target' => 'Government of Serbia',
    ),
    247 => array(
      'source' => 'Republic of Seychelles',
      'target' => 'Government of Seychelles',
    ),
    248 => array(
      'source' => 'Government of Sierra Leone',
      'target' => 'Government of Sierra Leone',
    ),
    249 => array(
      'source' => 'Parliament of Sierra Leone',
      'target' => 'Government of Sierra Leone',
    ),
    250 => array(
      'source' => 'Republic of Singapore',
      'target' => 'Government of Singapore',
    ),
    251 => array(
      'source' => 'Government of South Africa',
      'target' => 'Government of South Africa',
    ),
    252 => array(
      'source' => 'Republic of South Africa',
      'target' => 'Government of South Africa',
    ),
    253 => array(
      'source' => 'Government of Spain',
      'target' => 'Government of Spain',
    ),
    254 => array(
      'source' => 'Democratic Socialist Republic of Sri Lanka',
      'target' => 'Government of Sri Lanka',
    ),
    255 => array(
      'source' => 'Government of Swaziland',
      'target' => 'Government of Swaziland',
    ),
    256 => array(
      'source' => 'Government of Sweden',
      'target' => 'Government of Sweden',
    ),
    257 => array(
      'source' => 'Government of Switzerland',
      'target' => 'Government of Switzerland',
    ),
    258 => array(
      'source' => 'Republic of Tajikistan',
      'target' => 'Government of Tajikistan',
    ),
    259 => array(
      'source' => 'Government of Tanzania',
      'target' => 'Government of Tanzania',
    ),
    260 => array(
      'source' => 'Parliament of Tanzania',
      'target' => 'Government of Tanzania',
    ),
    261 => array(
      'source' => 'Parliament of the United Republic of Tanzania',
      'target' => 'Government of Tanzania',
    ),
    262 => array(
      'source' => 'Government of Thailand',
      'target' => 'Government of Thailand',
    ),
    263 => array(
      'source' => 'Commonwealth of the Bahamas',
      'target' => 'Government of the Bahamas',
    ),
    264 => array(
      'source' => 'Czech Republic',
      'target' => 'Government of the Czech Republic',
    ),
    265 => array(
      'source' => 'Government of Cambodia',
      'target' => 'Government of the Kingdom of Cambodia',
    ),
    266 => array(
      'source' => 'Republic of Kazakhstan',
      'target' => 'Government of the Republic of Kazakhstan',
    ),
    267 => array(
      'source' => 'Government of Namibia',
      'target' => 'Government of the Republic of Namibia',
    ),
    268 => array(
      'source' => 'Government of Brunei',
      'target' => 'Government of the Sultanate of Brunei Darussalam',
    ),
    269 => array(
      'source' => 'Government of the Virgin Islands',
      'target' => 'Government of the Virgin Islands',
    ),
    270 => array(
      'source' => 'Republic of Trinidad and Tobago',
      'target' => 'Government of Trinidad and Tobago',
    ),
    271 => array(
      'source' => 'Tunisian Republic',
      'target' => 'Government of Tunisia',
    ),
    272 => array(
      'source' => 'Government of Uganda',
      'target' => 'Government of Uganda',
    ),
    273 => array(
      'source' => 'Republic of Uganda',
      'target' => 'Government of Uganda',
    ),
    274 => array(
      'source' => 'Parliament of Ukraine',
      'target' => 'Government of Ukraine',
    ),
    275 => array(
      'source' => 'Vietnamese Government',
      'target' => 'Government of Vietnam',
    ),
    276 => array(
      'source' => 'West Bengal State Government',
      'target' => 'Government of West Bengal',
    ),
    277 => array(
      'source' => 'Government of Zambia',
      'target' => 'Government of Zambia',
    ),
    278 => array(
      'source' => 'Republic of Zambia',
      'target' => 'Government of Zambia',
    ),
    279 => array(
      'source' => 'Government of Zimbabwe',
      'target' => 'Government of Zimbabwe',
    ),
    280 => array(
      'source' => 'Republic of Zimbabwe',
      'target' => 'Government of Zimbabwe',
    ),
    281 => array(
      'source' => 'Republic of Mozambique',
      'target' => 'Governo da República de Moçambique',
    ),
    282 => array(
      'source' => 'Republic of Guatemala',
      'target' => 'Presidencia de la República Guatemala',
    ),
    283 => array(
      'source' => 'Assembly of Republic of Kosovo',
      'target' => 'Republic of Kosovo Assembly',
    ),
    284 => array(
      'source' => 'Bolivarian Republic of Venezuela',
      'target' => 'República Bolivariana de Venezuela',
    ),
    285 => array(
      'source' => 'Royal Government of Bhutan',
      'target' => 'Royal Government of Bhutan',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Find replace multiple';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_13-rewrite';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 13';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => '[Blank source 4]',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_14-rewrite';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 14';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => 'LandWise:record[[jsonpath_parser:6]]:item[[jsonpath_parser:7]]',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_2-php';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 2';
$feeds_tamper->plugin_id = 'php';
$feeds_tamper->settings = array(
  'php' => '$record_title = $item[\'jsonpath_parser:0\'];
$item_title = $item[\'jsonpath_parser:1\'];
if ($record_title == $item_title){
   return $record_title;
} else {
   return substr($record_title . " - " . $item_title,0,255);
}
',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Generate the title (checks if the record title is different that the item title). Max 255 characters';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_3-copy';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 3';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:2',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_4-copy';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 4';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:2',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_4-explode';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 4';
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
$feeds_tamper->id = 'landwise_json_importer-blank_source_4-find_replace_multiple';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 4';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'ACORD-DRC',
      'target' => 'ACORD',
    ),
    1 => array(
      'source' => 'ActionAid',
      'target' => 'ActionAid',
    ),
    2 => array(
      'source' => 'ActionAid International',
      'target' => 'ActionAid',
    ),
    3 => array(
      'source' => 'African Commission on Human and Peoples\' Rights',
      'target' => 'African Commission on Human and Peoples\' Rights',
    ),
    4 => array(
      'source' => 'African Development Bank (AfDB), United Nations United Nations Economic Commission for Africa (ECA) and African Union Commission (AUC)',
      'target' => 'African Development Bank;United Nations Economic Commission for Africa;African Union',
    ),
    5 => array(
      'source' => 'AKRSP',
      'target' => 'Aga Khan Rural Support Programme',
    ),
    6 => array(
      'source' => 'All-China Women\'s Federation (ACWF)',
      'target' => 'All-China Women\'s Federation',
    ),
    7 => array(
      'source' => 'Amnesty International',
      'target' => 'Amnesty International',
    ),
    8 => array(
      'source' => 'Andhra Pradesh State Government',
      'target' => 'Andhra Pradesh State Government',
    ),
    9 => array(
      'source' => 'Arab Republic of Egypt',
      'target' => 'Arab Republic of Egypt',
    ),
    10 => array(
      'source' => 'ARD & Landesa',
      'target' => 'ARD, Inc.;Landesa - Rural Development Institute',
    ),
    11 => array(
      'source' => 'Asia Indigenous People Pact (AIPP)',
      'target' => 'Asia Indigenous Peoples Pact',
    ),
    12 => array(
      'source' => 'ADB',
      'target' => 'Asian Development Bank',
    ),
    13 => array(
      'source' => 'Asian Development Bank',
      'target' => 'Asian Development Bank',
    ),
    14 => array(
      'source' => 'Association of Parents of Disappeared Persons (APDP)',
      'target' => 'Association of Parents of Disappeared Persons',
    ),
    15 => array(
      'source' => 'BBC News',
      'target' => 'BBC News',
    ),
    16 => array(
      'source' => 'BBC News Staff',
      'target' => 'BBC News',
    ),
    17 => array(
      'source' => 'Caritas Ghana',
      'target' => 'Caritas Ghana',
    ),
    18 => array(
      'source' => 'Associates for Development (AfD) and Centre for Basic Research',
      'target' => 'Centre for Basic Research;Associates for Development',
    ),
    19 => array(
      'source' => 'COHRE and WLLA',
      'target' => 'Centre on Housing Rights and Evictions',
    ),
    20 => array(
      'source' => 'Chronic Poverty Research Centre',
      'target' => 'Chronic Poverty Research Centre',
    ),
    21 => array(
      'source' => 'Chronic Poverty Research Centre (CPRC)',
      'target' => 'Chronic Poverty Research Centre',
    ),
    22 => array(
      'source' => 'Afar Regional State Government',
      'target' => 'Ethiopia Regional State Government Afar',
    ),
    23 => array(
      'source' => 'Amhara National Regional State',
      'target' => 'Ethiopia Regional State Government Amhar',
    ),
    24 => array(
      'source' => 'Amhara Regional State Government',
      'target' => 'Ethiopia Regional State Government Amhar',
    ),
    25 => array(
      'source' => 'FAO',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    26 => array(
      'source' => 'FAO-Dimitra Team',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    27 => array(
      'source' => 'Food and Agricultural Organization of the United Nations (FAO)',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    28 => array(
      'source' => 'Food and Agriculture Organization (FAO)',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    29 => array(
      'source' => 'FAO, IFAD and World Bank',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO);International Fund for Agricultural Development (IFAD);World Bank Group',
    ),
    30 => array(
      'source' => 'World Bank, FAO, and IFAD',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO);International Fund for Agricultural Development (IFAD);World Bank Group',
    ),
    31 => array(
      'source' => 'FAO, IFAD and WFP',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO); International Fund for Agricultural Development (IFAD); World Food Programme',
    ),
    32 => array(
      'source' => 'Forest Peoples Programme',
      'target' => 'Forest Peoples Programme (FPP)',
    ),
    33 => array(
      'source' => 'Deutsche Gesellschaft fr Internationale Zusammenarbeit (GIZ)',
      'target' => 'GIZ',
    ),
    34 => array(
      'source' => 'Global Land Tool Network (GLTN)',
      'target' => 'Global Land Tool Network',
    ),
    35 => array(
      'source' => 'Argentine Nation',
      'target' => 'Gobierno de la República Argentina',
    ),
    36 => array(
      'source' => 'Board of Revenue Government of West Bengal',
      'target' => 'Government of West Bengal',
    ),
    37 => array(
      'source' => 'West Bengal State Government',
      'target' => 'Government of West Bengal',
    ),
    38 => array(
      'source' => 'GRAIN',
      'target' => 'GRAIN',
    ),
    39 => array(
      'source' => 'Habitat for Humanity',
      'target' => 'Habitat for Humanity International (HFHI)',
    ),
    40 => array(
      'source' => 'Human Rights Watch',
      'target' => 'Human Rights Watch',
    ),
    41 => array(
      'source' => 'Human Rights Watch (HRW)',
      'target' => 'Human Rights Watch',
    ),
    42 => array(
      'source' => 'ICRW',
      'target' => 'International Center for Research on Women',
    ),
    43 => array(
      'source' => 'International Center for Research on Women (ICRW)',
      'target' => 'International Center for Research on Women',
    ),
    44 => array(
      'source' => 'ICRW, HSRC, AfD',
      'target' => 'International Center for Research on Women;African Development Bank',
    ),
    45 => array(
      'source' => 'International Center for Research on Women (ICRW) and Uganda Land Alliance (ULA)',
      'target' => 'International Center for Research on Women;Uganda Land Alliance (ULA)',
    ),
    46 => array(
      'source' => 'International Criminal Court (ICC)',
      'target' => 'International Criminal Court Office of the Prosecutor',
    ),
    47 => array(
      'source' => 'FIDH',
      'target' => 'International Federation for Human Rights',
    ),
    48 => array(
      'source' => 'IFPRI',
      'target' => 'International Food Policy Research Institute',
    ),
    49 => array(
      'source' => 'International Food Policy Research Institute (IFPRI)',
      'target' => 'International Food Policy Research Institute',
    ),
    50 => array(
      'source' => 'International Food and Policy Research (IFPRI)',
      'target' => 'International Food Policy Research Institute',
    ),
    51 => array(
      'source' => 'FIDA',
      'target' => 'International Fund for Agricultural Development (IFAD)',
    ),
    52 => array(
      'source' => 'International Fund for Agricultural Development (IFAD)',
      'target' => 'International Fund for Agricultural Development (IFAD)',
    ),
    53 => array(
      'source' => 'International Institute for Environment and Development (IIED)',
      'target' => 'International Institute for Environment and Development',
    ),
    54 => array(
      'source' => 'International Land Coalition',
      'target' => 'International Land Coalition (ILC)',
    ),
    55 => array(
      'source' => 'International Land Coalition (ILC)',
      'target' => 'International Land Coalition (ILC)',
    ),
    56 => array(
      'source' => 'International Lands Coalition (ILC)',
      'target' => 'International Land Coalition (ILC)',
    ),
    57 => array(
      'source' => 'IISD',
      'target' => 'International Sustainable Development Institute',
    ),
    58 => array(
      'source' => 'Kenya Land Alliance (KLA)',
      'target' => 'Kenya Land Alliance (KLA)',
    ),
    59 => array(
      'source' => 'Land Matrix',
      'target' => 'Land Matrix',
    ),
    60 => array(
      'source' => 'Landesa',
      'target' => 'Landesa - Rural Development Institute',
    ),
    61 => array(
      'source' => 'RDI (Landesa)',
      'target' => 'Landesa - Rural Development Institute',
    ),
    62 => array(
      'source' => 'Landesa and Oxfam',
      'target' => 'Landesa - Rural Development Institute;Oxfam International',
    ),
    63 => array(
      'source' => 'Africa Feel Free Network',
      'target' => 'MIFUMI',
    ),
    64 => array(
      'source' => 'Oakland Institute Researchers',
      'target' => 'Oakland Institute',
    ),
    65 => array(
      'source' => 'OHCHR and UN Women ',
      'target' => 'Office of the United Nations High Commissioner for Human Rights; United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    66 => array(
      'source' => 'OHCHR and UNWOMEN',
      'target' => 'Office of the United Nations High Commissioner for Human Rights; United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    67 => array(
      'source' => 'OECD',
      'target' => 'Organisation for Economic Co-operation and Development (OECD)',
    ),
    68 => array(
      'source' => 'OECD and Social Institutions & Gender Index',
      'target' => 'Organisation for Economic Co-operation and Development (OECD)',
    ),
    69 => array(
      'source' => 'ODI',
      'target' => 'Overseas Development Institute',
    ),
    70 => array(
      'source' => 'Oxfam',
      'target' => 'Oxfam International',
    ),
    71 => array(
      'source' => 'Assembly of Kosovo',
      'target' => 'Republic of Kosovo Assembly',
    ),
    72 => array(
      'source' => 'Assembly of Republic of Kosovo',
      'target' => 'Republic of Kosovo Assembly',
    ),
    73 => array(
      'source' => 'Bolivarian Republic of Venezuela',
      'target' => 'República Bolivariana de Venezuela',
    ),
    74 => array(
      'source' => 'Resource Equity and Landesa',
      'target' => 'Resource Equity;Landesa - Rural Development Institute',
    ),
    75 => array(
      'source' => 'Rights and Resources Initiative',
      'target' => 'Rights and Resources Initiative',
    ),
    76 => array(
      'source' => 'Rwanda Initiative for Sustainable Development (RISD)',
      'target' => 'Rwanda Initiative for Sustainable Development',
    ),
    77 => array(
      'source' => 'Rwanda Women Network (RWN)',
      'target' => 'Rwanda Women Network',
    ),
    78 => array(
      'source' => 'Standing Committee of Peoples Congress of Anhui Province',
      'target' => 'Standing Committee of Peoples Congress of Anhui Province',
    ),
    79 => array(
      'source' => 'Standing Committee of Peoples Congress of Anhui Province ',
      'target' => 'Standing Committee of Peoples Congress of Anhui Province',
    ),
    80 => array(
      'source' => 'Standing Committee of Peoples Congress of Beijing City',
      'target' => 'Standing Committee of Peoples Congress of Beijing City',
    ),
    81 => array(
      'source' => 'Standing Committee of Peoples Congress of Chongqing Province ',
      'target' => 'Standing Committee of Peoples Congress of Chongqing Province',
    ),
    82 => array(
      'source' => 'Standing Committee of Peoples Congress of Fujian Province',
      'target' => 'Standing Committee of Peoples Congress of Fujian Province',
    ),
    83 => array(
      'source' => 'Standing Committee of Peoples Congress of Fujian Province ',
      'target' => 'Standing Committee of Peoples Congress of Fujian Province',
    ),
    84 => array(
      'source' => 'Standing Committee of Peoples Congress of Gansu Province',
      'target' => 'Standing Committee of Peoples Congress of Gansu Province',
    ),
    85 => array(
      'source' => 'Standing Committee of Peoples Congress of Gansu Province ',
      'target' => 'Standing Committee of Peoples Congress of Gansu Province',
    ),
    86 => array(
      'source' => 'Standing Committee of Peoples Congress of Guangdong Province',
      'target' => 'Standing Committee of Peoples Congress of Guangdong Province',
    ),
    87 => array(
      'source' => 'Standing Committee of Peoples Congress of Guangxi zhuang autonomous region ',
      'target' => 'Standing Committee of Peoples Congress of Guangxi zhuang autonomous region',
    ),
    88 => array(
      'source' => 'Standing Committee of Peoples Congress of Guizhou Province',
      'target' => 'Standing Committee of Peoples Congress of Guizhou Province',
    ),
    89 => array(
      'source' => 'Standing Committee of Peoples Congress of Guizhou Province ',
      'target' => 'Standing Committee of Peoples Congress of Guizhou Province',
    ),
    90 => array(
      'source' => 'Standing Committee of Peoples Congress of Hainan Province',
      'target' => 'Standing Committee of Peoples Congress of Hainan Province',
    ),
    91 => array(
      'source' => 'Standing Committee of Peoples Congress of Hainan Province ',
      'target' => 'Standing Committee of Peoples Congress of Hainan Province',
    ),
    92 => array(
      'source' => 'Standing Committee of Peoples Congress of Hebei Province',
      'target' => 'Standing Committee of Peoples Congress of Hebei Province',
    ),
    93 => array(
      'source' => 'Standing Committee of Peoples Congress of Henan Province',
      'target' => 'Standing Committee of Peoples Congress of Henan Province',
    ),
    94 => array(
      'source' => 'Standing Committee of Peoples Congress of Hubei Province',
      'target' => 'Standing Committee of Peoples Congress of Hubei Province',
    ),
    95 => array(
      'source' => 'Standing Committee of Peoples Congress of Hunan Province',
      'target' => 'Standing Committee of Peoples Congress of Hunan Province',
    ),
    96 => array(
      'source' => 'Standing Committee of Peoples Congress of Inner Mongolia Autonomous Region',
      'target' => 'Standing Committee of Peoples Congress of Inner Mongolia Autonomous Region',
    ),
    97 => array(
      'source' => 'Standing Committee of Peoples Congress of Inner Mongolia Autonomous Region ',
      'target' => 'Standing Committee of Peoples Congress of Inner Mongolia Autonomous Region',
    ),
    98 => array(
      'source' => 'Standing Committee of Peoples Congress of Jiangsu Province',
      'target' => 'Standing Committee of Peoples Congress of Jiangsu Province',
    ),
    99 => array(
      'source' => 'Standing Committee of Peoples Congress of Jiangxi Province',
      'target' => 'Standing Committee of Peoples Congress of Jiangxi Province',
    ),
    100 => array(
      'source' => 'Standing Committee of Peoples Congress of Jiangxi Province ',
      'target' => 'Standing Committee of Peoples Congress of Jiangxi Province',
    ),
    101 => array(
      'source' => 'Standing Committee of Peoples Congress of Jilin Province',
      'target' => 'Standing Committee of Peoples Congress of Jilin Province',
    ),
    102 => array(
      'source' => 'Standing Committee of Peoples Congress of Jilin Province ',
      'target' => 'Standing Committee of Peoples Congress of Jilin Province',
    ),
    103 => array(
      'source' => 'Standing Committee of Peoples Congress of Liaoning Province',
      'target' => 'Standing Committee of Peoples Congress of Liaoning Province',
    ),
    104 => array(
      'source' => 'Standing Committee of Peoples Congress of Liaoning Province ',
      'target' => 'Standing Committee of Peoples Congress of Liaoning Province',
    ),
    105 => array(
      'source' => 'Standing Committee of Peoples Congress of Ningxia Hui Autonomous Region',
      'target' => 'Standing Committee of Peoples Congress of Ningxia Hui Autonomous Region',
    ),
    106 => array(
      'source' => 'Standing Committee of Peoples Congress of Qinghai Province',
      'target' => 'Standing Committee of Peoples Congress of Qinghai Province',
    ),
    107 => array(
      'source' => 'Standing Committee of Peoples Congress of Qinghai Province  ',
      'target' => 'Standing Committee of Peoples Congress of Qinghai Province',
    ),
    108 => array(
      'source' => 'Standing Committee of Peoples Congress of Shandong Province',
      'target' => 'Standing Committee of Peoples Congress of Shandong Province',
    ),
    109 => array(
      'source' => 'Standing Committee of Peoples Congress of Shandong Province ',
      'target' => 'Standing Committee of Peoples Congress of Shandong Province',
    ),
    110 => array(
      'source' => 'Standing Committee of Peoples Congress of Shanghai City',
      'target' => 'Standing Committee of Peoples Congress of Shanghai City',
    ),
    111 => array(
      'source' => 'Standing Committee of Peoples Congress of Shanxi Province',
      'target' => 'Standing Committee of Peoples Congress of Shanxi Province',
    ),
    112 => array(
      'source' => 'Standing Committee of Peoples Congress of Sichuan Province',
      'target' => 'Standing Committee of Peoples Congress of Sichuan Province',
    ),
    113 => array(
      'source' => 'Standing Committee of Peoples Congress of Tianjin City',
      'target' => 'Standing Committee of Peoples Congress of Tianjin City',
    ),
    114 => array(
      'source' => 'Standing Committee of Peoples Congress of Tibet autonomous region',
      'target' => 'Standing Committee of Peoples Congress of Tibet autonomous region',
    ),
    115 => array(
      'source' => 'Standing Committee of Peoples Congress of Xinjiang Uygur Autonomous Region',
      'target' => 'Standing Committee of Peoples Congress of Xinjiang Uygur Autonomous Region',
    ),
    116 => array(
      'source' => 'Standing Committee of Peoples Congress of Yunnan Province',
      'target' => 'Standing Committee of Peoples Congress of Yunnan Province',
    ),
    117 => array(
      'source' => 'Standing Committee of Peoples Congress of Yunnan Province ',
      'target' => 'Standing Committee of Peoples Congress of Yunnan Province',
    ),
    118 => array(
      'source' => 'Standing Committee of Peoples Congress of Zhejiang Province',
      'target' => 'Standing Committee of Peoples Congress of Zhejiang Province',
    ),
    119 => array(
      'source' => 'Standing Committee of Peoples Congress of Zhejiang Province ',
      'target' => 'Standing Committee of Peoples Congress of Zhejiang Province',
    ),
    120 => array(
      'source' => 'Adjudication Committee of the Supreme People\'s Court',
      'target' => 'Supreme People\'s Court China',
    ),
    121 => array(
      'source' => 'ULA',
      'target' => 'Uganda Land Alliance (ULA)',
    ),
    122 => array(
      'source' => 'Uganda Land Alliance',
      'target' => 'Uganda Land Alliance (ULA)',
    ),
    123 => array(
      'source' => 'United Nations',
      'target' => 'United Nations',
    ),
    124 => array(
      'source' => 'United Nations (UN)',
      'target' => 'United Nations',
    ),
    125 => array(
      'source' => 'UNDP',
      'target' => 'United Nations Development Programme',
    ),
    126 => array(
      'source' => 'United Nations Development Fund (UNDP)',
      'target' => 'United Nations Development Programme',
    ),
    127 => array(
      'source' => 'UN United Nations Economic Commission for Africa',
      'target' => 'United Nations Economic Commission for Africa',
    ),
    128 => array(
      'source' => 'UNECA',
      'target' => 'United Nations Economic Commission for Africa',
    ),
    129 => array(
      'source' => 'United Nations Economic Commission for Africa',
      'target' => 'United Nations Economic Commission for Africa',
    ),
    130 => array(
      'source' => 'UN Women',
      'target' => 'United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    131 => array(
      'source' => 'UN Women ',
      'target' => 'United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    132 => array(
      'source' => 'UN-Women',
      'target' => 'United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    133 => array(
      'source' => 'United Nations Development Fund for Womem (UNIFEM)',
      'target' => 'United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    134 => array(
      'source' => 'United Nations Development Fund for Women (UNIFEM)',
      'target' => 'United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    135 => array(
      'source' => 'UNEP-UN',
      'target' => 'United Nations Environment Programme',
    ),
    136 => array(
      'source' => 'UN-HABITAT',
      'target' => 'United Nations Human Settlements Programme',
    ),
    137 => array(
      'source' => 'USAID',
      'target' => 'USAID',
    ),
    138 => array(
      'source' => 'United States Agency International Development (USAID)',
      'target' => 'USAID',
    ),
    139 => array(
      'source' => 'The World Bank Group',
      'target' => 'World Bank Group',
    ),
    140 => array(
      'source' => 'World Bank',
      'target' => 'World Bank Group',
    ),
    141 => array(
      'source' => 'The World Bank and ADB',
      'target' => 'World Bank Group;Asian Development Bank',
    ),
    142 => array(
      'source' => 'World Resources Institute (WRI)',
      'target' => 'World Resources Institute',
    ),
    143 => array(
      'source' => 'World Wildlife Fund (WWF)',
      'target' => 'World Wildlife Fund',
    ),
    144 => array(
      'source' => 'Andhra Pradesh State Government',
      'target' => 'Andhra Pradesh State Government',
    ),
    145 => array(
      'source' => 'Arab Republic of Egypt',
      'target' => 'Arab Republic of Egypt',
    ),
    146 => array(
      'source' => 'Republic of Austria',
      'target' => 'Austrian Federal Government',
    ),
    147 => array(
      'source' => 'CARE',
      'target' => 'Care International',
    ),
    148 => array(
      'source' => 'FAO',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    149 => array(
      'source' => 'Government of Chile',
      'target' => 'Gobierno de Chile',
    ),
    150 => array(
      'source' => 'Republic of Chile',
      'target' => 'Gobierno de Chile',
    ),
    151 => array(
      'source' => 'Republic of Albania',
      'target' => 'Government of Albania',
    ),
    152 => array(
      'source' => 'Government of Algeria',
      'target' => 'Government of Algeria',
    ),
    153 => array(
      'source' => 'Government of Antigua and Barbuda',
      'target' => 'Government of Antigua and Barbuda',
    ),
    154 => array(
      'source' => 'Argentine Nation',
      'target' => 'Government of Argentina',
    ),
    155 => array(
      'source' => 'Republic of Armenia',
      'target' => 'Government of Armenia',
    ),
    156 => array(
      'source' => 'Commonwealth of Australia',
      'target' => 'Government of Australia',
    ),
    157 => array(
      'source' => 'Government of Belize',
      'target' => 'Government of Belize',
    ),
    158 => array(
      'source' => 'Republic of Benin',
      'target' => 'Government of Benin',
    ),
    159 => array(
      'source' => 'Government of Bermuda',
      'target' => 'Government of Bermuda',
    ),
    160 => array(
      'source' => 'Republic of Bolivia',
      'target' => 'Government of Bolivia',
    ),
    161 => array(
      'source' => 'Republic of Botswana',
      'target' => 'Government of Botswana',
    ),
    162 => array(
      'source' => 'Republic of Brazil',
      'target' => 'Government of Brazil',
    ),
    163 => array(
      'source' => 'Government of Burkina Faso',
      'target' => 'Government of Burkina Faso',
    ),
    164 => array(
      'source' => 'Republic of Burundi',
      'target' => 'Government of Burundi',
    ),
    165 => array(
      'source' => 'Government of Canada',
      'target' => 'Government of Canada',
    ),
    166 => array(
      'source' => 'Government of Cabo Verde',
      'target' => 'Government of Cape Verde',
    ),
    167 => array(
      'source' => 'Republic of Cape Verde',
      'target' => 'Government of Cape Verde',
    ),
    168 => array(
      'source' => 'Republic of Chad',
      'target' => 'Government of Chad',
    ),
    169 => array(
      'source' => 'Republic of Colombia',
      'target' => 'Government of Colombia',
    ),
    170 => array(
      'source' => 'Union of the Comoros',
      'target' => 'Government of Comoros',
    ),
    171 => array(
      'source' => 'Republic of Costa Rica',
      'target' => 'Government of Costa Rica',
    ),
    172 => array(
      'source' => 'Republic of Croatia',
      'target' => 'Government of Croatia',
    ),
    173 => array(
      'source' => 'Government of Cuba',
      'target' => 'Government of Cuba',
    ),
    174 => array(
      'source' => 'Republic of Cuba',
      'target' => 'Government of Cuba',
    ),
    175 => array(
      'source' => 'Government of the DRC',
      'target' => 'Government of Democratic Republic of the Congo',
    ),
    176 => array(
      'source' => 'Government of Denmark',
      'target' => 'Government of Denmark',
    ),
    177 => array(
      'source' => 'Republic of Djibouti',
      'target' => 'Government of Djibouti',
    ),
    178 => array(
      'source' => 'Commonwealth of Dominica',
      'target' => 'Government of Dominica',
    ),
    179 => array(
      'source' => 'Republic of Ecuador',
      'target' => 'Government of Ecuador',
    ),
    180 => array(
      'source' => 'Republic of Equatorial Guinea',
      'target' => 'Government of Equatorial Guinea',
    ),
    181 => array(
      'source' => 'Republic of Estonia',
      'target' => 'Government of Estonia',
    ),
    182 => array(
      'source' => 'Federal Democratic Republic of Ethiopia',
      'target' => 'Government of Ethiopia',
    ),
    183 => array(
      'source' => 'Republic of Finland',
      'target' => 'Government of Finland',
    ),
    184 => array(
      'source' => 'French Republic',
      'target' => 'Government of France',
    ),
    185 => array(
      'source' => 'Gabonese Republic',
      'target' => 'Government of Gabon',
    ),
    186 => array(
      'source' => 'Government of Georgia',
      'target' => 'Government of Georgia',
    ),
    187 => array(
      'source' => 'Government of Germany',
      'target' => 'Government of Germany',
    ),
    188 => array(
      'source' => 'Government of Ghana',
      'target' => 'Government of Ghana',
    ),
    189 => array(
      'source' => 'Parliament of the Republic of Ghana',
      'target' => 'Government of Ghana',
    ),
    190 => array(
      'source' => 'Hellenic Parliament',
      'target' => 'Government of Greece',
    ),
    191 => array(
      'source' => 'Government of Grenada',
      'target' => 'Government of Grenada',
    ),
    192 => array(
      'source' => 'Republic of Guinea',
      'target' => 'Government of Guinea',
    ),
    193 => array(
      'source' => 'Republic of Haiti',
      'target' => 'Government of Haiti',
    ),
    194 => array(
      'source' => 'Republic of Honduras',
      'target' => 'Government of Honduras',
    ),
    195 => array(
      'source' => 'Hungarian Government',
      'target' => 'Government of Hungary',
    ),
    196 => array(
      'source' => 'Republic of Iceland',
      'target' => 'Government of Iceland',
    ),
    197 => array(
      'source' => 'India',
      'target' => 'Government of India',
    ),
    198 => array(
      'source' => 'India\'s Ministry of Law and Justice',
      'target' => 'Government of India',
    ),
    199 => array(
      'source' => 'Government of Indonesia',
      'target' => 'Government of Indonesia',
    ),
    200 => array(
      'source' => 'Republic of Iran',
      'target' => 'Government of Iran',
    ),
    201 => array(
      'source' => 'Republic of Iraq',
      'target' => 'Government of Iraq',
    ),
    202 => array(
      'source' => 'Republic of Ireland',
      'target' => 'Government of Ireland',
    ),
    203 => array(
      'source' => 'Government of Cote d\'Ivoire',
      'target' => 'Government of Ivory Coast',
    ),
    204 => array(
      'source' => 'Republic of Cote d\'Ivoire',
      'target' => 'Government of Ivory Coast',
    ),
    205 => array(
      'source' => 'Parliament of Jamaica',
      'target' => 'Government of Jamaica',
    ),
    206 => array(
      'source' => 'Government of Jordan',
      'target' => 'Government of Jordan',
    ),
    207 => array(
      'source' => 'Karnataka State Government',
      'target' => 'Government of Karnataka (India)',
    ),
    208 => array(
      'source' => 'Government of Kenya',
      'target' => 'Government of Kenya',
    ),
    209 => array(
      'source' => 'Republic of Kenya',
      'target' => 'Government of Kenya',
    ),
    210 => array(
      'source' => 'Kyrgyz Republic',
      'target' => 'Government of Kyrgyzstan',
    ),
    211 => array(
      'source' => 'Lao People\'s Democratic Republic',
      'target' => 'Government of Lao People\'s Democratic Republic',
    ),
    212 => array(
      'source' => 'Kingdom of Lesotho',
      'target' => 'Government of Lesotho',
    ),
    213 => array(
      'source' => 'Republic of Lithuania',
      'target' => 'Government of Lithuania',
    ),
    214 => array(
      'source' => 'Republic of Macedonia',
      'target' => 'Government of Macedonia',
    ),
    215 => array(
      'source' => 'Government of Madagascar',
      'target' => 'Government of Madagascar',
    ),
    216 => array(
      'source' => 'Government of Malawi',
      'target' => 'Government of Malawi',
    ),
    217 => array(
      'source' => 'Republic of Malawi',
      'target' => 'Government of Malawi',
    ),
    218 => array(
      'source' => 'Government of Malaysia',
      'target' => 'Government of Malaysia',
    ),
    219 => array(
      'source' => 'Republic of Maldives',
      'target' => 'Government of Maldives',
    ),
    220 => array(
      'source' => 'Government of Mali',
      'target' => 'Government of Mali',
    ),
    221 => array(
      'source' => 'Republic of Mali',
      'target' => 'Government of Mali',
    ),
    222 => array(
      'source' => 'Republic of Malta',
      'target' => 'Government of Malta',
    ),
    223 => array(
      'source' => 'Government of Mauritius',
      'target' => 'Government of Mauritius',
    ),
    224 => array(
      'source' => 'Republic of Mauritius',
      'target' => 'Government of Mauritius',
    ),
    225 => array(
      'source' => 'United Mexican States',
      'target' => 'Government of Mexico',
    ),
    226 => array(
      'source' => 'Republic of Moldova',
      'target' => 'Government of Moldova',
    ),
    227 => array(
      'source' => 'Government of Mongolia',
      'target' => 'Government of Mongolia',
    ),
    228 => array(
      'source' => 'Republic of Montenegro',
      'target' => 'Government of Montenegro',
    ),
    229 => array(
      'source' => 'Government of Morocco',
      'target' => 'Government of Morocco',
    ),
    230 => array(
      'source' => 'Government of Nepal',
      'target' => 'Government of Nepal',
    ),
    231 => array(
      'source' => 'Government of New Zealand',
      'target' => 'Government of New Zealand',
    ),
    232 => array(
      'source' => 'Government of Niger',
      'target' => 'Government of Niger',
    ),
    233 => array(
      'source' => 'Federal Republic of Nigeria',
      'target' => 'Government of Nigeria',
    ),
    234 => array(
      'source' => 'Government of Nigeria',
      'target' => 'Government of Nigeria',
    ),
    235 => array(
      'source' => 'Government of Norway',
      'target' => 'Government of Norway',
    ),
    236 => array(
      'source' => 'Orissa State Government',
      'target' => 'Government of Odisha (India)',
    ),
    237 => array(
      'source' => 'Independent State of Papua New Guinea',
      'target' => 'Government of Papua New Guinea',
    ),
    238 => array(
      'source' => 'Government of Peru',
      'target' => 'Government of Peru',
    ),
    239 => array(
      'source' => 'Government of the Philippines',
      'target' => 'Government of Philippines',
    ),
    240 => array(
      'source' => 'Republic of Liberia',
      'target' => 'Government of Republic of Liberia',
    ),
    241 => array(
      'source' => 'Russian Federation',
      'target' => 'Government of Russia',
    ),
    242 => array(
      'source' => 'Government of Rwanda',
      'target' => 'Government of Rwanda',
    ),
    243 => array(
      'source' => 'Republic of Rwanda',
      'target' => 'Government of Rwanda',
    ),
    244 => array(
      'source' => 'Government of Senegal',
      'target' => 'Government of Senegal',
    ),
    245 => array(
      'source' => 'Republic of Senegal',
      'target' => 'Government of Senegal',
    ),
    246 => array(
      'source' => 'Republic of Serbia',
      'target' => 'Government of Serbia',
    ),
    247 => array(
      'source' => 'Republic of Seychelles',
      'target' => 'Government of Seychelles',
    ),
    248 => array(
      'source' => 'Government of Sierra Leone',
      'target' => 'Government of Sierra Leone',
    ),
    249 => array(
      'source' => 'Parliament of Sierra Leone',
      'target' => 'Government of Sierra Leone',
    ),
    250 => array(
      'source' => 'Republic of Singapore',
      'target' => 'Government of Singapore',
    ),
    251 => array(
      'source' => 'Government of South Africa',
      'target' => 'Government of South Africa',
    ),
    252 => array(
      'source' => 'Republic of South Africa',
      'target' => 'Government of South Africa',
    ),
    253 => array(
      'source' => 'Government of Spain',
      'target' => 'Government of Spain',
    ),
    254 => array(
      'source' => 'Democratic Socialist Republic of Sri Lanka',
      'target' => 'Government of Sri Lanka',
    ),
    255 => array(
      'source' => 'Government of Swaziland',
      'target' => 'Government of Swaziland',
    ),
    256 => array(
      'source' => 'Government of Sweden',
      'target' => 'Government of Sweden',
    ),
    257 => array(
      'source' => 'Government of Switzerland',
      'target' => 'Government of Switzerland',
    ),
    258 => array(
      'source' => 'Republic of Tajikistan',
      'target' => 'Government of Tajikistan',
    ),
    259 => array(
      'source' => 'Government of Tanzania',
      'target' => 'Government of Tanzania',
    ),
    260 => array(
      'source' => 'Parliament of Tanzania',
      'target' => 'Government of Tanzania',
    ),
    261 => array(
      'source' => 'Parliament of the United Republic of Tanzania',
      'target' => 'Government of Tanzania',
    ),
    262 => array(
      'source' => 'Government of Thailand',
      'target' => 'Government of Thailand',
    ),
    263 => array(
      'source' => 'Commonwealth of the Bahamas',
      'target' => 'Government of the Bahamas',
    ),
    264 => array(
      'source' => 'Czech Republic',
      'target' => 'Government of the Czech Republic',
    ),
    265 => array(
      'source' => 'Government of Cambodia',
      'target' => 'Government of the Kingdom of Cambodia',
    ),
    266 => array(
      'source' => 'Republic of Kazakhstan',
      'target' => 'Government of the Republic of Kazakhstan',
    ),
    267 => array(
      'source' => 'Government of Namibia',
      'target' => 'Government of the Republic of Namibia',
    ),
    268 => array(
      'source' => 'Government of Brunei',
      'target' => 'Government of the Sultanate of Brunei Darussalam',
    ),
    269 => array(
      'source' => 'Government of the Virgin Islands',
      'target' => 'Government of the Virgin Islands',
    ),
    270 => array(
      'source' => 'Republic of Trinidad and Tobago',
      'target' => 'Government of Trinidad and Tobago',
    ),
    271 => array(
      'source' => 'Tunisian Republic',
      'target' => 'Government of Tunisia',
    ),
    272 => array(
      'source' => 'Government of Uganda',
      'target' => 'Government of Uganda',
    ),
    273 => array(
      'source' => 'Republic of Uganda',
      'target' => 'Government of Uganda',
    ),
    274 => array(
      'source' => 'Parliament of Ukraine',
      'target' => 'Government of Ukraine',
    ),
    275 => array(
      'source' => 'Vietnamese Government',
      'target' => 'Government of Vietnam',
    ),
    276 => array(
      'source' => 'West Bengal State Government',
      'target' => 'Government of West Bengal',
    ),
    277 => array(
      'source' => 'Government of Zambia',
      'target' => 'Government of Zambia',
    ),
    278 => array(
      'source' => 'Republic of Zambia',
      'target' => 'Government of Zambia',
    ),
    279 => array(
      'source' => 'Government of Zimbabwe',
      'target' => 'Government of Zimbabwe',
    ),
    280 => array(
      'source' => 'Republic of Zimbabwe',
      'target' => 'Government of Zimbabwe',
    ),
    281 => array(
      'source' => 'Republic of Mozambique',
      'target' => 'Governo da República de Moçambique',
    ),
    282 => array(
      'source' => 'Republic of Guatemala',
      'target' => 'Presidencia de la República Guatemala',
    ),
    283 => array(
      'source' => 'Assembly of Republic of Kosovo',
      'target' => 'Republic of Kosovo Assembly',
    ),
    284 => array(
      'source' => 'Bolivarian Republic of Venezuela',
      'target' => 'República Bolivariana de Venezuela',
    ),
    285 => array(
      'source' => 'Royal Government of Bhutan',
      'target' => 'Royal Government of Bhutan',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Find replace multiple';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_5-rewrite';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 5';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => 'LandWise:record[[jsonpath_parser:6]]:item[[jsonpath_parser:7]]',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_6-rewrite';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 6';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => 'http://landwise.resourceequity.org/records/[jsonpath_parser:6]',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_7-default_value';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 7';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'Resource Equity',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "Resource Equity"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_8-copy';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 8';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:10',
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_8-explode';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 8';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 6;
$feeds_tamper->description = 'Explode';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_8-find_replace_multiple';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 8';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => '15',
      'target' => 'Access to Land & Tenure Security',
    ),
    1 => array(
      'source' => '29',
      'target' => 'Land Policy & Legislation',
    ),
    2 => array(
      'source' => '14',
      'target' => 'Land Policy & Legislation',
    ),
    3 => array(
      'source' => '20',
      'target' => 'Land Policy & Legislation',
    ),
    4 => array(
      'source' => '27',
      'target' => 'Land Policy & Legislation',
    ),
    5 => array(
      'source' => '9',
      'target' => 'Land Policy & Legislation',
    ),
    6 => array(
      'source' => '8',
      'target' => 'Land Policy & Legislation',
    ),
    7 => array(
      'source' => '7',
      'target' => 'Land Use, Management & Investment;Land Policy & Legislation',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Find replace multiple';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_8-sprintf';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 8';
$feeds_tamper->plugin_id = 'sprintf';
$feeds_tamper->settings = array(
  'format' => '%s',
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Convert number to string';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_8-unique';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 8';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 7;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_9-copy';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 9';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:10',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_9-find_replace_multiple';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 9';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => '22',
      'target' => 'Forest Tenure',
    ),
    1 => array(
      'source' => '23',
      'target' => 'Land & Gender',
    ),
    2 => array(
      'source' => '26',
      'target' => 'Indigenous & Community land rights',
    ),
    3 => array(
      'source' => '37',
      'target' => 'Land & Gender',
    ),
    4 => array(
      'source' => '42',
      'target' => 'Land & Gender',
    ),
    5 => array(
      'source' => '19',
      'target' => 'Land & Gender',
    ),
    6 => array(
      'source' => '24',
      'target' => 'Land & Gender',
    ),
    7 => array(
      'source' => '25',
      'target' => 'Land & Gender',
    ),
    8 => array(
      'source' => '41',
      'target' => 'Land Conflicts',
    ),
    9 => array(
      'source' => '27',
      'target' => 'Land Conflicts',
    ),
    10 => array(
      'source' => '30',
      'target' => 'Land Stakeholders & Institutions',
    ),
    11 => array(
      'source' => '39',
      'target' => 'Land, Climate Change & Environment',
    ),
    12 => array(
      'source' => '38',
      'target' => 'Land, Climate Change & Environment',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Find replace multiple';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_9-sprintf';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 9';
$feeds_tamper->plugin_id = 'sprintf';
$feeds_tamper->settings = array(
  'format' => '%s',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Convert number to string';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-blank_source_9-unique';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'Blank source 9';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-jsonpath_parser_11-required';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'jsonpath_parser:11';
$feeds_tamper->plugin_id = 'required';
$feeds_tamper->settings = array(
  'invert' => 1,
  'log' => 0,
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Checks that the restricted field has \'false\' as value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-jsonpath_parser_3-feeds_tamper_conditional';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'jsonpath_parser:3';
$feeds_tamper->plugin_id = 'feeds_tamper_conditional';
$feeds_tamper->settings = array(
  'conditional_field' => 'jsonpath_parser:3',
  'operator' => 'not_equals',
  'negate' => 0,
  'value' => '9999',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Conditional (not 9999)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-jsonpath_parser_3-str_pad';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'jsonpath_parser:3';
$feeds_tamper->plugin_id = 'str_pad';
$feeds_tamper->settings = array(
  'pad_length' => 10,
  'pad_string' => '-08-31',
  'pad_type' => '1',
  'real_pad_string' => '-08-31',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Add the previous month and the last day at the end of the string';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-jsonpath_parser_5-efq_finder';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'jsonpath_parser:5';
$feeds_tamper->plugin_id = 'efq_finder';
$feeds_tamper->settings = array(
  'update' => 'Update',
  'entity_type' => 'taxonomy_term',
  'bundle' => 'languages',
  'field' => 'field_language_code_iso_639_1',
  'column' => 'value',
  'property' => FALSE,
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Entity Field Query finder';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-jsonpath_parser_5-find_replace_multiple';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'jsonpath_parser:5';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => '1',
      'target' => 'en',
    ),
    1 => array(
      'source' => '2',
      'target' => 'fr',
    ),
    2 => array(
      'source' => '3',
      'target' => 'zh',
    ),
    3 => array(
      'source' => '7',
      'target' => 'es',
    ),
    4 => array(
      'source' => '8',
      'target' => 'pt',
    ),
    5 => array(
      'source' => '9',
      'target' => 'nl',
    ),
    6 => array(
      'source' => '11',
      'target' => 'ar',
    ),
    7 => array(
      'source' => '12',
      'target' => 'ru',
    ),
    8 => array(
      'source' => '17',
      'target' => 'de',
    ),
    9 => array(
      'source' => '26',
      'target' => 'am',
    ),
    10 => array(
      'source' => '13',
      'target' => 'ro',
    ),
    11 => array(
      'source' => '14',
      'target' => 'el',
    ),
    12 => array(
      'source' => '25',
      'target' => 'uk',
    ),
    13 => array(
      'source' => '18',
      'target' => 'da',
    ),
    14 => array(
      'source' => '24',
      'target' => 'sl',
    ),
    15 => array(
      'source' => '22',
      'target' => 'sq',
    ),
    16 => array(
      'source' => '15',
      'target' => 'it',
    ),
    17 => array(
      'source' => '21',
      'target' => 'cs',
    ),
    18 => array(
      'source' => '28',
      'target' => 'bn',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Find replace multiple';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-jsonpath_parser_5-php';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'jsonpath_parser:5';
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
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Get Term Name from Term ID (TID)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-jsonpath_parser_5-sprintf';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'jsonpath_parser:5';
$feeds_tamper->plugin_id = 'sprintf';
$feeds_tamper->settings = array(
  'format' => '%s',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Convert number to string';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-jsonpath_parser_8-find_replace_multiple';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'jsonpath_parser:8';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => '3',
      'target' => 'Legislation & Policies',
    ),
    1 => array(
      'source' => '6',
      'target' => 'Journal Articles & Books',
    ),
    2 => array(
      'source' => '8',
      'target' => 'Journal Articles & Books',
    ),
    3 => array(
      'source' => '9',
      'target' => 'Manuals & Guidelines',
    ),
    4 => array(
      'source' => '10',
      'target' => 'Policy Papers & Briefs',
    ),
    5 => array(
      'source' => '11',
      'target' => 'Reports & Research',
    ),
    6 => array(
      'source' => '14',
      'target' => 'Reports & Research',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Find replace multiple';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-jsonpath_parser_8-sprintf';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'jsonpath_parser:8';
$feeds_tamper->plugin_id = 'sprintf';
$feeds_tamper->settings = array(
  'format' => '%s',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Convert number to string';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-jsonpath_parser_9-efq_finder';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'jsonpath_parser:9';
$feeds_tamper->plugin_id = 'efq_finder';
$feeds_tamper->settings = array(
  'update' => 'Update',
  'entity_type' => 'taxonomy_term',
  'bundle' => 'regions',
  'field' => 'field_iso3',
  'column' => 'value',
  'property' => FALSE,
);
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Entity Field Query finder';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-jsonpath_parser_9-find_replace_multiple';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'jsonpath_parser:9';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => '2',
      'target' => 'IND',
    ),
    1 => array(
      'source' => '5',
      'target' => 'CHN',
    ),
    2 => array(
      'source' => '7',
      'target' => 'UGA',
    ),
    3 => array(
      'source' => '8',
      'target' => 'BDI',
    ),
    4 => array(
      'source' => '9',
      'target' => 'RWA',
    ),
    5 => array(
      'source' => '10',
      'target' => 'TZA',
    ),
    6 => array(
      'source' => '11',
      'target' => 'KEN',
    ),
    7 => array(
      'source' => '12',
      'target' => 'GHA',
    ),
    8 => array(
      'source' => '13',
      'target' => 'MOZ',
    ),
    9 => array(
      'source' => '14',
      'target' => 'ZMB',
    ),
    10 => array(
      'source' => '15',
      'target' => 'ZAF',
    ),
    11 => array(
      'source' => '16',
      'target' => 'ZWE',
    ),
    12 => array(
      'source' => '17',
      'target' => 'COD',
    ),
    13 => array(
      'source' => '18',
      'target' => 'CMR',
    ),
    14 => array(
      'source' => '20',
      'target' => 'SLE',
    ),
    15 => array(
      'source' => '21',
      'target' => 'SEN',
    ),
    16 => array(
      'source' => '22',
      'target' => 'ETH',
    ),
    17 => array(
      'source' => '23',
      'target' => 'MWI',
    ),
    18 => array(
      'source' => '24',
      'target' => 'BWA',
    ),
    19 => array(
      'source' => '25',
      'target' => 'NAM',
    ),
    20 => array(
      'source' => '26',
      'target' => 'BGD',
    ),
    21 => array(
      'source' => '27',
      'target' => 'KHM',
    ),
    22 => array(
      'source' => '28',
      'target' => 'NPL',
    ),
    23 => array(
      'source' => '29',
      'target' => 'LKA',
    ),
    24 => array(
      'source' => '30',
      'target' => 'KGZ',
    ),
    25 => array(
      'source' => '31',
      'target' => 'PER',
    ),
    26 => array(
      'source' => '32',
      'target' => 'IDN',
    ),
    27 => array(
      'source' => '33',
      'target' => 'LBR',
    ),
    28 => array(
      'source' => '34',
      'target' => 'GTM',
    ),
    29 => array(
      'source' => '35',
      'target' => 'NGA',
    ),
    30 => array(
      'source' => '36',
      'target' => 'PHL',
    ),
    31 => array(
      'source' => '37',
      'target' => 'SSD',
    ),
    32 => array(
      'source' => '38',
      'target' => 'PAK',
    ),
    33 => array(
      'source' => '39',
      'target' => 'COL',
    ),
    34 => array(
      'source' => '40',
      'target' => 'AGO',
    ),
    35 => array(
      'source' => '41',
      'target' => 'LSO',
    ),
    36 => array(
      'source' => '42',
      'target' => 'ERI',
    ),
    37 => array(
      'source' => '43',
      'target' => 'SWZ',
    ),
    38 => array(
      'source' => '44',
      'target' => 'ARG',
    ),
    39 => array(
      'source' => '45',
      'target' => 'BOL',
    ),
    40 => array(
      'source' => '46',
      'target' => 'BRA',
    ),
    41 => array(
      'source' => '47',
      'target' => 'CHL',
    ),
    42 => array(
      'source' => '48',
      'target' => 'ECU',
    ),
    43 => array(
      'source' => '49',
      'target' => 'PRY',
    ),
    44 => array(
      'source' => '50',
      'target' => 'SUR',
    ),
    45 => array(
      'source' => '51',
      'target' => 'URY',
    ),
    46 => array(
      'source' => '52',
      'target' => 'VEN',
    ),
    47 => array(
      'source' => '53',
      'target' => 'GUY',
    ),
    48 => array(
      'source' => '54',
      'target' => 'BLZ',
    ),
    49 => array(
      'source' => '55',
      'target' => 'CRI',
    ),
    50 => array(
      'source' => '56',
      'target' => 'SLV',
    ),
    51 => array(
      'source' => '57',
      'target' => 'HND',
    ),
    52 => array(
      'source' => '58',
      'target' => 'MEX',
    ),
    53 => array(
      'source' => '59',
      'target' => 'NIC',
    ),
    54 => array(
      'source' => '60',
      'target' => 'PAN',
    ),
    55 => array(
      'source' => '61',
      'target' => 'BMU',
    ),
    56 => array(
      'source' => '62',
      'target' => 'CAN',
    ),
    57 => array(
      'source' => '63',
      'target' => 'GRL',
    ),
    58 => array(
      'source' => '64',
      'target' => 'FLK',
    ),
    59 => array(
      'source' => '65',
      'target' => 'PRI',
    ),
    60 => array(
      'source' => '66',
      'target' => 'VIR',
    ),
    61 => array(
      'source' => '67',
      'target' => 'DOM',
    ),
    62 => array(
      'source' => '68',
      'target' => 'HTI',
    ),
    63 => array(
      'source' => '69',
      'target' => 'JAM',
    ),
    64 => array(
      'source' => '70',
      'target' => 'TTO',
    ),
    65 => array(
      'source' => '71',
      'target' => 'ATG',
    ),
    66 => array(
      'source' => '72',
      'target' => 'AIA',
    ),
    67 => array(
      'source' => '73',
      'target' => 'BHS',
    ),
    68 => array(
      'source' => '74',
      'target' => 'BRB',
    ),
    69 => array(
      'source' => '75',
      'target' => 'ABW',
    ),
    70 => array(
      'source' => '76',
      'target' => 'CUW',
    ),
    71 => array(
      'source' => '77',
      'target' => 'SXM',
    ),
    72 => array(
      'source' => '78',
      'target' => 'VGB',
    ),
    73 => array(
      'source' => '79',
      'target' => 'CYM',
    ),
    74 => array(
      'source' => '80',
      'target' => 'CUB',
    ),
    75 => array(
      'source' => '81',
      'target' => 'DMA',
    ),
    76 => array(
      'source' => '82',
      'target' => 'GRD',
    ),
    77 => array(
      'source' => '83',
      'target' => 'MSR',
    ),
    78 => array(
      'source' => '84',
      'target' => 'KNA',
    ),
    79 => array(
      'source' => '85',
      'target' => 'LCA',
    ),
    80 => array(
      'source' => '86',
      'target' => 'VCT',
    ),
    81 => array(
      'source' => '87',
      'target' => 'BES',
    ),
    82 => array(
      'source' => '88',
      'target' => 'GUF',
    ),
    83 => array(
      'source' => '89',
      'target' => 'BLM',
    ),
    84 => array(
      'source' => '90',
      'target' => 'MAF',
    ),
    85 => array(
      'source' => '91',
      'target' => 'MTQ',
    ),
    86 => array(
      'source' => '92',
      'target' => 'GLP',
    ),
    87 => array(
      'source' => '93',
      'target' => 'SPM',
    ),
    88 => array(
      'source' => '94',
      'target' => 'BEN',
    ),
    89 => array(
      'source' => '95',
      'target' => 'AFG',
    ),
    90 => array(
      'source' => '96',
      'target' => 'BFA',
    ),
    91 => array(
      'source' => '97',
      'target' => 'VNM',
    ),
    92 => array(
      'source' => '98',
      'target' => 'JPN',
    ),
    93 => array(
      'source' => '99',
      'target' => 'TWN',
    ),
    94 => array(
      'source' => '101',
      'target' => 'SLB',
    ),
    95 => array(
      'source' => '102',
      'target' => 'PNG',
    ),
    96 => array(
      'source' => '103',
      'target' => 'ARM',
    ),
    97 => array(
      'source' => '104',
      'target' => 'AZE',
    ),
    98 => array(
      'source' => '105',
      'target' => 'BHR',
    ),
    99 => array(
      'source' => '106',
      'target' => 'BTN',
    ),
    100 => array(
      'source' => '107',
      'target' => 'BRN',
    ),
    101 => array(
      'source' => '108',
      'target' => 'CYP',
    ),
    102 => array(
      'source' => '109',
      'target' => 'PRK',
    ),
    103 => array(
      'source' => '110',
      'target' => 'GEO',
    ),
    104 => array(
      'source' => '111',
      'target' => 'HKG',
    ),
    105 => array(
      'source' => '112',
      'target' => 'IRN',
    ),
    106 => array(
      'source' => '113',
      'target' => 'IRQ',
    ),
    107 => array(
      'source' => '114',
      'target' => 'ISR',
    ),
    108 => array(
      'source' => '115',
      'target' => 'JOR',
    ),
    109 => array(
      'source' => '116',
      'target' => 'KAZ',
    ),
    110 => array(
      'source' => '117',
      'target' => 'KWT',
    ),
    111 => array(
      'source' => '118',
      'target' => 'LAO',
    ),
    112 => array(
      'source' => '119',
      'target' => 'LBN',
    ),
    113 => array(
      'source' => '120',
      'target' => 'MAC',
    ),
    114 => array(
      'source' => '121',
      'target' => 'MYS',
    ),
    115 => array(
      'source' => '122',
      'target' => 'MDV',
    ),
    116 => array(
      'source' => '123',
      'target' => 'MNG',
    ),
    117 => array(
      'source' => '124',
      'target' => 'MMR',
    ),
    118 => array(
      'source' => '125',
      'target' => 'OMN',
    ),
    119 => array(
      'source' => '126',
      'target' => 'QAT',
    ),
    120 => array(
      'source' => '127',
      'target' => 'KOR',
    ),
    121 => array(
      'source' => '128',
      'target' => 'SAU',
    ),
    122 => array(
      'source' => '129',
      'target' => 'SGP',
    ),
    123 => array(
      'source' => '130',
      'target' => 'SYR',
    ),
    124 => array(
      'source' => '131',
      'target' => 'THA',
    ),
    125 => array(
      'source' => '132',
      'target' => 'TLS',
    ),
    126 => array(
      'source' => '133',
      'target' => 'TJK',
    ),
    127 => array(
      'source' => '134',
      'target' => 'TUR',
    ),
    128 => array(
      'source' => '135',
      'target' => 'TKM',
    ),
    129 => array(
      'source' => '136',
      'target' => 'ARE',
    ),
    130 => array(
      'source' => '137',
      'target' => 'UZB',
    ),
    131 => array(
      'source' => '138',
      'target' => 'YEM',
    ),
    132 => array(
      'source' => '139',
      'target' => 'DZA',
    ),
    133 => array(
      'source' => '140',
      'target' => 'TCD',
    ),
    134 => array(
      'source' => '141',
      'target' => 'CPV',
    ),
    135 => array(
      'source' => '142',
      'target' => 'CAF',
    ),
    136 => array(
      'source' => '143',
      'target' => 'COM',
    ),
    137 => array(
      'source' => '144',
      'target' => 'COG',
    ),
    138 => array(
      'source' => '145',
      'target' => 'CIV',
    ),
    139 => array(
      'source' => '146',
      'target' => 'DJI',
    ),
    140 => array(
      'source' => '147',
      'target' => 'EGY',
    ),
    141 => array(
      'source' => '148',
      'target' => 'GNQ',
    ),
    142 => array(
      'source' => '149',
      'target' => 'GAB',
    ),
    143 => array(
      'source' => '150',
      'target' => 'GIN',
    ),
    144 => array(
      'source' => '151',
      'target' => 'GNB',
    ),
    145 => array(
      'source' => '152',
      'target' => 'LBY',
    ),
    146 => array(
      'source' => '153',
      'target' => 'MDG',
    ),
    147 => array(
      'source' => '154',
      'target' => 'MLI',
    ),
    148 => array(
      'source' => '155',
      'target' => 'MRT',
    ),
    149 => array(
      'source' => '156',
      'target' => 'MUS',
    ),
    150 => array(
      'source' => '157',
      'target' => 'MAR',
    ),
    151 => array(
      'source' => '158',
      'target' => 'NER',
    ),
    152 => array(
      'source' => '159',
      'target' => 'SHN',
    ),
    153 => array(
      'source' => '160',
      'target' => 'STP',
    ),
    154 => array(
      'source' => '161',
      'target' => 'SYC',
    ),
    155 => array(
      'source' => '162',
      'target' => 'SOM',
    ),
    156 => array(
      'source' => '163',
      'target' => 'SDN',
    ),
    157 => array(
      'source' => '164',
      'target' => 'GMB',
    ),
    158 => array(
      'source' => '165',
      'target' => 'TGO',
    ),
    159 => array(
      'source' => '166',
      'target' => 'TUN',
    ),
    160 => array(
      'source' => '167',
      'target' => 'ALB',
    ),
    161 => array(
      'source' => '168',
      'target' => 'AND',
    ),
    162 => array(
      'source' => '169',
      'target' => 'AUT',
    ),
    163 => array(
      'source' => '170',
      'target' => 'BLR',
    ),
    164 => array(
      'source' => '171',
      'target' => 'BEL',
    ),
    165 => array(
      'source' => '172',
      'target' => 'BIH',
    ),
    166 => array(
      'source' => '173',
      'target' => 'BGR',
    ),
    167 => array(
      'source' => '174',
      'target' => 'HRV',
    ),
    168 => array(
      'source' => '175',
      'target' => 'CZE',
    ),
    169 => array(
      'source' => '176',
      'target' => 'DNK',
    ),
    170 => array(
      'source' => '177',
      'target' => 'EST',
    ),
    171 => array(
      'source' => '178',
      'target' => 'FIN',
    ),
    172 => array(
      'source' => '179',
      'target' => 'FRA',
    ),
    173 => array(
      'source' => '180',
      'target' => 'DEU',
    ),
    174 => array(
      'source' => '181',
      'target' => 'GRC',
    ),
    175 => array(
      'source' => '182',
      'target' => 'HUN',
    ),
    176 => array(
      'source' => '183',
      'target' => 'ISL',
    ),
    177 => array(
      'source' => '184',
      'target' => 'IRL',
    ),
    178 => array(
      'source' => '185',
      'target' => 'ITA',
    ),
    179 => array(
      'source' => '186',
      'target' => 'LVA',
    ),
    180 => array(
      'source' => '187',
      'target' => 'LIE',
    ),
    181 => array(
      'source' => '188',
      'target' => 'LTU',
    ),
    182 => array(
      'source' => '189',
      'target' => 'LUX',
    ),
    183 => array(
      'source' => '190',
      'target' => 'MKD',
    ),
    184 => array(
      'source' => '191',
      'target' => 'MLT',
    ),
    185 => array(
      'source' => '192',
      'target' => 'MDA',
    ),
    186 => array(
      'source' => '193',
      'target' => 'MCO',
    ),
    187 => array(
      'source' => '194',
      'target' => 'MNE',
    ),
    188 => array(
      'source' => '195',
      'target' => 'NLD',
    ),
    189 => array(
      'source' => '196',
      'target' => 'NOR',
    ),
    190 => array(
      'source' => '197',
      'target' => 'POL',
    ),
    191 => array(
      'source' => '198',
      'target' => 'PRT',
    ),
    192 => array(
      'source' => '199',
      'target' => 'ROU',
    ),
    193 => array(
      'source' => '200',
      'target' => 'RUS',
    ),
    194 => array(
      'source' => '201',
      'target' => 'SRB',
    ),
    195 => array(
      'source' => '202',
      'target' => 'SVN',
    ),
    196 => array(
      'source' => '203',
      'target' => 'ESP',
    ),
    197 => array(
      'source' => '204',
      'target' => 'SWE',
    ),
    198 => array(
      'source' => '205',
      'target' => 'CHE',
    ),
    199 => array(
      'source' => '206',
      'target' => 'GBR',
    ),
    200 => array(
      'source' => '207',
      'target' => 'XKX',
    ),
    201 => array(
      'source' => '208',
      'target' => 'AUS',
    ),
    202 => array(
      'source' => '209',
      'target' => 'NZL',
    ),
    203 => array(
      'source' => '210',
      'target' => 'PNG',
    ),
    204 => array(
      'source' => '211',
      'target' => 'UKR',
    ),
    205 => array(
      'source' => '212',
      'target' => 'SYR',
    ),
    206 => array(
      'source' => '214',
      'target' => 'KGZ',
    ),
    207 => array(
      'source' => '215',
      'target' => 'MMR',
    ),
    208 => array(
      'source' => '216',
      'target' => 'BGD',
    ),
    209 => array(
      'source' => '217',
      'target' => 'KGZ',
    ),
    210 => array(
      'source' => '218',
      'target' => 'RUS',
    ),
    211 => array(
      'source' => '219',
      'target' => 'VUT',
    ),
    212 => array(
      'source' => '221',
      'target' => 'CIV',
    ),
    213 => array(
      'source' => '223',
      'target' => 'FJI',
    ),
    214 => array(
      'source' => '224',
      'target' => 'KIR',
    ),
    215 => array(
      'source' => '225',
      'target' => 'MHL',
    ),
    216 => array(
      'source' => '226',
      'target' => 'FSM',
    ),
    217 => array(
      'source' => '227',
      'target' => 'NRU',
    ),
    218 => array(
      'source' => '228',
      'target' => 'PLW',
    ),
    219 => array(
      'source' => '229',
      'target' => 'WSM',
    ),
    220 => array(
      'source' => '230',
      'target' => 'SVK',
    ),
    221 => array(
      'source' => '231',
      'target' => 'TON',
    ),
    222 => array(
      'source' => '232',
      'target' => 'TUV',
    ),
    223 => array(
      'source' => '233',
      'target' => 'USA',
    ),
    224 => array(
      'source' => '234',
      'target' => 'PSE',
    ),
    225 => array(
      'source' => '242',
      'target' => 'GMB',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Find replace multiple';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-jsonpath_parser_9-php';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'jsonpath_parser:9';
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
$feeds_tamper->weight = 6;
$feeds_tamper->description = 'Get Term Name from Term ID (TID)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'landwise_json_importer-jsonpath_parser_9-sprintf';
$feeds_tamper->importer = 'landwise_json_importer';
$feeds_tamper->source = 'jsonpath_parser:9';
$feeds_tamper->plugin_id = 'sprintf';
$feeds_tamper->settings = array(
  'format' => '%s',
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Convert number to string';

$export[$feeds_tamper->id] = $feeds_tamper;

/******************/
    return $export;
}
