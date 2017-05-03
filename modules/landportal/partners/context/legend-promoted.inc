<?php

$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'partners-legend-promoted';
$context->description = '';
$context->tag = 'partners';
$context->conditions = array(
  'views' => array(
    'values' => array(
      'partners_wrapper:legend' => 'partners_wrapper:legend',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'views-partners_content-legendp' => array(
        'module' => 'views',
        'delta' => 'partners_content-legendp',
        'region' => 'header',
        'weight' => '-79',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('partners');
