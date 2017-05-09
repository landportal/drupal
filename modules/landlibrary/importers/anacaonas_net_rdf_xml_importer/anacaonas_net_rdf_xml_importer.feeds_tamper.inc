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
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
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
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'anacaonas_net_rdf_xml_importer-xpathparser_21-find_replace_multiple';
$feeds_tamper->importer = 'anacaonas_net_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:21';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'ACLO',
      'target' => 'Fundación Acción Cultural Loyola',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Find replace multiple (anacaonas.net Corporate authors)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
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
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
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
      'source' => 'Vía Campesina',
      'target' => 'Via Campesina',
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
