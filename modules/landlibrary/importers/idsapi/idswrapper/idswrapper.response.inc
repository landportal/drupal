<?php

/**
* Class IdsApiResponse.
*
* Objects of this class contain the data retrieved by the IDS API calls.
*
*/

class IdsApiResponse {

  // These properties should be protected, but we need to check first where this class is
  // currently being used, to make sure we don´t break the plugins, etc. 

  // Results. Array of IdsApiObject (or its subclasses).
  public $results = array();

  // If the API called did not respond with a well-structured response.
  public $is_error = FALSE;

  // Flag to indicate if the response is from the cache.
  public $cached = FALSE;

  // Error message, in case an error was produced.
  public $error_message = '';

  // Total results. Number of total results available in the collection.
  public $total_results;

  /**
  * Constructor.
  * 
  * Is called by IdsApiCall::makeRequest().
  * @param array $results - array with the decoded output of the API call.
  * @param string $format - format of the responses (short, full) (default 'full').
  * @param string $type_results - type of object(s) (documents, organisations, themes, regions, countries).
  * @param string $total_results - total number of results available in the dataset.
  * @param string $default_site - dataset ('eldis', 'bridge').
  * @param bool $cached - indicates if the response was retrieved from the cache.
  */
  //function __construct($results, $format, $type_results, $total_results, $default_site, $cached = FALSE) {
  function __construct($results, $type_results, $total_results, $default_site, $cached = FALSE) {
    $this->results = array();
    if (!is_array($results)) {
      $this->is_error = TRUE;
      if (is_string($results)) {
        $this->error_message = $results;
      }
    }
    else {
      $this->is_error = FALSE;
      foreach ($results as $object) {
        if (!isset($object['site'])) {
          $object['site'] = $default_site;
        }
        $ids_api_object = IdsApiObject::factory($object, $type_results);
        array_push($this->results, $ids_api_object);
      }
    }
    if (isset($total_results)) {
      $this->total_results = $total_results;
    }
    else {
      $this->total_results = 0;
    }
    $this->cached = $cached;
  }

  /**
  * Indicate if the response is empty.
  * @return bool
  */
  function isEmpty() {
    return empty($this->results);
  }

  /**
  * Indicate if the response is an error.
  * @return bool
  */
  function isError() {
    return $this->is_error;
  }

  /**
  * Indicate if the response is from the cache.
  * @return bool
  */
  function isCached() {
    return $this->cached;
  }

  /**
  * Return the error message.
  * @return string.
  */
  function getErrorMessage() {
    return $this->error_message;
  }

  /**
  * Return the results of the response.
  * @return array.
  */
  function getResults() {
    return $this->results;
  }

  /**
  * Return the total results of the response.
  * @return int.
  */
  function getTotalResults() {
    return $this->total_results;
  }

  /**
  * Return an array with an array of retrieved non-archived object's titles.
  * @return array - titles of retrieved items indexed by object_id.
  */
  function getArrayTitles($padding_str = '') {
    $array_objects = array();
    foreach ($this->results as $object) {
      if ((!isset($object->archived)) || ($object->archived !== 'true')) {
        $value = $object->title;
        if ($padding_str) {
          if (isset($object->level)) {
            $level = $object->level;
            $padding = strlen($value) + strlen($padding_str)*($level - 1);
            $value = str_pad($object->title, $padding, $padding_str, STR_PAD_LEFT);
          } 
        }
        $array_objects[$object->object_id] = $value;
      }
    }
    return $array_objects;
  }

  /**
  * Create an array with a list of HTML links to the retrieved non-archived objects (eg. titles with links to URLs of Eldis/Bridge documents/organisations).
  * @return array - titles of retrieved items linked to the online documents (on Eldis or BRIDGE).
  */
  function getArrayLinks() {
    $list_objects = array();
    foreach ($this->results as $object) {
      if ((!isset($object->archived)) || ($object->archived !== 'true')) {
        $list_objects[] = '<a class="' . IDS_API_CSS_OBJECT .'" href="' . htmlspecialchars_decode($object->website_url) . '">'. $object->title . '</a>';
      }
    }
    return $list_objects;
  }


} // IdsApiResponse










  
