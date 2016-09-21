<?php

/**
* Class IdsApiWrapper.
*
* Objects of this class are used to retrieve content in the IDS collections (Eldis, BRIDGE) through the IDS API.
* 
*/

require_once('idswrapper.default.inc'); 
require_once('idswrapper.object.inc'); 
require_once('idswrapper.request.inc'); 
require_once('idswrapper.response.inc');

if (!defined('IDS_API_ENVIRONMENT')) define('IDS_API_ENVIRONMENT', 'generic');

switch (IDS_API_ENVIRONMENT) {
  case 'drupal':
    require_once('cms/idswrapper.drupal.inc');
    break;
  case 'wordpress':
    // In this case we also include the generic functions.
    require_once('cms/idswrapper.wordpress.inc');
  default:
    require_once('idswrapper.generic.inc');
}

class IdsApiWrapper {

  // Current request object.
  private $request;

  /**
  * Constructor
  */
  function __construct() {
    $this->request = new IdsApiRequest();
  }

  /**
  * Method used to set the token guid of the items to request.
  * @param string $api_key - IDS API token guid.
  */
  public function setApiKey($api_key) {
    $this->request->setApiKey($api_key);
  }

  /**
  * Method used to set the "site" parameter of the request.
  * @param string $set - dataset from where to retrieve the information (eldis, bridge).
  */
  public function setSite($site) {
    $this->request->setSite($site);
  }

  /**
  * Set the type of the request.
  * @param string $type_request - type of the request (search, get, get_all).
  */
  public function setTypeRequest($type_request) {
    $this->request->setTypeRequest($type_request);
  }

  /**
  * Set the format of the response.
  * @param string $format - format of the response (id, short, full).
  */
  public function setFormat($format) {
    $this->request->setFormat($format);
  }

  /**
  * Method used to set the "num_requested" parameter of the request.
  * @param int $num_requested - the number of results requested (default 0, means all available results).
  */
  public function setNumRequested($num_requested) {
    $this->request->setNumRequested($num_requested);
  }

  /**
  * Method used to set the "age_results" parameter of the request.
  * @param int $age_results - only results published in this last number of days are retrieved (default 0, means no limit).
  */
  public function setAgeResults($age_results) {
    $this->request->setAgeResults($age_results);
  }

  /**
  * Set the offset for the request.
  * @param int $start_offset - offset for the results of the request.
  */
  public function setOffset($start_offset) {
    $this->request->setOffset($start_offset);
  }

  /**
  * Method used to set the "object_type" parameter of the request.
  * @param string $type - type of object(s) requested (documents, organisations, themes, regions, countries).
  */
  public function setObjectType($object_type) {
    $this->request->setObjectType($object_type);
  }

  /**
  * Set the category in count requests.
  * @param string $count_category - category (theme, region, country, keyword, subject).
  */
  public function setCountCategory($count_category) {
    $this->request->setCountCategory($count_category);
  }

  /**
  * Method used to set additional parameters of the request.
  * @param array $params - unencoded filters to be added to the request (eg. array('publisher' => 'UNDP', 'country' => 'Costa Rica|Nicaragua')).
  */
  public function setParameters($params) {
    foreach ($params as $key => $value) {
      $this->setParam($key, $value);
    }
  }

  /**
  * Method used to set additional parameters of the request.
  * @param string $key - parameter.
  * @param string $value - value of the parameter.
  */
  public function setParam($key, $value) {
    $this->request->setParam($key, $value);
  }

  /**
  * Method that receives a comma-separated query string and sets the corresponding parameters.
  * @param array $query - query string (eg. "country = Argentina, keyword = climate change, language_name = Spanish")
  */
  public function setQueryString($query_string) {
    $search_params = explode(',', $query_string);
    foreach ($search_params as $search_param) {
      list ($key, $value) = explode('=', trim($search_param));
        $this->setParam($key, $value);
    }
  }

  /**
  * Method used to set additional fields to be included in the response to the request.
  * @param array $extra_fields - extra fields to be returned (in short responses). (eg. array('headline', 'category_theme_array')).
  */
  public function setExtraFields($extra_fields) {
    foreach ($extra_fields as $field) {
      $this->setExtraField($field);
    }
  }

