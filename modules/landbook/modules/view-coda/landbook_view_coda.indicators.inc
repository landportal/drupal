<?php
/**
 * @file
 * Provide LB View Coda indicators helpers
 */

// ind = indicator taxonomy term id
function lbvc__indicators_cache(&$params, $tid) {
  // @TODO: should be a better way to cache this globaly
  //  BUG: if we don't reset entity_load, entities after the first ones won't have all fields data
  $ents = entity_load('taxonomy_term', [$tid], [], TRUE);
  //dpm($ents);
  if (!$ents) return;
  $entity = entity_metadata_wrapper('taxonomy_term', $ents[$tid]);
  $lb = lbvc__indicators_js_serialize($entity);
  // Should be stored / applied by indicators , not globally
  /* if ($term->field_observations) { */
  /*   if (!isset($params->observations)) $params->observations = []; */
  /*   $lb['obs'] = []; */
  /*   foreach($term->field_observations[LANGUAGE_NONE] as $n => $o) { */
  /*     $obs = taxonomy_term_load($o['tid']); */
  /*     $params->observations[$o['tid']] = array('id' => $o['tid'], 'label' => $obs->name, 'description' => $obs->description); */
  /*     array_push($lb['obs'], $o['tid']); */
  /*   } */
  /*   /\* dpm($params->observations, 'obs'); *\/ */
  /*   /\* dpm($term->field_observations[LANGUAGE_NONE], 'obs'); *\/ */
  /* } */
  $params->cache[$lb['id']] = $lb;
  return $lb['id'];
}

function lbvc__indicators_process(&$params, $indicators) {
  foreach ($indicators as $ind) {
    //dpm($ind, $ind->name);
    $lbid = lbvc__indicators_cache($params, $ind->tid);
    array_push($params->indicators, $lbid);
  }
}

// Process an array of indicators (terms), fold them by hierarchy
function lbvc__indicators_tree(&$params, $indicators) {
  $params->ttop = [];
  $params->tree = [];
  foreach ($indicators as $ind) {
    $lbid = lbvc__indicators_cache($params, $ind->tid);
    $htree = hierarchical_taxonomy_get_tree(LBVC_IND_VID, $ind->tid, 2); // max depth: 2
    $params->tree[$lbid] = array();
    $params->ttop[] = $lbid;
    lbvc__indicators_flatten($params, $params->tree[$lbid], $htree);
  }
  //dpm($params);
}

// Crawl hierarchical_taxonomy_get_tree results, 'flatten' that
function lbvc__indicators_flatten(&$params, &$tree, $parent) {
  // Re-sort terms by weight
  $stree = array();
  foreach ($parent as $k => $tind) { $stree[$k] = $tind->weight; }
  array_multisort($stree, $parent);
  //dpm($parent, 'o');
  foreach($parent as $tid => $term) {
    $lbid = lbvc__indicators_cache($params, $term->tid);
    //$params->cache[$lbid] = $lbt;
    if (isset($term->below)) {
      array_push($params->ttop, $lbid);
      // if 'obs'
      $tree[$lbid] = array();
      lbvc__indicators_flatten($params, $tree[$lbid], $term->below);
    }
    else {
      array_push($tree, $lbid);
    }
    array_push($params->indicators, $lbid);
  }
}


// Streamline indicator structure between Drupal/JS/LOD
function lbvc__indicators_js_serialize($entity) {
  $path = drupal_get_path_alias('taxonomy/term/' . $entity->value()->tid);
  $unit = $entity->field_unit;
  $dataset = $entity->field_dataset;
  $source = $entity->field_dataset->field_orgref[0];//->value()->title;
  //dpm($unit->value(), 'unit');

  $ind = array(
    'id'      => $entity->field_id->value(),
    'label'   => $entity->value()->name,
    'description' => $entity->value()->description,
    'unit'    => $unit->value(),
    'dataset' => $dataset->value()->name,
    'source'  => $source->value()->title,
    'indicatorSeeAlso' => $path
  );

  $ind['render'] = '<span><a href="/'. $ind['indicatorSeeAlso'] .'">' . $ind['label'] . '</a>';
  if (strlen($ind['description']) > 0) {
    $ind['render'] .= ' <span class="glyphicon glyphicon-question-sign" data-toggle="tooltip" data-placement="top" title="'
      . str_replace('"', "'", strip_tags($ind['description'])) .'"></span>';
  }
  $extra = '';
  $extra .= "Unit: " . $ind['unit'] . "\n";
  $extra .= 'Dataset: ' . $ind['dataset'] . "\n";
  $extra .= "Source: " . $ind['source'] . "\n";
  $ind['render'] .= ' <span class="glyphicon glyphicon-info-sign" data-toggle="tooltip" data-placement="top" title="'. $extra .'"></span>';
  //$ind['render'] .= '(' . $ind['unit'] . ')';
  $ind['render'] .= '</span>';
  return $ind;
}
