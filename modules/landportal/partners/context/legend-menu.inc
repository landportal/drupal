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
      'node_form' => 0,
    ),
  ),
);
$context->reactions = array(
  'context_og_reaction_set_group_context' => array(
    'group' => '36570',
  ),
);
$context->condition_mode = 0;
