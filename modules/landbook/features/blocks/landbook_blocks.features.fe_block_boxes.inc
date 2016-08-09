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

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Note Infografic Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'infografic';
  $fe_block_boxes->body = 'Note: Some Indicators might have multiple values (e.g. Green-Orange), which might refers to different localities or categories of people. For more information please refers to specific country reports and to the methodology made available by the original data source/provider: <a href="http://go.worldbank.org/21M7S7AZO0" target="_blank">The Land GovernanceAssessment Framework (LGAF) website of the World Bank</a>';

  $export['infografic'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Spider Note Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'spider_note';
  $fe_block_boxes->body = 'Note: This spider chart reflects the level of development of a country on four dimensions, which are measured using four internationally accepted indexes:
<p class="m-xs-top no-m-bottom"><a href="https://landportal.info/book/indicators/oecd-sigi">The Social Institutions and Gender Index (SIGI) by OECD</a></p>

<p class="no-m-top no-m-bottom"><a href="https://landportal.info/book/indicators/wb-sipovgini">The GINI Index by the World Bank</a></p>

<p class="no-m-top no-m-bottom"><a href="https://landportal.info/book/indicators/undp-hdi-index">The Human Development Index (HDI) by UNDP</a></p>

<p><a href="https://landportal.info/book/indicators/ifpri-ghi">The Global Hunger Index (GHI) by IFPRI</a></p>

<p>All original values for the indexes have been rescaled from 0 to 100, where 0 reflects low development levels and 100 reflects high development levels.For each index the value for the most recent available year is selected by default".</p>
';

  $export['spider_note'] = $fe_block_boxes;

  return $export;
}
