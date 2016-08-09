<?php
/**
 * @file
 * landbook_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function landbook_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Book Disclaimer Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'disclaimer_block';
  $fe_block_boxes->body = '<span style="font-size:12px;"><strong>Disclaimer:</strong> The data displayed on the Land Portal is provided by third parts indicated as the data source or as the data provider. The Land Portal team is constantly working to ensure the highest possible standard of data quality and accuracy, yet the data is by its nature approximate and will contain some inaccuracies. The data may contain errors introduced by the data provider(s) and/or by the Land Portal team. In addition, this page allows you to compare data from different sources, but not all indicators are necessarily statistically comparable. The Land Portal Foundation (A) expressly disclaims the accuracy, adequacy, or completeness of any data and (B) shall not be liable for any errors, omissions or other defects in, delays or interruptions in such data, or for any actions taken in reliance thereon. Neither the Land Portal Foundation nor any of its data providers will be liable for any damages relating to your use of the data provided herein</span>';

  $export['disclaimer_block'] = $fe_block_boxes;

  return $export;
}
