<?php
/**
 * @file
 * Helpers function for the landportal_utility module.
 */

/**
 * Returns a nested tree of taxonomy data (like taxonomy_get_tree) but with nested elements (under a new "children" property)
 *
 * @see taxonomy_get_tree()
 *
 * @return array
 *   Array of taxonomy objects (and their parents and children)
 */
function landportal_utility_taxonomy_get_tree_nested($vid, $parent = 0, $max_depth = NULL, $load_entities = FALSE) {
  $tree = taxonomy_get_tree($vid, $parent, $max_depth, $load_entities);
  $list = array();
  $nested = array();

  // Build an array of all terms
  foreach ($tree as $term) {
    $term->children = array();
    $list[$term->tid] = $term;
  }

  // $term data behaves like a reference
  // If we update a term or child term in $list or $tree or $nested it'll be "updated" in all 3 places
  foreach ($list as $tid => $term) {
    foreach ($term->parents as $ptid) {
      if (isset($list[$ptid])) {
        // This term's parent tid exists; add the term to its children array
        $list[$ptid]->children[$tid] = $term;
      }
      elseif ($ptid == '0') {
        // The parent is 0, meaning it's a top-level term; add the term to the final $nested array
        // It doesn't matter if it doesn't have its children yet (see note above re: references)
        $nested[$tid] = $term;
      }
    }
  }

  return $nested;
}


function landportal_utility_get_library_provider(){
  $options = array(''=> '-All-');

  $query = db_select('node','n');
  $query->fields('n', array('nid', 'title'));
  $query->leftJoin('field_data_field_doc_provider','fdfdp','fdfdp.field_doc_provider_target_id = n.nid');
  $query->condition('n.status', 1);
  $query->isNotNull('fdfdp.field_doc_provider_target_id');
  $query->orderBy('n.title','ASC');
  $results = $query->execute()->fetchAllAssoc('nid');

  if (!empty($options)) {
    foreach ($results as $nid => $item) {
      $options['node\:'.$nid] = $item->title;
    }
  }
  return $options;
}
