<?php
/* LEGEND */

$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'partners-legend-kpmg-faq';
$context->description = '';
$context->tag = 'partners';
$context->conditions = array(
  'path' => array(
    'values' => array(
      'partners/legend/kpmg-challenge-fund' => 'partners/legend/kpmg-challenge-fund',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'webform-client-block-14275' => array(
        'module' => 'webform',
        'delta' => 'client-block-14275',
        'region' => 'content',
        'weight' => '1',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('partners');
