<?php

$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'partners-mlike-wrapper';
$context->description = '';
$context->tag = 'partners';
$context->conditions = array(
  'views' => array(
    'values' => array(
      'partners_wrapper:page' => 'partners_wrapper:page',
    ),
  ),
);
$context->reactions = array(
  'context_og_reaction_set_group_context' => array(
    'group' => '41826',
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('partners');
