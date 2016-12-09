<?php
/**
 * @file
 * porlatierra_org_rdf_xml_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function porlatierra_org_rdf_xml_importer_feeds_tamper_default() {

$export = array();

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-blank_source_2-default_value';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
$feeds_tamper->source = 'Blank source 2';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'Movimiento Regional por la tierra y el territorio',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "Movimiento Regional por la tierra y el territorio"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-blank_source_1-default_value';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
$feeds_tamper->source = 'Blank source 1';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'importer_porlatierra_rdf_xml',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "importer_porlatierra_rdf_xml"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_11-efq_finder';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
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
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_11-php';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
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
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_11-unique';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:11';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 24;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_15-efq_finder';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
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
$feeds_tamper->weight = 8;
$feeds_tamper->description = 'Get the Entity TID (Concept) from Agrovoc URI';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_15-php_tid';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
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
$feeds_tamper->weight = 10;
$feeds_tamper->description = 'Get Term Name from Term ID (TID)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_15-unique';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:15';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 11;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_16-explode';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
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
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_16-implode';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
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
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_16-trim';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
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
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_21-explode';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:21';
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
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_21-find_replace_multiple';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:21';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'IPDRS',
      'target' => 'Instituto para el Desarrollo Rural de Sudamérica',
    ),
    1 => array(
      'source' => 'Fundación Tierra - Valles	',
      'target' => 'Fundación Tierra',
    ),
    2 => array(
      'source' => 'OINCO',
      'target' => 'Organización de Inquilinos de Cochabamba',
    ),
    3 => array(
      'source' => 'CAAP',
      'target' => 'Centro Andino de Acción Popular',
    ),
    4 => array(
      'source' => 'CIPCA',
      'target' => 'Centro de Investigación y Promoción del Campesinado',
    ),
    5 => array(
      'source' => 'SIPAE',
      'target' => 'Corporación Sistema de Investigación sobre la Problemática Agraria en el Ecuador',
    ),
    6 => array(
      'source' => 'IEE',
      'target' => 'Instituto de Estudios Ecuatorianos',
    ),
    7 => array(
      'source' => 'OCARU',
      'target' => 'OCARU Observatorio del Cambio Rural',
    ),
    8 => array(
      'source' => 'BASE IS',
      'target' => 'Base Investigaciones Sociales',
    ),
    9 => array(
      'source' => 'LEMTO-UFF',
      'target' => 'Laboratório de Estudos de Movimento Sociais e Territorialidades',
    ),
    10 => array(
      'source' => 'CEPES',
      'target' => 'Centro Peruano de Estudios Sociales',
    ),
  ),
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Find replace multiple (porlatierra.org Corporate authors)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_21-trim';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:21';
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
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_21-unique';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:21';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_24-efq_finder';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
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
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_24-php';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
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
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_24-unique';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:24';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = '';
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_7-explode';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:7';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 11;
$feeds_tamper->description = 'Explode (multiple values \';\' separated)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_7-find_replace_multiple';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:7';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'IPDRS',
      'target' => 'Instituto para el Desarrollo Rural de Sudamérica',
    ),
    1 => array(
      'source' => 'Fundación Tierra - Valles	',
      'target' => 'Fundación Tierra',
    ),
    2 => array(
      'source' => 'OINCO',
      'target' => 'Organización de Inquilinos de Cochabamba',
    ),
    3 => array(
      'source' => 'CAAP',
      'target' => 'Centro Andino de Acción Popular',
    ),
    4 => array(
      'source' => 'CIPCA',
      'target' => 'Centro de Investigación y Promoción del Campesinado',
    ),
    5 => array(
      'source' => 'SIPAE',
      'target' => 'Corporación Sistema de Investigación sobre la Problemática Agraria en el Ecuador',
    ),
    6 => array(
      'source' => 'IEE',
      'target' => 'Instituto de Estudios Ecuatorianos',
    ),
    7 => array(
      'source' => 'OCARU',
      'target' => 'OCARU Observatorio del Cambio Rural',
    ),
    8 => array(
      'source' => 'BASE IS',
      'target' => 'Base Investigaciones Sociales',
    ),
    9 => array(
      'source' => 'LEMTO-UFF',
      'target' => 'Laboratório de Estudos de Movimento Sociais e Territorialidades',
    ),
    10 => array(
      'source' => 'CEPES',
      'target' => 'Centro Peruano de Estudios Sociales',
    ),
  ),
);
$feeds_tamper->weight = 14;
$feeds_tamper->description = 'Find replace multiple (porlatierra.org Publishers)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_7-trim';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:7';
$feeds_tamper->plugin_id = 'trim';
$feeds_tamper->settings = array(
  'mask' => '',
  'side' => 'trim',
);
$feeds_tamper->weight = 12;
$feeds_tamper->description = 'Trim';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_7-unique';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:7';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 15;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_8-efq_finder';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
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
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_8-php';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
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
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_8-unique';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:8';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 8;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_9-find_replace_multiple';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'Estudios de caso MRxT',
      'target' => 'Reports & Research',
    ),
    1 => array(
      'source' => 'Cuadernos MRxT',
      'target' => 'Institutional & Promotional materials',
    ),
    2 => array(
      'source' => 'Documentos MRxT',
      'target' => 'Policy Papers & Briefs',
    ),
  ),
);
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Find replace multiple - Resource Type (porlatierra.org)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'porlatierra_org_rdf_xml_importer-xpathparser_9-unique';
$feeds_tamper->importer = 'porlatierra_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 6;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

/******************/
    return $export;
}
