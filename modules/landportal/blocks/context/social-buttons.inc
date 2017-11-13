<?php

$context = new stdClass();
$context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'social-buttons';
$context->description = '';
$context->tag = 'landcommunity';
$context->conditions = array(
  'node' => array(
    'values' => array(
      'blog_post' => 'blog_post',
      'debate' => 'debate',
      'event' => 'event',
      'landbook_country' => 'landbook_country',
      'landlibrary_resource' => 'landlibrary_resource',
      'news' => 'news',
      'organization' => 'organization',
      'page' => 'page',
      'thematic_narrative' => 'thematic_narrative',
    ),
    'options' => array(
      'node_form' => '0',
    ),
  ),
  'taxonomy_term' => array(
    'values' => array(
      'datasets' => 'datasets',
      'indicators' => 'indicators',
      'landlibrary_resource_type' => 'landlibrary_resource_type',
      'landvoc_concepts' => 'landvoc_concepts',
      'licences' => 'licences',
      'organization_types' => 'organization_types',
      'overarching_categories' => 'overarching_categories',
      'regions' => 'regions',
      'themes' => 'themes',
    ),
    'options' => array(
      'term_form' => '0',
    ),
  ),
  'views' => array(
    'values' => array(
      'domains:page_1' => 'domains:page_1',
      'landbook_countries:page' => 'landbook_countries:page',
      'landbook_countries:page_1' => 'landbook_countries:page_1',
      'themes:page_1' => 'themes:page_1',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'landportal_blocks-lp_share' => array(
        'module' => 'landportal_blocks',
        'delta' => 'lp_share',
        'region' => 'footer',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 0;
