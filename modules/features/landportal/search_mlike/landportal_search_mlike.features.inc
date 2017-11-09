<?php
/**
 * @file
 * landportal_search_mlike.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landportal_search_mlike_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "apachesolr" && $api == "apachesolr_environments") {
    return array("version" => "1");
  }
  if ($module == "apachesolr_search" && $api == "apachesolr_search_defaults") {
    return array("version" => "3");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_server().
 */
function landportal_search_mlike_default_search_api_server() {
  $items = array();
  $items['mlike_solr'] = entity_import('search_api_server', '{
    "name" : "MLIKE solr",
    "machine_name" : "mlike_solr",
    "description" : "MLIKE search stuff",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "search",
      "port" : "8983",
      "path" : "\\/solr\\/mlike",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO",
      "log_query" : 0,
      "log_response" : 0,
      "commits_disabled" : 0
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
