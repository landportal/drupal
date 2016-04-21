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

/**********************
** Implementation of hook_views_pre_render().
***********************/
function landportal_utility_views_pre_render(&$view){
  if($view->name == 'taxonomy_term' && $view->current_display == 'page') {
    $view->style_plugin->row_plugin->options['view_mode'] = 'listing';
  }
}


/**
 * Implements hook_form_alter().
 */
function landportal_utility_form_alter(&$form, &$form_state, $form_id){

  // core_search
  if (!empty($form['#search_page']['page_id']) && $form['#search_page']['page_id'] == 'core_search' && $form_id == 'apachesolr_search_custom_page_search_form') {

    $form['basic']['keys']['#title']=t('Search');
    $form['basic']['keys']['#attributes']['class']=array('form-control','keys');
    $form['basic']['#attributes']['class'][]='form-inline';
    //pa($form,1);
    $form['basic']['submit']['#attributes']['class']=array('btn','btn-default');
    $form['#submit'][] = 'landportal_utility_custom_page_search_form';

    $env_id = $form['#search_page']['env_id'];
    $all_types_list = array(/*'_none' => t('-None-')*/);
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
    $default_content_type=array();
      if (isset($_GET['f'])) {
        foreach(array_intersect_key(array_flip($_GET['f']), $all_types_list) as $key=>$item){
            $default_content_type[]=$key;
        }
      }
    /*if (isset($_GET['f'])) {
      $default_content_type = key(array_intersect_key(array_flip($_GET['f']), $all_types_list));
    }
    else{
      $default_content_type = '_none';
    }*/

    $form['advanced_search'] = array(
      '#type' => 'fieldset',
      '#title' => t('Advanced search'),
      '#weight' => 5,
      //'#collapsible' => TRUE,
      //'#collapsed' => FALSE,
    );

    $form['advanced_search']['search_content_type'] = array(
      '#type' => 'select',
      '#title' => t('Content Type'),
      '#options' => $all_types_list,
      '#multiple'=>TRUE,
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
    /*$default_language=array();
      if (isset($_GET['f'])) {
        foreach(array_intersect_key(array_flip($_GET['f']), $language_select_list) as $key=>$item){
            $default_language[]=$key;
        }
      }*/

    $form['advanced_search']['search_language'] = array(
      '#type' => 'select',
      '#title' => t('Language'),
      '#options' => $language_select_list,
      //'#multiple'=>TRUE,
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
      $select_list = array(/*'_none' => t('-None-')*/);
      foreach ($terms as $key => $value) {
        $select_list[$key_field . ':' . $value->tid] = $value->name;
        if (!empty($value->children)) {
          foreach ($value->children as $children_key => $children_value) {
            $select_list[$key_field . ':' . $children_value->tid] = '-' . $children_value->name;
          }
        }
      }

      $default_value=array();
      if (isset($_GET['f'])) {
        foreach(array_intersect_key(array_flip($_GET['f']), $select_list) as $key=>$item){
            $default_value[]=$key;
        }
      }
      $form['advanced_search']['search_' . $key_field] = array(
        '#type' => 'select',
        '#title' => t($value_field['label']),
        '#options' => $select_list,
        '#multiple'=>TRUE,
        '#default_value' => $default_value
      );
    }
  }

  // library_search
  if (!empty($form['#search_page']['page_id']) && $form['#search_page']['page_id'] == 'library_search' && $form_id == 'apachesolr_search_custom_page_search_form') {

    $form['basic']['keys']['#title']=t('Search');
    $form['basic']['keys']['#attributes']['class']=array('form-control','keys');
    $form['basic']['#attributes']['class'][]='form-inline';
    $form['basic']['submit']['#attributes']['class']=array('btn','btn-default');
    $form['#submit'][] = 'landportal_utility_custom_page_search_form';

    $form['#submit'][] = 'landportal_utility_custom_page_search_form';

    $form['advanced_search'] = array(
      '#type' => 'fieldset',
      '#title' => t('Advanced search'),
      '#weight' => 5,
      //'#collapsible' => TRUE,
      //'#collapsed' => FALSE,
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

    $provider_list = landportal_utility_get_library_provider();
    /*if (isset($_GET['f'])) {
      $default_provider = key(array_intersect_key(array_flip($_GET['f']), $provider_list));
    }
    else{
      $default_provider = '_none';
    }*/
    $default_provider=array();
      if (isset($_GET['f'])) {
        foreach(array_intersect_key(array_flip($_GET['f']), $provider_list) as $key=>$item){
            $default_provider[]=$key;
        }
      }
    unset($provider_list['_none']);
    $form['advanced_search']['search_sm_field_doc_provider'] = array(
      '#type' => 'select',
      '#title' => t('Provider'),
      '#options' => $provider_list,
      '#multiple'=>TRUE,
      '#default_value' => $default_provider
    );

    $field_list = array(
      'im_field_doc_country' => array(
        'label' => 'Country',
        'taxonomy' => 'countries'
      ),
      'im_field_doc_subject' => array(
        'label' => 'Related topics',
        'taxonomy' => 'landportal_topics'
      ),
      'im_field_doc_type' => array(
        'label' => 'Resource Type',
        'taxonomy' => 'landlibrary_resource_type'
      )
    );

    foreach ($field_list as $key_field => $value_field) {
      $taxonomy = taxonomy_vocabulary_machine_name_load($value_field['taxonomy']);
      $terms = landportal_utility_taxonomy_get_tree_nested($taxonomy->vid);
      $select_list = array(/*'_none' => t('-None-')*/);
      foreach ($terms as $key => $value) {
        $select_list[$key_field . ':' . $value->tid] = $value->name;
        if (!empty($value->children)) {
          foreach ($value->children as $children_key => $children_value) {
            $select_list[$key_field . ':' . $children_value->tid] = '-' . $children_value->name;
          }
        }
      }
      $default_value=array();
      if (isset($_GET['f'])) {
        foreach(array_intersect_key(array_flip($_GET['f']), $select_list) as $key=>$item){
            $default_value[]=$key;
        }
      }
      $form['advanced_search']['search_' . $key_field] = array(
        '#type' => 'select',
        '#title' => t($value_field['label']),
        '#options' => $select_list,
        '#multiple'=>TRUE,
        '#default_value' => $default_value
      );
    }

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
    'search_sm_field_doc_provider',
    'search_im_field_geographical_focus',
    'search_im_field_related_topics',
    'search_im_field_doc_country',
    'search_im_field_doc_subject',
    'search_im_field_doc_type'
  );

  foreach ($input_name_list as $key => $name) {
    if (!empty($values[$name]) && ($values[$name] != '_none')) {
      if($name=='search_im_field_geographical_focus' ||$name=='search_im_field_related_topics' ||$name=='search_im_field_doc_type'||$name=='search_im_field_doc_country' ||$name=='search_content_type'){
        foreach($values[$name] as $item){
            $get['f'][]=$item;
        }
      }
      else{
        if(is_array($values[$name])){
          foreach($values[$name] as $item){
            $get['f'][]=$item;
          }
        }
        else{
          $get['f'][] = $values[$name];
        }
      }
    }
  }
  $form_state['values']['get'] = json_encode($get);
  $form_state['redirect'] = array($redirect, array('query' => $get));
}

function landportal_utility_menu_breadcrumb_alter(&$active_trail, $item){
  if((arg(0) == 'search' && arg(1) == 'all') || (arg(0) == 'search' && arg(1) == 'library')){
    if(count($active_trail)>3){
      array_pop($active_trail);
      array_pop($active_trail);
    }
  }
}

function landportal_utility_form_user_register_form_alter(&$form, &$form_state,$form_id){
  $form['lang_wrap']=array('#type'=>'fieldset','#weight'=>0.1);
  $form['lang_wrap']['arab_lang']=array(
    '#type' => 'checkbox',
    '#title'=>t('Arabic'),
  );
  $form['lang_wrap']['eng_lang']=array(
    '#type' => 'checkbox',
    '#title'=>t('English'),
    '#default_value'=>1,
  );
  $form['lang_wrap']['fr_lang']=array(
    '#type' => 'checkbox',
    '#title'=>t('French'),
  );
  $form['lang_wrap']['sp_lang']=array(
    '#type' => 'checkbox',
    '#title'=>t('Spanish'),
  );
  $form['#submit'][]='landportal_utility_update_mailchimp_user';
}

function landportal_utility_update_mailchimp_user(&$form, &$form_state){
  $values=$form_state['values'];
  $user=user_load($form_state['values']['uid']);
  if($values['arab_lang']==1){
    $user->field_arabic_language['und'][0]['value']=1;
  }
  if($values['eng_lang']==1){
    $user->field_english_language['und'][0]['value']=1;
  }
  if($values['fr_lang']==1){
    $user->field_french_language['und'][0]['value']=1;
  }
  if($values['sp_lang']==1){
    $user->field_spanish_language['und'][0]['value']=1;
  }
  user_save($user);

  $lists = mailchimp_lists_get_available_lists($user);
  $mcapi = mailchimp_get_api_object();
  foreach ($lists as $list){
    $mergevars = _mailchimp_lists_build_update_mergevars($user, $list, $user->mail, $user->mail);
    mailchimp_lists_execute_change('update', $list, $user->mail, $mergevars, NULL, $mcapi);
  }
}
