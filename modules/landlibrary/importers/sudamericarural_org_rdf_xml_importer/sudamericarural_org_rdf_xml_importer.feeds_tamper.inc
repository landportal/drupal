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
      'source' => 'Amigos de la Tierra',
      'target' => 'Amigos de la Tierra',
    ),
    2 => array(
      'source' => 'Amnistía Internacional',
      'target' => 'Amnesty International',
    ),
    3 => array(
      'source' => 'Arandura',
      'target' => 'Arandurã Editorial',
    ),
    4 => array(
      'source' => 'BASE Investigaciones Sociales',
      'target' => 'Base Investigaciones Sociales',
    ),
    5 => array(
      'source' => 'BID',
      'target' => 'Inter-American Development Bank',
    ),
    6 => array(
      'source' => 'Brot für die Welt  - IBASE',
      'target' => 'Brot für die Welt',
    ),
    7 => array(
      'source' => 'Centro de Monitoramento de Agrocombustíveis',
      'target' => 'Repórter Brasil',
    ),
    8 => array(
      'source' => 'Centro Peruano de Estudios Sociales \\(CEPES\\)',
      'target' => 'Centro Peruano de Estudios Sociales',
    ),
    9 => array(
      'source' => 'CEPAL',
      'target' => 'Economic Commission for Latin America and the Caribbean',
    ),
    10 => array(
      'source' => 'CEPES',
      'target' => 'Centro Peruano de Estudios Sociales',
    ),
    11 => array(
      'source' => 'CIAAL',
      'target' => 'Centro de Investigaciones Agroalimentarias',
    ),
    12 => array(
      'source' => 'CIDES',
      'target' => 'El Postgrado en Ciencias del Desarrollo',
    ),
    13 => array(
      'source' => 'Comisión Pro Indio; Agua y Energía: Movimiento de  Trabajadores sin Tierra; y Christian Aid',
      'target' => 'Comissão Pró-Índio; Movimento dos Trabalhadores Rurais Sem Terra; Christian Aid',
    ),
    14 => array(
      'source' => 'Conferencia de Naciones Unidas sobre Comercio y Desarrollo\\( UNCTAD\\)',
      'target' => 'United Nations Conference on Trade and Development',
    ),
    15 => array(
      'source' => 'Coordinadora Andina de Organizaciones Indígenas – CAOI',
      'target' => 'Coordinadora Andina de Organizaciones Indígenas',
    ),
    16 => array(
      'source' => 'División de tierras y aguas- FAO',
      'target' => 'FAO',
    ),
    17 => array(
      'source' => 'Equipo Tierras SIPAE',
      'target' => 'Sistema de Investigación sobre la Problemática Agraria en el Ecuador (SIPAE)',
    ),
    18 => array(
      'source' => 'Estado Plurinacional de Bolivia',
      'target' => 'Government of Bolivia',
    ),
    19 => array(
      'source' => 'Facultad de Ciencias Jurídicas y Políticas Centro de Estudios Rurales Andinos Maestría en Desarrollo Agrario',
      'target' => 'Universidad de los Andes',
    ),
    20 => array(
      'source' => 'FAO',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    21 => array(
      'source' => 'FLACSO - Chile',
      'target' => 'Facultad Latinoamericana de Ciencias Sociales Chile',
    ),
    22 => array(
      'source' => 'Foro Rural Mundial',
      'target' => 'World Rural Forum',
    ),
    23 => array(
      'source' => 'Fundacion Jubileo',
      'target' => 'Fundación Jubileo',
    ),
    24 => array(
      'source' => 'Fundación Jubileo',
      'target' => 'Fundación Jubileo',
    ),
    25 => array(
      'source' => 'Fundación para el Debido Proceso',
      'target' => 'Due Process of Law Foundation',
    ),
    26 => array(
      'source' => 'Fundación TIERRA',
      'target' => 'Fundación Tierra',
    ),
    27 => array(
      'source' => 'Fundación UNIR',
      'target' => 'Fundación UNIR Bolivia',
    ),
    28 => array(
      'source' => 'Fundación Xavier Albó',
      'target' => 'Fundación Xavier Albó',
    ),
    29 => array(
      'source' => 'GRAIN',
      'target' => 'GRAIN',
    ),
    30 => array(
      'source' => 'IAEN',
      'target' => 'El Instituto de Altos Estudios Nacionales',
    ),
    31 => array(
      'source' => 'IALCSH',
      'target' => 'Hunger-Free Latin America and the Caribbean Initiative',
    ),
    32 => array(
      'source' => 'IICA',
      'target' => 'Instituto Interamericano de Cooperación para la Agricultura',
    ),
    33 => array(
      'source' => 'INAP \\(Instituto Nacional de la Administración Publica\\)',
      'target' => 'Instituto Nacional de la Administración Publica',
    ),
    34 => array(
      'source' => 'Informe de Investigación de Oxfam Internacional',
      'target' => 'Oxfam International',
    ),
    35 => array(
      'source' => 'Instituto Interamericano de Cooperación para la Agricultura \\(IICA\\)',
      'target' => 'Instituto Interamericano de Cooperación para la Agricultura',
    ),
    36 => array(
      'source' => 'IPDRS',
      'target' => 'Instituto para el Desarrollo Rural de Sudamérica',
    ),
    37 => array(
      'source' => 'IPDRS\\/MRxT',
      'target' => 'Instituto para el Desarrollo Rural de Sudamérica',
    ),
    38 => array(
      'source' => 'Movimiento Regional por la Tierra y Territorio',
      'target' => 'Movimiento Regional por la Tierra',
    ),
    39 => array(
      'source' => 'NNUU',
      'target' => 'United Nations',
    ),
    40 => array(
      'source' => 'IEE/OCARU',
      'target' => 'OCARU',
    ),
    41 => array(
      'source' => 'Observatorio del Cambio Rural',
      'target' => 'OCARU',
    ),
    42 => array(
      'source' => 'OCARU',
      'target' => 'OCARU Observatorio del Cambio Rural',
    ),
    43 => array(
      'source' => 'OEA',
      'target' => 'Organization of American States',
    ),
    44 => array(
      'source' => 'OXFAM',
      'target' => 'Oxfam International',
    ),
    45 => array(
      'source' => 'Plataforma Deocratica',
      'target' => 'Plataforma Democratica',
    ),
    46 => array(
      'source' => 'Plural Editores',
      'target' => 'Plural Editores',
    ),
    47 => array(
      'source' => 'PROSOL',
      'target' => 'Programa Solidario Comunal',
    ),
    48 => array(
      'source' => 'RedEtis',
      'target' => 'RedEtis',
    ),
    49 => array(
      'source' => 'SELA',
      'target' => 'Sistema Económico Latinoamericano y del Caribe',
    ),
    50 => array(
      'source' => 'SIPAE',
      'target' => 'Sistema de Investigación sobre la Problemática Agraria en el Ecuador (SIPAE)',
    ),
    51 => array(
      'source' => 'Sistema Económico Latinoamericano y del Caribe - SELA',
      'target' => 'Sistema Económico Latinoamericano y del Caribe',
    ),
    52 => array(
      'source' => 'CRIES',
      'target' => 'Coordinadora Regional de Investigaciones Económicas y Sociales',
    ),
    53 => array(
      'source' => 'INSA',
      'target' => 'Instituto del Seguro Agrario',
    ),
    54 => array(
      'source' => 'ITACA',
      'target' => 'Editorial Itaca',
    ),
    55 => array(
      'source' => 'Prisma',
      'target' => 'Instituto Prisma',
    ),
    56 => array(
      'source' => 'FASE',
      'target' => 'Federação de Órgãos para Assistência Social e Educacional',
    ),
  ),
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
      'source' => 'Amigos de la Tierra',
      'target' => 'Amigos de la Tierra',
    ),
    2 => array(
      'source' => 'Amnistía Internacional',
      'target' => 'Amnesty International',
    ),
    3 => array(
      'source' => 'Arandura',
      'target' => 'Arandurã Editorial',
    ),
    4 => array(
      'source' => 'BASE Investigaciones Sociales',
      'target' => 'Base Investigaciones Sociales',
    ),
    5 => array(
      'source' => 'BID',
      'target' => 'Inter-American Development Bank',
    ),
    6 => array(
      'source' => 'Brot für die Welt  - IBASE',
      'target' => 'Brot für die Welt',
    ),
    7 => array(
      'source' => 'Centro de Monitoramento de Agrocombustíveis',
      'target' => 'Repórter Brasil',
    ),
    8 => array(
      'source' => 'Centro Peruano de Estudios Sociales \\(CEPES\\)',
      'target' => 'Centro Peruano de Estudios Sociales',
    ),
    9 => array(
      'source' => 'CEPAL',
      'target' => 'Economic Commission for Latin America and the Caribbean',
    ),
    10 => array(
      'source' => 'CEPES',
      'target' => 'Centro Peruano de Estudios Sociales',
    ),
    11 => array(
      'source' => 'CIAAL',
      'target' => 'Centro de Investigaciones Agroalimentarias',
    ),
    12 => array(
      'source' => 'CIDES',
      'target' => 'El Postgrado en Ciencias del Desarrollo',
    ),
    13 => array(
      'source' => 'Comisión Pro Indio; Agua y Energía: Movimiento de  Trabajadores sin Tierra; y Christian Aid',
      'target' => 'Comissão Pró-Índio; Movimento dos Trabalhadores Rurais Sem Terra; Christian Aid',
    ),
    14 => array(
      'source' => 'Conferencia de Naciones Unidas sobre Comercio y Desarrollo\\( UNCTAD\\)',
      'target' => 'United Nations Conference on Trade and Development',
    ),
    15 => array(
      'source' => 'Coordinadora Andina de Organizaciones Indígenas – CAOI',
      'target' => 'Coordinadora Andina de Organizaciones Indígenas',
    ),
    16 => array(
      'source' => 'División de tierras y aguas- FAO',
      'target' => 'FAO',
    ),
    17 => array(
      'source' => 'Equipo Tierras SIPAE',
      'target' => 'Sistema de Investigación sobre la Problemática Agraria en el Ecuador (SIPAE)',
    ),
    18 => array(
      'source' => 'Estado Plurinacional de Bolivia',
      'target' => 'Government of Bolivia',
    ),
    19 => array(
      'source' => 'Facultad de Ciencias Jurídicas y Políticas Centro de Estudios Rurales Andinos Maestría en Desarrollo Agrario',
      'target' => 'Universidad de los Andes',
    ),
    20 => array(
      'source' => 'FAO',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    21 => array(
      'source' => 'FLACSO - Chile',
      'target' => 'Facultad Latinoamericana de Ciencias Sociales Chile',
    ),
    22 => array(
      'source' => 'Foro Rural Mundial',
      'target' => 'World Rural Forum',
    ),
    23 => array(
      'source' => 'Fundacion Jubileo',
      'target' => 'Fundación Jubileo',
    ),
    24 => array(
      'source' => 'Fundación Jubileo',
      'target' => 'Fundación Jubileo',
    ),
    25 => array(
      'source' => 'Fundación para el Debido Proceso',
      'target' => 'Due Process of Law Foundation',
    ),
    26 => array(
      'source' => 'Fundación TIERRA',
      'target' => 'Fundación Tierra',
    ),
    27 => array(
      'source' => 'Fundación UNIR',
      'target' => 'Fundación UNIR Bolivia',
    ),
    28 => array(
      'source' => 'Fundación Xavier Albó',
      'target' => 'Fundación Xavier Albó',
    ),
    29 => array(
      'source' => 'GRAIN',
      'target' => 'GRAIN',
    ),
    30 => array(
      'source' => 'IAEN',
      'target' => 'El Instituto de Altos Estudios Nacionales',
    ),
    31 => array(
      'source' => 'IALCSH',
      'target' => 'Hunger-Free Latin America and the Caribbean Initiative',
    ),
    32 => array(
      'source' => 'IICA',
      'target' => 'Instituto Interamericano de Cooperación para la Agricultura',
    ),
    33 => array(
      'source' => 'INAP \\(Instituto Nacional de la Administración Publica\\)',
      'target' => 'Instituto Nacional de la Administración Publica',
    ),
    34 => array(
      'source' => 'Informe de Investigación de Oxfam Internacional',
      'target' => 'Oxfam International',
    ),
    35 => array(
      'source' => 'Instituto Interamericano de Cooperación para la Agricultura \\(IICA\\)',
      'target' => 'Instituto Interamericano de Cooperación para la Agricultura',
    ),
    36 => array(
      'source' => 'IPDRS',
      'target' => 'Instituto para el Desarrollo Rural de Sudamérica',
    ),
    37 => array(
      'source' => 'IPDRS\\/MRxT',
      'target' => 'Instituto para el Desarrollo Rural de Sudamérica',
    ),
    38 => array(
      'source' => 'Movimiento Regional por la Tierra y Territorio',
      'target' => 'Movimiento Regional por la Tierra',
    ),
    39 => array(
      'source' => 'NNUU',
      'target' => 'United Nations',
    ),
    40 => array(
      'source' => 'IEE/OCARU',
      'target' => 'OCARU',
    ),
    41 => array(
      'source' => 'Observatorio del Cambio Rural',
      'target' => 'OCARU',
    ),
    42 => array(
      'source' => 'OCARU',
      'target' => 'OCARU Observatorio del Cambio Rural',
    ),
    43 => array(
      'source' => 'OEA',
      'target' => 'Organization of American States',
    ),
    44 => array(
      'source' => 'OXFAM',
      'target' => 'Oxfam International',
    ),
    45 => array(
      'source' => 'Plataforma Deocratica',
      'target' => 'Plataforma Democratica',
    ),
    46 => array(
      'source' => 'Plural Editores',
      'target' => 'Plural Editores',
    ),
    47 => array(
      'source' => 'PROSOL',
      'target' => 'Programa Solidario Comunal',
    ),
    48 => array(
      'source' => 'RedEtis',
      'target' => 'RedEtis',
    ),
    49 => array(
      'source' => 'SELA',
      'target' => 'Sistema Económico Latinoamericano y del Caribe',
    ),
    50 => array(
      'source' => 'SIPAE',
      'target' => 'Sistema de Investigación sobre la Problemática Agraria en el Ecuador (SIPAE)',
    ),
    51 => array(
      'source' => 'Sistema Económico Latinoamericano y del Caribe - SELA',
      'target' => 'Sistema Económico Latinoamericano y del Caribe',
    ),
    52 => array(
      'source' => 'CRIES',
      'target' => 'Coordinadora Regional de Investigaciones Económicas y Sociales',
    ),
    53 => array(
      'source' => 'INSA',
      'target' => 'Instituto del Seguro Agrario',
    ),
    54 => array(
      'source' => 'ITACA',
      'target' => 'Editorial Itaca',
    ),
    55 => array(
      'source' => 'Prisma',
      'target' => 'Instituto Prisma',
    ),
    56 => array(
      'source' => 'FASE',
      'target' => 'Federação de Órgãos para Assistência Social e Educacional',
    ),
  ),
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
      'source' => 'Recursos y herramientas de formación',
      'target' => 'Training Resources & Tools',
    ),
    5 => array(
      'source' => 'Libros y Artículos de revistas - Publicaciones revisadas por pares',
      'target' => 'Peer-reviewed publication',
    ),
    6 => array(
      'source' => 'Libros y Artículos de revistas',
      'target' => 'Journal Articles & Books',
    ),
    7 => array(
      'source' => 'Legislación y Políticas - Acuerdos Internacionales o Tratados',
      'target' => 'International Conventions or Treaties',
    ),
    8 => array(
      'source' => 'Legislación y Políticas - Resoluciones de la ONU',
      'target' => 'UN Resolutions',
    ),
    9 => array(
      'source' => 'Legislación y Políticas - Políticas Nacionales',
      'target' => 'National Policies',
    ),
    10 => array(
      'source' => 'Legislación y Políticas - Otros',
      'target' => 'Other',
    ),
  ),
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
