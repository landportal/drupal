<?php
/**
 * @file
 * landdebate.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function landdebate_context_default_contexts() {
  $export = array();

$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'debate-menu-context';
$context->description = 'Contextually display landdebate section header menu';
$context->tag = 'landdebate';
$context->conditions = array(
  'node' => array(
    'values' => array(
      'blog_post' => 'blog_post',
      'debate' => 'debate',
      'event' => 'event',
      'news' => 'news',
      'organization' => 'organization',
    ),
    'options' => array(
      'node_form' => '1',
    ),
  ),
  'path' => array(
    'values' => array(
      'debate' => 'debate',
      'debate/*' => 'debate/*',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'menu-landdebate-menu' => array(
        'module' => 'menu',
        'delta' => 'landdebate-menu',
        'region' => 'header',
        'weight' => '1',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('Contextually display landdebate section header menu');
t('landdebate');
  
  $export[$context->name] = $context;



  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'debate-twitter-context';
  $context->description = 'Contextually display twitter for some landdebate CT';
  $context->tag = 'landdebate';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'debate' => 'debate',
        'event' => 'event',
        'news' => 'news',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'landportal_blocks-lp_twitter' => array(
          'module' => 'landportal_blocks',
          'delta' => 'lp_twitter',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contextually display twitter for some landdebate CT');
  t('landdebate');
  
  $export[$context->name] = $context;

  return $export;
}
