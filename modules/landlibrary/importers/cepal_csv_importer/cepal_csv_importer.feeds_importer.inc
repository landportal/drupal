<?php

/**
 * Implements hook_feeds_importer_default().
 */
function cepal_csv_importer_feeds_importer_default() {
    $export = array();

/************/

$feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'cepal_csv_importer';
$feeds_importer->config = array(
  'name' => 'CEPAL - CSV importer',
  'description' => 'Import CEPAL Land Library Resources from a CSV file',
  'fetcher' => array(
    'plugin_key' => 'FeedsFileFetcher',
    'config' => array(
      'allowed_extensions' => 'csv',
      'direct' => 0,
      'directory' => 'private://feeds',
      'allowed_schemes' => array(
        'public' => 'public',
        'private' => 'private',
      ),
      'delete_uploaded_file' => FALSE,
    ),
  ),
  'parser' => array(
    'plugin_key' => 'FeedsCSVParser',
    'config' => array(
      'delimiter' => ';',
      'no_headers' => 0,
      'encoding' => 'UTF-8',
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
          'source' => 'ID',
          'target' => 'guid',
          'unique' => 1,
          'language' => 'und',
        ),
        1 => array(
          'source' => 'Title',
          'target' => 'title',
          'unique' => 0,
          'language' => 'und',
        ),
        2 => array(
          'source' => 'Subtitle',
          'target' => 'field_doc_alt_title',
          'unique' => FALSE,
          'language' => 'und',
        ),
        3 => array(
          'source' => 'Abstract/Description',
          'target' => 'field_doc_description',
          'format' => 'full_html',
        ),
        4 => array(
          'source' => 'Authors',
          'target' => 'field_doc_people',
          'unique' => FALSE,
          'language' => 'und',
        ),
        5 => array(
          'source' => 'Corporate authors',
          'target' => 'field_orgref:label',
          'unique' => FALSE,
          'language' => 'und',
        ),
        6 => array(
          'source' => 'Publishers',
          'target' => 'field_doc_publisher:label',
          'unique' => FALSE,
          'language' => 'und',
        ),
        7 => array(
          'source' => 'ID',
          'target' => 'field_doc_identifier',
          'unique' => FALSE,
          'language' => 'und',
        ),
        8 => array(
          'source' => 'Data provider',
          'target' => 'field_doc_provider:label',
          'unique' => FALSE,
          'language' => 'und',
        ),
        9 => array(
          'source' => 'Publication date',
          'target' => 'field_doc_creation_date:start',
          'unique' => FALSE,
          'language' => 'und',
        ),
        10 => array(
          'source' => 'Languages',
          'target' => 'field_doc_language',
          'term_search' => '1',
          'autocreate' => 0,
          'language' => 'und',
        ),
        11 => array(
          'source' => 'Related Concepts',
          'target' => 'field_related_topics',
          'unique' => FALSE,
          'language' => 'und',
        ),
        12 => array(
          'source' => 'Themes',
          'target' => 'field_related_themes',
          'unique' => FALSE,
          'language' => 'und',
        ),
        13 => array(
          'source' => 'Resource types',
          'target' => 'field_doc_type',
          'unique' => FALSE,
          'language' => 'und',
        ),
        14 => array(
          'source' => 'Link to the original website',
          'target' => 'field_doc_is_shown_at:url',
          'unique' => FALSE,
          'language' => 'und',
        ),
        15 => array(
          'source' => 'Link to the publication',
          'target' => 'field_doc_is_shown_by:url',
          'unique' => FALSE,
          'language' => 'und',
        ),
        16 => array(
          'source' => 'Thumbnail',
          'target' => 'field_image:uri',
          'file_exists' => '4',
          'language' => 'und',
        ),
        17 => array(
          'source' => 'License',
          'target' => 'field_doc_licencing',
          'term_search' => '1',
          'autocreate' => 0,
          'language' => 'und',
        ),
        18 => array(
          'source' => 'Copyright details',
          'target' => 'field_doc_copyrights_statement',
          'unique' => FALSE,
          'language' => 'und',
        ),
        19 => array(
          'source' => 'Pages',
          'target' => 'field_doc_pagination',
          'unique' => FALSE,
          'language' => 'und',
        ),
        20 => array(
          'source' => 'Username',
          'target' => 'user_name',
          'unique' => FALSE,
          'language' => 'und',
        ),
        21 => array(
          'source' => 'Geographical focus',
          'target' => 'Temporary target 1',
          'unique' => FALSE,
          'language' => 'und',
        ),
        22 => array(
          'source' => 'temp_geo_countries',
          'target' => 'field_geographical_focus',
          'term_search' => '1',
          'autocreate' => 0,
          'language' => 'und',
        ),
        23 => array(
          'source' => 'temp_geo_regions',
          'target' => 'field_geographical_focus',
          'term_search' => '1',
          'autocreate' => 0,
          'language' => 'und',
        ),
      ),
      'update_existing' => '2',
      'update_non_existent' => 'skip',
      'input_format' => 'plain_text',
      'skip_hash_check' => 1,
      'bundle' => 'landlibrary_resource',
      'insert_new' => '1',
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
