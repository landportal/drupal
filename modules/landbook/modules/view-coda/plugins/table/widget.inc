<?php
/**
 * Land Portal View Coda
 *
 * Visualization plugin: map
 * 
 * Author: Jules <jules@landportal.info>
 */


function lbvc_plugin_table_widget_form($item) {
//  dpm($item, 'table item');
  // @@@ explode option s
  $opts = array(
    '#title' => t('TABLE options'),
    '#type' => 'checkboxes',
    '#options' => array(
      'year' => 'Show years boundaries',
      'coverage' =>  'Display coverage',
      'country' => 'Show country',
    )
  );
  return $opts;
}
