<?php

$view = new view();
$view->name = 'profile_public';
$view->description = '';
$view->tag = 'default, users';
$view->base_table = 'profile';
$view->human_name = 'Public profiles';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Public profiles';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'menu';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '100';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'user' => 'user',
  'pid' => 'pid',
  'label' => 'label',
  'field_geographical_focus' => 'field_geographical_focus',
  'field_related_topics' => 'field_related_topics',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'user' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'pid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'label' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_geographical_focus' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_related_topics' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
/* Relationship: Profile: User uid */
$handler->display->display_options['relationships']['user']['id'] = 'user';
$handler->display->display_options['relationships']['user']['table'] = 'profile';
$handler->display->display_options['relationships']['user']['field'] = 'user';
/* Field: Bulk operations: Profile */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_profile2';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'skip_permission_check' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        '_all_' => '_all_',
      ),
    ),
  ),
  'action::auto_entitylabel_entity_update_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'skip_permission_check' => 0,
    'override_label' => 0,
    'label' => '',
  ),
);
/* Field: Profile: User uid */
$handler->display->display_options['fields']['user']['id'] = 'user';
$handler->display->display_options['fields']['user']['table'] = 'profile';
$handler->display->display_options['fields']['user']['field'] = 'user';
$handler->display->display_options['fields']['user']['label'] = '';
$handler->display->display_options['fields']['user']['exclude'] = TRUE;
$handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['user']['separator'] = '';
/* Field: Profile: Profile ID */
$handler->display->display_options['fields']['pid']['id'] = 'pid';
$handler->display->display_options['fields']['pid']['table'] = 'profile';
$handler->display->display_options['fields']['pid']['field'] = 'pid';
$handler->display->display_options['fields']['pid']['label'] = '';
$handler->display->display_options['fields']['pid']['exclude'] = TRUE;
$handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'user';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Profile: Label */
$handler->display->display_options['fields']['label']['id'] = 'label';
$handler->display->display_options['fields']['label']['table'] = 'profile';
$handler->display->display_options['fields']['label']['field'] = 'label';
$handler->display->display_options['fields']['label']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['label']['alter']['text'] = '[label]<br/>
<i>([name] #[user])</i>';
/* Field: Field: Geographical focus */
$handler->display->display_options['fields']['field_geographical_focus']['id'] = 'field_geographical_focus';
$handler->display->display_options['fields']['field_geographical_focus']['table'] = 'field_data_field_geographical_focus';
$handler->display->display_options['fields']['field_geographical_focus']['field'] = 'field_geographical_focus';
$handler->display->display_options['fields']['field_geographical_focus']['label'] = 'Geo';
$handler->display->display_options['fields']['field_geographical_focus']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_geographical_focus']['type'] = 'i18n_taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_geographical_focus']['delta_offset'] = '0';
/* Field: Field: Related concepts */
$handler->display->display_options['fields']['field_related_topics']['id'] = 'field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['table'] = 'field_data_field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['field'] = 'field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['label'] = 'LP Tags';
$handler->display->display_options['fields']['field_related_topics']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_related_topics']['alter']['text'] = 'Geo: [field_geographical_focus]<br/>
Concepts: [field_related_topics]';
$handler->display->display_options['fields']['field_related_topics']['type'] = 'i18n_taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_related_topics']['delta_offset'] = '0';
/* Field: User: Cancel link */
$handler->display->display_options['fields']['cancel_node']['id'] = 'cancel_node';
$handler->display->display_options['fields']['cancel_node']['table'] = 'users';
$handler->display->display_options['fields']['cancel_node']['field'] = 'cancel_node';
$handler->display->display_options['fields']['cancel_node']['relationship'] = 'user';
$handler->display->display_options['fields']['cancel_node']['label'] = '';
$handler->display->display_options['fields']['cancel_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['cancel_node']['element_label_colon'] = FALSE;
/* Field: User: Last access */
$handler->display->display_options['fields']['access']['id'] = 'access';
$handler->display->display_options['fields']['access']['table'] = 'users';
$handler->display->display_options['fields']['access']['field'] = 'access';
/* Field: User: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'users';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['relationship'] = 'user';
$handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['edit_node']['alter']['text'] = '[edit_node] [cancel_node]';
/* Filter criterion: Profile: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'profile';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'main' => 'main',
);
/* Filter criterion: Profile: User uid */
$handler->display->display_options['filters']['user']['id'] = 'user';
$handler->display->display_options['filters']['user']['table'] = 'profile';
$handler->display->display_options['filters']['user']['field'] = 'user';
$handler->display->display_options['filters']['user']['exposed'] = TRUE;
$handler->display->display_options['filters']['user']['expose']['operator_id'] = 'user_op';
$handler->display->display_options['filters']['user']['expose']['label'] = 'User uid';
$handler->display->display_options['filters']['user']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['user']['expose']['operator'] = 'user_op';
$handler->display->display_options['filters']['user']['expose']['identifier'] = 'user';
$handler->display->display_options['filters']['user']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Profile: Label */
$handler->display->display_options['filters']['label']['id'] = 'label';
$handler->display->display_options['filters']['label']['table'] = 'profile';
$handler->display->display_options['filters']['label']['field'] = 'label';
$handler->display->display_options['filters']['label']['operator'] = 'contains';
$handler->display->display_options['filters']['label']['exposed'] = TRUE;
$handler->display->display_options['filters']['label']['expose']['operator_id'] = 'label_op';
$handler->display->display_options['filters']['label']['expose']['label'] = 'Label';
$handler->display->display_options['filters']['label']['expose']['operator'] = 'label_op';
$handler->display->display_options['filters']['label']['expose']['identifier'] = 'label';
$handler->display->display_options['filters']['label']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);

/* Display: System */
$handler = $view->new_display('system', 'System', 'system_1');
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['path'] = 'admin/people/profiles/public';
