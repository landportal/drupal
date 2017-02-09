<?php
/**
 * @file
 * olc_json_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function olc_json_importer_feeds_tamper_default() {

$export = array();

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-blank_source_1-default_value';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'Blank source 1';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'importer_olc_json',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "importer_olc_json"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-blank_source_10-default_value';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'Blank source 10';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'land use',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set value "land use"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-blank_source_11-rewrite';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'Blank source 11';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => 'This is a [jsonpath_parser:20] posted on <a href="http://wwww.openladncontracts.org">OpenLandContracts.org</a>. It lists [jsonpath_parser:18] as the primary resource(s)',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite (Contract)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-blank_source_12-default_value';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'Blank source 12';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'private://feeds/olc-thumbnail.png',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set value (path to file)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-blank_source_13-default_value';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'Blank source 13';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'All rights reserved',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set value "All rights reserved"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-blank_source_14-default_value';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'Blank source 14';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'Agreements & Contracts',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set value "Agreements & Contracts"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-blank_source_16-copy';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'Blank source 16';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:18',
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-blank_source_16-find_replace_multiple';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'Blank source 16';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'Oil palm or palm oils',
      'target' => 'palm oil industries',
    ),
    1 => array(
      'source' => 'Oil palm products',
      'target' => 'palm oil industries',
    ),
  ),
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Find replace multiple "palm oil industries"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-blank_source_17-copy';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'Blank source 17';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:19',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-blank_source_17-find_replace';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'Blank source 17';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => 'Environmental Impact',
  'replace' => 'environment',
  'case_sensitive' => 0,
  'word_boundaries' => 0,
  'whole' => 1,
  'regex' => TRUE,
  'regex_find' => '/^Environmental Impact$/ui',
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Find replace "Environmental Impact" to concept "environment"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-blank_source_18-feeds_tamper_conditional';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'Blank source 18';
$feeds_tamper->plugin_id = 'feeds_tamper_conditional';
$feeds_tamper->settings = array(
  'conditional_field' => 'jsonpath_parser:19',
  'operator' => 'not_equals',
  'negate' => 0,
  'value' => 'Contract',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Conditional';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-blank_source_18-rewrite';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'Blank source 18';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => 'This is a [jsonpath_parser:19] posted on <a href="http://wwww.openladncontracts.org">OpenLandContracts.org</a>. It lists [jsonpath_parser:18] as the primary resource(s)',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite (IT is not a Contract)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-blank_source_3-copy';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'Blank source 3';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:2',
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-blank_source_3-implode';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'Blank source 3';
$feeds_tamper->plugin_id = 'implode';
$feeds_tamper->settings = array(
  'glue' => '%n',
  'real_glue' => '
',
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Implode';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-blank_source_3-rewrite';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'Blank source 3';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => '[jsonpath_parser:1]
[Blank source 3]
',
);
$feeds_tamper->weight = 6;
$feeds_tamper->description = 'Rewrite';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-blank_source_5-rewrite';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'Blank source 5';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => 'OLC:[jsonpath_parser:6]',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-blank_source_6-rewrite';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'Blank source 6';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => 'http://www.openlandcontracts.org/contract/[jsonpath_parser:6]/view',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-blank_source_7-default_value';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'Blank source 7';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'Open Land Contracts',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "Open Land Contracts"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-blank_source_8-default_value';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'Blank source 8';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'Land Use, Management & Investment',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set value "Land Use, Management & Investment"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-jsonpath_parser_15-feeds_tamper_conditional';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'jsonpath_parser:15';
$feeds_tamper->plugin_id = 'feeds_tamper_conditional';
$feeds_tamper->settings = array(
  'conditional_field' => 'jsonpath_parser:3',
  'operator' => 'empty',
  'negate' => 1,
  'value' => '',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Conditional';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-jsonpath_parser_18-implode';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'jsonpath_parser:18';
$feeds_tamper->plugin_id = 'implode';
$feeds_tamper->settings = array(
  'glue' => ',',
  'real_glue' => ',',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Implode';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-jsonpath_parser_20-implode';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'jsonpath_parser:20';
$feeds_tamper->plugin_id = 'implode';
$feeds_tamper->settings = array(
  'glue' => ',',
  'real_glue' => ',',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Implode';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-jsonpath_parser_21-efq_finder';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'jsonpath_parser:21';
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
$feeds_tamper->description = 'Entity Field Query finder';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-jsonpath_parser_21-find_replace_multiple';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'jsonpath_parser:21';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'BR',
      'target' => 'BRA',
    ),
    1 => array(
      'source' => 'CD',
      'target' => 'COD',
    ),
    2 => array(
      'source' => 'CI',
      'target' => 'CIV',
    ),
    3 => array(
      'source' => 'CM',
      'target' => 'CMR',
    ),
    4 => array(
      'source' => 'CN',
      'target' => 'CHN',
    ),
    5 => array(
      'source' => 'ET',
      'target' => 'ETH',
    ),
    6 => array(
      'source' => 'GH',
      'target' => 'GHA',
    ),
    7 => array(
      'source' => 'KH',
      'target' => 'KHM',
    ),
    8 => array(
      'source' => 'LR',
      'target' => 'LBR',
    ),
    9 => array(
      'source' => 'LU',
      'target' => 'LUX',
    ),
    10 => array(
      'source' => 'MG',
      'target' => 'MDG',
    ),
    11 => array(
      'source' => 'ML',
      'target' => 'MLI',
    ),
    12 => array(
      'source' => 'PE',
      'target' => 'PER',
    ),
    13 => array(
      'source' => 'SD',
      'target' => 'SDN',
    ),
    14 => array(
      'source' => 'SL',
      'target' => 'SLE',
    ),
    15 => array(
      'source' => 'SS',
      'target' => 'SSD',
    ),
    16 => array(
      'source' => 'TL',
      'target' => 'TLS',
    ),
  ),
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Find replace multiple';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-jsonpath_parser_21-php';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'jsonpath_parser:21';
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
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Get Term Name from Term ID (TID)';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-jsonpath_parser_5-efq_finder';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'jsonpath_parser:5';
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
$feeds_tamper->description = 'Entity Field Query finder';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-jsonpath_parser_5-php';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'jsonpath_parser:5';
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
$feeds_tamper->id = 'olc_json_importer-jsonpath_parser_9-efq_finder';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'jsonpath_parser:9';
$feeds_tamper->plugin_id = 'efq_finder';
$feeds_tamper->settings = array(
  'update' => 'Update',
  'entity_type' => 'taxonomy_term',
  'bundle' => 'regions',
  'field' => 'field_iso3',
  'column' => 'value',
  'property' => FALSE,
);
$feeds_tamper->weight = 6;
$feeds_tamper->description = 'Entity Field Query finder';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-jsonpath_parser_9-find_replace_multiple';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'jsonpath_parser:9';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'BR',
      'target' => 'BRA',
    ),
    1 => array(
      'source' => 'CD',
      'target' => 'COD',
    ),
    2 => array(
      'source' => 'CI',
      'target' => 'CIV',
    ),
    3 => array(
      'source' => 'CM',
      'target' => 'CMR',
    ),
    4 => array(
      'source' => 'CN',
      'target' => 'CHN',
    ),
    5 => array(
      'source' => 'ET',
      'target' => 'ETH',
    ),
    6 => array(
      'source' => 'GH',
      'target' => 'GHA',
    ),
    7 => array(
      'source' => 'KH',
      'target' => 'KHM',
    ),
    8 => array(
      'source' => 'LR',
      'target' => 'LBR',
    ),
    9 => array(
      'source' => 'LU',
      'target' => 'LUX',
    ),
    10 => array(
      'source' => 'MG',
      'target' => 'MDG',
    ),
    11 => array(
      'source' => 'ML',
      'target' => 'MLI',
    ),
    12 => array(
      'source' => 'PE',
      'target' => 'PER',
    ),
    13 => array(
      'source' => 'SD',
      'target' => 'SDN',
    ),
    14 => array(
      'source' => 'SL',
      'target' => 'SLE',
    ),
    15 => array(
      'source' => 'SS',
      'target' => 'SSD',
    ),
    16 => array(
      'source' => 'TL',
      'target' => 'TLS',
    ),
  ),
);
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Find replace multiple';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'olc_json_importer-jsonpath_parser_9-php';
$feeds_tamper->importer = 'olc_json_importer';
$feeds_tamper->source = 'jsonpath_parser:9';
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
$feeds_tamper->weight = 8;
$feeds_tamper->description = 'Get Term Name from Term ID (TID)';

$export[$feeds_tamper->id] = $feeds_tamper;

/****************/

    return $export;
}
