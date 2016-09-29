<?php
// $Id;

/**
 * @file
 *   IDS API Module global settings form.
 *
 * Display and allows to change global settings for the module.
 *
 */

function idsapi_settings_form() {
  $form = array();

  $form['idsapi_api_key'] = array(
    '#title' => t('API Key'),
    '#type' => 'textfield',
    '#size' => 36,
    '#maxlength' => 36,
    '#required' => TRUE,
    '#default_value' => variable_get('idsapi_api_key', ''),
    '#description' => t('Your IDS API key. ') . l(t('If you do not have an API key, request one here.'), IDS_API_KEY_URL),
  );

  $form['idsapi_default_dataset'] = array(
    '#title' => t('Default dataset'),
    '#type' => 'select',
    '#options' => array(
      'eldis' => 'Eldis',
      'bridge' => 'Bridge',
    ),
    '#required' => FALSE,
    '#default_value' => variable_get('idsapi_default_dataset', IDS_API_DEFAULT_DATASET),
    '#description' => t('IDS dataset to be used by default.'),
  );

  $form['idsapi_number_items'] = array(
    '#title' => t('Default number of items'),
    '#type' => 'textfield',
    '#size' => 10,
    '#maxlength' => 10,
    '#required' => FALSE,
    '#default_value' => variable_get('idsapi_number_items', IDS_API_NUM_ITEMS),
    '#description' => t('Max. number of items to retrieve in each call to the IDS API.'),
  );

  $form['idsapi_cache_time'] = array(
    '#title' => t('Cache lifetime'),
    '#type' => 'select',
    '#options' => array(
      '86400' => t('One day'),
      '172800' => t('Two days'),
      '604800' => t('One week'),
      '1209600' => t('Two weeks'),
      '0' => t('Permanent'),
    ),
    '#required' => FALSE,
    '#default_value' => variable_get('idsapi_cache_time', IDS_API_DEFAULT_CACHE_TIME),
    '#description' => t('How long cached values from the API should be considered valid.'),
  );
  
  $form['advanced']['show_advanced'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show advanced options.'),
  );
    
  $form['advanced']['idsapi_cache_clear'] = array(
    '#type' => 'submit',
    '#value' => t('Clear all the content in the cache'),
    '#submit' => array('idsapi_cache_clear'),
    '#states' => array(
      'visible' => array(
        ':input[name="show_advanced"]' => array('checked' => TRUE),
      ),
    ),    
  );

  return system_settings_form($form);
}

/**
 * Clear the request cache.
 */
function idsapi_cache_clear(&$form) {
  drupal_set_message(t('The IDS API cache has been cleared.'));
  cache_clear_all('*', 'idsapi_cache', TRUE);
}

/**
 * Validates the form settings input.
 */
function idsapi_settings_form_validate($form, &$form_state) {
  if (!class_exists("IdsApiWrapper")){
    require IDS_API_LIBRARY_PATH . 'idswrapper.wrapper.inc';
  }
  $idswrapper = new IdsApiWrapper();
  $reg = '/^[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}$/';
  if (!preg_match($reg, $form_state['values']['idsapi_api_key'])) {
    form_set_error('idsapi_api_key', t('The API key has an invalid format.'));
  }
  else {
    if (!$idswrapper->validateKey($form_state['values']['idsapi_api_key'])) {
      form_set_error('idsapi_api_key', t('The API key could not be verified. Please check that you have entered a valid API key.'));
    }
    else {
      variable_set('idsapi_additional_fields', $idswrapper->additionalFieldsAvailable($form_state['values']['idsapi_api_key']));
      // We have to rebuild forms and menus in order to show/hide additional fields (such as subjects) in the admin area.
      module_invoke_all('ids_api_key');
    }
  }
  $num_items = $form_state['values']['idsapi_number_items'];
  if (isset($num_items) && !is_numeric($num_items)) {

  }
  if (isset($num_items) && ($num_items < 1)) {
    form_set_error('idsapi_number_items', t('Please enter a greater number.'));
  }
}








