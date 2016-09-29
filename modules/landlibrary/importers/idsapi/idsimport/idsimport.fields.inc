<?php
/**
 * @file
 * idsimport.fields.inc
 */

/**
 * Creates fields definitions to be used in content-types and vocabularies.
 */
function idsimport_fields_definitions() {
  $fields['documents'] = array(
    'body' => array(
      'entity_types' => array(
        0 => 'node',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'settings' => array(),
      'translatable' => '0',
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_body' => array(
                'value' => 'body_value',
                'summary' => 'body_summary',
                'format' => 'body_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_body' => array(
                'value' => 'body_value',
                'summary' => 'body_summary',
                'format' => 'body_format',
              ),
            ),
          ),
        ),
      ),
      'field_name' => 'body',
      'type' => 'text_with_summary',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
        ),
        'summary' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'page',
          1 => 'article',
          2 => 'ids_document',
        ),
      ),
    ),
    'field_asset_id' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_asset_id' => array(
                'value' => 'field_asset_id_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_asset_id' => array(
                'value' => 'field_asset_id_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_asset_id',
      'type' => 'number_integer',
      'module' => 'number',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'int',
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
    'field_authors' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'ids_authors',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_authors' => array(
                'tid' => 'field_authors_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_authors' => array(
                'tid' => 'field_authors_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_authors',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
    'field_countries' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'ids_countries',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_countries' => array(
                'tid' => 'field_countries_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_countries' => array(
                'tid' => 'field_countries_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_countries',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
    'field_date_created' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'granularity' => array(
          'month' => 'month',
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'second' => 'second',
          'year' => 'year',
        ),
        'tz_handling' => 'utc',
        'timezone_db' => 'UTC',
        'cache_enabled' => 0,
        'cache_count' => '4',
        'todate' => '',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_date_created' => array(
                'value' => 'field_date_created_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_date_created' => array(
                'value' => 'field_date_created_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_date_created',
      'type' => 'datetime',
      'module' => 'date',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'datetime',
          'mysql_type' => 'datetime',
          'pgsql_type' => 'timestamp without time zone',
          'sqlite_type' => 'varchar',
          'sqlsrv_type' => 'smalldatetime',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
    'field_date_updated' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'granularity' => array(
          'month' => 'month',
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'second' => 'second',
          'year' => 'year',
        ),
        'tz_handling' => 'utc',
        'timezone_db' => 'UTC',
        'cache_enabled' => 0,
        'cache_count' => '4',
        'todate' => '',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_date_updated' => array(
                'value' => 'field_date_updated_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_date_updated' => array(
                'value' => 'field_date_updated_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_date_updated',
      'type' => 'datetime',
      'module' => 'date',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'datetime',
          'mysql_type' => 'datetime',
          'pgsql_type' => 'timestamp without time zone',
          'sqlite_type' => 'varchar',
          'sqlsrv_type' => 'smalldatetime',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
    'field_external_urls' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '1500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_external_urls' => array(
                'value' => 'field_external_urls_value',
                'format' => 'field_external_urls_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_external_urls' => array(
                'value' => 'field_external_urls_value',
                'format' => 'field_external_urls_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_external_urls',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => FIELD_CARDINALITY_UNLIMITED,
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '1500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 1500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
    'field_language' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_language' => array(
                'value' => 'field_language_value',
                'format' => 'field_language_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_language' => array(
                'value' => 'field_language_value',
                'format' => 'field_language_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_language',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
    'field_licence_type' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_licence_type' => array(
                'value' => 'field_licence_type_value',
                'format' => 'field_licence_type_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_licence_type' => array(
                'value' => 'field_licence_type_value',
                'format' => 'field_licence_type_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_licence_type',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
  'field_document_type' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_document_type' => array(
                'value' => 'field_document_type_value',
                'format' => 'field_document_type_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_document_type' => array(
                'value' => 'field_document_type_value',
                'format' => 'field_document_type_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_document_type',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => FIELD_CARDINALITY_UNLIMITED,
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
    'field_metadata_url' => array(
      'entity_types' => array(),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'settings' => array(
        'max_length' => '500',
      ),
      'translatable' => '0',
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_metadata_url' => array(
                'value' => 'field_metadata_url_value',
                'format' => 'field_metadata_url_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_metadata_url' => array(
                'value' => 'field_metadata_url_value',
                'format' => 'field_metadata_url_format',
              ),
            ),
          ),
        ),
      ),
      'field_name' => 'field_metadata_url',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
        'taxonomy_term' => array(
          0 => 'ids_themes',
          1 => 'ids_regions',
          2 => 'ids_subjects',
        ),
      ),
    ),
    'field_name' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_name' => array(
                'value' => 'field_name_value',
                'format' => 'field_name_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_name' => array(
                'value' => 'field_name_value',
                'format' => 'field_name_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_name',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
    'field_object_id' => array(
      'entity_types' => array(),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'settings' => array(
        'max_length' => '500',
      ),
      'translatable' => '0',
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_object_id' => array(
                'value' => 'field_object_id_value',
                'format' => 'field_object_id_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_object_id' => array(
                'value' => 'field_object_id_value',
                'format' => 'field_object_id_format',
              ),
            ),
          ),
        ),
      ),
      'field_name' => 'field_object_id',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
        'taxonomy_term' => array(
          0 => 'ids_themes',
          1 => 'ids_regions',
          2 => 'ids_subjects',
        ),
      ),
    ),
    'field_object_type' => array(
      'entity_types' => array(),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'settings' => array(
        'max_length' => '500',
      ),
      'translatable' => '0',
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_object_type' => array(
                'value' => 'field_object_type_value',
                'format' => 'field_object_type_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_object_type' => array(
                'value' => 'field_object_type_value',
                'format' => 'field_object_type_format',
              ),
            ),
          ),
        ),
      ),
      'field_name' => 'field_object_type',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
        'taxonomy_term' => array(
          0 => 'ids_themes',
          1 => 'ids_regions',
          2 => 'ids_subjects',
        ),
      ),
    ),
    'field_publication_date' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'granularity' => array(
          'year' => 'year',
          'month' => 0,
          'day' => 0,
          'hour' => 0,
          'minute' => 0,
          'second' => 0,
        ),
        'tz_handling' => 'none',
        'timezone_db' => '',
        'cache_enabled' => 0,
        'cache_count' => '4',
        'todate' => '',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_publication_date' => array(
                'value' => 'field_publication_date_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_publication_date' => array(
                'value' => 'field_publication_date_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_publication_date',
      'type' => 'datetime',
      'module' => 'date',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'datetime',
          'mysql_type' => 'datetime',
          'pgsql_type' => 'timestamp without time zone',
          'sqlite_type' => 'varchar',
          'sqlsrv_type' => 'smalldatetime',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
    'field_publisher' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '1500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_publisher' => array(
                'value' => 'field_publisher_value',
                'format' => 'field_publisher_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_publisher' => array(
                'value' => 'field_publisher_value',
                'format' => 'field_publisher_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_publisher',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
    'field_publisher_id' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '255',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_publisher_id' => array(
                'value' => 'field_publisher_id_value',
                'format' => 'field_publisher_id_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_publisher_id' => array(
                'value' => 'field_publisher_id_value',
                'format' => 'field_publisher_id_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_publisher_id',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '255',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
    'field_regions' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'ids_regions',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_regions' => array(
                'tid' => 'field_regions_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_regions' => array(
                'tid' => 'field_regions_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_regions',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
    'field_site' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_site' => array(
                'value' => 'field_site_value',
                'format' => 'field_site_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_site' => array(
                'value' => 'field_site_value',
                'format' => 'field_site_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_site',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_themes',
          1 => 'ids_regions',
          2 => 'ids_sujbjects',
        ),
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
    'field_headline' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '1024',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_headline' => array(
                'value' => 'field_headline_value',
                'format' => 'field_headline_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_headline' => array(
                'value' => 'field_headline_value',
                'format' => 'field_headline_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_headline',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '1024',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 1024,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
    'field_tags' => array(
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'ids_keywords',
            'parent' => 0,
          ),
        ),
      ),
      'entity_types' => array(),
      'translatable' => '0',
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_tags' => array(
                'tid' => 'field_tags_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_tags' => array(
                'tid' => 'field_tags_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_tags',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'article',
          1 => 'ids_document',
        ),
      ),
    ),
    'field_themes' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'ids_themes',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_themes' => array(
                'tid' => 'field_themes_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_themes' => array(
                'tid' => 'field_themes_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_themes',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
    'field_subjects' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'ids_subjects',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_subjects' => array(
                'tid' => 'field_subjects_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_subjects' => array(
                'tid' => 'field_subjects_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_subjects',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
    'field_timestamp' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'granularity' => array(
          'month' => 'month',
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'second' => 'second',
          'year' => 'year',
        ),
        'tz_handling' => 'utc',
        'timezone_db' => 'UTC',
        'cache_enabled' => 0,
        'cache_count' => '4',
        'todate' => '',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_timestamp' => array(
                'value' => 'field_timestamp_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_timestamp' => array(
                'value' => 'field_timestamp_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_timestamp',
      'type' => 'datestamp',
      'module' => 'date',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'int',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_themes',
          1 => 'ids_regions',
          2 => 'ids_subjects',
        ),
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
    'field_website_url' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_website_url' => array(
                'value' => 'field_website_url_value',
                'format' => 'field_website_url_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_website_url' => array(
                'value' => 'field_website_url_value',
                'format' => 'field_website_url_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_website_url',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_themes',
          1 => 'ids_regions',
          2 => 'ids_subjects',
        ),
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
  );

  $fields['organisations'] = array(
    'body' => array(
      'entity_types' => array(
        0 => 'node',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'settings' => array(),
      'translatable' => '0',
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_body' => array(
                'value' => 'body_value',
                'summary' => 'body_summary',
                'format' => 'body_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_body' => array(
                'value' => 'body_value',
                'summary' => 'body_summary',
                'format' => 'body_format',
              ),
            ),
          ),
        ),
      ),
      'field_name' => 'body',
      'type' => 'text_with_summary',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
        ),
        'summary' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'page',
          1 => 'article',
          2 => 'ids_document',
          3 => 'ids_organisation',
        ),
      ),
    ),
    'field_acronym' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_acronym' => array(
                'value' => 'field_acronym_value',
                'format' => 'field_acronym_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_acronym' => array(
                'value' => 'field_acronym_value',
                'format' => 'field_acronym_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_acronym',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_organisation',
        ),
      ),
    ),
    'field_alternative_acronym' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_alternative_acronym' => array(
                'value' => 'field_alternative_acronym_value',
                'format' => 'field_alternative_acronym_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_alternative_acronym' => array(
                'value' => 'field_alternative_acronym_value',
                'format' => 'field_alternative_acronym_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_alternative_acronym',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_organisation',
        ),
      ),
    ),
    'field_alternative_name' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_alternative_name' => array(
                'value' => 'field_alternative_name_value',
                'format' => 'field_alternative_name_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_alternative_name' => array(
                'value' => 'field_alternative_name_value',
                'format' => 'field_alternative_name_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_alternative_name',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_organisation',
        ),
      ),
    ),
    'field_asset_id' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_asset_id' => array(
                'value' => 'field_asset_id_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_asset_id' => array(
                'value' => 'field_asset_id_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_asset_id',
      'type' => 'number_integer',
      'module' => 'number',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'int',
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
          1 => 'ids_organisation',
        ),
      ),
    ),
    'field_countries' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'ids_countries',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_countries' => array(
                'tid' => 'field_countries_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_countries' => array(
                'tid' => 'field_countries_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_countries',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
          1 => 'ids_organisation',
        ),
      ),
    ),
    'field_date_created' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'granularity' => array(
          'month' => 'month',
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'second' => 'second',
          'year' => 'year',
        ),
        'tz_handling' => 'utc',
        'timezone_db' => 'UTC',
        'cache_enabled' => 0,
        'cache_count' => '4',
        'todate' => '',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_date_created' => array(
                'value' => 'field_date_created_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_date_created' => array(
                'value' => 'field_date_created_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_date_created',
      'type' => 'datetime',
      'module' => 'date',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'datetime',
          'mysql_type' => 'datetime',
          'pgsql_type' => 'timestamp without time zone',
          'sqlite_type' => 'varchar',
          'sqlsrv_type' => 'smalldatetime',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
          1 => 'ids_organisation',
        ),
      ),
    ),
    'field_date_updated' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'granularity' => array(
          'month' => 'month',
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'second' => 'second',
          'year' => 'year',
        ),
        'tz_handling' => 'utc',
        'timezone_db' => 'UTC',
        'cache_enabled' => 0,
        'cache_count' => '4',
        'todate' => '',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_date_updated' => array(
                'value' => 'field_date_updated_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_date_updated' => array(
                'value' => 'field_date_updated_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_date_updated',
      'type' => 'datetime',
      'module' => 'date',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'datetime',
          'mysql_type' => 'datetime',
          'pgsql_type' => 'timestamp without time zone',
          'sqlite_type' => 'varchar',
          'sqlsrv_type' => 'smalldatetime',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
          1 => 'ids_organisation',
        ),
      ),
    ),
    'field_location_country' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_location_country' => array(
                'value' => 'field_location_country_value',
                'format' => 'field_location_country_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_location_country' => array(
                'value' => 'field_location_country_value',
                'format' => 'field_location_country_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_location_country',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_organisation',
        ),
      ),
    ),
    'field_metadata_url' => array(
      'entity_types' => array(),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'settings' => array(
        'max_length' => '500',
      ),
      'translatable' => '0',
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_metadata_url' => array(
                'value' => 'field_metadata_url_value',
                'format' => 'field_metadata_url_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_metadata_url' => array(
                'value' => 'field_metadata_url_value',
                'format' => 'field_metadata_url_format',
              ),
            ),
          ),
        ),
      ),
      'field_name' => 'field_metadata_url',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
          1 => 'ids_organisation',
        ),
        'taxonomy_term' => array(
          0 => 'ids_themes',
          1 => 'ids_regions',
          2 => 'ids_subjects',
        ),
      ),
    ),
    'field_name' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_name' => array(
                'value' => 'field_name_value',
                'format' => 'field_name_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_name' => array(
                'value' => 'field_name_value',
                'format' => 'field_name_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_name',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
          1 => 'ids_organisation',
        ),
      ),
    ),
    'field_object_id' => array(
      'entity_types' => array(),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'settings' => array(
        'max_length' => '500',
      ),
      'translatable' => '0',
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_object_id' => array(
                'value' => 'field_object_id_value',
                'format' => 'field_object_id_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_object_id' => array(
                'value' => 'field_object_id_value',
                'format' => 'field_object_id_format',
              ),
            ),
          ),
        ),
      ),
      'field_name' => 'field_object_id',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
          1 => 'ids_organisation',
        ),
        'taxonomy_term' => array(
          0 => 'ids_themes',
          1 => 'ids_regions',
          2 => 'ids_subjects',
        ),
      ),
    ),
    'field_object_type' => array(
      'entity_types' => array(),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'settings' => array(
        'max_length' => '500',
      ),
      'translatable' => '0',
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_object_type' => array(
                'value' => 'field_object_type_value',
                'format' => 'field_object_type_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_object_type' => array(
                'value' => 'field_object_type_value',
                'format' => 'field_object_type_format',
              ),
            ),
          ),
        ),
      ),
      'field_name' => 'field_object_type',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
          1 => 'ids_organisation',
        ),
        'taxonomy_term' => array(
          0 => 'ids_themes',
          1 => 'ids_regions',
          2 => 'ids_subjects',
        ),
      ),
    ),
    'field_organisation_type' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_organisation_type' => array(
                'value' => 'field_organisation_type_value',
                'format' => 'field_organisation_type_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_organisation_type' => array(
                'value' => 'field_organisation_type_value',
                'format' => 'field_organisation_type_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_organisation_type',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_organisation',
        ),
      ),
    ),
    'field_organisation_url' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_organisation_url' => array(
                'value' => 'field_organisation_url_value',
                'format' => 'field_organisation_url_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_organisation_url' => array(
                'value' => 'field_organisation_url_value',
                'format' => 'field_organisation_url_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_organisation_url',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_organisation',
        ),
      ),
    ),
    'field_regions' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'ids_regions',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_regions' => array(
                'tid' => 'field_regions_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_regions' => array(
                'tid' => 'field_regions_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_regions',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
          1 => 'ids_organisation',
        ),
      ),
    ),
    'field_site' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_site' => array(
                'value' => 'field_site_value',
                'format' => 'field_site_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_site' => array(
                'value' => 'field_site_value',
                'format' => 'field_site_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_site',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_themes',
          1 => 'ids_regions',
          2 => 'ids_subjects',
        ),
        'node' => array(
          0 => 'ids_document',
          1 => 'ids_organisation',
        ),
      ),
    ),
    'field_tags' => array(
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'ids_keywords',
            'parent' => 0,
          ),
        ),
      ),
      'entity_types' => array(),
      'translatable' => '0',
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_tags' => array(
                'tid' => 'field_tags_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_tags' => array(
                'tid' => 'field_tags_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_tags',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'article',
          1 => 'ids_document',
          2 => 'ids_organisation',
        ),
      ),
    ),
    'field_themes' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'ids_themes',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_themes' => array(
                'tid' => 'field_themes_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_themes' => array(
                'tid' => 'field_themes_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_themes',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
          1 => 'ids_organisation',
        ),
      ),
    ),
    'field_subjects' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'ids_subjects',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_subjects' => array(
                'tid' => 'field_subjects_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_subjects' => array(
                'tid' => 'field_subjects_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_subjects',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
          1 => 'ids_organisation',
        ),
      ),
    ),
    'field_timestamp' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'granularity' => array(
          'month' => 'month',
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'second' => 'second',
          'year' => 'year',
        ),
        'tz_handling' => 'utc',
        'timezone_db' => 'UTC',
        'cache_enabled' => 0,
        'cache_count' => '4',
        'todate' => '',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_timestamp' => array(
                'value' => 'field_timestamp_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_timestamp' => array(
                'value' => 'field_timestamp_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_timestamp',
      'type' => 'datestamp',
      'module' => 'date',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'int',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_subjects',
          1 => 'ids_regions',
        ),
        'node' => array(
          0 => 'ids_document',
          1 => 'ids_organisation',
        ),
      ),
    ),
    'field_website_url' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_website_url' => array(
                'value' => 'field_website_url_value',
                'format' => 'field_website_url_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_website_url' => array(
                'value' => 'field_website_url_value',
                'format' => 'field_website_url_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_website_url',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_themes',
          1 => 'ids_regions',
          2 => 'ids_subjects',
        ),
        'node' => array(
          0 => 'ids_document',
          1 => 'ids_organisation',
        ),
      ),
    ),
  );

  $fields['regions'] = array(
    'field_archived' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => '',
          1 => '',
        ),
        'allowed_values_function' => '',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_archived' => array(
                'value' => 'field_archived_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_archived' => array(
                'value' => 'field_archived_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'field_name' => 'field_archived',
      'type' => 'list_boolean',
      'module' => 'list',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'int',
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_subjects',
        ),
      ),
    ),
    'field_category_id' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_category_id' => array(
                'value' => 'field_category_id_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_category_id' => array(
                'value' => 'field_category_id_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_category_id',
      'type' => 'number_integer',
      'module' => 'number',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'int',
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_subjects',
        ),
      ),
    ),
    'field_metadata_url' => array(
      'entity_types' => array(),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'settings' => array(
        'max_length' => '500',
      ),
      'translatable' => '0',
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_metadata_url' => array(
                'value' => 'field_metadata_url_value',
                'format' => 'field_metadata_url_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_metadata_url' => array(
                'value' => 'field_metadata_url_value',
                'format' => 'field_metadata_url_format',
              ),
            ),
          ),
        ),
      ),
      'field_name' => 'field_metadata_url',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_subjects',
        ),
      ),
    ),
    'field_object_id' => array(
      'entity_types' => array(),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'settings' => array(
        'max_length' => '500',
      ),
      'translatable' => '0',
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_object_id' => array(
                'value' => 'field_object_id_value',
                'format' => 'field_object_id_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_object_id' => array(
                'value' => 'field_object_id_value',
                'format' => 'field_object_id_format',
              ),
            ),
          ),
        ),
      ),
      'field_name' => 'field_object_id',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_subjects',
        ),
      ),
    ),
    'field_object_type' => array(
      'entity_types' => array(),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'settings' => array(
        'max_length' => '500',
      ),
      'translatable' => '0',
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_object_type' => array(
                'value' => 'field_object_type_value',
                'format' => 'field_object_type_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_object_type' => array(
                'value' => 'field_object_type_value',
                'format' => 'field_object_type_format',
              ),
            ),
          ),
        ),
      ),
      'field_name' => 'field_object_type',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_subjects',
        ),
      ),
    ),
    'field_parent_id' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_parent_id' => array(
                'value' => 'field_parent_id_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_parent_id' => array(
                'value' => 'field_parent_id_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_parent_id',
      'type' => 'number_integer',
      'module' => 'number',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'int',
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_subjects',
        ),
      ),
    ),
    'field_site' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_site' => array(
                'value' => 'field_site_value',
                'format' => 'field_site_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_site' => array(
                'value' => 'field_site_value',
                'format' => 'field_site_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_site',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_subjects',
        ),
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
    'field_superparent_id' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_superparent_id' => array(
                'value' => 'field_superparent_id_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_superparent_id' => array(
                'value' => 'field_superparent_id_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_superparent_id',
      'type' => 'number_integer',
      'module' => 'number',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'int',
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_subjects',
        ),
      ),
    ),
    'field_timestamp' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'granularity' => array(
          'month' => 'month',
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'second' => 'second',
          'year' => 'year',
        ),
        'tz_handling' => 'utc',
        'timezone_db' => 'UTC',
        'cache_enabled' => 0,
        'cache_count' => '4',
        'todate' => '',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_timestamp' => array(
                'value' => 'field_timestamp_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_timestamp' => array(
                'value' => 'field_timestamp_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_timestamp',
      'type' => 'datestamp',
      'module' => 'date',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'int',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_subjects',
        ),
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
    'field_website_url' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_website_url' => array(
                'value' => 'field_website_url_value',
                'format' => 'field_website_url_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_website_url' => array(
                'value' => 'field_website_url_value',
                'format' => 'field_website_url_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_website_url',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_subjects',
        ),
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
  );

  $fields['themes'] = array(
    'field_archived' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => '',
          1 => '',
        ),
        'allowed_values_function' => '',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_archived' => array(
                'value' => 'field_archived_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_archived' => array(
                'value' => 'field_archived_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'field_name' => 'field_archived',
      'type' => 'list_boolean',
      'module' => 'list',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'int',
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
        ),
      ),
    ),
  );
  $fields['subjects'] = array(
    'field_archived' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => '',
          1 => '',
        ),
        'allowed_values_function' => '',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_archived' => array(
                'value' => 'field_archived_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_archived' => array(
                'value' => 'field_archived_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'field_name' => 'field_archived',
      'type' => 'list_boolean',
      'module' => 'list',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'int',
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_subjects',
        ),
      ),
    ),

    'field_category_id' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_category_id' => array(
                'value' => 'field_category_id_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_category_id' => array(
                'value' => 'field_category_id_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_category_id',
      'type' => 'number_integer',
      'module' => 'number',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'int',
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_subjects',
        ),
      ),
    ),
    'field_metadata_url' => array(
      'entity_types' => array(),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'settings' => array(
        'max_length' => '500',
      ),
      'translatable' => '0',
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_metadata_url' => array(
                'value' => 'field_metadata_url_value',
                'format' => 'field_metadata_url_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_metadata_url' => array(
                'value' => 'field_metadata_url_value',
                'format' => 'field_metadata_url_format',
              ),
            ),
          ),
        ),
      ),
      'field_name' => 'field_metadata_url',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_subjects',
        ),
      ),
    ),
    'field_object_id' => array(
      'entity_types' => array(),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'settings' => array(
        'max_length' => '500',
      ),
      'translatable' => '0',
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_object_id' => array(
                'value' => 'field_object_id_value',
                'format' => 'field_object_id_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_object_id' => array(
                'value' => 'field_object_id_value',
                'format' => 'field_object_id_format',
              ),
            ),
          ),
        ),
      ),
      'field_name' => 'field_object_id',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_subjects',
        ),
      ),
    ),
    'field_object_type' => array(
      'entity_types' => array(),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'settings' => array(
        'max_length' => '500',
      ),
      'translatable' => '0',
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_object_type' => array(
                'value' => 'field_object_type_value',
                'format' => 'field_object_type_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_object_type' => array(
                'value' => 'field_object_type_value',
                'format' => 'field_object_type_format',
              ),
            ),
          ),
        ),
      ),
      'field_name' => 'field_object_type',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
        ),
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_subjects',
        ),
      ),
    ),
    'field_parent_id' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_parent_id' => array(
                'value' => 'field_parent_id_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_parent_id' => array(
                'value' => 'field_parent_id_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_parent_id',
      'type' => 'number_integer',
      'module' => 'number',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'int',
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_subjects',
        ),
      ),
    ),
    'field_site' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_site' => array(
                'value' => 'field_site_value',
                'format' => 'field_site_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_site' => array(
                'value' => 'field_site_value',
                'format' => 'field_site_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_site',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_subjects',
        ),
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
    'field_superparent_id' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_superparent_id' => array(
                'value' => 'field_superparent_id_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_superparent_id' => array(
                'value' => 'field_superparent_id_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_superparent_id',
      'type' => 'number_integer',
      'module' => 'number',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'int',
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_subjects',
        ),
      ),
    ),
    'field_timestamp' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'granularity' => array(
          'month' => 'month',
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'second' => 'second',
          'year' => 'year',
        ),
        'tz_handling' => 'utc',
        'timezone_db' => 'UTC',
        'cache_enabled' => 0,
        'cache_count' => '4',
        'todate' => '',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_timestamp' => array(
                'value' => 'field_timestamp_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_timestamp' => array(
                'value' => 'field_timestamp_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_timestamp',
      'type' => 'datestamp',
      'module' => 'date',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'int',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_subjects',
        ),
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
    'field_website_url' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_website_url' => array(
                'value' => 'field_website_url_value',
                'format' => 'field_website_url_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_website_url' => array(
                'value' => 'field_website_url_value',
                'format' => 'field_website_url_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_website_url',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 500,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_subjects',
        ),
        'node' => array(
          0 => 'ids_document',
        ),
      ),
    ),
  );

  $fields['countries'] = array(
    'field_alternative_name' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_alternative_name' => array(
                'value' => 'field_alternative_name_value',
                'format' => 'field_alternative_name_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_alternative_name' => array(
                'value' => 'field_alternative_name_value',
                'format' => 'field_alternative_name_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_alternative_name',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_organisation',
        ),
        'taxonomy_term' => array(
          0 => 'ids_countries',
        ),
      ),
    ),
    'field_asset_id' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_asset_id' => array(
                'value' => 'field_asset_id_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_asset_id' => array(
                'value' => 'field_asset_id_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_asset_id',
      'type' => 'number_integer',
      'module' => 'number',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'int',
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
          1 => 'ids_organisation',
        ),
        'taxonomy_term' => array(
          0 => 'ids_countries',
        ),
      ),
    ),
    'field_iso_number' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_iso_number' => array(
                'value' => 'field_iso_number_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_iso_number' => array(
                'value' => 'field_iso_number_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_iso_number',
      'type' => 'number_integer',
      'module' => 'number',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'int',
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_countries',
        ),
      ),
    ),
    'field_iso_three_code' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '10',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_iso_three_code' => array(
                'value' => 'field_iso_three_code_value',
                'format' => 'field_iso_three_code_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_iso_three_code' => array(
                'value' => 'field_iso_three_code_value',
                'format' => 'field_iso_three_code_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_iso_three_code',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '10',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_countries',
        ),
      ),
    ),
    'field_iso_two_code' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '10',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_iso_two_code' => array(
                'value' => 'field_iso_two_code_value',
                'format' => 'field_iso_two_code_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_iso_two_code' => array(
                'value' => 'field_iso_two_code_value',
                'format' => 'field_iso_two_code_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_iso_two_code',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '10',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'taxonomy_term' => array(
          0 => 'ids_countries',
        ),
      ),
    ),
    'field_metadata_url' => array(
      'entity_types' => array(),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'settings' => array(
        'max_length' => '500',
      ),
      'translatable' => '0',
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_metadata_url' => array(
                'value' => 'field_metadata_url_value',
                'format' => 'field_metadata_url_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_metadata_url' => array(
                'value' => 'field_metadata_url_value',
                'format' => 'field_metadata_url_format',
              ),
            ),
          ),
        ),
      ),
      'field_name' => 'field_metadata_url',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
          1 => 'ids_organisation',
        ),
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_countries',
        ),
      ),
    ),
    'field_object_id' => array(
      'entity_types' => array(),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'settings' => array(
        'max_length' => '500',
      ),
      'translatable' => '0',
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_object_id' => array(
                'value' => 'field_object_id_value',
                'format' => 'field_object_id_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_object_id' => array(
                'value' => 'field_object_id_value',
                'format' => 'field_object_id_format',
              ),
            ),
          ),
        ),
      ),
      'field_name' => 'field_object_id',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
          1 => 'ids_organisation',
        ),
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_countries',
        ),
      ),
    ),
    'field_object_type' => array(
      'entity_types' => array(),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'settings' => array(
        'max_length' => '500',
      ),
      'translatable' => '0',
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_object_type' => array(
                'value' => 'field_object_type_value',
                'format' => 'field_object_type_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_object_type' => array(
                'value' => 'field_object_type_value',
                'format' => 'field_object_type_format',
              ),
            ),
          ),
        ),
      ),
      'field_name' => 'field_object_type',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
          1 => 'ids_organisation',
        ),
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_countries',
        ),
      ),
    ),
    'field_regions' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'ids_regions',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_regions' => array(
                'tid' => 'field_regions_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_regions' => array(
                'tid' => 'field_regions_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_regions',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
          1 => 'ids_organisation',
        ),
        'taxonomy_term' => array(
          0 => 'ids_countries',
        ),
      ),
    ),
    'field_site' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_site' => array(
                'value' => 'field_site_value',
                'format' => 'field_site_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_site' => array(
                'value' => 'field_site_value',
                'format' => 'field_site_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_site',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
          1 => 'ids_organisation',
        ),
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_countries',
        ),
      ),
    ),
    'field_timestamp' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'granularity' => array(
          'month' => 'month',
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'second' => 'second',
          'year' => 'year',
        ),
        'tz_handling' => 'utc',
        'timezone_db' => 'UTC',
        'cache_enabled' => 0,
        'cache_count' => '4',
        'todate' => '',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_timestamp' => array(
                'value' => 'field_timestamp_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_timestamp' => array(
                'value' => 'field_timestamp_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_timestamp',
      'type' => 'datestamp',
      'module' => 'date',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'int',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
          1 => 'ids_organisation',
        ),
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_countries',
        ),
      ),
    ),
    'field_website_url' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '500',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_website_url' => array(
                'value' => 'field_website_url_value',
                'format' => 'field_website_url_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_website_url' => array(
                'value' => 'field_website_url_value',
                'format' => 'field_website_url_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_website_url',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '500',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'ids_document',
          1 => 'ids_organisation',
        ),
        'taxonomy_term' => array(
          0 => 'ids_regions',
          1 => 'ids_themes',
          2 => 'ids_countries',
        ),
      ),
    ),
  );

  return $fields;
}

