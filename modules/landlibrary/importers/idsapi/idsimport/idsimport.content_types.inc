<?php
/**
 * @file
 * idsimport.content_types.inc
 */

/**
 * Creates content-type definitions for IDS assets (documents, organisations) and importers.
 */
function idsimport_content_types() {
  $types[IDS_IMPORT_DOCUMENTS_TYPE] = array(
      'type' => IDS_IMPORT_DOCUMENTS_TYPE,
      'name' => 'IDS Document',
      'base' => 'node_content',
      'module' => 'idsimport',
      'description' => 'Documents imported via the IDS API.',
      'help' => '',
      'has_title' => '1',
      'title_label' => 'Title',
      'custom' => '1',
      'modified' => '1',
      'locked' => '1',
      'disabled' => FALSE,
      'orig_type' => 'IDS_IMPORT_DOCUMENTS_TYPE',
      'disabled_changed' => FALSE,
      'bc_entity_type' => 'node',
    );
  $types[IDS_IMPORT_ORGANISATIONS_TYPE] = array(
      'type' => IDS_IMPORT_ORGANISATIONS_TYPE,
      'name' => 'IDS Organisation',
      'base' => 'node_content',
      'module' => 'idsimport',
      'description' => 'Organisations imported via the IDS API.',
      'help' => '',
      'has_title' => '1',
      'title_label' => 'Title',
      'custom' => '1',
      'modified' => '1',
      'locked' => '1',
      'disabled' => FALSE,
      'orig_type' => IDS_IMPORT_ORGANISATIONS_TYPE,
      'disabled_changed' => FALSE,
      'bc_entity_type' => 'node',
    );
    $types[IDS_IMPORT_DOCUMENTS_FEED_TYPE] = array(
      'type' => IDS_IMPORT_DOCUMENTS_FEED_TYPE,    
      'name' => 'IDS Documents Feed',
      'base' => 'node_content',
      'description' => 'Feeds for documents imported via the IDS API.',
      'has_title' => '1',
      'title_label' => 'Title',
      'help' => '',
      'custom' => 1,
      'modified' => 1,
      'locked' => '1',
      'disabled' => FALSE,
      'module' => 'idsimport',
      'orig_type' => IDS_IMPORT_DOCUMENTS_FEED_TYPE,
      'disabled_changed' => FALSE,
      'bc_entity_type' => 'node',
    );
    $types[IDS_IMPORT_ORGANISATIONS_FEED_TYPE] = array(
      'type' => IDS_IMPORT_ORGANISATIONS_FEED_TYPE,        
      'name' => 'IDS Organisations Feed',
      'base' => 'node_content',
      'description' => 'Feeds for organisations imported via the IDS API.',
      'has_title' => '1',
      'title_label' => 'Title',
      'help' => '',
      'custom' => 1,
      'modified' => 1,
      'locked' => '1',
      'disabled' => FALSE,
      'module' => 'idsimport',
      'orig_type' => IDS_IMPORT_ORGANISATIONS_FEED_TYPE,
      'disabled_changed' => FALSE,
      'bc_entity_type' => 'node',
    );
    $types[IDS_IMPORT_THEMES_FEED_TYPE] = array(   
      'type' => IDS_IMPORT_THEMES_FEED_TYPE,
      'name' => 'IDS Authors Feed',
      'base' => 'node_content',
      'module' => 'node',
      'description' => 'Feeds for authors imported via the IDS API.',
      'help' => '',
      'has_title' => '1',
      'title_label' => 'Title',
      'custom' => '1',
      'modified' => '1',
      'locked' => '1',
      'disabled' => FALSE,
      'orig_type' => IDS_IMPORT_THEMES_FEED_TYPE,
      'disabled_changed' => FALSE,
      'bc_entity_type' => 'node',
    );
    $types[IDS_IMPORT_SUBJECTS_FEED_TYPE] = array(   
      'type' => IDS_IMPORT_SUBJECTS_FEED_TYPE,
      'name' => 'IDS Subjects Feed',
      'base' => 'node_content',
      'module' => 'node',
      'description' => 'Feeds for subjects imported via the IDS API.',
      'help' => '',
      'has_title' => '1',
      'title_label' => 'Title',
      'custom' => '1',
      'modified' => '1',
      'locked' => '1',
      'disabled' => FALSE,
      'orig_type' => IDS_IMPORT_SUBJECTS_FEED_TYPE,
      'disabled_changed' => FALSE,
      'bc_entity_type' => 'node',
    );
    $types[IDS_IMPORT_REGIONS_FEED_TYPE] = array(   
      'type' => IDS_IMPORT_REGIONS_FEED_TYPE,
      'name' => 'IDS Regions Feed',
      'base' => 'node_content',
      'module' => 'node',
      'description' => 'Feeds for regions imported via the IDS API.',
      'help' => '',
      'has_title' => '1',
      'title_label' => 'Title',
      'custom' => '1',
      'modified' => '1',
      'locked' => '1',
      'disabled' => FALSE,
      'orig_type' => IDS_IMPORT_REGIONS_FEED_TYPE,
      'disabled_changed' => FALSE,
      'bc_entity_type' => 'node',
    );
    $types[IDS_IMPORT_COUNTRIES_FEED_TYPE] = array(   
      'type' => IDS_IMPORT_COUNTRIES_FEED_TYPE,
      'name' => 'IDS Countries Feed',
      'base' => 'node_content',
      'module' => 'node',
      'description' => 'Feeds for countries imported via the IDS API.',
      'help' => '',
      'has_title' => '1',
      'title_label' => 'Title',
      'custom' => '1',
      'modified' => '1',
      'locked' => '1',
      'disabled' => FALSE,
      'orig_type' => IDS_IMPORT_COUNTRIES_FEED_TYPE,
      'disabled_changed' => FALSE,
      'bc_entity_type' => 'node',
    );

  return $types;
}








