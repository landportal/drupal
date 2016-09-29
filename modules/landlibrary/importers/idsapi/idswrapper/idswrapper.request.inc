<?php

/**
* Class IdsApiRequest.
*
* Objects of this class are used to create new requests through which to call the IDS API.
*
*/

class IdsApiRequest {

  // The number of results to return, as requested.
  // Renamed in order to avoid confusion with the page size (the num_results parameter of the API). "0" means "all".
  protected $num_requested = 0;

  // The size of each page requested. It is equivalent to the API 'num_results' field.
  protected $page_size = 0;

  // The index of the result to start from. If not specified, a value of 0 is used.
  protected $start_offset;

  // The age of results to return (not older than the number of days specified by this attribute).
  // If not specified it is ignored.
  protected $age_results = IDS_API_AGE_NEW_ASSETS;

  // IDS API token guid (key)
  protected $api_key;

  // From where to get the information: eldis, bridge. Default is the defined default (eldis).
  protected $site = IDS_API_DEFAULT_DATASET;

  // Type of request (search, get, get_all).
  protected $type_request = IDS_API_DEFAULT_TYPE_REQUEST;

  // Identifier of the object being requested.
  protected $object_id;

  // Type of object(s) requested: assets, documents, organisations, themes, regions, countries
  protected $object_type;

  // Type of category for count requests (country, region, theme, subject or keyword).
  protected $count_category;

  // Format of the response: id, short, full. If not specified, the defined default (short) is used.
  protected $format;

  // Parameters to be added to the request. Use IdsApiRequest->setParam() to set.
  protected $params = array();

  // Extra fields to be added to the results. Use IdsApiRequest->setExtraField() to set.
  protected $extra_fields = array();

  // The URL of the request.
  protected $url;

  /**
  * Set the token guid of the items to request.
  * @param string $api_key - IDS API token guid.
  */
  public function setApiKey($api_key) {
    $this->api_key = $api_key;
  }

  /**
  * Set the format of the response.
  * @param string $format - format of the response (id, short, full).
  */
  public function setFormat($format) {
    $this->format = $format;
  }

  /**
  * Set the type of the request.
  * @param string $type_request - type of the request (search, get, get_all).
  */
  public function setTypeRequest($type_request) {
    $this->type_request = $type_request;
  }

  /**
  * Set the offset for the request.
  * @param int $start_offset - offset for the results of the request.
  */
  public function setOffset($start_offset) {
    $this->start_offset = $start_offset;
  }

  /**
  * Set the object id of the items to request.
  * @param string $object_id - object_id value of the object to be retrieved.
  */
  public function setObjectId($object_id) {
    $this->object_id = $object_id;
  }

  /**
  * Set the object type of the items to request.
  * @param string $object_type - object_type of the objects to be retrieved.
  */
  public function setObjectType($object_type) {
    $this->object_type = $object_type;
  }

  /**
  * Set the category in count requests.
  * @param string $count_category - category (theme, region, country, keyword, subject).
  */
  public function setCountCategory($count_category) {
    $this->count_category = $count_category;
  }

  /**
  * Set the number of items to request.
  * @param int $num_requested - the number of results requested (default 0, means all available results).
  */
  public function setNumRequested($num_requested) {
    $this->num_requested = $num_requested;
  }

  /**
  * Set the "age" of the items to request.
  * @param int $age_results - only results published in this last number of days are retrieved (default 0, means no limit).
  */
  public function setAgeResults($age_results) {
    $this->age_results = $age_results;
  }

  /**
  * Set the dataset.
  * @param string $site - dataset from where to retrieve the information (eldis, bridge).
  */
  public function setSite($site) {
    $this->site = $site;
  }

  /**
  * Add an additional parameter to the call (for instance, search parameters).
  * @param string $key - query field.
  * @param string $value - value of the query field to be used as filter.
  */
  public function setParam($key, $value) {
    $this->params[$key] = $value;
  }

  /**
  * Add an additional extra field to the call.
  * @param string $field - field to be added to the 'extra_fields' part of the request.
  */
  public function setExtraField($field) {
    $this->extra_fields[] = $field;
  }

  /**
  * Get the request URL.
  * @return string - URL of the API request.
  */
  public function getUrl() {
    return $this->url;
  }

  /**
  * Get the format of the request.
  * @return string - format of the request (short, full).
  */
  public function getFormat() {
    return $this->format;
  }

  /**
  * Get the number of items to request.
  * @return int - number of items requested.
  */
  public function getNumRequested() {
    return $this->num_requested;
  }

  /**
  * Get the type of object(s) requested.
  * @return string - type of object requested (documents, organisations, regiones, themes, countries).
  */
  public function getObjectType() {
    return $this->object_type;
  }

