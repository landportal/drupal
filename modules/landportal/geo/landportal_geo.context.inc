<?php

$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'cp-related';
$context->description = 'CP related content';
$context->tag = 'countries, landbook';
$context->conditions = array(
  'taxonomy_term' => array(
    'values' => array(
      'regions' => 'regions',
    ),
    'options' => array(
      'term_form' => '0',
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
        'weight' => '-10',
      ),
      'views-country_content-news' => array(
        'module' => 'views',
        'delta' => 'country_content-news',
        'region' => 'content',
        'weight' => '14',
      ),
      'views-country_content-blogs' => array(
        'module' => 'views',
        'delta' => 'country_content-blogs',
        'region' => 'content',
        'weight' => '15',
      ),
      'views-country_content-debates' => array(
        'module' => 'views',
        'delta' => 'country_content-debates',
        'region' => 'content',
        'weight' => '16',
      ),
      'views-country_content-events' => array(
        'module' => 'views',
        'delta' => 'country_content-events',
        'region' => 'content',
        'weight' => '17',
      ),
      'views-country_content-partners' => array(
        'module' => 'views',
        'delta' => 'country_content-partners',
        'region' => 'content',
        'weight' => '18',
      ),
      'views-country_content-library' => array(
        'module' => 'views',
        'delta' => 'country_content-library',
        'region' => 'content',
        'weight' => '19',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('CP related content');
t('countries, landbook');
