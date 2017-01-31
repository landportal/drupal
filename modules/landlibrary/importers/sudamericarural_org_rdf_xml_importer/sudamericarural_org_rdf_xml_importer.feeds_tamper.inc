<?php
/**
 * @file
 * sudamericarural_org_rdf_xml_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function sudamericarural_org_rdf_xml_importer_feeds_tamper_default() {

$export = array();

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-blank_source_1-default_value';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'Blank source 1';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'importer_sudamericarural_rdf_xml',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "importer_sudamericarural_rdf_xml"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-blank_source_2-default_value';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'Blank source 2';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'Instituto para el Desarrollo Rural de Sudamérica',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "Instituto para el Desarrollo Rural de Sudamérica"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_11-efq_finder';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:11';
$feeds_tamper->plugin_id = 'efq_finder';
$feeds_tamper->settings = array(
  'update' => 'Update',
  'entity_type' => 'taxonomy_term',
  'bundle' => 'regions',
  'field' => 'field_iso3',
  'column' => 'value',
  'property' => FALSE,
);
$feeds_tamper->weight = 18;
$feeds_tamper->description = 'Get the Entity TID from ISO3 code	';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_11-php';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:11';
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
$feeds_tamper->weight = 19;
$feeds_tamper->description = 'Get Term Name from Term ID (TID)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_11-unique';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:11';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 24;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_15-efq_finder';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:15';
$feeds_tamper->plugin_id = 'efq_finder';
$feeds_tamper->settings = array(
  'update' => 'Update',
  'entity_type' => 'taxonomy_term',
  'bundle' => 'landvoc_concepts',
  'field' => 'field_agrovoc_uri',
  'column' => 'url',
  'property' => FALSE,
);
$feeds_tamper->weight = 14;
$feeds_tamper->description = 'Get the Entity TID (Concept) from Agrovoc URI';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_15-php_tid';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:15';
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
$feeds_tamper->weight = 15;
$feeds_tamper->description = 'Get Term Name from Term ID (TID)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_15-required';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:15';
$feeds_tamper->plugin_id = 'required';
$feeds_tamper->settings = array(
  'invert' => 0,
  'log' => 1,
);
$feeds_tamper->weight = 17;
$feeds_tamper->description = 'Required field (at least one value from LandVoc)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_15-unique';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:15';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 16;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_16-explode';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:16';
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
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_16-implode';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:16';
$feeds_tamper->plugin_id = 'implode';
$feeds_tamper->settings = array(
  'glue' => '%n',
  'real_glue' => '
',
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'One author per line';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_16-trim';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:16';
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
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_18-feeds_tamper_conditional';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:18';
$feeds_tamper->plugin_id = 'feeds_tamper_conditional';
$feeds_tamper->settings = array(
  'conditional_field' => 'xpathparser:9',
  'operator' => 'not_equals',
  'negate' => 0,
  'value' => 'Multimedia',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Conditional (resource type not equals \'Multimedia\')';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_21-explode';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:21';
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
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_21-find_replace_multiple';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:21';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'ACLO',
      'target' => 'Fundación Acción Cultural Loyola',
    ),
    1 => array(
      'source' => 'ALOP et.al.',
      'target' => 'Asociación Latinoamericana de Organizaciones de Promoción al Desarrollo A.C',
    ),
    2 => array(
      'source' => 'ALOP',
      'target' => 'Asociación Latinoamericana de Organizaciones de Promoción al Desarrollo A.C',
    ),
    3 => array(
      'source' => 'ASOCIACION LATINOAMERICANA DE SOCIOLOGIA RURAL',
      'target' => 'Asociación Latinoamericana de Sociología Rural',
    ),
    4 => array(
      'source' => 'Agua y Energía: Movimiento de  Trabajadores sin Tierra',
      'target' => 'Movimento dos Trabalhadores Rurais Sem Terra',
    ),
    5 => array(
      'source' => 'Amigos de la Tierra',
      'target' => 'Amigos de la Tierra',
    ),
    6 => array(
      'source' => 'Amnistía Internacional',
      'target' => 'Amnesty International',
    ),
    7 => array(
      'source' => 'Arandura',
      'target' => 'Arandurã Editorial',
    ),
    8 => array(
      'source' => 'Argumentos-UAM',
      'target' => 'Universidad Autónoma Metropolitana - Argumentos',
    ),
    9 => array(
      'source' => 'Asociación Latinoamericana de Organizaciones de Promoción-ALOP',
      'target' => 'Asociación Latinoamericana de Organizaciones de Promoción al Desarrollo A.C',
    ),
    10 => array(
      'source' => 'BASE Investigaciones Sociales',
      'target' => 'Base Investigaciones Sociales',
    ),
    11 => array(
      'source' => 'BASE',
      'target' => 'Base Investigaciones Sociales',
    ),
    12 => array(
      'source' => 'BID',
      'target' => 'Inter-American Development Bank',
    ),
    13 => array(
      'source' => 'Banco Mundial',
      'target' => 'World Bank Group',
    ),
    14 => array(
      'source' => 'Brot Für die Welt',
      'target' => 'Brot für die Welt',
    ),
    15 => array(
      'source' => 'Brot für die Welt  - IBASE',
      'target' => 'Brot für die Welt',
    ),
    16 => array(
      'source' => 'CAN',
      'target' => 'Comunidad Andina',
    ),
    17 => array(
      'source' => 'CEPAL',
      'target' => 'Economic Commission for Latin America and the Caribbean',
    ),
    18 => array(
      'source' => 'CEPES',
      'target' => 'Centro Peruano de Estudios Sociales',
    ),
    19 => array(
      'source' => 'CEP',
      'target' => 'Comité Ecuménico de Proyectos',
    ),
    20 => array(
      'source' => 'CIAAL',
      'target' => 'Centro de Investigaciones Agroalimentarias',
    ),
    21 => array(
      'source' => 'CIDES',
      'target' => 'El Postgrado en Ciencias del Desarrollo',
    ),
    22 => array(
      'source' => 'CIFOR - CATIE',
      'target' => 'Center for International Forestry Research',
    ),
    23 => array(
      'source' => 'CLAES',
      'target' => 'Centro Latino Americano de Ecología Social',
    ),
    24 => array(
      'source' => 'CONAIE',
      'target' => 'Confederación de Nacionalidades Indígenas del Ecuador',
    ),
    25 => array(
      'source' => 'CRIES',
      'target' => 'Coordinadora Regional de Investigaciones Económicas y Sociales',
    ),
    26 => array(
      'source' => 'Centro Peruano de Estudios Sociales \\(CEPES\\)',
      'target' => 'Centro Peruano de Estudios Sociales',
    ),
    27 => array(
      'source' => 'Centro de Monitoramento de Agrocombustíveis',
      'target' => 'Repórter Brasil',
    ),
    28 => array(
      'source' => 'Centro de Monitoramento de Agrocombustíveis',
      'target' => 'Repórter Brasil',
    ),
    29 => array(
      'source' => 'Christian Aid',
      'target' => 'Christian Aid',
    ),
    30 => array(
      'source' => 'Civitas, Porto Alegre, v. 10, n. 1',
      'target' => 'Civitas - Revista de Ciências Sociais',
    ),
    31 => array(
      'source' => 'Collectiu d’Estudis sobre Cooperació i Desenvolupament',
      'target' => 'Collectiu d’Estudis sobre Cooperació i Desenvolupament',
    ),
    32 => array(
      'source' => 'Comisión Económica Para América Latina y el Caribe \\(CEPAL\\)',
      'target' => 'Economic Commission for Latin America and the Caribbean',
    ),
    33 => array(
      'source' => 'Comisión Pro Indio; Agua y Energía: Movimiento de  Trabajadores sin Tierra; y Christian Aid',
      'target' => 'Comissão Pró-Índio; Movimento dos Trabalhadores Rurais Sem Terra; Christian Aid',
    ),
    34 => array(
      'source' => 'Comisión Pro Indio',
      'target' => 'Comissão Pró-Índio',
    ),
    35 => array(
      'source' => 'Comunidad Andina',
      'target' => 'Comunidad Andina',
    ),
    36 => array(
      'source' => 'Conferencia de Naciones Unidas sobre Comercio y Desarrollo\\( UNCTAD\\)',
      'target' => 'United Nations Conference on Trade and Development',
    ),
    37 => array(
      'source' => 'Consejo de Gobierno CONAIE',
      'target' => 'Confederación de Nacionalidades Indígenas del Ecuador',
    ),
    38 => array(
      'source' => 'Conveagro',
      'target' => 'La Convención Nacional del Agro Peruano',
    ),
    39 => array(
      'source' => 'Coordinadora Andina de Organizaciones Indígenas – CAOI',
      'target' => 'Coordinadora Andina de Organizaciones Indígenas',
    ),
    40 => array(
      'source' => 'Corporación viva la Ciudadanía',
      'target' => 'Corporación Viva la Ciudadanía',
    ),
    41 => array(
      'source' => 'Cumbres de las Americas',
      'target' => 'Cumbres de las Américas',
    ),
    42 => array(
      'source' => 'Departamento de Desarrollo Económico y Social de la FAO',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    43 => array(
      'source' => 'División de tierras y aguas- FAO',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    44 => array(
      'source' => 'Doc. de Trabajo N° 1. Proy. Conocimiento y Cambio en Pobreza Rural y Desarrollo. RIMISP',
      'target' => 'RIMISP - Centro Latinoamericano para el Desarrollo Rural',
    ),
    45 => array(
      'source' => 'Ecuador Debate - Centro Andino de Acción Popular \\(CAAP\\)',
      'target' => 'Centro Andino de Acción Popular',
    ),
    46 => array(
      'source' => 'Equipo Tierras SIPAE',
      'target' => 'Corporación Sistema de Investigación sobre la Problemática Agraria en el Ecuador',
    ),
    47 => array(
      'source' => 'Estado Plurinacional de Bolivia',
      'target' => 'Government of Bolivia',
    ),
    48 => array(
      'source' => 'FAO - BID',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    49 => array(
      'source' => 'FAO',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    50 => array(
      'source' => 'FASE',
      'target' => 'Federação de Órgãos para Assistência Social e Educacional',
    ),
    51 => array(
      'source' => 'FES - ILDIS',
      'target' => 'Friedrich-Ebert-Stiftung - Instituto Latinoamericano de Investigaciones Sociales',
    ),
    52 => array(
      'source' => 'FES-ILDIS',
      'target' => 'Friedrich-Ebert-Stiftung - Instituto Latinoamericano de Investigaciones Sociales',
    ),
    53 => array(
      'source' => 'FIAN Internacional',
      'target' => 'FIAN International',
    ),
    54 => array(
      'source' => 'FIAN',
      'target' => 'FIAN International',
    ),
    55 => array(
      'source' => 'FLACSO - Chile',
      'target' => 'Facultad Latinoamericana de Ciencias Sociales Chile',
    ),
    56 => array(
      'source' => 'FLACSO - Ecuador',
      'target' => 'Facultad Latinoamericana de Ciencias Sociales Ecuador',
    ),
    57 => array(
      'source' => 'FLACSO - Revista Iconos Nº 38, sept 2010',
      'target' => 'Facultad Latinoamericana de Ciencias Sociales Chile',
    ),
    58 => array(
      'source' => 'Facultad de Ciencias Jurídicas y Políticas Centro de Estudios Rurales Andinos Maestría en Desarrollo Agrario',
      'target' => 'Universidad de los Andes',
    ),
    59 => array(
      'source' => 'Foro Rural Mundial',
      'target' => 'World Rural Forum',
    ),
    60 => array(
      'source' => 'Funadación SES',
      'target' => 'Funadación SES',
    ),
    61 => array(
      'source' => 'Fundacion Jubileo',
      'target' => 'Fundación Jubileo',
    ),
    62 => array(
      'source' => 'Fundación Chile',
      'target' => 'Fundación Chile',
    ),
    63 => array(
      'source' => 'Fundación Friedrich Ebert',
      'target' => 'Friedrich-Ebert-Stiftung - Instituto Latinoamericano de Investigaciones Sociales',
    ),
    64 => array(
      'source' => 'Fundación Jubileo',
      'target' => 'Fundación Jubileo',
    ),
    65 => array(
      'source' => 'Fundación Latinoamericana de Innovación Social',
      'target' => 'Friedrich-Ebert-Stiftung - Instituto Latinoamericano de Investigaciones Sociales',
    ),
    66 => array(
      'source' => 'Fundación TIERRA',
      'target' => 'Fundación Tierra',
    ),
    67 => array(
      'source' => 'Fundación UNIR',
      'target' => 'Fundación UNIR Bolivia',
    ),
    68 => array(
      'source' => 'Fundación Xavier Agrónomos',
      'target' => 'Fundación Xavier Albó',
    ),
    69 => array(
      'source' => 'Fundación Xavier Albó',
      'target' => 'Fundación Xavier Albó',
    ),
    70 => array(
      'source' => 'Fundación para el Debido Proceso Legal',
      'target' => 'Due Process of Law Foundation',
    ),
    71 => array(
      'source' => 'Fundación para el Debido Proceso',
      'target' => 'Due Process of Law Foundation',
    ),
    72 => array(
      'source' => 'GIA',
      'target' => 'Grupo de Investigaciones Agrarias',
    ),
    73 => array(
      'source' => 'GRAIN',
      'target' => 'GRAIN',
    ),
    74 => array(
      'source' => 'GRET',
      'target' => 'GRET, A Solidarity and International Cooperation Association',
    ),
    75 => array(
      'source' => 'GTZ',
      'target' => 'GIZ',
    ),
    76 => array(
      'source' => 'Gobierno de Chile,  Servicio Nacional de Turismo',
      'target' => 'Gobierno de Chile',
    ),
    77 => array(
      'source' => 'Gobierno del Paraguay',
      'target' => 'Gobierno del Paraguay',
    ),
    78 => array(
      'source' => 'Grupo Semillas',
      'target' => 'Grupo Semillas',
    ),
    79 => array(
      'source' => 'Grupo de Trabajo Intercultural Almáciga',
      'target' => 'Grupo de Trabajo Intercultural Almáciga',
    ),
    80 => array(
      'source' => 'IAASTD',
      'target' => 'International Assessment of Agricultural Knowledge, Science and Technology for Development',
    ),
    81 => array(
      'source' => 'IAEN',
      'target' => 'El Instituto de Altos Estudios Nacionales',
    ),
    82 => array(
      'source' => 'IALCSH',
      'target' => 'Hunger-Free Latin America and the Caribbean Initiative',
    ),
    83 => array(
      'source' => 'ICCA',
      'target' => 'ICCA Consortium',
    ),
    84 => array(
      'source' => 'ICCO',
      'target' => 'Organización Intereclesiástica para la Cooperación al Desarrollo Centroamérica',
    ),
    85 => array(
      'source' => 'IDEA Internacional',
      'target' => 'International Institute for Democracy and Electoral Assistance',
    ),
    86 => array(
      'source' => 'IEE/OCARU',
      'target' => 'Instituto de Estudios Ecuatorianos; OCARU Observatorio del Cambio Rural',
    ),
    87 => array(
      'source' => 'IICA',
      'target' => 'Instituto Interamericano de Cooperación para la Agricultura',
    ),
    88 => array(
      'source' => 'ILDIS',
      'target' => 'Friedrich-Ebert-Stiftung - Instituto Latinoamericano de Investigaciones Sociales',
    ),
    89 => array(
      'source' => 'INAP \\(Instituto Nacional de la Administración Publica\\)',
      'target' => 'Instituto Nacional de la Administración Publica',
    ),
    90 => array(
      'source' => 'INSA',
      'target' => 'Instituto del Seguro Agrario',
    ),
    91 => array(
      'source' => 'IPDRS\\/MRxT',
      'target' => 'Instituto para el Desarrollo Rural de Sudamérica',
    ),
    92 => array(
      'source' => 'IPDRS',
      'target' => 'Instituto para el Desarrollo Rural de Sudamérica',
    ),
    93 => array(
      'source' => 'ITACA',
      'target' => 'Editorial Itaca',
    ),
    94 => array(
      'source' => 'ITDG',
      'target' => 'Practical Action',
    ),
    95 => array(
      'source' => 'Informe de Investigación de Oxfam Internacional',
      'target' => 'Oxfam International',
    ),
    96 => array(
      'source' => 'Instituto Interamericano de Cooperación para la Agricultura \\(IICA\\)',
      'target' => 'Instituto Interamericano de Cooperación para la Agricultura',
    ),
    97 => array(
      'source' => 'Instituto Prisma - Plural Editores',
      'target' => 'Instituto Prisma',
    ),
    98 => array(
      'source' => 'Instituto de Investigaciones Sociales',
      'target' => 'Friedrich-Ebert-Stiftung - Instituto Latinoamericano de Investigaciones Sociales',
    ),
    99 => array(
      'source' => 'Intermón Oxfam',
      'target' => 'Oxfam International',
    ),
    100 => array(
      'source' => 'JNUDRP',
      'target' => 'Junta Nacional de Usuarios de los Distritos de Riego del Perú',
    ),
    101 => array(
      'source' => 'Junta Nacional de Usuarios de los Distritos de Riego del Perú',
      'target' => 'Junta Nacional de Usuarios de los Distritos de Riego del Perú',
    ),
    102 => array(
      'source' => 'La Revista Agraria 130 - CEPES',
      'target' => 'Centro Peruano de Estudios Sociales',
    ),
    103 => array(
      'source' => 'Libros del Zorzal',
      'target' => 'Libros del Zorzal',
    ),
    104 => array(
      'source' => 'MIES',
      'target' => 'El Ministerio de Inclusión Económica y Social Ecuador',
    ),
    105 => array(
      'source' => 'MINAG-DGIA',
      'target' => 'Ministerio de Agricultura, la Dirección General de Información Agraria Perú',
    ),
    106 => array(
      'source' => 'MRxT',
      'target' => 'Movimiento Regional por la tierra y el territorio',
    ),
    107 => array(
      'source' => 'Ministerio de Agricultura - Gobierno de Chile',
      'target' => 'Ministerio de Agricultura - Gobierno de Chile',
    ),
    108 => array(
      'source' => 'Montecristi Vive',
      'target' => 'Montecristi Vive',
    ),
    109 => array(
      'source' => 'Movimiento Regional por la Tierra y Territorio',
      'target' => 'Movimiento Regional por la Tierra',
    ),
    110 => array(
      'source' => 'NNUU',
      'target' => 'United Nations',
    ),
    111 => array(
      'source' => 'Naciones Unidas',
      'target' => 'United Nations',
    ),
    112 => array(
      'source' => 'Novos Cadernos NAEA,',
      'target' => 'Novos Cadernos NAEA',
    ),
    113 => array(
      'source' => 'OCARU',
      'target' => 'OCARU Observatorio del Cambio Rural',
    ),
    114 => array(
      'source' => 'OEA',
      'target' => 'Organization of American States',
    ),
    115 => array(
      'source' => 'OXFAM INTERNACIONAL',
      'target' => 'Oxfam International',
    ),
    116 => array(
      'source' => 'OXFAM',
      'target' => 'Oxfam International',
    ),
    117 => array(
      'source' => 'Observatorio del Cambio Rural',
      'target' => 'OCARU Observatorio del Cambio Rural',
    ),
    118 => array(
      'source' => 'Observatorio del Cambio Rural',
      'target' => 'OCARU Observatorio del Cambio Rural',
    ),
    119 => array(
      'source' => 'Oxfam Intermón',
      'target' => 'Oxfam International',
    ),
    120 => array(
      'source' => 'PLURAL',
      'target' => 'Plural Editores',
    ),
    121 => array(
      'source' => 'PNUD',
      'target' => 'United Nations Development Programme',
    ),
    122 => array(
      'source' => 'PNUMA',
      'target' => 'United Nations Environment Programme',
    ),
    123 => array(
      'source' => 'PROSOL',
      'target' => 'Programa Solidario Comunal',
    ),
    124 => array(
      'source' => 'Países miembros del ALBA',
      'target' => 'Bolivarian Alliance for the Peoples of Our America',
    ),
    125 => array(
      'source' => 'Plataforma Deocratica',
      'target' => 'Plataforma Democratica',
    ),
    126 => array(
      'source' => 'Plural Editores',
      'target' => 'Plural Editores',
    ),
    127 => array(
      'source' => 'Prisma',
      'target' => 'Instituto Prisma',
    ),
    128 => array(
      'source' => 'Programa Democratización  y Construcción de la Paz',
      'target' => 'Programa Democratización y Construcción de la Paz',
    ),
    129 => array(
      'source' => 'Programa Fida Mercosur Claeh',
      'target' => 'Programa Fida Mercosur Claeh',
    ),
    130 => array(
      'source' => 'Programa de las Naciones Unidas para el Desarrollo - PNUD',
      'target' => 'United Nations Development Programme',
    ),
    131 => array(
      'source' => 'RAP-AL',
      'target' => 'La Red de Acción en Plaguicidas y sus Alternativas de América Latina',
    ),
    132 => array(
      'source' => 'REBELA - Revista Brasileira de Estudos Latino-Americanos',
      'target' => 'Revista Brasileira de Estudos Latino-Americanos',
    ),
    133 => array(
      'source' => 'REDPA - Grupo ad hoc sobre Agricultura:Variabilidad y Cambio Climático',
      'target' => 'La Red de Coordinación de Políticas Agropecuarias',
    ),
    134 => array(
      'source' => 'REDPA',
      'target' => 'La Red de Coordinación de Políticas Agropecuarias',
    ),
    135 => array(
      'source' => 'RIMISP',
      'target' => 'RIMISP - Centro Latinoamericano para el Desarrollo Rural',
    ),
    136 => array(
      'source' => 'RedEtis',
      'target' => 'RedEtis',
    ),
    137 => array(
      'source' => 'Reista MAD',
      'target' => 'La Revista Mad',
    ),
    138 => array(
      'source' => 'Revista Agroalimentaria',
      'target' => 'Centro de Investigaciones Agroalimentarias',
    ),
    139 => array(
      'source' => 'Revista Cambio',
      'target' => 'Revista Cambio',
    ),
    140 => array(
      'source' => 'Revista Colombiana de Ciencias Pecuarias Vol 22, No 2 \\(2009\\)',
      'target' => 'Revista Cambio',
    ),
    141 => array(
      'source' => 'Revista NERA',
      'target' => 'Revista NERA',
    ),
    142 => array(
      'source' => 'Revista PROPOSTA',
      'target' => 'Revista Proposta',
    ),
    143 => array(
      'source' => 'Revista Territorios V',
      'target' => 'Revista Territorios',
    ),
    144 => array(
      'source' => 'Rio +20',
      'target' => 'United Nations Conference on Sustainable Development, Rio+20',
    ),
    145 => array(
      'source' => 'SELA-IICA',
      'target' => '"Sistema Económico Latinoamericano y del Caribe',
    ),
    146 => array(
      'source' => 'SELA',
      'target' => 'Sistema Económico Latinoamericano y del Caribe',
    ),
    147 => array(
      'source' => 'SIPAE',
      'target' => 'Corporación Sistema de Investigación sobre la Problemática Agraria en el Ecuador',
    ),
    148 => array(
      'source' => 'SIPAE',
      'target' => 'Sistema de Investigación sobre la Problemática Agraria en el Ecuador (SIPAE)',
    ),
    149 => array(
      'source' => 'SUR Corporación de Estudios Sociales y Educación',
      'target' => 'Corporación de Estudios Sociales y Educación',
    ),
    150 => array(
      'source' => 'Secretaría General Iberoamericana \\(SESGIB\\)',
      'target' => 'Secretaría General Iberoamericana',
    ),
    151 => array(
      'source' => 'Secretaría General de la Comunidad Andina',
      'target' => 'Comunidad Andina',
    ),
    152 => array(
      'source' => 'Sistema Económico Latinoamericano y del Caribe - SELA',
      'target' => 'Sistema Económico Latinoamericano y del Caribe',
    ),
    153 => array(
      'source' => 'Society for International Development',
      'target' => 'Society for International Development',
    ),
    154 => array(
      'source' => 'UBA',
      'target' => 'Universidad de Buenos Aires',
    ),
    155 => array(
      'source' => 'UNAM',
      'target' => 'Universidad Nacional Autónoma de México',
    ),
    156 => array(
      'source' => 'UNIFEM',
      'target' => 'United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    157 => array(
      'source' => 'Universidad Autónoma de Zacatecas',
      'target' => 'Universidad Autónoma de Zacatecas',
    ),
    158 => array(
      'source' => 'Universidad Mayor de San Andres \\(UMSA\\)',
      'target' => 'Universidad Mayor de San Andres',
    ),
    159 => array(
      'source' => 'Universidad Nacional de Río Cuarto',
      'target' => 'Universidad Nacional de Río Cuarto',
    ),
    160 => array(
      'source' => 'Urban Harvest',
      'target' => 'Urban Harvest',
    ),
    161 => array(
      'source' => 'Urgente24',
      'target' => 'Urgente24',
    ),
    162 => array(
      'source' => 'Veterinarios sin Fronteras',
      'target' => 'Veterinarios Sin Fronteras',
    ),
    163 => array(
      'source' => 'Vicepresidencia del Estado Plurinacional de Bolivia \\(VPEP\\)',
      'target' => 'Vicepresidencia del Estado Plurinacional de Bolivia',
    ),
  ),
  'full' => 0,
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Find replace multiple (sudamericarural.org Corporate authors)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_21-trim';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:21';
$feeds_tamper->plugin_id = 'trim';
$feeds_tamper->settings = array(
  'mask' => '',
  'side' => 'trim',
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Trim';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_21-unique';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:21';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_24-efq_finder';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:24';
$feeds_tamper->plugin_id = 'efq_finder';
$feeds_tamper->settings = array(
  'update' => 'Update',
  'entity_type' => 'taxonomy_term',
  'bundle' => 'regions',
  'field' => 'field_area_code_un_m_49',
  'column' => 'value',
  'property' => FALSE,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Get the Entity TID from UN M.49 code';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_24-php';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:24';
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
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Get Term Name from Term ID (TID)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_24-unique';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:24';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_25-feeds_tamper_conditional';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:25';
$feeds_tamper->plugin_id = 'feeds_tamper_conditional';
$feeds_tamper->settings = array(
  'conditional_field' => 'xpathparser:9',
  'operator' => 'equals',
  'negate' => 0,
  'value' => 'Multimedia',
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Conditional (resource type equals \'Multimedia\')';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_25-php';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:25';
$feeds_tamper->plugin_id = 'php';
$feeds_tamper->settings = array(
  'php' => 'if ($field != null) {
   return gmdate("H:i:s", $field);
}
',
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Execute php code. From seconds to H:i:s (gmdate php function)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_7-explode';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:7';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 15;
$feeds_tamper->description = 'Explode (multiple values \';\' separated)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_7-find_replace_multiple';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:7';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'ACLO',
      'target' => 'Fundación Acción Cultural Loyola',
    ),
    1 => array(
      'source' => 'ALOP et.al.',
      'target' => 'Asociación Latinoamericana de Organizaciones de Promoción al Desarrollo A.C',
    ),
    2 => array(
      'source' => 'ALOP',
      'target' => 'Asociación Latinoamericana de Organizaciones de Promoción al Desarrollo A.C',
    ),
    3 => array(
      'source' => 'ASOCIACION LATINOAMERICANA DE SOCIOLOGIA RURAL',
      'target' => 'Asociación Latinoamericana de Sociología Rural',
    ),
    4 => array(
      'source' => 'Agua y Energía: Movimiento de  Trabajadores sin Tierra',
      'target' => 'Movimento dos Trabalhadores Rurais Sem Terra',
    ),
    5 => array(
      'source' => 'Amigos de la Tierra',
      'target' => 'Amigos de la Tierra',
    ),
    6 => array(
      'source' => 'Amnistía Internacional',
      'target' => 'Amnesty International',
    ),
    7 => array(
      'source' => 'Arandura',
      'target' => 'Arandurã Editorial',
    ),
    8 => array(
      'source' => 'Argumentos-UAM',
      'target' => 'Universidad Autónoma Metropolitana - Argumentos',
    ),
    9 => array(
      'source' => 'Asociación Latinoamericana de Organizaciones de Promoción-ALOP',
      'target' => 'Asociación Latinoamericana de Organizaciones de Promoción al Desarrollo A.C',
    ),
    10 => array(
      'source' => 'BASE Investigaciones Sociales',
      'target' => 'Base Investigaciones Sociales',
    ),
    11 => array(
      'source' => 'BASE',
      'target' => 'Base Investigaciones Sociales',
    ),
    12 => array(
      'source' => 'BID',
      'target' => 'Inter-American Development Bank',
    ),
    13 => array(
      'source' => 'Banco Mundial',
      'target' => 'World Bank Group',
    ),
    14 => array(
      'source' => 'Brot Für die Welt',
      'target' => 'Brot für die Welt',
    ),
    15 => array(
      'source' => 'Brot für die Welt  - IBASE',
      'target' => 'Brot für die Welt',
    ),
    16 => array(
      'source' => 'CAN',
      'target' => 'Comunidad Andina',
    ),
    17 => array(
      'source' => 'CEPAL',
      'target' => 'Economic Commission for Latin America and the Caribbean',
    ),
    18 => array(
      'source' => 'CEPES',
      'target' => 'Centro Peruano de Estudios Sociales',
    ),
    19 => array(
      'source' => 'CEP',
      'target' => 'Comité Ecuménico de Proyectos',
    ),
    20 => array(
      'source' => 'CIAAL',
      'target' => 'Centro de Investigaciones Agroalimentarias',
    ),
    21 => array(
      'source' => 'CIDES',
      'target' => 'El Postgrado en Ciencias del Desarrollo',
    ),
    22 => array(
      'source' => 'CIFOR - CATIE',
      'target' => 'Center for International Forestry Research',
    ),
    23 => array(
      'source' => 'CLAES',
      'target' => 'Centro Latino Americano de Ecología Social',
    ),
    24 => array(
      'source' => 'CONAIE',
      'target' => 'Confederación de Nacionalidades Indígenas del Ecuador',
    ),
    25 => array(
      'source' => 'CRIES',
      'target' => 'Coordinadora Regional de Investigaciones Económicas y Sociales',
    ),
    26 => array(
      'source' => 'Centro Peruano de Estudios Sociales \\(CEPES\\)',
      'target' => 'Centro Peruano de Estudios Sociales',
    ),
    27 => array(
      'source' => 'Centro de Monitoramento de Agrocombustíveis',
      'target' => 'Repórter Brasil',
    ),
    28 => array(
      'source' => 'Centro de Monitoramento de Agrocombustíveis',
      'target' => 'Repórter Brasil',
    ),
    29 => array(
      'source' => 'Christian Aid',
      'target' => 'Christian Aid',
    ),
    30 => array(
      'source' => 'Civitas, Porto Alegre, v. 10, n. 1',
      'target' => 'Civitas - Revista de Ciências Sociais',
    ),
    31 => array(
      'source' => 'Collectiu d’Estudis sobre Cooperació i Desenvolupament',
      'target' => 'Collectiu d’Estudis sobre Cooperació i Desenvolupament',
    ),
    32 => array(
      'source' => 'Comisión Económica Para América Latina y el Caribe \\(CEPAL\\)',
      'target' => 'Economic Commission for Latin America and the Caribbean',
    ),
    33 => array(
      'source' => 'Comisión Pro Indio; Agua y Energía: Movimiento de  Trabajadores sin Tierra; y Christian Aid',
      'target' => 'Comissão Pró-Índio; Movimento dos Trabalhadores Rurais Sem Terra; Christian Aid',
    ),
    34 => array(
      'source' => 'Comisión Pro Indio',
      'target' => 'Comissão Pró-Índio',
    ),
    35 => array(
      'source' => 'Comunidad Andina',
      'target' => 'Comunidad Andina',
    ),
    36 => array(
      'source' => 'Conferencia de Naciones Unidas sobre Comercio y Desarrollo\\( UNCTAD\\)',
      'target' => 'United Nations Conference on Trade and Development',
    ),
    37 => array(
      'source' => 'Consejo de Gobierno CONAIE',
      'target' => 'Confederación de Nacionalidades Indígenas del Ecuador',
    ),
    38 => array(
      'source' => 'Conveagro',
      'target' => 'La Convención Nacional del Agro Peruano',
    ),
    39 => array(
      'source' => 'Coordinadora Andina de Organizaciones Indígenas – CAOI',
      'target' => 'Coordinadora Andina de Organizaciones Indígenas',
    ),
    40 => array(
      'source' => 'Corporación viva la Ciudadanía',
      'target' => 'Corporación Viva la Ciudadanía',
    ),
    41 => array(
      'source' => 'Cumbres de las Americas',
      'target' => 'Cumbres de las Américas',
    ),
    42 => array(
      'source' => 'Departamento de Desarrollo Económico y Social de la FAO',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    43 => array(
      'source' => 'División de tierras y aguas- FAO',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    44 => array(
      'source' => 'Doc. de Trabajo N° 1. Proy. Conocimiento y Cambio en Pobreza Rural y Desarrollo. RIMISP',
      'target' => 'RIMISP - Centro Latinoamericano para el Desarrollo Rural',
    ),
    45 => array(
      'source' => 'Ecuador Debate - Centro Andino de Acción Popular \\(CAAP\\)',
      'target' => 'Centro Andino de Acción Popular',
    ),
    46 => array(
      'source' => 'Equipo Tierras SIPAE',
      'target' => 'Corporación Sistema de Investigación sobre la Problemática Agraria en el Ecuador',
    ),
    47 => array(
      'source' => 'Estado Plurinacional de Bolivia',
      'target' => 'Government of Bolivia',
    ),
    48 => array(
      'source' => 'FAO - BID',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    49 => array(
      'source' => 'FAO',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    50 => array(
      'source' => 'FASE',
      'target' => 'Federação de Órgãos para Assistência Social e Educacional',
    ),
    51 => array(
      'source' => 'FES - ILDIS',
      'target' => 'Friedrich-Ebert-Stiftung - Instituto Latinoamericano de Investigaciones Sociales',
    ),
    52 => array(
      'source' => 'FES-ILDIS',
      'target' => 'Friedrich-Ebert-Stiftung - Instituto Latinoamericano de Investigaciones Sociales',
    ),
    53 => array(
      'source' => 'FIAN Internacional',
      'target' => 'FIAN International',
    ),
    54 => array(
      'source' => 'FIAN',
      'target' => 'FIAN International',
    ),
    55 => array(
      'source' => 'FLACSO - Chile',
      'target' => 'Facultad Latinoamericana de Ciencias Sociales Chile',
    ),
    56 => array(
      'source' => 'FLACSO - Ecuador',
      'target' => 'Facultad Latinoamericana de Ciencias Sociales Ecuador',
    ),
    57 => array(
      'source' => 'FLACSO - Revista Iconos Nº 38, sept 2010',
      'target' => 'Facultad Latinoamericana de Ciencias Sociales Chile',
    ),
    58 => array(
      'source' => 'Facultad de Ciencias Jurídicas y Políticas Centro de Estudios Rurales Andinos Maestría en Desarrollo Agrario',
      'target' => 'Universidad de los Andes',
    ),
    59 => array(
      'source' => 'Foro Rural Mundial',
      'target' => 'World Rural Forum',
    ),
    60 => array(
      'source' => 'Funadación SES',
      'target' => 'Funadación SES',
    ),
    61 => array(
      'source' => 'Fundacion Jubileo',
      'target' => 'Fundación Jubileo',
    ),
    62 => array(
      'source' => 'Fundación Chile',
      'target' => 'Fundación Chile',
    ),
    63 => array(
      'source' => 'Fundación Friedrich Ebert',
      'target' => 'Friedrich-Ebert-Stiftung - Instituto Latinoamericano de Investigaciones Sociales',
    ),
    64 => array(
      'source' => 'Fundación Jubileo',
      'target' => 'Fundación Jubileo',
    ),
    65 => array(
      'source' => 'Fundación Latinoamericana de Innovación Social',
      'target' => 'Friedrich-Ebert-Stiftung - Instituto Latinoamericano de Investigaciones Sociales',
    ),
    66 => array(
      'source' => 'Fundación TIERRA',
      'target' => 'Fundación Tierra',
    ),
    67 => array(
      'source' => 'Fundación UNIR',
      'target' => 'Fundación UNIR Bolivia',
    ),
    68 => array(
      'source' => 'Fundación Xavier Agrónomos',
      'target' => 'Fundación Xavier Albó',
    ),
    69 => array(
      'source' => 'Fundación Xavier Albó',
      'target' => 'Fundación Xavier Albó',
    ),
    70 => array(
      'source' => 'Fundación para el Debido Proceso Legal',
      'target' => 'Due Process of Law Foundation',
    ),
    71 => array(
      'source' => 'Fundación para el Debido Proceso',
      'target' => 'Due Process of Law Foundation',
    ),
    72 => array(
      'source' => 'GIA',
      'target' => 'Grupo de Investigaciones Agrarias',
    ),
    73 => array(
      'source' => 'GRAIN',
      'target' => 'GRAIN',
    ),
    74 => array(
      'source' => 'GRET',
      'target' => 'GRET, A Solidarity and International Cooperation Association',
    ),
    75 => array(
      'source' => 'GTZ',
      'target' => 'GIZ',
    ),
    76 => array(
      'source' => 'Gobierno de Chile,  Servicio Nacional de Turismo',
      'target' => 'Gobierno de Chile',
    ),
    77 => array(
      'source' => 'Gobierno del Paraguay',
      'target' => 'Gobierno del Paraguay',
    ),
    78 => array(
      'source' => 'Grupo Semillas',
      'target' => 'Grupo Semillas',
    ),
    79 => array(
      'source' => 'Grupo de Trabajo Intercultural Almáciga',
      'target' => 'Grupo de Trabajo Intercultural Almáciga',
    ),
    80 => array(
      'source' => 'IAASTD',
      'target' => 'International Assessment of Agricultural Knowledge, Science and Technology for Development',
    ),
    81 => array(
      'source' => 'IAEN',
      'target' => 'El Instituto de Altos Estudios Nacionales',
    ),
    82 => array(
      'source' => 'IALCSH',
      'target' => 'Hunger-Free Latin America and the Caribbean Initiative',
    ),
    83 => array(
      'source' => 'ICCA',
      'target' => 'ICCA Consortium',
    ),
    84 => array(
      'source' => 'ICCO',
      'target' => 'Organización Intereclesiástica para la Cooperación al Desarrollo Centroamérica',
    ),
    85 => array(
      'source' => 'IDEA Internacional',
      'target' => 'International Institute for Democracy and Electoral Assistance',
    ),
    86 => array(
      'source' => 'IEE/OCARU',
      'target' => 'Instituto de Estudios Ecuatorianos; OCARU Observatorio del Cambio Rural',
    ),
    87 => array(
      'source' => 'IICA',
      'target' => 'Instituto Interamericano de Cooperación para la Agricultura',
    ),
    88 => array(
      'source' => 'ILDIS',
      'target' => 'Friedrich-Ebert-Stiftung - Instituto Latinoamericano de Investigaciones Sociales',
    ),
    89 => array(
      'source' => 'INAP \\(Instituto Nacional de la Administración Publica\\)',
      'target' => 'Instituto Nacional de la Administración Publica',
    ),
    90 => array(
      'source' => 'INSA',
      'target' => 'Instituto del Seguro Agrario',
    ),
    91 => array(
      'source' => 'IPDRS\\/MRxT',
      'target' => 'Instituto para el Desarrollo Rural de Sudamérica',
    ),
    92 => array(
      'source' => 'IPDRS',
      'target' => 'Instituto para el Desarrollo Rural de Sudamérica',
    ),
    93 => array(
      'source' => 'ITACA',
      'target' => 'Editorial Itaca',
    ),
    94 => array(
      'source' => 'ITDG',
      'target' => 'Practical Action',
    ),
    95 => array(
      'source' => 'Informe de Investigación de Oxfam Internacional',
      'target' => 'Oxfam International',
    ),
    96 => array(
      'source' => 'Instituto Interamericano de Cooperación para la Agricultura \\(IICA\\)',
      'target' => 'Instituto Interamericano de Cooperación para la Agricultura',
    ),
    97 => array(
      'source' => 'Instituto Prisma - Plural Editores',
      'target' => 'Instituto Prisma',
    ),
    98 => array(
      'source' => 'Instituto de Investigaciones Sociales',
      'target' => 'Friedrich-Ebert-Stiftung - Instituto Latinoamericano de Investigaciones Sociales',
    ),
    99 => array(
      'source' => 'Intermón Oxfam',
      'target' => 'Oxfam International',
    ),
    100 => array(
      'source' => 'JNUDRP',
      'target' => 'Junta Nacional de Usuarios de los Distritos de Riego del Perú',
    ),
    101 => array(
      'source' => 'Junta Nacional de Usuarios de los Distritos de Riego del Perú',
      'target' => 'Junta Nacional de Usuarios de los Distritos de Riego del Perú',
    ),
    102 => array(
      'source' => 'La Revista Agraria 130 - CEPES',
      'target' => 'Centro Peruano de Estudios Sociales',
    ),
    103 => array(
      'source' => 'Libros del Zorzal',
      'target' => 'Libros del Zorzal',
    ),
    104 => array(
      'source' => 'MIES',
      'target' => 'El Ministerio de Inclusión Económica y Social Ecuador',
    ),
    105 => array(
      'source' => 'MINAG-DGIA',
      'target' => 'Ministerio de Agricultura, la Dirección General de Información Agraria Perú',
    ),
    106 => array(
      'source' => 'MRxT',
      'target' => 'Movimiento Regional por la tierra y el territorio',
    ),
    107 => array(
      'source' => 'Ministerio de Agricultura - Gobierno de Chile',
      'target' => 'Ministerio de Agricultura - Gobierno de Chile',
    ),
    108 => array(
      'source' => 'Montecristi Vive',
      'target' => 'Montecristi Vive',
    ),
    109 => array(
      'source' => 'Movimiento Regional por la Tierra y Territorio',
      'target' => 'Movimiento Regional por la Tierra',
    ),
    110 => array(
      'source' => 'NNUU',
      'target' => 'United Nations',
    ),
    111 => array(
      'source' => 'Naciones Unidas',
      'target' => 'United Nations',
    ),
    112 => array(
      'source' => 'Novos Cadernos NAEA,',
      'target' => 'Novos Cadernos NAEA',
    ),
    113 => array(
      'source' => 'OCARU',
      'target' => 'OCARU Observatorio del Cambio Rural',
    ),
    114 => array(
      'source' => 'OEA',
      'target' => 'Organization of American States',
    ),
    115 => array(
      'source' => 'OXFAM INTERNACIONAL',
      'target' => 'Oxfam International',
    ),
    116 => array(
      'source' => 'OXFAM',
      'target' => 'Oxfam International',
    ),
    117 => array(
      'source' => 'Observatorio del Cambio Rural',
      'target' => 'OCARU Observatorio del Cambio Rural',
    ),
    118 => array(
      'source' => 'Observatorio del Cambio Rural',
      'target' => 'OCARU Observatorio del Cambio Rural',
    ),
    119 => array(
      'source' => 'Oxfam Intermón',
      'target' => 'Oxfam International',
    ),
    120 => array(
      'source' => 'PLURAL',
      'target' => 'Plural Editores',
    ),
    121 => array(
      'source' => 'PNUD',
      'target' => 'United Nations Development Programme',
    ),
    122 => array(
      'source' => 'PNUMA',
      'target' => 'United Nations Environment Programme',
    ),
    123 => array(
      'source' => 'PROSOL',
      'target' => 'Programa Solidario Comunal',
    ),
    124 => array(
      'source' => 'Países miembros del ALBA',
      'target' => 'Bolivarian Alliance for the Peoples of Our America',
    ),
    125 => array(
      'source' => 'Plataforma Deocratica',
      'target' => 'Plataforma Democratica',
    ),
    126 => array(
      'source' => 'Plural Editores',
      'target' => 'Plural Editores',
    ),
    127 => array(
      'source' => 'Prisma',
      'target' => 'Instituto Prisma',
    ),
    128 => array(
      'source' => 'Programa Democratización  y Construcción de la Paz',
      'target' => 'Programa Democratización y Construcción de la Paz',
    ),
    129 => array(
      'source' => 'Programa Fida Mercosur Claeh',
      'target' => 'Programa Fida Mercosur Claeh',
    ),
    130 => array(
      'source' => 'Programa de las Naciones Unidas para el Desarrollo - PNUD',
      'target' => 'United Nations Development Programme',
    ),
    131 => array(
      'source' => 'RAP-AL',
      'target' => 'La Red de Acción en Plaguicidas y sus Alternativas de América Latina',
    ),
    132 => array(
      'source' => 'REBELA - Revista Brasileira de Estudos Latino-Americanos',
      'target' => 'Revista Brasileira de Estudos Latino-Americanos',
    ),
    133 => array(
      'source' => 'REDPA - Grupo ad hoc sobre Agricultura:Variabilidad y Cambio Climático',
      'target' => 'La Red de Coordinación de Políticas Agropecuarias',
    ),
    134 => array(
      'source' => 'REDPA',
      'target' => 'La Red de Coordinación de Políticas Agropecuarias',
    ),
    135 => array(
      'source' => 'RIMISP',
      'target' => 'RIMISP - Centro Latinoamericano para el Desarrollo Rural',
    ),
    136 => array(
      'source' => 'RedEtis',
      'target' => 'RedEtis',
    ),
    137 => array(
      'source' => 'Reista MAD',
      'target' => 'La Revista Mad',
    ),
    138 => array(
      'source' => 'Revista Agroalimentaria',
      'target' => 'Centro de Investigaciones Agroalimentarias',
    ),
    139 => array(
      'source' => 'Revista Cambio',
      'target' => 'Revista Cambio',
    ),
    140 => array(
      'source' => 'Revista Colombiana de Ciencias Pecuarias Vol 22, No 2 \\(2009\\)',
      'target' => 'Revista Cambio',
    ),
    141 => array(
      'source' => 'Revista NERA',
      'target' => 'Revista NERA',
    ),
    142 => array(
      'source' => 'Revista PROPOSTA',
      'target' => 'Revista Proposta',
    ),
    143 => array(
      'source' => 'Revista Territorios V',
      'target' => 'Revista Territorios',
    ),
    144 => array(
      'source' => 'Rio +20',
      'target' => 'United Nations Conference on Sustainable Development, Rio+20',
    ),
    145 => array(
      'source' => 'SELA-IICA',
      'target' => '"Sistema Económico Latinoamericano y del Caribe',
    ),
    146 => array(
      'source' => 'SELA',
      'target' => 'Sistema Económico Latinoamericano y del Caribe',
    ),
    147 => array(
      'source' => 'SIPAE',
      'target' => 'Corporación Sistema de Investigación sobre la Problemática Agraria en el Ecuador',
    ),
    148 => array(
      'source' => 'SIPAE',
      'target' => 'Sistema de Investigación sobre la Problemática Agraria en el Ecuador (SIPAE)',
    ),
    149 => array(
      'source' => 'SUR Corporación de Estudios Sociales y Educación',
      'target' => 'Corporación de Estudios Sociales y Educación',
    ),
    150 => array(
      'source' => 'Secretaría General Iberoamericana \\(SESGIB\\)',
      'target' => 'Secretaría General Iberoamericana',
    ),
    151 => array(
      'source' => 'Secretaría General de la Comunidad Andina',
      'target' => 'Comunidad Andina',
    ),
    152 => array(
      'source' => 'Sistema Económico Latinoamericano y del Caribe - SELA',
      'target' => 'Sistema Económico Latinoamericano y del Caribe',
    ),
    153 => array(
      'source' => 'Society for International Development',
      'target' => 'Society for International Development',
    ),
    154 => array(
      'source' => 'UBA',
      'target' => 'Universidad de Buenos Aires',
    ),
    155 => array(
      'source' => 'UNAM',
      'target' => 'Universidad Nacional Autónoma de México',
    ),
    156 => array(
      'source' => 'UNIFEM',
      'target' => 'United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    157 => array(
      'source' => 'Universidad Autónoma de Zacatecas',
      'target' => 'Universidad Autónoma de Zacatecas',
    ),
    158 => array(
      'source' => 'Universidad Mayor de San Andres \\(UMSA\\)',
      'target' => 'Universidad Mayor de San Andres',
    ),
    159 => array(
      'source' => 'Universidad Nacional de Río Cuarto',
      'target' => 'Universidad Nacional de Río Cuarto',
    ),
    160 => array(
      'source' => 'Urban Harvest',
      'target' => 'Urban Harvest',
    ),
    161 => array(
      'source' => 'Urgente24',
      'target' => 'Urgente24',
    ),
    162 => array(
      'source' => 'Veterinarios sin Fronteras',
      'target' => 'Veterinarios Sin Fronteras',
    ),
    163 => array(
      'source' => 'Vicepresidencia del Estado Plurinacional de Bolivia \\(VPEP\\)',
      'target' => 'Vicepresidencia del Estado Plurinacional de Bolivia',
    ),
  ),
  'full' => 0,
);
$feeds_tamper->weight = 14;
$feeds_tamper->description = 'Find replace multiple (sudamericarural.org Publishers)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_7-trim';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:7';
$feeds_tamper->plugin_id = 'trim';
$feeds_tamper->settings = array(
  'mask' => '',
  'side' => 'trim',
);
$feeds_tamper->weight = 16;
$feeds_tamper->description = 'Trim';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_7-unique';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:7';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 17;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_8-efq_finder';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:8';
$feeds_tamper->plugin_id = 'efq_finder';
$feeds_tamper->settings = array(
  'update' => 'Update',
  'entity_type' => 'taxonomy_term',
  'bundle' => 'languages',
  'field' => 'field_language_code_iso_639_1',
  'column' => 'value',
  'property' => FALSE,
);
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Get the Entity TID from ISO 639-1 code';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_8-php';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:8';
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
$feeds_tamper->weight = 7;
$feeds_tamper->description = 'Get Term Name from Term ID (TID)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_8-unique';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:8';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 8;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_9-find_replace_multiple';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'IPDRS - Exploraciones',
      'target' => 'Policy Papers & Briefs',
    ),
    1 => array(
      'source' => 'IPDRS - Diálogos',
      'target' => 'Policy Papers & Briefs',
    ),
    2 => array(
      'source' => 'Reportes e Investigación',
      'target' => 'Reports & Research',
    ),
    3 => array(
      'source' => 'Manuales y guías',
      'target' => 'Manuals & Guidelines',
    ),
    4 => array(
      'source' => 'Materiales promocionales e institucionales',
      'target' => 'Institutional & promotional materials',
    ),
    5 => array(
      'source' => 'Recursos y herramientas de formación',
      'target' => 'Training Resources & Tools',
    ),
    6 => array(
      'source' => 'Libros y Artículos de revistas - Publicaciones revisadas por pares',
      'target' => 'Peer-reviewed publication',
    ),
    7 => array(
      'source' => 'Libros y Artículos de revistas',
      'target' => 'Journal Articles & Books',
    ),
    8 => array(
      'source' => 'Legislación y Políticas - Acuerdos Internacionales o Tratados',
      'target' => 'International Conventions or Treaties',
    ),
    9 => array(
      'source' => 'Legislación y Políticas - Resoluciones de la ONU',
      'target' => 'UN Resolutions',
    ),
    10 => array(
      'source' => 'Legislación y Políticas - Políticas Nacionales',
      'target' => 'National Policies',
    ),
    11 => array(
      'source' => 'Legislación y Políticas - Otros',
      'target' => 'Other',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Find replace multiple - Resource Type (sudamericarural.org)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'sudamericarural_org_rdf_xml_importer-xpathparser_9-unique';
$feeds_tamper->importer = 'sudamericarural_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 6;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

/******************/
    return $export;
}
