<?php

$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'partners-mlike-featured';
$context->description = '';
$context->tag = 'partners';
$context->conditions = array(
  'context_og_condition_group_node' => array(
    'values' => array(
      41826 => 41826,
    ),
    'options' => array(
      'node_form' => 0,
    ),
  ),
  'path' => array(
    'values' => array(
      'partners/mlike*' => 'partners/mlike*',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'views-partners_content-featured' => array(
        'module' => 'views',
        'delta' => 'partners_content-featured',
        'region' => 'content',
        'weight' => '5',
      ),
    ),
  ),
);
$context->condition_mode = 1;

// Translatables
// Included for use with string extractors like potx.
t('partners');
