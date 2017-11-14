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

// Add body + format to the following blocks
// twitter_blocks
// sdgs_timeline
function landbook_block_view_alter(&$data, $block) {
  if ($block->module == 'twitter_block' ||
    ($block->module == 'views' && $block->delta == 'sdgs_timeline-main')) {
    $delta = $block->module . '-' . $block->delta;
    $btest = db_select('block_custom', 'b')
      ->fields('b', array('body', 'format'))->condition('info', $delta)->execute()->fetchAll()[0];
    $markup = check_markup($btest->body, $btest->format, '', TRUE);
    $data['content'] = array(
      array('#markup' => $markup),
      $data['content'], // Keep original block content
    );
  }
}

// Save body for those blocks
function landbook_block_save($delta='', $edit = array()) {
  $bdelta = $delta['delta']['#value'];
  $module = $delta['module']['#value'];
  if ($module == 'twitter_block' || $bdelta == 'sdgs_timeline-main') {
    db_update('block_custom')
      ->fields(array(
        'body' => $edit['values']['body']['value'],
        'format' => $edit['values']['body']['format'],
      ))
      ->condition('info', $module. '-' . $bdelta)
      ->execute();
  }
}

// Add textarea for the body
function landbook_form_alter(&$form, &$form_state, $form_id) {
  if (!isset($form['module']) || !isset($form['delta'])) { return ; }
  $delta = $form['delta']['#value'];
  $module = $form['module']['#value'];
  if ($module == 'twitter_block' || $delta == 'sdgs_timeline-main') {
    $edit = array(
      'body'=> '',
      'format'=> 'filtered_html',
      'info' => $module . '-' . $delta
    );
    $form['info'] = array('#type' => 'value', '#value' => $edit['info']);
    $btest = db_select('block_custom', 'b')->fields('b', array('bid'))->condition('info', $edit['info'])->execute()->fetch();
    if (!$btest) {
      $bdelta = db_insert('block_custom')->fields($edit)->execute();
    } else {
      $edit = db_select('block_custom', 'b')->fields('b')->condition('info', $edit['info'])->execute()->fetchAssoc();
    }
    // Same as in Drupal core Block module
    $form['settings']['body_field']['body'] = array(
      '#type' => 'text_format',
      '#title' => t('Block body'),
      '#default_value' => $edit['body'],
      '#format' => isset($edit['format']) ? $edit['format'] : NULL,
      '#rows' => 15,
      '#description' => t('The content of the block as shown to the user.'),
      '#required' => TRUE,
      '#weight' => -17,
    );
    $form['#submit'][] = 'landbook_block_save';
  }
}



/**
 * Blocks for Landbook country page sections
 * Each block (template file) calls countries_related content view(s)
 */
function landbook_block_info() {
    $blocks['disclaimer_block'] = array(
        'info'          => t('Landbook country page Disclaimer'),
        'status'        => TRUE,
        'region'        => 'content',
        'visibility'    => BLOCK_VISIBILITY_LISTED,
        'pages'         => "book/countries/*",
        'weight'        => -39
    );
    $blocks['media'] = array(
        'info'          => t('Landbook Media'),
        'status'        => TRUE,
        'region'        => 'content',
        'visibility'    => BLOCK_VISIBILITY_LISTED,
        'pages'         => "book/countries/*\nbook/thematic/*",
        'weight'        => 23
    );
    $blocks['infographics'] = array(
        'info'          => t('Landbook Infographics'),
        'status'        => TRUE,
        'region'        => 'content',
        'visibility'    => BLOCK_VISIBILITY_LISTED,
        'pages'         => "book/countries/*\n",
        'weight'        => 15
    );
    return $blocks;
}

function landbook_block_view($delta = '') {
    $block = array();
    switch ($delta) {
    case 'disclaimer_block' :
        $block['subject'] = '';
        $block['content'] = landbook_block_body($delta);
        break;
    case 'media' :
        $block['subject'] = t('Media');
        $block['content'] = landbook_block_body($delta);
        break;
    case 'infographics' :
        $block['subject'] = t('Infographics');
        $block['content'] = landbook_block_body($delta);
        break;
    }
    return $block;
}

function landbook_block_body($name) {
    $default = array(
        'disclaimer_block' => '<p><b>Disclaimer:</b> The data displayed on the Land Portal is provided by third parties indicated as the data source or as the data provider. The Land Portal team is constantly working to ensure the highest possible standard of data quality and accuracy, yet the data is by its nature approximate and will contain some inaccuracies. The data may contain errors introduced by the data provider(s) and/or by the Land Portal team. In addition, this page allows you to compare data from different sources, but not all indicators are necessarily statistically comparable. The Land Portal Foundation (A) expressly disclaims the accuracy, adequacy, or completeness of any data and (B) shall not be liable for any errors, omissions or other defects in, delays or interruptions in such data, or for any actions taken in reliance thereon. Neither the Land Portal Foundation nor any of its data providers will be liable for any damages relating to your use of the data provided herein.</p>',
    );
    $output = variable_get('landbook-' . $name, (isset($default[$name]) ? $default[$name] : ''));
    if (empty($output)) {
      $output = (isset($default[$name]) ? $default[$name] : ' ');
    }
    return $output;
}
