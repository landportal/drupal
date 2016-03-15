<?php
/**
 * @file
 * Hooks function for the landportal_utility module.
 */

/**********************
** Implementation of hook_entity_info_alter().
***********************/

function landportal_utility_entity_info_alter(&$entity_info){
  $entity_info['node']['view modes']['listing'] = array(
    'label' => t('Listing'),
    'custom settings' => TRUE,
  ); 
}

/**
 * Implements hook_form_alter().
 */
function landportal_utility_form_alter(&$form, &$form_state, $form_id){
  switch ($form_id) {
    case 'apachesolr_search_custom_page_search_form':
      $form['#submit'][] = 'landportal_utility_custom_page_search_form';

      $env_id = $form['#search_page']['env_id'];
      $all_types_list = array('_none' => t('-None-'));
      foreach (entity_get_info() as $entity_type => $entity_info) {
        if (!empty($entity_info['apachesolr']['indexable'])) {
          $all_options = array();
          foreach ($entity_info['bundles'] as $key => $info) {
            $all_options[$key] = $info['label'];
          }

          $selected_options = apachesolr_get_index_bundles($env_id, $entity_type);
          foreach ($selected_options as $key => $value) {
            $all_types_list['bundle:' . $value] = $all_options[$value];
          }
        }
      }

      if (isset($_GET['f'])) {
        $default_content_type = key(array_intersect_key(array_flip($_GET['f']), $all_types_list));
      }
      else{
        $default_content_type = '_none';
      }

      $form['advanced_search'] = array(
        '#type' => 'fieldset', 
        '#title' => t('Advanced search'), 
        '#weight' => 5, 
        '#collapsible' => TRUE, 
        '#collapsed' => FALSE,
      );

      $form['advanced_search']['search_content_type'] = array(
        '#type' => 'select',
        '#title' => t('Content Type'),
        '#options' => $all_types_list,
        '#default_value' => $default_content_type
      );

      $language_list = language_list();
      $language_select_list = array('_none' => t('-None-'), 'ss_language:und' => t('Language neutral'));
      foreach ($language_list as $key => $value) {
        $language_select_list['ss_language:' . $value->language] = $value->name;
      }

      if (isset($_GET['f'])) {
        $default_language = key(array_intersect_key(array_flip($_GET['f']), $language_select_list));
      }
      else{
        $default_language = '_none';
      }

      $form['advanced_search']['search_language'] = array(
        '#type' => 'select',
        '#title' => t('Language'),
        '#options' => $language_select_list,
        '#default_value' => $default_language
      );

      $field_list = array(
        'im_field_geographical_focus' => array(
          'label' => 'Geographical focus',
          'taxonomy' => 'regions'
        ),
        'im_field_related_topics' => array(
          'label' => 'Related topics',
          'taxonomy' => 'landportal_topics'
        )
      );

      foreach ($field_list as $key_field => $value_field) {
        $taxonomy = taxonomy_vocabulary_machine_name_load($value_field['taxonomy']);
        $terms = landportal_utility_taxonomy_get_tree_nested($taxonomy->vid);
        $select_list = array('_none' => t('-None-'));
        foreach ($terms as $key => $value) {
          $select_list[$key_field . ':' . $value->tid] = $value->name;
          if (!empty($value->children)) {
            foreach ($value->children as $children_key => $children_value) {
              $select_list[$key_field . ':' . $children_value->tid] = '-' . $children_value->name;
            }
          }
        }

        if (isset($_GET['f'])) {
          $default_value = key(array_intersect_key(array_flip($_GET['f']), $select_list));
        }
        else{
          $default_value = '_none';
        }

        $form['advanced_search']['search_' . $key_field] = array(
          '#type' => 'select',
          '#title' => t($value_field['label']),
          '#options' => $select_list,
          '#default_value' => $default_value
        );
      }
      break;
    
    default:
      # code...
      break;
  }
}

function landportal_utility_custom_page_search_form(&$form, &$form_state){
  $values = $form_state['values'];
  $search_page = $form['#search_page'];
  $redirect = $search_page['search_path'];
  $redirect_value = rawurlencode($form_state['values']['keys']);
  $get = array();
  if (strlen($form_state['values']['keys'])) {
    $redirect .= '/' . $redirect_value;
  }

  $input_name_list = array(
    'search_content_type',
    'search_language',
    'search_im_field_geographical_focus',
    'search_im_field_related_topics'
  );

  foreach ($input_name_list as $key => $name) {
    if (($values[$name]) != '_none') {
      $get['f'][] = $values[$name];
    }
  }

  $form_state['values']['get'] = json_encode($get);
  $form_state['redirect'] = array($redirect, array('query' => $get));
}
