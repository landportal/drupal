<?php

$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'partners-legend-menu';
$context->description = '';
$context->tag = 'partners';
$context->conditions = array(
  'context_og_condition_group_node' => array(
    'values' => array(
      36570 => 36570,
    ),
    'options' => array(
      'node_form' => 1,
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'views-partners_content-promoted' => array(
        'module' => 'views',
        'delta' => 'partners_content-promoted',
        'region' => 'header',
        'weight' => '-79',
      ),
      'menu-menu-legend' => array(
        'module' => 'menu',
        'delta' => 'menu-legend',
        'region' => 'header',
        'weight' => '-78',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('partners');
