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
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
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
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
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
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
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
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
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
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'suelourbano.org temas to LandVoc Concepts';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_15-unique';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:15';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 2;
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
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
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
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
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
$feeds_tamper->id = 'suelourbano_rdf_xml_importer-xpathparser_21-explode';
$feeds_tamper->importer = 'suelourbano_rdf_xml_importer';
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
  ),
);
$feeds_tamper->weight = 2;
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
$feeds_tamper->weight = 1;
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
$feeds_tamper->weight = 11;
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
  ),
);
$feeds_tamper->weight = 14;
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
$feeds_tamper->weight = 12;
$feeds_tamper->description = 'Trim';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
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
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
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
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
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
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
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
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
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
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
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



  return $export;
}
