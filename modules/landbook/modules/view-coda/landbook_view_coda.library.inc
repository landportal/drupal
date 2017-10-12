<?php
/**
 * Implement the js-view-coda library in drupal
 */

function lbvc__js_ready($callback) {
  return 'jQuery(document).ready(function () { LBV.ready().done(function () { ' . $callback . ' }) });';
}

function landbook_view_coda_library() {
  $PATH = libraries_get_path('js-view-coda');
  $LIBPATH = DRUPAL_ROOT . '/' . $PATH;
  $PKG = json_decode(file_get_contents($LIBPATH . "/package.json"), true);

  $libraries['view-coda'] = array(
    'title' => 'JS View Country Data',
    'website' => 'https://github.com/landportal/js-view-coda/',
    'version' => isset($PKG['version']) ? $PKG['version'] : '0.0.0',
    'js' => array(
      $PATH . '/js/lbvis.js' => array(),
      $PATH . '/js/lbvis.data.js' => array(),
      array(
        'type' => 'inline',
        // TODO: Drupal variable for LB LOD endpoint
        'data' => "var $ = jQuery.noConflict(); $(document).ready(function($) { LBV = new lbvis({prefix: '/sparql?query='}); });"
      )
    ),
    'dependencies' => array(
      array('system', 'jquery'),
      array('landbook_view_coda', 'lbvis.vendors'),
    ),
  );

  // Vendor stuff
  $libraries['lbvis.vendors'] = array(
    'title' => 'view-coda vendor libs',
    'version' => '0.0.1',
    'js' => array(
      $PATH . '/js/vendor/linkify.min.js' => array('weight' => 0),
      $PATH . '/js/vendor/linkify-jquery.min.js' => array('weight' => 0),
      $PATH . '/js/vendor/highstock.js' => array('weight' => 0),
      $PATH . '/js/vendor/highmaps.js' => array('weight' => 1),
      $PATH . '/js/vendor/highcharts-more.js' => array('weight' => 2),
    ),
  );

  // Plugins
  // Scan library 'plugins' directory to find them all...
  $scan = file_scan_directory($LIBPATH . '/js/plugins', '/.js$/');
  $plugins = array();
  foreach($scan as $p => $file) {
    $plugins[$file->name] = isset($PKG['plugins'][$file->name]) ?
      $PKG['plugins'][$file->name] : ucfirst($file->name) . ' projection';
    $libraries['lbvis.' . $file->name] = array(
      'title' => 'view-coda-' . $file->name,
      'version' => '0.2.0',
      'js' => array($PATH . '/js/plugins/' . $file->filename => array()),
      'dependencies' => array(array('landbook_view_coda', 'view-coda')),
    );
  }
  // Save known plugins
  variable_set('lbvc.plugins', $PKG['plugins']);//array_keys($plugins));
  // add map_data js to map plugin
  $libraries['lbvis.map']['js'][$PATH . '/js/map_data.js'] = array('weight'=>0);
  return $libraries;
}
