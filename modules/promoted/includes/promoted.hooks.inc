<?php
/**
 * Implements hook_form_alter().
 */
function promoted_form_alter(&$form, &$form_state, $form_id){
  if($form_id == 'news_node_form'  || $form_id == 'blog_post_node_form' || $form_id == 'debate_node_form' || $form_id == 'event_node_form' || $form_id == 'landlibrary_resource_node_form' || $form_id == 'organization_node_form'){

    $form['#after_build'][] = 'promoted_form_custom_options_after_build';
    $form['options']['#attached']['js'][] = drupal_get_path('module', 'promoted') . '/js/promoted.js';

    if ($form_id != 'organization_node_form') {
      $terms = array('0'=>'--None--');
      $countries = taxonomy_get_tree(3);
      foreach ($countries as $country) {
        $terms[$country->tid]=$country->name;
      }

      $default = array();

      if (!empty($form['#node']->field_country_promoted[LANGUAGE_NONE])) {
        $default_values = $form['#node']->field_country_promoted[LANGUAGE_NONE];
        foreach ($default_values as $value) {
          $default[] = $value['tid'];
        }
      }

      $form['options']['promoted_nodes'] = array(
        '#type'=> 'select',
        '#weight'=> 1,
        '#options'=> $terms,
        '#multiple'=> TRUE,
        '#default_value'=> $default,
      );

      $form['field_country_promoted']['#access'] = FALSE;
    }

    $thematic_narrative_nodes = node_load_multiple(array(), array('type' => 'thematic_narrative'));
    $thematic_nodes = array('0'=>'--None--');
    if (!empty($thematic_narrative_nodes)) {
      foreach ($thematic_narrative_nodes as $node) {
        $field_landvoc_to = field_get_items('node', $node, 'field_landvoc_to');
        if (!empty($field_landvoc_to[0])) {
          $term = taxonomy_term_load($field_landvoc_to[0]['target_id']);
          if (!empty($term)) {
            $vocabulary = taxonomy_vocabulary_load($term->vid);
            $thematic_nodes[$node->nid] = $term->name . ' - ' . '(' . $vocabulary->name . ')' . ' - Nid: ' . $node->nid;
          }
        }
      }
    }

    $default_thematic_nodes = array();

    if (!empty($form['#node']->field_thematic_promoted[LANGUAGE_NONE])) {
      $default_values = $form['#node']->field_thematic_promoted[LANGUAGE_NONE];
      foreach ($default_values as $value) {
        $default_thematic_nodes[] = $value['target_id'];
      }
    }

    $form['options']['promoted_thematic_nodes'] = array(
      '#type'=> 'select',
      '#weight'=> 10,
      '#options'=> $thematic_nodes,
      '#multiple'=> TRUE,
      '#default_value'=> $default_thematic_nodes,
    );

    array_unshift($form['#submit'],'promoted_save_promoted_nodes');
    $form['field_thematic_promoted']['#access'] = FALSE;
  }
}
function promoted_save_promoted_nodes(&$form, &$form_state){
  if (isset($form_state['values']['field_country_promoted'])) {
    $form_state['values']['field_country_promoted']['und'] = array();
    foreach($form_state['values']['promoted_nodes'] as $value){
      $form_state['values']['field_country_promoted']['und'][]['tid'] = $value;
    }
  }

  $form_state['values']['field_thematic_promoted'][LANGUAGE_NONE] = array();
  foreach($form_state['values']['promoted_thematic_nodes'] as $value){
    $form_state['values']['field_thematic_promoted'][LANGUAGE_NONE][]['target_id'] = $value;
  }
}

function promoted_form_custom_options_after_build($form, &$form_state){
  $form['options']['promoted_to_thematic_page']['#weight'] = 5;
  return $form;
}

/**
 * Implements hook_views_query_alter().
 */
function promoted_views_query_alter(&$view, &$query){
  if(!empty($view->name) && $view->name == 'promoted_nodes'){
    $args = arg();
    if($view->current_display == 'block_1'){
      if (!empty($args[2])) {
        $tid = promoted_get_country_iso($args[2]);
        $query->where[1]['conditions'][4]['value'] = $tid;
      }
    }
    if($view->current_display == 'block'){
      if($args[0] == 'node' && is_numeric($args[1])){
        $node = node_load($args[1]);
        if($node->type == 'thematic_narrative'){
          $field_values = field_get_items('node', $node, 'field_landvoc_to');
          $tid = $field_values[0]['target_id'];
          $query->where[1]['conditions'][4]['value'] = $args[1];
          $query->where[1]['conditions'][4]['operator'] = '=';

          $query->where[2]['conditions'][5]['value'] = $tid;
          $query->where[2]['conditions'][5]['operator'] = '=';

          $query->where[3]['conditions'][5]['value'] = $tid;
          $query->where[3]['conditions'][5]['operator'] = '=';
        }
      }
    }
  }
}