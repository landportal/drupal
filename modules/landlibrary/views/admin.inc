<?php
/**
 * Landlibrary views: Admin
 *
 * View name: landlibrary_search
 * View URL: http://landportal.info/admin/structure/views/view/library_search/
 * View BO: http://landportal.ker/admin/structure/views/view/administration_library/export
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
  'views_bulk_operations' => 'views_bulk_operations',
  'nid' => 'nid',
  'edit_node' => 'edit_node',
  'path' => 'path',
  'title' => 'title',
  'field_doc_title' => 'field_doc_title',
  'field_doc_type' => 'field_doc_type',
  'delta' => 'delta',
  'field_doc_publisher' => 'field_doc_publisher',
  'field_doc_provider' => 'field_doc_provider',
  'field_doc_data_provider' => 'field_doc_data_provider',
  'language' => 'language',
  'field_doc_language' => 'field_doc_language',
  'changed' => 'changed',
  'created' => 'created',
  'field_doc_creation_date' => 'field_doc_creation_date',
  'field_format' => 'field_format',
  'field_doc_geographic_region' => 'field_doc_geographic_region',
  'field_doc_keyword' => 'field_doc_keyword',
  'field_doc_subject' => 'field_doc_subject',
  'field_doc_country' => 'field_doc_country',
);
$handler->display->display_options['style_options']['default'] = 'nid';
$handler->display->display_options['style_options']['info'] = array(
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'nid' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'path' => array(
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
  'field_doc_title' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_doc_type' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'delta' => array(
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
  'field_doc_data_provider' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'language' => array(
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
  'changed' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_doc_creation_date' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_format' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_doc_geographic_region' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_doc_keyword' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_doc_subject' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_doc_country' => array(
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
  'action::views_bulk_operations_delete_item' => array(
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
      ),
    ),
  ),
  'action::node_promote_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_publish_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_unpromote_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_unpublish_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
);
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Resource type */
$handler->display->display_options['fields']['field_doc_type']['id'] = 'field_doc_type';
$handler->display->display_options['fields']['field_doc_type']['table'] = 'field_data_field_doc_type';
$handler->display->display_options['fields']['field_doc_type']['field'] = 'field_doc_type';
$handler->display->display_options['fields']['field_doc_type']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_doc_type']['delta_offset'] = '0';
/* Field: Content: Format */
$handler->display->display_options['fields']['field_format']['id'] = 'field_format';
$handler->display->display_options['fields']['field_format']['table'] = 'field_data_field_format';
$handler->display->display_options['fields']['field_format']['field'] = 'field_format';
$handler->display->display_options['fields']['field_format']['exclude'] = TRUE;
/* Field: Content: Publisher */
$handler->display->display_options['fields']['field_doc_publisher']['id'] = 'field_doc_publisher';
$handler->display->display_options['fields']['field_doc_publisher']['table'] = 'field_data_field_doc_publisher';
$handler->display->display_options['fields']['field_doc_publisher']['field'] = 'field_doc_publisher';
$handler->display->display_options['fields']['field_doc_publisher']['settings'] = array(
  'link' => 1,
);
$handler->display->display_options['fields']['field_doc_publisher']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_doc_publisher']['multi_type'] = 'ol';
/* Field: Content: Provider */
$handler->display->display_options['fields']['field_doc_provider']['id'] = 'field_doc_provider';
$handler->display->display_options['fields']['field_doc_provider']['table'] = 'field_data_field_doc_provider';
$handler->display->display_options['fields']['field_doc_provider']['field'] = 'field_doc_provider';
$handler->display->display_options['fields']['field_doc_provider']['relationship'] = 'reverse_field_doc_provider_node';
$handler->display->display_options['fields']['field_doc_provider']['settings'] = array(
  'link' => 1,
);
/* Field: Content: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['date_format'] = 'custom';
$handler->display->display_options['fields']['changed']['custom_date_format'] = 'd/m/Y';
$handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
/* Field: Content: Publication date */
$handler->display->display_options['fields']['field_doc_creation_date']['id'] = 'field_doc_creation_date';
$handler->display->display_options['fields']['field_doc_creation_date']['table'] = 'field_data_field_doc_creation_date';
$handler->display->display_options['fields']['field_doc_creation_date']['field'] = 'field_doc_creation_date';
$handler->display->display_options['fields']['field_doc_creation_date']['settings'] = array(
  'format_type' => 'month_and_year',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'show',
);
/* Field: Field: Geographical focus */
$handler->display->display_options['fields']['field_geographical_focus']['id'] = 'field_geographical_focus';
$handler->display->display_options['fields']['field_geographical_focus']['table'] = 'field_data_field_geographical_focus';
$handler->display->display_options['fields']['field_geographical_focus']['field'] = 'field_geographical_focus';
$handler->display->display_options['fields']['field_geographical_focus']['delta_offset'] = '0';
/* Field: Field: Overarching categories */
$handler->display->display_options['fields']['field_related_domains']['id'] = 'field_related_domains';
$handler->display->display_options['fields']['field_related_domains']['table'] = 'field_data_field_related_domains';
$handler->display->display_options['fields']['field_related_domains']['field'] = 'field_related_domains';
$handler->display->display_options['fields']['field_related_domains']['label'] = 'Overarching';
$handler->display->display_options['fields']['field_related_domains']['delta_offset'] = '0';
/* Field: Field: Themes */
$handler->display->display_options['fields']['field_related_themes']['id'] = 'field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['field'] = 'field_related_themes';
/* Field: Field: Related concepts */
$handler->display->display_options['fields']['field_related_topics']['id'] = 'field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['table'] = 'field_data_field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['field'] = 'field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['label'] = 'Concepts';
$handler->display->display_options['fields']['field_related_topics']['delta_offset'] = '0';
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'AND',
);
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
  111731461 => 0,
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
/* Filter criterion: Content: Provider (field_doc_provider) (reference filter) */
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['id'] = 'field_doc_provider_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['table'] = 'field_data_field_doc_provider';
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['field'] = 'field_doc_provider_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['group'] = 1;
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['expose']['operator_id'] = 'field_doc_provider_target_id_entityreference_filter_op';
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['expose']['label'] = 'Provider';
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['expose']['operator'] = 'field_doc_provider_target_id_entityreference_filter_op';
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['expose']['identifier'] = 'field_doc_provider_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_doc_provider_target_id_entityreference_filter']['reference_display'] = 'organizations_library:entityreference_1';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'landlibrary_resource' => 'landlibrary_resource',
);
$handler->display->display_options['filters']['type']['group'] = 2;
/* Filter criterion: Content: Resource type (field_doc_type) */
$handler->display->display_options['filters']['field_doc_type_tid']['id'] = 'field_doc_type_tid';
$handler->display->display_options['filters']['field_doc_type_tid']['table'] = 'field_data_field_doc_type';
$handler->display->display_options['filters']['field_doc_type_tid']['field'] = 'field_doc_type_tid';
$handler->display->display_options['filters']['field_doc_type_tid']['value'] = '';
$handler->display->display_options['filters']['field_doc_type_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_doc_type_tid']['expose']['operator_id'] = 'field_doc_type_tid_op';
$handler->display->display_options['filters']['field_doc_type_tid']['expose']['label'] = 'Resource type (field_doc_type)';
$handler->display->display_options['filters']['field_doc_type_tid']['expose']['operator'] = 'field_doc_type_tid_op';
$handler->display->display_options['filters']['field_doc_type_tid']['expose']['identifier'] = 'field_doc_type_tid';
$handler->display->display_options['filters']['field_doc_type_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111731461 => 0,
  111903911 => 0,
  25521343 => 0,
  111903912 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_doc_type_tid']['vocabulary'] = 'landlibrary_resource_type';

/* Display: System */
$handler = $view->new_display('system', 'System', 'system_1');
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['path'] = 'admin/content/library';
$translatables['admin_view_library'] = array(
  t('Master'),
  t('Administration: Library'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('« first'),
  t('‹ previous'),
  t('next ›'),
  t('last »'),
  t('Displaying @start - @end of @total'),
  t('Content'),
  t('- Choose an operation -'),
  t('Nid'),
  t('Edit link'),
  t('Path'),
  t('Title'),
  t('Resource type'),
  t('Format'),
  t('Publisher'),
  t('Provider'),
  t('Updated date'),
  t('Publication date'),
  t('Geographical focus'),
  t('Overarching'),
  t('Themes'),
  t('Concepts'),
  t('Published'),
  t('Resource type (field_doc_type)'),
  t('System'),
);
