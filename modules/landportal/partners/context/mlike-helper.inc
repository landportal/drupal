<?php

$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'partners_mlike_helper';
$context->description = '';
$context->tag = '';
$context->conditions = array(
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
      'views-partners_site-block' => array(
        'module' => 'views',
        'delta' => 'partners_site-mlike',
        'region' => 'help',
        'weight' => '9',
      ),
    ),
  ),
);
$context->condition_mode = 1;
