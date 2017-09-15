<?php

/**
 * @file
 * The taxonomy term weight handler plugin.
 */

$plugin = array(
  'label' => 'Taxonomy term',
  'handler' => array(
    'class' => 'draggableviews_taxonomy_term_handler_taxonomy_term',
  ),
);

class draggableviews_taxonomy_term_helper {
  private $field, $view, $data;
  public function __construct($field) {
    $this->view = $field->view;
    $this->field = $field->field_alias ? $field : $field->view->field['draggableviews'];

    $tids = $this->get_tids($this->field);
    $this->fetch($tids);
    $this->set_weight_paths();
    $this->adjust_weights();
  }

  private function get_tids($field) {
    $tids = array();
    foreach ($field->view->result as $index => $row) {
      $tids[] = $row->{$field->field_alias};
    }
    return $tids;
  }

  private function fetch($tids) {
    $query = db_select('taxonomy_term_data', 'd');
    $query->join('taxonomy_term_hierarchy', 'h', 'd.tid=h.tid');
    $query->condition('d.tid', $tids, 'IN');
    $query->fields('d', array('tid', 'weight'));
    $query->fields('h', array('parent'));
    $this->data = $query->execute()->fetchAllAssoc('tid', PDO::FETCH_ASSOC);
  }

  private function get_weight_path($tid) {
    if (!isset($this->data[$tid]['weight_path'])) {
      $parent = $this->data[$tid]['parent'];
      $path = $parent ? $this->get_weight_path($parent) : array();
      $path[] = $this->data[$tid]['weight'];;
      $this->data[$tid]['weight_path'] = $path;
    }
    return $this->data[$tid]['weight_path'];
  }

  private function set_weight_paths() {
    foreach (array_keys($this->data) as $tid) {
      $this->get_weight_path($tid);
    }
  }

  private static function weight_path_sort_callback($a, $b) {
    $a = $a['weight_path'];
    $b = $b['weight_path'];
    for ($i = 0; $i < count($a); $i++) {
      if (!isset($b[$i]) || $a[$i] > $b[$i]) return 1;
      if ($a[$i] < $b[$i]) return -1;
    }
    if (isset($b[$i])) return -1;
    return 0;
  }

  private function adjust_weights() {
    uasort($this->data, array(__CLASS__, 'weight_path_sort_callback'));
    $weight = 0;
    foreach ($this->data as &$record) {
      $record['weight'] = $weight++;
    }
  }

  public function sort_rows(&$rows) {
    $sort = array();
    foreach ($rows as $index => $_) {
      $tid = $this->field->view->result[$index]->tid;
      $this->data[$tid]['index'] = $index;
    }
    $copy = $rows;
    $index = 0;
    foreach ($this->data as $record) {
      if (isset($record['index'])) {
        $rows[$index] = $copy[$record['index']];
        $index++;
      }
    }
  }

  public function data() {
    return $this->data;
  }
}

class draggableviews_taxonomy_term_handler_taxonomy_term extends draggableviews_handler {
  public function get($field, $index) {
    if (!isset($field->view->draggableviews_taxonomy_term_helper)) {
      $field->view->draggableviews_taxonomy_term_helper = new draggableviews_taxonomy_term_helper($field);
    }
    $data = $field->view->draggableviews_taxonomy_term_helper->data();
    $tid = $field->view->result[$index]->tid;
    return $data[$tid]['weight'];
  }

  function set($form_state) {
    foreach ($form_state['values']['draggableviews'] as $item) {
      // Make sure id is available.
      if (!isset($item['id'])) {
        continue;
      }
      $term = taxonomy_term_load($item['id']);
      if ($term->weight != $item['weight'] || $term->parent != $item['parent']) {
        $term->weight = $item['weight'];
        $term->parent = $item['parent'];
        taxonomy_term_save($term);
      }
    }
  }
}
