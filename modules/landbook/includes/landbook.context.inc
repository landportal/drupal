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

// Translatables
// Included for use with string extractors like potx.
t('Show the indicators of a dataset');
t('landbook');

    /**
     * End of context export
     * ADD THIS LINE
     */
    $export[$context->name] = $context;
    
    return $export;
}