  /**
  * Method used to set additional fields to be included in the response to the request.
  * @param string $field - extra field to be included in the response.
  */
  public function setExtraField($field) {
    $this->request->setExtraField($field);
  }

  /**
  * Method used to retrieve a set of items in the IDS collection (by a 'search' request to the API).
  *
  * @param string $object_type - type of object(s) requested (documents, organisations, themes, regions, countries, subjects).
  * @param string $site - dataset from where to retrieve the information (eldis, bridge).
  * @param string $api_key - IDS API token guid.
  * @param string $format - format of the responses (short, full) (default 'full').
  * @param int $num_requested - the number of results requested (default 0, means all available results).
  * @param int $age_results - only results published in this last number of days are retrieved (default 0, means no limit).
  * @param array $params - unencoded filters to be added to the request (eg. array('publisher' => 'UNDP', 'country' => 'Costa Rica|Nicaragua')).
  * @param array $extra_fields - extra fields to be returned (in short responses). (eg. array('headline', 'category_theme_array')).
  * @return IdsApiResponse - response object holding the data retrieved by the API call.
  */
  public function search($object_type, $site, $api_key, $format = 'full', $num_requested = 0, $age_results = 0, $params = array(), $extra_fields = array()) {
    $this->request = new IdsApiRequest();
    $this->request->setTypeRequest('search');
    $this->request->setApiKey($api_key);
    $this->request->setSite($site);
    $this->request->setFormat($format);
    $this->request->setNumRequested($num_requested);
    $this->request->setAgeResults($age_results);
    $this->request->setObjectType($object_type);
    $this->setParameters($params);
    $this->setExtraFields($extra_fields);
    $response = $this->makeRequest();
    return $response;
  }

  /**
  * Method used to retrieve one item in the IDS collection (by a 'get' request to the API).
  * @param string $object_type - type of object(s) requested (documents, organisations, themes, regions, countries, subjects).
  * @param string $site - dataset from where to retrieve the information (eldis, bridge).
  * @param string $api_key - IDS API token guid.
  * @param string $format - format of the responses (short, full) (default 'full').
  * @param string $object_id - object_id value of the object to be retrieved.
  * @return IdsApiResponse - response object holding the data retrieved by the API call.
  */
  public function get($object_type, $site, $api_key, $format = 'full', $object_id) {
    $this->request = new IdsApiRequest();
    $this->request->setTypeRequest('get');
    $this->request->setApiKey($api_key);
    $this->request->setSite($site);
    $this->request->setFormat($format);
    $this->request->setObjectType($object_type);
    $this->request->setObjectId($object_id);
    $response = $this->makeRequest();
    return $response;
  }

  /**
  * Method used to retrieve all items of a specific type in the IDS collection (by a 'get_all' request to the API).
  * @param string $object_type - type of object(s) requested (documents, organisations, themes, regions, countries, subjects).
  * @param string $site - dataset from where to retrieve the information (eldis, bridge).
  * @param string $api_key - IDS API token guid.
  * @param string $format - format of the responses (short, full) (default 'full').
  * @return IdsApiResponse - response object holding the data retrieved by the API call.
  */
  public function getAll($object_type, $site, $api_key, $format = 'full') {
    $this->request = new IdsApiRequest();
    $this->request->setTypeRequest('get_all');
    $this->request->setApiKey($api_key);
    $this->request->setSite($site);
    $this->request->setFormat($format);
    $this->request->setObjectType($object_type);
    $response = $this->makeRequest();
    return $response;
  }

  /**
  * Method used to count the number of hits within the search that match a category.
  * @param string $object_type - type of object(s) requested (items, documents, organisations).
  * @param string $site - dataset from where to retrieve the information (eldis, bridge).
  * @param string $api_key - IDS API token guid.
  * @param string $count_category - category (theme, region, country, keyword, subject).
  * @param array $params - unencoded filters to be added to the request (eg. array('publisher' => 'UNDP', 'country' => 'Costa Rica|Nicaragua')).
  * @return IdsApiResponse - response object holding the data retrieved by the API call.
  */
  public function count($object_type, $site, $api_key, $count_category, $age_results = 0, $params) {
    $this->request = new IdsApiRequest();
    $this->request->setTypeRequest('count');
    $this->request->setApiKey($api_key);
    $this->request->setSite($site);
    $this->request->setCountCategory($count_category);
    $this->request->setObjectType($object_type);
    $this->request->setAgeResults($age_results);
    $this->setParameters($params);
    $response = $this->makeRequest();
    return $response;
  }

