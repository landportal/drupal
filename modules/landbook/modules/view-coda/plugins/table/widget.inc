<?php
/**
 * Land Portal View Coda
 *
 * Visualization plugin: map
 * 
 * Author: Jules <jules@landportal.info>
 */


function lbvc_plugin_table_widget_form($item) {
  dpm($item, 'table item');
  // @@@ explode option s
  $opts = array(
    '#title' => t('Map options'),
    '#type' => 'checkboxes',
    '#options' => drupal_map_assoc(
      array(t('nav'), t('zoom'), t('legend'))
    )
  );
  return $opts;
}
