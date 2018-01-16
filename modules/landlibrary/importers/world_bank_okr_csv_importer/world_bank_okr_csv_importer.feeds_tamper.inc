<?php

/**
 * Implements hook_feeds_tamper_default().
 */
function world_bank_okr_csv_importer_feeds_tamper_default() {

$export = array();

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'world_bank_okr_csv_importer-authors-php';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'Authors';
$feeds_tamper->plugin_id = 'php';
$feeds_tamper->settings = array(
  'php' => '$str_remove_char_and_space = str_replace("; ", "\\n", $field); // remove semicolon and space
$str_remove_char  = str_replace(";", "\\n", $str_remove_char_and_space ); // remove just semicolon
return $str_remove_char;',
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Process string to have one author ([first name] [laste name]) per line';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'world_bank_okr_csv_importer-corporate_authors-explode';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'Corporate authors';
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
$feeds_tamper->id = 'world_bank_okr_csv_importer-corporate_authors-trim';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'Corporate authors';
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
$feeds_tamper->id = 'world_bank_okr_csv_importer-data_provider-default_value';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'Data provider';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'World Bank Group',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set value "World Bank Group"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'world_bank_okr_csv_importer-language-efq_finder';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'Language';
$feeds_tamper->plugin_id = 'efq_finder';
$feeds_tamper->settings = array(
  'update' => 'Update',
  'entity_type' => 'taxonomy_term',
  'bundle' => 'languages',
  'field' => 'field_language_code_iso_639_1',
  'column' => 'value',
  'property' => FALSE,
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Get the Entity TID from ISO 639-1 code';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'world_bank_okr_csv_importer-language-explode';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'Language';
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
$feeds_tamper->id = 'world_bank_okr_csv_importer-language-php';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'Language';
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
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Get Term Name from Term ID (TID)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'world_bank_okr_csv_importer-language-trim';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'Language';
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
$feeds_tamper->id = 'world_bank_okr_csv_importer-language-unique';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'Language';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = '';
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'world_bank_okr_csv_importer-license-efq_finder';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'License';
$feeds_tamper->plugin_id = 'efq_finder';
$feeds_tamper->settings = array(
  'update' => 'Update',
  'entity_type' => 'taxonomy_term',
  'bundle' => 'licences',
  'field' => 'field_acronym',
  'column' => 'value',
  'property' => FALSE,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Get the Entity TID from License acronym';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'world_bank_okr_csv_importer-license-php';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'License';
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
$feeds_tamper->id = 'world_bank_okr_csv_importer-overarching_categories-explode';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'Overarching Categories';
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
$feeds_tamper->id = 'world_bank_okr_csv_importer-overarching_categories-trim';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'Overarching Categories';
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
$feeds_tamper->id = 'world_bank_okr_csv_importer-publicaton_date__yyyy_mm_-find_replace';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'Publicaton date (YYYY/MM)';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => '/',
  'replace' => '-',
  'case_sensitive' => 0,
  'word_boundaries' => 0,
  'whole' => 0,
  'regex' => FALSE,
  'func' => 'str_ireplace',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Change date separator (from / to -)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'world_bank_okr_csv_importer-publishers-explode';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'Publishers';
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
$feeds_tamper->id = 'world_bank_okr_csv_importer-publishers-trim';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'Publishers';
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
$feeds_tamper->id = 'world_bank_okr_csv_importer-related_concepts-explode';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'Related Concepts';
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
$feeds_tamper->id = 'world_bank_okr_csv_importer-related_concepts-trim';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'Related Concepts';
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
$feeds_tamper->id = 'world_bank_okr_csv_importer-resource_types-explode';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'Resource types';
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
$feeds_tamper->id = 'world_bank_okr_csv_importer-resource_types-trim';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'Resource types';
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
$feeds_tamper->id = 'world_bank_okr_csv_importer-temp_geo_countries-copy';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'temp_geo_countries';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'geographical focus',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'world_bank_okr_csv_importer-temp_geo_countries-efq_finder';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'temp_geo_countries';
$feeds_tamper->plugin_id = 'efq_finder';
$feeds_tamper->settings = array(
  'update' => 'Update',
  'entity_type' => 'taxonomy_term',
  'bundle' => 'regions',
  'field' => 'field_iso3',
  'column' => 'value',
  'property' => FALSE,
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Get the Entity TID from ISO3 code';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'world_bank_okr_csv_importer-temp_geo_countries-explode';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'temp_geo_countries';
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
$feeds_tamper->id = 'world_bank_okr_csv_importer-temp_geo_countries-php';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'temp_geo_countries';
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
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'world_bank_okr_csv_importer-temp_geo_countries-trim';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'temp_geo_countries';
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
$feeds_tamper->id = 'world_bank_okr_csv_importer-temp_geo_countries-unique';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'temp_geo_countries';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = '';
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'world_bank_okr_csv_importer-temp_geo_regions-copy';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'temp_geo_regions';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'geographical focus',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'world_bank_okr_csv_importer-temp_geo_regions-efq_finder';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'temp_geo_regions';
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
$feeds_tamper->description = 'Get the Entity TID from UN M49 code';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'world_bank_okr_csv_importer-temp_geo_regions-explode';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'temp_geo_regions';
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
$feeds_tamper->id = 'world_bank_okr_csv_importer-temp_geo_regions-php';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'temp_geo_regions';
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
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'world_bank_okr_csv_importer-temp_geo_regions-trim';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'temp_geo_regions';
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
$feeds_tamper->id = 'world_bank_okr_csv_importer-temp_geo_regions-unique';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'temp_geo_regions';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = '';
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'world_bank_okr_csv_importer-themes-explode';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'Themes';
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
$feeds_tamper->id = 'world_bank_okr_csv_importer-themes-trim';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'Themes';
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
$feeds_tamper->id = 'world_bank_okr_csv_importer-username-default_value';
$feeds_tamper->importer = 'world_bank_okr_csv_importer';
$feeds_tamper->source = 'Username';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'importer_world_bank_okr_csv',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "importer_world_bank_okr_csv"';

$export[$feeds_tamper->id] = $feeds_tamper;

/******************/
    return $export;
}
