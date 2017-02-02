<?php

$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'partners-base';
$context->description = '';
$context->tag = 'partners';
$context->conditions = array(
  'node' => array(
    'values' => array(
      'partners' => 'partners',
      'partners_page' => 'partners_page',
    ),
    'options' => array(
      'node_form' => '0',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'views-partners_content-logo' => array(
        'module' => 'views',
        'delta' => 'partners_content-logo',
        'region' => 'header',
        'weight' => '-60',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('partners');
