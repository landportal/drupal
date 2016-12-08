<?php
/**
 * @file
 * landbook.context.inc
 * To work with ctools context API, you need to declare context exports in the .info
 */

/**
 * Implements hook_context_default_contexts().
 */
function landbook_context_default_contexts() {
  $export = array();

  $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'landbook_menu_context';
$context->description = '';
$context->tag = 'landbook';
$context->conditions = array(
  'path' => array(
    'values' => array(
      'book' => 'book',
      'book/*' => 'book/*',
    ),
  ),
  'taxonomy_term' => array(
    'values' => array(
      'countries' => 'countries',
      'datasets' => 'datasets',
      'indicators' => 'indicators',
    ),
    'options' => array(
      'term_form' => '1',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'menu-landbook-menu' => array(
        'module' => 'menu',
        'delta' => 'landbook-menu',
        'region' => 'header',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 0;
  $export[$context->name] = $context;

// Translatables
// Included for use with string extractors like potx.
t('landbook');

  /** Context export
   * from: /admin/structure/context/list/landbook-dataset-indicators/export
   */
  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landbook-dataset-indicators';
  $context->description = 'Show the indicators of a dataset';
  $context->tag = 'landbook';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'datasets' => 'datasets',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-landbook_indicators-block_1' => array(
          'module' => 'views',
          'delta' => 'landbook_indicators-block_1',
          'region' => 'content',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  /**
   * End of context export
   */
  $export[$context->name] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'view-coda-indicators';
  $context->description = '';
  $context->tag = 'landbook';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'indicators' => 'indicators',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'landbook_view_coda-indicator_dl' => array(
          'module' => 'landbook_view_coda',
          'delta' => 'indicator_dl',
          'region' => 'content',
          'weight' => '-10',
        ),
        'landbook_vis_map-compare_map' => array(
          'module' => 'landbook_vis_map',
          'delta' => 'compare_map',
          'region' => 'content',
          'weight' => '-9',
        ),
        'landbook_view_coda-indicator_ranking' => array(
          'module' => 'landbook_view_coda',
          'delta' => 'indicator_ranking',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  /**
   * End of context export
   */
  $export[$context->name] = $context;

// Translatables
// Included for use with string extractors like potx.
  t('Show the indicators of a dataset');
  t('landbook');

    
  return $export;
}
