<?php
/**
 * @file
 * mailchimp_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mailchimp_feature_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_default_mailchimp_list().
 */
function mailchimp_feature_default_mailchimp_list() {
  $items = array();
  $items['land_portal_news_digest'] = entity_import('mailchimp_list', '{
    "name" : "land_portal_news_digest",
    "mc_list_id" : "8b8de3bf56",
    "label" : "Land Portal News Digest",
    "description" : "",
    "settings" : {
      "roles" : {
        "2" : 2,
        "111903911" : 111903911,
        "111903912" : 111903912,
        "25521343" : 25521343,
        "111903910" : 111903910,
        "30037204" : 30037204,
        "1" : 1
      },
      "mergefields" : {
        "EMAIL" : "mail",
        "FNAME" : "name",
        "LNAME" : "name",
        "MMERGE3" : "",
        "MMERGE4" : "",
        "MMERGE5" : "",
        "MMERGE6" : "",
        "MMERGE7" : "",
        "MMERGE8" : "field-arabic-language",
        "MMERGE9" : "field-english-language",
        "MMERGE10" : "field-french-language",
        "MMERGE11" : "field-spanish-language",
        "MMERGE12" : "",
        "MMERGE13" : "",
        "MMERGE14" : "",
        "MMERGE15" : "",
        "MMERGE16" : "",
        "MMERGE17" : "",
        "MMERGE18" : "",
        "MMERGE19" : "",
        "MMERGE20" : "",
        "MMERGE21" : ""
      },
      "mergefields_display" : {
        "EMAIL" : true,
        "FNAME" : true,
        "LNAME" : true,
        "MMERGE3" : 0,
        "MMERGE4" : 0,
        "MMERGE5" : 1,
        "MMERGE6" : 0,
        "MMERGE7" : 0,
        "MMERGE8" : 1,
        "MMERGE9" : 1,
        "MMERGE10" : 1,
        "MMERGE11" : 1,
        "MMERGE12" : 0,
        "MMERGE13" : 0,
        "MMERGE14" : 0,
        "MMERGE15" : 0,
        "MMERGE16" : 0,
        "MMERGE17" : 0,
        "MMERGE18" : 0,
        "MMERGE19" : 1,
        "MMERGE20" : 1,
        "MMERGE21" : 1
      },
      "doublein" : 0,
      "show_register_form" : 1,
      "default_register_form_optin" : 1,
      "show_account_form" : 1,
      "form_label" : "Land Portal News Digest",
      "submit_label" : "Subscribe",
      "include_interest_groups" : 0,
      "opt_in_interest_groups" : 0,
      "interest_groups_label" : "",
      "cron" : 0,
      "webhooks" : 0,
      "allow_anonymous" : 1,
      "required" : 0
    },
    "rdf_mapping" : []
  }');
  $items['legend_bulletin'] = entity_import('mailchimp_list', '{
    "name" : "legend_bulletin",
    "mc_list_id" : "9f6554a879",
    "label" : "LEGEND Bulletin",
    "description" : "",
    "settings" : {
      "roles" : {
        "2" : 2,
        "111903911" : 111903911,
        "111903912" : 111903912,
        "25521343" : 25521343,
        "111903910" : 111903910,
        "30037204" : 30037204,
        "1" : 1
      },
      "mergefields" : {
        "EMAIL" : "mail",
        "FNAME" : "",
        "LNAME" : "",
        "MMERGE3" : "",
        "MMERGE4" : "field-legend-arabic-language",
        "MMERGE5" : "field-legend-english-language",
        "MMERGE6" : "field-legend-french-language",
        "MMERGE7" : "field-legend-spanish-language"
      },
      "mergefields_display" : {
        "EMAIL" : true,
        "FNAME" : 1,
        "LNAME" : 1,
        "MMERGE3" : 1,
        "MMERGE4" : 1,
        "MMERGE5" : 1,
        "MMERGE6" : 1,
        "MMERGE7" : 1
      },
      "doublein" : 0,
      "show_register_form" : 0,
      "default_register_form_optin" : 0,
      "show_account_form" : 1,
      "form_label" : "LEGEND Bulletin",
      "submit_label" : "Subscribe",
      "include_interest_groups" : 0,
      "opt_in_interest_groups" : 0,
      "interest_groups_label" : "Interest Groups",
      "cron" : 0,
      "webhooks" : 0,
      "allow_anonymous" : 1,
      "required" : 0
    },
    "rdf_mapping" : []
  }');
  return $items;
}
