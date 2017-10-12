<?php
/**
 * Land Portal View Coda
 *
 * Module blocks
 * 
 * Author: Jules <jules@landportal.info>
 */

function lbvc_plugin_map_block_info() {
  $blocks = array();
  $blocks['lbvc_map'] = array(
    'info'            => t('LBVC: Map'),
    'status'          => TRUE,
    'region'          => -1,
  );
  return $blocks;
}

function lbvc_plugin_map_block_view($delta) {
  $block = array();
  switch ($delta) {

  case 'lbvc_map':
    $block['subject'] = t('Mappy map');
    $block['content'] = array(
      '#markup' => '<pre>here is map</pre>',
    );
    break;
  }
  return $block;
}
