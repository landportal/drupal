<?php
/**
 * Land Portal View Coda
 *
 * Module blocks
 * 
 * Author: Jules <jules@landportal.info>
 */

global $plugins_blocks;
$plugins_blocks = array();
//$module_path = drupal_get_path('module', 'landbook_view_coda');
$files = file_scan_directory(dirname(__FILE__) . '/plugins', '/blocks.inc$/');
foreach($files as $file) {
  include_once $file->uri;
  //dpm($file, 'blocks: ' . basename(dirname($file->uri)));
  $plugins_blocks[] = basename(dirname($file->uri)); // the directory or this file
}
//dpm($plugins_blocks, 'PB');

/* Drupal administration form for block */
function landbook_view_coda_block_configure($delta='') {
  $form = NULL;
  switch ($delta) {
  default:
    $form = array('vis' => array(
      '#type' => 'fieldgroup',
      'items' => lbvc__forms_vis(),
    ));
  }
  //dpm($form, 'hello ' . $delta);
  return $form;
}

function landbook_view_coda_block_save($delta = '', $edit = array()) {
  if (!in_array($delta, array('lbcp_lgaf', 'lbcp_spider'))) return ;
  variable_set('landbook-' . $delta, $edit['text_body']['value']);
}



function landbook_view_coda_block_info() {
  global $plugins_blocks;
  $blocks = array();

  foreach($plugins_blocks as $p) {
    $fxptr = 'lbvc_plugin_' . $p . '_block_info';
    if (function_exists($fxptr)) {
      $blocks += $fxptr();
    }
  }
  return $blocks;
}

function landbook_view_coda_block_view($delta = '') {
  global $plugins_blocks;

  // Automatically load blocks from 'plugins'
  //dpm($plugins_blocks, 'pb');
//  $block = '';
  foreach($plugins_blocks as $p) {
    $fxptr = 'lbvc_plugin_' . $p . '_block_view';
    if (function_exists($fxptr)) {
      $block = $fxptr($delta);
      if ($block) break;
    }
  }
  // TODO : some automagic here for iso3 from field_related_geo
  $jsAttr = 'iso3: Drupal.settings.iso3';
//  dsm($jsAttr . '<br/><br/>');
  return $block;
}
