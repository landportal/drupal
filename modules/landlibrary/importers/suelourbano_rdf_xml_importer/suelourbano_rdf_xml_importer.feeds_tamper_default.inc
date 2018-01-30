<?php
/**
 * @file
 * suelourbano_rdf_xml_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function suelourbano_rdf_xml_importer_feeds_tamper_default() {

$export = array();

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-blank_source_1-default_value';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'Blank source 1';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'importer_suelourbano_rdf_xml',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "importer_suelourbano_rdf_xml"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-blank_source_2-default_value';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'Blank source 2';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'Habitat for Humanity International (HFHI)',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "Habitat for Humanity International (HFHI)"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-blank_source_3-rewrite';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'Blank source 3';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => '[xpathparser:2]',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-blank_source_4-copy';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'Blank source 4';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'xpathparser:23',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-blank_source_4-efq_finder';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'Blank source 4';
$feeds_tamper->plugin_id = 'efq_finder';
$feeds_tamper->settings = array(
  'update' => 'Update',
  'entity_type' => 'taxonomy_term',
  'bundle' => 'regions',
  'field' => 'field_iso3',
  'column' => 'value',
  'property' => FALSE,
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Get the Entity TID from ISO3 code';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-blank_source_5-copy';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'Blank source 5';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'xpathparser:23',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-blank_source_5-efq_finder';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'Blank source 5';
$feeds_tamper->plugin_id = 'efq_finder';
$feeds_tamper->settings = array(
  'update' => 'Update',
  'entity_type' => 'taxonomy_term',
  'bundle' => 'regions',
  'field' => 'field_area_code_un_m_49',
  'column' => 'value',
  'property' => FALSE,
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Get the Entity TID from UN M49 code';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-blank_source_6-copy';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'Blank source 6';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'xpathparser:0',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_11-efq_finder';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
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
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_11-php';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
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
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_11-unique';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:11';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 24;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_12-explode';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:12';
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
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_12-find_replace_multiple';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:12';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'Acceso a suelos y tenencia segura',
      'target' => 'Access to Land & Tenure Security',
    ),
    1 => array(
      'source' => 'Administracion de suelos e información',
      'target' => 'Land Use, Management & Investment',
    ),
    2 => array(
      'source' => 'Financiamiento urbano basado en suelos',
      'target' => 'Land Use, Management & Investment',
    ),
    3 => array(
      'source' => 'Gestión y planificación del territorio',
      'target' => 'Land Use, Management & Investment',
    ),
    4 => array(
      'source' => 'Legislación y políticas de suelos',
      'target' => 'Land Policy & Legislation',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'suelourbano.org temas to LP OverArching Categories';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_12-unique';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:12';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_14-find_replace_multiple';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:14';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'CivilSociety-Donors',
      'target' => 'Land Stakeholders & Institutions',
    ),
    1 => array(
      'source' => 'Conversion-FoodSecurity',
      'target' => 'Land & Food Security',
    ),
    2 => array(
      'source' => 'Dispossession-grabbing',
      'target' => 'Commercial Pressures on Land',
    ),
    3 => array(
      'source' => 'Environment',
      'target' => 'Land, Climate change & Environment',
    ),
    4 => array(
      'source' => 'FDI',
      'target' => 'Commercial Pressures on Land',
    ),
    5 => array(
      'source' => 'MigrationLabour',
      'target' => 'Urbanization',
    ),
  ),
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'MLRF keyrwords to LP Themes';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_14-unique';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:14';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_15-explode';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:15';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ',',
  'limit' => '',
  'real_separator' => ',',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Explode (multiple values \',\' separated)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_15-find_replace_multiple';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:15';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'Acceso a suelos y tenencia segura',
      'target' => 'land access, security of tenure (land)',
    ),
    1 => array(
      'source' => 'Administracion de suelos e información',
      'target' => 'land administration, land information systems, cadastres',
    ),
    2 => array(
      'source' => 'Financiamiento urbano basado en suelos',
      'target' => 'land markets, land economics, land valuation',
    ),
    3 => array(
      'source' => 'Gestión y planificación del territorio',
      'target' => 'land use planning, land management, sustainable land use',
    ),
    4 => array(
      'source' => 'Legislación y políticas de suelos',
      'target' => 'land policies, land law',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'suelourbano.org temas to LandVoc Concepts';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_15-trim';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:15';
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
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_15-unique';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:15';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_16-explode';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
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
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_16-implode';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
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
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_16-php';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:16';
$feeds_tamper->plugin_id = 'php';
$feeds_tamper->settings = array(
  'php' => '$str_remove_comma_and_space = str_replace("; ", "\\n", $field); // remove comma and space
$str_remove_comma  = str_replace(";", "\\n", $str_remove_comma_and_space ); // remove just comma
return $str_remove_comma;',
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Process string to have one author ([first name] [laste name]) per line';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_16-trim';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
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
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_17-feeds_tamper_conditional';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:17';
$feeds_tamper->plugin_id = 'feeds_tamper_conditional';
$feeds_tamper->settings = array(
  'conditional_field' => 'xpathparser:17',
  'operator' => 'equals',
  'value' => 'Available for download',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Check that the value is "Available for download"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_17-required';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:17';
$feeds_tamper->plugin_id = 'required';
$feeds_tamper->settings = array(
  'invert' => 0,
  'log' => 0,
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'This field is required (it only has value when the string is "Available for download")';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_2-rewrite';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:2';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => 'suelourbano.org:[xpathparser:2]',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_21-explode';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:21';
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
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_21-find_replace_multiple';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:21';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'GLTN ONU-Habitat',
      'target' => 'Global Land Tool Network',
    ),
    1 => array(
      'source' => 'GLTN ONU-HABITAT',
      'target' => 'Global Land Tool Network',
    ),
    2 => array(
      'source' => 'Habitat para la Humanidad Internacional',
      'target' => 'Habitat for Humanity International (HFHI)',
    ),
    3 => array(
      'source' => 'UK AID',
      'target' => 'UK Department for International Development',
    ),
    4 => array(
      'source' => 'UK Aid',
      'target' => 'UK Department for International Development',
    ),
    5 => array(
      'source' => 'World Bank',
      'target' => 'World Bank Group',
    ),
    6 => array(
      'source' => 'International Federation of Surveyors \\(FIG\\)',
      'target' => 'International Federation of Surveyors (FIG)',
    ),
    7 => array(
      'source' => 'Banco Interamericano de Desarrollo - BID',
      'target' => 'Inter-American Development Bank',
    ),
    8 => array(
      'source' => 'ONU-Habitat',
      'target' => 'United Nations Human Settlements Programme',
    ),
    9 => array(
      'source' => 'Lincoln Institute of Land Policy',
      'target' => 'Lincoln Institute of Land Policy',
    ),
    10 => array(
      'source' => 'CEPAL; MINURVI; ONU-HABITAT',
      'target' => 'Economic Commission for Latin America and the Caribbean; Minurvi; United Nations Human Settlements Programme',
    ),
    11 => array(
      'source' => 'Congreso de la Republica de Guatemala',
      'target' => 'Congreso de la República de Guatemala',
    ),
    12 => array(
      'source' => 'Congreso Nacional Perú',
      'target' => 'Congreso de la República del Perú',
    ),
    13 => array(
      'source' => 'Congreso Nacional República Dominicana',
      'target' => 'Congreso de la República Dominicana',
    ),
    14 => array(
      'source' => 'Global Land Tools Network GLTN; ONU-HABITAT',
      'target' => 'Global Land Tool Network;United Nations Human Settlements Programme',
    ),
    15 => array(
      'source' => 'Gobierno de la República de Guatemala',
      'target' => 'Presidencia de la República Guatemala',
    ),
    16 => array(
      'source' => 'Habitat para la Humanidad',
      'target' => 'Habitat for Humanity International (HFHI)',
    ),
    17 => array(
      'source' => 'Habitat para la Humanidad Argentina',
      'target' => 'Habitat for Humanity International (HFHI)',
    ),
    18 => array(
      'source' => 'Habitat para la Humanidad Bolivia; Ciudadania; Gregoria Apaza',
      'target' => 'Habitat for Humanity International (HFHI)',
    ),
    19 => array(
      'source' => 'Habitat para la Humanidad Bolivia; Ciudadania; Gregoria Apaza',
      'target' => 'Habitat for Humanity International (HFHI)',
    ),
    20 => array(
      'source' => 'Habitat para la Humanidad El Salvador',
      'target' => 'Habitat for Humanity International (HFHI)',
    ),
    21 => array(
      'source' => 'Habitat para la Humanidad Honduras',
      'target' => 'Habitat for Humanity International (HFHI)',
    ),
    22 => array(
      'source' => 'Habitat para la Humanidad; Centro Dom Helder Câmara de Estudos e Ação Social',
      'target' => 'Habitat for Humanity International (HFHI)',
    ),
    23 => array(
      'source' => 'Habitat para la Humanidad; Cities Alliance; Federación Internacional de Sociedades de la Cruz Roja y de la Media Luna Roja; Banco Interamericano de Desarrollo BID',
      'target' => 'Habitat for Humanity International (HFHI);Cities Alliance;Inter-American Development Bank',
    ),
    24 => array(
      'source' => 'Ministério das Cidades Brasil',
      'target' => 'Brazil Ministry of Cities',
    ),
    25 => array(
      'source' => 'Ministério das Cidades Brasil; Conselho das Cidades Brasil',
      'target' => 'Brazil Ministry of Cities',
    ),
    26 => array(
      'source' => 'Observatório das Remoções',
      'target' => 'OBSERVATÓRIO DAS REMOÇÕES',
    ),
    27 => array(
      'source' => 'ONU-HABITAT',
      'target' => 'United Nations Human Settlements Programme',
    ),
    28 => array(
      'source' => 'Presidência da República Brasil',
      'target' => 'Government of Brazil',
    ),
    29 => array(
      'source' => 'World Bank',
      'target' => 'World Bank Group',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Find replace multiple (suelourbano.org Corporate authors)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_21-php';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:21';
$feeds_tamper->plugin_id = 'php';
$feeds_tamper->settings = array(
  'php' => 'if ($field != null) {
   watchdog(\'suelourbano_rdf_xml_importer\', "end=".var_export($field, TRUE), array(), WATCHDOG_DEBUG);
   return $field;
}',
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Execute php code';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_21-trim';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:21';
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
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_7-explode';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:7';
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
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_7-find_replace_multiple';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:7';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'GLTN ONU-Habitat',
      'target' => 'Global Land Tool Network',
    ),
    1 => array(
      'source' => 'GLTN ONU-HABITAT',
      'target' => 'Global Land Tool Network',
    ),
    2 => array(
      'source' => 'Habitat para la Humanidad Internacional',
      'target' => 'Habitat for Humanity International (HFHI)',
    ),
    3 => array(
      'source' => 'UK AID',
      'target' => 'UK Department for International Development',
    ),
    4 => array(
      'source' => 'UK Aid',
      'target' => 'UK Department for International Development',
    ),
    5 => array(
      'source' => 'Banco Interamericano de Desarrollo - BID',
      'target' => 'Inter-American Development Bank',
    ),
    6 => array(
      'source' => 'ONU-Habitat',
      'target' => 'United Nations Human Settlements Programme',
    ),
    7 => array(
      'source' => 'Lincoln Institute of Land Policy',
      'target' => 'Lincoln Institute of Land Policy',
    ),
    8 => array(
      'source' => 'CEPAL; MINURVI; ONU-HABITAT',
      'target' => 'Economic Commission for Latin America and the Caribbean; Minurvi; United Nations Human Settlements Programme',
    ),
    9 => array(
      'source' => 'Banco Interamericano de Desarrollo',
      'target' => 'Inter-American Development Bank',
    ),
    10 => array(
      'source' => 'Centro de Direitos Econômicos e Sociais',
      'target' => 'Centro de Direitos Econômicos e Sociais',
    ),
    11 => array(
      'source' => 'Centro de Direitos Econômicos e Sociais; Observatorio das Metrópoles; Forum Estadual de Reforma Urbana',
      'target' => 'Centro de Direitos Econômicos e Sociais;',
    ),
    12 => array(
      'source' => 'Cities Alliance; Secretaria Nacional de Programas Urbanos; Ministro das Cidades Brasil',
      'target' => 'Cities Alliance;Government of Brazil',
    ),
    13 => array(
      'source' => 'Comissão Pastoral da Terra Brasil',
      'target' => 'Comissão Pastoral da Terra',
    ),
    14 => array(
      'source' => 'Congreso de la Republica de Guatemala',
      'target' => 'Congreso de la República de Guatemala',
    ),
    15 => array(
      'source' => 'Congreso Nacional Perú',
      'target' => 'Congreso de la República del Perú',
    ),
    16 => array(
      'source' => 'Congreso Nacional República Dominicana',
      'target' => 'Congreso de la República Dominicana',
    ),
    17 => array(
      'source' => 'Earthscan',
      'target' => 'Routledge Environment & Sustainability',
    ),
    18 => array(
      'source' => 'Faculdade de Arquitetura e Urbanismo Universidade de São Paulo',
      'target' => 'Universidade de São Paulo',
    ),
    19 => array(
      'source' => 'Fundação de Direitos Humanos Bento Rubião',
      'target' => 'Fundação Bento Rubião',
    ),
    20 => array(
      'source' => 'Global Land Tools Network GLTN; ONU-HABITAT',
      'target' => 'Global Land Tool Network;United Nations Human Settlements Programme',
    ),
    21 => array(
      'source' => 'Gobierno de la República de Guatemala',
      'target' => 'Presidencia de la República Guatemala',
    ),
    22 => array(
      'source' => 'Governo Federal Brasil; Ministério da Justiça - Secretaria de Reforma do Judiciário; Programa das Nações Unidas para o Desenvolvimento PNUD',
      'target' => 'Government of Brazil;United Nations Development Programme',
    ),
    23 => array(
      'source' => 'Habitat for Humanity Haiti; Architecture for Humanity',
      'target' => 'Habitat for Humanity International (HFHI)',
    ),
    24 => array(
      'source' => 'Habitat para Humanidade Brasil',
      'target' => 'Habitat para Humanidade Brasil',
    ),
    25 => array(
      'source' => 'Habitat para la Humanidad',
      'target' => 'Habitat for Humanity International (HFHI)',
    ),
    26 => array(
      'source' => 'Habitat para la Humanidad Argentina',
      'target' => 'Habitat for Humanity International (HFHI)',
    ),
    27 => array(
      'source' => 'Habitat para la Humanidad Bolivia',
      'target' => 'Habitat for Humanity International (HFHI)',
    ),
    28 => array(
      'source' => 'Habitat para la Humanidad Bolivia; Ciudadania; Gregoria Apaza',
      'target' => 'Habitat for Humanity International (HFHI)',
    ),
    29 => array(
      'source' => 'Habitat para la Humanidad El Salvador',
      'target' => 'Habitat for Humanity International (HFHI)',
    ),
    30 => array(
      'source' => 'Habitat para la Humanidad Honduras',
      'target' => 'Habitat for Humanity International (HFHI)',
    ),
    31 => array(
      'source' => 'Habitat para la Humanidad; Centro Dom Helder Câmara de Estudos e Ação Social',
      'target' => 'Habitat for Humanity International (HFHI)',
    ),
    32 => array(
      'source' => 'Habitat para la Humanidad; Cities Alliance; Federación Internacional de Sociedades de la Cruz Roja y de la Media Luna Roja; Banco Interamericano de Desarrollo BID',
      'target' => 'Habitat for Humanity International (HFHI);Cities Alliance;Inter-American Development Bank',
    ),
    33 => array(
      'source' => 'Habitat para la Humanidad; Global Land Tools Network GLTN; ONU-HABITAT',
      'target' => 'Global Land Tool Network;United Nations Human Settlements Programme;Habitat for Humanity International (HFHI)',
    ),
    34 => array(
      'source' => 'Habitat para la Humanidad; Land Portal Foundation',
      'target' => 'Habitat for Humanity International (HFHI);Land Portal Foundation',
    ),
    35 => array(
      'source' => 'Instituto Brasileiro de Direito Urbanístico',
      'target' => 'Instituto Brasileiro de Direito Urbanístico',
    ),
    36 => array(
      'source' => 'Integração',
      'target' => 'Rede Interação',
    ),
    37 => array(
      'source' => 'IPPUR – Observatório das Cidades',
      'target' => 'OBSERVATÓRIO DAS METRÓPOLES',
    ),
    38 => array(
      'source' => 'Laboratório de Habitação e Assentamentos Humanos; Faculdade de Arquitetura e Urbanismo Universidade de São Paulo; Lincoln Institute of Land Policy; Caixa Econômica Federal',
      'target' => 'Universidade de São Paulo;Lincoln Institute of Land Policy',
    ),
    39 => array(
      'source' => 'Land Use Policy; Elsevier',
      'target' => 'Elsevier',
    ),
    40 => array(
      'source' => 'Letra Capital; Observatório das Cidades',
      'target' => 'OBSERVATÓRIO DAS METRÓPOLES',
    ),
    41 => array(
      'source' => 'Ministério das Cidades Brasil',
      'target' => 'Brazil Ministry of Cities',
    ),
    42 => array(
      'source' => 'Ministério das Cidades Brasil; Cities Alliance',
      'target' => 'Brazil Ministry of Cities;Cities Alliance',
    ),
    43 => array(
      'source' => 'Ministério das Cidades Brasil; Conselho das Cidades Brasil',
      'target' => 'Brazil Ministry of Cities',
    ),
    44 => array(
      'source' => 'Observatório das Metrópoles',
      'target' => 'OBSERVATÓRIO DAS METRÓPOLES',
    ),
    45 => array(
      'source' => 'ONU-HABITAT',
      'target' => 'United Nations Human Settlements Programme',
    ),
    46 => array(
      'source' => 'Presidência da República Brasil',
      'target' => 'Government of Brazil',
    ),
    47 => array(
      'source' => 'Terra de Direitos',
      'target' => 'Terra de Dereitos',
    ),
    48 => array(
      'source' => 'World Bank',
      'target' => 'World Bank Group',
    ),
    49 => array(
      'source' => 'World Bank; International Federation of Surveyors FIG',
      'target' => 'World Bank Group;International Federation of Surveyors (FIG)',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Find replace multiple (suelourbano.org Publishers)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_7-trim';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:7';
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
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_8-efq_finder';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
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
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Get the Entity TID from ISO 639-1 code';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_8-find_replace_multiple';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:8';
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
    3 => array(
      'source' => 'pt',
      'target' => 'Português',
    ),
  ),
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Language replace (ISO 639-1:2002)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_9-find_replace';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => 'Caja de Herramientas (guías, manuales, etc.)',
  'replace' => 'Manuals & Guidelines',
  'case_sensitive' => 1,
  'word_boundaries' => 1,
  'whole' => 1,
  'regex' => TRUE,
  'regex_find' => '/^Caja de Herramientas \\(guías, manuales, etc\\.\\)$/u',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Caja de Herramientas (guías, manuales, etc.) - Manuals & Guidelines';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_9-find_replace_2';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => 'Fotos, imágenes, Infográfico',
  'replace' => 'Multimedia',
  'case_sensitive' => 1,
  'word_boundaries' => 1,
  'whole' => 1,
  'regex' => TRUE,
  'regex_find' => '/^Fotos, imágenes, Infográfico$/u',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Fotos, imágenes, Infográfico - Multimedia';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_9-find_replace_3';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => 'Investigaciones y estudios',
  'replace' => 'Reports & Research',
  'case_sensitive' => 1,
  'word_boundaries' => 1,
  'whole' => 1,
  'regex' => TRUE,
  'regex_find' => '/^Investigaciones y estudios$/u',
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Investigaciones y estudios - Reports & Research';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_9-find_replace_4';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => 'Sistematizaciones y documentación de experiencias',
  'replace' => 'Reports & Research',
  'case_sensitive' => 1,
  'word_boundaries' => 1,
  'whole' => 1,
  'regex' => TRUE,
  'regex_find' => '/^Sistematizaciones y documentación de experiencias$/u',
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Sistematizaciones y documentación de experiencias - Reports & Research';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_9-find_replace_5';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => 'Video',
  'replace' => 'Multimedia',
  'case_sensitive' => 1,
  'word_boundaries' => 1,
  'whole' => 1,
  'regex' => TRUE,
  'regex_find' => '/^Video$/u',
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Videos - Multimedia';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_9-find_replace_multiple';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'Caja de Herramientas (guías, manuales, etc.)',
      'target' => 'Manuals & Guidelines',
    ),
    1 => array(
      'source' => 'Fotos, imágenes, Infográfico',
      'target' => 'Multimedia',
    ),
    2 => array(
      'source' => 'Investigaciones y estudios',
      'target' => 'Reports & Research',
    ),
    3 => array(
      'source' => 'Sistematizaciones y documentación de experiencias',
      'target' => 'Reports & Research',
    ),
    4 => array(
      'source' => 'Videos',
      'target' => 'Multimedia',
    ),
    5 => array(
      'source' => 'Legislación',
      'target' => 'Legislation',
    ),
    6 => array(
      'source' => 'Estadísticas',
      'target' => 'Reports & Research',
    ),
  ),
  'full' => 1,
);
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Find replace multiple';

$export[$feeds_tamper->id] = $feeds_tamper;


/******/
  return $export;
}
