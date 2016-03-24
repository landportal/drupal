<?php

/**
 * @file
 * Apply UTF-8 Encoding.
 */

$plugin = array(
  'form' => 'feeds_tamper_utf8_encode_form',
  'callback' => 'feeds_tamper_utf8_encode_callback',
  'name' => 'UTF-8 Encode',
  'multi' => 'loop',
  'category' => 'Other',
);
/**
 * Add our plugin to the plugins form for feed tamper.
 */
function feeds_tamper_utf8_encode_form($importer, $element_key, $settings) {
  $form = array();
  $form['html'] = array(
    '#markup' => t('Apply UTF-8 encoding to field'),
  );
  $form['encoding'] = array(
    '#type' => 'select',
    '#title' => t('Encoding'),
    '#description' => t('Input character encoding to convert in UTF-8.'),
    '#required' => TRUE,
    '#options' => array(
      'cp1251'        =>  'CP1251',
      'cp1252'        =>  'CP1252',
    ),
    '#default_value' => isset($settings['encoding']) ? $settings['encoding'] : '',
  );
  return $form;
}

/**
 * Encode the field and return the encoded value.
 */
function feeds_tamper_utf8_encode_callback($result, $item_key, $element_key, &$field, $settings, $source) {
  switch ($settings['encoding']) {
  case 'cp1251':
    $encoding = 'CP1251';
    break;
  case 'cp1252':
    $encoding = 'CP1252';
    break;
  }
  $field = mb_convert_encoding($field,"UTF-8",$encoding);
}
