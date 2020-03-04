<?php
/**
 * @file
 * mod_projects_csv_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function mod_projects_csv_importer_feeds_importer_default() {
    $export = array();

/************/

$feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'mod_projects_csv_importer';
$feeds_importer->config = array(
  'name' => 'MOD - Projects CSV importer',
  'description' => 'Import Map of Donors Projects from a CSV file	',
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
          'source' => 'Username',
          'target' => 'user_name',
          'unique' => FALSE,
          'language' => 'und',
        ),
        1 => array(
          'source' => 'ID',
          'target' => 'guid',
          'unique' => 1,
          'language' => 'und',
        ),
        2 => array(
          'source' => 'ID',
          'target' => 'field_id',
          'unique' => FALSE,
          'language' => 'und',
        ),
        3 => array(
          'source' => 'Title',
          'target' => 'title',
          'unique' => 0,
          'language' => 'und',
        ),
        4 => array(
          'source' => 'Description',
          'target' => 'body',
          'format' => 'full_html',
          'language' => 'und',
        ),
        5 => array(
          'source' => 'Geographical focus',
          'target' => 'Temporary target 2',
          'unique' => FALSE,
          'language' => 'und',
        ),
        6 => array(
          'source' => 'tmp_countries',
          'target' => 'field_geographical_focus',
          'term_search' => '1',
          'autocreate' => 0,
          'language' => 'und',
        ),
        7 => array(
          'source' => 'tmp_regions',
          'target' => 'field_geographical_focus',
          'term_search' => '1',
          'autocreate' => 0,
          'language' => 'und',
        ),
        8 => array(
          'source' => 'Related concepts',
          'target' => 'field_related_topics',
          'unique' => FALSE,
          'language' => 'und',
        ),
        9 => array(
          'source' => 'Themes',
          'target' => 'field_related_themes',
          'unique' => FALSE,
          'language' => 'und',
        ),
        10 => array(
          'source' => 'Start date',
          'target' => 'field_date:start',
          'unique' => FALSE,
          'language' => 'und',
        ),
        11 => array(
          'source' => 'End date',
          'target' => 'field_date:end',
          'unique' => FALSE,
          'language' => 'und',
        ),
        12 => array(
          'source' => 'tmp_image',
          'target' => 'field_image:uri',
          'file_exists' => '3',
          'language' => 'und',
        ),
        13 => array(
          'source' => 'Budget Currency',
          'target' => 'entityreference:field_currency',
          'unique' => FALSE,
          'language' => 'und',
        ),
        14 => array(
          'source' => 'Budget value',
          'target' => 'field_value_decimal',
          'unique' => FALSE,
          'language' => 'und',
        ),
        15 => array(
          'source' => 'website',
          'target' => 'field_link:url',
          'unique' => FALSE,
          'language' => 'und',
        ),
        16 => array(
          'source' => 'Contact info',
          'target' => 'field_contact',
          'unique' => FALSE,
          'language' => 'und',
        ),
        17 => array(
          'source' => 'tmp_data_provider',
          'target' => 'field_doc_provider:etid',
          'unique' => FALSE,
          'language' => 'und',
        ),
        18 => array(
          'source' => 'Donors',
          'target' => 'field_donors:label',
          'unique' => FALSE,
          'language' => 'und',
        ),
        19 => array(
          'source' => 'Implementers',
          'target' => 'field_implementers:label',
          'unique' => FALSE,
          'language' => 'und',
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




/************/

    $export[$feeds_importer->id] = $feeds_importer;

    return $export;
}
