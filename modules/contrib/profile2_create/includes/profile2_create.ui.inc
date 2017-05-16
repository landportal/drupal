<?php

/**
 * @file
 * Provides a controller for building a party overview form.
 */

/**
 * Controller for providing Profile2 UI.
 */
class Profile2UIController extends EntityDefaultUIController {
  /**
   * Provides definitions for implementing hook_menu().
   */
  public function hook_menu() {
    $items = parent::hook_menu();

    $id_count = count(explode('/', $this->path));
    $wildcard = isset($this->entityInfo['admin ui']['menu wildcard']) ? $this->entityInfo['admin ui']['menu wildcard'] : '%entity_object';

    // Remove the entity add callback for now, as we provide our own.
    // @todo: use htis one instead!
    unset($items[$this->path . '/list']);
    $items[$this->path]['type'] = MENU_LOCAL_TASK;

    $items[$this->path . '/add']['page callback'] = 'profile2_create_add_page';
    //$items[$this->path . '/add']['page arguments'] = array('profile2_create', NULL, 'add');
    foreach (profile2_get_types() as $type) {
      $type_url_str = str_replace('_', '-', $type->type);
      $items[$this->path . '/add/' . $type_url_str] = array(
        'title' => $type->label,
        'title callback' => 'check_plain',
        'page callback' => 'profile2_create_add',
        'page arguments' => array($type->type),
        //'load arguments' => array($type->type),
        'access callback' => 'user_access',
        'access arguments' => array('administer profiles'),
        'file' => 'profile2_create.pages.inc',
        'file path' => drupal_get_path('module', 'profile2_create'),
      );

    }

    unset($items[$this->path . '/manage/'. $wildcard]);
    unset($items[$this->path . '/manage/'. $wildcard. '/delete']);
    unset($items[$this->path . '/manage/'. $wildcard.'/edit']);

    return $items;
  }


  /**
   * Generates the row for the passed entity and may be overridden in order to
   * customize the rows.
   */
  protected function overviewTableRow($conditions, $id, $entity, $additional_cols = array()) {
    $entity_uri = entity_uri($this->entityType, $entity);

    $row[] = array(
      'data' => array(
        '#theme' => 'entity_ui_overview_item', 
        '#label' => entity_label($this->entityType, $entity), 
        '#name' => !empty($this->entityInfo['exportable']) ? entity_id($this->entityType, $entity) : FALSE, 
        '#url' => $entity_uri ? $entity_uri : FALSE, 
        '#entity_type' => $this->entityType,
      ),
    );

    // Add in any passed additional cols.
    foreach ($additional_cols as $col) {
      $row[] = $col;
    }

    // Add a row for the exportable status.
    if (!empty($this->entityInfo['exportable'])) {
      $row[] = array('data' => array(
          '#theme' => 'entity_status', 
          '#status' => $entity->{$this->statusKey},
        ));
    }
    // In case this is a bundle, we add links to the field ui tabs.
    $field_ui = !empty($this->entityInfo['bundle of']) && entity_type_is_fieldable($this->entityInfo['bundle of']) && module_exists('field_ui');
    // For exportable entities we add an export link.
    $exportable = !empty($this->entityInfo['exportable']);
    // If i18n integration is enabled, add a link to the translate tab.
    $i18n = !empty($this->entityInfo['i18n controller class']);

    // Add operations depending on the status.
    if (entity_has_status($this->entityType, $entity, ENTITY_FIXED)) {
      $row[] = array(
        'data' => l(t('clone'), $this->path . '/manage/' . $id . '/clone'),
        'colspan' => $this->operationCount(),
      );
    }
    else {
      $row[] = l(t('edit'), 'profile/' . $id . '/edit');

      if (empty($this->entityInfo['exportable']) || !entity_has_status($this->entityType, $entity, ENTITY_IN_CODE)) {
        $row[] = l(t('delete'), 'profile/' . $id . '/delete', array('query' => drupal_get_destination()));
      }
      else {
        $row[] = '';
      }
    }
    return $row;
  }

}
