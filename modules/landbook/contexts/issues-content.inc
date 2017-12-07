<?php

$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'issues-content';
$context->description = 'Thematic related content';
$context->tag = 'related content';
$context->conditions = array(
  'taxonomy_term' => array(
    'values' => array(
      'overarching_categories' => 'overarching_categories',
      'themes' => 'themes',
    ),
    'options' => array(
      'term_form' => '0',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'landbook-media' => array(
        'module' => 'landbook',
        'delta' => 'media',
        'region' => 'content',
        'weight' => '3',
      ),
      'views-thematic_content-news' => array(
        'module' => 'views',
        'delta' => 'thematic_content-news',
        'region' => 'content',
        'weight' => '4',
      ),
      'views-thematic_content-blogs' => array(
        'module' => 'views',
        'delta' => 'thematic_content-blogs',
        'region' => 'content',
        'weight' => '5',
      ),
      'views-thematic_content-debates' => array(
        'module' => 'views',
        'delta' => 'thematic_content-debates',
        'region' => 'content',
        'weight' => '6',
      ),
      'views-thematic_content-events' => array(
        'module' => 'views',
        'delta' => 'thematic_content-events',
        'region' => 'content',
        'weight' => '7',
      ),
      'views-thematic_content-partners' => array(
        'module' => 'views',
        'delta' => 'thematic_content-partners',
        'region' => 'content',
        'weight' => '8',
      ),
      'views-thematic_content-library' => array(
        'module' => 'views',
        'delta' => 'thematic_content-library',
        'region' => 'content',
        'weight' => '9',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('Thematic related content');
t('related content');
