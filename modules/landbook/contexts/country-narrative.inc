<?php

$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'country-narrative';
$context->description = 'Country narrative';
$context->tag = 'countries, landbook';
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
      'landbook_view_coda-lbvc_map_country' => array(
        'module' => 'landbook_view_coda',
        'delta' => 'lbvc_map_country',
        'region' => 'highlighted',
        'weight' => '10',
      ),
      'landbook-infographics' => array(
        'module' => 'landbook',
        'delta' => 'infographics',
        'region' => 'content',
        'weight' => '11',
      ),
      'landbook_lgaf-vis' => array(
        'module' => 'landbook_lgaf',
        'delta' => 'vis',
        'region' => 'content',
        'weight' => '12',
      ),
      'landbook_vggt-vis_vggt' => array(
        'module' => 'landbook_vggt',
        'delta' => 'vis_vggt',
        'region' => 'content',
        'weight' => '13',
      ),
      'landbook-disclaimer_block' => array(
        'module' => 'landbook',
        'delta' => 'disclaimer_block',
        'region' => 'content',
        'weight' => '14',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('Country narrative');
t('countries, landbook');
