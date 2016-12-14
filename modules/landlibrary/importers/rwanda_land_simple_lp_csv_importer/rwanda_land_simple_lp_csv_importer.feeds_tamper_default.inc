<?php
/**
 * @file
 * rwanda_land_simple_lp_csv_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function rwanda_land_simple_lp_csv_importer_feeds_tamper_default() {

$export = array();

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-authors-php';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
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
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-author_s_-php';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
$feeds_tamper->source = 'Author(s)';
$feeds_tamper->plugin_id = 'php';
$feeds_tamper->settings = array(
  'php' => '$str_remove_comma_and_space = str_replace(", ", "\\n", $field); // remove comma and space
$str_remove_comma  = str_replace(",", "\\n", $str_remove_comma_and_space ); // remove just comma
return $str_remove_comma;
',
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Process string to have one author ([first name] [laste name]) per line';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-corporate_authors-explode';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
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
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-corporate_authors-trim';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
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
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-geographical_focus-explode';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
$feeds_tamper->source = 'Geographical focus';
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
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-geographical_focus-trim';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
$feeds_tamper->source = 'Geographical focus';
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
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-language-explode';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
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
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-language-trim';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
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
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-overarching_categories-explode';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
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
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-overarching_categories-trim';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
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
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-overarching_category-explode';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
$feeds_tamper->source = 'Overarching Category';
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
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-publicaton_date__yyyy_mm_-find_replace';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
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
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-publicaton_date__yyyy_mm_-str_pad';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
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
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-publisher-explode';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
$feeds_tamper->source = 'Publisher';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Explode (multiple values \',\' separated)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-publishers-explode';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
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
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-publishers-trim';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
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
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-related_concepts-explode';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
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
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-related_concepts-trim';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
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
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-related_themes-explode';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
$feeds_tamper->source = 'Related Themes';
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
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-resource_type-explode';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
$feeds_tamper->source = 'Resource type';
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
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-resource_types-explode';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
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
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-resource_types-trim';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
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
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-themes-explode';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
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
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-themes-trim';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
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
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-thumbnail-rewrite';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
$feeds_tamper->source = 'Thumbnail';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => 'private://feeds/rwanda-land[thumbnail]',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite. Add folder path "feeds/rwanda-land"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-tmp_file_upload-copy';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
$feeds_tamper->source = 'TMP_File_Upload';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'link to the publication',
);
$feeds_tamper->weight = 8;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-tmp_file_upload-feeds_tamper_conditional';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
$feeds_tamper->source = 'TMP_File_Upload';
$feeds_tamper->plugin_id = 'feeds_tamper_conditional';
$feeds_tamper->settings = array(
  'conditional_field' => 'Link to the publication',
  'operator' => 'begins',
  'negate' => 0,
  'value' => '/',
);
$feeds_tamper->weight = 11;
$feeds_tamper->description = 'Conditional (do start with \'/\')';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-tmp_file_upload-php';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
$feeds_tamper->source = 'TMP_File_Upload';
$feeds_tamper->plugin_id = 'php';
$feeds_tamper->settings = array(
  'php' => '$first_char = $field[0];
if ($first_char == \'/\') {
   return $field;
}
else {
   return null;
}',
);
$feeds_tamper->weight = 9;
$feeds_tamper->description = 'Execute php code. Remove the source if it doesn\'t start with \'/\'';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-tmp_file_upload-php_2';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
$feeds_tamper->source = 'TMP_File_Upload';
$feeds_tamper->plugin_id = 'php';
$feeds_tamper->settings = array(
  'php' => 'if ($field == "private://feeds/rwanda-land") {
   return null;
} else {
   return $field;
}',
);
$feeds_tamper->weight = 13;
$feeds_tamper->description = 'Execute php code. Clean the result';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-tmp_file_upload-rewrite';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
$feeds_tamper->source = 'TMP_File_Upload';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => 'private://feeds/rwanda-land[tmp_file_upload]',
);
$feeds_tamper->weight = 10;
$feeds_tamper->description = 'Rewrite. Add folder path "feeds/rwanda-land"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-tmp_resource_url-copy';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
$feeds_tamper->source = 'TMP_Resource_URL';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'link to the publication',
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-tmp_resource_url-feeds_tamper_conditional';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
$feeds_tamper->source = 'TMP_Resource_URL';
$feeds_tamper->plugin_id = 'feeds_tamper_conditional';
$feeds_tamper->settings = array(
  'conditional_field' => 'Link to the publication',
  'operator' => 'begins',
  'negate' => 1,
  'value' => '/',
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Conditional (do not start with \'/\')';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-tmp_resource_url-php';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
$feeds_tamper->source = 'TMP_Resource_URL';
$feeds_tamper->plugin_id = 'php';
$feeds_tamper->settings = array(
  'php' => '$first_char = $field[0];
if ($first_char == \'/\') {
   return null;
}
else {
   return $field;
}',
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Execute php code. Remove the source if it starts with \'/\'';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'rwanda_land_simple_land_portal_csv_importer-username-default_value';
$feeds_tamper->importer = 'rwanda_land_simple_land_portal_csv_importer';
$feeds_tamper->source = 'Username';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'importer_rwanda_land_simple_lp_csv',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "importer_rwanda_land_simple_lp_csv"';

$export[$feeds_tamper->id] = $feeds_tamper;

/*****************/
  return $export;
}
