<?php
/**
 * @file
 * odm_library_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function odm_library_importer_feeds_tamper_default() {

$export = array();

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-blank_source_1-copy';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'Blank source 1';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:14',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-blank_source_1-truncate_text';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'Blank source 1';
$feeds_tamper->plugin_id = 'truncate_text';
$feeds_tamper->settings = array(
  'num_char' => '10',
  'ellipses' => 0,
  'wordsafe' => 0,
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Truncate';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_10-efq_finder';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:10';
$feeds_tamper->plugin_id = 'efq_finder';
$feeds_tamper->settings = array(
  'update' => 'Update',
  'entity_type' => 'taxonomy_term',
  'bundle' => 'languages',
  'field' => 'field_language_code_iso_639_1',
  'column' => 'value',
  'property' => FALSE,
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Get the Entity TID from ISO 639-1 code	';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_10-find_replace_multiple';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:10';
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
  ),
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Find replace multiple';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_10-keyword_filter';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:10';
$feeds_tamper->plugin_id = 'keyword_filter';
$feeds_tamper->settings = array(
  'words' => 'en',
  'word_boundaries' => 0,
  'exact' => 1,
  'case_sensitive' => 0,
  'invert' => 0,
  'word_list' => array(
    0 => '/^en$/ui',
  ),
  'regex' => TRUE,
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Keyword filter';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_10-php';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:10';
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
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_11-find_replace_multiple';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:11';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'advocacy_and_promotional_materials',
      'target' => 'Institutional & promotional materials',
    ),
    1 => array(
      'source' => 'books_and_book_chapters',
      'target' => 'Journal Articles & Books',
    ),
    2 => array(
      'source' => 'analysis_discussion_papers_and_blogs​',
      'target' => 'Policy Papers & Briefs',
    ),
    3 => array(
      'source' => 'case_studies',
      'target' => 'Reports & Research',
    ),
    4 => array(
      'source' => 'issue_and_policy_briefs',
      'target' => 'Policy Papers & Briefs',
    ),
    5 => array(
      'source' => 'conference_workshops_proceedings_and_presentations',
      'target' => 'Conference Papers & Reports',
    ),
    6 => array(
      'source' => 'reports_journal_articles_and_research_papers',
      'target' => 'Reports & Research',
    ),
    7 => array(
      'source' => 'company_profiles',
      'target' => 'Institutional & promotional materials',
    ),
  ),
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Find replace document type';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_11-keyword_filter';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:11';
$feeds_tamper->plugin_id = 'keyword_filter';
$feeds_tamper->settings = array(
  'words' => 'profiles_people
profiles_organizations_and_projects
profiles_geographical_areas_and_sites
',
  'word_boundaries' => 0,
  'exact' => 1,
  'case_sensitive' => 0,
  'invert' => 1,
  'word_list' => array(
    0 => '/^profiles_people$/ui',
    1 => '/^profiles_organizations_and_projects$/ui',
    2 => '/^profiles_geographical_areas_and_sites$/ui',
    3 => '/^$/ui',
  ),
  'regex' => TRUE,
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Not import some ODM resource types';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_13-explode';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:13';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ',',
  'limit' => '',
  'real_separator' => ',',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Explode';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_5-array_filter';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:5';
$feeds_tamper->plugin_id = 'array_filter';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 6;
$feeds_tamper->description = 'Filter empty items';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_5-find_replace_regex';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:5';
$feeds_tamper->plugin_id = 'find_replace_regex';
$feeds_tamper->settings = array(
  'find' => '/^(.*\\.pdf)?.*$/',
  'replace' => '$1',
  'limit' => '',
  'real_limit' => -1,
);
$feeds_tamper->weight = 5;
$feeds_tamper->description = 'Find replace REGEX';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_5-implode';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:5';
$feeds_tamper->plugin_id = 'implode';
$feeds_tamper->settings = array(
  'glue' => '%n',
  'real_glue' => '
',
);
$feeds_tamper->weight = 7;
$feeds_tamper->description = 'Implode';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_5-keyword_filter';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:5';
$feeds_tamper->plugin_id = 'keyword_filter';
$feeds_tamper->settings = array(
  'words' => 'pdf',
  'word_boundaries' => 0,
  'exact' => 0,
  'case_sensitive' => 0,
  'invert' => 0,
  'word_list' => array(
    0 => 'pdf',
  ),
  'regex' => FALSE,
  'func' => 'mb_stripos',
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'is a pdf, doc or zip';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-jsonpath_parser_6-explode';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'jsonpath_parser:6';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ',',
  'limit' => '',
  'real_separator' => ',',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Explode';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_author-default_value';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM author';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'importer_odm',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set fixed value "importer_odm"';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_creators-copy';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM creators';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:12',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Copy creators value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_creators_guid-copy';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM creators guid';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:12',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Copy creators value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_provider-copy';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM provider';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:15',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Copy Provider name';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_provider_guid-copy';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM provider guid';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:15',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Copy Provider name';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_provider_guid-copy2';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM provider guid';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:15',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Copy Provider name';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_provider_guid-efq_finder';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM provider guid';
$feeds_tamper->plugin_id = 'efq_finder';
$feeds_tamper->settings = array(
  'update' => 'Update',
  'entity_type' => 'node',
  'bundle' => 'organization',
  'field' => 'title',
  'property' => TRUE,
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Find organization';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_provider_guid-feeds_tamper_conditional';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM provider guid';
$feeds_tamper->plugin_id = 'feeds_tamper_conditional';
$feeds_tamper->settings = array(
  'conditional_field' => 'ODM provider guid',
  'operator' => 'equals',
  'value' => '',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Conditional';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_publishers-copy';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM publishers';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:14',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy publisher value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_publishers_guid-copy';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM publishers guid';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:14',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy publisher value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_publishers_guid-copy2';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM publishers guid';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'jsonpath_parser:14',
);
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Copy not found publisher value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_publishers_guid-feeds_tamper_conditional';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM publishers guid';
$feeds_tamper->plugin_id = 'feeds_tamper_conditional';
$feeds_tamper->settings = array(
  'conditional_field' => 'ODM publishers guid',
  'operator' => 'equals',
  'value' => '',
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Conditional';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_regorg-default_value';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM regorg';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'ODM Mekong regional organization',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set value or default value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'odm_library_importer-odm_url-rewrite';
$feeds_tamper->importer = 'odm_library_importer';
$feeds_tamper->source = 'ODM url';
$feeds_tamper->plugin_id = 'rewrite';
$feeds_tamper->settings = array(
  'text' => 'https://data.opendevelopmentmekong.net/dataset/[jsonpath_parser:1]',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Rewrite';

$export[$feeds_tamper->id] = $feeds_tamper;

/****************/

    $export[$feeds_tamper->id] = $feeds_tamper;

    return $export;
}
