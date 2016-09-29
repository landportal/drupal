<?php
// $Id;

/**
 * @file
 *   IDS API Module default parameters.
 *   See idswrapper/idswrapper.default.inc for additional settings.
 *
 */

// Environment in which we are using the API wrapper. Possible values: 'generic', 'wordpress', 'drupal'. Default is 'generic'.
if (!defined('IDS_API_LIBRARY_PATH')) define('IDS_API_LIBRARY_PATH', dirname(__FILE__) . '/idswrapper/');
if (!defined('IDS_API_ENVIRONMENT')) define('IDS_API_ENVIRONMENT', 'drupal');







