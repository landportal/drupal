<?php
/**
 * @file
 * landlibrary_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function landlibrary_rules_default_rules_configuration() {
    $items = array();
    $items['rules_add_country_automatically'] = entity_import('rules_config', '{ "rules_add_country_automatically" : {
      "LABEL" : "Add country automatically",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "autotag", "landlibrary" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave--landlibrary_resource" : { "bundle" : "landlibrary_resource" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_doc_country" } },
        { "data_is_empty" : { "data" : [ "node:field-doc-country" ] } }
      ],
      "DO" : [
        { "component_rules_autotag_tag" : {
            "text" : "[node:title] [node:field-doc-description] [node:field-doc-alt-title] [node:field-doc-title] ",
            "vocabulary" : "countries",
            "target_terms" : [ "node:field-doc-country" ]
          }
        }
      ]
    }
  }');
    $items['rules_add_geo_automatically'] = entity_import('rules_config', '{ "rules_add_geo_automatically" : {
    "LABEL" : "Add geo automatically",
    "PLUGIN" : "reaction rule",
    "OWNER" : "rules",
    "TAGS" : [ "autotag", "landlibrary" ],
    "REQUIRES" : [ "rules" ],
    "ON" : { "node_presave--landlibrary_resource" : { "bundle" : "landlibrary_resource" } },
    "DO" : [
      { "component_rules_autotag_tag" : {
          "text" : "[node:title] [node:field-doc-description] [node:field-doc-alt-title] [node:field-doc-title] ",
          "vocabulary" : "regions",
          "target_terms" : [ "node:field-geographical-focus" ]
        }
      }
    ]
  }
}');

    $items['rules_add_topic_automatically'] = entity_import('rules_config', '{ "rules_add_topic_automatically" : {
      "LABEL" : "Add concepts (aka topics) automatically",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "autotag", "landlibrary" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave--landlibrary_resource" : { "bundle" : "landlibrary_resource" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_related_topics" } },
        { "data_is_empty" : { "data" : [ "node:field-related-topics" ] } }
      ],
      "DO" : [
        { "component_rules_autotag_tag" : {
            "text" : "[node:title] [node:field-doc-description] [node:field-doc-alt-title] [node:field-doc-title] ",
            "vocabulary" : "landportal_topics",
            "target_terms" : [ "node:field-related-topics" ]
          }
        }
      ]
    }
  }');
  return $items;
}