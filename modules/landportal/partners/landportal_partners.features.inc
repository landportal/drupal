<?php
/**
 * @file
 * landportal_partners.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landportal_partners_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_mailchimp_signup().
 */
function landportal_partners_default_mailchimp_signup() {
  $items = array();
  $items['legend_bulletin'] = entity_import('mailchimp_signup', '{
    "name" : "legend_bulletin",
    "mc_lists" : { "9f6554a879" : "9f6554a879" },
    "mode" : "1",
    "title" : "LEGEND Bulletin",
    "settings" : {
      "path" : "",
      "submit_button" : "Submit",
      "confirmation_message" : "You have been successfully subscribed.",
      "destination" : "",
      "mergefields" : {
        "EMAIL" : {"tag":"EMAIL","name":"Email Address","type":"email","required":true,"default_value":"","public":true,"display_order":1,"options":{"size":25}},
        "FNAME" : 0,
        "LNAME" : 0,
        "MMERGE3" : 0,
        "MMERGE4" : 0,
        "MMERGE5" : 0,
        "MMERGE6" : 0,
        "MMERGE7" : 0
      },
      "description" : "",
      "doublein" : 0,
      "include_interest_groups" : 0
    },
    "rdf_mapping" : []
  }');
  return $items;
}
