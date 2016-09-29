<?php

/**
* IDS Plugins default parameters.
*
* Sets default values to the API URL, documentation URL, cache time, etc.
*/

// Cache parameters for API responses.
define('IDS_API_USE_CACHE', TRUE);
define('IDS_API_CACHE_REQUESTS', 'idsapi_cache');
define('IDS_API_DEFAULT_CACHE_TIME', 86400); //One day
define('IDS_API_CACHE_DIR', 'cache');

// Error levels to display and format of error messages
define('IDS_API_SHOW_ERROR_CODES', 'error,warning,notification');
define('IDS_API_HTML_ERRORS', TRUE);

// Default API parameters
define('IDS_API_DEFAULT_DATASET', 'eldis');
define('IDS_API_NUM_ITEMS', 20); 
define('IDS_API_DEFAULT_FORMAT', 'full');
define('IDS_API_DEFAULT_TYPE_REQUEST', 'search');
define('IDS_API_AGE_NEW_ASSETS', 0);

// Parameters that shouldn't be changed by the API users, in general
define('IDS_API_URL', 'http://api.ids.ac.uk/openapi/');
define('IDS_API_HOME_URL', 'http://api.ids.ac.uk/');
define('IDS_API_KEY_URL', 'http://api.ids.ac.uk/accounts/register/');
define('IDS_API_DOCUMENTATION_URL', 'http://api.ids.ac.uk/docs/');
define('IDS_API_SEARCH_FIELDS_URL', 'http://api.ids.ac.uk/docs/functions/search/');
define('IDS_API_MAX_NUM_ITEMS', 500); // IDS_API_MAX_NUM_ITEMS is the max. page size allowed by the API (http://api.ids.ac.uk/docs/)
define('IDS_API_KEY_PAR', '_token_guid');
define('IDS_API_CSS_OBJECT', 'ids-object');
define('IDS_API_PREFIX', 'IDS');





