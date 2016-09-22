<?php
/**
 * Landlibrary views: Admin
 *
 * View name: landlibrary_search
 * View URL: https://landportal.info/admin/structure/views/view/library_search/
 */

$view = new view();
$view->name = 'admin_view_library';
$view->description = 'Find and manage Land Library resources';
$view->tag = 'admin';
$view->base_table = 'node';
$view->human_name = 'Administration: Library';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Administration: Library';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '25';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'nid' => 'nid',
  'path' => 'path',
  'views_bulk_operations' => 'views_bulk_operations',
  'edit_node' => 'edit_node',
  'status' => 'status',
  'promote' => 'promote',
  'sticky' => 'sticky',
  'title' => 'title',
  'field_doc_creator' => 'field_doc_creator',
  'field_doc_publisher' => 'field_doc_publisher',
  'field_doc_provider' => 'field_doc_provider',
  'field_doc_creation_date' => 'field_doc_creation_date',
  'field_doc_language' => 'field_doc_language',
  'field_doc_type' => 'field_doc_type',
  'field_format' => 'field_format',
  'field_doc_country' => 'field_doc_country',
  'field_geographical_focus' => 'field_geographical_focus',
  'field_related_domains' => 'field_related_domains',
  'field_related_themes' => 'field_related_themes',
  'field_related_topics' => 'field_related_topics',
  'changed' => 'changed',
  'name' => 'name',
  'language' => 'language',
);
$handler->display->display_options['style_options']['default'] = 'nid';
$handler->display->display_options['style_options']['info'] = array(
  'nid' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'path' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'status' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
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
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_doc_creator' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_doc_publisher' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_doc_provider' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_doc_creation_date' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_doc_language' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_doc_type' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_format' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_doc_country' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_geographical_focus' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_related_domains' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_related_themes' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_related_topics' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'changed' => array(
    'sortable' => 1,
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
  'language' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['empty'] = TRUE;
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
/* Field: Bulk operations: Content */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::node_make_sticky_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_make_unsticky_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        '_all_' => '_all_',
        'language' => 'language',
        'landlibrary_resource::field_doc_provider' => 'landlibrary_resource::field_doc_provider',
        'landlibrary_resource::field_doc_publisher' => 'landlibrary_resource::field_doc_publisher',
        'landlibrary_resource::field_geographical_focus' => 'landlibrary_resource::field_geographical_focus',
        'landlibrary_resource::field_related_topics' => 'landlibrary_resource::field_related_topics',
        'landlibrary_resource::field_related_domains' => 'landlibrary_resource::field_related_domains',
        'landlibrary_resource::field_related_themes' => 'landlibrary_resource::field_related_themes',
      ),
    ),
  ),
  'action::node_promote_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_publish_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_unpromote_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_unpublish_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
  ),
  'action::pathauto_node_update_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
);
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['exclude'] = TRUE;
$handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: Content: Promoted to front page */
$handler->display->display_options['fields']['promote']['id'] = 'promote';
$handler->display->display_options['fields']['promote']['table'] = 'node';
$handler->display->display_options['fields']['promote']['field'] = 'promote';
$handler->display->display_options['fields']['promote']['exclude'] = TRUE;
$handler->display->display_options['fields']['promote']['type'] = 'unicode-yes-no';
$handler->display->display_options['fields']['promote']['not'] = 0;
/* Field: Content: Sticky */
$handler->display->display_options['fields']['sticky']['id'] = 'sticky';
$handler->display->display_options['fields']['sticky']['table'] = 'node';
$handler->display->display_options['fields']['sticky']['field'] = 'sticky';
$handler->display->display_options['fields']['sticky']['label'] = 'Pub|Pro|Sti';
$handler->display->display_options['fields']['sticky']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['sticky']['alter']['text'] = '[status]|[promote]|[sticky]';
$handler->display->display_options['fields']['sticky']['type'] = 'unicode-yes-no';
$handler->display->display_options['fields']['sticky']['not'] = 0;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Publisher */
$handler->display->display_options['fields']['field_doc_publisher']['id'] = 'field_doc_publisher';
$handler->display->display_options['fields']['field_doc_publisher']['table'] = 'field_data_field_doc_publisher';
$handler->display->display_options['fields']['field_doc_publisher']['field'] = 'field_doc_publisher';
$handler->display->display_options['fields']['field_doc_publisher']['settings'] = array(
  'link' => 1,
);
$handler->display->display_options['fields']['field_doc_publisher']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_doc_publisher']['multi_type'] = 'ol';
/* Field: Content: Data Provider */
$handler->display->display_options['fields']['field_doc_provider']['id'] = 'field_doc_provider';
$handler->display->display_options['fields']['field_doc_provider']['table'] = 'field_data_field_doc_provider';
$handler->display->display_options['fields']['field_doc_provider']['field'] = 'field_doc_provider';
$handler->display->display_options['fields']['field_doc_provider']['relationship'] = 'reverse_field_doc_provider_node';
$handler->display->display_options['fields']['field_doc_provider']['settings'] = array(
  'link' => 1,
);
/* Field: Content: Date of publication */
$handler->display->display_options['fields']['field_doc_creation_date']['id'] = 'field_doc_creation_date';
$handler->display->display_options['fields']['field_doc_creation_date']['table'] = 'field_data_field_doc_creation_date';
$handler->display->display_options['fields']['field_doc_creation_date']['field'] = 'field_doc_creation_date';
$handler->display->display_options['fields']['field_doc_creation_date']['label'] = '';
$handler->display->display_options['fields']['field_doc_creation_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_doc_creation_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_doc_creation_date']['settings'] = array(
  'format_type' => 'month_and_year',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'show',
);
/* Field: Content: Resource type */
$handler->display->display_options['fields']['field_doc_type']['id'] = 'field_doc_type';
$handler->display->display_options['fields']['field_doc_type']['table'] = 'field_data_field_doc_type';
$handler->display->display_options['fields']['field_doc_type']['field'] = 'field_doc_type';
$handler->display->display_options['fields']['field_doc_type']['label'] = '';
$handler->display->display_options['fields']['field_doc_type']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_doc_type']['alter']['text'] = '[field_doc_creation_date] [field_doc_type] ([field_doc_language])';
$handler->display->display_options['fields']['field_doc_type']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_doc_type']['empty'] = '-NO RT-';
$handler->display->display_options['fields']['field_doc_type']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_doc_type']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_doc_type']['delta_offset'] = '0';
/* Field: Field: Overarching categories */
$handler->display->display_options['fields']['field_related_domains']['id'] = 'field_related_domains';
$handler->display->display_options['fields']['field_related_domains']['table'] = 'field_data_field_related_domains';
$handler->display->display_options['fields']['field_related_domains']['field'] = 'field_related_domains';
$handler->display->display_options['fields']['field_related_domains']['label'] = '';
$handler->display->display_options['fields']['field_related_domains']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_related_domains']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_related_domains']['delta_offset'] = '0';
/* Field: Field: Themes */
$handler->display->display_options['fields']['field_related_themes']['id'] = 'field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['field'] = 'field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['label'] = '';
$handler->display->display_options['fields']['field_related_themes']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_related_themes']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_related_themes']['delta_offset'] = '0';
/* Field: Field: Related concepts */
$handler->display->display_options['fields']['field_related_topics']['id'] = 'field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['table'] = 'field_data_field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['field'] = 'field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['label'] = 'LandVoc';
$handler->display->display_options['fields']['field_related_topics']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_related_topics']['alter']['text'] = '[field_related_domains] [field_related_themes] [field_related_topics]';
$handler->display->display_options['fields']['field_related_topics']['delta_offset'] = '0';
/* Field: Updated */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['ui_name'] = 'Updated';
$handler->display->display_options['fields']['changed']['label'] = 'Updated';
$handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['changed']['date_format'] = 'short';
$handler->display->display_options['fields']['changed']['custom_date_format'] = 'd/m/Y';
$handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
/* Field: Content: Language */
$handler->display->display_options['fields']['language']['id'] = 'language';
$handler->display->display_options['fields']['language']['table'] = 'node';
$handler->display->display_options['fields']['language']['field'] = 'language';
/* Field: Field: Geographical focus */
$handler->display->display_options['fields']['field_geographical_focus']['id'] = 'field_geographical_focus';
$handler->display->display_options['fields']['field_geographical_focus']['table'] = 'field_data_field_geographical_focus';
$handler->display->display_options['fields']['field_geographical_focus']['field'] = 'field_geographical_focus';
$handler->display->display_options['fields']['field_geographical_focus']['delta_offset'] = '0';
/* Field: Content: Country */
$handler->display->display_options['fields']['field_doc_country']['id'] = 'field_doc_country';
$handler->display->display_options['fields']['field_doc_country']['table'] = 'field_data_field_doc_country';
$handler->display->display_options['fields']['field_doc_country']['field'] = 'field_doc_country';
$handler->display->display_options['fields']['field_doc_country']['delta_offset'] = '0';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'landlibrary_resource' => 'landlibrary_resource',
);
$handler->display->display_options['filters']['type']['group'] = 1;
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
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111731461 => 0,
  111903911 => 0,
  25521343 => 0,
  111903912 => 0,
  111903910 => 0,
  30037204 => 0,
);
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
$handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Content: Promoted to front page */
$handler->display->display_options['filters']['promote']['id'] = 'promote';
$handler->display->display_options['filters']['promote']['table'] = 'node';
$handler->display->display_options['filters']['promote']['field'] = 'promote';
$handler->display->display_options['filters']['promote']['value'] = 'All';
$handler->display->display_options['filters']['promote']['group'] = 1;
$handler->display->display_options['filters']['promote']['exposed'] = TRUE;
$handler->display->display_options['filters']['promote']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['promote']['expose']['label'] = 'Promoted to front page';
$handler->display->display_options['filters']['promote']['expose']['operator'] = 'promote_op';
$handler->display->display_options['filters']['promote']['expose']['identifier'] = 'promote';
$handler->display->display_options['filters']['promote']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Content: Sticky */
$handler->display->display_options['filters']['sticky']['id'] = 'sticky';
$handler->display->display_options['filters']['sticky']['table'] = 'node';
$handler->display->display_options['filters']['sticky']['field'] = 'sticky';
$handler->display->display_options['filters']['sticky']['value'] = 'All';
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
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: User: Name (raw) */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'users';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['relationship'] = 'uid';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Author Name (user)';
$handler->display->display_options['filters']['name']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['group'] = 1;
$handler->display->display_options['filters']['language']['exposed'] = TRUE;
$handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
$handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
$handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
$handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
$handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Content: Publisher (field_doc_publisher) (reference filter) */
$handler->display->display_options['filters']['field_doc_publisher_target_id_entityreference_filter']['id'] = 'field_doc_publisher_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_doc_publisher_target_id_entityreference_filter']['table'] = 'field_data_field_doc_publisher';
$handler->display->display_options['filters']['field_doc_publisher_target_id_entityreference_filter']['field'] = 'field_doc_publisher_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_doc_publisher_target_id_entityreference_filter']['group'] = 1;
$handler->display->display_options['filters']['field_doc_publisher_target_id_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_doc_publisher_target_id_entityreference_filter']['expose']['operator_id'] = 'field_doc_publisher_target_id_entityreference_filter_op';
$handler->display->display_options['filters']['field_doc_publisher_target_id_entityreference_filter']['expose']['label'] = 'Publisher';
$handler->display->display_options['filters']['field_doc_publisher_target_id_entityreference_filter']['expose']['operator'] = 'field_doc_publisher_target_id_entityreference_filter_op';
$handler->display->display_options['filters']['field_doc_publisher_target_id_entityreference_filter']['expose']['identifier'] = 'field_doc_publisher_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_doc_publisher_target_id_entityreference_filter']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_doc_publisher_target_id_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_doc_publisher_target_id_entityreference_filter']['reference_display'] = 'organizations_library:entityreference_2';
/* Filter criterion: Content: Data Provider (field_doc_provider) (reference filter) */
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['id'] = 'field_doc_provider_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['table'] = 'field_data_field_doc_provider';
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['field'] = 'field_doc_provider_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['group'] = 1;
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['expose']['operator_id'] = 'field_doc_provider_target_id_entityreference_filter_op';
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['expose']['label'] = 'Provider';
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['expose']['operator'] = 'field_doc_provider_target_id_entityreference_filter_op';
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['expose']['identifier'] = 'field_doc_provider_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['group_info']['label'] = 'Provider (field_doc_provider) (reference filter)';
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['group_info']['identifier'] = 'field_doc_provider_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['group_info']['remember'] = FALSE;
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['group_info']['group_items'] = array(
  1 => array(),
  2 => array(),
  3 => array(),
);
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['reference_display'] = 'organizations_library:entityreference_1';
/* Filter criterion: Field: Geographical focus (field_geographical_focus) */
$handler->display->display_options['filters']['field_geographical_focus_tid']['id'] = 'field_geographical_focus_tid';
$handler->display->display_options['filters']['field_geographical_focus_tid']['table'] = 'field_data_field_geographical_focus';
$handler->display->display_options['filters']['field_geographical_focus_tid']['field'] = 'field_geographical_focus_tid';
$handler->display->display_options['filters']['field_geographical_focus_tid']['value'] = '';
$handler->display->display_options['filters']['field_geographical_focus_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['operator_id'] = 'field_geographical_focus_tid_op';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['label'] = 'Geographical focus (field_geographical_focus)';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['operator'] = 'field_geographical_focus_tid_op';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['identifier'] = 'field_geographical_focus_tid';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_geographical_focus_tid']['vocabulary'] = 'regions';
/* Filter criterion: Content: Country (field_doc_country) */
$handler->display->display_options['filters']['field_doc_country_tid']['id'] = 'field_doc_country_tid';
$handler->display->display_options['filters']['field_doc_country_tid']['table'] = 'field_data_field_doc_country';
$handler->display->display_options['filters']['field_doc_country_tid']['field'] = 'field_doc_country_tid';
$handler->display->display_options['filters']['field_doc_country_tid']['value'] = '';
$handler->display->display_options['filters']['field_doc_country_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_doc_country_tid']['expose']['operator_id'] = 'field_doc_country_tid_op';
$handler->display->display_options['filters']['field_doc_country_tid']['expose']['label'] = 'Country (field_doc_country)';
$handler->display->display_options['filters']['field_doc_country_tid']['expose']['operator'] = 'field_doc_country_tid_op';
$handler->display->display_options['filters']['field_doc_country_tid']['expose']['identifier'] = 'field_doc_country_tid';
$handler->display->display_options['filters']['field_doc_country_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_doc_country_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_doc_country_tid']['vocabulary'] = 'countries';

/* Display: System */
$handler = $view->new_display('system', 'System', 'system_1');
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['path'] = 'admin/content/library';
