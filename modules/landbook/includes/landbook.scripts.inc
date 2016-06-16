<?php

/**
 * Register JS variables through Drupal system.
 * They are (only?) used by landbook/js/controller/*js files
 */
function landbook_add_js_vars($args=NULL) {
  global $language;
  $path = '/' . drupal_get_path('module', 'landbook');
  $url = '/' . drupal_get_path('theme', 'landportal');
  // Use those variables in javascript with:
  //   var XXX = Drupal.settings.landbook.XXX
  drupal_add_js(array('landbook' => array(
      'countryCode' => $args,
      'languageCode'    => $language->language,
      'imagesURL'       => $url . '/images',              // landportal theme related
      'ajaxURL'         => $path . '/ajax',               // landbook module related
      // TODO: Should be configurable through admin/settings/landbook/services,
      //  & have default values in local.settings.php or sum'thing
      'apiURL'          => $GLOBALS['landbook_urls']['api'],
      'ckanURL'         => '',//$GLOBALS['landbook_urls']['ckan'],
      'sparqlURL'       => $GLOBALS['landbook_urls']['sparql'], // not really used?
  )), 'setting'
  );
}

/**
 * Includes specific Landbook Javascripts and CSS
 * This is directly included by the 'page callback' functions (in landbook/modules/*inc)
 * Not all pages require this to work.
 */
function landbook_add_js_css() {
    landbook_add_js();
    landbook_add_css();
}

function landbook_add_js() {
  // Some customs helpers, libraries and  finally the 'wesCountry' script
  drupal_add_js(drupal_get_path('module', 'landbook').'/js/util.js');
  drupal_add_js(drupal_get_path('module', 'landbook').'/js/libraries/canvg.js');
  drupal_add_js(drupal_get_path('module', 'landbook').'/js/libraries/rgbcolor.js');
  drupal_add_js(drupal_get_path('module', 'landbook').'/js/libraries/StackBlur.js');
  drupal_add_js(drupal_get_path('module', 'landbook').'/js/libraries/seedrandom.min.js');
    drupal_add_js(drupal_get_path('module', 'landbook').'/js/libraries/wesCountry.js', array('scope' => 'footer'));
}

function landbook_add_css() {
    drupal_add_css(drupal_get_path('module', 'landbook').'/js/libraries/wesCountry.min.css');
    drupal_add_css(drupal_get_path('module', 'landbook').'/landbook.css');
}

function landbook_add_js_country() {
    drupal_add_js(drupal_get_path('module', 'landbook').'/js/country_chart_options.js');  
    drupal_add_js(drupal_get_path('module', 'landbook').'/js/controller/country.js', array('scope'=>'footer'));
}
