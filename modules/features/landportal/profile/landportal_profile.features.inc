<?php
/**
 * @file
 * landportal_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landportal_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function landportal_profile_default_profile2_type() {
  $items = array();
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "main",
    "label" : "Public profile",
    "weight" : "0",
    "data" : { "registration" : 1, "use_one_page" : 1, "use_page" : 0 },
    "rdf_mapping" : []
  }');
  $items['work_profile'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "work_profile",
    "label" : "Work profile",
    "weight" : "0",
    "data" : {
      "registration" : 0,
      "roles" : {
        "2" : "2",
        "111903911" : "111903911",
        "111903910" : "111903910",
        "30037204" : "30037204"
      },
      "use_one_page" : 0,
      "use_page" : 0
    },
    "rdf_mapping" : []
  }');
  return $items;
}
