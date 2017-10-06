<?php

/**
 * Implements hook_feeds_importer_default().
 */
function project_land_links_csv_importer_feeds_importer_default() {
    $export = array();

/******/

$feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'project_land_links_csv_importer';
$feeds_importer->config = array(
  'name' => 'land-links.org - Projects CSV importer',
  'description' => 'Import land-links.org Projects from a CSV file',
  'fetcher' => array(
    'plugin_key' => 'FeedsFileFetcher',
    'config' => array(
      'allowed_extensions' => 'txt csv tsv xml opml',
      'delete_uploaded_file' => FALSE,
      'direct' => FALSE,
      'directory' => 'private://feeds',
      'allowed_schemes' => array(
        0 => 'public',
        1 => 'private',
      ),
    ),
  ),
  'parser' => array(
    'plugin_key' => 'FeedsCSVParser',
    'config' => array(
      'delimiter' => ',',
      'encoding' => 'UTF-8',
      'no_headers' => 0,
    ),
  ),
  'processor' => array(
    'plugin_key' => 'FeedsNodeProcessor',
    'config' => array(
      'expire' => '-1',
      'author' => 0,
      'authorize' => 1,
      'mappings' => array(
        0 => array(
          'source' => 'Title',
          'target' => 'title',
          'unique' => 1,
          'language' => 'und',
        ),
        1 => array(
          'source' => 'Username',
          'target' => 'user_name',
          'unique' => FALSE,
          'language' => 'und',
        ),
        2 => array(
          'source' => 'Description',
          'target' => 'body',
          'format' => 'full_html',
          'language' => 'und',
        ),
        3 => array(
          'source' => 'start_date',
          'target' => 'field_date:start',
          'unique' => FALSE,
          'language' => 'und',
        ),
        4 => array(
          'source' => 'end_date',
          'target' => 'field_date:end',
          'unique' => FALSE,
          'language' => 'und',
        ),
        5 => array(
          'source' => 'funding',
          'target' => 'field_value',
          'unique' => FALSE,
          'language' => 'und',
        ),
        6 => array(
          'source' => 'tmp_project_label',
          'target' => 'field_link:title',
          'unique' => FALSE,
          'language' => 'und',
        ),
        7 => array(
          'source' => 'project_url',
          'target' => 'field_link:url',
          'unique' => FALSE,
          'language' => 'und',
        ),
        8 => array(
          'source' => 'countries',
          'target' => 'Temporary target 1',
          'unique' => FALSE,
          'language' => 'und',
        ),
        9 => array(
          'source' => 'tmp_countries',
          'target' => 'field_geographical_focus',
          'term_search' => '1',
          'autocreate' => 0,
          'language' => 'und',
        ),
        10 => array(
          'source' => 'tmp_regions',
          'target' => 'field_geographical_focus',
          'term_search' => '1',
          'autocreate' => 0,
          'language' => 'und',
        ),
        11 => array(
          'source' => 'tmp_donor',
          'target' => 'field_donors:etid',
          'unique' => FALSE,
          'language' => 'und',
        ),
        12 => array(
          'source' => 'related_overarching_categories',
          'target' => 'field_related_domains',
          'unique' => FALSE,
          'language' => 'und',
        ),
        13 => array(
          'source' => 'related_themes',
          'target' => 'field_related_themes',
          'unique' => FALSE,
          'language' => 'und',
        ),
        14 => array(
          'source' => 'related_concepts',
          'target' => 'field_related_topics',
          'unique' => FALSE,
          'language' => 'und',
        ),
        15 => array(
          'source' => 'tmp_data_provider',
          'target' => 'field_doc_provider:etid',
          'unique' => FALSE,
          'language' => 'und',
        ),
        16 => array(
          'source' => 'tmp_image',
          'target' => 'field_image:uri',
          'file_exists' => '3',
        ),
      ),
      'insert_new' => '1',
      'update_existing' => '2',
      'update_non_existent' => 'skip',
      'input_format' => 'plain_text',
      'skip_hash_check' => 0,
      'bundle' => 'project',
      'language' => 'und',
    ),
  ),
  'content_type' => '',
  'update' => 0,
  'import_period' => '-1',
  'expire_period' => 3600,
  'import_on_create' => 1,
  'process_in_background' => 0,
);


/*****/
    $export[$feeds_importer->id] = $feeds_importer;

    return $export;
}
