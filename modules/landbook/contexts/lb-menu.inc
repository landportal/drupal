<?php

$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'lb-menu';
$context->description = 'Land Book Header Menu';
$context->tag = 'landbook';
$context->conditions = array(
  'path' => array(
    'values' => array(
      'book' => 'book',
      'book/*' => 'book/*',
    ),
  ),
  'taxonomy_term' => array(
    'values' => array(
      'countries' => 'countries',
      'datasets' => 'datasets',
      'indicators' => 'indicators',
    ),
    'options' => array(
      'term_form' => '1',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'menu-landbook-menu' => array(
        'module' => 'menu',
        'delta' => 'landbook-menu',
        'region' => 'header',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('landbook');
