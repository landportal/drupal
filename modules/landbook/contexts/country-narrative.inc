<?php

$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'country-narrative';
$context->description = 'Country narrative blocks';
$context->tag = 'narrative';
$context->conditions = array(
  'node' => array(
    'values' => array(
      'landbook_country' => 'landbook_country',
    ),
    'options' => array(
      'node_form' => '0',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'landbook_lgaf-vis' => array(
        'module' => 'landbook_lgaf',
        'delta' => 'vis',
        'region' => 'content',
        'weight' => '4',
      ),
      'landbook_vggt-vis_vggt' => array(
        'module' => 'landbook_vggt',
        'delta' => 'vis_vggt',
        'region' => 'content',
        'weight' => '5',
      ),
      'landbook-disclaimer_block' => array(
        'module' => 'landbook',
        'delta' => 'disclaimer_block',
        'region' => 'content',
        'weight' => '90',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('Country narrative blocks');
t('narrative');
