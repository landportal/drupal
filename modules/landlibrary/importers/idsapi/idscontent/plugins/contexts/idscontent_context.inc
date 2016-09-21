<?php
/**
 * @file 
 */

$plugin = array(
  'title' => t("IDS Document"),
  'description' => t("A document from the IDS API"),
  'context' => "idscontent_context_create",
  'edit form' => "idscontent_context_settings_form",
  'keyword' => "idscontent_context",
  'context name' => "idscontent_context",
  "convert list" => "idscontent_context_convert_list",
  'convert' => "idscontent_context_convert",
  'placeholder form' => array(
    '#type' => "textfield",
    '#description' => t("Enter the ID of the IDS API object")
  )
);

function idscontent_context_create($empty, $data = NULL, $conf = FALSE){
  $context = new ctools_context("idscontent");
  $context->plugin = "idscontent";
  if ($empty){
    return $context;
  }
  if ($conf){
    $idsWrapper = new IdsApiWrapper();
    $dataset = variable_get('idsapi_default_dataset', IDS_API_DEFAULT_DATASET);
    $apiKey = variable_get('idsapi_api_key', '');
    $results = $idsWrapper->get("documents", $dataset, $apiKey, "full", $data['idscontent']);
    if (!empty($results) && !empty($results->result)){
      $data = $results->result[0];
    }
    else {
      $data = false;
    }
  }
  if (!empty($data)){
    $context->data = $data;
    $context->argument = check_plain($data->object_id);
    $context->title = check_plain($data->title);
    return $context;
  }
  return false;
}

function idscontent_context_settings_form($form, &$form_state){
  $conf = $form_state['conf'];
  $form['idscontent'] = array(
    '#title' => t("IDS Object ID"),
    '#description' => t("Enter a IDS Object ID"),
    '#default_value' => $conf['idscontent'],
    '#type' => "textfield"
  );
  return $form;
}

function idscontent_context_settings_form_submit($form, &$form_state){
  $form_state['conf']['idscontent'] = $form_state['values']['idscontent'];
}

/**
 * Provides a list of text conversions to be used in the pane.
 *
 * @return array
 */
function idscontent_context_convert_list(){
  return array(
    "title" => t("Title"),
    "description" => t("Description"),
    'object_id' => t("Object ID")
  );
}

/**
 * Resolves a keyword into some data.
 *
 * @param $context
 * @param $type
 *
 * @return mixed
 */
function idscontent_context_convert($context, $type){
  return $context->data->{$type};
}