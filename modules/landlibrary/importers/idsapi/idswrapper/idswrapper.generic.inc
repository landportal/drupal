<?php

/**
* The following functions and variable provide an abstraction level so their implementation can be changed depending on the environment.
* For instance, in Drupal, we would use its internal caching mechanism instead (see cms/idsapi.drupal.inc).
*/

require_once('idswrapper.cache.inc');

global $idsapi_cache;
$idsapi_cache = new IdsApiCache(array('repository' => dirname(__FILE__) . '/' . IDS_API_CACHE_DIR));

/**
* Add data to the cache.
*/
function idsapi_cache_set($cache_id, $data, $bin, $expire) {
  global $idsapi_cache;
  $idsapi_cache->store($cache_id, $data, $expire, $bin);
}

/**
* Get data from the cache.
*/
function idsapi_cache_get($cache_id, $bin) {
  global $idsapi_cache;
  $ret = IDS_API_USE_CACHE;
  if ($ret) {
    $ret = $idsapi_cache->get($cache_id);
  }
  return $ret;
}

/**
* Clear data from one cache id.
*/
function idsapi_cache_clear($cache_id) {
  global $idsapi_cache;
  $idsapi_cache->clear($cache_id);
}

/**
* Flush data from the cache.
*/
function idsapi_cache_flush() {
  global $idsapi_cache;
  $idsapi_cache->clear_all();
}

