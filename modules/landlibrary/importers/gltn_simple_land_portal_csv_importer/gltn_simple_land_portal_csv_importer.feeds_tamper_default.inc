<?php
/**
 * @file
 * gltn_simple_land_portal_csv_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function gltn_simple_land_portal_csv_importer_feeds_tamper_default() {

$export = array();

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'gltn_simple_land_portal_csv_importer-authors-php';
$feeds_tamper->importer = 'gltn_simple_land_portal_csv_importer';
$feeds_tamper->source = 'Authors';
$feeds_tamper->plugin_id = 'php';
$feeds_tamper->settings = array(
  'php' => '$str_remove_comma_and_space = str_replace(", ", "\\n", $field); // remove comma and space
$str_remove_comma  = str_replace(",", "\\n", $str_remove_comma_and_space ); // remove just comma
return $str_remove_comma;',
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Process string to have one author ([first name] [laste name]) per line';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'gltn_simple_land_portal_csv_importer-geographical_focus-explode';
$feeds_tamper->importer = 'gltn_simple_land_portal_csv_importer';
$feeds_tamper->source = 'Geographical focus';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ',',
  'limit' => '',
  'real_separator' => ',',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Explode (multiple values \',\' separated)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'gltn_simple_land_portal_csv_importer-overarching_categories-explode';
$feeds_tamper->importer = 'gltn_simple_land_portal_csv_importer';
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
$feeds_tamper->id = 'gltn_simple_land_portal_csv_importer-publicaton_date__yyyy_mm_-find_replace';
$feeds_tamper->importer = 'gltn_simple_land_portal_csv_importer';
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
$feeds_tamper->id = 'gltn_simple_land_portal_csv_importer-publicaton_date__yyyy_mm_-str_pad';
$feeds_tamper->importer = 'gltn_simple_land_portal_csv_importer';
$feeds_tamper->source = 'Publicaton date (YYYY/MM)';
$feeds_tamper->plugin_id = 'str_pad';
$feeds_tamper->settings = array(
  'pad_length' => 10,
  'pad_string' => '-01',
  'pad_type' => '1',
  'real_pad_string' => '-01',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Add the day (01) at the end of the string';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'gltn_simple_land_portal_csv_importer-publishers-explode';
$feeds_tamper->importer = 'gltn_simple_land_portal_csv_importer';
$feeds_tamper->source = 'Publishers';
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
$feeds_tamper->id = 'gltn_simple_land_portal_csv_importer-related_concepts-explode';
$feeds_tamper->importer = 'gltn_simple_land_portal_csv_importer';
$feeds_tamper->source = 'Related Concepts';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ',',
  'limit' => '',
  'real_separator' => ',',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Explode (multiple values \',\' separated)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'gltn_simple_land_portal_csv_importer-resource_types-explode';
$feeds_tamper->importer = 'gltn_simple_land_portal_csv_importer';
$feeds_tamper->source = 'Resource types';
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
$feeds_tamper->id = 'gltn_simple_land_portal_csv_importer-themes-explode';
$feeds_tamper->importer = 'gltn_simple_land_portal_csv_importer';
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
$feeds_tamper->id = 'gltn_simple_land_portal_csv_importer-username-default_value';
$feeds_tamper->importer = 'gltn_simple_land_portal_csv_importer';
$feeds_tamper->source = 'Username';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'importer_gltn_simple_lp_csv',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "importer_gltn_simple_lp_csv"';

$export[$feeds_tamper->id] = $feeds_tamper;

  return $export;
}
