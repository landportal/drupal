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
  $environment->name = 'Landportal solr search';
  $environment->url = 'http://localhost:8080/solr/landportal';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_direct_commit' => 0,
    'apachesolr_read_only' => '0',
    'apachesolr_soft_commit' => 0,
  );
  /* $environment->index_bundles = array( */
  /*   'node' => array( */
  /*     0 => 'landlibrary_resource', */
  /*   ), */
  /* ); */
  $export['landportal_search'] = $environment;

  return $export;
}