/**
 * Creates fields instances to be used in content-types and vocabularies.
 */
function idsimport_fields_instances() {
  $instances['documents'] = array(
    'body' => array(
        'label' => 'Description',
        'widget' => array(
          'weight' => '6',
          'type' => 'text_textarea_with_summary',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'rows' => '20',
            'summary_rows' => 5,
          ),
        ),
        'settings' => array(
          'text_processing' => '1',
          'display_summary' => 0,
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'weight' => '14',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'body',
        'entity_type' => 'node',
        'bundle' => 'ids_document',
        'deleted' => '0',
      ),
    'field_headline' => array(
        'label' => 'Headline',
        'widget' => array(
          'weight' => '3',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'weight' => '10',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_headline',
        'entity_type' => 'node',
        'bundle' => 'ids_document',
        'deleted' => '0',
      ),
    'field_asset_id' => array(
        'label' => 'Asset ID',
        'widget' => array(
          'weight' => '15',
          'type' => 'number',
          'module' => 'number',
          'active' => 0,
          'settings' => array(),
        ),
        'settings' => array(
          'min' => '',
          'max' => '',
          'prefix' => '',
          'suffix' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'number_integer',
            'weight' => '11',
            'settings' => array(
              'thousand_separator' => ' ',
              'decimal_separator' => '.',
              'scale' => 0,
              'prefix_suffix' => TRUE,
            ),
            'module' => 'number',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_asset_id',
        'entity_type' => 'node',
        'bundle' => 'ids_document',
        'deleted' => '0',
      ),
    'field_authors' => array(
        'label' => 'Authors',
        'widget' => array(
          'weight' => '1',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'taxonomy_term_reference_link',
            'weight' => '0',
            'settings' => array(),
            'module' => 'taxonomy',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_authors',
        'entity_type' => 'node',
        'bundle' => 'ids_document',
        'deleted' => '0',
      ),
    'field_countries' => array(
        'label' => 'Countries',
        'widget' => array(
          'weight' => '5',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'taxonomy_term_reference_link',
            'weight' => '4',
            'settings' => array(),
            'module' => 'taxonomy',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_countries',
        'entity_type' => 'node',
        'bundle' => 'ids_document',
        'deleted' => '0',
      ),
    'field_date_created' => array(
        'label' => 'Date created',
        'widget' => array(
          'weight' => '16',
          'type' => 'date_select',
          'module' => 'date',
          'active' => 1,
          'settings' => array(
            'input_format' => 'm/d/Y - H:i:s',
            'input_format_custom' => '',
            'year_range' => '-3:+3',
            'increment' => '15',
            'label_position' => 'above',
            'text_parts' => array(),
          ),
        ),
        'settings' => array(
          'default_value' => 'now',
          'default_value_code' => '',
          'default_value2' => 'same',
          'default_value_code2' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'date_default',
            'weight' => '12',
            'settings' => array(
              'format_type' => 'long',
              'multiple_number' => '',
              'multiple_from' => '',
              'multiple_to' => '',
              'fromto' => 'both',
            ),
            'module' => 'date',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'field_name' => 'field_date_created',
        'entity_type' => 'node',
        'bundle' => 'ids_document',
        'deleted' => '0',
      ),
    'field_date_updated' => array(
        'label' => 'Date updated',
        'widget' => array(
          'weight' => '17',
          'type' => 'date_select',
          'module' => 'date',
          'active' => 1,
          'settings' => array(
            'input_format' => 'm/d/Y - H:i:s',
            'input_format_custom' => '',
            'year_range' => '-3:+3',
            'increment' => '15',
            'label_position' => 'above',
            'text_parts' => array(),
          ),
        ),
        'settings' => array(
          'default_value' => 'now',
          'default_value_code' => '',
          'default_value2' => 'same',
          'default_value_code2' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'date_default',
            'weight' => '13',
            'settings' => array(
              'format_type' => 'long',
              'multiple_number' => '',
              'multiple_from' => '',
              'multiple_to' => '',
              'fromto' => 'both',
            ),
            'module' => 'date',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'field_name' => 'field_date_updated',
        'entity_type' => 'node',
        'bundle' => 'ids_document',
        'deleted' => '0',
      ),
    'field_external_urls' => array(
      'label' => 'External URLs',
      'widget' => array(
        'weight' => '24',
        'type' => 'text_textfield',
        'module' => 'text',
        'active' => 1,
        'settings' => array(
          'size' => '60',
        ),
      ),
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'display' => array(
        'default' => array(
          'label' => 'above',
          'type' => 'text_default',
          'settings' => array(),
          'module' => 'text',
          'weight' => 22,
        ),
        'teaser' => array(
          'type' => 'hidden',
          'label' => 'above',
          'settings' => array(),
          'weight' => 0,
        ),
      ),
      'required' => 0,
      'description' => '',
      'default_value' => NULL,
      'field_name' => 'field_external_urls',
      'entity_type' => 'node',
      'bundle' => 'ids_document',
      'deleted' => '0',
    ),
    'field_language' => array(
        'label' => 'Language',
        'widget' => array(
          'weight' => '18',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'weight' => '15',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_language',
        'entity_type' => 'node',
        'bundle' => 'ids_document',
        'deleted' => '0',
      ),
    'field_licence_type' => array(
        'label' => 'Licence type',
        'widget' => array(
          'weight' => '19',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'weight' => '17',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_licence_type',
        'entity_type' => 'node',
        'bundle' => 'ids_document',
        'deleted' => '0',
      ),
    'field_metadata_url' => array(
        'default_value' => NULL,
        'description' => '',
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'weight' => '6',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'label' => 'above',
            'settings' => array(),
            'type' => 'hidden',
            'weight' => 0,
          ),
        ),
        'label' => 'Metadata URL',
        'required' => 0,
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'widget' => array(
          'active' => 1,
          'module' => 'text',
          'settings' => array(
            'size' => '60',
          ),
          'type' => 'text_textfield',
          'weight' => '10',
        ),
        'field_name' => 'field_metadata_url',
        'entity_type' => 'node',
        'bundle' => 'ids_document',
        'deleted' => '0',
      ),
    'field_name' => array(
        'label' => 'Name',
        'widget' => array(
          'weight' => '14',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'weight' => '10',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_name',
        'entity_type' => 'node',
        'bundle' => 'ids_document',
        'deleted' => '0',
      ),
    'field_object_id' => array(
        'default_value' => NULL,
        'description' => '',
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'weight' => '1',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'label' => 'above',
            'settings' => array(),
            'type' => 'hidden',
            'weight' => 0,
          ),
        ),
        'label' => 'Object ID',
        'required' => 0,
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'widget' => array(
          'active' => 1,
          'module' => 'text',
          'settings' => array(
            'size' => '60',
          ),
          'type' => 'text_textfield',
          'weight' => '8',
        ),
        'field_name' => 'field_object_id',
        'entity_type' => 'node',
        'bundle' => 'ids_document',
        'deleted' => '0',
      ),
    'field_object_type' => array(
        'default_value' => NULL,
        'description' => '',
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'weight' => '5',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'label' => 'above',
            'settings' => array(),
            'type' => 'hidden',
            'weight' => 0,
          ),
        ),
        'label' => 'Object Type',
        'required' => 0,
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'widget' => array(
          'active' => 1,
          'module' => 'text',
          'settings' => array(
            'size' => '60',
          ),
          'type' => 'text_textfield',
          'weight' => '9',
        ),
        'field_name' => 'field_object_type',
        'entity_type' => 'node',
        'bundle' => 'ids_document',
        'deleted' => '0',
      ),
    'field_publication_date' => array(
        'label' => 'Publication date',
        'widget' => array(
          'weight' => '2',
          'type' => 'date_select',
          'module' => 'date',
          'active' => 1,
          'settings' => array(
            'input_format' => 'm/d/Y - H:i:s',
            'input_format_custom' => '',
            'year_range' => '-3:+3',
            'increment' => '15',
            'label_position' => 'above',
            'text_parts' => array(),
          ),
        ),
        'settings' => array(
          'default_value' => 'now',
          'default_value_code' => '',
          'default_value2' => 'same',
          'default_value_code2' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'date_default',
            'weight' => '16',
            'settings' => array(
              'format_type' => 'long',
              'multiple_number' => '',
              'multiple_from' => '',
              'multiple_to' => '',
              'fromto' => 'both',
            ),
            'module' => 'date',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'field_name' => 'field_publication_date',
        'entity_type' => 'node',
        'bundle' => 'ids_document',
        'deleted' => '0',
      ),
    'field_publisher' => array(
      'label' => 'Publisher',
      'widget' => array(
        'weight' => '25',
        'type' => 'text_textfield',
        'module' => 'text',
        'active' => 1,
        'settings' => array(
          'size' => '60',
        ),
      ),
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'display' => array(
        'default' => array(
          'label' => 'above',
          'type' => 'text_default',
          'settings' => array(),
          'module' => 'text',
          'weight' => 23,
        ),
        'teaser' => array(
          'type' => 'hidden',
          'label' => 'above',
          'settings' => array(),
          'weight' => 0,
        ),
      ),
      'required' => 0,
      'description' => '',
      'default_value' => NULL,
      'field_name' => 'field_publisher',
      'entity_type' => 'node',
      'bundle' => 'ids_document',
      'deleted' => '0',
      ),
    'field_publisher_id' => array(
      'label' => 'Publisher ID',
      'widget' => array(
        'weight' => '26',
        'type' => 'text_textfield',
        'module' => 'text',
        'active' => 1,
        'settings' => array(
          'size' => '60',
        ),
      ),
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'display' => array(
        'default' => array(
          'label' => 'above',
          'type' => 'text_default',
          'settings' => array(),
          'module' => 'text',
          'weight' => 24,
        ),
        'teaser' => array(
          'type' => 'hidden',
          'label' => 'above',
          'settings' => array(),
          'weight' => 0,
        ),
      ),
      'required' => 0,
      'description' => '',
      'default_value' => NULL,
      'field_name' => 'field_publisher_id',
      'entity_type' => 'node',
      'bundle' => 'ids_document',
      'deleted' => '0',
    ),
    'field_regions' => array(
        'label' => 'Regions',
        'widget' => array(
          'weight' => '4',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 0,
          'settings' => array(
            'size' => 60,
            'autocomplete_path' => 'taxonomy/autocomplete',
          ),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'taxonomy_term_reference_link',
            'weight' => '3',
            'settings' => array(),
            'module' => 'taxonomy',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_regions',
        'entity_type' => 'node',
        'bundle' => 'ids_document',
        'deleted' => '0',
      ),
    'field_site' => array(
        'label' => 'Site',
        'widget' => array(
          'weight' => '11',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'weight' => '7',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_site',
        'entity_type' => 'node',
        'bundle' => 'ids_document',
        'deleted' => '0',
      ),
    'field_tags' => array(
        'label' => 'Keywords',
        'widget' => array(
          'weight' => '7',
          'type' => 'taxonomy_autocomplete',
          'module' => 'taxonomy',
          'active' => 0,
          'settings' => array(
            'size' => 60,
            'autocomplete_path' => 'taxonomy/autocomplete',
          ),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'taxonomy_term_reference_link',
            'weight' => '18',
            'settings' => array(),
            'module' => 'taxonomy',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_tags',
        'entity_type' => 'node',
        'bundle' => 'ids_document',
        'deleted' => '0',
      ),
    'field_themes' => array(
        'label' => 'Themes',
        'widget' => array(
          'weight' => '3',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 0,
          'settings' => array(
            'size' => 60,
            'autocomplete_path' => 'taxonomy/autocomplete',
          ),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'taxonomy_term_reference_link',
            'weight' => '2',
            'settings' => array(),
            'module' => 'taxonomy',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_themes',
        'entity_type' => 'node',
        'bundle' => 'ids_document',
        'deleted' => '0',
      ),
    'field_subjects' => array(
        'label' => 'Subjects',
        'widget' => array(
          'weight' => '3',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 0,
          'settings' => array(
            'size' => 60,
            'autocomplete_path' => 'taxonomy/autocomplete',
          ),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'taxonomy_term_reference_link',
            'weight' => '2',
            'settings' => array(),
            'module' => 'taxonomy',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_subjects',
        'entity_type' => 'node',
        'bundle' => 'ids_document',
        'deleted' => '0',
      ),
    'field_timestamp' => array(
        'label' => 'Timestamp',
        'widget' => array(
          'weight' => '13',
          'type' => 'date_select',
          'module' => 'date',
          'active' => 1,
          'settings' => array(
            'input_format' => 'm/d/Y - H:i:s',
            'input_format_custom' => '',
            'year_range' => '-3:+3',
            'increment' => '15',
            'label_position' => 'above',
            'text_parts' => array(),
          ),
        ),
        'settings' => array(
          'default_value' => 'now',
          'default_value_code' => '',
          'default_value2' => 'same',
          'default_value_code2' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'date_default',
            'weight' => '9',
            'settings' => array(
              'format_type' => 'long',
              'multiple_number' => '',
              'multiple_from' => '',
              'multiple_to' => '',
              'fromto' => 'both',
            ),
            'module' => 'date',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'field_name' => 'field_timestamp',
        'entity_type' => 'node',
        'bundle' => 'ids_document',
        'deleted' => '0',
      ),
    'field_website_url' => array(
        'label' => 'Website URL',
        'widget' => array(
          'weight' => '12',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'weight' => '8',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_website_url',
        'entity_type' => 'node',
        'bundle' => 'ids_document',
        'deleted' => '0',
      ),
  );

  $instances['organisations'] = array(
    'body' => array(
        'label' => 'Description',
        'widget' => array(
          'weight' => '6',
          'type' => 'text_textarea_with_summary',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'rows' => '20',
            'summary_rows' => 5,
          ),
        ),
        'settings' => array(
          'text_processing' => '1',
          'display_summary' => 0,
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'weight' => '14',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'body',
        'entity_type' => 'node',
        'bundle' => 'ids_organisation',
        'deleted' => '0',
      ),
    'field_acronym' => array(
        'label' => 'Acronym',
        'widget' => array(
          'weight' => '18',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'settings' => array(),
            'module' => 'text',
            'weight' => 19,
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_acronym',
        'entity_type' => 'node',
        'bundle' => 'ids_organisation',
        'deleted' => '0',
      ),
    'field_alternative_acronym' => array(
        'label' => 'Alternative acronym',
        'widget' => array(
          'weight' => '19',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'settings' => array(),
            'module' => 'text',
            'weight' => 20,
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_alternative_acronym',
        'entity_type' => 'node',
        'bundle' => 'ids_organisation',
        'deleted' => '0',
      ),
    'field_alternative_name' => array(
        'label' => 'Alternative name',
        'widget' => array(
          'weight' => '20',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'settings' => array(),
            'module' => 'text',
            'weight' => 21,
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_alternative_name',
        'entity_type' => 'node',
        'bundle' => 'ids_organisation',
        'deleted' => '0',
      ),
    'field_asset_id' => array(
        'label' => 'Asset ID',
        'widget' => array(
          'weight' => '15',
          'type' => 'number',
          'module' => 'number',
          'active' => 0,
          'settings' => array(),
        ),
        'settings' => array(
          'min' => '',
          'max' => '',
          'prefix' => '',
          'suffix' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'number_integer',
            'weight' => '11',
            'settings' => array(
              'thousand_separator' => ' ',
              'decimal_separator' => '.',
              'scale' => 0,
              'prefix_suffix' => TRUE,
            ),
            'module' => 'number',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_asset_id',
        'entity_type' => 'node',
        'bundle' => 'ids_organisation',
        'deleted' => '0',
      ),
    'field_countries' => array(
        'label' => 'Countries',
        'widget' => array(
          'weight' => '5',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'taxonomy_term_reference_link',
            'weight' => '4',
            'settings' => array(),
            'module' => 'taxonomy',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_countries',
        'entity_type' => 'node',
        'bundle' => 'ids_organisation',
        'deleted' => '0',
      ),
    'field_date_created' => array(
        'label' => 'Date created',
        'widget' => array(
          'weight' => '16',
          'type' => 'date_select',
          'module' => 'date',
          'active' => 1,
          'settings' => array(
            'input_format' => 'm/d/Y - H:i:s',
            'input_format_custom' => '',
            'year_range' => '-3:+3',
            'increment' => '15',
            'label_position' => 'above',
            'text_parts' => array(),
          ),
        ),
        'settings' => array(
          'default_value' => 'now',
          'default_value_code' => '',
          'default_value2' => 'same',
          'default_value_code2' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'date_default',
            'weight' => '12',
            'settings' => array(
              'format_type' => 'long',
              'multiple_number' => '',
              'multiple_from' => '',
              'multiple_to' => '',
              'fromto' => 'both',
            ),
            'module' => 'date',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'field_name' => 'field_date_created',
        'entity_type' => 'node',
        'bundle' => 'ids_organisation',
        'deleted' => '0',
      ),
    'field_date_updated' => array(
        'label' => 'Date updated',
        'widget' => array(
          'weight' => '17',
          'type' => 'date_select',
          'module' => 'date',
          'active' => 1,
          'settings' => array(
            'input_format' => 'm/d/Y - H:i:s',
            'input_format_custom' => '',
            'year_range' => '-3:+3',
            'increment' => '15',
            'label_position' => 'above',
            'text_parts' => array(),
          ),
        ),
        'settings' => array(
          'default_value' => 'now',
          'default_value_code' => '',
          'default_value2' => 'same',
          'default_value_code2' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'date_default',
            'weight' => '13',
            'settings' => array(
              'format_type' => 'long',
              'multiple_number' => '',
              'multiple_from' => '',
              'multiple_to' => '',
              'fromto' => 'both',
            ),
            'module' => 'date',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'field_name' => 'field_date_updated',
        'entity_type' => 'node',
        'bundle' => 'ids_organisation',
        'deleted' => '0',
      ),
    'field_location_country' => array(
        'label' => 'Location country',
        'widget' => array(
          'weight' => '23',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'settings' => array(),
            'module' => 'text',
            'weight' => 24,
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_location_country',
        'entity_type' => 'node',
        'bundle' => 'ids_organisation',
        'deleted' => '0',
      ),
    'field_metadata_url' => array(
        'default_value' => NULL,
        'description' => '',
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'weight' => '6',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'label' => 'above',
            'settings' => array(),
            'type' => 'hidden',
            'weight' => 0,
          ),
        ),
        'label' => 'Metadata URL',
        'required' => 0,
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'widget' => array(
          'active' => 1,
          'module' => 'text',
          'settings' => array(
            'size' => '60',
          ),
          'type' => 'text_textfield',
          'weight' => '10',
        ),
        'field_name' => 'field_metadata_url',
        'entity_type' => 'node',
        'bundle' => 'ids_organisation',
        'deleted' => '0',
      ),
    'field_name' => array(
        'label' => 'Name',
        'widget' => array(
          'weight' => '14',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'weight' => '10',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_name',
        'entity_type' => 'node',
        'bundle' => 'ids_organisation',
        'deleted' => '0',
      ),
    'field_object_id' => array(
        'default_value' => NULL,
        'description' => '',
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'weight' => '1',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'label' => 'above',
            'settings' => array(),
            'type' => 'hidden',
            'weight' => 0,
          ),
        ),
        'label' => 'Object ID',
        'required' => 0,
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'widget' => array(
          'active' => 1,
          'module' => 'text',
          'settings' => array(
            'size' => '60',
          ),
          'type' => 'text_textfield',
          'weight' => '8',
        ),
        'field_name' => 'field_object_id',
        'entity_type' => 'node',
        'bundle' => 'ids_organisation',
        'deleted' => '0',
      ),
    'field_object_type' => array(
        'default_value' => NULL,
        'description' => '',
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'weight' => '5',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'label' => 'above',
            'settings' => array(),
            'type' => 'hidden',
            'weight' => 0,
          ),
        ),
        'label' => 'Object Type',
        'required' => 0,
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'widget' => array(
          'active' => 1,
          'module' => 'text',
          'settings' => array(
            'size' => '60',
          ),
          'type' => 'text_textfield',
          'weight' => '9',
        ),
        'field_name' => 'field_object_type',
        'entity_type' => 'node',
        'bundle' => 'ids_organisation',
        'deleted' => '0',
      ),
    'field_organisation_type' => array(
        'label' => 'Organisation type',
        'widget' => array(
          'weight' => '21',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'settings' => array(),
            'module' => 'text',
            'weight' => 22,
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_organisation_type',
        'entity_type' => 'node',
        'bundle' => 'ids_organisation',
        'deleted' => '0',
      ),
    'field_organisation_url' => array(
        'label' => 'Organisation URL',
        'widget' => array(
          'weight' => '22',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'settings' => array(),
            'module' => 'text',
            'weight' => 23,
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_organisation_url',
        'entity_type' => 'node',
        'bundle' => 'ids_organisation',
        'deleted' => '0',
      ),
    'field_regions' => array(
        'label' => 'Regions',
        'widget' => array(
          'weight' => '4',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 0,
          'settings' => array(
            'size' => 60,
            'autocomplete_path' => 'taxonomy/autocomplete',
          ),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'taxonomy_term_reference_link',
            'weight' => '3',
            'settings' => array(),
            'module' => 'taxonomy',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_regions',
        'entity_type' => 'node',
        'bundle' => 'ids_organisation',
        'deleted' => '0',
      ),
    'field_site' => array(
        'label' => 'Site',
        'widget' => array(
          'weight' => '11',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'weight' => '7',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_site',
        'entity_type' => 'node',
        'bundle' => 'ids_organisation',
        'deleted' => '0',
      ),
    'field_tags' => array(
        'label' => 'Keywords',
        'widget' => array(
          'weight' => '7',
          'type' => 'taxonomy_autocomplete',
          'module' => 'taxonomy',
          'active' => 0,
          'settings' => array(
            'size' => 60,
            'autocomplete_path' => 'taxonomy/autocomplete',
          ),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'taxonomy_term_reference_link',
            'weight' => '18',
            'settings' => array(),
            'module' => 'taxonomy',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_tags',
        'entity_type' => 'node',
        'bundle' => 'ids_organisation',
        'deleted' => '0',
      ),
    'field_themes' => array(
        'label' => 'Themes',
        'widget' => array(
          'weight' => '3',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 0,
          'settings' => array(
            'size' => 60,
            'autocomplete_path' => 'taxonomy/autocomplete',
          ),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'taxonomy_term_reference_link',
            'weight' => '2',
            'settings' => array(),
            'module' => 'taxonomy',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_themes',
        'entity_type' => 'node',
        'bundle' => 'ids_organisation',
        'deleted' => '0',
      ),
    'field_subjects' => array(
        'label' => 'Subjects',
        'widget' => array(
          'weight' => '3',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 0,
          'settings' => array(
            'size' => 60,
            'autocomplete_path' => 'taxonomy/autocomplete',
          ),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'taxonomy_term_reference_link',
            'weight' => '2',
            'settings' => array(),
            'module' => 'taxonomy',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_subjects',
        'entity_type' => 'node',
        'bundle' => 'ids_organisation',
        'deleted' => '0',
      ),
    'field_timestamp' => array(
        'label' => 'Timestamp',
        'widget' => array(
          'weight' => '13',
          'type' => 'date_select',
          'module' => 'date',
          'active' => 1,
          'settings' => array(
            'input_format' => 'm/d/Y - H:i:s',
            'input_format_custom' => '',
            'year_range' => '-3:+3',
            'increment' => '15',
            'label_position' => 'above',
            'text_parts' => array(),
          ),
        ),
        'settings' => array(
          'default_value' => 'now',
          'default_value_code' => '',
          'default_value2' => 'same',
          'default_value_code2' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'date_default',
            'weight' => '9',
            'settings' => array(
              'format_type' => 'long',
              'multiple_number' => '',
              'multiple_from' => '',
              'multiple_to' => '',
              'fromto' => 'both',
            ),
            'module' => 'date',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'field_name' => 'field_timestamp',
        'entity_type' => 'node',
        'bundle' => 'ids_organisation',
        'deleted' => '0',
      ),
    'field_website_url' => array(
        'label' => 'Website URL',
        'widget' => array(
          'weight' => '12',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'weight' => '8',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_website_url',
        'entity_type' => 'node',
        'bundle' => 'ids_organisation',
        'deleted' => '0',
      ),
  );

  $instances['regions'] = array(
    'field_archived' => array(
        'label' => 'Archived',
        'widget' => array(
          'weight' => '11',
          'type' => 'options_onoff',
          'module' => 'options',
          'active' => 1,
          'settings' => array(
            'display_label' => 1,
          ),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'list_key',
            'weight' => '6',
            'settings' => array(),
            'module' => 'list',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'list_key',
            'weight' => '6',
            'settings' => array(),
            'module' => 'list',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => array(
          0 => array(
            'value' => 0,
          ),
        ),
        'field_name' => 'field_archived',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_regions',
        'deleted' => '0',
      ),
    'field_category_id' => array(
        'label' => 'Category ID',
        'widget' => array(
          'weight' => '1',
          'type' => 'number',
          'module' => 'number',
          'active' => 0,
          'settings' => array(),
        ),
        'settings' => array(
          'min' => '',
          'max' => '',
          'prefix' => '',
          'suffix' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'number_integer',
            'weight' => '9',
            'settings' => array(
              'thousand_separator' => ' ',
              'decimal_separator' => '.',
              'scale' => 0,
              'prefix_suffix' => TRUE,
            ),
            'module' => 'number',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'number_integer',
            'weight' => '9',
            'settings' => array(
              'thousand_separator' => ' ',
              'decimal_separator' => '.',
              'scale' => 0,
              'prefix_suffix' => TRUE,
            ),
            'module' => 'number',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_category_id',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_regions',
        'deleted' => '0',
      ),
    'field_metadata_url' => array(
        'label' => 'Metadata URL',
        'widget' => array(
          'weight' => '8',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '2',
            'settings' => array(),
            'module' => 'text',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '2',
            'settings' => array(),
            'module' => 'text',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_metadata_url',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_regions',
        'deleted' => '0',
      ),
    'field_object_id' => array(
        'label' => 'Object ID',
        'widget' => array(
          'weight' => '4',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '0',
            'settings' => array(),
            'module' => 'text',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '0',
            'settings' => array(),
            'module' => 'text',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_object_id',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_regions',
        'deleted' => '0',
      ),
    'field_object_type' => array(
        'label' => 'Object Type',
        'widget' => array(
          'weight' => '5',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '1',
            'settings' => array(),
            'module' => 'text',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '1',
            'settings' => array(),
            'module' => 'text',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_object_type',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_regions',
        'deleted' => '0',
      ),
    'field_parent_id' => array(
        'label' => 'Parent ID',
        'widget' => array(
          'weight' => '2',
          'type' => 'number',
          'module' => 'number',
          'active' => 0,
          'settings' => array(),
        ),
        'settings' => array(
          'min' => '',
          'max' => '',
          'prefix' => '',
          'suffix' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'number_integer',
            'weight' => '10',
            'settings' => array(
              'thousand_separator' => ' ',
              'decimal_separator' => '.',
              'scale' => 0,
              'prefix_suffix' => TRUE,
            ),
            'module' => 'number',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'number_integer',
            'weight' => '10',
            'settings' => array(
              'thousand_separator' => ' ',
              'decimal_separator' => '.',
              'scale' => 0,
              'prefix_suffix' => TRUE,
            ),
            'module' => 'number',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_parent_id',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_regions',
        'deleted' => '0',
      ),
    'field_site' => array(
        'label' => 'Site',
        'widget' => array(
          'weight' => '7',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '3',
            'settings' => array(),
            'module' => 'text',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '3',
            'settings' => array(),
            'module' => 'text',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => array(
          0 => array(
            'value' => 'eldis',
          ),
        ),
        'field_name' => 'field_site',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_regions',
        'deleted' => '0',
      ),
    'field_superparent_id' => array(
        'label' => 'Superparent ID',
        'widget' => array(
          'weight' => '3',
          'type' => 'number',
          'module' => 'number',
          'active' => 0,
          'settings' => array(),
        ),
        'settings' => array(
          'min' => '',
          'max' => '',
          'prefix' => '',
          'suffix' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'number_integer',
            'weight' => '8',
            'settings' => array(
              'thousand_separator' => ' ',
              'decimal_separator' => '.',
              'scale' => 0,
              'prefix_suffix' => TRUE,
            ),
            'module' => 'number',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'number_integer',
            'weight' => '8',
            'settings' => array(
              'thousand_separator' => ' ',
              'decimal_separator' => '.',
              'scale' => 0,
              'prefix_suffix' => TRUE,
            ),
            'module' => 'number',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_superparent_id',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_regions',
        'deleted' => '0',
      ),
    'field_timestamp' => array(
        'label' => 'Timestamp',
        'widget' => array(
          'weight' => '10',
          'type' => 'date_select',
          'module' => 'date',
          'active' => 1,
          'settings' => array(
            'input_format' => 'm/d/Y - H:i:s',
            'input_format_custom' => '',
            'year_range' => '-3:+3',
            'increment' => '15',
            'label_position' => 'above',
            'text_parts' => array(),
          ),
        ),
        'settings' => array(
          'default_value' => 'now',
          'default_value_code' => '',
          'default_value2' => 'same',
          'default_value_code2' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'date_default',
            'weight' => '5',
            'settings' => array(
              'format_type' => 'long',
              'multiple_number' => '',
              'multiple_from' => '',
              'multiple_to' => '',
              'fromto' => 'both',
            ),
            'module' => 'date',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'date_default',
            'weight' => '5',
            'settings' => array(
              'format_type' => 'long',
              'multiple_number' => '',
              'multiple_from' => '',
              'multiple_to' => '',
              'fromto' => 'both',
            ),
            'module' => 'date',
          ),
        ),
        'required' => 0,
        'description' => '',
        'field_name' => 'field_timestamp',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_regions',
        'deleted' => '0',
      ),
    'field_website_url' => array(
        'label' => 'Website URL',
        'widget' => array(
          'weight' => '9',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '4',
            'settings' => array(),
            'module' => 'text',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '4',
            'settings' => array(),
            'module' => 'text',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_website_url',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_regions',
        'deleted' => '0',
      ),
  );

  $instances['themes'] = array(
    'field_archived' => array(
        'label' => 'Archived',
        'widget' => array(
          'weight' => '11',
          'type' => 'options_onoff',
          'module' => 'options',
          'active' => 1,
          'settings' => array(
            'display_label' => 1,
          ),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'list_key',
            'weight' => '6',
            'settings' => array(),
            'module' => 'list',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'list_key',
            'weight' => '6',
            'settings' => array(),
            'module' => 'list',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => array(
          0 => array(
            'value' => 0,
          ),
        ),
        'field_name' => 'field_archived',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_themes',
        'deleted' => '0',
      ),
    'field_category_id' => array(
        'label' => 'Category ID',
        'widget' => array(
          'weight' => '1',
          'type' => 'number',
          'module' => 'number',
          'active' => 0,
          'settings' => array(),
        ),
        'settings' => array(
          'min' => '',
          'max' => '',
          'prefix' => '',
          'suffix' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'number_integer',
            'weight' => '9',
            'settings' => array(
              'thousand_separator' => ' ',
              'decimal_separator' => '.',
              'scale' => 0,
              'prefix_suffix' => TRUE,
            ),
            'module' => 'number',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'number_integer',
            'weight' => '9',
            'settings' => array(
              'thousand_separator' => ' ',
              'decimal_separator' => '.',
              'scale' => 0,
              'prefix_suffix' => TRUE,
            ),
            'module' => 'number',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_category_id',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_themes',
        'deleted' => '0',
      ),
    'field_metadata_url' => array(
        'label' => 'Metadata URL',
        'widget' => array(
          'weight' => '8',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '2',
            'settings' => array(),
            'module' => 'text',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '2',
            'settings' => array(),
            'module' => 'text',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_metadata_url',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_themes',
        'deleted' => '0',
      ),
    'field_object_id' => array(
        'label' => 'Object ID',
        'widget' => array(
          'weight' => '4',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '0',
            'settings' => array(),
            'module' => 'text',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '0',
            'settings' => array(),
            'module' => 'text',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_object_id',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_themes',
        'deleted' => '0',
      ),
    'field_object_type' => array(
        'label' => 'Object Type',
        'widget' => array(
          'weight' => '5',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '1',
            'settings' => array(),
            'module' => 'text',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '1',
            'settings' => array(),
            'module' => 'text',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_object_type',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_themes',
        'deleted' => '0',
      ),
    'field_parent_id' => array(
        'label' => 'Parent ID',
        'widget' => array(
          'weight' => '2',
          'type' => 'number',
          'module' => 'number',
          'active' => 0,
          'settings' => array(),
        ),
        'settings' => array(
          'min' => '',
          'max' => '',
          'prefix' => '',
          'suffix' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'number_integer',
            'weight' => '10',
            'settings' => array(
              'thousand_separator' => ' ',
              'decimal_separator' => '.',
              'scale' => 0,
              'prefix_suffix' => TRUE,
            ),
            'module' => 'number',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'number_integer',
            'weight' => '10',
            'settings' => array(
              'thousand_separator' => ' ',
              'decimal_separator' => '.',
              'scale' => 0,
              'prefix_suffix' => TRUE,
            ),
            'module' => 'number',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_parent_id',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_themes',
        'deleted' => '0',
      ),
    'field_site' => array(
        'label' => 'Site',
        'widget' => array(
          'weight' => '7',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '3',
            'settings' => array(),
            'module' => 'text',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '3',
            'settings' => array(),
            'module' => 'text',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => array(
          0 => array(
            'value' => 'eldis',
          ),
        ),
        'field_name' => 'field_site',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_themes',
        'deleted' => '0',
      ),
    'field_superparent_id' => array(
        'label' => 'Superparent ID',
        'widget' => array(
          'weight' => '3',
          'type' => 'number',
          'module' => 'number',
          'active' => 0,
          'settings' => array(),
        ),
        'settings' => array(
          'min' => '',
          'max' => '',
          'prefix' => '',
          'suffix' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'number_integer',
            'weight' => '8',
            'settings' => array(
              'thousand_separator' => ' ',
              'decimal_separator' => '.',
              'scale' => 0,
              'prefix_suffix' => TRUE,
            ),
            'module' => 'number',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'number_integer',
            'weight' => '8',
            'settings' => array(
              'thousand_separator' => ' ',
              'decimal_separator' => '.',
              'scale' => 0,
              'prefix_suffix' => TRUE,
            ),
            'module' => 'number',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_superparent_id',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_themes',
        'deleted' => '0',
      ),
    'field_timestamp' => array(
        'label' => 'Timestamp',
        'widget' => array(
          'weight' => '10',
          'type' => 'date_select',
          'module' => 'date',
          'active' => 1,
          'settings' => array(
            'input_format' => 'm/d/Y - H:i:s',
            'input_format_custom' => '',
            'year_range' => '-3:+3',
            'increment' => '15',
            'label_position' => 'above',
            'text_parts' => array(),
          ),
        ),
        'settings' => array(
          'default_value' => 'now',
          'default_value_code' => '',
          'default_value2' => 'same',
          'default_value_code2' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'date_default',
            'weight' => '5',
            'settings' => array(
              'format_type' => 'long',
              'multiple_number' => '',
              'multiple_from' => '',
              'multiple_to' => '',
              'fromto' => 'both',
            ),
            'module' => 'date',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'date_default',
            'weight' => '5',
            'settings' => array(
              'format_type' => 'long',
              'multiple_number' => '',
              'multiple_from' => '',
              'multiple_to' => '',
              'fromto' => 'both',
            ),
            'module' => 'date',
          ),
        ),
        'required' => 0,
        'description' => '',
        'field_name' => 'field_timestamp',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_themes',
        'deleted' => '0',
      ),
    'field_website_url' => array(
        'label' => 'Website URL',
        'widget' => array(
          'weight' => '9',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '4',
            'settings' => array(),
            'module' => 'text',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '4',
            'settings' => array(),
            'module' => 'text',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_website_url',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_themes',
        'deleted' => '0',
      ),
  );

  $instances['subjects'] = array(
    'field_archived' => array(
        'label' => 'Archived',
        'widget' => array(
          'weight' => '11',
          'type' => 'options_onoff',
          'module' => 'options',
          'active' => 1,
          'settings' => array(
            'display_label' => 1,
          ),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'list_key',
            'weight' => '6',
            'settings' => array(),
            'module' => 'list',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'list_key',
            'weight' => '6',
            'settings' => array(),
            'module' => 'list',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => array(
          0 => array(
            'value' => 0,
          ),
        ),
        'field_name' => 'field_archived',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_subjects',
        'deleted' => '0',
      ),
    'field_category_id' => array(
        'label' => 'Category ID',
        'widget' => array(
          'weight' => '1',
          'type' => 'number',
          'module' => 'number',
          'active' => 0,
          'settings' => array(),
        ),
        'settings' => array(
          'min' => '',
          'max' => '',
          'prefix' => '',
          'suffix' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'number_integer',
            'weight' => '9',
            'settings' => array(
              'thousand_separator' => ' ',
              'decimal_separator' => '.',
              'scale' => 0,
              'prefix_suffix' => TRUE,
            ),
            'module' => 'number',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'number_integer',
            'weight' => '9',
            'settings' => array(
              'thousand_separator' => ' ',
              'decimal_separator' => '.',
              'scale' => 0,
              'prefix_suffix' => TRUE,
            ),
            'module' => 'number',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_category_id',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_subjects',
        'deleted' => '0',
      ),
    'field_metadata_url' => array(
        'label' => 'Metadata URL',
        'widget' => array(
          'weight' => '8',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '2',
            'settings' => array(),
            'module' => 'text',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '2',
            'settings' => array(),
            'module' => 'text',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_metadata_url',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_subjects',
        'deleted' => '0',
      ),
    'field_object_id' => array(
        'label' => 'Object ID',
        'widget' => array(
          'weight' => '4',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '0',
            'settings' => array(),
            'module' => 'text',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '0',
            'settings' => array(),
            'module' => 'text',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_object_id',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_subjects',
        'deleted' => '0',
      ),
    'field_object_type' => array(
        'label' => 'Object Type',
        'widget' => array(
          'weight' => '5',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '1',
            'settings' => array(),
            'module' => 'text',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '1',
            'settings' => array(),
            'module' => 'text',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_object_type',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_subjects',
        'deleted' => '0',
      ),
    'field_parent_id' => array(
        'label' => 'Parent ID',
        'widget' => array(
          'weight' => '2',
          'type' => 'number',
          'module' => 'number',
          'active' => 0,
          'settings' => array(),
        ),
        'settings' => array(
          'min' => '',
          'max' => '',
          'prefix' => '',
          'suffix' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'number_integer',
            'weight' => '10',
            'settings' => array(
              'thousand_separator' => ' ',
              'decimal_separator' => '.',
              'scale' => 0,
              'prefix_suffix' => TRUE,
            ),
            'module' => 'number',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'number_integer',
            'weight' => '10',
            'settings' => array(
              'thousand_separator' => ' ',
              'decimal_separator' => '.',
              'scale' => 0,
              'prefix_suffix' => TRUE,
            ),
            'module' => 'number',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_parent_id',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_subjects',
        'deleted' => '0',
      ),
    'field_site' => array(
        'label' => 'Site',
        'widget' => array(
          'weight' => '7',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '3',
            'settings' => array(),
            'module' => 'text',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '3',
            'settings' => array(),
            'module' => 'text',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => array(
          0 => array(
            'value' => 'eldis',
          ),
        ),
        'field_name' => 'field_site',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_subjects',
        'deleted' => '0',
      ),
    'field_superparent_id' => array(
        'label' => 'Superparent ID',
        'widget' => array(
          'weight' => '3',
          'type' => 'number',
          'module' => 'number',
          'active' => 0,
          'settings' => array(),
        ),
        'settings' => array(
          'min' => '',
          'max' => '',
          'prefix' => '',
          'suffix' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'number_integer',
            'weight' => '8',
            'settings' => array(
              'thousand_separator' => ' ',
              'decimal_separator' => '.',
              'scale' => 0,
              'prefix_suffix' => TRUE,
            ),
            'module' => 'number',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'number_integer',
            'weight' => '8',
            'settings' => array(
              'thousand_separator' => ' ',
              'decimal_separator' => '.',
              'scale' => 0,
              'prefix_suffix' => TRUE,
            ),
            'module' => 'number',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_superparent_id',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_subjects',
        'deleted' => '0',
      ),
    'field_timestamp' => array(
        'label' => 'Timestamp',
        'widget' => array(
          'weight' => '10',
          'type' => 'date_select',
          'module' => 'date',
          'active' => 1,
          'settings' => array(
            'input_format' => 'm/d/Y - H:i:s',
            'input_format_custom' => '',
            'year_range' => '-3:+3',
            'increment' => '15',
            'label_position' => 'above',
            'text_parts' => array(),
          ),
        ),
        'settings' => array(
          'default_value' => 'now',
          'default_value_code' => '',
          'default_value2' => 'same',
          'default_value_code2' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'date_default',
            'weight' => '5',
            'settings' => array(
              'format_type' => 'long',
              'multiple_number' => '',
              'multiple_from' => '',
              'multiple_to' => '',
              'fromto' => 'both',
            ),
            'module' => 'date',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'date_default',
            'weight' => '5',
            'settings' => array(
              'format_type' => 'long',
              'multiple_number' => '',
              'multiple_from' => '',
              'multiple_to' => '',
              'fromto' => 'both',
            ),
            'module' => 'date',
          ),
        ),
        'required' => 0,
        'description' => '',
        'field_name' => 'field_timestamp',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_subjects',
        'deleted' => '0',
      ),
    'field_website_url' => array(
        'label' => 'Website URL',
        'widget' => array(
          'weight' => '9',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '4',
            'settings' => array(),
            'module' => 'text',
          ),
          'full' => array(
            'label' => 'inline',
            'type' => 'text_default',
            'weight' => '4',
            'settings' => array(),
            'module' => 'text',
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_website_url',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_subjects',
        'deleted' => '0',
      ),
  );

  $instances['countries'] = array(
    'field_alternative_name' => array(
        'label' => 'Alternative name',
        'widget' => array(
          'weight' => '16',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'settings' => array(),
            'module' => 'text',
            'weight' => 7,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_alternative_name',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_countries',
        'deleted' => '0',
    ),
    'field_asset_id' => array(
        'label' => 'Asset ID',
        'widget' => array(
          'weight' => '18',
          'type' => 'number',
          'module' => 'number',
          'active' => 0,
          'settings' => array(),
        ),
        'settings' => array(
          'min' => '',
          'max' => '',
          'prefix' => '',
          'suffix' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'number_integer',
            'settings' => array(
              'thousand_separator' => ' ',
              'decimal_separator' => '.',
              'scale' => 0,
              'prefix_suffix' => TRUE,
            ),
            'module' => 'number',
            'weight' => 8,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_asset_id',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_countries',
        'deleted' => '0',
    ),
    'field_iso_number' => array(
        'label' => 'ISO number',
        'widget' => array(
          'weight' => '21',
          'type' => 'number',
          'module' => 'number',
          'active' => 0,
          'settings' => array(),
        ),
        'settings' => array(
          'min' => '',
          'max' => '',
          'prefix' => '',
          'suffix' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'number_integer',
            'settings' => array(
              'thousand_separator' => ' ',
              'decimal_separator' => '.',
              'scale' => 0,
              'prefix_suffix' => TRUE,
            ),
            'module' => 'number',
            'weight' => 10,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_iso_number',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_countries',
        'deleted' => '0',
    ),
    'field_iso_three_code' => array(
        'label' => 'ISO three-letter code',
        'widget' => array(
          'weight' => '22',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '3',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'settings' => array(),
            'module' => 'text',
            'weight' => 11,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_iso_three_code',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_countries',
        'deleted' => '0',
    ),
    'field_iso_two_code' => array(
        'label' => 'ISO two-letter code',
        'widget' => array(
          'weight' => '23',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '2',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'settings' => array(),
            'module' => 'text',
            'weight' => 12,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_iso_two_code',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_countries',
        'deleted' => '0',
    ),
    'field_metadata_url' => array(
        'label' => 'Metadata URL',
        'widget' => array(
          'weight' => '8',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'settings' => array(),
            'module' => 'text',
            'weight' => 3,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_metadata_url',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_countries',
        'deleted' => '0',
    ),
    'field_object_id' => array(
        'label' => 'Object ID',
        'widget' => array(
          'weight' => '2',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'settings' => array(),
            'module' => 'text',
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_object_id',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_countries',
        'deleted' => '0',
    ),
    'field_object_type' => array(
        'label' => 'Object Type',
        'widget' => array(
          'weight' => '4',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'settings' => array(),
            'module' => 'text',
            'weight' => 1,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_object_type',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_countries',
        'deleted' => '0',
    ),
    'field_regions' => array(
        'label' => 'Regions',
        'widget' => array(
          'weight' => '20',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'taxonomy_term_reference_link',
            'settings' => array(),
            'module' => 'taxonomy',
            'weight' => 9,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_regions',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_countries',
        'deleted' => '0',
    ),
    'field_site' => array(
        'label' => 'Site',
        'widget' => array(
          'weight' => '6',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'settings' => array(),
            'module' => 'text',
            'weight' => 2,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_site',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_countries',
        'deleted' => '0',
    ),
    'field_timestamp' => array(
        'label' => 'Timestamp',
        'widget' => array(
          'weight' => '10',
          'type' => 'date_select',
          'module' => 'date',
          'active' => 1,
          'settings' => array(
            'input_format' => 'm/d/Y - H:i:s',
            'input_format_custom' => '',
            'year_range' => '-3:+3',
            'increment' => '15',
            'label_position' => 'above',
            'text_parts' => array(),
          ),
        ),
        'settings' => array(
          'default_value' => 'now',
          'default_value_code' => '',
          'default_value2' => 'same',
          'default_value_code2' => '',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'date_default',
            'settings' => array(
              'format_type' => 'long',
              'multiple_number' => '',
              'multiple_from' => '',
              'multiple_to' => '',
              'fromto' => 'both',
            ),
            'module' => 'date',
            'weight' => 4,
          ),
        ),
        'required' => 0,
        'description' => '',
        'field_name' => 'field_timestamp',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_countries',
        'deleted' => '0',
    ),
    'field_website_url' => array(
        'label' => 'Website URL',
        'widget' => array(
          'weight' => '12',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'settings' => array(),
            'module' => 'text',
            'weight' => 5,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_website_url',
        'entity_type' => 'taxonomy_term',
        'bundle' => 'ids_countries',
        'deleted' => '0',
    ),
  );

  return $instances;

}




