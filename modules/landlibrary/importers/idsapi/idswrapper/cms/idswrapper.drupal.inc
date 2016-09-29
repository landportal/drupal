<?php

/**
 * Drupal-specific variables and functions.
 *
 */

// Call the URL.
function idsapi_get_data($url) {
  $response = drupal_http_request($url);
  if (isset($response->data)) {
    $data = json_decode($response->data, true);
  }
  else {
    $data = 'The API call failed.';
    if (isset($response->code)) {
      $data .= ' Code: ' . $response->code;
    }
  }
  return $data;
}

//------------------------------ Cache handling --------------------------------

// Add data to the cache.
function idsapi_cache_set($cache_id, $data, $bin, $expire) {
    $expire += time();
    cache_set($cache_id, $data, $bin, $expire);
}

// Get data from the cache.
function idsapi_cache_get($cache_id, $bin) {
  $ret = IDS_API_USE_CACHE;
  if ($ret) {
    $ret = cache_get($cache_id, $bin);
    if ($ret) {
      $ret = $ret->data;
    }
  }
  return $ret;
}

//------------------------------ Options handling --------------------------------

// Set the value of a parameter.
function idsapi_variable_set($group, $variable_name, $value) {
  $variable_name = $group . '_' . $variable_name;
  variable_set($variable_name, $value);
}

// Retrieve the value of a saved parameter
function idsapi_variable_get($group, $variable_name, $default = '') {
  $variable_name = $group . '_' . $variable_name;
  $value = variable_get($variable_name, $default);
  return $value;
}

