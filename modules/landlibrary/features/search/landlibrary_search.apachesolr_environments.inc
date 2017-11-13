<?php
/**
 * @file
 * landlibrary_search.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function landlibrary_search_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'landlibrary_search';
  $environment->name = 'Landlibrary solr search';
  $environment->url = 'http://search.landportal.info:8983/solr/landlibrary';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_direct_commit' => 1,
    'apachesolr_read_only' => '0',
    'apachesolr_search_changed_boost' => '0:0',
    'apachesolr_search_comment_boost' => '0:0',
    'apachesolr_search_date_boost' => '1:100.0',
    'apachesolr_search_promote_boost' => '2.0',
    'apachesolr_search_sticky_boost' => '0',
    'apachesolr_search_type_boosts' => array(
      'blog_post' => '0',
      'landbook_country' => '0',
      'debate' => '0',
      'event' => '0',
      'landlibrary_resource' => '0',
      'news' => '0',
      'organization' => '0',
      'page' => '0',
      'partners' => '0',
      'partners_page' => '0',
      'thematic_narrative' => '0',
      'webform' => '0',
    ),
    'apachesolr_soft_commit' => 1,
    'field_bias' => array(
      'content' => '1.0',
      'label' => '5.0',
      'tags_a' => '1.0',
      'tags_h1' => '5.0',
      'tags_h2_h3' => '3.0',
      'tags_h4_h5_h6' => '2.0',
      'tags_inline' => '1.0',
      'taxonomy_names' => '0.8',
      'tos_content_extra' => '0.1',
      'tos_name' => '3.0',
      'ts_comments' => '0.5',
    ),
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'dataset',
      1 => 'landlibrary_resource',
    ),
  );
  $export['landlibrary_search'] = $environment;

  return $export;
}
