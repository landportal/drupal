<?php
/**
 * @file
 * landportal_search.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function landportal_search_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'index_landportal_v2';
  $environment->name = 'index landportal v2';
  $environment->url = 'http://landportal.info:8983/solr/landportal';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_direct_commit' => 0,
    'apachesolr_read_only' => '0',
    'apachesolr_search_changed_boost' => '0:0',
    'apachesolr_search_comment_boost' => '0:0',
    'apachesolr_search_date_boost' => '0:0',
    'apachesolr_search_promote_boost' => '0',
    'apachesolr_search_sticky_boost' => '0',
    'apachesolr_search_type_boosts' => array(
      'agris_publisher_file' => '0',
      'agris_publisher_file_feeds' => '0',
      'agris_file_upload_feed' => '0',
      'article' => '0',
      'page' => '0',
      'blog_post' => '0',
      'debate' => '0',
      'event' => '0',
      'feed' => '0',
      'feed_item' => '0',
      'ifpri_creator_feed' => '0',
      'ifpri_ingestion' => '0',
      'ifpri_publisher_feed' => '0',
      'landlibrary_resource' => '0',
      'news' => '0',
      'organization' => '0',
      'person' => '0',
      'subject_browse' => '0',
      'type_browse' => '0',
      'agris_conference_' => '0',
      'agris_clone2' => '0',
      'agris_upload' => '0',
      'general_feed' => '0',
      'ifpri_batch_file' => '0',
      'ifpri_file_upload' => '0',
      'legacy_feed_' => '0',
    ),
    'apachesolr_soft_commit' => 0,
    'field_bias' => array(
      '_version_' => '0',
      'bs_promote' => '0',
      'bs_status' => '0',
      'bs_sticky' => '0',
      'bs_translate' => '0',
      'bundle' => '0',
      'bundle_name' => '0',
      'content' => '1.0',
      'dm_field_doc_creation_date' => '0',
      'ds_changed' => '0',
      'ds_created' => '0',
      'ds_last_comment_or_change' => '0',
      'entity_id' => '0',
      'entity_type' => '0',
      'hash' => '0',
      'id' => '0',
      'im_field_doc_keyword' => '0',
      'im_field_doc_language' => '0',
      'im_field_doc_publisher_place' => '0',
      'im_field_doc_subject' => '0',
      'im_field_doc_type' => '0',
      'im_field_title_title_lang' => '0',
      'im_vid_13' => '0',
      'im_vid_5' => '0',
      'im_vid_6' => '0',
      'im_vid_8' => '0',
      'im_vid_9' => '0',
      'is_tnid' => '0',
      'is_uid' => '0',
      'label' => '5.0',
      'path' => '0',
      'path_alias' => '0',
      'site' => '0',
      'sm_field_doc_conference' => '0',
      'sm_field_doc_creator' => '0',
      'sm_field_doc_description' => '0',
      'sm_field_doc_identifier' => '0',
      'sm_field_doc_pagination' => '0',
      'sm_field_doc_provider' => '0',
      'sm_field_doc_publisher' => '0',
      'sm_field_doc_title' => '0',
      'sm_vid_Keywords' => '0',
      'sm_vid_LandLibrary_Resource_Type' => '0',
      'sm_vid_Languages' => '0',
      'sm_vid_Regions' => '0',
      'sm_vid_Topics' => '0',
      'sort_label' => '0',
      'sort_language' => '0',
      'sort_name' => '0',
      'sort_name_formatted' => '0',
      'spell' => '0',
      'ss_language' => '0',
      'ss_name' => '0',
      'ss_name_formatted' => '0',
      'tags_a' => '0',
      'tags_h1' => '5.0',
      'tags_h2_h3' => '3.0',
      'tags_h4_h5_h6' => '2.0',
      'tags_inline' => '1.0',
      'taxonomy_names' => '2.0',
      'tid' => '0',
      'timestamp' => '0',
      'tm_vid_13_names' => '0',
      'tm_vid_5_names' => '0',
      'tm_vid_6_names' => '0',
      'tm_vid_8_names' => '0',
      'tm_vid_9_names' => '0',
      'tos_content_extra' => '0.1',
      'tos_name' => '3.0',
      'tos_name_formatted' => '0',
      'ts_comments' => '0.5',
      'url' => '0',
    ),
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'landlibrary_resource',
      1 => 'person',
      2 => 'webform',
      3 => 'worldbank_feed',
    ),
  );
  $export['index_landportal_v2'] = $environment;

  return $export;
}
