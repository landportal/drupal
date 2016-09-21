<?php
// $Id;

/**
 * @file
 *   IDS Import Module global settings form.
 *
 * Display and allows to change global settings for the module.
 * Includes a button to import content and categories.
 *
 * Note: The author of the imported assets is a required field. It's set globally and overrides the importers'. 
 */
function idsimport_settings_form() {
  $idswrapper = new IdsApiWrapper();
  $form = array();
  $additional_fields = variable_get('idsapi_additional_fields', FALSE);
  $list_categories = 'regions, countries, themes';
  if ($additional_fields) {
    $list_categories .= ', subjects';
  }

  $form['#submit'][] = 'idsimport_settings_form_submit';

  $form['general'] = array (
    '#type' => 'fieldset',
    '#title' => t('Global settings'),
    '#prefix' => '<div class="idsimport-form-general">',
    '#suffix' => '</div>',
  );

  // TODO To allow fetchers to override this.
  $form['general']['idsimport_default_dataset'] = array(
    '#title' => t('Default dataset'),
    '#type' => 'select',
    '#options' => array(
      'eldis' => 'Eldis',
      'bridge' => 'Bridge',
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('idsimport_default_dataset', IDS_API_DEFAULT_DATASET),
    '#description' => t('IDS dataset to be used by default.'),
  );

  $form['general']['assets'] = array (
    '#type' => 'fieldset',
    '#title' => t('General importing settings'),
    '#description' => t('These settings apply both to manual and periodic automatic imports of <b>documents</b> and <b>organisations</b>.<br>Please note that no partial importing is available for categories (' . $list_categories . '):<br> if chosen, all of the items in the categories sets are imported in order to preserve the internal coherence of the data.'),
    '#prefix' => '<div class="idsimport-form-general">',
    '#suffix' => '</div>',
  );

  $form['general']['assets']['idsimport_number_assets'] = array(
    '#title' => t('Number of documents and/or organisations to import'),
    '#type' => 'textfield',
    '#size' => 10,
    '#maxlength' => 10,
    '#required' => FALSE,
    '#default_value' => variable_get('idsimport_number_assets', IDS_IMPORT_NUM_ASSETS),
    '#description' => t('Number of documents and/or organisations to retrieve in each call to the IDS API. Leave blank if you do not want to limit it, and import all available items.'),
  );
  
  $form['general']['assets']['idsimport_age_new_assets'] = array(
    '#title' => t('Age of new content'),
    '#type' => 'select',
    '#options' => array(
      '0' => t('Do not filter by age'),
      '7' => t('One week'),
      '30' => t('One month'),
      '180' => t('Six months'),
      '365' => t('One year'),
    ),
    '#required' => FALSE,
    '#default_value' => variable_get('idsimport_age_new_assets', IDS_IMPORT_AGE_NEW_ASSETS),
    '#description' => t('Import documents and/or organisations posted within the indicated period.'),
  );

  $form['general']['assets']['idsimport_levels_categories'] = array(
    '#title' => t('Levels of categories'),
    '#type' => 'select',
    '#options' => array(
      '1|2' => t('Categories in levels 1 and 2'),
      '1' => t('Categories in level 1'),
      '' => t('Categories in all levels'),
    ),
    '#required' => FALSE,
    '#default_value' => variable_get('idsimport_levels_categories', IDS_IMPORT_LEVELS_CATEGORIES),
    '#description' => t('The levels of categories to import.'),
  );

  $form['general']['assets']['idsimport_new_user'] = array(
    '#title' => t('Author'),
    '#type' => 'textfield',
    '#size' => 10,
    '#maxlength' => 10,
    '#required' => TRUE,
    '#default_value' => variable_get('idsimport_new_user', IDS_IMPORT_USER),
    '#description' => t('Imported IDS content will be assigned to this user. If the user does not exist, it will be created.'),
    '#autocomplete_path' => 'user/autocomplete',
  );

  $form['general']['assets']['idsimport_query_string'] = array(
    '#title' => t('Query string'),
    '#type' => 'textfield',
    '#size' => 40,
    '#required' => FALSE,
    '#default_value' => variable_get('idsimport_query_string'),
    '#description' => t('Query string to be appended to the IDS API URLs used when importing <b>documents and/or organisations</b>.<br>Use comma-separated pairs of unencoded query fields and values (example: <i>country=Argentina,keyword=climate change,language_name=Spanish</i>).<br>Please check the <a href="@idsapidoc">IDS API documentation</a> for a list of query fields available.', array('@idsapidoc' => 'http://api.ids.ac.uk/docs/functions/search/')),
  );


  $form['enable'] = array (
    '#type' => 'fieldset',
    '#title' => t('Periodic import'),
    '#prefix' => '<div class="idsimport-form-enable">',
    '#suffix' => '</div>',
  );

  $form['enable']['idsimport_check_enable_assets'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable periodic importing of IDS documents and/or organisations.'),
    '#default_value' => variable_get('idsimport_check_enable_assets', FALSE),
  );
  
  $form['enable']['idsimport_check_enable_categories'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable periodic importing of IDS categories (' . $list_categories .').'),
    '#default_value' => variable_get('idsimport_check_enable_categories', FALSE),
  );

  $form['enable']['assets'] = array (
    '#type' => 'fieldset',
    '#title' => t('Periodic import settings for documents and/or organisations'),
    '#prefix' => '<div class="idsimport-form-enable-assets">',
    '#suffix' => '</div>',
    '#states' => array(
      'visible' => array(
        ':input[name="idsimport_check_enable_assets"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['enable']['assets']['idsimport_enable_assets'] = array(
    '#title' => t('Type of content to import periodically'),
    '#type' => 'checkboxes',
    '#multiple' => TRUE,
    '#options' => array(
      IDS_IMPORT_IMPORTER_DOCUMENTS => t('Documents'),
      IDS_IMPORT_IMPORTER_ORGANISATIONS => t('Organisations'),
     ),
    '#states' => array(
      'visible' => array(
        ':input[name="idsimport_check_enable_assets"]' => array('checked' => TRUE),
      ),
    ),
    '#default_value' => (array) variable_get('idsimport_enable_assets'),
    '#description' => t('Please indicate the content that you want to import automatically.<br>If the categories attached to the imported documents/organisations have not been imported and do not exist as taxonomy terms in Drupal they will be created with basic information.'),
  );

  $form['enable']['assets']['idsimport_import_period_assets'] = array(
    '#title' => t('Frequency to import documents/organisations'),
    '#type' => 'select',
    '#options' => array(
      FEEDS_SCHEDULE_NEVER => t('Off'),
      0 => t('As often as possible'),
      900 => t('Every 15 min'),
      1800 => t('Every 30 min'),
      3600 => t('Every 1 hour'),
      10800 => t('Every 3 hours'),
      21600 => t('Every 6 hours'),
      43200 => t('Every 12 hours'),
      86400 => t('Every 1 day'),
      259200 => t('Every 3 days'),
      604800 => t('Every 1 week'),
      2419200 => t('Every 4 weeks'),
     ),
    '#required' => FALSE,
    '#default_value' => variable_get('idsimport_import_period_assets', IDS_IMPORT_IMPORT_PERIOD_ASSETS),
    '#states' => array(
      'visible' => array(
        ':input[name="idsimport_check_enable_assets"]' => array('checked' => TRUE),
      ),
    ),
    '#description' => t('Choose how often IDS documents and/or organisations should be imported (<a href="@cronurl">requires cron to be configured</a>).', array('@cronurl' => url('admin/config/system/cron'))),
  );

  $form['enable']['assets']['idsimport_expire_period_assets'] = array(
    '#title' => t('Default time to expire imported content'),
    '#type' => 'select',
    '#options' => array(
      '-1' => t('Never'),
      '3600' => t('After one hour'),
      '10800' => t('After three hours'),
      '21600' => t('After six hours'),
      '43200' => t('After twelve hours'),
      '86400' => t('After one day'),
      '259200' => t('After three days'),
      '604800' => t('After one week'),
      '2592000' => t('After one month'),
      '7776000' => t('After three months'),
      '15552000' => t('After six months'),
      '31536000' => t('After one year'),
     ),
    '#required' => FALSE,
    '#default_value' => variable_get('idsimport_expire_period_assets', IDS_IMPORT_EXPIRE_PERIOD_ASSETS),
    '#description' => t('Select after how much time imported IDS content should expire and be deleted from the database.<br><small>This can be overriden in the importers processors settings, so different expiration times can be used for different sets of imported items.<br>To change these settings for current importers, please go to the <a href="@feedsadmin">Feeds importers administration page</a> and edit the importer that you would like to change.</small>', array('@feedsadmin' => url('admin/structure/feeds'))),
  );

  $form['enable']['categories'] = array (
    '#type' => 'fieldset',
    '#title' => t('Categories periodic import settings'),
    '#prefix' => '<div class="idsimport-form-enable-categories">',
    '#suffix' => '</div>',
    '#states' => array(
      'visible' => array(
        ':input[name="idsimport_check_enable_categories"]' => array('checked' => TRUE),
      ),
    ), 
  );

  $options_enable_categories = array(
      IDS_IMPORT_IMPORTER_REGIONS => t('Regions'),
      IDS_IMPORT_IMPORTER_THEMES => t('Themes'),
      IDS_IMPORT_IMPORTER_COUNTRIES => t('Countries'),
  );
  if ($additional_fields) {
      $options_enable_categories[IDS_IMPORT_IMPORTER_SUBJECTS] = t('Subjects');
  }
  $form['enable']['categories']['idsimport_enable_categories'] = array(
    '#title' => t('Categories to import periodically'),
    '#type' => 'checkboxes',
    '#multiple' => TRUE,
    '#options' => $options_enable_categories,
    '#states' => array(
      'visible' => array(
        ':input[name="idsimport_check_enable_categories"]' => array('checked' => TRUE),
      ),
    ),    
    '#default_value' => (array) variable_get('idsimport_enable_categories'),
    '#description' => t('Please indicate the categories that you want to import automatically.'),
  );

  $form['enable']['categories']['idsimport_import_period_categories'] = array(
    '#title' => t('Frequency to import categories'),
    '#type' => 'select',
    '#options' => array(
      FEEDS_SCHEDULE_NEVER => t('Off'),
      0 => t('As often as possible'),
      900 => t('Every 15 min'),
      1800 => t('Every 30 min'),
      3600 => t('Every 1 hour'),
      10800 => t('Every 3 hours'),
      21600 => t('Every 6 hours'),
      43200 => t('Every 12 hours'),
      86400 => t('Every 1 day'),
      259200 => t('Every 3 days'),
      604800 => t('Every 1 week'),
      2419200 => t('Every 4 weeks'),
     ),
    '#required' => FALSE,
    '#default_value' => variable_get('idsimport_import_period_categories', IDS_IMPORT_IMPORT_PERIOD_CATEGORIES),
    '#states' => array(
      'visible' => array(
        ':input[name="idsimport_check_enable_categories"]' => array('checked' => TRUE),
      ),
    ),
    '#description' => t('Choose how often IDS categories (' . $list_categories . ') should be imported (<a href="@cronurl">requires cron to be configured</a>).', array('@cronurl' => url('admin/config/system/cron'))),
  );

  $form['enable'][] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
    '#submit' => array('idsimport_settings_form_submit'),
  );

  $form['import'] = array (
    '#type' => 'fieldset',
    '#title' => t('Manual import'),
    '#prefix' => '<div class="idsimport-form-import">',
    '#suffix' => '</div>',
  );

  $form['import']['idsimport_check_import'] = array(
    '#type' => 'checkbox',
    '#title' => t('Import IDS content now.'),
    '#default_value' => variable_get('idsimport_check_import', FALSE),
  );

  $options_categories_import = array(
      IDS_IMPORT_IMPORTER_DOCUMENTS => t('Documents'),
      IDS_IMPORT_IMPORTER_ORGANISATIONS => t('Organisations'),
      IDS_IMPORT_IMPORTER_REGIONS => t('Regions'),
      IDS_IMPORT_IMPORTER_COUNTRIES => t('Countries'),
      IDS_IMPORT_IMPORTER_THEMES => t('Themes'),
  );
  if ($additional_fields) {
      $options_categories_import[IDS_IMPORT_IMPORTER_SUBJECTS] = t('Subjects');
  }
  $form['import']['idsimport_import'] = array(
    '#title' => t('Items to import'),
    '#type' => 'checkboxes',
    '#multiple' => TRUE,
    '#options' => $options_categories_import,
    '#states' => array(
      'visible' => array(
        ':input[name="idsimport_check_import"]' => array('checked' => TRUE),
      ),
    ),    
    '#description' => t('Please indicate the content that you want to import.<br><small>Please note that due to the large number of <b>themes</b> in the IDS collection, <u>importing themes can take some minutes</u></small>.'),
  );

  $form['import']['idsimport_import_now'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration and import IDS content'),
    '#states' => array(
      'visible' => array(
        ':input[name="idsimport_check_import"]' => array('checked' => TRUE),
      ),
    ),
    '#submit' => array('idsimport_settings_form_submit','idsimport_import_now'),
  );

  $form['advanced'] = array (
    '#type' => 'fieldset',
    '#title' => t('Advanced administrative options'),
    '#prefix' => '<div class="idsimport-form-advanced">',
    '#suffix' => '</div>',
  );

  $form['advanced']['show_advanced'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show advanced options.'),
  );

  $form['advanced']['delete'] = array (
    '#type' => 'fieldset',
    '#title' => t('Delete'),
    '#prefix' => '<div class="idsimport-form-advanced-delete">',
    '#suffix' => '</div>',
    '#states' => array(
      'visible' => array(
        ':input[name="show_advanced"]' => array('checked' => TRUE),
      ),
    ),
  );

  $options_delete_types = array(
      IDS_IMPORT_DOCUMENTS_TYPE => t('Documents'),
      IDS_IMPORT_ORGANISATIONS_TYPE => t('Organisations'),
      IDS_IMPORT_REGIONS_VOCABULARY => t('Regions'),
      IDS_IMPORT_COUNTRIES_VOCABULARY => t('Countries'),
      IDS_IMPORT_THEMES_VOCABULARY => t('Themes'),
  );
  if ($additional_fields) {
    $options_delete_types[IDS_IMPORT_SUBJECTS_VOCABULARY] = t('Subjects');
  }
  $form['advanced']['delete']['idsimport_delete_types'] = array(
    '#title' => t('Delete items imported from the IDS collection'),
    '#type' => 'checkboxes',
    '#multiple' => TRUE,
    '#options' => $options_delete_types,
    '#required' => FALSE,
    '#states' => array(
      'visible' => array(
        ':input[name="show_advanced"]' => array('checked' => TRUE),
      ),
    ),
    '#description' => t('Please indicate the content that you want to delete.'),
  );

  $form['advanced']['delete']['idsimport_delete'] = array(
    '#type' => 'submit',
    '#value' => t('Delete selected items'),
    '#description' => t('Delete selected items from the IDS collection.'),
    '#submit' => array('idsimport_delete'),
    '#attributes' => array('onclick' => 'if(!confirm("Are you sure that you want to delete these items?")){return false;}'),
    '#states' => array(
      'visible' => array(
        ':input[name="show_advanced"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['advanced']['rebuild'] = array (
    '#type' => 'fieldset',
    '#title' => t('Rebuild IDS categories'),
    '#description' => t('This will run a process to make the Drupal taxonomies match the IDS categories trees.<br>If the Drupal taxonomies corresponding to IDS categories have been manually changed, these changes will be undone.<br>This process is executed automatically after categories are imported.<br>'),
    '#prefix' => '<div class="idsimport-form-advanced-delete">',
    '#suffix' => '</div>',
    '#states' => array(
      'visible' => array(
        ':input[name="show_advanced"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['advanced']['rebuild']['idsimport_rebuild_taxonomies'] = array(
    '#title' => t('Rebuild IDS categories'),
    '#type' => 'submit',
    '#value' => t('Rebuild IDS taxonomies'),
    '#description' => t('Rebuild the IDS categories trees.'),
    '#submit' => array('idsimport_rebuild_taxonomies'),
    '#states' => array(
      'visible' => array(
        ':input[name="show_advanced"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['advanced']['cache'] = array (
    '#type' => 'fieldset',
    '#title' => t('Clear Feeds cache'),
    '#description' => t('If you deleted imported items manually, you might need to clear the cache in order to re-import them.<br>'),
    '#prefix' => '<div class="idsimport-form-advanced-delete">',
    '#suffix' => '</div>',
    '#states' => array(
      'visible' => array(
        ':input[name="show_advanced"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['advanced']['cache']['idsimport_cache_clear'] = array(
    '#title' => t('Clear Feeds cache'),
    '#type' => 'submit',
    '#value' => t('Clear Feeds cache'),
    '#submit' => array('idsimport_cache_clear'),
    '#states' => array(
      'visible' => array(
        ':input[name="show_advanced"]' => array('checked' => TRUE),
      ),
    ),
  );

  return system_settings_form($form);

}

/* --------------------------------- Submit handlers --------------------------- */

/**
 * Validates the form settings input.
 */
function idsimport_settings_form_validate($form, &$form_state) {
  $api_key = variable_get('idsapi_api_key', '');
  $reg = '/^[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}$/';
  if (!preg_match($reg, $api_key)) {
    form_set_error('idsimport_import_now', t('Please enter a valid API key in the <a href="@idsconfig">IDS API Module configuration page</a>.', array('@idsconfig' => url('admin/config/services/idsapi'))));
  }
  $num_items = $form_state['values']['idsimport_number_assets'];
  if ($form_state['values']['idsimport_check_enable_assets']) {
    if (isset($num_items) && !is_numeric($num_items)) {
      form_set_error('idsimport_number_assets', t('Please enter a number.'));
    }
    if (isset($num_items) && ($num_items < 1)) {
      form_set_error('idsimport_number_assets', t('Please enter a greater number.'));
    }
  }
  $import_assets = $form_state['values']['idsimport_check_enable_assets'];
  $import_categories = $form_state['values']['idsimport_check_enable_categories'];
  $assets_checked = FALSE;
  foreach ($form_state['values']['idsimport_enable_assets'] as $import_asset) {
    $assets_checked = $assets_checked || $import_asset;
  }
  if (($import_assets) && ($form_state['values']['idsimport_import_period_assets'] !== FEEDS_SCHEDULE_NEVER) && (!$assets_checked)) {
    form_set_error('idsimport_enable_assets', t('Please indicate the type(s) of documents and/or organisations that you want to import periodically.'));
  }
  $categories_checked = FALSE;
  foreach ($form_state['values']['idsimport_enable_categories'] as $import_category) {
    $categories_checked = $categories_checked || $import_category;
  }
  if (($import_categories) && ($form_state['values']['idsimport_import_period_categories'] !== FEEDS_SCHEDULE_NEVER) && (!$categories_checked)) {
    form_set_error('idsimport_enable_categories', t('Please indicate the type(s) of categories that you want to import periodically.'));
  }
}

/*
 * Implements hook_form_submit().
 */
function idsimport_settings_form_submit($form, &$form_state) {
  system_settings_form($form, $form_state);
  $values = $form_state['values'];
  $import_assets = $values['idsimport_check_enable_assets'];
  $import_categories = $values['idsimport_check_enable_categories'];
  $assets_to_import = $values['idsimport_enable_assets'];
  $categories_to_import = $values['idsimport_enable_categories'];
  $import_period_assets = $values['idsimport_import_period_assets'];
  $import_period_categories = $values['idsimport_import_period_categories'];
  $expire_period_assets = $values['idsimport_expire_period_assets'];
  $current_user_id = variable_get('idsimport_new_user_id', 0);
  $new_user = check_plain($values['idsimport_new_user']);

  if ($new_user) {
    $new_user_id = idsimport_new_user($new_user);
    variable_set('idsimport_new_user_id', $new_user_id);
  }
  foreach (idsimport_get_all_importers() as $importer) {
	if (is_a($importer->fetcher, 'IdsAssetsFetcher')) {
		if ($new_user_id) {
			$importer->processor->setAuthor($new_user_id);
		}
	}
	$importer_settings = array();
	if (($import_assets) && (array_key_exists($importer->id, $assets_to_import))) {
      if ($assets_to_import[$importer->id]) {
        $importer_settings['import_period'] = $import_period_assets;
        $importer->processor->setExpirePeriod($expire_period_assets);
      }
    }
    elseif (($import_categories) && (array_key_exists($importer->id, $categories_to_import))) {
      if ($categories_to_import[$importer->id]) {
        $importer_settings['import_period'] = $import_period_categories;
      }
    }
    else {
      $importer_settings['import_period'] = FEEDS_SCHEDULE_NEVER;
    }
    feeds_reschedule($importer->id);
    $importer->addConfig($importer_settings);
    $importer->schedule();
    $importer->save();
    $nodes_importer = idsimport_get_nodes_importer($importer);
    foreach ($nodes_importer as $node_importer) {
      $feed_nid = $node_importer->nid;
      $source = feeds_source($importer->id, $feed_nid);
      $source->scheduleImport();
    }
  }
  feeds_cache_clear(FALSE);
}

/**
 * Invoke importers.
 */
function idsimport_import_now($form, &$form_state) {
  system_settings_form_submit($form, $form_state);
  $values = $form_state['values'];
  $import_now = $values['idsimport_check_import'];
  $importers = $values['idsimport_import'];
  if ($import_now) {
    $importers_to_invoke = array();
    foreach ($importers as $importer_id => $delete) {
      if ($delete) {
        $importers_to_invoke[] = $importer_id;
      }
    }
    if ($importers_to_invoke) {
      foreach(idsimport_get_importers_by_id($importers_to_invoke) as $importer) {
        foreach (idsimport_get_nodes_importer($importer) as $feed) {
          $source = feeds_source($importer->id, $feed->nid);
          $source->startImport();
        }
      }
    }
  }
}

/**
 * Delete all imported items.
 */
function idsimport_delete($form, &$form_state) {
  $values = $form_state['values'];
  $types = $values['idsimport_delete_types'];
  $types_to_delete = array();
  foreach ($types as $type => $delete) {
    if ($delete) {
      $types_to_delete[] = $type;
    }
  }
  idsimport_delete_items_type($types_to_delete);
  feeds_cache_clear();
  drupal_set_message(t('The imported items have been deleted.'));
}

/**
 * Check and rebuild all the imported taxonomies.
 */
function idsimport_rebuild_taxonomies(&$form) {
  idsimport_build_all_category_trees();
  drupal_set_message(t('The imported categories have been rebuilt.'));
}

/**
 * Clear the request cache.
 */
function idsimport_cache_clear(&$form) {
  feeds_cache_clear();
  drupal_set_message(t('The Feeds cache has been cleared.'));
}




