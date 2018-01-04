<?php

$view = new view();
$view->name = 'admin_views_node';
$view->description = 'Find and manage content.';
$view->tag = 'admin';
$view->base_table = 'node';
$view->human_name = 'Administration: Nodes';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Content';
$handler->display->display_options['css_class'] = 'admin-views-view';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'menu';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'title' => 'title',
  'timestamp' => 'title',
  'type' => 'type',
  'language' => 'type',
  'name' => 'name',
  'status' => 'title',
  'promote' => 'title',
  'sticky' => 'title',
  'changed' => 'changed',
  'edit_node' => 'edit_node',
  'delete_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = 'changed';
$handler->display->display_options['style_options']['info'] = array(
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '&nbsp;',
    'empty_column' => 0,
  ),
  'timestamp' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'type' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '<br/>',
    'empty_column' => 0,
  ),
  'language' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 1,
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
  'promote' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'sticky' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'changed' => array(
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
  'delete_node' => array(
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
$handler->display->display_options['header']['result']['empty'] = TRUE;
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = 'No content found.';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Field: Bulk operations: Content */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
$handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::node_assign_owner_action' => array(
    'selected' => 1,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Change author',
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 1,
    'skip_confirmation' => 0,
    'override_label' => 1,
    'label' => 'Delete',
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 1,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Change value',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        '_all_' => '_all_',
      ),
    ),
    'postpone_processing' => 0,
  ),
  'action::node_make_sticky_action' => array(
    'selected' => 1,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Stick',
    'postpone_processing' => 0,
  ),
  'action::node_make_unsticky_action' => array(
    'selected' => 1,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Unstick',
    'postpone_processing' => 0,
  ),
  'action::node_promote_action' => array(
    'selected' => 1,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Promote to front page',
    'postpone_processing' => 0,
  ),
  'action::node_publish_action' => array(
    'selected' => 1,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Publish',
    'postpone_processing' => 0,
  ),
  'action::node_unpromote_action' => array(
    'selected' => 1,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Demote from front page',
    'postpone_processing' => 0,
  ),
  'action::node_unpublish_action' => array(
    'selected' => 1,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Unpublish',
    'postpone_processing' => 0,
  ),
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: Content: Has new content */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'history';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
/* Field: Content: Language */
$handler->display->display_options['fields']['language']['id'] = 'language';
$handler->display->display_options['fields']['language']['table'] = 'node';
$handler->display->display_options['fields']['language']['field'] = 'language';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Author';
$handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['element_type'] = 'em';
$handler->display->display_options['fields']['status']['type'] = 'custom';
$handler->display->display_options['fields']['status']['type_custom_false'] = 'not published';
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: Content: Promoted to front page */
$handler->display->display_options['fields']['promote']['id'] = 'promote';
$handler->display->display_options['fields']['promote']['table'] = 'node';
$handler->display->display_options['fields']['promote']['field'] = 'promote';
$handler->display->display_options['fields']['promote']['label'] = 'Promoted';
$handler->display->display_options['fields']['promote']['element_type'] = 'strong';
$handler->display->display_options['fields']['promote']['type'] = 'custom';
$handler->display->display_options['fields']['promote']['type_custom_true'] = 'promoted';
$handler->display->display_options['fields']['promote']['not'] = 0;
/* Field: Content: Sticky */
$handler->display->display_options['fields']['sticky']['id'] = 'sticky';
$handler->display->display_options['fields']['sticky']['table'] = 'node';
$handler->display->display_options['fields']['sticky']['field'] = 'sticky';
$handler->display->display_options['fields']['sticky']['type'] = 'custom';
$handler->display->display_options['fields']['sticky']['type_custom_true'] = 'sticky';
$handler->display->display_options['fields']['sticky']['not'] = 0;
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Updated';
$handler->display->display_options['fields']['changed']['date_format'] = 'short';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Operations';
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['relationship'] = 'uid';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['group'] = 1;
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Author';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'author';
$handler->display->display_options['filters']['uid']['expose']['remember'] = TRUE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 'All';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
/* Filter criterion: Content: Promoted to front page */
$handler->display->display_options['filters']['promote']['id'] = 'promote';
$handler->display->display_options['filters']['promote']['table'] = 'node';
$handler->display->display_options['filters']['promote']['field'] = 'promote';
$handler->display->display_options['filters']['promote']['group'] = 1;
$handler->display->display_options['filters']['promote']['exposed'] = TRUE;
$handler->display->display_options['filters']['promote']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['promote']['expose']['label'] = 'Promoted';
$handler->display->display_options['filters']['promote']['expose']['operator'] = 'promote_op';
$handler->display->display_options['filters']['promote']['expose']['identifier'] = 'promote';
$handler->display->display_options['filters']['promote']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Content: Sticky */
$handler->display->display_options['filters']['sticky']['id'] = 'sticky';
$handler->display->display_options['filters']['sticky']['table'] = 'node';
$handler->display->display_options['filters']['sticky']['field'] = 'sticky';
$handler->display->display_options['filters']['sticky']['group'] = 1;
$handler->display->display_options['filters']['sticky']['exposed'] = TRUE;
$handler->display->display_options['filters']['sticky']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['sticky']['expose']['label'] = 'Sticky';
$handler->display->display_options['filters']['sticky']['expose']['operator'] = 'sticky_op';
$handler->display->display_options['filters']['sticky']['expose']['identifier'] = 'sticky';
$handler->display->display_options['filters']['sticky']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['exposed'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Field: Geographical focus (field_geographical_focus) */
$handler->display->display_options['filters']['field_geographical_focus_tid']['id'] = 'field_geographical_focus_tid';
$handler->display->display_options['filters']['field_geographical_focus_tid']['table'] = 'field_data_field_geographical_focus';
$handler->display->display_options['filters']['field_geographical_focus_tid']['field'] = 'field_geographical_focus_tid';
$handler->display->display_options['filters']['field_geographical_focus_tid']['group'] = 1;
$handler->display->display_options['filters']['field_geographical_focus_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['operator_id'] = 'field_geographical_focus_tid_op';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['label'] = 'Geography';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['operator'] = 'field_geographical_focus_tid_op';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['identifier'] = 'field_geographical_focus_tid';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['multiple'] = TRUE;
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
/* Filter criterion: Field: Overarching categories (field_related_domains) */
$handler->display->display_options['filters']['field_related_domains_tid']['id'] = 'field_related_domains_tid';
$handler->display->display_options['filters']['field_related_domains_tid']['table'] = 'field_data_field_related_domains';
$handler->display->display_options['filters']['field_related_domains_tid']['field'] = 'field_related_domains_tid';
$handler->display->display_options['filters']['field_related_domains_tid']['group'] = 1;
$handler->display->display_options['filters']['field_related_domains_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_related_domains_tid']['expose']['operator_id'] = 'field_related_domains_tid_op';
$handler->display->display_options['filters']['field_related_domains_tid']['expose']['label'] = 'Categories';
$handler->display->display_options['filters']['field_related_domains_tid']['expose']['operator'] = 'field_related_domains_tid_op';
$handler->display->display_options['filters']['field_related_domains_tid']['expose']['identifier'] = 'field_related_domains_tid';
$handler->display->display_options['filters']['field_related_domains_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_related_domains_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_domains_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_related_domains_tid']['vocabulary'] = 'overarching_categories';
/* Filter criterion: Field: Themes (field_related_themes) */
$handler->display->display_options['filters']['field_related_themes_tid']['id'] = 'field_related_themes_tid';
$handler->display->display_options['filters']['field_related_themes_tid']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['filters']['field_related_themes_tid']['field'] = 'field_related_themes_tid';
$handler->display->display_options['filters']['field_related_themes_tid']['group'] = 1;
$handler->display->display_options['filters']['field_related_themes_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_related_themes_tid']['expose']['operator_id'] = 'field_related_themes_tid_op';
$handler->display->display_options['filters']['field_related_themes_tid']['expose']['label'] = 'Issues';
$handler->display->display_options['filters']['field_related_themes_tid']['expose']['operator'] = 'field_related_themes_tid_op';
$handler->display->display_options['filters']['field_related_themes_tid']['expose']['identifier'] = 'field_related_themes_tid';
$handler->display->display_options['filters']['field_related_themes_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_related_themes_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_themes_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_related_themes_tid']['vocabulary'] = 'themes';
/* Filter criterion: Field: Related concepts (field_related_topics) */
$handler->display->display_options['filters']['field_related_topics_tid']['id'] = 'field_related_topics_tid';
$handler->display->display_options['filters']['field_related_topics_tid']['table'] = 'field_data_field_related_topics';
$handler->display->display_options['filters']['field_related_topics_tid']['field'] = 'field_related_topics_tid';
$handler->display->display_options['filters']['field_related_topics_tid']['group'] = 1;
$handler->display->display_options['filters']['field_related_topics_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_related_topics_tid']['expose']['operator_id'] = 'field_related_topics_tid_op';
$handler->display->display_options['filters']['field_related_topics_tid']['expose']['label'] = 'Concepts';
$handler->display->display_options['filters']['field_related_topics_tid']['expose']['operator'] = 'field_related_topics_tid_op';
$handler->display->display_options['filters']['field_related_topics_tid']['expose']['identifier'] = 'field_related_topics_tid';
$handler->display->display_options['filters']['field_related_topics_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_related_topics_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_topics_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_related_topics_tid']['vocabulary'] = 'landvoc_concepts';

/* Display: System */
$handler = $view->new_display('system', 'System', 'system_1');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['hide_admin_links'] = TRUE;
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['path'] = 'admin/content';