  /**
  * Make a call to the API in order to validate the key.
  * @param string $api_key - IDS API token guid.
  * @return bool - true if the key is valid, false otherwise.
  */
  public function validateKey($api_key) {
    return (!$this->search('regions', IDS_API_DEFAULT_DATASET, $api_key, 'short', 1)->isEmpty());
  }

  /**
  * Make a call to the API in order to determine if fields available only to partners (such as "subjects") can be accessed.
  * @param string $api_key - IDS API token guid.
  * @return bool - true if the request retrieved results, false otherwise.
  */
  public function additionalFieldsAvailable($api_key) {
    return (!$this->search('documents', IDS_API_DEFAULT_DATASET, $api_key, 'short', 1, 0, array('extra_fields' => 'category_subject_array'))->isEmpty());
  }


  /**
  * Builds the URL, checks if the request is in the cache, and if not makes the call and saves it in the cache.
  * @return IdsApiResponse - response object holding the data retrieved by the API call.
  */
  public function makeRequest() {
    $cached = FALSE;
    // Build the URL.
    $this->request->setUrl();
    $object_type = $this->request->getObjectType();
    // Check if it's in the cache.  If it's not, make the call and save it in the cache.
    if ($data = $this->cacheGet()) {
      $cached = TRUE;
      list($results, $total_results) = $data;
    }
    else {
      if ($this->request->getTypeRequest() == 'count') {
        list($results, $total_results) = $this->getDecodedCountResults($this->getUrl());
        $object_type = $this->request->getCountCategory() . '_count';
      }
      else {
        list($results, $total_results) = $this->getDecodedResults($this->getUrl(), 0);
      }
      $this->cacheSet(array($results, $total_results));
    }
    //$response = new IdsApiResponse($results, $this->request->getFormat(), $object_type, $total_results, $this->request->getSite(), $cached);
    $response = new IdsApiResponse($results, $object_type, $total_results, $this->request->getSite(), $cached);
    return $response;
  }

  /**
  * Retrieve the request's url (if set).
  * @return string -  URL of the API request.
  */
  public function getUrl() {
    return $this->request->getUrl();
  }


  /**
  * Make the API call for count requests.
  * @param string $url - API URL to get the data from.
  * @return array - array containing two elements: an array with the 'count' part of the response and 
  *                 the total number of results available in the dataset (as indicated in the 'metadata' part of the response).
  */
  protected function getDecodedCountResults($url) {
    $data = $this->getResponseData($url);
    if (is_array($data) && !empty($data)) {
      $metadata = $this->getResponseMetadata($data);
      $total_results = $metadata['total_results'];
      $results = $this->getCountResults($data);
    }
    else {
      $results = $data;
      $total_results = 0;
    }
    return array($results, $total_results);
  }

  /**
  * Make the actual API calls, implementing pagination and returning the decoded data.
  * @param string $url - API URL to get the data from.
  * @param int $num_retrieved - number of items retrieved so far (initially, 0).
  * @return array - array containing two elements: an array with the 'results' part of the response and 
  *                 the total number of results available in the dataset (as indicated in the 'metadata' part of the response).
  */
  protected function getDecodedResults($url, $num_retrieved) {
    $data = $this->getResponseData($url);
    if (is_array($data) && !empty($data)) {
      $results = $this->getResponseResults($data);
      $metadata = $this->getResponseMetadata($data);
      $total_results = $metadata['total_results'];
      $num_results = count($results);
      $num_retrieved += $num_results;
      if (($total_results > $num_retrieved) && (($num_retrieved < $this->request->getNumRequested()) || ($this->request->getNumRequested() == 0))) {
        if (isset($metadata['next_page'])) {
          $next_page_url = $metadata['next_page'];
          list($new_results) = $this->getDecodedResults($next_page_url, $num_retrieved);
          if (is_array($new_results)) {
            $results = array_merge_recursive($results, $new_results);
          }
        }
      }
    }
    else {
      $results = $data;
      $total_results = 0;
    }
    return array($results, $total_results);
  }

