<?php

$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'partners-legend-contact';
$context->description = '';
$context->tag = 'partners';
$context->conditions = array(
  'context_og_condition_group_node' => array(
    'values' => array(
      36570 => 36570,
    ),
    'options' => array(
      'node_form' => 0,
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'block-3' => array(
        'module' => 'block',
        'delta' => '3',
        'region' => 'content',
        'weight' => '8',
      ),
      'mailchimp_signup-legend_bulletin' => array(
        'module' => 'mailchimp_signup',
        'delta' => 'legend_bulletin',
        'region' => 'content',
        'weight' => '9',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('partners');
