<?php
/**
 * @file
 * mlrf_endnote_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function mlrf_endnote_importer_feeds_tamper_default() {
$export = array();

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-blank_source_1-default_value';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'Blank source 1';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'importer_mlrf_endnote',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "importer_mlrf_endnote"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-blank_source_2-default_value';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'Blank source 2';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'Mekong Land Research Forum',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "Mekong Land Research Forum"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_11-explode';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:11';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ',',
  'limit' => '',
  'real_separator' => ',',
);
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Explode';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_11-find_replace';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:11';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => 'Regional',
  'replace' => 'Cambodia, Lao, Myanmar, Thailand, Vietnam',
  'case_sensitive' => 0,
  'word_boundaries' => 0,
  'whole' => 0,
  'regex' => FALSE,
  'func' => 'str_ireplace',
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Regional -> Cambodia, Lao, Myanmar, Thailand, Vietnam';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_11-find_replace_2';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:11';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => 'Laos',
  'replace' => 'Lao',
  'case_sensitive' => 1,
  'word_boundaries' => 1,
  'whole' => 0,
  'regex' => TRUE,
  'regex_find' => '/\\bLaos\\b/u',
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Laos -> Lao';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_11-unique';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:11';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = '';
$feeds_tamper->weight = 6;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_12-explode';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:12';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Explode';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_12-find_replace_multiple';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:12';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'AccessToJustice',
      'target' => 'Land Policy & Legislation',
    ),
    1 => array(
      'source' => 'AgriculturalModernization',
      'target' => 'Land Use, Management & Investment',
    ),
    2 => array(
      'source' => 'Dispossession-grabbing',
      'target' => 'Access to Land & Tenure Security',
    ),
    3 => array(
      'source' => 'FDI',
      'target' => 'Access to Land & Tenure Security',
    ),
    4 => array(
      'source' => 'Formalisation-titling',
      'target' => 'Access to Land & Tenure Security; Land Policy & Legislation',
    ),
    5 => array(
      'source' => 'MarginalisedPeople',
      'target' => 'Access to Land & Tenure Security',
    ),
    6 => array(
      'source' => 'Policy-law',
      'target' => 'Land Policy & Legislation',
    ),
    7 => array(
      'source' => '',
      'target' => '',
    ),
  ),
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'MLRF keyrwords to LP OverArching Categories';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_12-unique';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:12';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = '';
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_14-find_replace_multiple';
$feeds_tamper->importer = 'mlrf_endnote_importer';
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
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_14-unique';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:14';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = '';
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_15-explode';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:15';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ',',
  'limit' => '',
  'real_separator' => ',',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Explode';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_15-find_replace_multiple';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:15';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'AccessToJustice',
      'target' => 'legal empowerment',
    ),
    1 => array(
      'source' => 'AgriculturalModernization',
      'target' => 'agriculture, agricultural land management, sustainable land management, sustainable land use, farmers, farming systems',
    ),
    2 => array(
      'source' => 'CivilSociety-Donors',
      'target' => 'development agencies',
    ),
    3 => array(
      'source' => 'Conversion-FoodSecurity',
      'target' => 'food security',
    ),
    4 => array(
      'source' => 'Dispossession-grabbing',
      'target' => 'land grabbing, land grabs, extractive industries, security of tenure (land), land ownership',
    ),
    5 => array(
      'source' => 'Distribution',
      'target' => 'land distribution, land reform',
    ),
    6 => array(
      'source' => 'Environment',
      'target' => 'environment',
    ),
    7 => array(
      'source' => 'FDI',
      'target' => 'land investments, land acquisitions, land grabbing',
    ),
    8 => array(
      'source' => 'Formalisation-titling',
      'target' => 'title deed, land titling, regularization of ownership',
    ),
    9 => array(
      'source' => 'MarginalisedPeople',
      'target' => 'poverty',
    ),
    10 => array(
      'source' => 'MigrationLabour',
      'target' => 'Land development (urbanization), farmers',
    ),
    11 => array(
      'source' => 'Policy-law',
      'target' => 'land policies, land law',
    ),
  ),
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'MLRF keyrwords to LandVoc Concepts';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_15-unique';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:15';
$feeds_tamper->plugin_id = 'unique';
$feeds_tamper->settings = '';
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Unique';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_16-implode';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:16';
$feeds_tamper->plugin_id = 'implode';
$feeds_tamper->settings = array(
  'glue' => '%n',
  'real_glue' => '
',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'One author per line';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_17-feeds_tamper_conditional';
$feeds_tamper->importer = 'mlrf_endnote_importer';
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
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_17-required';
$feeds_tamper->importer = 'mlrf_endnote_importer';
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
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_6-str_pad';
$feeds_tamper->importer = 'mlrf_endnote_importer';
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
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_8-find_replace_multiple';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:8';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'eng',
      'target' => 'English',
    ),
  ),
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Language replace (for MLRF)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_9-find_replace';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => 'Report',
  'replace' => 'Reports & Research',
  'case_sensitive' => 1,
  'word_boundaries' => 1,
  'whole' => 1,
  'regex' => TRUE,
  'regex_find' => '/^Report$/u',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Report - Reports & Research';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_9-find_replace_10';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => 'Working Paper',
  'replace' => 'Policy Papers & Briefs',
  'case_sensitive' => 1,
  'word_boundaries' => 1,
  'whole' => 1,
  'regex' => TRUE,
  'regex_find' => '/^Working Paper$/u',
);
$feeds_tamper->weight = 9;
$feeds_tamper->description = 'Working Paper - Policy Papers & Briefs';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_9-find_replace_2';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => 'Journal Article',
  'replace' => 'Journal Articles & Books',
  'case_sensitive' => 1,
  'word_boundaries' => 1,
  'whole' => 1,
  'regex' => TRUE,
  'regex_find' => '/^Journal Article$/u',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Journal Article - Journal Articles & Books';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_9-find_replace_3';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => 'Conference Proceedings',
  'replace' => 'Institutional & promotional materials',
  'case_sensitive' => 1,
  'word_boundaries' => 1,
  'whole' => 1,
  'regex' => TRUE,
  'regex_find' => '/^Conference Proceedings$/u',
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Conference Proceedings - Institutional & promotional materials';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_9-find_replace_4';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => 'Unpublished work',
  'replace' => 'Policy Papers & Briefs',
  'case_sensitive' => 1,
  'word_boundaries' => 1,
  'whole' => 1,
  'regex' => TRUE,
  'regex_find' => '/^Unpublished work$/u',
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Unpublished work - Policy Papers & Briefs';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_9-find_replace_5';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => 'Book Section',
  'replace' => 'Journal Articles & Books',
  'case_sensitive' => 1,
  'word_boundaries' => 1,
  'whole' => 1,
  'regex' => TRUE,
  'regex_find' => '/^Book Section$/u',
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Book Section - Journal Articles & Books';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_9-find_replace_6';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => 'Web Page',
  'replace' => 'Institutional & promotional materials',
  'case_sensitive' => 1,
  'word_boundaries' => 1,
  'whole' => 1,
  'regex' => TRUE,
  'regex_find' => '/^Web Page$/u',
);
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Web Page - Institutional & promotional materials';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_9-find_replace_7';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => 'Book',
  'replace' => 'Journal Articles & Books',
  'case_sensitive' => 1,
  'word_boundaries' => 1,
  'whole' => 1,
  'regex' => TRUE,
  'regex_find' => '/^Book$/u',
);
$feeds_tamper->weight = 6;
$feeds_tamper->description = 'Book - Journal Articles & Books';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_9-find_replace_8';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => 'Thesis',
  'replace' => 'Reports & Research',
  'case_sensitive' => 1,
  'word_boundaries' => 1,
  'whole' => 1,
  'regex' => TRUE,
  'regex_find' => '/^Thesis$/u',
);
$feeds_tamper->weight = 7;
$feeds_tamper->description = 'Thesis - Reports & Research';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'mlrf_endnote_importer-xpathparser_9-find_replace_9';
$feeds_tamper->importer = 'mlrf_endnote_importer';
$feeds_tamper->source = 'xpathparser:9';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => 'Statute',
  'replace' => 'Other',
  'case_sensitive' => 1,
  'word_boundaries' => 1,
  'whole' => 1,
  'regex' => TRUE,
  'regex_find' => '/^Statute$/u',
);
$feeds_tamper->weight = 8;
$feeds_tamper->description = 'Statute - Reports & Research';

$export[$feeds_tamper->id] = $feeds_tamper;

  return $export;
}
