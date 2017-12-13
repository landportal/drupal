<?php

$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'country-content';
$context->description = 'Country related content';
$context->tag = 'related content';
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
      'views-country_narrative-last_vis' => array(
        'module' => 'views',
        'delta' => 'country_narrative-last_vis',
        'region' => 'content',
        'weight' => '3',
      ),
      'views-country_content-news' => array(
        'module' => 'views',
        'delta' => 'country_content-news',
        'region' => 'content',
        'weight' => '5',
      ),
      'views-country_content-blogs' => array(
        'module' => 'views',
        'delta' => 'country_content-blogs',
        'region' => 'content',
        'weight' => '6',
      ),
      'views-country_content-debates' => array(
        'module' => 'views',
        'delta' => 'country_content-debates',
        'region' => 'content',
        'weight' => '7',
      ),
      'views-country_content-events' => array(
        'module' => 'views',
        'delta' => 'country_content-events',
        'region' => 'content',
        'weight' => '8',
      ),
      'views-country_content-library' => array(
        'module' => 'views',
        'delta' => 'country_content-library',
        'region' => 'content',
        'weight' => '8',
      ),
      'views-country_content-partners' => array(
        'module' => 'views',
        'delta' => 'country_content-partners',
        'region' => 'content',
        'weight' => '10',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('Country related content');
t('related content');
