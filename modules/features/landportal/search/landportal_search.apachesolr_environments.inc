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
  $environment->env_id = 'solr';
  $environment->name = 'LP Drupal solr';
  $environment->url = 'http://search.landportal.info:8983/solr/landportal';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_direct_commit' => 1,
    'apachesolr_read_only' => '0',
    'apachesolr_search_changed_boost' => '0:0',
    'apachesolr_search_comment_boost' => '2:100.0',
    'apachesolr_search_date_boost' => '8:700.0',
    'apachesolr_search_facet_pages' => '',
    'apachesolr_search_promote_boost' => '0.2',
    'apachesolr_search_sticky_boost' => '0.5',
    'apachesolr_search_type_boosts' => array(
      'blog_post' => '2.0',
      'landbook_country' => '5.0',
      'debate' => '3.0',
      'event' => '2.0',
      'landlibrary_resource' => '3.0',
      'news' => '2.0',
      'organization' => '5.0',
      'page' => '2.0',
      'partners' => '5.0',
      'partners_page' => '1.0',
      'thematic_narrative' => '0',
      'webform' => '0',
    ),
    'apachesolr_soft_commit' => 1,
    'field_bias' => array(
      '_version_' => '0',
      'bs_promote' => '0',
      'bs_status' => '0',
      'bs_sticky' => '0',
      'bs_translate' => '0',
      'bundle' => '0',
      'bundle_name' => '0',
      'content' => '2.0',
      'dm_field_date' => '0',
      'dm_field_date_end' => '0',
      'dm_field_pubdate' => '0',
      'ds_changed' => '0',
      'ds_created' => '0',
      'ds_last_comment_or_change' => '0',
      'ds_last_comment_timestamp' => '0',
      'entity_id' => '0',
      'entity_type' => '0',
      'hash' => '0',
      'id' => '0',
      'im_field_geographical_focus' => '0',
      'im_field_language' => '0',
      'im_field_related_domains' => '0',
      'im_field_related_themes' => '0',
      'im_field_related_topics' => '0',
      'im_field_status' => '0',
      'im_vid_26' => '0',
      'im_vid_27' => '0',
      'im_vid_4' => '0',
      'im_vid_5' => '0',
      'im_vid_6' => '0',
      'im_vid_7' => '0',
      'is_comment_count' => '0',
      'is_tnid' => '0',
      'is_uid' => '0',
      'label' => '5.0',
      'path' => '0',
      'path_alias' => '5.0',
      'site' => '0',
      'sm_field_contact' => '0',
      'sm_field_facilitators' => '0',
      'sm_field_thematic_promoted' => '0',
      'sm_title_field' => '0',
      'sm_vid_Concepts' => '0',
      'sm_vid_Debate_status' => '0',
      'sm_vid_Languages' => '0',
      'sm_vid_Overarching_Categories' => '0',
      'sm_vid_Regions' => '0',
      'sm_vid_Themes' => '0',
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
      'tm_vid_26_names' => '3.0',
      'tm_vid_27_names' => '3.0',
      'tm_vid_4_names' => '0',
      'tm_vid_5_names' => '0',
      'tm_vid_6_names' => '0',
      'tm_vid_7_names' => '0',
      'tos_content_extra' => '5.0',
      'tos_name' => '3.0',
      'tos_name_formatted' => '0',
      'ts_comments' => '0.5',
      'url' => '0',
    ),
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'blog_post',
      1 => 'debate',
      2 => 'event',
      3 => 'landbook_country',
      4 => 'news',
      5 => 'organization',
      6 => 'page',
      7 => 'partners',
      8 => 'partners_page',
      9 => 'thematic_narrative',
      10 => 'webform',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
