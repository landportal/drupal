<?php

$view = new view();
$view->name = 'administration_projects';
$view->description = 'Manage Projects content type resources';
$view->tag = 'admin';
$view->base_table = 'node';
$view->human_name = 'Administration: Projects';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Administration: Projects';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  30037204 => '30037204',
  111903910 => '111903910',
);
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
  'title' => 'title',
  'body' => 'body',
  'field_image' => 'field_image',
  'field_doc_people' => 'field_doc_people',
  'field_language' => 'field_language',
  'language' => 'language',
  'field_pubdate' => 'field_pubdate',
  'field_link' => 'field_link',
  'field_file' => 'field_file',
  'nothing_1' => 'nothing_1',
  'field_geographical_focus' => 'field_geographical_focus',
  'field_related_domains' => 'field_related_domains',
  'field_related_themes' => 'field_related_themes',
  'field_related_topics' => 'field_related_topics',
  'nothing' => 'nothing',
  'name' => 'name',
  'changed' => 'changed',
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
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'body' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_image' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_doc_people' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_language' => array(
    'sortable' => 0,
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
  'field_pubdate' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_link' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_file' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'nothing_1' => array(
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
  'nothing' => array(
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
  'changed' => array(
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
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
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
    'skip_permission_check' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_make_unsticky_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'skip_permission_check' => 0,
    'override_label' => 0,
    'label' => '',
  ),
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
  'action::node_promote_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'skip_permission_check' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_publish_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'skip_permission_check' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_unpromote_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'skip_permission_check' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_unpublish_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'skip_permission_check' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::pathauto_node_update_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'skip_permission_check' => 0,
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
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['alter']['max_length'] = '50';
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => '',
);
/* Field: Field: ID */
$handler->display->display_options['fields']['field_id']['id'] = 'field_id';
$handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
$handler->display->display_options['fields']['field_id']['field'] = 'field_id';
$handler->display->display_options['fields']['field_id']['exclude'] = TRUE;
/* Field: Field: Acronym */
$handler->display->display_options['fields']['field_acronym']['id'] = 'field_acronym';
$handler->display->display_options['fields']['field_acronym']['table'] = 'field_data_field_acronym';
$handler->display->display_options['fields']['field_acronym']['field'] = 'field_acronym';
$handler->display->display_options['fields']['field_acronym']['exclude'] = TRUE;
/* Field: Content: Key contacts */
$handler->display->display_options['fields']['field_contact']['id'] = 'field_contact';
$handler->display->display_options['fields']['field_contact']['table'] = 'field_data_field_contact';
$handler->display->display_options['fields']['field_contact']['field'] = 'field_contact';
$handler->display->display_options['fields']['field_contact']['exclude'] = TRUE;
/* Field: Field: Date */
$handler->display->display_options['fields']['field_date']['id'] = 'field_date';
$handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
$handler->display->display_options['fields']['field_date']['field'] = 'field_date';
$handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_date']['settings'] = array(
  'format_type' => 'month_and_year',
  'custom_date_format' => '',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'show',
);
/* Field: Content: Project value */
$handler->display->display_options['fields']['field_value']['id'] = 'field_value';
$handler->display->display_options['fields']['field_value']['table'] = 'field_data_field_value';
$handler->display->display_options['fields']['field_value']['field'] = 'field_value';
$handler->display->display_options['fields']['field_value']['exclude'] = TRUE;
/* Field: Field: Website */
$handler->display->display_options['fields']['field_link']['id'] = 'field_link';
$handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
$handler->display->display_options['fields']['field_link']['field'] = 'field_link';
$handler->display->display_options['fields']['field_link']['label'] = 'Source';
$handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
$handler->display->display_options['fields']['field_link']['type'] = 'link_label';
$handler->display->display_options['fields']['field_link']['settings'] = array(
  'strip_www' => 0,
);
$handler->display->display_options['fields']['field_link']['delta_offset'] = '0';
/* Field: Content: Associated staff */
$handler->display->display_options['fields']['field_user']['id'] = 'field_user';
$handler->display->display_options['fields']['field_user']['table'] = 'field_data_field_user';
$handler->display->display_options['fields']['field_user']['field'] = 'field_user';
$handler->display->display_options['fields']['field_user']['label'] = 'Members';
$handler->display->display_options['fields']['field_user']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_user']['settings'] = array(
  'bypass_access' => 0,
  'link' => 1,
);
$handler->display->display_options['fields']['field_user']['delta_offset'] = '0';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
$handler->display->display_options['fields']['nothing_1']['table'] = 'views';
$handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_1']['label'] = 'Metadata_____details';
$handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'ID: [field_id] <br />
Acronym: [field_acronym] <br />
Website: [field_link] <br />
Project value: [field_value] <br />
Extension: [field_date] <br />
Contact information: [field_contact] <br />
Associated staff: [field_user] <br />';
/* Field: Content: Organizations related */
$handler->display->display_options['fields']['field_related_organization']['id'] = 'field_related_organization';
$handler->display->display_options['fields']['field_related_organization']['table'] = 'field_data_field_related_organization';
$handler->display->display_options['fields']['field_related_organization']['field'] = 'field_related_organization';
$handler->display->display_options['fields']['field_related_organization']['label'] = 'Affiliated organization';
$handler->display->display_options['fields']['field_related_organization']['settings'] = array(
  'add' => '',
  'edit' => 'Edit',
  'translate' => '',
  'delete' => '',
  'description' => 0,
  'view_mode' => 'token',
);
$handler->display->display_options['fields']['field_related_organization']['delta_offset'] = '0';
$handler->display->display_options['fields']['field_related_organization']['separator'] = '';
/* Field: Field: Geographical focus */
$handler->display->display_options['fields']['field_geographical_focus']['id'] = 'field_geographical_focus';
$handler->display->display_options['fields']['field_geographical_focus']['table'] = 'field_data_field_geographical_focus';
$handler->display->display_options['fields']['field_geographical_focus']['field'] = 'field_geographical_focus';
$handler->display->display_options['fields']['field_geographical_focus']['delta_offset'] = '0';
/* Field: Field: Overarching categories */
$handler->display->display_options['fields']['field_related_domains']['id'] = 'field_related_domains';
$handler->display->display_options['fields']['field_related_domains']['table'] = 'field_data_field_related_domains';
$handler->display->display_options['fields']['field_related_domains']['field'] = 'field_related_domains';
$handler->display->display_options['fields']['field_related_domains']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_related_domains']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_related_domains']['delta_offset'] = '0';
/* Field: Field: Themes */
$handler->display->display_options['fields']['field_related_themes']['id'] = 'field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['field'] = 'field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_related_themes']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_related_themes']['delta_offset'] = '0';
/* Field: Field: Related concepts */
$handler->display->display_options['fields']['field_related_topics']['id'] = 'field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['table'] = 'field_data_field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['field'] = 'field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['label'] = 'Related Concepts';
$handler->display->display_options['fields']['field_related_topics']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_related_topics']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_related_topics']['delta_offset'] = '0';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = 'Landvoc';
$handler->display->display_options['fields']['nothing']['alter']['text'] = 'Categories: [field_related_domains]
Themes: [field_related_themes]
Concepts: [field_related_topics]';
$handler->display->display_options['fields']['nothing']['alter']['nl2br'] = TRUE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Username';
/* Field: Updated */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['ui_name'] = 'Updated';
$handler->display->display_options['fields']['changed']['label'] = 'Last Updated';
$handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['changed']['date_format'] = 'custom';
$handler->display->display_options['fields']['changed']['custom_date_format'] = 'Y/m/d H:i:s';
$handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'AND',
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'project' => 'project',
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
$handler->display->display_options['filters']['name']['expose']['label'] = 'Author (username)';
$handler->display->display_options['filters']['name']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_geographical_focus_tid']['value'] = '';
$handler->display->display_options['filters']['field_geographical_focus_tid']['group'] = 2;
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
/* Filter criterion: Field: Overarching categories (field_related_domains) */
$handler->display->display_options['filters']['field_related_domains_tid']['id'] = 'field_related_domains_tid';
$handler->display->display_options['filters']['field_related_domains_tid']['table'] = 'field_data_field_related_domains';
$handler->display->display_options['filters']['field_related_domains_tid']['field'] = 'field_related_domains_tid';
$handler->display->display_options['filters']['field_related_domains_tid']['group'] = 2;
$handler->display->display_options['filters']['field_related_domains_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_related_domains_tid']['expose']['operator_id'] = 'field_related_domains_tid_op';
$handler->display->display_options['filters']['field_related_domains_tid']['expose']['label'] = 'Overarching categories (field_related_domains)';
$handler->display->display_options['filters']['field_related_domains_tid']['expose']['operator'] = 'field_related_domains_tid_op';
$handler->display->display_options['filters']['field_related_domains_tid']['expose']['identifier'] = 'field_related_domains_tid';
$handler->display->display_options['filters']['field_related_domains_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_related_domains_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_domains_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_related_domains_tid']['vocabulary'] = 'overarching_categories';
/* Filter criterion: Field: Themes (field_related_themes) */
$handler->display->display_options['filters']['field_related_themes_tid']['id'] = 'field_related_themes_tid';
$handler->display->display_options['filters']['field_related_themes_tid']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['filters']['field_related_themes_tid']['field'] = 'field_related_themes_tid';
$handler->display->display_options['filters']['field_related_themes_tid']['group'] = 2;
$handler->display->display_options['filters']['field_related_themes_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_related_themes_tid']['expose']['operator_id'] = 'field_related_themes_tid_op';
$handler->display->display_options['filters']['field_related_themes_tid']['expose']['label'] = 'Themes (field_related_themes)';
$handler->display->display_options['filters']['field_related_themes_tid']['expose']['operator'] = 'field_related_themes_tid_op';
$handler->display->display_options['filters']['field_related_themes_tid']['expose']['identifier'] = 'field_related_themes_tid';
$handler->display->display_options['filters']['field_related_themes_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_related_themes_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_themes_tid']['group_info']['label'] = 'Themes (field_related_themes)';
$handler->display->display_options['filters']['field_related_themes_tid']['group_info']['identifier'] = 'field_related_themes_tid';
$handler->display->display_options['filters']['field_related_themes_tid']['group_info']['remember'] = FALSE;
$handler->display->display_options['filters']['field_related_themes_tid']['group_info']['group_items'] = array(
  1 => array(),
  2 => array(),
  3 => array(),
);
$handler->display->display_options['filters']['field_related_themes_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_related_themes_tid']['vocabulary'] = 'themes';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['path'] = 'admin/content/projects';
