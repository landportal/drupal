<?php
/**
 * @file
 * constituteproject_org_rdf_xml_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function constituteproject_org_rdf_xml_importer_feeds_tamper_default() {

$export = array();

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'constituteproject_org_rdf_xml_importer-blank_source_1-default_value';
$feeds_tamper->importer = 'constituteproject_org_rdf_xml_importer';
$feeds_tamper->source = 'Blank source 1';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'importer_constituteproject_rdf_xml',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "importer_constituteproject_rdf_xml"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'constituteproject_org_rdf_xml_importer-blank_source_2-default_value';
$feeds_tamper->importer = 'constituteproject_org_rdf_xml_importer';
$feeds_tamper->source = 'Blank source 2';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'Constitute Project',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "Constitute Project"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'constituteproject_org_rdf_xml_importer-xpathparser_11-efq_finder';
$feeds_tamper->importer = 'constituteproject_org_rdf_xml_importer';
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
$feeds_tamper->id = 'constituteproject_org_rdf_xml_importer-xpathparser_11-php';
$feeds_tamper->importer = 'constituteproject_org_rdf_xml_importer';
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
$feeds_tamper->id = 'constituteproject_org_rdf_xml_importer-xpathparser_11-unique';
$feeds_tamper->importer = 'constituteproject_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:11';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 24;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'constituteproject_org_rdf_xml_importer-xpathparser_12-default_value';
$feeds_tamper->importer = 'constituteproject_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:12';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'Land Policy & Legislation',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set value "Land Policy & Legislation"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'constituteproject_org_rdf_xml_importer-xpathparser_14-default_value';
$feeds_tamper->importer = 'constituteproject_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:14';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'Socio-Economic & Institutional Context',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set value "Socio-Economic & Institutional Context"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'constituteproject_org_rdf_xml_importer-xpathparser_15-efq_finder';
$feeds_tamper->importer = 'constituteproject_org_rdf_xml_importer';
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
$feeds_tamper->id = 'constituteproject_org_rdf_xml_importer-xpathparser_15-php_tid';
$feeds_tamper->importer = 'constituteproject_org_rdf_xml_importer';
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
$feeds_tamper->id = 'constituteproject_org_rdf_xml_importer-xpathparser_15-unique';
$feeds_tamper->importer = 'constituteproject_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:15';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 16;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'constituteproject_org_rdf_xml_importer-xpathparser_20-default_value';
$feeds_tamper->importer = 'constituteproject_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:20';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'private://feeds/constitute-project-thumbnail.png',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set private path for thumbnail';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'constituteproject_org_rdf_xml_importer-xpathparser_24-efq_finder';
$feeds_tamper->importer = 'constituteproject_org_rdf_xml_importer';
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
$feeds_tamper->id = 'constituteproject_org_rdf_xml_importer-xpathparser_24-php';
$feeds_tamper->importer = 'constituteproject_org_rdf_xml_importer';
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
$feeds_tamper->id = 'constituteproject_org_rdf_xml_importer-xpathparser_24-unique';
$feeds_tamper->importer = 'constituteproject_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:24';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'constituteproject_org_rdf_xml_importer-xpathparser_6-str_pad';
$feeds_tamper->importer = 'constituteproject_org_rdf_xml_importer';
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
$feeds_tamper->id = 'constituteproject_org_rdf_xml_importer-xpathparser_8-efq_finder';
$feeds_tamper->importer = 'constituteproject_org_rdf_xml_importer';
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
$feeds_tamper->id = 'constituteproject_org_rdf_xml_importer-xpathparser_8-php';
$feeds_tamper->importer = 'constituteproject_org_rdf_xml_importer';
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
$feeds_tamper->id = 'constituteproject_org_rdf_xml_importer-xpathparser_8-unique';
$feeds_tamper->importer = 'constituteproject_org_rdf_xml_importer';
$feeds_tamper->source = 'xpathparser:8';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 8;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

/******************/
    return $export;
}
