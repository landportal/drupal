<?php
/**
 * @file
 * This module provide an interface to the landbook section of the Landportal.
 *
 * The Landportal landbook
 *
 * Original work by: WESO (http://www.weso.es/)
 * Drupal refactoring: Jules <jules@ker.bz>
 */


/**
 * Blocks for Landbook country page sections
 * Each block (template file) calls countries_related content view(s)
 */
function landbook_block_info() {
    $blocks['disclaimer'] = array(
        'info' => t('Landbook country page disclaimer'),
        'status' => TRUE,
        'region' => 'content',
        'visibility'      => BLOCK_VISIBILITY_LISTED,
        'pages'           => "book/countries/*",
        'weight'      => -10
    );
    $blocks['media_block'] = array(
        'info' => t('Landbook country page Media'),
        'status' => TRUE,
        'region' => 'content',
        'visibility'      => BLOCK_VISIBILITY_LISTED,
        'pages'           => "book/countries/*",
        'weight'      => 23
    );
    $blocks['partners_block'] = array(
        'info' => t('Landbook country page Partners'),
        'status' => TRUE,
        'region' => 'content',
        'visibility'      => BLOCK_VISIBILITY_LISTED,
        'pages'           => "book/countries/*",
        'weight'      => 24
    );
    $blocks['library_block'] = array(
        'info' => t('Landbook country page Library'),
        'status' => TRUE,
        'region' => 'content',
        'visibility'      => BLOCK_VISIBILITY_LISTED,
        'pages'           => "book/countries/*",
        'weight'      => 25
    );
    return $blocks;
}

function landbook_block_view($delta = '') {
    $block = array();
    switch ($delta) {
    case 'disclaimer' :
        $block['classes'] = 'bg-green';
        $block['subject'] = '';//t('Disclaimer');
        $block['content'] = array(
            '#markup' => landbook_block_body($delta),
            /* '#attached' => array( */
            /*     'css' */
            /* ) */
        );
        break;
    case 'media_block' :
        $block['subject'] = t('Media');
        $block['content'] = array('#theme' => 'media_block');
        break;
    case 'partners_block' :
        $block['subject'] = t('Partners');
        $block['content'] = array('#theme' => 'partners_block');
        break;
    case 'library_block' :
        $block['subject'] = t('Library');
        $block['content'] = array('#theme' => 'library_block');
        break;
    }
    return $block;
}

function landbook_block_body($name) {
    $default = array(
        'disclaimer' => '<b>Disclaimer:</b> The data displayed on the Land Portal is provided by third parts indicated as the data source or as the data provider. The Land Portal team is constantly working to ensure the highest possible standard of data quality and accuracy, yet the data is by its nature approximate and will contain some inaccuracies. The data may contain errors introduced by the data provider(s) and/or by the Land Portal team. In addition, this page allows you to compare data from different sources, but not all indicators are necessarily statistically comparable. The Land Portal Foundation (A) expressly disclaims the accuracy, adequacy, or completeness of any data and (B) shall not be liable for any errors, omissions or other defects in, delays or interruptions in such data, or for any actions taken in reliance thereon. Neither the Land Portal Foundation nor any of its data providers will be liable for any damages relating to your use of the data provided herein.'
    );
    
  //$default: The default value to use if this variable has never been set.
  $output = variable_get('lbb-' . $name, $default[$name]);
  if (empty($output)) {
      $output = $default[$name];
  }
  return $output;
}

