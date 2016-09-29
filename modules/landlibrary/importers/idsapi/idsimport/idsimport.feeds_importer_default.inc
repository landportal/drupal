<?php
/**
 * @file
 * idsimport.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function idsimport_feeds_importer_default()
{
  $export = array();
  
  $documents_importer = new stdClass;
  $documents_importer->disabled = FALSE;
  $documents_importer->api_version = 1;
  $documents_importer->id = IDS_IMPORT_IMPORTER_DOCUMENTS;
  $documents_importer->config = array(
    'name' => 'IDS Documents Importer',
    'description' => 'Importer for document in the LandLibrary resources.',
    'fetcher' => array(
      'plugin_key' => 'IdsAssetsFetcher',
      'config' => array(
        'asset_type' => 'documents'
      )
    ),
    'parser' => array(
      'plugin_key' => 'IdsDocumentsParser',
      'config' => array()
    ),
    'processor' => array(
      'plugin_key' => 'IdsAssetsProcessor',
      'config' => array(
        'content_type' => IDS_IMPORT_DOCUMENTS_TYPE,
        'expire' => IDS_IMPORT_EXPIRE_PERIOD_ASSETS,
        'author' => variable_get('idsimport_new_user_id', 0),
        'mappings' => array(
          0 => array(
            'source' => 'object_type',
            'target' => 'field_doc_type',
            'unique' => FALSE
          ),
          1 => array(
            'source' => 'metadata_url',
            'target' => 'field_metadata_url',
            'unique' => FALSE
          ),
          2 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE
          ),
          3 => array(
            'source' => 'object_id',
            'target' => 'field_doc_identifier',
            'unique' => FALSE
          ),
          4 => array(
            'source' => 'object_id',
            'target' => 'guid',
            'unique' => 1
          ),
          5 => array(
            'source' => 'site',
            'target' => 'field_doc_provider:label',
            'unique' => FALSE
          ),
          6 => array(
            'source' => 'timestamp',
            'target' => 'field_timestamp:start',
            'unique' => FALSE
          ),
          7 => array(
            'source' => 'website_url',
            'target' => 'field_doc_is_shown_at:url',
            'unique' => FALSE
          ),
          8 => array(
            'source' => 'date_created',
            'target' => 'field_doc_creation_date:start',
            'unique' => FALSE
          ),
          9 => array(
            'source' => 'date_created',
            'target' => 'field_doc_creation_date:end',
            'unique' => FALSE
          ),
          10 => array(
            'source' => 'date_created',
            'target' => 'field_date_created:start',
            'unique' => FALSE
          ),
          11 => array(
            'source' => 'website_url',
            'target' => 'field_doc_is_shown_at:url',
            'unique' => FALSE
          ),
          12 => array(
            'source' => 'description',
            'target' => 'field_doc_description',
            'unique' => FALSE
          ),
          13 => array(
            'source' => 'authors',
            'target' => 'field_doc_creator:label',
	        'term_search' => '0',
	        'autocreate' => 1
          ),
          14 => array(
            'source' => 'language_name',
            'target' => 'field_doc_language',
            'unique' => FALSE
          ),
          15 => array(
            'source' => 'category_theme_array',
            'target' => 'field_related_topics',
            'unique' => FALSE
          ),
          16 => array(
            'source' => 'publisher',
            'target' => 'field_doc_publisher:label',
            'unique' => FALSE
          ),
          17 => array(
            'source' => 'site',
            'target' => 'field_doc_provider:label',
            'unique' => FALSE
          ),
          18 => array(
            'source' => 'urls',
            'target' => 'field_doc_is_shown_by:title',
            'unique' => FALSE
          ),
          19 => array(
            'source' => 'urls',
            'target' => 'field_doc_is_shown_by:url',
            'unique' => FALSE
          ),
          20 => array(
            'source' => 'keywords',
            'target' => 'field_doc_keyword',
	        'term_search' => '0',
	        'autocreate' => 0
          ),
          21 => array(
            'source' => 'title',
            'target' => 'field_doc_title',
            'unique' => FALSE
          ),
		  22 => array(
            'source' => 'document_type',
            'target' => 'field_doc_type',
            'unique' => FALSE
          )
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'authorize' => 1,
        'skip_hash_check' => 0,
        'bundle' => 'landlibrary_resource'
      )
    ),
    'content_type' => IDS_IMPORT_DOCUMENTS_FEED_TYPE,
    'update' => 1,
    'import_period' => IDS_IMPORT_IMPORT_PERIOD_ASSETS,
    'expire_period' => IDS_IMPORT_EXPIRE_PERIOD_ASSETS,
    'import_on_create' => 0,
    'process_in_background' => 0
  );
  
  $organisations_importer = new stdClass;
  $organisations_importer->disabled = FALSE;
  $organisations_importer->api_version = 1;
  $organisations_importer->id = IDS_IMPORT_IMPORTER_ORGANISATIONS;
  $organisations_importer->config = array(
    'name' => 'IDS Organisations Importer',
    'description' => 'Importer for organisations in the IDS collection.',
    'fetcher' => array(
      'plugin_key' => 'IdsAssetsFetcher',
      'config' => array(
        'asset_type' => 'organisations'
      )
    ),
    'parser' => array(
      'plugin_key' => 'IdsOrganisationsParser',
      'config' => array()
    ),
    'processor' => array(
      'plugin_key' => 'IdsAssetsProcessor',
      'config' => array(
        'content_type' => IDS_IMPORT_ORGANISATIONS_TYPE,
        'expire' => IDS_IMPORT_EXPIRE_PERIOD_ASSETS,
        'author' => variable_get('idsimport_new_user_id', 0),
        'mappings' => array(
          0 => array(
            'source' => 'object_type',
            'target' => 'field_object_type',
            'unique' => FALSE
          ),
          1 => array(
            'source' => 'metadata_url',
            'target' => 'field_metadata_url',
            'unique' => FALSE
          ),
          2 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE
          ),
          3 => array(
            'source' => 'object_id',
            'target' => 'field_object_id',
            'unique' => FALSE
          ),
          4 => array(
            'source' => 'object_id',
            'target' => 'guid',
            'unique' => 1
          ),
          5 => array(
            'source' => 'site',
            'target' => 'field_site',
            'unique' => FALSE
          ),
          6 => array(
            'source' => 'timestamp',
            'target' => 'field_timestamp:start',
            'unique' => FALSE
          ),
          7 => array(
            'source' => 'website_url',
            'target' => 'field_website_url',
            'unique' => FALSE
          ),
          8 => array(
            'source' => 'name',
            'target' => 'field_name',
            'unique' => FALSE
          ),
          9 => array(
            'source' => 'asset_id',
            'target' => 'field_asset_id',
            'unique' => FALSE
          ),
          10 => array(
            'source' => 'date_created',
            'target' => 'field_date_created:start',
            'unique' => FALSE
          ),
          11 => array(
            'source' => 'date_updated',
            'target' => 'field_date_updated:start',
            'unique' => FALSE
          ),
          12 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE
          ),
          13 => array(
            'source' => 'keywords',
            'target' => 'field_tags',
	        'term_search' => '0',
	        'autocreate' => 1
          ),
          14 => array(
            'source' => '$acronym',
            'target' => 'field_acronym',
            'unique' => FALSE
          ),
          15 => array(
            'source' => '$alternative_acronym',
            'target' => 'field_alternative_acronym',
            'unique' => FALSE
          ),
          16 => array(
            'source' => '$alternative_name',
            'target' => 'field_alternative_name',
            'unique' => FALSE
          ),
          17 => array(
            'source' => '$organisation_type',
            'target' => 'field_organisation_type',
            'unique' => FALSE
          ),
          18 => array(
            'source' => '$organisation_url',
            'target' => 'field_organisation_url',
            'unique' => FALSE
          ),
          19 => array(
            'source' => '$location_country',
            'target' => 'field_location_country',
            'unique' => FALSE
          )
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'authorize' => 1,
        'skip_hash_check' => 0,
        'bundle' => 'ids_organisation'
      )
    ),
    'content_type' => IDS_IMPORT_ORGANISATIONS_FEED_TYPE,
    'update' => 1,
    'import_period' => IDS_IMPORT_IMPORT_PERIOD_ASSETS,
    'expire_period' => IDS_IMPORT_EXPIRE_PERIOD_ASSETS,
    'import_on_create' => 0,
    'process_in_background' => 0
  );
  
  $regions_importer = new stdClass;
  $regions_importer->disabled = FALSE;
  $regions_importer->api_version = 1;
  $regions_importer->id = IDS_IMPORT_IMPORTER_REGIONS;
  $regions_importer->config = array(
    'name' => 'IDS Regions Importer',
    'description' => 'Importer for regions in the IDS collection.',
    'fetcher' => array(
      'plugin_key' => 'IdsCategoriesFetcher',
      'config' => array(
        'category_type' => 'regions'
      )
    ),
    'parser' => array(
      'plugin_key' => 'IdsCategoriesParser',
      'config' => array()
    ),
    'processor' => array(
      'plugin_key' => 'IdsCategoriesProcessor',
      'config' => array(
        'vocabulary' => IDS_IMPORT_REGIONS_VOCABULARY,
        'mappings' => array(
          0 => array(
            'source' => 'name',
            'target' => 'name',
            'unique' => 0
          ),
          1 => array(
            'source' => 'category_id',
            'target' => 'field_category_id',
            'unique' => FALSE
          ),
          2 => array(
            'source' => 'object_id',
            'target' => 'guid',
            'unique' => 1
          ),
          3 => array(
            'source' => 'title',
            'target' => 'description',
            'unique' => FALSE
          ),
          4 => array(
            'source' => 'cat_superparent',
            'target' => 'field_superparent_id',
            'unique' => FALSE
          ),
          5 => array(
            'source' => 'site',
            'target' => 'field_site',
            'unique' => FALSE
          ),
          6 => array(
            'source' => 'website_url',
            'target' => 'field_website_url',
            'unique' => FALSE
          ),
          7 => array(
            'source' => 'metadata_url',
            'target' => 'field_metadata_url',
            'unique' => FALSE
          ),
          8 => array(
            'source' => 'object_id',
            'target' => 'field_object_id',
            'unique' => FALSE
          ),
          9 => array(
            'source' => 'object_type',
            'target' => 'field_object_type',
            'unique' => FALSE
          ),
          10 => array(
            'source' => 'timestamp',
            'target' => 'field_timestamp:start',
            'unique' => FALSE
          ),
          11 => array(
            'source' => 'archived',
            'target' => 'field_archived',
            'unique' => FALSE
          ),
          12 => array(
            'source' => 'cat_parent',
            'target' => 'field_parent_id',
            'unique' => FALSE
          )
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'authorize' => 1,
        'skip_hash_check' => 0,
        'bundle' => 'ids_regions'
      )
    ),
    'content_type' => IDS_IMPORT_REGIONS_FEED_TYPE,
    'update' => 1,
    'import_period' => IDS_IMPORT_IMPORT_PERIOD_CATEGORIES,
    'expire_period' => IDS_IMPORT_EXPIRE_PERIOD_CATEGORIES,
    'import_on_create' => 0,
    'process_in_background' => 0
  );
  
  $themes_importer = new stdClass;
  $themes_importer->disabled = FALSE;
  $themes_importer->api_version = 1;
  $themes_importer->id = IDS_IMPORT_IMPORTER_THEMES;
  $themes_importer->config = array(
    'name' => 'IDS Authors Importer',
    'description' => 'Importer for Authors in the IDS collection.',
    'fetcher' => array(
      'plugin_key' => 'IdsAssetsFetcher',
      'config' => array(
        'asset_type' => 'documents'
      )
    ),
    'parser' => array(
      'plugin_key' => 'IdsDocumentsParser',
      'config' => array()
    ),
    'processor' => array(
      'plugin_key' => 'IdsAssetsProcessor',
      'config' => array(
	'content_type' => 'person',
  'expire' => IDS_IMPORT_EXPIRE_PERIOD_ASSETS,
        'author' => variable_get('idsimport_new_user_id', 0),
        'mappings' => array(
          0 => array(
            'source' => 'name',
            'target' => 'name',
            'unique' => 0
          ),
          1 => array(
            'source' => 'website_url',
            'target' => 'field_website',
            'unique' => FALSE
          ),
          2 => array(
            'source' => 'object_id',
            'target' => 'guid',
            'unique' => 1
          ),
          3 => array(
            'source' => 'title',
            'target' => 'description',
            'unique' => FALSE
          ),
          4 => array(
            'source' => 'cat_superparent',
            'target' => 'field_superparent_id',
            'unique' => FALSE
          ),
          5 => array(
            'source' => 'site',
            'target' => 'field_site',
            'unique' => FALSE
          ),
          6 => array(
            'source' => 'website_url',
            'target' => 'field_website_url',
            'unique' => FALSE
          ),
          7 => array(
            'source' => 'metadata_url',
            'target' => 'field_metadata_url',
            'unique' => FALSE
          )
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'authorize' => 1,
        'skip_hash_check' => 0,
        'bundle' => 'ids_themes'
      )
    ),
    'content_type' => IDS_IMPORT_THEMES_FEED_TYPE,
    'update' => 1,
    'import_period' => IDS_IMPORT_IMPORT_PERIOD_CATEGORIES,
    'expire_period' => IDS_IMPORT_EXPIRE_PERIOD_CATEGORIES,
    'import_on_create' => 0,
    'process_in_background' => 1
  );


  $subjects_importer = new stdClass;
  $subjects_importer->disabled = FALSE;
  $subjects_importer->api_version = 1;
  $subjects_importer->id = IDS_IMPORT_IMPORTER_SUBJECTS;
  $subjects_importer->config = array(
    'name' => 'IDS Subjects Importer',
    'description' => 'Importer for subjects in the IDS collection.',
    'fetcher' => array(
      'plugin_key' => 'IdsCategoriesFetcher',
      'config' => array(
        'category_type' => 'subjects'
      )
    ),
    'parser' => array(
      'plugin_key' => 'IdsCategoriesParser',
      'config' => array()
    ),
    'processor' => array(
      'plugin_key' => 'IdsCategoriesProcessor',
      'config' => array(
        'vocabulary' => IDS_IMPORT_SUBJECTS_VOCABULARY,
        'mappings' => array(
          0 => array(
            'source' => 'name',
            'target' => 'name',
            'unique' => 0
          ),
          1 => array(
            'source' => 'category_id',
            'target' => 'field_category_id',
            'unique' => FALSE
          ),
          2 => array(
            'source' => 'object_id',
            'target' => 'guid',
            'unique' => 1
          ),
          3 => array(
            'source' => 'title',
            'target' => 'description',
            'unique' => FALSE
          ),
          4 => array(
            'source' => 'cat_superparent',
            'target' => 'field_superparent_id',
            'unique' => FALSE
          ),
          5 => array(
            'source' => 'site',
            'target' => 'field_site',
            'unique' => FALSE
          ),
          6 => array(
            'source' => 'website_url',
            'target' => 'field_website_url',
            'unique' => FALSE
          ),
          7 => array(
            'source' => 'metadata_url',
            'target' => 'field_metadata_url',
            'unique' => FALSE
          ),
          8 => array(
            'source' => 'object_id',
            'target' => 'field_object_id',
            'unique' => FALSE
          ),
          9 => array(
            'source' => 'object_type',
            'target' => 'field_object_type',
            'unique' => FALSE
          ),
          10 => array(
            'source' => 'timestamp',
            'target' => 'field_timestamp:start',
            'unique' => FALSE
          ),
          11 => array(
            'source' => 'archived',
            'target' => 'field_archived',
            'unique' => FALSE
          ),
          12 => array(
            'source' => 'cat_parent',
            'target' => 'field_parent_id',
            'unique' => FALSE
          )
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'authorize' => 1,
        'skip_hash_check' => 0,
        'bundle' => 'ids_subjects'
      )
    ),
    'content_type' => IDS_IMPORT_SUBJECTS_FEED_TYPE,
    'update' => 1,
    'import_period' => IDS_IMPORT_IMPORT_PERIOD_CATEGORIES,
    'expire_period' => IDS_IMPORT_EXPIRE_PERIOD_CATEGORIES,
    'import_on_create' => 0,
    'process_in_background' => 1
  );


  $countries_importer = new stdClass();
  $countries_importer->disabled = FALSE;
  $countries_importer->api_version = 1;
  $countries_importer->id = IDS_IMPORT_IMPORTER_COUNTRIES;
  $countries_importer->config = array(
    'name' => 'IDS Countries Importer',
    'description' => 'Importer for countries in the IDS collection.',
    'fetcher' => array(
      'plugin_key' => 'IdsCategoriesFetcher',
      'config' => array(
        'category_type' => 'countries',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'IdsCountriesParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'IdsCountriesProcessor',
      'config' => array(
        'vocabulary' => IDS_IMPORT_COUNTRIES_VOCABULARY,
        'mappings' => array(
          0 => array(
            'source' => 'object_id',
            'target' => 'field_object_id',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'object_type',
            'target' => 'field_object_type',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'site',
            'target' => 'field_site',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'metadata_url',
            'target' => 'field_metadata_url',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'timestamp',
            'target' => 'field_timestamp:start',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'website_url',
            'target' => 'field_website_url',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'name',
            'target' => 'name',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'alternative_name',
            'target' => 'field_alternative_name',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'asset_id',
            'target' => 'field_asset_id',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'iso_number',
            'target' => 'field_iso_number',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'iso_three_letter_code',
            'target' => 'field_iso_three_code',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'iso_two_letter_code',
            'target' => 'field_iso_two_code',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'object_id',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'authorize' => 1,
        'skip_hash_check' => 0,
        'bundle' => 'ids_countries'
      ),
    ),
    'content_type' => IDS_IMPORT_COUNTRIES_FEED_TYPE,
    'update' => 1,
    'import_period' => IDS_IMPORT_IMPORT_PERIOD_CATEGORIES,
    'expire_period' => IDS_IMPORT_EXPIRE_PERIOD_CATEGORIES,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  
  $export[IDS_IMPORT_IMPORTER_DOCUMENTS] = $documents_importer;
  $export[IDS_IMPORT_IMPORTER_ORGANISATIONS] = $organisations_importer;
  $export[IDS_IMPORT_IMPORTER_REGIONS] = $regions_importer;
  $export[IDS_IMPORT_IMPORTER_THEMES] = $themes_importer;
  $export[IDS_IMPORT_IMPORTER_SUBJECTS] = $subjects_importer;
  $export[IDS_IMPORT_IMPORTER_COUNTRIES] = $countries_importer;
  
  return $export;
}
