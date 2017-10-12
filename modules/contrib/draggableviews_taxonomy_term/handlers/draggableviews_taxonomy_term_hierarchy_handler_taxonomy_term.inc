<?php

/**
 * @file
 * Field API handler plugin.
 */

$plugin = array(
  'label' => 'Taxonomy term',
  'handler' => array(
    'class' => 'draggableviews_taxonomy_term_hierarchy_handler_taxonomy_term',
  ),
);

class draggableviews_taxonomy_term_hierarchy_handler_taxonomy_term extends draggableviews_hierarchy_handler {
  public function get($field, $index) {
    if (!isset($field->view->draggableviews_taxonomy_term_helper)) {
      $field->view->draggableviews_taxonomy_term_helper = new draggableviews_taxonomy_term_helper($field);
    }
    $data = $field->view->draggableviews_taxonomy_term_helper->data();
    $tid = $field->view->result[$index]->tid;
    $parent = $data[$tid]['parent'];
    return $parent;
  }

  public function get_depth($field, $index) {
    if (!isset($field->view->draggableviews_taxonomy_term_helper)) {
      $field->view->draggableviews_taxonomy_term_helper = new draggableviews_taxonomy_term_helper($field);
    }
    $data = $field->view->draggableviews_taxonomy_term_helper->data();
    $tid = $field->view->result[$index]->tid;
    $depth = count($data[$tid]['weight_path']) - 1;
    return $depth;
  }

  public function sort_rows($field, &$rows) {
    if (!isset($field->view->draggableviews_taxonomy_term_helper)) {
      $field->view->draggableviews_taxonomy_term_helper = new draggableviews_taxonomy_term_helper($field);
    }
    $field->view->draggableviews_taxonomy_term_helper->sort_rows($rows);
  }

  // Don't need to set value here as it is done in "weight" handler
  // draggableviews_handler in order to avoid doing multiple identical queries
  // to draggableviews_structure table.
  function set($form_state) {}
}
