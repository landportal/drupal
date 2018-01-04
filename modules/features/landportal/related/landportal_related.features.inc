<?php
/**
 * @file
 * landportal_related.features.inc
 */

/**
 * Implements hook_default_cer().
 */
function landportal_related_default_cer() {
  $items = array();
  $items['node:dataset:field_noderef*node:blog_post:field_noderef'] = entity_import('cer', '{
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_left" : { "und" : [ { "path" : "node:dataset:field_noderef" } ] },
    "cer_right" : { "und" : [ { "path" : "node:blog_post:field_noderef" } ] },
    "cer_weight" : { "und" : [ { "value" : "-41" } ] },
    "identifier" : "node:dataset:field_noderef*node:blog_post:field_noderef",
    "rdf_mapping" : []
  }');
  $items['node:dataset:field_noderef*node:debate:field_noderef'] = entity_import('cer', '{
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_left" : { "und" : [ { "path" : "node:dataset:field_noderef" } ] },
    "cer_right" : { "und" : [ { "path" : "node:debate:field_noderef" } ] },
    "cer_weight" : { "und" : [ { "value" : "-42" } ] },
    "identifier" : "node:dataset:field_noderef*node:debate:field_noderef",
    "rdf_mapping" : []
  }');
  $items['node:dataset:field_noderef*node:event:field_noderef'] = entity_import('cer', '{
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_left" : { "und" : [ { "path" : "node:dataset:field_noderef" } ] },
    "cer_right" : { "und" : [ { "path" : "node:event:field_noderef" } ] },
    "cer_weight" : { "und" : [ { "value" : "-43" } ] },
    "identifier" : "node:dataset:field_noderef*node:event:field_noderef",
    "rdf_mapping" : []
  }');
  $items['node:dataset:field_noderef*node:landlibrary_resource:field_noderef'] = entity_import('cer', '{
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_left" : { "und" : [ { "path" : "node:dataset:field_noderef" } ] },
    "cer_right" : { "und" : [ { "path" : "node:landlibrary_resource:field_noderef" } ] },
    "cer_weight" : { "und" : [ { "value" : "-44" } ] },
    "identifier" : "node:dataset:field_noderef*node:landlibrary_resource:field_noderef",
    "rdf_mapping" : []
  }');
  $items['node:dataset:field_noderef*node:news:field_noderef'] = entity_import('cer', '{
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_left" : { "und" : [ { "path" : "node:dataset:field_noderef" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news:field_noderef" } ] },
    "cer_weight" : { "und" : [ { "value" : "-45" } ] },
    "identifier" : "node:dataset:field_noderef*node:news:field_noderef",
    "rdf_mapping" : []
  }');
  $items['node:partners_page:field_noderef*node:blog_post:field_noderef'] = entity_import('cer', '{
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_left" : { "und" : [ { "path" : "node:partners_page:field_noderef" } ] },
    "cer_right" : { "und" : [ { "path" : "node:blog_post:field_noderef" } ] },
    "cer_weight" : { "und" : [ { "value" : "-36" } ] },
    "identifier" : "node:partners_page:field_noderef*node:blog_post:field_noderef",
    "rdf_mapping" : []
  }');
  $items['node:partners_page:field_noderef*node:debate:field_noderef'] = entity_import('cer', '{
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_left" : { "und" : [ { "path" : "node:partners_page:field_noderef" } ] },
    "cer_right" : { "und" : [ { "path" : "node:debate:field_noderef" } ] },
    "cer_weight" : { "und" : [ { "value" : "-37" } ] },
    "identifier" : "node:partners_page:field_noderef*node:debate:field_noderef",
    "rdf_mapping" : []
  }');
  $items['node:partners_page:field_noderef*node:event:field_noderef'] = entity_import('cer', '{
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_left" : { "und" : [ { "path" : "node:partners_page:field_noderef" } ] },
    "cer_right" : { "und" : [ { "path" : "node:event:field_noderef" } ] },
    "cer_weight" : { "und" : [ { "value" : "-38" } ] },
    "identifier" : "node:partners_page:field_noderef*node:event:field_noderef",
    "rdf_mapping" : []
  }');
  $items['node:partners_page:field_noderef*node:landlibrary_resource:field_noderef'] = entity_import('cer', '{
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_left" : { "und" : [ { "path" : "node:partners_page:field_noderef" } ] },
    "cer_right" : { "und" : [ { "path" : "node:landlibrary_resource:field_noderef" } ] },
    "cer_weight" : { "und" : [ { "value" : "-39" } ] },
    "identifier" : "node:partners_page:field_noderef*node:landlibrary_resource:field_noderef",
    "rdf_mapping" : []
  }');
  $items['node:partners_page:field_noderef*node:news:field_noderef'] = entity_import('cer', '{
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_left" : { "und" : [ { "path" : "node:partners_page:field_noderef" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news:field_noderef" } ] },
    "cer_weight" : { "und" : [ { "value" : "-40" } ] },
    "identifier" : "node:partners_page:field_noderef*node:news:field_noderef",
    "rdf_mapping" : []
  }');
  $items['node:sdgi:field_noderef*node:blog_post:field_noderef'] = entity_import('cer', '{
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sdgi:field_noderef" } ] },
    "cer_right" : { "und" : [ { "path" : "node:blog_post:field_noderef" } ] },
    "cer_weight" : { "und" : [ { "value" : "-46" } ] },
    "identifier" : "node:sdgi:field_noderef*node:blog_post:field_noderef",
    "rdf_mapping" : []
  }');
  $items['node:sdgi:field_noderef*node:debate:field_noderef'] = entity_import('cer', '{
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sdgi:field_noderef" } ] },
    "cer_right" : { "und" : [ { "path" : "node:debate:field_noderef" } ] },
    "cer_weight" : { "und" : [ { "value" : "-47" } ] },
    "identifier" : "node:sdgi:field_noderef*node:debate:field_noderef",
    "rdf_mapping" : []
  }');
  $items['node:sdgi:field_noderef*node:event:field_noderef'] = entity_import('cer', '{
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sdgi:field_noderef" } ] },
    "cer_right" : { "und" : [ { "path" : "node:event:field_noderef" } ] },
    "cer_weight" : { "und" : [ { "value" : "-48" } ] },
    "identifier" : "node:sdgi:field_noderef*node:event:field_noderef",
    "rdf_mapping" : []
  }');
  $items['node:sdgi:field_noderef*node:landlibrary_resource:field_noderef'] = entity_import('cer', '{
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sdgi:field_noderef" } ] },
    "cer_right" : { "und" : [ { "path" : "node:landlibrary_resource:field_noderef" } ] },
    "cer_weight" : { "und" : [ { "value" : "-49" } ] },
    "identifier" : "node:sdgi:field_noderef*node:landlibrary_resource:field_noderef",
    "rdf_mapping" : []
  }');
  $items['node:sdgi:field_noderef*node:news:field_noderef'] = entity_import('cer', '{
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_left" : { "und" : [ { "path" : "node:sdgi:field_noderef" } ] },
    "cer_right" : { "und" : [ { "path" : "node:news:field_noderef" } ] },
    "cer_weight" : { "und" : [ { "value" : "-50" } ] },
    "identifier" : "node:sdgi:field_noderef*node:news:field_noderef",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function landportal_related_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
}
