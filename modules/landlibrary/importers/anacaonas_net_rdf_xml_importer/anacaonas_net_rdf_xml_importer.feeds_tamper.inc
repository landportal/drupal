<?php

/**
 * Implements hook_feeds_tamper_default().
 */
function anacaonas_net_rdf_xml_importer_feeds_tamper_default() {

$export = array();

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-blank_source_1-default_value';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
$feeds_tamper->source = 'Blank source 1';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'importer_anacaonas_rdf_xml',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "importer_anacaonas_rdf_xml"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-blank_source_2-default_value';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
$feeds_tamper->source = 'Blank source 2';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'Cooperativa Sulá Batsú',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "Cooperativa Sulá Batsú"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-blank_source_2-keyword_filter';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
$feeds_tamper->source = 'Blank source 2';
$feeds_tamper->plugin_id = 'keyword_filter';
$feeds_tamper->settings = array(
  'words' => 'Artículo de opinión
Noticia',
  'word_boundaries' => 0,
  'exact' => 1,
  'case_sensitive' => 0,
  'invert' => 1,
  'word_list' => array(
    0 => '/^Artículo de opinión$/ui',
    1 => '/^Noticia$/ui',
  ),
  'regex' => TRUE,
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Keyword filter';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_11-efq_finder';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
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
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_11-php';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
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
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_11-unique';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:11';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 24;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_14-default_value';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:14';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'Land & Gender',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set value "Land & Gender"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_15-efq_finder';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
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
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_15-php_tid';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
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
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_15-required';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
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
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_15-unique';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:15';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 16;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_16-explode';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
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
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_16-implode';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
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
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_16-trim';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
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
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_18-feeds_tamper_conditional';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
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
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_21-explode';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
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
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_21-find_replace_multiple';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:21';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'Agencia Nacional de Tierras',
      'target' => 'Agencia Nacional de Tierras Colombia',
    ),
    1 => array(
      'source' => 'Agencia Suiza para el Desarrollo y la Cooperación',
      'target' => 'Swiss Agency for Development and Cooperation',
    ),
    2 => array(
      'source' => 'Agencia Tegantai',
      'target' => 'La Agencia Ecologista de Información Tegantai',
    ),
    3 => array(
      'source' => 'América Latina Genera',
      'target' => 'América Latina Genera',
    ),
    4 => array(
      'source' => 'Articulación Nacional de Mujeres Tejiendo Fuerza por el Buen Vivir',
      'target' => 'Articulación Nacional de Mujeres Tejiendo Fuerzas para el Buen Vivir',
    ),
    5 => array(
      'source' => 'Asamblea Nacional',
      'target' => 'Asamblea Nacional Nicaragua',
    ),
    6 => array(
      'source' => 'Asociación de Agricultores Pequeños de Cuba',
      'target' => 'Asociación Nacional de Agricultores Pequeños',
    ),
    7 => array(
      'source' => 'Asociación para el Desarrollo de la Mujer Negra Costarricense',
      'target' => 'Asociación para el Desarrollo de la Mujer Negra Costarricense',
    ),
    8 => array(
      'source' => 'Asociación Servicios Educativos Rurales',
      'target' => 'Asociación Servicios Educativos Rurales',
    ),
    9 => array(
      'source' => 'Asociación Servicios Educativos Rurales - Perú',
      'target' => 'Asociación Servicios Educativos Rurales',
    ),
    10 => array(
      'source' => 'Audiovisuales UNED',
      'target' => 'Universidad Estatal a Distancia',
    ),
    11 => array(
      'source' => 'AWID',
      'target' => 'Association for Women\'s Rights in Development',
    ),
    12 => array(
      'source' => 'Ayuda en Acción',
      'target' => 'Ayuda en Acción',
    ),
    13 => array(
      'source' => 'Banco Audiovisual de Frentes Socioambientales',
      'target' => 'Banco Audiovisual de Frentes Socioambientais',
    ),
    14 => array(
      'source' => 'BRIDGE',
      'target' => 'BRIDGE',
    ),
    15 => array(
      'source' => 'Canal UCR',
      'target' => 'Universidad de Costa Rica',
    ),
    16 => array(
      'source' => 'Centro de Investigacion y Educacion Popular (CINEP)',
      'target' => 'Centro de Investigación y Educación Popular, Programa por la paz',
    ),
    17 => array(
      'source' => 'Centro de la Mujer Peruana Flora Tristán',
      'target' => 'El Centro de la Mujer Peruana Flora Tristán',
    ),
    18 => array(
      'source' => 'Centro Latinoamericano para el Desarrollo Rural',
      'target' => 'RIMISP - Centro Latinoamericano para el Desarrollo Rural',
    ),
    19 => array(
      'source' => 'Centro Peruano de Estudios Sociales',
      'target' => 'Centro Peruano de Estudios Sociales',
    ),
    20 => array(
      'source' => 'Centro Peruano de Estudios Sociales (CEPES)',
      'target' => 'Centro Peruano de Estudios Sociales',
    ),
    21 => array(
      'source' => 'CEPAL',
      'target' => 'Economic Commission for Latin America and the Caribbean',
    ),
    22 => array(
      'source' => 'CLACSO TV',
      'target' => 'CLACSO TV',
    ),
    23 => array(
      'source' => 'Climate & Development Knowledge Network',
      'target' => 'Climate & Development Knowledge Network',
    ),
    24 => array(
      'source' => 'CODECA',
      'target' => 'Comité de Desarrollo Campesino',
    ),
    25 => array(
      'source' => 'Colectivo Voces Ecológicas',
      'target' => 'Colectivo Voces Ecológicas',
    ),
    26 => array(
      'source' => 'Comisión Colombiana de Juristas',
      'target' => 'La Comisión Colombiana de Jurista',
    ),
    27 => array(
      'source' => 'Comunicación Social del Senado de la República de México',
      'target' => 'Senado de la República México',
    ),
    28 => array(
      'source' => 'Consejo Nacional para Prevenir la Discriminación',
      'target' => 'Consejo Nacional para Prevenir la Discriminación',
    ),
    29 => array(
      'source' => 'Consejo Noruego para Refugiados',
      'target' => 'Norwegian Refugee Council',
    ),
    30 => array(
      'source' => 'Coordinación de ONG y Cooperativas (CONGCOOP)',
      'target' => 'CONGCOOP',
    ),
    31 => array(
      'source' => 'Coordinadora de la Mujer',
      'target' => 'La Coordinadora de la Mujer Bolivia',
    ),
    32 => array(
      'source' => 'Corporación Ambiental Río Verde',
      'target' => 'Procasur',
    ),
    33 => array(
      'source' => 'Ditsö',
      'target' => 'Ditsö',
    ),
    34 => array(
      'source' => 'ECC ACISAM',
      'target' => 'ECC ACISAM',
    ),
    35 => array(
      'source' => 'Embajada Británica de la Paz',
      'target' => 'Government of the United Kingdom',
    ),
    36 => array(
      'source' => 'Entidad de las Naciones Unidas para la Igualdad de Género y el Empoderamiento de Mujeres',
      'target' => 'United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    37 => array(
      'source' => 'Estrategia Nacional de Involucramiento - ENIGuatemala',
      'target' => 'Estrategia Nacional de Involucramiento Guatemala',
    ),
    38 => array(
      'source' => 'Fian Internacional',
      'target' => 'FIAN International',
    ),
    39 => array(
      'source' => 'Fondo de Acción Urgente',
      'target' => 'Fondo de Acción Urgente',
    ),
    40 => array(
      'source' => 'Fondo de las Naciones Unidas',
      'target' => 'United Nations Population Fund',
    ),
    41 => array(
      'source' => 'Fondo de Población de las Naciones Unidas',
      'target' => 'United Nations Population Fund',
    ),
    42 => array(
      'source' => 'Fundación entre Mujeres',
      'target' => 'Fundación entre Mujeres',
    ),
    43 => array(
      'source' => 'Fundación Tierra',
      'target' => 'Fundación Tierra',
    ),
    44 => array(
      'source' => 'FUNDAPAZ',
      'target' => 'Fundación para el Desarrollo en Justicia y Paz',
    ),
    45 => array(
      'source' => 'Global Gender and Climate Aliance',
      'target' => 'Global Gender and Climate Alliance',
    ),
    46 => array(
      'source' => 'Global Witness',
      'target' => 'Global Witness',
    ),
    47 => array(
      'source' => 'Gobernabilidad Democrática',
      'target' => 'Coordinadora Regional de Investigaciones Económicas y Sociales',
    ),
    48 => array(
      'source' => 'IFAD',
      'target' => 'International Fund for Agricultural Development (IFAD)',
    ),
    49 => array(
      'source' => 'Iniciativa por la Democratización de la Comunicación',
      'target' => 'Iniciativa por la Democratización de la Comunicación en el Paraguay',
    ),
    50 => array(
      'source' => 'Instituto Nacional de las Mujeres de México',
      'target' => 'Instituto Nacional de las Mujeres de México',
    ),
    51 => array(
      'source' => 'Instituto Nacional de Reforma Agraria',
      'target' => 'Instituto Nacional de Reforma Agraria Bolivia',
    ),
    52 => array(
      'source' => 'Instituto Popular de Capacitación',
      'target' => 'Instituto Popular de Capacitación',
    ),
    53 => array(
      'source' => 'Inter Press Service',
      'target' => 'Inter Press Service',
    ),
    54 => array(
      'source' => 'International Land Coalition',
      'target' => 'International Land Coalition',
    ),
    55 => array(
      'source' => 'La Vía Campesina',
      'target' => 'Via Campesina',
    ),
    56 => array(
      'source' => 'Miembros de la Coalición Internacional para el Acceso a la Tierra',
      'target' => 'International Land Coalition',
    ),
    57 => array(
      'source' => 'Movimiento Regional por la Tierra',
      'target' => 'Movimiento Regional por la tierra y el territorio',
    ),
    58 => array(
      'source' => 'Mujer Migrante',
      'target' => 'Mujer Migrante',
    ),
    59 => array(
      'source' => 'Mundubat',
      'target' => 'Mundubat',
    ),
    60 => array(
      'source' => 'Naciones Unidas',
      'target' => 'United Nations',
    ),
    61 => array(
      'source' => 'Naciones Unidas Derechos Humanos',
      'target' => 'United Nations',
    ),
    62 => array(
      'source' => 'Nyéléni',
      'target' => 'Nyéléni',
    ),
    63 => array(
      'source' => 'Oficina Global de Género de la UICN',
      'target' => 'International Union for Conservation of Nature',
    ),
    64 => array(
      'source' => 'Oficina Regional para México, América Central y el Caribe de la UICN',
      'target' => 'International Union for Conservation of Nature',
    ),
    65 => array(
      'source' => 'ONU Mujeres',
      'target' => 'United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    66 => array(
      'source' => 'ONU Mujeres Guatemala',
      'target' => 'United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    67 => array(
      'source' => 'Organización de las Naciones Unidas para la Alimentación y la Agricultura',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    68 => array(
      'source' => 'Oxfam',
      'target' => 'Oxfam International',
    ),
    69 => array(
      'source' => 'Oxfam International',
      'target' => 'Oxfam International',
    ),
    70 => array(
      'source' => 'Oxfam Nicaragua',
      'target' => 'Oxfam International',
    ),
    71 => array(
      'source' => 'Prensa RUM',
      'target' => 'Universidad de Puerto Rico',
    ),
    72 => array(
      'source' => 'Presidencia de la República',
      'target' => 'Presidencia de la República Guatemala',
    ),
    73 => array(
      'source' => 'Programa de Naciones Unidas para el Desarrollo',
      'target' => 'United Nations Development Programme',
    ),
    74 => array(
      'source' => 'Programa Feminista La Corriente',
      'target' => 'Programa Feminista La Corriente',
    ),
    75 => array(
      'source' => 'ReafMercoSul',
      'target' => 'Reunión Especializada de Agricultura Familiar del MERCOSUR',
    ),
    76 => array(
      'source' => 'RECMURIC',
      'target' => 'Red Centroamericana de Mujeres Rurales, Indígenas y Campesinas',
    ),
    77 => array(
      'source' => 'Red Centroamericana de Mujeres Rurales Indígenas y Campesinas (RECMURIC)',
      'target' => 'Red Centroamericana de Mujeres Rurales, Indígenas y Campesinas',
    ),
    78 => array(
      'source' => 'Red de Mujeres Rurales de Costa Rica',
      'target' => 'Red de Mujeres Rurales de Costa Rica',
    ),
    79 => array(
      'source' => 'Red Ecofeminista, Intercultural y Solidaria',
      'target' => 'Red Ecofeminista Intercultural y Solidaria',
    ),
    80 => array(
      'source' => 'Red Latinoamericana de Mujeres',
      'target' => 'Red Latinoamericana de Mujeres Defensoras de Derechos Sociales y Ambientales',
    ),
    81 => array(
      'source' => 'Red Latinoamericana de Mujeres Defensoras de Derechos Sociales y Ambientales',
      'target' => 'Red Latinoamericana de Mujeres Defensoras de Derechos Sociales y Ambientales',
    ),
    82 => array(
      'source' => 'Rediagro San Martín',
      'target' => 'Rediagro San Martín',
    ),
    83 => array(
      'source' => 'Reformas Guatemala',
      'target' => 'Reformas Guatemala',
    ),
    84 => array(
      'source' => 'RIMISP',
      'target' => 'RIMISP - Centro Latinoamericano para el Desarrollo Rural',
    ),
    85 => array(
      'source' => 'Secretaría de la Comisión Mujeres y Desarrollo',
      'target' => 'United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    86 => array(
      'source' => 'Senado de México',
      'target' => 'Senado de la República México',
    ),
    87 => array(
      'source' => 'Seres Humanos, Igualdad y Equidad de Género',
      'target' => 'Seres Humanos, Igualdad y Equidad de Género',
    ),
    88 => array(
      'source' => 'Sudamérica Rural',
      'target' => 'Instituto para el Desarrollo Rural de Sudamérica',
    ),
    89 => array(
      'source' => 'Uaganet',
      'target' => 'Unión Agroganadera de Álava-Arabako Nekazarien Elkartea',
    ),
    90 => array(
      'source' => 'Unión Latinoamericana de Mujeres',
      'target' => 'Unión Latinoamericana de Mujeres',
    ),
    91 => array(
      'source' => 'Universidad Centroamericana',
      'target' => 'Universidad Centroamericana',
    ),
    92 => array(
      'source' => 'Vía Campesina',
      'target' => 'Via Campesina',
    ),
    93 => array(
      'source' => 'WFP Latinoamérica',
      'target' => 'World Food Programme',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Find replace multiple (anacaonas.net Corporate authors)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_21-trim';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
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
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_21-unique';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:21';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_23-find_replace_multiple';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:23';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'Creative Commons: Reconocimiento (BY)',
      'target' => 'Creative Commons Attribution',
    ),
    1 => array(
      'source' => 'Creative Commons: Reconocimiento – NoComercial (BY-NC)',
      'target' => 'Creative Commons Attribution-NonCommercial',
    ),
    2 => array(
      'source' => 'Creative Commons: Reconocimiento – NoComercial – CompartirIgual (BY-NC-SA)',
      'target' => 'Creative Commons Attribution-NonCommercial-ShareAlike',
    ),
    3 => array(
      'source' => 'Creative Commons: Reconocimiento – NoComercial – SinObraDerivada (BY-NC-ND)',
      'target' => 'Creative Commons Attribution-NonCommercial-NoDerivs',
    ),
    4 => array(
      'source' => 'Creative Commons: Reconocimiento – CompartirIgual (BY-SA)',
      'target' => 'Creative Commons Attribution-ShareAlike',
    ),
    5 => array(
      'source' => 'Creative Commons: Reconocimiento – SinObraDerivada (BY-ND)',
      'target' => 'Creative Commons Attribution-NoDerivs',
    ),
    6 => array(
      'source' => 'Todos los derechos reservados',
      'target' => 'All rights reserved',
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
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_24-efq_finder';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
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
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_24-php';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
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
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_24-unique';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:24';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_25-feeds_tamper_conditional';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
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
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_25-php';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
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
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_6-str_pad';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:6';
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
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_7-explode';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
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
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_7-find_replace_multiple';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:7';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'ACI Soberanía Alimentaria',
      'target' => 'Asociación de Cooperación Internacional',
    ),
    1 => array(
      'source' => 'Administración de la Comunidad Autónoma de Euskadi',
      'target' => 'Administración General de la Comunidad Autonoma de Euskadi',
    ),
    2 => array(
      'source' => 'Agencia Nacional de Tierras',
      'target' => 'Agencia Nacional de Tierras Colombia',
    ),
    3 => array(
      'source' => 'Agencia Suiza para el Desarrollo y la Cooperación',
      'target' => 'Swiss Agency for Development and Cooperation',
    ),
    4 => array(
      'source' => 'Agencia Tegantai',
      'target' => 'La Agencia Ecologista de Información Tegantai',
    ),
    5 => array(
      'source' => 'Agencia Vasca de Cooperación para el Desarrollo',
      'target' => 'La Agencia Vasca de Cooperación para el Desarrollo',
    ),
    6 => array(
      'source' => 'América Latina Genera',
      'target' => 'América Latina Genera',
    ),
    7 => array(
      'source' => 'Articulación Feminista Marcosur',
      'target' => 'Articulación Feminista Marcosur',
    ),
    8 => array(
      'source' => 'Articulación Nacional de Mujeres Tejiendo Fuerza por el Buen Vivir',
      'target' => 'Articulación Nacional de Mujeres Tejiendo Fuerzas para el Buen Vivir',
    ),
    9 => array(
      'source' => 'Asociación de Agricultores Pequeños de Cuba',
      'target' => 'Asociación Nacional de Agricultores Pequeños',
    ),
    10 => array(
      'source' => 'Asociación Latinoamericana de Organizaciones de Promoción al Desarrollo',
      'target' => 'Asociación Latinoamericana de Organizaciones de Promoción al Desarrollo',
    ),
    11 => array(
      'source' => 'Asociación para el desarrollo de las mujeres negras costarricenses',
      'target' => 'Asociación para el desarrollo de las mujeres negras costarricenses',
    ),
    12 => array(
      'source' => 'Asociación para los derechos de la Mujer y el Desarrollo (AWID)',
      'target' => 'Association for Women\'s Rights in Development',
    ),
    13 => array(
      'source' => 'Asociación Servicios Educativos Rurales - Perú',
      'target' => 'Asociación Servicios Educativos Rurales',
    ),
    14 => array(
      'source' => 'Asociación Servicios Educativos Rurales (SER)',
      'target' => 'Asociación Servicios Educativos Rurales',
    ),
    15 => array(
      'source' => 'AWID',
      'target' => 'Association for Women\'s Rights in Development',
    ),
    16 => array(
      'source' => 'Ayuda en Acción',
      'target' => 'Ayuda en Acción',
    ),
    17 => array(
      'source' => 'Banco Audiovisual de Frentes Socioambientales',
      'target' => 'Banco Audiovisual de Frentes Socioambientais',
    ),
    18 => array(
      'source' => 'Banco Interamericano de Desarrollo',
      'target' => 'Inter-American Development Bank',
    ),
    19 => array(
      'source' => 'Canal Uaganet',
      'target' => 'Unión Agroganadera de Álava-Arabako Nekazarien Elkartea',
    ),
    20 => array(
      'source' => 'Canal UCR',
      'target' => 'Universidad de Costa Rica',
    ),
    21 => array(
      'source' => 'Carta de la Tierra',
      'target' => 'La Carta de la Tierra',
    ),
    22 => array(
      'source' => 'CENDA',
      'target' => 'Corporación Universitaria CENDA',
    ),
    23 => array(
      'source' => 'Centro de Investigacion y Educacion Popular (CINEP)',
      'target' => 'Centro de Investigación y Educación Popular, Programa por la paz',
    ),
    24 => array(
      'source' => 'Centro de Investigaciones Diego Barros Arana',
      'target' => 'El Centro de Investigaciones Diego Barros Arana',
    ),
    25 => array(
      'source' => 'Centro de la Mujer Peruana Flora Tristán',
      'target' => 'El Centro de la Mujer Peruana Flora Tristán',
    ),
    26 => array(
      'source' => 'Centro Latinoamericano para el Desarrollo Rural',
      'target' => 'RIMISP - Centro Latinoamericano para el Desarrollo Rural',
    ),
    27 => array(
      'source' => 'Centro Peruano de Estudios Sociales',
      'target' => 'Centro Peruano de Estudios Sociales',
    ),
    28 => array(
      'source' => 'Centro Peruano de Estudios Sociales (CEPES)',
      'target' => 'Centro Peruano de Estudios Sociales',
    ),
    29 => array(
      'source' => 'Centro virtual de conocimiento para poner fin a la violencia contra las mujeres y niñas',
      'target' => 'United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    30 => array(
      'source' => 'CEPAL',
      'target' => 'Economic Commission for Latin America and the Caribbean',
    ),
    31 => array(
      'source' => 'Chr. Michelsen Institute',
      'target' => 'Chr. Michelsen Institute',
    ),
    32 => array(
      'source' => 'CINEP',
      'target' => 'Centro de Investigación y Educación Popular, Programa por la paz',
    ),
    33 => array(
      'source' => 'CISEPA',
      'target' => 'El Centro de Investigaciones Sociológicas, Económicas, Políticas y Antropológicas',
    ),
    34 => array(
      'source' => 'CLACSO TV',
      'target' => 'CLACSO TV',
    ),
    35 => array(
      'source' => 'Climate & Development Knowledge Network',
      'target' => 'Climate & Development Knowledge Network',
    ),
    36 => array(
      'source' => 'Coalición Internacional para el Acceso a la Tierra',
      'target' => 'International Land Coalition',
    ),
    37 => array(
      'source' => 'Colectivo Voces Ecológicas',
      'target' => 'Colectivo Voces Ecológicas',
    ),
    38 => array(
      'source' => 'Colegio de México',
      'target' => 'El Colegio de México',
    ),
    39 => array(
      'source' => 'Colegio de Postgraduados de México',
      'target' => 'Colegio de Postgraduados de México',
    ),
    40 => array(
      'source' => 'Comisión Colombiana de Juristas',
      'target' => 'La Comisión Colombiana de Jurista',
    ),
    41 => array(
      'source' => 'Comité de América Latina y el Caribe para la Defensa de los Derechos de la Mujer',
      'target' => 'Comité de América Latina y el Caribe para la Defensa de los Derechos de la Mujer',
    ),
    42 => array(
      'source' => 'Commission nationale suisse pour l’UNESCO',
      'target' => 'United Nations Educational Scientific and Cultural Organization',
    ),
    43 => array(
      'source' => 'Comunicación del Senado de México',
      'target' => 'Senado de la República México',
    ),
    44 => array(
      'source' => 'Consejo Nacional para Prevenir la Discriminación',
      'target' => 'Consejo Nacional para Prevenir la Discriminación',
    ),
    45 => array(
      'source' => 'Consejo Noruego para Refugiados',
      'target' => 'Norwegian Refugee Council',
    ),
    46 => array(
      'source' => 'Coordinadora de la Mujer',
      'target' => 'La Coordinadora de la Mujer',
    ),
    47 => array(
      'source' => 'Coordinadora de Mujeres Rurales de Nicaragua',
      'target' => 'Coordinadora de Mujeres Rurales de Nicaragua',
    ),
    48 => array(
      'source' => 'Coordinadora Feminista',
      'target' => 'Coordinadora Feminista',
    ),
    49 => array(
      'source' => 'Corporación de Mujeres Ecofeminista',
      'target' => 'Corporación de Mujeres EcoFeministas COMUNITAR',
    ),
    50 => array(
      'source' => 'Correo del Sur',
      'target' => 'Periódico Correo del Sur',
    ),
    51 => array(
      'source' => 'Cotidiano Mujer',
      'target' => 'Cotidiano Mujer',
    ),
    52 => array(
      'source' => 'Crece. Alimentos. Vida. Planeta',
      'target' => 'Oxfam International',
    ),
    53 => array(
      'source' => 'Cuadernos de Desarrollo Rural',
      'target' => 'Cuadernos de Desarrollo Rural',
    ),
    54 => array(
      'source' => 'Ditsö',
      'target' => 'Ditsö',
    ),
    55 => array(
      'source' => 'ECC ACISAM',
      'target' => 'ECC ACISAM',
    ),
    56 => array(
      'source' => 'Embajada Británica de la Paz',
      'target' => 'Government of the United Kingdom',
    ),
    57 => array(
      'source' => 'Entidad de las Naciones Unidas para la Igualdad de Género y el Empoderamiento de Mujeres',
      'target' => 'United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    58 => array(
      'source' => 'Entre Pueblos',
      'target' => 'Entre Pueblos',
    ),
    59 => array(
      'source' => 'Environment & Gender Index',
      'target' => 'International Union for Conservation of Nature',
    ),
    60 => array(
      'source' => 'Escuela Nacional de Antropología e Historia México',
      'target' => 'Escuela Nacional de Antropología e Historia México',
    ),
    61 => array(
      'source' => 'Federación Estatal de Organizaciones Feministas',
      'target' => 'Coordinadora Feminista',
    ),
    62 => array(
      'source' => 'FIAN Internacional',
      'target' => 'FIAN International',
    ),
    63 => array(
      'source' => 'FIDA',
      'target' => 'International Fund for Agricultural Development (IFAD)',
    ),
    64 => array(
      'source' => 'FLACSO Ecuador',
      'target' => 'Facultad Latinoamericana de Ciencias Sociales Ecuador',
    ),
    65 => array(
      'source' => 'FLACSO Guatemala',
      'target' => 'Facultad Latinoamericana de Ciencias Sociales Guatemala',
    ),
    66 => array(
      'source' => 'Fondo de Acción Urgente',
      'target' => 'Fondo de Acción Urgente',
    ),
    67 => array(
      'source' => 'Fondo de Desarrollo de las Naciones Unidas para la Mujer',
      'target' => 'United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    68 => array(
      'source' => 'Fondo de las Naciones Unidas',
      'target' => 'United Nations Population Fund',
    ),
    69 => array(
      'source' => 'Fondo de Población de las Naciones Unidas',
      'target' => 'United Nations Population Fund',
    ),
    70 => array(
      'source' => 'Fondo para el Desarrollo de los Pueblos Indígenas de América Latina y El Caribe',
      'target' => 'El Fondo para el Desarrollo de los Pueblos Indígenas de América Latina y El Caribe',
    ),
    71 => array(
      'source' => 'Friedrich Ebert Stiftung',
      'target' => 'Friedrich-Ebert-Stiftung - Instituto Latinoamericano de Investigaciones Sociales',
    ),
    72 => array(
      'source' => 'Fundación Entre Mujeres',
      'target' => 'Fundación entre Mujeres',
    ),
    73 => array(
      'source' => 'Fundación Latinoamericana de Innovación Social',
      'target' => 'Fundación Latinoamericana de Innovación Social',
    ),
    74 => array(
      'source' => 'Fundación Nacional para el Desarrollo',
      'target' => 'Fundación Nacional para el Desarrollo',
    ),
    75 => array(
      'source' => 'Fundación Tierra',
      'target' => 'Fundación Tierra',
    ),
    76 => array(
      'source' => 'FUNDAPAZ',
      'target' => 'Fundación para el Desarrollo en Justicia y Paz',
    ),
    77 => array(
      'source' => 'Global Gender and Climate Aliance',
      'target' => 'Global Gender and Climate Alliance',
    ),
    78 => array(
      'source' => 'Global Witness',
      'target' => 'Global Witness',
    ),
    79 => array(
      'source' => 'Gobernabilidad Democrática',
      'target' => 'United Nations Development Programme',
    ),
    80 => array(
      'source' => 'Gobierno Vasco',
      'target' => 'Administración General de la Comunidad Autonoma de Euskadi',
    ),
    81 => array(
      'source' => 'GRAIN, Acción por la Biodiversidad y América Libre',
      'target' => 'GRAIN',
    ),
    82 => array(
      'source' => 'Grupo de Estudios de Relaciones Internacionales',
      'target' => 'Grupo de Estudios de Relaciones Internacionales',
    ),
    83 => array(
      'source' => 'Hábitat para la Humanidad',
      'target' => 'Habitat for Humanity International (HFHI)',
    ),
    84 => array(
      'source' => 'Iniciativa por la Democratización de la Comunicación',
      'target' => 'Iniciativa por la Democratización de la Comunicación en el Paraguay',
    ),
    85 => array(
      'source' => 'Institute of Development Studies',
      'target' => 'Institute of Development Studies',
    ),
    86 => array(
      'source' => 'Instituto de Investigaciones Histórico-Sociales',
      'target' => 'Universidad Veracruzana',
    ),
    87 => array(
      'source' => 'Instituto Interamericano de Cooperación para la Agricultura',
      'target' => 'Instituto Interamericano de Cooperación para la Agricultura',
    ),
    88 => array(
      'source' => 'Instituto Nacional de las Mujeres de México',
      'target' => 'Instituto Nacional de las Mujeres de México',
    ),
    89 => array(
      'source' => 'Instituto Nacional de Reforma Agraria',
      'target' => 'Instituto Nacional de Reforma Agraria Bolivia',
    ),
    90 => array(
      'source' => 'Inter Press Service',
      'target' => 'Inter Press Service',
    ),
    91 => array(
      'source' => 'International Land Coalition',
      'target' => 'International Land Coalition',
    ),
    92 => array(
      'source' => 'IUCN Portals',
      'target' => 'International Union for Conservation of Nature',
    ),
    93 => array(
      'source' => 'La Prensa Gráfica',
      'target' => 'La Prensa Gráfica',
    ),
    94 => array(
      'source' => 'La Prensa Libre',
      'target' => 'La Prensa Libre',
    ),
    95 => array(
      'source' => 'La Vía Campesina',
      'target' => 'Via Campesina',
    ),
    96 => array(
      'source' => 'Land Coalition',
      'target' => 'International Land Coalition',
    ),
    97 => array(
      'source' => 'Latinoamérica en el centro',
      'target' => 'Latinoamérica en el centro',
    ),
    98 => array(
      'source' => 'LOM Ediciones',
      'target' => 'LOM Ediciones',
    ),
    99 => array(
      'source' => 'Motor Económico',
      'target' => 'Motor Económico',
    ),
    100 => array(
      'source' => 'Movimiento Regional por la Tierra',
      'target' => 'Movimiento Regional por la tierra y el territorio',
    ),
    101 => array(
      'source' => 'Movimiento Salvadoreño de Mujeres',
      'target' => 'Movimiento Salvadoreño de Mujeres',
    ),
    102 => array(
      'source' => 'Mujer Migrante',
      'target' => 'Mujer Migrante',
    ),
    103 => array(
      'source' => 'Naciones Unidas',
      'target' => 'United Nations',
    ),
    104 => array(
      'source' => 'Naciones Unidas Derechos Humanos',
      'target' => 'United Nations',
    ),
    105 => array(
      'source' => 'Nitlapan',
      'target' => 'Instituto de Investigación y Desarrollo Nitlapan',
    ),
    106 => array(
      'source' => 'Norwegian Latin America Research Network',
      'target' => 'Norwegian Latin America Research Network',
    ),
    107 => array(
      'source' => 'Nyéléni',
      'target' => 'Nyéléni',
    ),
    108 => array(
      'source' => 'Observatorio Género y Equidad',
      'target' => 'Observatorio Género y Equidad',
    ),
    109 => array(
      'source' => 'ONU Mujeres',
      'target' => 'United Nations Entity for Gender Equality and the Empowerment of Women (UNWOMEN)',
    ),
    110 => array(
      'source' => 'Organización de las Naciones Unidas para la Alimentación y la Agricultura',
      'target' => 'Food and Agriculture Organization of the United Nations (FAO)',
    ),
    111 => array(
      'source' => 'Oxfam',
      'target' => 'Oxfam International',
    ),
    112 => array(
      'source' => 'Oxfam International',
      'target' => 'Oxfam International',
    ),
    113 => array(
      'source' => 'Palabra/es',
      'target' => 'Palabra',
    ),
    114 => array(
      'source' => 'Periódico Jornada',
      'target' => 'Periódico Jornada',
    ),
    115 => array(
      'source' => 'Pikara Online Magazine',
      'target' => 'Pikara Magazine',
    ),
    116 => array(
      'source' => 'Plataforma Agraria',
      'target' => 'Plataforma Agraria',
    ),
    117 => array(
      'source' => 'Poder Judicial de la Federación . Consejo de la Judicatura',
      'target' => 'Consejo de la Judicatura',
    ),
    118 => array(
      'source' => 'Pontificia Universidad Javeriana',
      'target' => 'Pontificia Universidad Javeriana',
    ),
    119 => array(
      'source' => 'Prensa RUM',
      'target' => 'Universidad de Puerto Rico',
    ),
    120 => array(
      'source' => 'Procasur',
      'target' => 'Procasur',
    ),
    121 => array(
      'source' => 'Procuradoría Agraria',
      'target' => 'Procuradoría Agraria de México',
    ),
    122 => array(
      'source' => 'Procuradoría Agraria de México',
      'target' => 'Procuradoría Agraria de México',
    ),
    123 => array(
      'source' => 'PROGÉNERO',
      'target' => 'Colectivo Jóvenes por la Igualdad de Género',
    ),
    124 => array(
      'source' => 'Programa de Naciones Unidas para el Desarrollo',
      'target' => 'United Nations Development Programme',
    ),
    125 => array(
      'source' => 'Programa de Reconstrucción y Modernización (PREMODER)',
      'target' => 'International Fund for Agricultural Development (IFAD)',
    ),
    126 => array(
      'source' => 'Programa Feminista La Corriente',
      'target' => 'Programa Feminista La Corriente',
    ),
    127 => array(
      'source' => 'ReafMercoSul',
      'target' => 'Reunión Especializada de Agricultura Familiar del MERCOSUR',
    ),
    128 => array(
      'source' => 'Red Centroamericana de Mujeres Rurales Indígenas y Campesinas (RECMURIC)',
      'target' => 'Red Centroamericana de Mujeres Rurales, Indígenas y Campesinas',
    ),
    129 => array(
      'source' => 'Red de Mujeres Rurales',
      'target' => 'Red de Mujeres Rurales de Costa Rica',
    ),
    130 => array(
      'source' => 'Red de Mujeres Rurales de Costa Rica',
      'target' => 'Red de Mujeres Rurales de Costa Rica',
    ),
    131 => array(
      'source' => 'Red Latinoamericana de Mujeres',
      'target' => 'Red Latinoamericana de Mujeres Defensoras de Derechos Sociales y Ambientales',
    ),
    132 => array(
      'source' => 'Red Latinoamericana de Mujeres Defensoras de Derechos Sociales y Ambientales',
      'target' => 'Red Latinoamericana de Mujeres Defensoras de Derechos Sociales y Ambientales',
    ),
    133 => array(
      'source' => 'Rediagro San Martín',
      'target' => 'Rediagro San Martín',
    ),
    134 => array(
      'source' => 'Reformas Guatemala',
      'target' => 'Reformas Guatemala',
    ),
    135 => array(
      'source' => 'Relaciones Internacionales',
      'target' => 'Grupo de Estudios de Relaciones Internacionale',
    ),
    136 => array(
      'source' => 'ReliefWeb',
      'target' => 'ReliefWeb',
    ),
    137 => array(
      'source' => 'Revisa Relaciones. Estudios de historia y sociedad',
      'target' => 'Relaciones Estudios de Historia y Sociedad',
    ),
    138 => array(
      'source' => 'Revista de Ciencias Sociales',
      'target' => 'Revista de Ciencias Sociales',
    ),
    139 => array(
      'source' => 'Revista Journal of Agrarian Change',
      'target' => 'Journal of Agrarian Change',
    ),
    140 => array(
      'source' => 'Revista Nómadas',
      'target' => 'Revista Nómadas',
    ),
    141 => array(
      'source' => 'Revista Perspectivas',
      'target' => 'Revista Perspectivas',
    ),
    142 => array(
      'source' => 'Revista Scielo',
      'target' => 'Scientific Electronic Library Online',
    ),
    143 => array(
      'source' => 'RIMISP',
      'target' => 'RIMISP - Centro Latinoamericano para el Desarrollo Rural',
    ),
    144 => array(
      'source' => 'Ruta Pacífica de las Mujeres',
      'target' => 'Ruta Pacífica de las Mujeres',
    ),
    145 => array(
      'source' => 'Senado de México',
      'target' => 'Senado de la República México',
    ),
    146 => array(
      'source' => 'Seres Humanos, Igualdad y Equidad de Género',
      'target' => 'Seres Humanos, Igualdad y Equidad de Género',
    ),
    147 => array(
      'source' => 'Servicio de prensa y divulgación científica y tecnológica sobre agronomía y ambiente.',
      'target' => 'Servicio de prensa y divulgación científica y tecnológica sobre agronomía y ambiente.',
    ),
    148 => array(
      'source' => 'Servindi',
      'target' => 'Servindi',
    ),
    149 => array(
      'source' => 'SIMAS',
      'target' => 'SIMAS',
    ),
    150 => array(
      'source' => 'Sociedad Española de Historia Agraria',
      'target' => 'Sociedad Española de Historia Agraria',
    ),
    151 => array(
      'source' => 'Socioeco',
      'target' => 'Social and Solidarity Economy',
    ),
    152 => array(
      'source' => 'Sudamérica Rural',
      'target' => 'Instituto para el Desarrollo Rural de Sudamérica',
    ),
    153 => array(
      'source' => 'Suprema Corte de Justicia de la Nación',
      'target' => 'La Suprema Corte de Justicia de la Nación (México)',
    ),
    154 => array(
      'source' => 'Tribunal Agroambiental',
      'target' => 'Tribunal Agroambiental',
    ),
    155 => array(
      'source' => 'Trocaire',
      'target' => 'Trócaire',
    ),
    156 => array(
      'source' => 'Unión Europea',
      'target' => 'European Union',
    ),
    157 => array(
      'source' => 'Unión Latinoamericana de Mujeres',
      'target' => 'Unión Latinoamericana de Mujeres',
    ),
    158 => array(
      'source' => 'Universidad Autónoma de México',
      'target' => 'Universidad Autónoma de México',
    ),
    159 => array(
      'source' => 'Universidad Centroamericana',
      'target' => 'Universidad Centroamericana',
    ),
    160 => array(
      'source' => 'Universidad de Costa Rica',
      'target' => 'Universidad de Costa Rica',
    ),
    161 => array(
      'source' => 'Universidad de Puerto Rico',
      'target' => 'Universidad de Puerto Rico',
    ),
    162 => array(
      'source' => 'Universidad Estatal a Distancia',
      'target' => 'Universidad Estatal a Distancia',
    ),
    163 => array(
      'source' => 'Universidad Nacional de Colombia',
      'target' => 'Universidad Nacional de Colombia',
    ),
    164 => array(
      'source' => 'Universidad Nacional de la Plata',
      'target' => 'Universidad Nacional de la Plata',
    ),
    165 => array(
      'source' => 'Universidad Veracruzana',
      'target' => 'Universidad Veracruzana',
    ),
    166 => array(
      'source' => 'Univisión',
      'target' => 'Univisión',
    ),
    167 => array(
      'source' => 'Upside Down World',
      'target' => 'Upside Down World',
    ),
    168 => array(
      'source' => 'Vía Campesina',
      'target' => 'Via Campesina',
    ),
    169 => array(
      'source' => 'We Effect',
      'target' => 'We Effect',
    ),
    170 => array(
      'source' => 'WFP Latinoamérica',
      'target' => 'World Food Programme',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 14;
$feeds_tamper->description = 'Find replace multiple (anacaonas.net Publishers)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_7-trim';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
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
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_7-unique';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:7';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 17;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_8-efq_finder';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
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
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_8-php';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
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
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_8-unique';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:8';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 8;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_9-find_replace_multiple';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'Artículo de revista',
      'target' => 'Journal Articles & Books',
    ),
    1 => array(
      'source' => 'Audiovisual',
      'target' => 'Multimedia',
    ),
    2 => array(
      'source' => 'Buenas prácticas',
      'target' => 'Training Resources & Tools',
    ),
    3 => array(
      'source' => 'Capítulo de libro',
      'target' => 'Journal Articles & Books',
    ),
    4 => array(
      'source' => 'Declaración',
      'target' => 'Legislation & Policies',
    ),
    5 => array(
      'source' => 'Documento de conferencia',
      'target' => 'Conference Papers & Reports',
    ),
    6 => array(
      'source' => 'Estudio de caso',
      'target' => 'Reports & Research',
    ),
    7 => array(
      'source' => 'Infografía',
      'target' => 'Multimedia',
    ),
    8 => array(
      'source' => 'Informe de investigación (o estudio)',
      'target' => 'Reports & Research',
    ),
    9 => array(
      'source' => 'Libro',
      'target' => 'Journal Articles & Books',
    ),
    10 => array(
      'source' => 'Manual / kit de herramientas',
      'target' => 'Manuals & Guidelines',
    ),
    11 => array(
      'source' => 'Presentación',
      'target' => 'Institutional & promotional materials',
    ),
    12 => array(
      'source' => 'Revista',
      'target' => 'Journal Articles & Books',
    ),
    13 => array(
      'source' => 'Sistematización de experiencias',
      'target' => 'Policy Papers & Briefs',
    ),
    14 => array(
      'source' => 'Monitoreo y/o evaluación',
      'target' => 'Manuals & Guidelines',
    ),
    15 => array(
      'source' => 'Normativa',
      'target' => 'Legislation',
    ),
    16 => array(
      'source' => 'Comunicado',
      'target' => 'Institutional & promotional materials',
    ),
    17 => array(
      'source' => 'Antecedentes / documento general',
      'target' => 'Reports & Research',
    ),
    18 => array(
      'source' => 'Boletín',
      'target' => 'Institutional & promotional materials',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Find replace multiple - Resource Type (anacaonas.net)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_9-keyword_filter';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'keyword_filter';
$feeds_tamper->settings = array(
  'words' => 'Noticia
Artículo de opinión',
  'word_boundaries' => 0,
  'exact' => 1,
  'case_sensitive' => 0,
  'invert' => 1,
  'word_list' => array(
    0 => '/^Noticia$/ui',
    1 => '/^Artículo de opinión$/ui',
  ),
  'regex' => TRUE,
);
$feeds_tamper->weight = 7;
$feeds_tamper->description = 'Not import some Sula Batsú resource types';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_9-unique';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 6;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

/******************/
    return $export;
}
