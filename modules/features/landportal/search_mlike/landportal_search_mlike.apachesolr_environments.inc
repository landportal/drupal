<?php
/**
 * @file
 * landportal_search_mlike.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function landportal_search_mlike_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'mlike_search';
  $environment->name = 'MLIKE search';
  $environment->url = 'http://search:8983/solr/mlike';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_direct_commit' => 1,
    'apachesolr_read_only' => '0',
    'apachesolr_soft_commit' => 1,
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
      9 => 'partners_page',
      10 => 'project',
      11 => 'sdgi',
      12 => 'thematic_narrative',
    ),
  );
  $export['mlike_search'] = $environment;

  return $export;
}