  /**
  * Retrieve the URL.
  * We check first if there is a function that overrides this functionality (as in the case of Wordpress or Drupal).
  * @param string $url - API URL to get the data from.
  * @return array $data - array containing the decoded JSON object retrieved by the API call.
  */
  protected function getResponseData($url) {
    // In certain environments (such as Drupal or Wordpress) specific implementations of this function can be provided.
    if (function_exists('idsapi_get_data')) {
      $data = idsapi_get_data($url);
    }
    // If cURL is available, we use it.
    elseif (function_exists('curl_init')) {
      $ch = curl_init($url);
      curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
      $content = curl_exec($ch);
      curl_close($ch);
      $data = json_decode($content, true);
      if (is_array($data) && isset($data['detail'])) {
        $data = $data['detail'];
      }
    }
    // Otherwise, we use file_get_contents.
    else {
      $content = @file_get_contents($url);
      if (!$content) {
        $error = error_get_last();
        $data = preg_replace('/(.*) (HTTP.*)/', '$2', $error['message']);
      }
      else {
        $data = json_decode($content, true);
      }
    }
    return $data;
  }

  /**
  * Get the results part of the response.
  * @param array $results - array containing the 'results' part of the response.
  * @return array $data - array containing the decoded JSON object retrieved by the API call.
  */
  protected function getResponseResults($data) {
    $results = array();
    if (isset($data['results'])) {
      $results = $data['results'];
      if (isset($results['object_id'])) { //When there's only one response
        $results = array($results);
      }
    }
    return $results;
  }

  /**
  * Get the count part of the response for count requests.
  * @param array $results - array containing the 'count' part of the response.
  * @return array $data - array containing the decoded JSON object retrieved by the API call.
  */
  protected function getCountResults($data) {
    $results = array();
    $results_field = $this->request->getCountCategory() . '_count';
    if (isset($data[$results_field])) {
      $results = $data[$results_field];
    }
    return $results;
  }

  /**
  * Get the metadata part of the response.
  * @param array $results - array containing the 'results' part of the response.
  * @return array $metadata - array containing the decoded JSON object retrieved by the API call.
  */
  protected function getResponseMetadata($data) {
    $metadata = array();
    if (isset($data['metadata'])) {
      $metadata = $data['metadata'];
    }
    else {
      $metadata['total_results'] = 1;
    }
    return $metadata;
  }
  
  /**
  * Retrieve the cache.
  * @return string - text of the cached response corresponding to the current request.
  */
  protected function cacheGet() {
    static $items = array();
    $cid = $this->cacheId();
    if (!isset($items[$cid])) {
      $items[$cid] = idsapi_cache_get($cid, IDS_API_CACHE_REQUESTS);
    }
    return $items[$cid];
  }

  /**
  * Populate the cache.
  * @param array $data - text of the response corresponding to the current request to be cached.
  */
  protected function cacheSet($data) {
    if (!$data[1]) {
      // If we get an empty response we set a 5 min. temporary cache to avoid making repeated failed requests in a short period of time.
      idsapi_cache_set($this->cacheId(), $data, IDS_API_CACHE_REQUESTS, 300);
    }
    else {
      idsapi_cache_set($this->cacheId(), $data, IDS_API_CACHE_REQUESTS, IDS_API_DEFAULT_CACHE_TIME);
    }
  }

  /**
  * Generate a cache item id based on the hash of the url of the current request.
  * @return string - id by which to identify the cached response of the current request.
  */
  protected function cacheId() {
    return get_class($this) .':'. md5($this->getUrl());
  }

  /**
  * Delete the cache entry for the current request.
  */
  public function cacheClear() {
    idsapi_cache_clear($this->cacheId());
  }

  /**
  * Delete all the cache entries.
  */
  public function cacheFlush() {
    idsapi_cache_flush();
  }

} // Class IdsApiWrapper
