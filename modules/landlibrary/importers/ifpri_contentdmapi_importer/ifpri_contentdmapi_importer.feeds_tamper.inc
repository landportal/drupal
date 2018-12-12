<?php
/**
 * @file
 * ifpri_contentdmapi_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function ifpri_contentdmapi_importer_feeds_tamper_default() {

$export = array();

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_1-default_value';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 1';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'importer_ifpri_contentdmAPI',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "importer_ifpri_contentdmAPI"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_10-array_filter';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 10';
$feeds_tamper->plugin_id = 'array_filter';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Filter empty items';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_10-convert_case';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 10';
$feeds_tamper->plugin_id = 'convert_case';
$feeds_tamper->settings = array(
  'mode' => '1',
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Convert to lower case';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_10-explode';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 10';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Explode (multiple values \';\' separated)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_10-find_replace_multiple';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 10';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'access to markets',
      'target' => 'Land Use, Management & Investment',
    ),
    1 => array(
      'source' => 'actual multiple cropping intensity',
      'target' => 'Land Use, Management & Investment',
    ),
    2 => array(
      'source' => 'adaptive management',
      'target' => 'Land Use, Management & Investment',
    ),
    3 => array(
      'source' => 'agribusiness',
      'target' => 'Land Use, Management & Investment',
    ),
    4 => array(
      'source' => 'agricultural assistance, american -- economic aspects -- developing countries',
      'target' => 'Land Use, Management & Investment',
    ),
    5 => array(
      'source' => 'agricultural expansion',
      'target' => 'Land Use, Management & Investment',
    ),
    6 => array(
      'source' => 'agricultural innovations -- brazil',
      'target' => 'Land Use, Management & Investment',
    ),
    7 => array(
      'source' => 'agricultural intensity',
      'target' => 'Land Use, Management & Investment',
    ),
    8 => array(
      'source' => 'agricultural investment',
      'target' => 'Land Use, Management & Investment',
    ),
    9 => array(
      'source' => 'agricultural land management',
      'target' => 'Land Use, Management & Investment',
    ),
    10 => array(
      'source' => 'agricultural land use',
      'target' => 'Land Use, Management & Investment',
    ),
    11 => array(
      'source' => 'agricultural policies',
      'target' => 'Land Policy & Legislation',
    ),
    12 => array(
      'source' => 'agricultural policy',
      'target' => 'Land Policy & Legislation',
    ),
    13 => array(
      'source' => 'agricultural policy model',
      'target' => 'Land Policy & Legislation',
    ),
    14 => array(
      'source' => 'agricultural soil loss',
      'target' => 'Land Use, Management & Investment',
    ),
    15 => array(
      'source' => 'agricultural subsidies',
      'target' => 'Land Policy & Legislation',
    ),
    16 => array(
      'source' => 'agricultural systems',
      'target' => 'Land Use, Management & Investment',
    ),
    17 => array(
      'source' => 'agricultural systems -- health aspects -- africa, sub-saharan',
      'target' => 'Land Use, Management & Investment',
    ),
    18 => array(
      'source' => 'agricultural technology',
      'target' => 'Land Use, Management & Investment',
    ),
    19 => array(
      'source' => 'agricultural transformation',
      'target' => 'Land Use, Management & Investment',
    ),
    20 => array(
      'source' => 'agri-food sector',
      'target' => 'Land Use, Management & Investment',
    ),
    21 => array(
      'source' => 'agrobiodiversity',
      'target' => 'Land Use, Management & Investment',
    ),
    22 => array(
      'source' => 'agroecological potential',
      'target' => 'Land Use, Management & Investment',
    ),
    23 => array(
      'source' => 'agroecological zones',
      'target' => 'Land Use, Management & Investment',
    ),
    24 => array(
      'source' => 'agroforestry',
      'target' => 'Land Use, Management & Investment',
    ),
    25 => array(
      'source' => 'agroforestry -- amazon river region',
      'target' => 'Land Use, Management & Investment',
    ),
    26 => array(
      'source' => 'agroforestry -- caribbean area',
      'target' => 'Land Use, Management & Investment',
    ),
    27 => array(
      'source' => 'agroforestry -- central america',
      'target' => 'Land Use, Management & Investment',
    ),
    28 => array(
      'source' => 'agroforestry -- economic aspects -- brazil',
      'target' => 'Land Use, Management & Investment',
    ),
    29 => array(
      'source' => 'agroforestry -- farmers -- kenya',
      'target' => 'Land Use, Management & Investment',
    ),
    30 => array(
      'source' => 'agroforestry -- gender issues',
      'target' => 'Land Use, Management & Investment',
    ),
    31 => array(
      'source' => 'agroforestry -- gender issues -- kenya',
      'target' => 'Land Use, Management & Investment',
    ),
    32 => array(
      'source' => 'agroforestry -- government policy -- research -- congresses',
      'target' => 'Land Use, Management & Investment;Land Policy & Legislation',
    ),
    33 => array(
      'source' => 'agroforestry policy',
      'target' => 'Land Use, Management & Investment;Land Policy & Legislation',
    ),
    34 => array(
      'source' => 'agroforestry seeds',
      'target' => 'Land Use, Management & Investment',
    ),
    35 => array(
      'source' => 'agroforestry systems',
      'target' => 'Land Use, Management & Investment',
    ),
    36 => array(
      'source' => 'agroindustrial sector',
      'target' => 'Land Use, Management & Investment',
    ),
    37 => array(
      'source' => 'aquaculture',
      'target' => 'Land Use, Management & Investment',
    ),
    38 => array(
      'source' => 'carbon fertilization',
      'target' => 'Land Use, Management & Investment',
    ),
    39 => array(
      'source' => 'community forest management',
      'target' => 'Land Use, Management & Investment',
    ),
    40 => array(
      'source' => 'conservation agriculture',
      'target' => 'Land Use, Management & Investment',
    ),
    41 => array(
      'source' => 'cover change',
      'target' => 'Land Use, Management & Investment',
    ),
    42 => array(
      'source' => 'cover charge',
      'target' => 'Land Use, Management & Investment',
    ),
    43 => array(
      'source' => 'cropland',
      'target' => 'Land Use, Management & Investment',
    ),
    44 => array(
      'source' => 'cropland expansion',
      'target' => 'Land Use, Management & Investment',
    ),
    45 => array(
      'source' => 'croplands',
      'target' => 'Land Use, Management & Investment',
    ),
    46 => array(
      'source' => 'cropped area',
      'target' => 'Land Use, Management & Investment',
    ),
    47 => array(
      'source' => 'cropping intensity',
      'target' => 'Land Use, Management & Investment',
    ),
    48 => array(
      'source' => 'cropping intensity gap',
      'target' => 'Land Use, Management & Investment',
    ),
    49 => array(
      'source' => 'customary law',
      'target' => 'Land Policy & Legislation',
    ),
    50 => array(
      'source' => 'customary tenure',
      'target' => 'Access to Land & Tenure Security',
    ),
    51 => array(
      'source' => 'decentralization in government',
      'target' => 'Land Policy & Legislation',
    ),
    52 => array(
      'source' => 'decision making',
      'target' => 'Land Policy & Legislation',
    ),
    53 => array(
      'source' => 'devaluation',
      'target' => 'Land Use, Management & Investment',
    ),
    54 => array(
      'source' => 'drivers of land degradation',
      'target' => 'Land Use, Management & Investment',
    ),
    55 => array(
      'source' => 'dynamic markets',
      'target' => 'Land Use, Management & Investment',
    ),
    56 => array(
      'source' => 'economics of land degradation',
      'target' => 'Land Use, Management & Investment',
    ),
    57 => array(
      'source' => 'environmental policies',
      'target' => 'Land Policy & Legislation',
    ),
    58 => array(
      'source' => 'farm policy',
      'target' => 'Land Policy & Legislation',
    ),
    59 => array(
      'source' => 'farming',
      'target' => 'Land Use, Management & Investment',
    ),
    60 => array(
      'source' => 'farming systems',
      'target' => 'Land Use, Management & Investment',
    ),
    61 => array(
      'source' => 'farmland protection',
      'target' => 'Land Use, Management & Investment',
    ),
    62 => array(
      'source' => 'farms',
      'target' => 'Land Use, Management & Investment',
    ),
    63 => array(
      'source' => 'fishery policies',
      'target' => 'Land Policy & Legislation',
    ),
    64 => array(
      'source' => 'fishery policy -- developing countries -- congresses',
      'target' => 'Land Policy & Legislation',
    ),
    65 => array(
      'source' => 'fishery production',
      'target' => 'Land Use, Management & Investment',
    ),
    66 => array(
      'source' => 'fishery production -- forecasting',
      'target' => 'Land Use, Management & Investment',
    ),
    67 => array(
      'source' => 'forest administration',
      'target' => 'Land Use, Management & Investment',
    ),
    68 => array(
      'source' => 'forest clearing',
      'target' => 'Land Use, Management & Investment',
    ),
    69 => array(
      'source' => 'forest conservation',
      'target' => 'Land Use, Management & Investment',
    ),
    70 => array(
      'source' => 'forest ecology',
      'target' => 'Land Use, Management & Investment',
    ),
    71 => array(
      'source' => 'forest management',
      'target' => 'Land Use, Management & Investment',
    ),
    72 => array(
      'source' => 'forest policy -- research -- congresses',
      'target' => 'Land Policy & Legislation',
    ),
    73 => array(
      'source' => 'forest products',
      'target' => 'Land Use, Management & Investment',
    ),
    74 => array(
      'source' => 'forest products -- economic aspects',
      'target' => 'Land Use, Management & Investment',
    ),
    75 => array(
      'source' => 'forest resources',
      'target' => 'Land Use, Management & Investment',
    ),
    76 => array(
      'source' => 'forest sector reform',
      'target' => 'Land Use, Management & Investment',
    ),
    77 => array(
      'source' => 'forest user groups',
      'target' => 'Land Use, Management & Investment',
    ),
    78 => array(
      'source' => 'forestry',
      'target' => 'Land Use, Management & Investment',
    ),
    79 => array(
      'source' => 'forestry resources',
      'target' => 'Land Use, Management & Investment',
    ),
    80 => array(
      'source' => 'forests',
      'target' => 'Land Use, Management & Investment',
    ),
    81 => array(
      'source' => 'forests and forestry',
      'target' => 'Land Use, Management & Investment',
    ),
    82 => array(
      'source' => 'forests and forestry -- social aspects',
      'target' => 'Land Use, Management & Investment',
    ),
    83 => array(
      'source' => 'geographical information systems',
      'target' => 'Land Use, Management & Investment',
    ),
    84 => array(
      'source' => 'global cropland',
      'target' => 'Land Use, Management & Investment',
    ),
    85 => array(
      'source' => 'grassland degradation',
      'target' => 'Land Use, Management & Investment',
    ),
    86 => array(
      'source' => 'grazing biomass',
      'target' => 'Land Use, Management & Investment',
    ),
    87 => array(
      'source' => 'grazing biomass productivity',
      'target' => 'Land Use, Management & Investment',
    ),
    88 => array(
      'source' => 'green water',
      'target' => 'Land Use, Management & Investment',
    ),
    89 => array(
      'source' => 'harvest area',
      'target' => 'Land Use, Management & Investment',
    ),
    90 => array(
      'source' => 'harvested area',
      'target' => 'Land Use, Management & Investment',
    ),
    91 => array(
      'source' => 'integrated soil fertility management',
      'target' => 'Land Use, Management & Investment',
    ),
    92 => array(
      'source' => 'irrigated farming',
      'target' => 'Land Use, Management & Investment',
    ),
    93 => array(
      'source' => 'land clearing',
      'target' => 'Land Use, Management & Investment',
    ),
    94 => array(
      'source' => 'land costs',
      'target' => 'Land Use, Management & Investment',
    ),
    95 => array(
      'source' => 'land cover change',
      'target' => 'Land Use, Management & Investment',
    ),
    96 => array(
      'source' => 'land degradation hotpsots',
      'target' => 'Land Use, Management & Investment',
    ),
    97 => array(
      'source' => 'land degradation hotspots',
      'target' => 'Land Use, Management & Investment',
    ),
    98 => array(
      'source' => 'land distribution',
      'target' => 'Land Use, Management & Investment',
    ),
    99 => array(
      'source' => 'land fragmentation',
      'target' => 'Land Use, Management & Investment',
    ),
    100 => array(
      'source' => 'land management',
      'target' => 'Land Use, Management & Investment',
    ),
    101 => array(
      'source' => 'land markets',
      'target' => 'Land Use, Management & Investment',
    ),
    102 => array(
      'source' => 'land policies',
      'target' => 'Land Policy & Legislation',
    ),
    103 => array(
      'source' => 'land policy',
      'target' => 'Land Policy & Legislation',
    ),
    104 => array(
      'source' => 'land prices',
      'target' => 'Land Use, Management & Investment',
    ),
    105 => array(
      'source' => 'land productivity',
      'target' => 'Land Use, Management & Investment',
    ),
    106 => array(
      'source' => 'land reform',
      'target' => 'Land Policy & Legislation',
    ),
    107 => array(
      'source' => 'land reform [agrarian reform]',
      'target' => 'Land Policy & Legislation',
    ),
    108 => array(
      'source' => 'land rights',
      'target' => 'Access to Land & Tenure Security',
    ),
    109 => array(
      'source' => 'land tenure',
      'target' => 'Access to Land & Tenure Security',
    ),
    110 => array(
      'source' => 'land tenure -- africa',
      'target' => 'Access to Land & Tenure Security',
    ),
    111 => array(
      'source' => 'land tenure -- developing countries',
      'target' => 'Access to Land & Tenure Security',
    ),
    112 => array(
      'source' => 'land tenure -- sumatra',
      'target' => 'Access to Land & Tenure Security',
    ),
    113 => array(
      'source' => 'land tenure contracts',
      'target' => 'Access to Land & Tenure Security',
    ),
    114 => array(
      'source' => 'land use',
      'target' => 'Land Use, Management & Investment',
    ),
    115 => array(
      'source' => 'land use -- economic aspects',
      'target' => 'Land Use, Management & Investment',
    ),
    116 => array(
      'source' => 'land use -- ethiopia -- congresses',
      'target' => 'Land Use, Management & Investment',
    ),
    117 => array(
      'source' => 'land use -- management -- ethiopia',
      'target' => 'Land Use, Management & Investment',
    ),
    118 => array(
      'source' => 'land use -- sumatra',
      'target' => 'Land Use, Management & Investment',
    ),
    119 => array(
      'source' => 'land use allocation',
      'target' => 'Land Use, Management & Investment',
    ),
    120 => array(
      'source' => 'land use mapping',
      'target' => 'Land Use, Management & Investment',
    ),
    121 => array(
      'source' => 'land use, rural -- planning',
      'target' => 'Land Use, Management & Investment',
    ),
    122 => array(
      'source' => 'local governance',
      'target' => 'Land Policy & Legislation',
    ),
    123 => array(
      'source' => 'mapping',
      'target' => 'Land Use, Management & Investment',
    ),
    124 => array(
      'source' => 'natural resource management',
      'target' => 'Land Use, Management & Investment',
    ),
    125 => array(
      'source' => 'natural resources',
      'target' => 'Land Use, Management & Investment',
    ),
    126 => array(
      'source' => 'natural resources -- management',
      'target' => 'Land Use, Management & Investment',
    ),
    127 => array(
      'source' => 'natural resources management',
      'target' => 'Land Use, Management & Investment',
    ),
    128 => array(
      'source' => 'nutrition policies',
      'target' => 'Land Policy & Legislation',
    ),
    129 => array(
      'source' => 'nutrition policy',
      'target' => 'Land Policy & Legislation',
    ),
    130 => array(
      'source' => 'nutrition security',
      'target' => 'Land Policy & Legislation',
    ),
    131 => array(
      'source' => 'prices',
      'target' => 'Land Use, Management & Investment',
    ),
    132 => array(
      'source' => 'public investment',
      'target' => 'Land Use, Management & Investment',
    ),
    133 => array(
      'source' => 'public investments',
      'target' => 'Land Use, Management & Investment',
    ),
    134 => array(
      'source' => 'resource allocation -- gender issues',
      'target' => 'Land Use, Management & Investment',
    ),
    135 => array(
      'source' => 'resource management',
      'target' => 'Land Use, Management & Investment',
    ),
    136 => array(
      'source' => 'ressource management',
      'target' => 'Land Use, Management & Investment',
    ),
    137 => array(
      'source' => 'scrublands',
      'target' => 'Land Use, Management & Investment',
    ),
    138 => array(
      'source' => 'secure access',
      'target' => 'Access to Land & Tenure Security',
    ),
    139 => array(
      'source' => 'soil fertility management',
      'target' => 'Land Use, Management & Investment',
    ),
    140 => array(
      'source' => 'soil management',
      'target' => 'Land Use, Management & Investment',
    ),
    141 => array(
      'source' => 'sustainable agriculture',
      'target' => 'Land Use, Management & Investment',
    ),
    142 => array(
      'source' => 'sustainable farmland management',
      'target' => 'Land Use, Management & Investment',
    ),
    143 => array(
      'source' => 'sustainable forest management',
      'target' => 'Land Use, Management & Investment',
    ),
    144 => array(
      'source' => 'sustainable forestry',
      'target' => 'Land Use, Management & Investment',
    ),
    145 => array(
      'source' => 'sustainable land management',
      'target' => 'Land Use, Management & Investment',
    ),
    146 => array(
      'source' => 'tenure insecurity',
      'target' => 'Access to Land & Tenure Security',
    ),
    147 => array(
      'source' => 'tenurial regimes',
      'target' => 'Access to Land & Tenure Security',
    ),
    148 => array(
      'source' => 'waste management',
      'target' => 'Land Use, Management & Investment',
    ),
    149 => array(
      'source' => 'water',
      'target' => 'Land Use, Management & Investment',
    ),
    150 => array(
      'source' => 'water availability',
      'target' => 'Land Use, Management & Investment',
    ),
    151 => array(
      'source' => 'water conservation',
      'target' => 'Land Use, Management & Investment',
    ),
    152 => array(
      'source' => 'water management',
      'target' => 'Land Use, Management & Investment',
    ),
    153 => array(
      'source' => 'water quality',
      'target' => 'Land Use, Management & Investment',
    ),
    154 => array(
      'source' => 'water resources',
      'target' => 'Land Use, Management & Investment',
    ),
    155 => array(
      'source' => 'water scarcity',
      'target' => 'Land Use, Management & Investment',
    ),
    156 => array(
      'source' => 'water supplies',
      'target' => 'Land Use, Management & Investment',
    ),
    157 => array(
      'source' => 'water use',
      'target' => 'Land Use, Management & Investment',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Find replace multiple (OverArching categories)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_10-rewrite';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 10';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => '[xpathparser:20];[xpathparser:21]',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_10-trim';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 10';
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
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_10-unique';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 10';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 6;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_11-array_filter';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 11';
$feeds_tamper->plugin_id = 'array_filter';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Filter empty items';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_11-convert_case';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 11';
$feeds_tamper->plugin_id = 'convert_case';
$feeds_tamper->settings = array(
  'mode' => '1',
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Convert to lower case';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_11-explode';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 11';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Explode (multiple values \';\' separated)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_11-explode_2';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 11';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 6;
$feeds_tamper->description = 'Explode (multiple values \';\' separated)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_11-find_replace_multiple';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 11';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => '2020 vision',
      'target' => 'Land Stakeholders & Institutions',
    ),
    1 => array(
      'source' => 'agricultural investment',
      'target' => 'Commercial Pressures on Land',
    ),
    2 => array(
      'source' => 'agricultural research',
      'target' => 'Land Stakeholders & Institutions',
    ),
    3 => array(
      'source' => 'agri-food sector',
      'target' => 'Land & Food Security',
    ),
    4 => array(
      'source' => 'agroforestry',
      'target' => 'Forest Tenure',
    ),
    5 => array(
      'source' => 'agroforestry -- gender issues',
      'target' => 'Land & Gender',
    ),
    6 => array(
      'source' => 'agroforestry -- gender issues -- kenya',
      'target' => 'Land & Gender',
    ),
    7 => array(
      'source' => 'case studies',
      'target' => 'Land Stakeholders & Institutions',
    ),
    8 => array(
      'source' => 'child nutrition',
      'target' => 'Land & Food Security',
    ),
    9 => array(
      'source' => 'civil society',
      'target' => 'Land Stakeholders & Institutions',
    ),
    10 => array(
      'source' => 'climate',
      'target' => 'Land, Climate Change & Environment',
    ),
    11 => array(
      'source' => 'climate adaptation',
      'target' => 'Land, Climate Change & Environment',
    ),
    12 => array(
      'source' => 'climate change',
      'target' => 'Land, Climate Change & Environment',
    ),
    13 => array(
      'source' => 'climate change adaptation',
      'target' => 'Land, Climate Change & Environment',
    ),
    14 => array(
      'source' => 'climate variability',
      'target' => 'Land, Climate Change & Environment',
    ),
    15 => array(
      'source' => 'climatic change',
      'target' => 'Land, Climate Change & Environment',
    ),
    16 => array(
      'source' => 'climatic risks',
      'target' => 'Land, Climate Change & Environment',
    ),
    17 => array(
      'source' => 'climatic variability',
      'target' => 'Land, Climate Change & Environment',
    ),
    18 => array(
      'source' => 'community forest management',
      'target' => 'Indigenous & Community Land Rights;Forest Tenure',
    ),
    19 => array(
      'source' => 'community-based organizations',
      'target' => 'Land Stakeholders & Institutions',
    ),
    20 => array(
      'source' => 'concession forestry',
      'target' => 'Forest Tenure',
    ),
    21 => array(
      'source' => 'conflict',
      'target' => 'Land Conflicts',
    ),
    22 => array(
      'source' => 'conflict management',
      'target' => 'Land Conflicts',
    ),
    23 => array(
      'source' => 'conflict resolution',
      'target' => 'Land Conflicts',
    ),
    24 => array(
      'source' => 'customary institutions',
      'target' => 'Land Stakeholders & Institutions',
    ),
    25 => array(
      'source' => 'deforestation',
      'target' => 'Land, Climate Change & Environment',
    ),
    26 => array(
      'source' => 'deforestation -- brazil -- amazon',
      'target' => 'Land, Climate Change & Environment',
    ),
    27 => array(
      'source' => 'degradation',
      'target' => 'Land, Climate Change & Environment',
    ),
    28 => array(
      'source' => 'desertification',
      'target' => 'Land, Climate Change & Environment',
    ),
    29 => array(
      'source' => 'development policy',
      'target' => 'Land Stakeholders & Institutions',
    ),
    30 => array(
      'source' => 'development projects',
      'target' => 'Land Stakeholders & Institutions',
    ),
    31 => array(
      'source' => 'doha developmental round of the world trade organization (wto)',
      'target' => 'Land Stakeholders & Institutions',
    ),
    32 => array(
      'source' => 'drivers of land degradation',
      'target' => 'Land, Climate Change & Environment',
    ),
    33 => array(
      'source' => 'drought',
      'target' => 'Land, Climate Change & Environment',
    ),
    34 => array(
      'source' => 'drought tolerance',
      'target' => 'Land, Climate Change & Environment',
    ),
    35 => array(
      'source' => 'droughts',
      'target' => 'Land, Climate Change & Environment',
    ),
    36 => array(
      'source' => 'dry areas',
      'target' => 'Rangelands, Drylands & Pastoralism',
    ),
    37 => array(
      'source' => 'dry lands',
      'target' => 'Rangelands, Drylands & Pastoralism',
    ),
    38 => array(
      'source' => 'drylands',
      'target' => 'Rangelands, Drylands & Pastoralism',
    ),
    39 => array(
      'source' => 'ecological restoration',
      'target' => 'Rangelands, Drylands & Pastoralism',
    ),
    40 => array(
      'source' => 'economic development projects',
      'target' => 'Land Stakeholders & Institutions',
    ),
    41 => array(
      'source' => 'el niño',
      'target' => 'Land, Climate Change & Environment',
    ),
    42 => array(
      'source' => 'emission factor',
      'target' => 'Land, Climate Change & Environment',
    ),
    43 => array(
      'source' => 'environment',
      'target' => 'Land, Climate Change & Environment',
    ),
    44 => array(
      'source' => 'environmental aspects',
      'target' => 'Land, Climate Change & Environment',
    ),
    45 => array(
      'source' => 'environmental degradation',
      'target' => 'Land, Climate Change & Environment',
    ),
    46 => array(
      'source' => 'environmental degradation -- africa, north',
      'target' => 'Land, Climate Change & Environment',
    ),
    47 => array(
      'source' => 'environmental degradation -- economic aspects',
      'target' => 'Land, Climate Change & Environment',
    ),
    48 => array(
      'source' => 'environmental disasters',
      'target' => 'Land, Climate Change & Environment',
    ),
    49 => array(
      'source' => 'environmental efficiency',
      'target' => 'Land, Climate Change & Environment',
    ),
    50 => array(
      'source' => 'environmental governance',
      'target' => 'Land, Climate Change & Environment',
    ),
    51 => array(
      'source' => 'environmental management',
      'target' => 'Land, Climate Change & Environment',
    ),
    52 => array(
      'source' => 'environmental management\' multiple use',
      'target' => 'Land, Climate Change & Environment',
    ),
    53 => array(
      'source' => 'environmental policies',
      'target' => 'Land, Climate Change & Environment',
    ),
    54 => array(
      'source' => 'environmental protection',
      'target' => 'Land, Climate Change & Environment',
    ),
    55 => array(
      'source' => 'environmental protection -- congresses',
      'target' => 'Land, Climate Change & Environment',
    ),
    56 => array(
      'source' => 'environmental risk',
      'target' => 'Land, Climate Change & Environment',
    ),
    57 => array(
      'source' => 'environmental risks',
      'target' => 'Land, Climate Change & Environment',
    ),
    58 => array(
      'source' => 'environmental security',
      'target' => 'Land, Climate Change & Environment',
    ),
    59 => array(
      'source' => 'environmental services',
      'target' => 'Land, Climate Change & Environment',
    ),
    60 => array(
      'source' => 'environmental shocks',
      'target' => 'Land, Climate Change & Environment',
    ),
    61 => array(
      'source' => 'environmental sustainability',
      'target' => 'Land, Climate Change & Environment',
    ),
    62 => array(
      'source' => 'famine',
      'target' => 'Land & Food Security',
    ),
    63 => array(
      'source' => 'famines -- ethiopia',
      'target' => 'Land & Food Security',
    ),
    64 => array(
      'source' => 'female farmers',
      'target' => 'Land & Gender',
    ),
    65 => array(
      'source' => 'floodplains',
      'target' => 'Land, Climate Change & Environment',
    ),
    66 => array(
      'source' => 'floods',
      'target' => 'Land, Climate Change & Environment',
    ),
    67 => array(
      'source' => 'food crises',
      'target' => 'Land & Food Security',
    ),
    68 => array(
      'source' => 'food crisis',
      'target' => 'Land & Food Security',
    ),
    69 => array(
      'source' => 'food crops',
      'target' => 'Land & Food Security',
    ),
    70 => array(
      'source' => 'food fortification',
      'target' => 'Land & Food Security',
    ),
    71 => array(
      'source' => 'food industry',
      'target' => 'Land & Food Security',
    ),
    72 => array(
      'source' => 'food industry and trade -- health aspects -- africa, sub-saharan',
      'target' => 'Land & Food Security',
    ),
    73 => array(
      'source' => 'food insecurity',
      'target' => 'Land & Food Security',
    ),
    74 => array(
      'source' => 'food loss',
      'target' => 'Land & Food Security',
    ),
    75 => array(
      'source' => 'food policies',
      'target' => 'Land & Food Security',
    ),
    76 => array(
      'source' => 'food policy',
      'target' => 'Land & Food Security',
    ),
    77 => array(
      'source' => 'food prices',
      'target' => 'Land & Food Security',
    ),
    78 => array(
      'source' => 'food production',
      'target' => 'Land & Food Security',
    ),
    79 => array(
      'source' => 'food relief -- developing countries',
      'target' => 'Land & Food Security',
    ),
    80 => array(
      'source' => 'food safety',
      'target' => 'Land & Food Security',
    ),
    81 => array(
      'source' => 'food security',
      'target' => 'Land & Food Security',
    ),
    82 => array(
      'source' => 'food security -- africa',
      'target' => 'Land & Food Security',
    ),
    83 => array(
      'source' => 'food security -- africa, sub-saharan',
      'target' => 'Land & Food Security',
    ),
    84 => array(
      'source' => 'food security -- bangladesh',
      'target' => 'Land & Food Security',
    ),
    85 => array(
      'source' => 'food security -- developing countries',
      'target' => 'Land & Food Security',
    ),
    86 => array(
      'source' => 'food security -- developing countries -- congresses',
      'target' => 'Land & Food Security',
    ),
    87 => array(
      'source' => 'food supply',
      'target' => 'Land & Food Security',
    ),
    88 => array(
      'source' => 'food supply -- africa, sub-saharan',
      'target' => 'Land & Food Security',
    ),
    89 => array(
      'source' => 'food supply -- forecasting',
      'target' => 'Land & Food Security',
    ),
    90 => array(
      'source' => 'food system',
      'target' => 'Land & Food Security',
    ),
    91 => array(
      'source' => 'food wastes',
      'target' => 'Land & Food Security',
    ),
    92 => array(
      'source' => 'food-based intervention',
      'target' => 'Land & Food Security',
    ),
    93 => array(
      'source' => 'forest',
      'target' => 'Forest Tenure',
    ),
    94 => array(
      'source' => 'forest administration',
      'target' => 'Forest Tenure',
    ),
    95 => array(
      'source' => 'forest clearing',
      'target' => 'Forest Tenure',
    ),
    96 => array(
      'source' => 'forest conservation',
      'target' => 'Forest Tenure;Land, Climate Change & Environment',
    ),
    97 => array(
      'source' => 'forest ecology',
      'target' => 'Forest Tenure',
    ),
    98 => array(
      'source' => 'forest management',
      'target' => 'Forest Tenure',
    ),
    99 => array(
      'source' => 'forest management -- nepal',
      'target' => 'Forest Tenure',
    ),
    100 => array(
      'source' => 'forest policy -- research -- congresses',
      'target' => 'Forest Tenure;Land Stakeholders & Institutions',
    ),
    101 => array(
      'source' => 'forest products',
      'target' => 'Forest Tenure',
    ),
    102 => array(
      'source' => 'forest products -- economic aspects',
      'target' => 'Forest Tenure',
    ),
    103 => array(
      'source' => 'forest resources',
      'target' => 'Forest Tenure',
    ),
    104 => array(
      'source' => 'forest sector reform',
      'target' => 'Forest Tenure',
    ),
    105 => array(
      'source' => 'forest user groups',
      'target' => 'Forest Tenure',
    ),
    106 => array(
      'source' => 'forestry',
      'target' => 'Forest Tenure',
    ),
    107 => array(
      'source' => 'forestry resources',
      'target' => 'Forest Tenure',
    ),
    108 => array(
      'source' => 'forests',
      'target' => 'Forest Tenure',
    ),
    109 => array(
      'source' => 'forests and forestry',
      'target' => 'Forest Tenure',
    ),
    110 => array(
      'source' => 'forests and forestry -- social aspects',
      'target' => 'Forest Tenure',
    ),
    111 => array(
      'source' => 'gender',
      'target' => 'Land & Gender',
    ),
    112 => array(
      'source' => 'gender equity',
      'target' => 'Land & Gender',
    ),
    113 => array(
      'source' => 'gender issues',
      'target' => 'Land & Gender',
    ),
    114 => array(
      'source' => 'global food systems',
      'target' => 'Land & Food Security',
    ),
    115 => array(
      'source' => 'governance',
      'target' => 'Land Stakeholders & Institutions',
    ),
    116 => array(
      'source' => 'government',
      'target' => 'Land Stakeholders & Institutions',
    ),
    117 => array(
      'source' => 'grazing biomass',
      'target' => 'Rangelands, Drylands & Pastoralism',
    ),
    118 => array(
      'source' => 'grazing biomass productivity',
      'target' => 'Rangelands, Drylands & Pastoralism',
    ),
    119 => array(
      'source' => 'grazing systems',
      'target' => 'Rangelands, Drylands & Pastoralism',
    ),
    120 => array(
      'source' => 'greenhouse gas',
      'target' => 'Land, Climate Change & Environment',
    ),
    121 => array(
      'source' => 'greenhouse gases',
      'target' => 'Land, Climate Change & Environment',
    ),
    122 => array(
      'source' => 'hunger',
      'target' => 'Land & Food Security',
    ),
    123 => array(
      'source' => 'indigenous knowledge',
      'target' => 'Indigenous & Community Land Rights',
    ),
    124 => array(
      'source' => 'institutions',
      'target' => 'Land Stakeholders & Institutions',
    ),
    125 => array(
      'source' => 'investment',
      'target' => 'Commercial Pressures on Land',
    ),
    126 => array(
      'source' => 'investment policies',
      'target' => 'Commercial Pressures on Land',
    ),
    127 => array(
      'source' => 'investments',
      'target' => 'Commercial Pressures on Land',
    ),
    128 => array(
      'source' => 'land acquisitions',
      'target' => 'Commercial Pressures on Land',
    ),
    129 => array(
      'source' => 'land degradation',
      'target' => 'Land, Climate Change & Environment',
    ),
    130 => array(
      'source' => 'land degradation -- africa, sub-saharan',
      'target' => 'Land, Climate Change & Environment',
    ),
    131 => array(
      'source' => 'land degradation hotpsots',
      'target' => 'Land, Climate Change & Environment',
    ),
    132 => array(
      'source' => 'land degradation hotspots',
      'target' => 'Land, Climate Change & Environment',
    ),
    133 => array(
      'source' => 'legal institutions',
      'target' => 'Land Stakeholders & Institutions',
    ),
    134 => array(
      'source' => 'local governance',
      'target' => 'Land Stakeholders & Institutions',
    ),
    135 => array(
      'source' => 'local institutions',
      'target' => 'Land Stakeholders & Institutions',
    ),
    136 => array(
      'source' => 'millennium development goals',
      'target' => 'Land Stakeholders & Institutions',
    ),
    137 => array(
      'source' => 'modeling cost of land degradation',
      'target' => 'Land, Climate Change & Environment',
    ),
    138 => array(
      'source' => 'non-timber forest products',
      'target' => 'Forest Tenure',
    ),
    139 => array(
      'source' => 'non-timber forest resources',
      'target' => 'Forest Tenure',
    ),
    140 => array(
      'source' => 'nutrition',
      'target' => 'Land & Food Security',
    ),
    141 => array(
      'source' => 'nutrition -- africa, sub-saharan',
      'target' => 'Land & Food Security',
    ),
    142 => array(
      'source' => 'nutrition -- developing countries',
      'target' => 'Land & Food Security',
    ),
    143 => array(
      'source' => 'nutrition policies',
      'target' => 'Land & Food Security',
    ),
    144 => array(
      'source' => 'nutrition policy',
      'target' => 'Land & Food Security',
    ),
    145 => array(
      'source' => 'nutrition security',
      'target' => 'Land & Food Security',
    ),
    146 => array(
      'source' => 'palm oil',
      'target' => 'Commercial Pressures on Land',
    ),
    147 => array(
      'source' => 'participatory forest management',
      'target' => 'Forest Tenure',
    ),
    148 => array(
      'source' => 'pastoral society',
      'target' => 'Rangelands, Drylands & Pastoralism',
    ),
    149 => array(
      'source' => 'pastoralism',
      'target' => 'Rangelands, Drylands & Pastoralism',
    ),
    150 => array(
      'source' => 'prevention of land degradation',
      'target' => 'Land, Climate Change & Environment',
    ),
    151 => array(
      'source' => 'private sector',
      'target' => 'Land Stakeholders & Institutions',
    ),
    152 => array(
      'source' => 'public investment',
      'target' => 'Land Investments',
    ),
    153 => array(
      'source' => 'public investments',
      'target' => 'Land Investments',
    ),
    154 => array(
      'source' => 'public sector',
      'target' => 'Land Stakeholders & Institutions',
    ),
    155 => array(
      'source' => 'public-private partnerships',
      'target' => 'Land Stakeholders & Institutions',
    ),
    156 => array(
      'source' => 'rangelands',
      'target' => 'Rangelands, Drylands & Pastoralism',
    ),
    157 => array(
      'source' => 'redd+',
      'target' => 'Land Stakeholders & Institutions',
    ),
    158 => array(
      'source' => 'research institutions',
      'target' => 'Land Stakeholders & Institutions',
    ),
    159 => array(
      'source' => 'resilience',
      'target' => 'Land, Climate Change & Environment',
    ),
    160 => array(
      'source' => 'resource allocation -- gender issues',
      'target' => 'Land & Gender',
    ),
    161 => array(
      'source' => 'resource competition',
      'target' => 'Land Conflicts',
    ),
    162 => array(
      'source' => 'resource conflict',
      'target' => 'Land Conflicts',
    ),
    163 => array(
      'source' => 'resource degradation',
      'target' => 'Land, Climate Change & Environment',
    ),
    164 => array(
      'source' => 'right of property -- gender issues',
      'target' => 'Land & Gender',
    ),
    165 => array(
      'source' => 'right of property -- gender issues -- africa',
      'target' => 'Land & Gender',
    ),
    166 => array(
      'source' => 'social forestry',
      'target' => 'Forest Tenure',
    ),
    167 => array(
      'source' => 'soil conservation',
      'target' => 'Land, Climate Change & Environment',
    ),
    168 => array(
      'source' => 'soil degradation',
      'target' => 'Land, Climate Change & Environment',
    ),
    169 => array(
      'source' => 'soil degradation -- developing countries',
      'target' => 'Land, Climate Change & Environment',
    ),
    170 => array(
      'source' => 'soil degradation -- india -- uttar pradesh',
      'target' => 'Land, Climate Change & Environment',
    ),
    171 => array(
      'source' => 'soild degradation',
      'target' => 'Land, Climate Change & Environment',
    ),
    172 => array(
      'source' => 'sustainable development -- congresses',
      'target' => 'Land Stakeholders & Institutions',
    ),
    173 => array(
      'source' => 'sustainable forest management',
      'target' => 'Forest Tenure',
    ),
    174 => array(
      'source' => 'sustainable forestry',
      'target' => 'Forest Tenure',
    ),
    175 => array(
      'source' => 'undernourishment',
      'target' => 'Land & Food Security',
    ),
    176 => array(
      'source' => 'urban development',
      'target' => 'Urban Tenure',
    ),
    177 => array(
      'source' => 'urban programming',
      'target' => 'Urban Tenure',
    ),
    178 => array(
      'source' => 'urban spatial model',
      'target' => 'Urban Tenure',
    ),
    179 => array(
      'source' => 'women',
      'target' => 'Land & Gender',
    ),
    180 => array(
      'source' => 'women agricultural laborers --ghana',
      'target' => 'Land & Gender',
    ),
    181 => array(
      'source' => 'women in agriculture',
      'target' => 'Land & Gender',
    ),
    182 => array(
      'source' => 'world food situation',
      'target' => 'Land & Food Security',
    ),
    183 => array(
      'source' => 'world health organization',
      'target' => 'Land Stakeholders & Institutions',
    ),
    184 => array(
      'source' => 'world trade organization',
      'target' => 'Land Stakeholders & Institutions',
    ),
    185 => array(
      'source' => 'wto',
      'target' => 'Land Stakeholders & Institutions',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Find replace multiple (Themes)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_11-rewrite';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 11';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => '[xpathparser:20];[xpathparser:21]',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_11-trim';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 11';
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
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_11-trim_2';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 11';
$feeds_tamper->plugin_id = 'trim';
$feeds_tamper->settings = array(
  'mask' => '',
  'side' => 'trim',
);
$feeds_tamper->weight = 7;
$feeds_tamper->description = 'Trim';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_11-unique';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 11';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 8;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_12-copy';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 12';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'Blank source 8',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy source value (from generated ID)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_13-explode';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 13';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Explode (multiple values \';\' separated)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_13-rewrite';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 13';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => '[xpathparser:22];[xpathparser:23]',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_13-unique';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 13';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_3-rewrite';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 3';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => 'http://ebrary.ifpri.org/cdm/singleitem/collection/[xpathparser:3]/id/[xpathparser:4]',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_4-rewrite';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 4';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => 'http://ebrary.ifpri.org/utils/getfile/collection/[xpathparser:3]/id/[xpathparser:4]/filename/[xpathparser:4]',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_5-default_value';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 5';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'International Food Policy Research Institute',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "International Food Policy Research Institute"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_6-rewrite';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 6';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => 'http://ebrary.ifpri.org/utils/getthumbnail/collection/[xpathparser:3]/id/[xpathparser:4].jpg',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_7-rewrite';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 7';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => '[xpathparser:6]
[xpathparser:7]
[xpathparser:8]',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite (merge all kind of authors/contributors)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_8-rewrite';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 8';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => 'IFPRI-[xpathparser:3]-[xpathparser:4]',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_9-array_filter';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 9';
$feeds_tamper->plugin_id = 'array_filter';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Filter empty items';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_9-convert_case';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 9';
$feeds_tamper->plugin_id = 'convert_case';
$feeds_tamper->settings = array(
  'mode' => '1',
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Convert to lower case';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_9-efq_finder';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 9';
$feeds_tamper->plugin_id = 'efq_finder';
$feeds_tamper->settings = array(
  'update' => 'Update',
  'entity_type' => 'taxonomy_term',
  'bundle' => 'landvoc_concepts',
  'field' => 'field_agrovoc_uri',
  'column' => 'url',
  'property' => FALSE,
);
$feeds_tamper->weight = 10;
$feeds_tamper->description = 'Entity Field Query finder';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_9-explode';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 9';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Explode (multiple values \';\' separated)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_9-explode_2';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 9';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 6;
$feeds_tamper->description = 'Explode (multiple values \';\' separated)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_9-find_replace_multiple';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 9';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => '2020 vision',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2224',
    ),
    1 => array(
      'source' => 'action research',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_6513',
    ),
    2 => array(
      'source' => 'actual multiple cropping intensity',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2807',
    ),
    3 => array(
      'source' => 'adaptive management',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_24866',
    ),
    4 => array(
      'source' => 'agrarian reform',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_196',
    ),
    5 => array(
      'source' => 'agrarian reform -- mexico',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_196',
    ),
    6 => array(
      'source' => 'agribusiness',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203;http://aims.fao.org/aos/agrovoc/c_4bd6790a',
    ),
    7 => array(
      'source' => 'agricultural assistance, american -- economic aspects -- developing countries',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203;http://aims.fao.org/aos/agrovoc/c_4bd6790a',
    ),
    8 => array(
      'source' => 'agricultural development',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203;http://aims.fao.org/aos/agrovoc/c_6701',
    ),
    9 => array(
      'source' => 'agricultural development -- africa',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203;http://aims.fao.org/aos/agrovoc/c_6701',
    ),
    10 => array(
      'source' => 'agricultural development -- brazil',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203;http://aims.fao.org/aos/agrovoc/c_6701',
    ),
    11 => array(
      'source' => 'agricultural expansion',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203;http://aims.fao.org/aos/agrovoc/c_4bd6790a',
    ),
    12 => array(
      'source' => 'agricultural extension',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_4bd6790a',
    ),
    13 => array(
      'source' => 'agricultural growth',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203',
    ),
    14 => array(
      'source' => 'agricultural innovations -- brazil',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_4bd6790a;http://aims.fao.org/aos/agrovoc/c_2807',
    ),
    15 => array(
      'source' => 'agricultural inputs',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203',
    ),
    16 => array(
      'source' => 'agricultural intensification',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203',
    ),
    17 => array(
      'source' => 'agricultural intensity',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203;http://aims.fao.org/aos/agrovoc/c_4bd6790a;http://aims.fao.org/aos/agrovoc/c_2807;http://aims.fao.org/aos/agrovoc/c_2808',
    ),
    18 => array(
      'source' => 'agricultural investment',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_9a4f48b4;http://aims.fao.org/aos/agrovoc/c_203;http://aims.fao.org/aos/agrovoc/c_2808',
    ),
    19 => array(
      'source' => 'agricultural laborers',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2805;http://aims.fao.org/aos/agrovoc/c_203',
    ),
    20 => array(
      'source' => 'agricultural land',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2808;http://aims.fao.org/aos/agrovoc/c_203;http://aims.fao.org/aos/agrovoc/c_37277',
    ),
    21 => array(
      'source' => 'agricultural land management',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_4bd6790a',
    ),
    22 => array(
      'source' => 'agricultural land use',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_4182;http://aims.fao.org/aos/agrovoc/c_203',
    ),
    23 => array(
      'source' => 'agricultural lands',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2808;http://aims.fao.org/aos/agrovoc/c_203;http://aims.fao.org/aos/agrovoc/c_37277',
    ),
    24 => array(
      'source' => 'agricultural policies',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_28633',
    ),
    25 => array(
      'source' => 'agricultural policy',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_28633',
    ),
    26 => array(
      'source' => 'agricultural policy model',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_28633',
    ),
    27 => array(
      'source' => 'agricultural productivity',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203',
    ),
    28 => array(
      'source' => 'agricultural productivity -- africa',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203',
    ),
    29 => array(
      'source' => 'agricultural productivity -- brazil',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203',
    ),
    30 => array(
      'source' => 'agricultural productivity -- uganda',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203',
    ),
    31 => array(
      'source' => 'agricultural research',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203;http://aims.fao.org/aos/agrovoc/c_6513',
    ),
    32 => array(
      'source' => 'agricultural resources',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_9000115;http://aims.fao.org/aos/agrovoc/c_2807;http://aims.fao.org/aos/agrovoc/c_203',
    ),
    33 => array(
      'source' => 'agricultural sector',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203;http://aims.fao.org/aos/agrovoc/c_2805',
    ),
    34 => array(
      'source' => 'agricultural situation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203',
    ),
    35 => array(
      'source' => 'agricultural soil loss',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_4bd6790a',
    ),
    36 => array(
      'source' => 'agricultural structure',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7193',
    ),
    37 => array(
      'source' => 'agricultural subsidies',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203;http://aims.fao.org/aos/agrovoc/c_aca7ac6d;http://aims.fao.org/aos/agrovoc/c_195',
    ),
    38 => array(
      'source' => 'agricultural systems',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203;http://aims.fao.org/aos/agrovoc/c_2807;http://aims.fao.org/aos/agrovoc/c_4bd6790a',
    ),
    39 => array(
      'source' => 'agricultural systems -- health aspects -- africa, sub-saharan',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203;http://aims.fao.org/aos/agrovoc/c_2807;http://aims.fao.org/aos/agrovoc/c_4bd6790a;http://aims.fao.org/aos/agrovoc/c_6705',
    ),
    40 => array(
      'source' => 'agricultural technology',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203',
    ),
    41 => array(
      'source' => 'agricultural transformation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203',
    ),
    42 => array(
      'source' => 'agriculture',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203',
    ),
    43 => array(
      'source' => 'agriculture -- research -- economic aspects',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203;http://aims.fao.org/aos/agrovoc/c_6513;http://aims.fao.org/aos/agrovoc/c_25195',
    ),
    44 => array(
      'source' => 'agriculture-health linkages',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203',
    ),
    45 => array(
      'source' => 'agri-food sector',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203;http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    46 => array(
      'source' => 'agrobiodiversity',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203;http://aims.fao.org/aos/agrovoc/c_2807',
    ),
    47 => array(
      'source' => 'agroecological potential',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2807',
    ),
    48 => array(
      'source' => 'agroecological zones',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_37277;http://aims.fao.org/aos/agrovoc/c_2808',
    ),
    49 => array(
      'source' => 'agroecosystems',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203;http://aims.fao.org/aos/agrovoc/c_25195',
    ),
    50 => array(
      'source' => 'agroforestry',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_330982',
    ),
    51 => array(
      'source' => 'agroforestry -- amazon river region',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_330982',
    ),
    52 => array(
      'source' => 'agroforestry -- caribbean area',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_330982',
    ),
    53 => array(
      'source' => 'agroforestry -- central america',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_330982',
    ),
    54 => array(
      'source' => 'agroforestry -- economic aspects -- brazil',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_330982',
    ),
    55 => array(
      'source' => 'agroforestry -- farmers -- kenya',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_330982;http://aims.fao.org/aos/agrovoc/c_2805',
    ),
    56 => array(
      'source' => 'agroforestry -- gender issues',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_330982;http://aims.fao.org/aos/agrovoc/c_8420',
    ),
    57 => array(
      'source' => 'agroforestry -- gender issues -- kenya',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_330982;http://aims.fao.org/aos/agrovoc/c_8420',
    ),
    58 => array(
      'source' => 'agroforestry -- government policy -- research -- congresses',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_330982;http://aims.fao.org/aos/agrovoc/c_195;http://aims.fao.org/aos/agrovoc/c_6513',
    ),
    59 => array(
      'source' => 'agroforestry -- kenya -- households',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_330982;http://aims.fao.org/aos/agrovoc/c_6705',
    ),
    60 => array(
      'source' => 'agroforestry -- social aspects -- brazil',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_330982',
    ),
    61 => array(
      'source' => 'agroforestry policy',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_330982;http://aims.fao.org/aos/agrovoc/c_195',
    ),
    62 => array(
      'source' => 'agroforestry seeds',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_330982',
    ),
    63 => array(
      'source' => 'agroforestry systems',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_330982;http://aims.fao.org/aos/agrovoc/c_2807',
    ),
    64 => array(
      'source' => 'agroindustrial sector',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_330982',
    ),
    65 => array(
      'source' => 'aquaculture',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_550',
    ),
    66 => array(
      'source' => 'arable land',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2808',
    ),
    67 => array(
      'source' => 'blue water',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_16062',
    ),
    68 => array(
      'source' => 'capacity',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_37836',
    ),
    69 => array(
      'source' => 'capacity building',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_37836',
    ),
    70 => array(
      'source' => 'capacity strengthening',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_37836',
    ),
    71 => array(
      'source' => 'carbon fertilization',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2807',
    ),
    72 => array(
      'source' => 'child nutrition',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_8491;http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    73 => array(
      'source' => 'childcare and work',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_8491',
    ),
    74 => array(
      'source' => 'children',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_8491',
    ),
    75 => array(
      'source' => 'civil society',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2224',
    ),
    76 => array(
      'source' => 'climate',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2593',
    ),
    77 => array(
      'source' => 'climate adaptation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_1666;http://aims.fao.org/aos/agrovoc/c_2593;http://aims.fao.org/aos/agrovoc/c_36580',
    ),
    78 => array(
      'source' => 'climate change',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_1666;http://aims.fao.org/aos/agrovoc/c_2593',
    ),
    79 => array(
      'source' => 'climate change adaptation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_1666;http://aims.fao.org/aos/agrovoc/c_2593;http://aims.fao.org/aos/agrovoc/c_36580',
    ),
    80 => array(
      'source' => 'climate variability',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_1666;http://aims.fao.org/aos/agrovoc/c_2593',
    ),
    81 => array(
      'source' => 'climatic change',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_1666',
    ),
    82 => array(
      'source' => 'climatic risks',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2593',
    ),
    83 => array(
      'source' => 'climatic variability',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_1666',
    ),
    84 => array(
      'source' => 'coastal resources',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_9000021',
    ),
    85 => array(
      'source' => 'collective farms',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2807;http://aims.fao.org/aos/agrovoc/c_2805;http://aims.fao.org/aos/agrovoc/c_45cd8441',
    ),
    86 => array(
      'source' => 'collective ownership',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_29157;http://aims.fao.org/aos/agrovoc/c_66afb052',
    ),
    87 => array(
      'source' => 'common property',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_9000022',
    ),
    88 => array(
      'source' => 'communal ownership',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_9024771d',
    ),
    89 => array(
      'source' => 'communities',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_45cd8441',
    ),
    90 => array(
      'source' => 'community forest management',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_16532;http://aims.fao.org/aos/agrovoc/c_24866;http://aims.fao.org/aos/agrovoc/c_ff890f6b;http://aims.fao.org/aos/agrovoc/c_3055;http://aims.fao.org/aos/agrovoc/c_1374070277659',
    ),
    91 => array(
      'source' => 'community forestry',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_16532',
    ),
    92 => array(
      'source' => 'community involvement',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_45cd8441',
    ),
    93 => array(
      'source' => 'community participation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_45cd8441',
    ),
    94 => array(
      'source' => 'community-based entreprise',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_45cd8441',
    ),
    95 => array(
      'source' => 'community-based organizations',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_45cd8441',
    ),
    96 => array(
      'source' => 'concession forestry',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_3055',
    ),
    97 => array(
      'source' => 'conflict',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_e236b2b1',
    ),
    98 => array(
      'source' => 'conflict management',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_6f79699c',
    ),
    99 => array(
      'source' => 'conflict resolution',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_6f79699c',
    ),
    100 => array(
      'source' => 'conservation agriculture',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203;http://aims.fao.org/aos/agrovoc/c_36580',
    ),
    101 => array(
      'source' => 'contract farming',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_1839',
    ),
    102 => array(
      'source' => 'cover change',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_37897',
    ),
    103 => array(
      'source' => 'cover charge',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_37897',
    ),
    104 => array(
      'source' => 'crop diversification',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2807',
    ),
    105 => array(
      'source' => 'cropland',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2808',
    ),
    106 => array(
      'source' => 'cropland expansion',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2808;http://aims.fao.org/aos/agrovoc/c_2807;http://aims.fao.org/aos/agrovoc/c_203',
    ),
    107 => array(
      'source' => 'croplands',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_37897',
    ),
    108 => array(
      'source' => 'cropped area',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_37897;http://aims.fao.org/aos/agrovoc/c_2808',
    ),
    109 => array(
      'source' => 'cropping intensity',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2807',
    ),
    110 => array(
      'source' => 'cropping intensity gap',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2807',
    ),
    111 => array(
      'source' => 'customary land rights',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_cd44c0b3;http://aims.fao.org/aos/agrovoc/c_66afb052',
    ),
    112 => array(
      'source' => 'customary law',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10222',
    ),
    113 => array(
      'source' => 'customary rights',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_cd44c0b3',
    ),
    114 => array(
      'source' => 'customary tenure',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_56c34d4d;http://aims.fao.org/aos/agrovoc/c_10222;http://aims.fao.org/aos/agrovoc/c_7fc44e33;http://aims.fao.org/aos/agrovoc/c_66afb052',
    ),
    115 => array(
      'source' => 'dairy farms',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2807',
    ),
    116 => array(
      'source' => 'deforestation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_15590;http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    117 => array(
      'source' => 'deforestation -- brazil -- amazon',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_15590;http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    118 => array(
      'source' => 'degradation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_34823;http://aims.fao.org/aos/agrovoc/c_7ffc9d69;http://aims.fao.org/aos/agrovoc/c_36580',
    ),
    119 => array(
      'source' => 'desertification',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2204;http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    120 => array(
      'source' => 'devaluation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_72dd6860',
    ),
    121 => array(
      'source' => 'development',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_35332',
    ),
    122 => array(
      'source' => 'drivers of land degradation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_34823',
    ),
    123 => array(
      'source' => 'drought',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    124 => array(
      'source' => 'drought tolerance',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    125 => array(
      'source' => 'droughts',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    126 => array(
      'source' => 'dry areas',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_330588',
    ),
    127 => array(
      'source' => 'dry lands',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_330588',
    ),
    128 => array(
      'source' => 'drylands',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_330588',
    ),
    129 => array(
      'source' => 'dynamic markets',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_25195',
    ),
    130 => array(
      'source' => 'ecological restoration',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    131 => array(
      'source' => 'economics of land degradation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_34823;http://aims.fao.org/aos/agrovoc/c_25195',
    ),
    132 => array(
      'source' => 'el niño',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_1666;http://aims.fao.org/aos/agrovoc/c_2593',
    ),
    133 => array(
      'source' => 'emission factor',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2593',
    ),
    134 => array(
      'source' => 'environment',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    135 => array(
      'source' => 'environmental aspects',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    136 => array(
      'source' => 'environmental degradation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_34823;http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    137 => array(
      'source' => 'environmental degradation -- africa, north',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_34823;http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    138 => array(
      'source' => 'environmental degradation -- economic aspects',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_34823;http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    139 => array(
      'source' => 'environmental disasters',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10391',
    ),
    140 => array(
      'source' => 'environmental economics',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    141 => array(
      'source' => 'environmental efficiency',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69;http://aims.fao.org/aos/agrovoc/c_36580;http://aims.fao.org/aos/agrovoc/c_2593',
    ),
    142 => array(
      'source' => 'environmental factors',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    143 => array(
      'source' => 'environmental governance',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69;http://aims.fao.org/aos/agrovoc/c_aca7ac6d',
    ),
    144 => array(
      'source' => 'environmental impact analysis',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    145 => array(
      'source' => 'environmental management',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69;http://aims.fao.org/aos/agrovoc/c_36580',
    ),
    146 => array(
      'source' => 'environmental management\' multiple use',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_36580',
    ),
    147 => array(
      'source' => 'environmental policies',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69;http://aims.fao.org/aos/agrovoc/c_195',
    ),
    148 => array(
      'source' => 'environmental protection',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    149 => array(
      'source' => 'environmental protection -- congresses',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    150 => array(
      'source' => 'environmental risk',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    151 => array(
      'source' => 'environmental risks',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    152 => array(
      'source' => 'environmental security',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    153 => array(
      'source' => 'environmental services',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    154 => array(
      'source' => 'environmental shocks',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2593',
    ),
    155 => array(
      'source' => 'environmental sustainability',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    156 => array(
      'source' => 'famine',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    157 => array(
      'source' => 'famines -- ethiopia',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    158 => array(
      'source' => 'farm income',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2807',
    ),
    159 => array(
      'source' => 'farm inputs',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2807',
    ),
    160 => array(
      'source' => 'farm policy',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2807;http://aims.fao.org/aos/agrovoc/c_28633',
    ),
    161 => array(
      'source' => 'farm structure',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7193',
    ),
    162 => array(
      'source' => 'farmers',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2805',
    ),
    163 => array(
      'source' => 'farming',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2807',
    ),
    164 => array(
      'source' => 'farming systems',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2807',
    ),
    165 => array(
      'source' => 'farmland',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2808',
    ),
    166 => array(
      'source' => 'farmland protection',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2808;http://aims.fao.org/aos/agrovoc/c_36580',
    ),
    167 => array(
      'source' => 'farms',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2808;http://aims.fao.org/aos/agrovoc/c_2807',
    ),
    168 => array(
      'source' => 'female farmers',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_8420;http://aims.fao.org/aos/agrovoc/c_2805',
    ),
    169 => array(
      'source' => 'fish',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2934',
    ),
    170 => array(
      'source' => 'fisheries',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2934',
    ),
    171 => array(
      'source' => 'fisheries -- developing countries -- congresses',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2934',
    ),
    172 => array(
      'source' => 'fisheries -- economic aspects',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2934',
    ),
    173 => array(
      'source' => 'fisheries -- economic aspects -- developing countries',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2934',
    ),
    174 => array(
      'source' => 'fishery policies',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2934',
    ),
    175 => array(
      'source' => 'fishery policy -- developing countries -- congresses',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2934',
    ),
    176 => array(
      'source' => 'fishery production',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2934',
    ),
    177 => array(
      'source' => 'fishery production -- forecasting',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2934',
    ),
    178 => array(
      'source' => 'fishery products',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2934',
    ),
    179 => array(
      'source' => 'fishing methods',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2934',
    ),
    180 => array(
      'source' => 'floodplains',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    181 => array(
      'source' => 'floods',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7ffc9d69',
    ),
    182 => array(
      'source' => 'food crises',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    183 => array(
      'source' => 'food crisis',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    184 => array(
      'source' => 'food crops',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    185 => array(
      'source' => 'food fortification',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    186 => array(
      'source' => 'food industry',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    187 => array(
      'source' => 'food industry and trade -- health aspects -- africa, sub-saharan',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    188 => array(
      'source' => 'food insecurity',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    189 => array(
      'source' => 'food loss',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    190 => array(
      'source' => 'food policies',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967;http://aims.fao.org/aos/agrovoc/c_195',
    ),
    191 => array(
      'source' => 'food policy',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    192 => array(
      'source' => 'food prices',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    193 => array(
      'source' => 'food production',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    194 => array(
      'source' => 'food relief -- developing countries',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    195 => array(
      'source' => 'food safety',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    196 => array(
      'source' => 'food security',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    197 => array(
      'source' => 'food security -- africa',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    198 => array(
      'source' => 'food security -- africa, sub-saharan',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    199 => array(
      'source' => 'food security -- bangladesh',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    200 => array(
      'source' => 'food security -- developing countries',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    201 => array(
      'source' => 'food security -- developing countries -- congresses',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    202 => array(
      'source' => 'food supply',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    203 => array(
      'source' => 'food supply -- africa, sub-saharan',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    204 => array(
      'source' => 'food supply -- forecasting',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    205 => array(
      'source' => 'food system',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    206 => array(
      'source' => 'food wastes',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    207 => array(
      'source' => 'food-based intervention',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    208 => array(
      'source' => 'forest',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_24843',
    ),
    209 => array(
      'source' => 'forest administration',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_24843;http://aims.fao.org/aos/agrovoc/c_9000091',
    ),
    210 => array(
      'source' => 'forest clearing',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_3055;http://aims.fao.org/aos/agrovoc/c_1374158672853',
    ),
    211 => array(
      'source' => 'forest conservation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_1374158672853',
    ),
    212 => array(
      'source' => 'forest ecology',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_3055',
    ),
    213 => array(
      'source' => 'forest management',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_3055;http://aims.fao.org/aos/agrovoc/c_1374070277659;http://aims.fao.org/aos/agrovoc/c_24866',
    ),
    214 => array(
      'source' => 'forest management -- nepal',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_3055;http://aims.fao.org/aos/agrovoc/c_1374070277659;http://aims.fao.org/aos/agrovoc/c_24866',
    ),
    215 => array(
      'source' => 'forest policy -- research -- congresses',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_3055;http://aims.fao.org/aos/agrovoc/c_1374070277659;http://aims.fao.org/aos/agrovoc/c_24866;http://aims.fao.org/aos/agrovoc/c_195;http://aims.fao.org/aos/agrovoc/c_28079',
    ),
    216 => array(
      'source' => 'forest products',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_3055',
    ),
    217 => array(
      'source' => 'forest products -- economic aspects',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_3055',
    ),
    218 => array(
      'source' => 'forest resources',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_3055',
    ),
    219 => array(
      'source' => 'forest sector reform',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_3055;http://aims.fao.org/aos/agrovoc/c_4178',
    ),
    220 => array(
      'source' => 'forest user groups',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_3055',
    ),
    221 => array(
      'source' => 'forestry',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_3055',
    ),
    222 => array(
      'source' => 'forestry resources',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_3055;http://aims.fao.org/aos/agrovoc/c_9000115',
    ),
    223 => array(
      'source' => 'forests',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_24843',
    ),
    224 => array(
      'source' => 'forests and forestry',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_24843;http://aims.fao.org/aos/agrovoc/c_3055',
    ),
    225 => array(
      'source' => 'forests and forestry -- social aspects',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_24843;http://aims.fao.org/aos/agrovoc/c_3055',
    ),
    226 => array(
      'source' => 'gender',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_8420',
    ),
    227 => array(
      'source' => 'gender equity',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_8420;http://aims.fao.org/aos/agrovoc/c_1dfe5bfe',
    ),
    228 => array(
      'source' => 'gender issues',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_8420',
    ),
    229 => array(
      'source' => 'geographical information systems',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_35131;http://aims.fao.org/aos/agrovoc/c_9000091',
    ),
    230 => array(
      'source' => 'global cropland',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_37897',
    ),
    231 => array(
      'source' => 'global food systems',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    232 => array(
      'source' => 'grassland degradation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_34823;http://aims.fao.org/aos/agrovoc/c_37897;http://aims.fao.org/aos/agrovoc/c_4182',
    ),
    233 => array(
      'source' => 'grassland management',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_24866',
    ),
    234 => array(
      'source' => 'grasslands',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_37277;http://aims.fao.org/aos/agrovoc/c_2808',
    ),
    235 => array(
      'source' => 'grazing biomass',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_25243',
    ),
    236 => array(
      'source' => 'grazing biomass productivity',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_25243',
    ),
    237 => array(
      'source' => 'grazing systems',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_3369;http://aims.fao.org/aos/agrovoc/c_97241aeb;http://aims.fao.org/aos/agrovoc/c_25243',
    ),
    238 => array(
      'source' => 'green water',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_16062',
    ),
    239 => array(
      'source' => 'greenhouse gas',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_1666',
    ),
    240 => array(
      'source' => 'greenhouse gases',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2593;http://aims.fao.org/aos/agrovoc/c_1666',
    ),
    241 => array(
      'source' => 'harvest area',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2807',
    ),
    242 => array(
      'source' => 'harvested area',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2807;http://aims.fao.org/aos/agrovoc/c_2808',
    ),
    243 => array(
      'source' => 'high value agriculture',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203',
    ),
    244 => array(
      'source' => 'human rights',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_37898',
    ),
    245 => array(
      'source' => 'hunger',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    246 => array(
      'source' => 'impact assessment',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_330990',
    ),
    247 => array(
      'source' => 'indigenous knowledge',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_331524',
    ),
    248 => array(
      'source' => 'inland fisheries',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2934',
    ),
    249 => array(
      'source' => 'integrated soil fertility management',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_24866',
    ),
    250 => array(
      'source' => 'investment',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_9a4f48b4',
    ),
    251 => array(
      'source' => 'investment policies',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_9a4f48b4',
    ),
    252 => array(
      'source' => 'investments',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_9a4f48b4',
    ),
    253 => array(
      'source' => 'irrigated farming',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2807',
    ),
    254 => array(
      'source' => 'land',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_4172',
    ),
    255 => array(
      'source' => 'land acquisitions',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_89d3dcbb',
    ),
    256 => array(
      'source' => 'land capability for agriculture',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_203;http://aims.fao.org/aos/agrovoc/c_4bd6790a',
    ),
    257 => array(
      'source' => 'land clearing',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_1662',
    ),
    258 => array(
      'source' => 'land costs',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_72dd6860',
    ),
    259 => array(
      'source' => 'land cover',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_37897',
    ),
    260 => array(
      'source' => 'land cover change',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_37897',
    ),
    261 => array(
      'source' => 'land degradation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_34823',
    ),
    262 => array(
      'source' => 'land degradation -- africa, sub-saharan',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_34823',
    ),
    263 => array(
      'source' => 'land degradation hotpsots',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_34823',
    ),
    264 => array(
      'source' => 'land degradation hotspots',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_34823',
    ),
    265 => array(
      'source' => 'land distribution',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_37734;http://aims.fao.org/aos/agrovoc/c_37899',
    ),
    266 => array(
      'source' => 'land fragmentation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_0543301f;http://aims.fao.org/aos/agrovoc/c_37899',
    ),
    267 => array(
      'source' => 'land improvement',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_28717',
    ),
    268 => array(
      'source' => 'land management',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_24866',
    ),
    269 => array(
      'source' => 'land markets',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_4175',
    ),
    270 => array(
      'source' => 'land ownership',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_28718',
    ),
    271 => array(
      'source' => 'land policies',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_195',
    ),
    272 => array(
      'source' => 'land policy',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_195',
    ),
    273 => array(
      'source' => 'land prices',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_72dd6860',
    ),
    274 => array(
      'source' => 'land productivity',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_24866',
    ),
    275 => array(
      'source' => 'land reform',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_4178',
    ),
    276 => array(
      'source' => 'land reform [agrarian reform]',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_4178;http://aims.fao.org/aos/agrovoc/c_196',
    ),
    277 => array(
      'source' => 'land rental markets',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_4175;http://aims.fao.org/aos/agrovoc/c_f73955fb',
    ),
    278 => array(
      'source' => 'land resources',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_9000115',
    ),
    279 => array(
      'source' => 'land rights',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_37898',
    ),
    280 => array(
      'source' => 'land tenure',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_12069;http://aims.fao.org/aos/agrovoc/c_66afb052',
    ),
    281 => array(
      'source' => 'land tenure -- africa',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_12069',
    ),
    282 => array(
      'source' => 'land tenure -- developing countries',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_12069',
    ),
    283 => array(
      'source' => 'land tenure -- sumatra',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_12069',
    ),
    284 => array(
      'source' => 'land tenure contracts',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_12069',
    ),
    285 => array(
      'source' => 'land use',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_4182',
    ),
    286 => array(
      'source' => 'land use -- economic aspects',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_4182',
    ),
    287 => array(
      'source' => 'land use -- ethiopia -- congresses',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_4182',
    ),
    288 => array(
      'source' => 'land use -- management -- ethiopia',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_4182',
    ),
    289 => array(
      'source' => 'land use -- sumatra',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_4182',
    ),
    290 => array(
      'source' => 'land use allocation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_4182;http://aims.fao.org/aos/agrovoc/c_1464c114',
    ),
    291 => array(
      'source' => 'land use mapping',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_9000100',
    ),
    292 => array(
      'source' => 'land use, rural -- planning',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_4182;http://aims.fao.org/aos/agrovoc/c_37899;http://aims.fao.org/aos/agrovoc/c_6701',
    ),
    293 => array(
      'source' => 'legal knowledge',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_c1543349',
    ),
    294 => array(
      'source' => 'less favored areas',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_330588',
    ),
    295 => array(
      'source' => 'local governance',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_aca7ac6d',
    ),
    296 => array(
      'source' => 'mapping',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_9000100',
    ),
    297 => array(
      'source' => 'modeling cost of land degradation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_34823',
    ),
    298 => array(
      'source' => 'natural resource management',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_9000115',
    ),
    299 => array(
      'source' => 'natural resources',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_9000115',
    ),
    300 => array(
      'source' => 'natural resources -- management',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_9000115',
    ),
    301 => array(
      'source' => 'natural resources management',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_9000115',
    ),
    302 => array(
      'source' => 'non-timber forest products',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_3055',
    ),
    303 => array(
      'source' => 'non-timber forest resources',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_3055',
    ),
    304 => array(
      'source' => 'nutrition security',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    305 => array(
      'source' => 'palm oil',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_ccc27fe2;http://aims.fao.org/aos/agrovoc/c_5d3b8015',
    ),
    306 => array(
      'source' => 'participatory forest management',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_1374070277659',
    ),
    307 => array(
      'source' => 'pastoral society',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_653f04fe',
    ),
    308 => array(
      'source' => 'pastoralism',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_653f04fe',
    ),
    309 => array(
      'source' => 'potential multiple cropping intensity',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2807',
    ),
    310 => array(
      'source' => 'poverty',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_6151',
    ),
    311 => array(
      'source' => 'poverty alleviation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_6151',
    ),
    312 => array(
      'source' => 'poverty alleviation -- africa',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_6151',
    ),
    313 => array(
      'source' => 'poverty reduction',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_6151',
    ),
    314 => array(
      'source' => 'poverty, rural',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_6151',
    ),
    315 => array(
      'source' => 'prevention of land degradation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_34823',
    ),
    316 => array(
      'source' => 'prices',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_72dd6860',
    ),
    317 => array(
      'source' => 'property',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_37942',
    ),
    318 => array(
      'source' => 'property rights',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_37942',
    ),
    319 => array(
      'source' => 'public investment',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_9a4f48b4',
    ),
    320 => array(
      'source' => 'public investments',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_9a4f48b4',
    ),
    321 => array(
      'source' => 'rangelands',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_6448',
    ),
    322 => array(
      'source' => 'research',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_6513',
    ),
    323 => array(
      'source' => 'research and development',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_6513;http://aims.fao.org/aos/agrovoc/c_331049',
    ),
    324 => array(
      'source' => 'research institutions',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_6513',
    ),
    325 => array(
      'source' => 'research support',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_6513',
    ),
    326 => array(
      'source' => 'resilience',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10391;http://aims.fao.org/aos/agrovoc/c_36580',
    ),
    327 => array(
      'source' => 'resource allocation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_1464c114',
    ),
    328 => array(
      'source' => 'resource allocation -- gender issues',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_1464c114;http://aims.fao.org/aos/agrovoc/c_1dfe5bfe',
    ),
    329 => array(
      'source' => 'resource competition',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_e236b2b1',
    ),
    330 => array(
      'source' => 'resource conflict',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_e236b2b1',
    ),
    331 => array(
      'source' => 'resource degradation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_34823',
    ),
    332 => array(
      'source' => 'resource management',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_9000115',
    ),
    333 => array(
      'source' => 'ressource management',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_9000115',
    ),
    334 => array(
      'source' => 'right of property',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_37942',
    ),
    335 => array(
      'source' => 'right of property -- gender issues',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_37942;http://aims.fao.org/aos/agrovoc/c_1dfe5bfe',
    ),
    336 => array(
      'source' => 'right of property -- gender issues -- africa',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_37942;http://aims.fao.org/aos/agrovoc/c_1dfe5bfe',
    ),
    337 => array(
      'source' => 'rural areas',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_6699',
    ),
    338 => array(
      'source' => 'rural development',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_6701',
    ),
    339 => array(
      'source' => 'rural households',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_6705',
    ),
    340 => array(
      'source' => 'rural population',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_6705',
    ),
    341 => array(
      'source' => 'rural poverty',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_6151;http://aims.fao.org/aos/agrovoc/c_6701',
    ),
    342 => array(
      'source' => 'scrublands',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_6887',
    ),
    343 => array(
      'source' => 'secure access',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_9000090',
    ),
    344 => array(
      'source' => 'small farmers',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2805',
    ),
    345 => array(
      'source' => 'small farms',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2805',
    ),
    346 => array(
      'source' => 'smallholder agroecosystems',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2807',
    ),
    347 => array(
      'source' => 'smallholder dairying in india',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2807',
    ),
    348 => array(
      'source' => 'smallholder farmers',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2805',
    ),
    349 => array(
      'source' => 'smallholder farms',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2805',
    ),
    350 => array(
      'source' => 'smallholders',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2805',
    ),
    351 => array(
      'source' => 'small-scale farmers',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2805',
    ),
    352 => array(
      'source' => 'small-scale fisheries',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2934',
    ),
    353 => array(
      'source' => 'social forestry',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_3055',
    ),
    354 => array(
      'source' => 'soil conservation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_36580',
    ),
    355 => array(
      'source' => 'soil degradation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_34823',
    ),
    356 => array(
      'source' => 'soil degradation -- developing countries',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_34823',
    ),
    357 => array(
      'source' => 'soil degradation -- india -- uttar pradesh',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_34823',
    ),
    358 => array(
      'source' => 'soil fertility management',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_24866',
    ),
    359 => array(
      'source' => 'soil management',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_24866',
    ),
    360 => array(
      'source' => 'soild degradation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_34823',
    ),
    361 => array(
      'source' => 'sustainable agriculture',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_36580;http://aims.fao.org/aos/agrovoc/c_203',
    ),
    362 => array(
      'source' => 'sustainable development',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_35332',
    ),
    363 => array(
      'source' => 'sustainable development -- congresses',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_35332',
    ),
    364 => array(
      'source' => 'sustainable farmland management',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_36580;http://aims.fao.org/aos/agrovoc/c_4bd6790a',
    ),
    365 => array(
      'source' => 'sustainable forest management',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_36580;http://aims.fao.org/aos/agrovoc/c_1374070277659;http://aims.fao.org/aos/agrovoc/c_3055',
    ),
    366 => array(
      'source' => 'sustainable forestry',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_3055;http://aims.fao.org/aos/agrovoc/c_36580',
    ),
    367 => array(
      'source' => 'sustainable land management',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_36580',
    ),
    368 => array(
      'source' => 'tenure insecurity',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_7fc44e33;http://aims.fao.org/aos/agrovoc/c_ffd74ae5',
    ),
    369 => array(
      'source' => 'tenurial regimes',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_66afb052',
    ),
    370 => array(
      'source' => 'traditional farming',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2807',
    ),
    371 => array(
      'source' => 'transaction costs',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_a4f67d48',
    ),
    372 => array(
      'source' => 'urban development',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_4174;http://aims.fao.org/aos/agrovoc/c_8088',
    ),
    373 => array(
      'source' => 'urban programming',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_8088',
    ),
    374 => array(
      'source' => 'urban spatial model',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_8085',
    ),
    375 => array(
      'source' => 'waste management',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_ecf20c17',
    ),
    376 => array(
      'source' => 'water',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_8320',
    ),
    377 => array(
      'source' => 'water availability',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_8320',
    ),
    378 => array(
      'source' => 'water conservation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_8320',
    ),
    379 => array(
      'source' => 'water management',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_8320',
    ),
    380 => array(
      'source' => 'water quality',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_8320',
    ),
    381 => array(
      'source' => 'water resources',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_8320',
    ),
    382 => array(
      'source' => 'water scarcity',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_8320',
    ),
    383 => array(
      'source' => 'water supplies',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_8320',
    ),
    384 => array(
      'source' => 'water use',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_8320',
    ),
    385 => array(
      'source' => 'women',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_8420',
    ),
    386 => array(
      'source' => 'women agricultural laborers --ghana',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_8420',
    ),
    387 => array(
      'source' => 'women in agriculture',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_8420;http://aims.fao.org/aos/agrovoc/c_203',
    ),
    388 => array(
      'source' => 'world food situation',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_10967',
    ),
    389 => array(
      'source' => 'world health organization',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2224',
    ),
    390 => array(
      'source' => 'world trade organization',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2224',
    ),
    391 => array(
      'source' => 'wto',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_2224',
    ),
    392 => array(
      'source' => 'youth',
      'target' => 'http://aims.fao.org/aos/agrovoc/c_8491',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Find replace multiple (to Agrovoc URIs)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_9-php';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 9';
$feeds_tamper->plugin_id = 'php';
$feeds_tamper->settings = array(
  'php' => '$result=array();
if ($field != null) {
   foreach ($field as $concept) {
       $uri = "http://aims.fao.org/aos/agrovoc/";
       if (substr($concept, 0, strlen($uri)) === $uri){
          array_push($result, $concept);
       }
   }
}
return $result;',
);
$feeds_tamper->weight = 9;
$feeds_tamper->description = 'Execute php code. Remove the list items that are not LandVoc concepts';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_9-php_3';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 9';
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
$feeds_tamper->weight = 11;
$feeds_tamper->description = 'Get Term Name from Term ID (TID)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_9-rewrite';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 9';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => '[xpathparser:20];[xpathparser:21]',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_9-trim';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 9';
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
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_9-unique';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 9';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 8;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-blank_source_9-unique_3';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'Blank source 9';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 12;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_10-default_value';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:10';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'English',
  'only_if_empty' => 1,
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Set value "English" if empty';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_10-efq_finder';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:10';
$feeds_tamper->plugin_id = 'efq_finder';
$feeds_tamper->settings = array(
  'update' => 'Update',
  'entity_type' => 'taxonomy_term',
  'bundle' => 'languages',
  'field' => 'field_language_code_iso_639_1',
  'column' => 'value',
  'property' => FALSE,
);
$feeds_tamper->weight = 6;
$feeds_tamper->description = 'Get the Entity TID from ISO 639-1 code';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_10-find_replace_multiple';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:10';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'Arabic',
      'target' => 'ar',
    ),
    1 => array(
      'source' => 'Chinese',
      'target' => 'zh',
    ),
    2 => array(
      'source' => 'English;',
      'target' => 'en',
    ),
    3 => array(
      'source' => 'English',
      'target' => 'en',
    ),
    4 => array(
      'source' => 'French',
      'target' => 'fr',
    ),
    5 => array(
      'source' => 'German',
      'target' => 'de',
    ),
    6 => array(
      'source' => 'Italian',
      'target' => 'it',
    ),
    7 => array(
      'source' => 'Portuguese',
      'target' => 'pt',
    ),
    8 => array(
      'source' => 'Russian',
      'target' => 'ru',
    ),
    9 => array(
      'source' => 'Spanish',
      'target' => 'es',
    ),
    10 => array(
      'source' => 'Japanese',
      'target' => 'ja',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Find replace multiple (language label -> ISO code)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_10-php';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:10';
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
$feeds_tamper->weight = 8;
$feeds_tamper->description = 'Get Term Name from Term ID (TID)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_10-unique';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:10';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 7;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_11-str_pad';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:11';
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
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_14-php';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:14';
$feeds_tamper->plugin_id = 'php';
$feeds_tamper->settings = array(
  'php' => 'if ($field == "PR") {
   return "Peer-reviewed publication";
} else {
   return null;
}',
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'If PR, then set fixed value "Peer-reviewed publication"	';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_15-find_replace_multiple';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:15';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'Book',
      'target' => 'Journal Articles & Books',
    ),
    1 => array(
      'source' => 'Book chapter',
      'target' => 'Journal Articles & Books',
    ),
    2 => array(
      'source' => 'Book review',
      'target' => 'Journal Articles & Books',
    ),
    3 => array(
      'source' => 'Booklet',
      'target' => 'Policy Papers & Briefs',
    ),
    4 => array(
      'source' => 'Brief',
      'target' => 'Policy Papers & Briefs',
    ),
    5 => array(
      'source' => 'Conference Paper',
      'target' => 'Conference Papers & Reports',
    ),
    6 => array(
      'source' => 'Conference proceeding',
      'target' => 'Conference Papers & Reports',
    ),
    7 => array(
      'source' => 'Data paper',
      'target' => 'Policy Papers & Briefs',
    ),
    8 => array(
      'source' => 'Discussion paper',
      'target' => 'Policy Papers & Briefs',
    ),
    9 => array(
      'source' => 'Discussion Paper',
      'target' => 'Policy Papers & Briefs',
    ),
    10 => array(
      'source' => 'Editorial',
      'target' => 'Policy Papers & Briefs',
    ),
    11 => array(
      'source' => 'Essay',
      'target' => 'Policy Papers & Briefs',
    ),
    12 => array(
      'source' => 'Factsheet',
      'target' => 'Policy Papers & Briefs',
    ),
    13 => array(
      'source' => 'Infographic',
      'target' => 'Multimedia',
    ),
    14 => array(
      'source' => 'Journal article',
      'target' => 'Journal Articles & Books',
    ),
    15 => array(
      'source' => 'Journal Issue',
      'target' => 'Journal Articles & Books',
    ),
    16 => array(
      'source' => 'Magazine',
      'target' => 'Journal Articles & Books',
    ),
    17 => array(
      'source' => 'Newsletter',
      'target' => 'Institutional & Promotional Materials',
    ),
    18 => array(
      'source' => 'Project paper',
      'target' => 'Policy Papers & Briefs',
    ),
    19 => array(
      'source' => 'Project paper;',
      'target' => 'Policy Papers & Briefs',
    ),
    20 => array(
      'source' => 'Report',
      'target' => 'Reports & Research',
    ),
    21 => array(
      'source' => 'Speech',
      'target' => 'Conference Papers & Reports',
    ),
    22 => array(
      'source' => 'Thesis-dissertation',
      'target' => 'Peer-reviewed publication',
    ),
    23 => array(
      'source' => 'Tool',
      'target' => 'Training Resources & Tools',
    ),
    24 => array(
      'source' => 'Training materials',
      'target' => 'Training Resources & Tools',
    ),
    25 => array(
      'source' => 'Website',
      'target' => 'Institutional & Promotional Materials',
    ),
    26 => array(
      'source' => 'Working paper',
      'target' => 'Policy Papers & Briefs',
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
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_15-keyword_filter';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:15';
$feeds_tamper->plugin_id = 'keyword_filter';
$feeds_tamper->settings = array(
  'words' => 'News article
Synopsis',
  'word_boundaries' => 0,
  'exact' => 0,
  'case_sensitive' => 0,
  'invert' => 1,
  'word_list' => array(
    0 => 'News article',
    1 => 'Synopsis',
  ),
  'regex' => FALSE,
  'func' => 'mb_stripos',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Keyword filter';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_17-find_replace_multiple';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:17';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'CC BY 3.0 IGO',
      'target' => 'Creative Commons Attribution',
    ),
    1 => array(
      'source' => 'CC BY 3.0',
      'target' => 'Creative Commons Attribution',
    ),
    2 => array(
      'source' => 'CC BY 4.0',
      'target' => 'Creative Commons Attribution',
    ),
    3 => array(
      'source' => 'CC BY-NC-ND 3.0',
      'target' => 'Creative Commons Attribution-NonCommercial-NoDerivs',
    ),
    4 => array(
      'source' => 'CC BY-NC-ND 4.0',
      'target' => 'Creative Commons Attribution-NonCommercial-NoDerivs',
    ),
    5 => array(
      'source' => 'CC BY-NC',
      'target' => 'Creative Commons Attribution-NonCommercial',
    ),
    6 => array(
      'source' => 'CC BY:NC:ND 3.0',
      'target' => 'Creative Commons Attribution-NonCommercial-NoDerivs',
    ),
    7 => array(
      'source' => 'CC BY:NC:ND 4.0',
      'target' => 'Creative Commons Attribution-NonCommercial-NoDerivs',
    ),
    8 => array(
      'source' => 'CC BY:NC',
      'target' => 'Creative Commons Attribution-NonCommercial',
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
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_18-explode';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:18';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Explode (multiple values \';\' separated)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_18-find_replace_multiple';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:18';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'SYRIA',
      'target' => 'Syrian Arab Republic',
    ),
    1 => array(
      'source' => 'UNITED STATES',
      'target' => 'United States of America',
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
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_18-trim';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:18';
$feeds_tamper->plugin_id = 'trim';
$feeds_tamper->settings = array(
  'mask' => '',
  'side' => 'trim',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Trim';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_19-efq_finder';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:19';
$feeds_tamper->plugin_id = 'efq_finder';
$feeds_tamper->settings = array(
  'update' => 'Update',
  'entity_type' => 'taxonomy_term',
  'bundle' => 'regions',
  'field' => 'field_area_code_un_m_49',
  'column' => 'value',
  'property' => FALSE,
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Get the Entity TID from UN M.49 code';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_19-explode';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:19';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Explode (multiple values \';\' separated)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_19-find_replace_multiple';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:19';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'AFRICA  SOUTH OF SAHARA',
      'target' => '202',
    ),
    1 => array(
      'source' => 'AFRICA SOUTH OF SAHARA',
      'target' => '202',
    ),
    2 => array(
      'source' => 'AMERICAS',
      'target' => '019',
    ),
    3 => array(
      'source' => 'CARIBBEAN',
      'target' => '029',
    ),
    4 => array(
      'source' => 'CENTRAL AFRICA',
      'target' => '017',
    ),
    5 => array(
      'source' => 'CENTRAL AMERICA',
      'target' => '013',
    ),
    6 => array(
      'source' => 'CENTRAL ASIA',
      'target' => '143',
    ),
    7 => array(
      'source' => 'EAST AFRICA',
      'target' => '014',
    ),
    8 => array(
      'source' => 'EAST ASIA',
      'target' => '030',
    ),
    9 => array(
      'source' => 'EASTERN EUROPE',
      'target' => '151',
    ),
    10 => array(
      'source' => 'NORTH AFRICA',
      'target' => '015',
    ),
    11 => array(
      'source' => 'NORTH AMERICA',
      'target' => '021',
    ),
    12 => array(
      'source' => 'OCEANIA',
      'target' => '009',
    ),
    13 => array(
      'source' => 'SOUTH AMERICA',
      'target' => '005',
    ),
    14 => array(
      'source' => 'SOUTH ASIA',
      'target' => '034',
    ),
    15 => array(
      'source' => 'SOUTH EAST ASIA',
      'target' => '035',
    ),
    16 => array(
      'source' => 'SOUTHEAST ASIA',
      'target' => '035',
    ),
    17 => array(
      'source' => 'SOUTHERN AFRICA',
      'target' => '018',
    ),
    18 => array(
      'source' => 'SUB-SAHARAN AFRICA',
      'target' => '202',
    ),
    19 => array(
      'source' => 'WEST AFRICA',
      'target' => '011',
    ),
    20 => array(
      'source' => 'WESTERN ASIA',
      'target' => '145',
    ),
    21 => array(
      'source' => 'ASIA',
      'target' => '142',
    ),
    22 => array(
      'source' => 'AMERICA',
      'target' => '019',
    ),
    23 => array(
      'source' => 'AFRICA',
      'target' => '002',
    ),
  ),
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Find replace multiple';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_19-php';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:19';
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
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_19-trim';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:19';
$feeds_tamper->plugin_id = 'trim';
$feeds_tamper->settings = array(
  'mask' => '',
  'side' => 'trim',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Trim';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_19-unique';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:19';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_22-efq_finder';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:22';
$feeds_tamper->plugin_id = 'efq_finder';
$feeds_tamper->settings = array(
  'update' => 'Update',
  'entity_type' => 'taxonomy_term',
  'bundle' => 'regions',
  'field' => 'field_area_code_un_m_49',
  'column' => 'value',
  'property' => FALSE,
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Get the Entity TID from UN M.49 code';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_22-explode';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:22';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Explode (multiple values \';\' separated)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_22-find_replace_multiple';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:22';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'AFRICA  SOUTH OF SAHARA',
      'target' => '202',
    ),
    1 => array(
      'source' => 'AFRICA SOUTH OF SAHARA',
      'target' => '202',
    ),
    2 => array(
      'source' => 'AMERICAS',
      'target' => '019',
    ),
    3 => array(
      'source' => 'CARIBBEAN',
      'target' => '029',
    ),
    4 => array(
      'source' => 'CENTRAL AFRICA',
      'target' => '017',
    ),
    5 => array(
      'source' => 'CENTRAL AMERICA',
      'target' => '013',
    ),
    6 => array(
      'source' => 'CENTRAL ASIA',
      'target' => '143',
    ),
    7 => array(
      'source' => 'EAST AFRICA',
      'target' => '014',
    ),
    8 => array(
      'source' => 'EAST ASIA',
      'target' => '030',
    ),
    9 => array(
      'source' => 'EASTERN EUROPE',
      'target' => '151',
    ),
    10 => array(
      'source' => 'NORTH AFRICA',
      'target' => '015',
    ),
    11 => array(
      'source' => 'NORTH AMERICA',
      'target' => '021',
    ),
    12 => array(
      'source' => 'OCEANIA',
      'target' => '009',
    ),
    13 => array(
      'source' => 'SOUTH AMERICA',
      'target' => '005',
    ),
    14 => array(
      'source' => 'SOUTH ASIA',
      'target' => '034',
    ),
    15 => array(
      'source' => 'SOUTH EAST ASIA',
      'target' => '035',
    ),
    16 => array(
      'source' => 'SOUTHEAST ASIA',
      'target' => '035',
    ),
    17 => array(
      'source' => 'SOUTHERN AFRICA',
      'target' => '018',
    ),
    18 => array(
      'source' => 'SUB-SAHARAN AFRICA',
      'target' => '202',
    ),
    19 => array(
      'source' => 'WEST AFRICA',
      'target' => '011',
    ),
    20 => array(
      'source' => 'WESTERN ASIA',
      'target' => '145',
    ),
    21 => array(
      'source' => 'ASIA',
      'target' => '142',
    ),
    22 => array(
      'source' => 'AMERICA',
      'target' => '019',
    ),
    23 => array(
      'source' => 'AFRICA',
      'target' => '002',
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
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_22-implode';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:22';
$feeds_tamper->plugin_id = 'implode';
$feeds_tamper->settings = array(
  'glue' => ';',
  'real_glue' => ';',
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Implode (;)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_22-trim';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:22';
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
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_23-efq_finder';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:23';
$feeds_tamper->plugin_id = 'efq_finder';
$feeds_tamper->settings = array(
  'update' => 'Update',
  'entity_type' => 'taxonomy_term',
  'bundle' => 'regions',
  'field' => 'name_field',
  'column' => 'value',
  'property' => FALSE,
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Get the Entity TID from Name	';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_23-explode';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:23';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Explode (multiple values \';\' separated)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_23-find_replace_multiple';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:23';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'SYRIA',
      'target' => 'Syrian Arab Republic',
    ),
    1 => array(
      'source' => 'UNITED STATES',
      'target' => 'United States of America',
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
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_23-implode';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:23';
$feeds_tamper->plugin_id = 'implode';
$feeds_tamper->settings = array(
  'glue' => ';',
  'real_glue' => ';',
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Implode (;)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_23-trim';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:23';
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
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_3-find_replace';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:3';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => '/',
  'replace' => '',
  'case_sensitive' => 0,
  'word_boundaries' => 0,
  'whole' => 0,
  'regex' => FALSE,
  'func' => 'str_ireplace',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Find replace (remove \'/\')';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_9-explode';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Explode (multiple values \';\' separated)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_9-find_replace_multiple';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'Agricultural and Applied Economics Association (AAEA)',
      'target' => 'Agricultural & Applied Economics Association',
    ),
    1 => array(
      'source' => 'Asian Development Bank (ADB)',
      'target' => 'Asian Development Bank',
    ),
    2 => array(
      'source' => 'Australian Centre for International Agricultural Research (ACIAR)',
      'target' => 'Australian Centre for International Agricultural Research',
    ),
    3 => array(
      'source' => 'CAB International',
      'target' => 'Centre for Agriculture and Bioscience International',
    ),
    4 => array(
      'source' => 'Center for Development Research (ZEF), University of Bonn',
      'target' => 'Center for Development Research - University of Bonn',
    ),
    5 => array(
      'source' => 'Center for Development Research, University of Bonn',
      'target' => 'Center for Development Research - University of Bonn',
    ),
    6 => array(
      'source' => 'Center for International Development at Harvard University',
      'target' => 'Center for International Development - Harvard University',
    ),
    7 => array(
      'source' => 'Centre for the Study of African Economies',
      'target' => 'Centre for the Study of African Economies - Oxford University',
    ),
    8 => array(
      'source' => 'Deutsche Welthungerhilfe (German AgroAction)',
      'target' => 'Welthungerhilfe',
    ),
    9 => array(
      'source' => 'Eastern and Central Africa Programme for Agricultural Policy Analysis (ECAPAPA)',
      'target' => 'Eastern and Central Africa Programme for Agricultural Policy Analysis',
    ),
    10 => array(
      'source' => 'Elsevier Science',
      'target' => 'Elsevier',
    ),
    11 => array(
      'source' => 'Ethiopian Development Research Institute (EDRI)',
      'target' => 'Ethiopian Development Research Institute',
    ),
    12 => array(
      'source' => 'International Food Policy Research Institute (IFPRI) and Ethiopia Development Research Institute (EDRI)',
      'target' => 'International Food Policy Research Institute;Ethiopian Development Research Institute',
    ),
    13 => array(
      'source' => 'Food and Agricultural Organization of the United Nations (FAO)',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    14 => array(
      'source' => 'Frankfurter Societäts-Medien Gmbh',
      'target' => 'Frankfurter Societäts-Medien GmbH',
    ),
    15 => array(
      'source' => 'Institute of Fisheries, Management and Coastal Community Development, North Sea Centre',
      'target' => 'Institute for Fisheries Management and Coastal Community Development - Aalborg University',
    ),
    16 => array(
      'source' => 'International Center for Living Aquatic Resources Management (ICLARM)',
      'target' => 'International Center for Living Aquatic Resources Management',
    ),
    17 => array(
      'source' => 'International Center for Tropical Agriculture (CIAT)',
      'target' => 'International Center for Tropical Agriculture',
    ),
    18 => array(
      'source' => 'International Centre for Research in Agroforestry (ICRA), Tokyo Metropolitan University',
      'target' => 'World Agroforestry Centre',
    ),
    19 => array(
      'source' => 'International Centre for Trade and Sustainable Development (ICTSD)',
      'target' => 'Tokyo Metropolitan University',
    ),
    20 => array(
      'source' => 'International Food Policy Research Institute ( IFPRI)',
      'target' => 'International Food Policy Research Institute',
    ),
    21 => array(
      'source' => 'International Food Policy Research Institute (IFPRI)',
      'target' => 'International Food Policy Research Institute',
    ),
    22 => array(
      'source' => 'International Initiative for Impact Evaluation (3ie)',
      'target' => 'International Initiative for Impact Evaluation',
    ),
    23 => array(
      'source' => 'International Institute of Fisheries Economics and Trade (IIFET)',
      'target' => 'International Institute of Fisheries Economics and Trade - Oregon State University',
    ),
    24 => array(
      'source' => 'International Livestock Research Institute (ILRI)',
      'target' => 'International Livestock Research Institute',
    ),
    25 => array(
      'source' => 'Istanbul Technical University (ITU)',
      'target' => 'Istanbul Technical University',
    ),
    26 => array(
      'source' => 'Peter Lang GmbH',
      'target' => 'Peter Lang Publishing Group',
    ),
    27 => array(
      'source' => 'Published for the International Food Policy Research Institute (IFPRI) [by] Johns Hopkins University Press',
      'target' => 'International Food Policy Research Institute',
    ),
    28 => array(
      'source' => 'Resources for the Future (RFF)',
      'target' => 'Resources for the Future',
    ),
    29 => array(
      'source' => 'Resources for the Future Press',
      'target' => 'Resources for the Future',
    ),
    30 => array(
      'source' => 'Springer Netherlands',
      'target' => 'Springer',
    ),
    31 => array(
      'source' => 'The Haworth Press, Inc.',
      'target' => 'Taylor & Francis Group',
    ),
    32 => array(
      'source' => 'The World Bank',
      'target' => 'World Bank Group',
    ),
    33 => array(
      'source' => 'University of Bonn, Center for Development Research',
      'target' => 'Center for Development Research - University of Bonn',
    ),
    34 => array(
      'source' => 'WorldFish Center',
      'target' => 'WorldFish',
    ),
    35 => array(
      'source' => 'Island Press',
      'target' => 'Island Press',
    ),
    36 => array(
      'source' => 'Multidisciplinary Digital Publishing Institute (MDPI)',
      'target' => 'Multidisciplinary Digital Publishing Institute',
    ),
    37 => array(
      'source' => 'Wageningen Academic Publishers',
      'target' => 'Wageningen Academic Publishers',
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
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_9-trim';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:9';
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
$feeds_tamper->id = 'ifpri_contentdmapi_importer-xpathparser_9-unique';
$feeds_tamper->importer = 'ifpri_contentdmapi_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

/******************/
    return $export;
}
