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