  /**
  * Get the id of object requested.
  * @return string - id of object requested.
  */
  public function getObjectId() {
    return $this->object_id;
  }

  /**
  * Get the count category in count requests
  * @return string - count category (country, region, theme, subject, keyword).
  */
  public function getCountCategory() {
    return $this->count_category;
  }

  /**
  * Get the type of the request.
  * @return string - type of the request.
  */
  public function getTypeRequest() {
    return $this->type_request;
  }

  /**
  * Get the dataset from where items are requested.
  * @return string - dataset to request from (eldis, bridge).
  */
  public function getSite() {
    return $this->site;
  }

  /**
  * Get the offset for the request.
  * @return int - offset of the request.
  */
  public function getOffset() {
    return $this->start_offset;
  }

  /**
  * Builds the request URL, including the key and encoding the query string.
  * Format of the URL calls:
  * Get:     {base_url}/{site}/get/{object type}/{object id}/{format}?{key}
  * Get all: {base_url}/{site}/get_all/{object_type}/{format}?{key}
  * Search:  {base_url}/{site}/search/{object type}/{format}?{key}&{query}
  * Count: {base_url}/{site}/count/{object type}/{count_category}?{key}&{query}
  */
  public function setUrl() {
    $query_string = $this->queryString();
    $this->url = IDS_API_URL;
    $api_key_par = IDS_API_KEY_PAR;
    $this->url .= $this->setPath() . '?' . $api_key_par . '=' . $this->api_key;
    if (($this->type_request == 'search') || ($this->type_request == 'get_all') || ($this->type_request == 'count')) { 
      if ($this->age_results) {
        $timestr = '- ' . $this->age_results . ' days';
        $date = strtotime($timestr);
        $metadata_published_after = date('Y-m-d', $date);
        $this->url .= '&' . 'metadata_published_after=' . $metadata_published_after;
      }
      if ($query_string) {
        $this->url .= '&' . $query_string;
      }
      if (($this->type_request == 'search') || ($this->type_request == 'get_all')) {
        $this->setPageSize();
        if ($this->page_size) {
          $this->url .= '&' . 'num_results=' . $this->page_size;
        }
        if ($this->start_offset) {
          $this->url .= '&' . 'start_offset=' . $this->start_offset;
        }
      }
    }
  }

  /**
  * Generate a query string based on the encoded search parameters.
  * @return string - query string part of the request (including filters and extra fields).
  */
  protected function queryString() {
    $query = '';
    $params = array();
    if (!empty($this->params)) {
      foreach ($this->params as $k => $v) {
        $params[] = $k . '=' . rawurlencode($v);
      }
    }
    if (!empty($this->extra_fields)) {
      $extra_fields = implode('+', $this->extra_fields);
      $params[] = 'extra_fields=' . $extra_fields;
    }
    $query = implode('&', $params);
    return $query;
  }

  /**
  * Build the request path based on the object parameters.
  * @return string - path part of the request URL.
  *   Format: {site}/{type of request}/{object type}/[object id/]{format}
  */
  protected function setPath() {
    if (!isset($this->site)) {
      $this->site = IDS_API_DEFAULT_DATASET;
    }
    $path = $this->site;
    if (isset($this->type_request)) {
      $path .= '/' . $this->type_request;
    }  
    if (isset($this->object_type)) {
      $path .= '/' . $this->object_type;
    }
    if (isset($this->count_category)) {
      $path .= '/' . $this->count_category;
    } 
    if (isset($this->object_id)) {
      $path .= '/' . $this->object_id;
    } 
    if (isset($this->format)) {
      $path .= '/' . $this->format;
    } 
    return $path;
  }

  /**
  * Sets the num_results parameter in the URL to call the API.
  */
  protected function setPageSize() {
    // Values of 0 for num_requested are interpreted as 'all items' (when importing categories, in particular).
    // Search functions, fetchers, etc. should set num_requested if less results are expected.
    // Depending on the context, global settings 'idsapi_number_items' (IDS_API_NUM_ITEMS by default) or
    // 'idsapi_feeds_number_assets' (IDS_FEEDS_NUM_ASSETS by default) should be used.
    if (($this->type_request === 'search') || ($this->type_request === 'get_all')) {
      if ($this->num_requested) {
          if ($this->num_requested <= IDS_API_MAX_NUM_ITEMS) {
            $this->page_size = $this->num_requested;
          }
          else {
            // The page size is the max. allowed by the API.
            $this->page_size = IDS_API_MAX_NUM_ITEMS;
          }
      }
      else {
        // The number of results is not limited and the page size is the max. allowed by the API.
        $this->page_size = IDS_API_MAX_NUM_ITEMS;
      }
    }
  }

} // IdsApiRequest



