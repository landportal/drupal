<?php

$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'partners-mlike-helper';
$context->description = '';
$context->tag = 'partners';
$context->conditions = array(
  'context_og_condition_group_node' => array(
    'values' => array(
      41826 => 41826,
    ),
    'options' => array(
      'node_form' => 1,
    ),
  ),
  'node' => array(
    'values' => array(
      'partners' => 'partners',
      'partners_page' => 'partners_page',
    ),
    'options' => array(
      'node_form' => '2',
    ),
  ),
  'user' => array(
    'values' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'landportal' => 'landportal',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'block-6' => array(
        'module' => 'block',
        'delta' => '6',
        'region' => 'help',
        'weight' => '-10',
      ),
      'views-partners_site-mlike' => array(
        'module' => 'views',
        'delta' => 'partners_site-mlike',
        'region' => 'help',
        'weight' => '9',
      ),
    ),
  ),
);
$context->condition_mode = 1;

// Translatables
// Included for use with string extractors like potx.
t('partners');
