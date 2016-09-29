<?php
/**
 * @file 
 */

$plugin = array(
  'title' => t("IDS Document"),
  'keyword' => "idscontent_context",
  'description' => t("Creates an IDS Document context from a string argument"),
  'context' => "idscontent_argument_context",
  'placeholder form' => array(
    '#type' => "textfield",
    '#description' => t("Enter the IDS API object ID")
  )
);

function idscontent_argument_context($arg = null, $conf = NULL, $empty = FALSE){
  if ($empty){
    return ctools_context_create_empty("idscontent_context");
  }
  $idsWrapper = new IdsApiWrapper();
  $dataset = variable_get('idsapi_default_dataset', IDS_API_DEFAULT_DATASET);
  $apiKey = variable_get('idsapi_api_key', '');
  $item = $idsWrapper->get("documents", $dataset, $apiKey, "full", $arg);
  if (!empty($item) && !empty($item->results)){
    $document = $item->results[0];
  }
  else {
    return ctools_context_create_empty("idscontent_context");
  }

  return ctools_context_create("idscontent_context", $document);
}