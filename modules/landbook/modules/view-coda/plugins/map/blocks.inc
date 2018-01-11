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

// Returns a list of all countries, where
// key is the iso3, value is 0 = country, 1 = with narrative, 2 = promoted
function lbvc__map_cps() {
  $countries = array();
  $tids = taxonomy_term_load_multiple($tids = array(), $conditions = array('vid' => LP_REGIONS_VID));
  foreach($tids as $term) {
    if (!$term->field_iso3) continue;
    $wrapper = entity_metadata_wrapper('taxonomy_term', $term);
    $iso3 = $wrapper->field_iso3->value();
    $countries[$iso3] = array('id' => $iso3, 'value' => 0);
  }
  // Load narratives
  $nodes = node_load_multiple(array(), array('type' => 'landbook_country'));
  foreach($nodes as $node) {
    $wrapper = entity_metadata_wrapper('node', $node);
    $iso3 = $wrapper->field_geographical_focus[0]->field_iso3->value();
    $countries[$iso3] = array('id' => $iso3, 'value' => $node->promote + 1);
  }
  return array_values($countries);
}

function lbvc_plugin_map_block_view($delta) {
  $block = array();
  switch ($delta) {

  case 'lbvc_map':
    $countries = lbvc__map_cps();
    $vcc = '{"series": [ {"name": "click to visit", "data": ' . json_encode($countries) . ' } ]';
    $vcc .= ', "colors": { "background": "#FFFFFF", "hover": "#F5A623", "select": "#F5A623", "borders": "#FFFFFF", "min": "#BBD6D8", "max": "#E58517", "na": "#BBD6D8" }';
    $vcc .= ', "map": {"selectable": true, "legend": true, "nav": true'
      . ', "tooltip": "@function () { return this.name + (this.value ?  \' portfolio\' : \' overview page\'); }@"'
      . ', "events": "@{ click: function () { window.location.href = \'/book/countries/\' + this.id; } }@"'
      . '}';
    $vcc .= '}';

    $block['subject'] = NULL;
    $block['content'] = array('#markup' => '');
    $block['vis'] = lbvc_plugin_map_formatter(array(
      'type' => 'map',
      'jsid' => 'worldMap',
      'vid' => 'block-landbook-view-coda-lbvc-map-wrapper',
      'vcc' => $vcc,
    ));
    break;

  case 'lbvc_map_country':
    $vcc = '{ "debug": true, "iso3": "@Drupal.settings.iso3@"';
    $vcc .= ', "series": [ {"name": "country Region", "data": [ {"id": "@Drupal.settings.iso3@", "value": 100} ] } ]';
    $vcc .= ', "colors": { "background": "#FFFFFF", "hover": "#F5A623", "select": "#F5A623", "borders": "#FFFFFF", "min": "#BBD6D8", "max": "#BBD6D8", "na": "#BBD6D8" }';
    $vcc .= ', "map": {"zoom": 2, "height": 200, "selectable": true, "legend": false'
      . ', "tooltip": "@function () { return \'Click to visit \' + this.name; }@"'
      . '}';
    $vcc .= '}';
    $block['subject'] = NULL;
    $block['content'] = array('#markup' => '');
    $block['vis'] = lbvc_plugin_map_formatter(array(
      'type' => 'map',
      'jsid' => 'countryRegionMap',
      'vid' => 'block-landbook-view-coda-lbvc-map-country-wrapper',
      'vcc' => $vcc,
    ));
    /* dsm($vcc); */
    /* dpm($block); */
    break;

  case 'lbvc_map_mlike':
    $vcc = '{ "debug": true, "iso3": "VNM"';
    $vcc .= ', "series": [ {"name": "Mekong countries", "cursor": "pointer", "data": [ {"id": "VNM", "value": 0}, {"id": "LAO", "value": 1}, {"id": "KHM", "value": 1}, {"id": "THA", "value": 1}, {"id": "MMR", "value": 1} ] } ]';
    $vcc .= ', "colors": { "background": "#FFFFFF", "borders": "#FFFFFF", "hover": "#F5A623", "select": "#F9B122", "max": "#F9B122", "min": "#D1DB47", "na": "#BBD6D8" }';
    $vcc .= ', "map": {"selectable": true, "zoom": 3, "legend": true'
      // Need 'unwrapping'
      . ', "tooltip": "@function () { return \'Click to visit \' + this.name; }@"'
      . ', "events": "@{ click: function () { window.location.href = \'/book/countries/\' + this.id; } }@"'
      . '}';
    $vcc .= '}';
    $vis = lbvc_plugin_map_formatter(array(
      'type' => 'map',
      'jsid' => 'mlikeMap',
      'vid' => 'block-landbook-view-coda-lbvc-map-mlike-wrapper',
      'vcc' => $vcc,
    ));
    //dpm($vis, 'map');
    $block['subject'] = NULL;
    $block['content'] = array('#markup' => '');
    $block['vis'] = $vis;
    break;
  }
  return $block;
}
