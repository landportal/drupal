<?php

/**
 * Wordpress-specific variables and functions.
 *
 */

global $ids_assets;
global $ids_datasets; 
global $ids_categories;
global $ids_exclude;

$ids_datasets = array('eldis', 'bridge');
$ids_assets = array('documents', 'organisations');
$ids_categories = array('countries', 'regions', 'themes');
$ids_exclude = array('bridge' => 'organisations');

global $idsapi_errors;
$idsapi_errors = array();

// Call the URL.
function idsapi_get_data($url) {
  $response = wp_remote_get($url, array('timeout' => 60));
  if (is_wp_error($response)) {
    $data = $response->get_error_message();
  }
  else {
    $data = json_decode($response['body'], true);
  }
  return $data;
}

//------------------------------ Error processing --------------------------------

// Register a new error or notification.
function idsapi_register_error($component, $message, $function, $error_code, $verbose = TRUE) {
  global $idsapi_errors;
  $text_message = $message;
  if ($verbose) {
    if ($component) {
      $text_message = $component . ' reported: ' . $text_message;
    }
    if ($function) {
      $text_message .= ' In: ' . $function;
    }
  }
  if (isset($idsapi_errors[$error_code])) {
    $idsapi_errors[$error_code]->add($error_code, $text_message); 
  }
  else {
    $idsapi_errors[$error_code] = new WP_Error($error_code, $text_message);
  }
}

// Display previously registered errors.
function idsapi_report_errors() {
  global $idsapi_errors;
  $idsapi_show_error_codes =  explode(',', IDS_API_SHOW_ERROR_CODES);
  $output = '';
  foreach ($idsapi_show_error_codes as $error_code) {
    if (isset($idsapi_errors[$error_code])) {
      $error_messages = $idsapi_errors[$error_code]->get_error_messages();
      if (IDS_API_HTML_ERRORS) {
        $output .= '<div class="ids-' . $error_code . '"><ul>';
      }
      foreach ($error_messages as $error_message) {
        if (IDS_API_HTML_ERRORS) {
          $output .= '<li><strong>' . ucfirst($error_code) . ':</strong> ' . $error_message . '</li>';
        }
        else {
          $output .= ucfirst($error_code) . ": $error_message\n";
        }
      }
      if (IDS_API_HTML_ERRORS) {
        $output .= '</ul></div>';
      }
    }
  }
  if ($output) {
    echo $output;
  }
}

//------------------------------ Options handling --------------------------------

// Set the value of a parameter.
function idsapi_variable_set($group, $variable_name, $value) {
  $options_name = $group . '_options';
  if ($options = get_option($options_name)) {
    $options[$variable_name] = $value;
    update_option($options_name, $options);
  }
  else {
    $options[$variable_name] = $value;
    add_option($options_name, $options);
  }
}

// Retrieve the value of a saved parameter
function idsapi_variable_get($group, $variable_name, $default = '') {
  $value = $default;
  $options_name = $group . '_options';
  $options = get_option($options_name);
  if (isset($options[$variable_name])) {
    $value = $options[$variable_name];
  }
  return $value;
}

//------------------------------ Helper functions --------------------------------

function idsapi_exclude($dataset, $type) {
  global $ids_exclude;
  if (isset($ids_exclude[$dataset]) && ($ids_exclude[$dataset] === $type)) {
    return TRUE;
  }
  else {
    return FALSE;
  }
}



