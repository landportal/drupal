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
    'apachesolr_search_date_boost' => '4:200.0',
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
      'partners_page' => '2.0',
      'thematic_narrative' => '3.0',
      'webform' => '0',
    ),
    'apachesolr_soft_commit' => 1,
    'field_bias' => array(
      'content' => '2.0',
      'label' => '5.0',
      'tags_a' => '0',
      'tags_h1' => '5.0',
      'tags_h2_h3' => '3.0',
      'tags_h4_h5_h6' => '2.0',
      'tags_inline' => '1.0',
      'taxonomy_names' => '2.0',
      'tos_content_extra' => '5.0',
      'tos_name' => '3.0',
      'ts_comments' => '0.5',
    ),
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'blog_post',
      1 => 'dataset',
      2 => 'debate',
      3 => 'event',
      4 => 'landbook_country',
      5 => 'landlibrary_resource',
      6 => 'news',
      7 => 'organization',
      8 => 'page',
      9 => 'partners',
      10 => 'partners_page',
      11 => 'sdgi',
      12 => 'thematic_narrative',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
