<?php
/**
 * Land Portal View Coda
 *
 * Module blocks
 * 
 * Author: Jules <jules@landportal.info>
 */

include_once 'fields.inc';

function lbvc_plugin_map_block_info() {
  $blocks = array();
  $blocks['lbvc_map'] = array(
    'info'            => t('LBVC: Map'),
    'status'          => TRUE,
    'region'          => -81,
    'visibility'      => BLOCK_VISIBILITY_LISTED,
    'pages'           => "book/countries",
  );

  $blocks['lbvc_map_country'] = array(
    'info'            => t('LBVC: Map zoomed at country-level'),
    'status'          => TRUE,
    'region'          => 'highlighted',
    'weight'          => -1,
    'visibility'      => BLOCK_VISIBILITY_LISTED,
    'pages'           => "book/countries/*",
  );

  $blocks['lbvc_map_mlike'] = array(
    'info'            => t('LBVC: Map for MLIKE homepage'),
    'status'          => TRUE,
    'region'          => 'content',
    'weight'          => -35,
    'visibility'      => BLOCK_VISIBILITY_LISTED,
    'pages'           => "partners/mlike",
  );

  return $blocks;
}

function lbvc_plugin_map_block_view($delta) {
  $block = array();
  switch ($delta) {

  case 'lbvc_map':
    $vcc = '{"series": [{"tooltip": {"headerFormat": null, "pointFormat": "{point.name}"}, "data": "@map_data@"}]';
    $vcc .= ', "colors": { "min": "#BBD6D8" }';
    $vcc .= ', "map": {"selectable": true, "legend": false, "nav": true'
      . ', "tooltip": "@function () { return \'Click to visit \' + this.point.name; }@"'
      . ', "events": "@{ click: function () { window.location.href = \'/book/countries/\' + this.id; } }@"'
      . '}';
    $vcc .= '}';

    $block['subject'] = '';
    $block['content'] = lbvc_plugin_map_formatter(array(
      'type' => 'map',
      'jsid' => 'worldMap',
      'vid' => 'block-landbook-view-coda-lbvc-map',
      'vcc' => $vcc,
    ));
    break;

  case 'lbvc_map_country':
    $vcc = '{ "debug": true, "iso3": "@Drupal.settings.landbook.countryCode@"';
    $vcc .= ', "series": [ {"name": "country Region", "data": [ {"id": "@Drupal.settings.landbook.countryCode@", "value": 100} ] } ]';
    $vcc .= ', "colors": { "background": "#FFFFFF", "hover": "#F5A623", "select": "#F5A623", "borders": "#FFFFFF", "min": "#BBD6D8", "max": "#BBD6D8", "na": "#BBD6D8" }';
    $vcc .= ', "map": {"zoom": 2, "height": 200, "selectable": true, "legend": false, "tooltip": false'
      /* . ', "tooltip": "@function () { return \'Click to visit \' + this.point.name; }@"' */
      . '}';
    $vcc .= '}';
    $block['subject'] = '';
    $block['content'] = lbvc_plugin_map_formatter(array(
      'type' => 'map',
      'jsid' => 'countryRegionMap',
      'vid' => 'block-landbook-view-coda-lbvc-map-country',
      'vcc' => $vcc,
    ));
    /* dsm($vcc); */
    /* dpm($block); */
    break;

  case 'lbvc_map_mlike':
    $vcc = '{ "debug": true, "iso3": "VNM"';
    $vcc .= ', "series": [ {"name": "Mekong countries", "cursor": "pointer", "data": [ {"id": "VNM", "value": 1}, {"id": "LAO", "value": 1}, {"id": "KHM", "value": 1}, {"id": "THA", "value": 1}, {"id": "MMR", "value": 1} ] } ]';
    $vcc .= ', "colors": { "background": "#FFFFFF", "borders": "#FFFFFF", "hover": "#F5A623", "select": "#F9B122", "max": "#F9B122", "min": "#D1DB47", "na": "#BBD6D8" }';
    $vcc .= ', "map": {"selectable": true, "zoom": 3, "legend": false'
      // Need 'unwrapping'
      . ', "tooltip": "@function () { return \'Click to visit \' + this.point.name; }@"'
      . ', "events": "@{ click: function () { window.location.href = \'/book/countries/\' + this.id; } }@"'
      . '}';
    $vcc .= '}';
    $vis = lbvc_plugin_map_formatter(array(
      'type' => 'map',
      'jsid' => 'mlikeMap',
      'vid' => 'block-landbook-view-coda-lbvc-map-mlike',
      'vcc' => $vcc,
    ));
    //dpm($vis, 'map');
    $block['subject'] = '';
    $block['content'] = $vis;
    break;
  }
  return $block;
}
