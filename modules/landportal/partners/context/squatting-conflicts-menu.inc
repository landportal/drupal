<?php

$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'sqatting-conflicts-menu';
$context->description = '';
$context->tag = 'partners';
$context->conditions = array(
  'context_og_condition_group_node' => array(
    'values' => array(
      71004 => 71004,
    ),
    'options' => array(
      'node_form' => 1,
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'menu-menu-squatting-conflicts' => array(
        'module' => 'menu',
        'delta' => 'menu-squatting-conflicts',
        'region' => 'header',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('partners');
