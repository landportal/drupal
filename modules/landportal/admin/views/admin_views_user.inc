<?php

$view = new view();
$view->name = 'admin_views_user';
$view->description = 'List, add, and edit users.';
$view->tag = 'admin';
$view->base_table = 'users';
$view->human_name = 'Administration: Users';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Users';
$handler->display->display_options['css_class'] = 'admin-views-view';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'menu';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
$handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 50, 100, 200';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'name' => 'name',
  'mail' => 'name',
  'status' => 'status',
  'rid' => 'rid',
  'created' => 'created',
  'access' => 'access',
  'edit_node' => 'edit_node',
  'cancel_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = 'access';
$handler->display->display_options['style_options']['info'] = array(
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '<br />',
    'empty_column' => 0,
  ),
  'mail' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'status' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'rid' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'access' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => '',
    'separator' => '&emsp;',
    'empty_column' => 0,
  ),
  'cancel_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
$handler->display->display_options['style_options']['empty_table'] = TRUE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = 'No users available.';
/* Relationship: User: Profile */
$handler->display->display_options['relationships']['profile']['id'] = 'profile';
$handler->display->display_options['relationships']['profile']['table'] = 'users';
$handler->display->display_options['relationships']['profile']['field'] = 'profile';
$handler->display->display_options['relationships']['profile']['label'] = 'Public';
$handler->display->display_options['relationships']['profile']['bundle_types'] = array(
  'main' => 'main',
);
/* Relationship: Profile: Location (field_location) */
$handler->display->display_options['relationships']['field_location_lid']['id'] = 'field_location_lid';
$handler->display->display_options['relationships']['field_location_lid']['table'] = 'field_data_field_location';
$handler->display->display_options['relationships']['field_location_lid']['field'] = 'field_location_lid';
$handler->display->display_options['relationships']['field_location_lid']['relationship'] = 'profile';
/* Field: User: Uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
/* Field: Profile: Profile ID */
$handler->display->display_options['fields']['pid']['id'] = 'pid';
$handler->display->display_options['fields']['pid']['table'] = 'profile';
$handler->display->display_options['fields']['pid']['field'] = 'pid';
$handler->display->display_options['fields']['pid']['relationship'] = 'profile';
$handler->display->display_options['fields']['pid']['label'] = '';
$handler->display->display_options['fields']['pid']['exclude'] = TRUE;
$handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['pid']['separator'] = '';
/* Field: Bulk operations: User */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_user';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
$handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::mailchimp_lists_add_to_segment_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'skip_permission_check' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'mailchimp_field' => array(
        'field_mc_newsletter' => 'field_mc_newsletter',
        'field_mc_users' => 'field_mc_users',
      ),
    ),
  ),
  'action::user_block_user_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'skip_permission_check' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_user_cancel_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'skip_permission_check' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'skip_permission_check' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'log' => 0,
    ),
  ),
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'skip_permission_check' => 0,
    'override_label' => 1,
    'label' => 'Change value',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        '_all_' => '_all_',
      ),
    ),
  ),
  'action::views_bulk_operations_user_roles_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'skip_permission_check' => 0,
    'override_label' => 1,
    'label' => 'Change user roles',
  ),
  'action::system_send_email_action' => array(
    'selected' => 1,
    'postpone_processing' => 1,
    'skip_confirmation' => 0,
    'skip_permission_check' => 0,
    'override_label' => 1,
    'label' => 'Send e-mail',
  ),
);
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
/* Field: User: E-mail */
$handler->display->display_options['fields']['mail']['id'] = 'mail';
$handler->display->display_options['fields']['mail']['table'] = 'users';
$handler->display->display_options['fields']['mail']['field'] = 'mail';
$handler->display->display_options['fields']['mail']['label'] = '';
$handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['mail']['link_to_user'] = '0';
/* Field: Profile: Label */
$handler->display->display_options['fields']['label']['id'] = 'label';
$handler->display->display_options['fields']['label']['table'] = 'profile';
$handler->display->display_options['fields']['label']['field'] = 'label';
$handler->display->display_options['fields']['label']['relationship'] = 'profile';
$handler->display->display_options['fields']['label']['label'] = '';
$handler->display->display_options['fields']['label']['exclude'] = TRUE;
$handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
/* Field: Profile: Rendered Profile */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_profile2';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['relationship'] = 'profile';
$handler->display->display_options['fields']['rendered_entity']['label'] = 'Profile';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
/* Field: Location: Country */
$handler->display->display_options['fields']['country']['id'] = 'country';
$handler->display->display_options['fields']['country']['table'] = 'location';
$handler->display->display_options['fields']['country']['field'] = 'country';
$handler->display->display_options['fields']['country']['relationship'] = 'field_location_lid';
/* Field: User: Roles */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'users_roles';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
/* Field: User: Created date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'users';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Member for';
$handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
/* Field: User: Last access */
$handler->display->display_options['fields']['access']['id'] = 'access';
$handler->display->display_options['fields']['access']['table'] = 'users';
$handler->display->display_options['fields']['access']['field'] = 'access';
$handler->display->display_options['fields']['access']['date_format'] = 'time ago';
/* Field: User: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'users';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
/* Field: User: Cancel link */
$handler->display->display_options['fields']['cancel_node']['id'] = 'cancel_node';
$handler->display->display_options['fields']['cancel_node']['table'] = 'users';
$handler->display->display_options['fields']['cancel_node']['field'] = 'cancel_node';
$handler->display->display_options['fields']['cancel_node']['label'] = '';
$handler->display->display_options['fields']['cancel_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['cancel_node']['hide_alter_empty'] = FALSE;
/* Sort criterion: User: Created date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'users';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 'All';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111731461 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['operator'] = 'not in';
$handler->display->display_options['filters']['uid']['value'] = array(
  0 => 0,
);
$handler->display->display_options['filters']['uid']['group'] = 1;
/* Filter criterion: User: Name (raw) */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'users';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Username';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember'] = TRUE;
/* Filter criterion: User: E-mail */
$handler->display->display_options['filters']['mail']['id'] = 'mail';
$handler->display->display_options['filters']['mail']['table'] = 'users';
$handler->display->display_options['filters']['mail']['field'] = 'mail';
$handler->display->display_options['filters']['mail']['operator'] = 'contains';
$handler->display->display_options['filters']['mail']['group'] = 1;
$handler->display->display_options['filters']['mail']['exposed'] = TRUE;
$handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
$handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
$handler->display->display_options['filters']['mail']['expose']['remember'] = TRUE;
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['group'] = 1;
$handler->display->display_options['filters']['rid']['exposed'] = TRUE;
$handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
$handler->display->display_options['filters']['rid']['expose']['label'] = 'Role';
$handler->display->display_options['filters']['rid']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
$handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
$handler->display->display_options['filters']['rid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['rid']['expose']['remember_roles'] = array(
  2 => 0,
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: User: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'users';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  'en' => 'en',
  'fr' => 'fr',
  'es' => 'es',
  'pt' => 'pt',
);
$handler->display->display_options['filters']['language']['group'] = 1;
$handler->display->display_options['filters']['language']['exposed'] = TRUE;
$handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
$handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
$handler->display->display_options['filters']['language']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
$handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
$handler->display->display_options['filters']['language']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['label']['relationship'] = 'profile';
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
/* Filter criterion: Location: Country */
$handler->display->display_options['filters']['country']['id'] = 'country';
$handler->display->display_options['filters']['country']['table'] = 'location';
$handler->display->display_options['filters']['country']['field'] = 'country';
$handler->display->display_options['filters']['country']['relationship'] = 'field_location_lid';
$handler->display->display_options['filters']['country']['exposed'] = TRUE;
$handler->display->display_options['filters']['country']['expose']['operator_id'] = 'country_op';
$handler->display->display_options['filters']['country']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['country']['expose']['operator'] = 'country_op';
$handler->display->display_options['filters']['country']['expose']['identifier'] = 'country';
$handler->display->display_options['filters']['country']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);

