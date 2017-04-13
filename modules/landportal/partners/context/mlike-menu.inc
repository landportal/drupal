<?php

$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'partners-mlike-menu';
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
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'views-partners_content-logo' => array(
        'module' => 'views',
        'delta' => 'partners_content-logo',
        'region' => 'header',
        'weight' => '-10',
      ),
      'menu-menu-partners-mlike' => array(
        'module' => 'menu',
        'delta' => 'menu-partners-mlike',
        'region' => 'header',
        'weight' => '-9',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('partners');
