<?php

/* -------------------- Implementation of hooks used with Feeds ------------------- */

/**
 * Tasks to be done after items are imported, such as rebuilding the taxonomies or
 * creating new vocabulary terms for imported assets' categories.
 */
function idsimport_feeds_after_import($source) {
  $processor = $source->importer->processor;
  $parser = $source->importer->parser;
  if ($parser instanceOf IdsCategoriesParser) {
    if ($vocabulary = $processor->vocabulary()) {
      idsimport_build_category_tree($vocabulary->vid);
      drupal_set_message(t('Rebuilt category hierarchy.'));
    }
  }
  elseif (($parser instanceOf IdsDocumentsParser) || ($parser instanceOf IdsOrganisationsParser) || ($parser instanceOf IdsCountriesParser)) {
    if ($items = $processor->parsed_items) {
      idsimport_imported_assets_categories($items);
    }
  }
}

/**
 * Implements hook_ctools_plugin_api().
 */
function idsimport_ctools_plugin_api() {
  cache_clear_all('plugins:feeds:plugins', 'cache');
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements Feeds' hook_feeds_plugins().
 * Declares available Fetcher, Parser and Processor.
 */
function idsimport_feeds_plugins() {
  cache_clear_all('plugins:feeds:plugins', 'cache');
  module_load_include('inc', 'idsimport', 'feeds');
  $info = array();
  $info['IdsAssetsFetcher'] = array(
    'name' => 'IDS Assets Fetcher',
    'description' => 'Fetch IDS assets.',
    'help' => 'Fetch IDS assets.',
    'handler' => array(
      'parent' => 'FeedsFetcher',
      'class' => 'IdsAssetsFetcher',
      'file' => 'idsimport.feeds.inc',
      'path' => drupal_get_path('module', 'idsimport'),
    ),
  );
  $info['IdsCategoriesFetcher'] = array(
    'name' => 'IDS Categories Fetcher',
    'description' => 'Fetch IDS categories.',
    'help' => 'Fetch IDS categories.',
    'handler' => array(
      'parent' => 'FeedsFetcher',
      'class' => 'IdsCategoriesFetcher',
      'file' => 'idsimport.feeds.inc',
      'path' => drupal_get_path('module', 'idsimport'),
    ),
  );
  $info['IdsAssetsParser'] = array(
    'name' => 'IDS Assets Parser',
    'description' => 'Parse IDS assets.',
    'help' => 'Parse IDS assets.',
    'handler' => array(
      'parent' => 'FeedsParser',
      'class' => 'IdsAssetsParser',
      'file' => 'idsimport.feeds.inc',
      'path' => drupal_get_path('module', 'idsimport'),
    ),
  );
    $info['IdsDocumentsParser'] = array(
    'name' => 'IDS Documents Parser',
    'description' => 'Parse IDS documents.',
    'help' => 'Parse IDS documents.',
    'handler' => array(
      'parent' => 'FeedsParser',
      'class' => 'IdsDocumentsParser',
      'file' => 'idsimport.feeds.inc',
      'path' => drupal_get_path('module', 'idsimport'),
    ),
  );
    $info['IdsOrganisationsParser'] = array(
    'name' => 'IDS Organisations Parser',
    'description' => 'Parse IDS organisations.',
    'help' => 'Parse IDS organisations.',
    'handler' => array(
      'parent' => 'FeedsParser',
      'class' => 'IdsOrganisationsParser',
      'file' => 'idsimport.feeds.inc',
      'path' => drupal_get_path('module', 'idsimport'),
    ),
  );
  $info['IdsCategoriesParser'] = array(
    'name' => 'IDS Categories Parser',
    'description' => 'Parse IDS regions, themes and subjects.',
    'help' => 'Parse IDS regions, themes and subjects.',
    'handler' => array(
      'parent' => 'FeedsParser',
      'class' => 'IdsCategoriesParser',
      'file' => 'idsimport.feeds.inc',
      'path' => drupal_get_path('module', 'idsimport'),
    ),
  );
  $info['IdsCountriesParser'] = array(
    'name' => 'IDS Countries Parser',
    'description' => 'Parse IDS countries.',
    'help' => 'Parse IDS countries.',
    'handler' => array(
      'parent' => 'FeedsParser',
      'class' => 'IdsCountriesParser',
      'file' => 'idsimport.feeds.inc',
      'path' => drupal_get_path('module', 'idsimport'),
    ),
  );
  $info['IdsAssetsProcessor'] = array(
    'name' => 'IDS Assets Processor',
    'description' => 'Process IDS assets.',
    'help' => 'Process IDS assets.',
    'handler' => array(
      'parent' => 'FeedsNodeProcessor',
      'class' => 'IdsAssetsProcessor',
      'file' => 'idsimport.feeds.inc',
      'path' => drupal_get_path('module', 'idsimport'),
    ),
  );
  $info['IdsCategoriesProcessor'] = array(
    'name' => 'IDS Categories Processor',
    'description' => 'Process IDS categories.',
    'help' => 'Process IDS categories.',
    'handler' => array(
      'parent' => 'FeedsTermProcessor',
      'class' => 'IdsCategoriesProcessor',
      'file' => 'idsimport.feeds.inc',
      'path' => drupal_get_path('module', 'idsimport'),
    ),
  );
  $info['IdsCountriesProcessor'] = array(
    'name' => 'IDS Countries Processor',
    'description' => 'Process IDS countries.',
    'help' => 'Process IDS countries.',
    'handler' => array(
      'parent' => 'FeedsTermProcessor',
      'class' => 'IdsCountriesProcessor',
      'file' => 'idsimport.feeds.inc',
      'path' => drupal_get_path('module', 'idsimport'),
    ),
  );
  return $info;
}