/* Display: System */
$handler = $view->new_display('system', 'System', 'system_1');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['hide_admin_links'] = TRUE;
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['path'] = 'admin/people';

/* Display: Pending */
$handler = $view->new_display('system', 'Pending', 'system_2');
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: User: Uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['label'] = '';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
$handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
/* Field: Profile: Profile ID */
$handler->display->display_options['fields']['pid']['id'] = 'pid';
$handler->display->display_options['fields']['pid']['table'] = 'profile';
$handler->display->display_options['fields']['pid']['field'] = 'pid';
$handler->display->display_options['fields']['pid']['relationship'] = 'profile';
$handler->display->display_options['fields']['pid']['label'] = '';
$handler->display->display_options['fields']['pid']['exclude'] = TRUE;
$handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['pid']['separator'] = '';
/* Field: Bulk operations: User */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_user';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
$handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::mailchimp_lists_add_to_segment_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'skip_permission_check' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'mailchimp_field' => array(
        'field_mc_newsletter' => 'field_mc_newsletter',
        'field_mc_users' => 'field_mc_users',
      ),
    ),
  ),
  'action::user_block_user_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'skip_permission_check' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_user_cancel_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'skip_permission_check' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'skip_permission_check' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'log' => 0,
    ),
  ),
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'skip_permission_check' => 0,
    'override_label' => 1,
    'label' => 'Change value',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        '_all_' => '_all_',
      ),
    ),
  ),
  'action::views_bulk_operations_user_roles_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'skip_permission_check' => 0,
    'override_label' => 1,
    'label' => 'Change user roles',
  ),
  'action::system_send_email_action' => array(
    'selected' => 1,
    'postpone_processing' => 1,
    'skip_confirmation' => 0,
    'skip_permission_check' => 0,
    'override_label' => 1,
    'label' => 'Send e-mail',
  ),
);
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
/* Field: User: E-mail */
$handler->display->display_options['fields']['mail']['id'] = 'mail';
$handler->display->display_options['fields']['mail']['table'] = 'users';
$handler->display->display_options['fields']['mail']['field'] = 'mail';
$handler->display->display_options['fields']['mail']['label'] = '';
$handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['mail']['link_to_user'] = '0';
/* Field: Profile: Label */
$handler->display->display_options['fields']['label']['id'] = 'label';
$handler->display->display_options['fields']['label']['table'] = 'profile';
$handler->display->display_options['fields']['label']['field'] = 'label';
$handler->display->display_options['fields']['label']['relationship'] = 'profile';
$handler->display->display_options['fields']['label']['label'] = '';
$handler->display->display_options['fields']['label']['exclude'] = TRUE;
$handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
/* Field: Profile: Rendered Profile */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_profile2';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['relationship'] = 'profile';
$handler->display->display_options['fields']['rendered_entity']['label'] = 'Profile';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
/* Field: Profile: Location */
$handler->display->display_options['fields']['field_location']['id'] = 'field_location';
$handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
$handler->display->display_options['fields']['field_location']['field'] = 'field_location';
$handler->display->display_options['fields']['field_location']['relationship'] = 'profile';
/* Field: User: Roles */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'users_roles';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
/* Field: User: I agree to the Terms and Conditions */
$handler->display->display_options['fields']['field_tnc']['id'] = 'field_tnc';
$handler->display->display_options['fields']['field_tnc']['table'] = 'field_data_field_tnc';
$handler->display->display_options['fields']['field_tnc']['field'] = 'field_tnc';
$handler->display->display_options['fields']['field_tnc']['label'] = 'T&C';
$handler->display->display_options['fields']['field_tnc']['type'] = 'list_key';
/* Field: User: Created date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'users';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Member for';
$handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
/* Field: User: Last access */
$handler->display->display_options['fields']['access']['id'] = 'access';
$handler->display->display_options['fields']['access']['table'] = 'users';
$handler->display->display_options['fields']['access']['field'] = 'access';
$handler->display->display_options['fields']['access']['date_format'] = 'time ago';
/* Field: User: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'users';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
/* Field: User: Cancel link */
$handler->display->display_options['fields']['cancel_node']['id'] = 'cancel_node';
$handler->display->display_options['fields']['cancel_node']['table'] = 'users';
$handler->display->display_options['fields']['cancel_node']['field'] = 'cancel_node';
$handler->display->display_options['fields']['cancel_node']['label'] = '';
$handler->display->display_options['fields']['cancel_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['cancel_node']['hide_alter_empty'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['operator'] = 'not in';
$handler->display->display_options['filters']['uid']['value'] = array(
  0 => 0,
);
$handler->display->display_options['filters']['uid']['group'] = 1;
/* Filter criterion: User: Name (raw) */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'users';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Username';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember'] = TRUE;
/* Filter criterion: User: E-mail */
$handler->display->display_options['filters']['mail']['id'] = 'mail';
$handler->display->display_options['filters']['mail']['table'] = 'users';
$handler->display->display_options['filters']['mail']['field'] = 'mail';
$handler->display->display_options['filters']['mail']['operator'] = 'contains';
$handler->display->display_options['filters']['mail']['group'] = 1;
$handler->display->display_options['filters']['mail']['exposed'] = TRUE;
$handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
$handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
$handler->display->display_options['filters']['mail']['expose']['remember'] = TRUE;
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '0';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111731461 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['group'] = 1;
$handler->display->display_options['filters']['rid']['exposed'] = TRUE;
$handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
$handler->display->display_options['filters']['rid']['expose']['label'] = 'Role';
$handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
$handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
$handler->display->display_options['filters']['rid']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['rid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['path'] = 'admin/people/moderate';

/* Display: Developing economies */
$handler = $view->new_display('system', 'Developing economies', 'developing_economies');
$handler->display->display_options['display_description'] = 'Developing economies by http://www.un.org/en/development/desa/policy/wesp/wesp_current/2014wesp_country_classification.pdf';
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['operator'] = 'not in';
$handler->display->display_options['filters']['uid']['value'] = array(
  0 => 0,
);
$handler->display->display_options['filters']['uid']['group'] = 1;
/* Filter criterion: User: Name (raw) */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'users';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Username';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember'] = TRUE;
/* Filter criterion: User: E-mail */
$handler->display->display_options['filters']['mail']['id'] = 'mail';
$handler->display->display_options['filters']['mail']['table'] = 'users';
$handler->display->display_options['filters']['mail']['field'] = 'mail';
$handler->display->display_options['filters']['mail']['operator'] = 'contains';
$handler->display->display_options['filters']['mail']['group'] = 1;
$handler->display->display_options['filters']['mail']['exposed'] = TRUE;
$handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
$handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
$handler->display->display_options['filters']['mail']['expose']['remember'] = TRUE;
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['group'] = 1;
$handler->display->display_options['filters']['rid']['exposed'] = TRUE;
$handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
$handler->display->display_options['filters']['rid']['expose']['label'] = 'Role';
$handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
$handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
$handler->display->display_options['filters']['rid']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['rid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Field: Geographical focus (field_geographical_focus) */
$handler->display->display_options['filters']['field_geographical_focus_tid']['id'] = 'field_geographical_focus_tid';
$handler->display->display_options['filters']['field_geographical_focus_tid']['table'] = 'field_data_field_geographical_focus';
$handler->display->display_options['filters']['field_geographical_focus_tid']['field'] = 'field_geographical_focus_tid';
$handler->display->display_options['filters']['field_geographical_focus_tid']['relationship'] = 'profile';
$handler->display->display_options['filters']['field_geographical_focus_tid']['value'] = array(
  611 => '611',
  613 => '613',
  676 => '676',
  686 => '686',
  741 => '741',
  774 => '774',
  567 => '567',
  597 => '597',
  607 => '607',
  614 => '614',
  617 => '617',
  665 => '665',
  689 => '689',
  705 => '705',
  704 => '704',
  700 => '700',
  738 => '738',
  751 => '751',
  777 => '777',
  778 => '778',
  794 => '794',
  795 => '795',
  551 => '551',
  592 => '592',
  586 => '586',
  765 => '765',
  594 => '594',
  593 => '593',
  634 => '634',
  624 => '624',
  755 => '755',
  585 => '585',
  680 => '680',
  707 => '707',
  793 => '793',
  569 => '569',
  570 => '570',
  632 => '632',
  628 => '628',
  630 => '630',
  633 => '633',
  591 => '591',
  675 => '675',
  694 => '694',
  701 => '701',
  709 => '709',
  711 => '711',
  742 => '742',
  747 => '747',
  766 => '766',
  582 => '582',
  600 => '600',
  610 => '610',
  646 => '646',
  659 => '659',
  773 => '773',
  599 => '599',
  748 => '748',
  638 => '638',
  644 => '644',
  691 => '691',
  712 => '712',
  721 => '721',
  557 => '557',
  580 => '580',
  581 => '581',
  589 => '589',
  596 => '596',
  612 => '612',
  641 => '641',
  731 => '731',
  723 => '723',
  780 => '780',
  785 => '785',
  590 => '590',
  845 => '845',
  729 => '729',
  583 => '583',
  648 => '648',
  706 => '706',
  696 => '696',
  724 => '724',
  743 => '743',
  767 => '767',
  7244 => '7244',
  571 => '571',
  650 => '650',
  654 => '654',
  716 => '716',
  720 => '720',
  679 => '679',
  573 => '573',
  655 => '655',
  657 => '657',
  661 => '661',
  672 => '672',
  674 => '674',
  719 => '719',
  734 => '734',
  740 => '740',
  763 => '763',
  775 => '775',
  556 => '556',
  792 => '792',
  726 => '726',
  7892 => '7892',
);
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['operator_id'] = 'field_geographical_focus_tid_op';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['label'] = 'Geographical focus (field_geographical_focus)';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['operator'] = 'field_geographical_focus_tid_op';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['identifier'] = 'field_geographical_focus_tid';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_geographical_focus_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_geographical_focus_tid']['vocabulary'] = 'regions';
$handler->display->display_options['filters']['field_geographical_focus_tid']['hierarchy'] = 1;
$handler->display->display_options['path'] = 'admin/people/developing_economies';

/* Display: People tagged with one or more countries */
$handler = $view->new_display('system', 'People tagged with one or more countries', 'people_at_least_one_geo');
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['operator'] = 'not in';
$handler->display->display_options['filters']['uid']['value'] = array(
  0 => 0,
);
$handler->display->display_options['filters']['uid']['group'] = 1;
/* Filter criterion: User: Name (raw) */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'users';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Username';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember'] = TRUE;
/* Filter criterion: User: E-mail */
$handler->display->display_options['filters']['mail']['id'] = 'mail';
$handler->display->display_options['filters']['mail']['table'] = 'users';
$handler->display->display_options['filters']['mail']['field'] = 'mail';
$handler->display->display_options['filters']['mail']['operator'] = 'contains';
$handler->display->display_options['filters']['mail']['group'] = 1;
$handler->display->display_options['filters']['mail']['exposed'] = TRUE;
$handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
$handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
$handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
$handler->display->display_options['filters']['mail']['expose']['remember'] = TRUE;
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['group'] = 1;
$handler->display->display_options['filters']['rid']['exposed'] = TRUE;
$handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
$handler->display->display_options['filters']['rid']['expose']['label'] = 'Role';
$handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
$handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
$handler->display->display_options['filters']['rid']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['rid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Field: Geographical focus (field_geographical_focus) */
$handler->display->display_options['filters']['field_geographical_focus_tid']['id'] = 'field_geographical_focus_tid';
$handler->display->display_options['filters']['field_geographical_focus_tid']['table'] = 'field_data_field_geographical_focus';
$handler->display->display_options['filters']['field_geographical_focus_tid']['field'] = 'field_geographical_focus_tid';
$handler->display->display_options['filters']['field_geographical_focus_tid']['relationship'] = 'profile';
$handler->display->display_options['filters']['field_geographical_focus_tid']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['operator_id'] = 'field_geographical_focus_tid_op';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['label'] = 'Geographical focus (field_geographical_focus)';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['operator'] = 'field_geographical_focus_tid_op';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['identifier'] = 'field_geographical_focus_tid';
$handler->display->display_options['filters']['field_geographical_focus_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_geographical_focus_tid']['vocabulary'] = 'regions';
$handler->display->display_options['filters']['field_geographical_focus_tid']['hierarchy'] = 1;
$handler->display->display_options['path'] = 'admin/people/at_least_one_geo';

