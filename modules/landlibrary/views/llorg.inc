<?php

$view = new view();
$view->name = 'llorg';
$view->description = 'Organizations blocks';
$view->tag = 'landlibrary';
$view->base_table = 'node';
$view->human_name = 'Land Library Organizations';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['link_display'] = 'custom_url';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
$handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '24';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'node';
$handler->display->display_options['row_options']['links'] = FALSE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = 'Displaying @start - @end of <span class="badge">@total</span>';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
$handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'organization' => 'organization',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Nid (reference filter) */
$handler->display->display_options['filters']['nid_entityreference_filter']['id'] = 'nid_entityreference_filter';
$handler->display->display_options['filters']['nid_entityreference_filter']['table'] = 'node';
$handler->display->display_options['filters']['nid_entityreference_filter']['field'] = 'nid_entityreference_filter';
$handler->display->display_options['filters']['nid_entityreference_filter']['reference_display'] = 'llorg_ref:all';

/* Display: All */
$handler = $view->new_display('block', 'All', 'all');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'view-grid-2 view-wrapped';
$handler->display->display_options['link_url'] = 'library/sources';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'organization' => 'organization',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Nid (reference filter) */
$handler->display->display_options['filters']['nid_entityreference_filter']['id'] = 'nid_entityreference_filter';
$handler->display->display_options['filters']['nid_entityreference_filter']['table'] = 'node';
$handler->display->display_options['filters']['nid_entityreference_filter']['field'] = 'nid_entityreference_filter';
$handler->display->display_options['filters']['nid_entityreference_filter']['group'] = 1;
$handler->display->display_options['filters']['nid_entityreference_filter']['expose']['operator_id'] = 'nid_entityreference_filter_op';
$handler->display->display_options['filters']['nid_entityreference_filter']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['nid_entityreference_filter']['expose']['operator'] = 'nid_entityreference_filter_op';
$handler->display->display_options['filters']['nid_entityreference_filter']['expose']['identifier'] = 'nid_entityreference_filter';
$handler->display->display_options['filters']['nid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['nid_entityreference_filter']['reference_display'] = 'llorg_ref:all';
/* Filter criterion: Content: Nid (reference filter) */
$handler->display->display_options['filters']['nid_entityreference_filter_1']['id'] = 'nid_entityreference_filter_1';
$handler->display->display_options['filters']['nid_entityreference_filter_1']['table'] = 'node';
$handler->display->display_options['filters']['nid_entityreference_filter_1']['field'] = 'nid_entityreference_filter';
$handler->display->display_options['filters']['nid_entityreference_filter_1']['group'] = 1;
$handler->display->display_options['filters']['nid_entityreference_filter_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['nid_entityreference_filter_1']['expose']['operator_id'] = 'nid_entityreference_filter_1_op';
$handler->display->display_options['filters']['nid_entityreference_filter_1']['expose']['label'] = 'Organization name';
$handler->display->display_options['filters']['nid_entityreference_filter_1']['expose']['operator'] = 'nid_entityreference_filter_1_op';
$handler->display->display_options['filters']['nid_entityreference_filter_1']['expose']['identifier'] = 'nid_entityreference_filter_1';
$handler->display->display_options['filters']['nid_entityreference_filter_1']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['nid_entityreference_filter_1']['reference_display'] = 'llorg_ref:all_name';
/* Filter criterion: Content: Organization type (field_organization_type) (reference filter) */
$handler->display->display_options['filters']['field_organization_type_tid_entityreference_filter']['id'] = 'field_organization_type_tid_entityreference_filter';
$handler->display->display_options['filters']['field_organization_type_tid_entityreference_filter']['table'] = 'field_data_field_organization_type';
$handler->display->display_options['filters']['field_organization_type_tid_entityreference_filter']['field'] = 'field_organization_type_tid_entityreference_filter';
$handler->display->display_options['filters']['field_organization_type_tid_entityreference_filter']['group'] = 1;
$handler->display->display_options['filters']['field_organization_type_tid_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_organization_type_tid_entityreference_filter']['expose']['operator_id'] = 'field_organization_type_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_organization_type_tid_entityreference_filter']['expose']['label'] = 'Organization type';
$handler->display->display_options['filters']['field_organization_type_tid_entityreference_filter']['expose']['operator'] = 'field_organization_type_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_organization_type_tid_entityreference_filter']['expose']['identifier'] = 'field_organization_type_tid_entityreference_filter';
$handler->display->display_options['filters']['field_organization_type_tid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_organization_type_tid_entityreference_filter']['reference_display'] = 'llref:entityreference_1';
$handler->display->display_options['filters']['field_organization_type_tid_entityreference_filter']['reference_arguments'] = 'organization';

/* Display: Publishers */
$handler = $view->new_display('block', 'Publishers', 'publishers');
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'organization' => 'organization',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Nid (reference filter) */
$handler->display->display_options['filters']['nid_entityreference_filter']['id'] = 'nid_entityreference_filter';
$handler->display->display_options['filters']['nid_entityreference_filter']['table'] = 'node';
$handler->display->display_options['filters']['nid_entityreference_filter']['field'] = 'nid_entityreference_filter';
$handler->display->display_options['filters']['nid_entityreference_filter']['reference_display'] = 'llorg_ref:pub';

/* Display: Providers */
$handler = $view->new_display('block', 'Providers', 'providers');
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'organization' => 'organization',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Nid (reference filter) */
$handler->display->display_options['filters']['nid_entityreference_filter']['id'] = 'nid_entityreference_filter';
$handler->display->display_options['filters']['nid_entityreference_filter']['table'] = 'node';
$handler->display->display_options['filters']['nid_entityreference_filter']['field'] = 'nid_entityreference_filter';
$handler->display->display_options['filters']['nid_entityreference_filter']['reference_display'] = 'llorg_ref:pro';

/* Display: Publishers 100 */
$handler = $view->new_display('block', 'Publishers 100', 'publishers_100');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Top publishers';
$handler->display->display_options['display_description'] = 'with 100+ LLR';
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_doc_publisher_node']['id'] = 'reverse_field_doc_publisher_node';
$handler->display->display_options['relationships']['reverse_field_doc_publisher_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_doc_publisher_node']['field'] = 'reverse_field_doc_publisher_node';
$handler->display->display_options['relationships']['reverse_field_doc_publisher_node']['label'] = 'published';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'organization' => 'organization',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Nid (reference filter) */
$handler->display->display_options['filters']['nid_entityreference_filter']['id'] = 'nid_entityreference_filter';
$handler->display->display_options['filters']['nid_entityreference_filter']['table'] = 'node';
$handler->display->display_options['filters']['nid_entityreference_filter']['field'] = 'nid_entityreference_filter';
$handler->display->display_options['filters']['nid_entityreference_filter']['reference_display'] = 'llorg_ref:pub';
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['relationship'] = 'reverse_field_doc_publisher_node';
$handler->display->display_options['filters']['nid']['group_type'] = 'count';
$handler->display->display_options['filters']['nid']['operator'] = '>=';
$handler->display->display_options['filters']['nid']['value']['value'] = '100';
$handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
$handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
$handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
$handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';

/* Display: Providers 100 */
$handler = $view->new_display('block', 'Providers 100', 'providers_100');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Featured providers';
$handler->display->display_options['display_description'] = 'with 100+ LLR';
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_doc_provider_node']['id'] = 'reverse_field_doc_provider_node';
$handler->display->display_options['relationships']['reverse_field_doc_provider_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_doc_provider_node']['field'] = 'reverse_field_doc_provider_node';
$handler->display->display_options['relationships']['reverse_field_doc_provider_node']['label'] = 'provider';
$handler->display->display_options['relationships']['reverse_field_doc_provider_node']['required'] = TRUE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'organization' => 'organization',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Nid (reference filter) */
$handler->display->display_options['filters']['nid_entityreference_filter']['id'] = 'nid_entityreference_filter';
$handler->display->display_options['filters']['nid_entityreference_filter']['table'] = 'node';
$handler->display->display_options['filters']['nid_entityreference_filter']['field'] = 'nid_entityreference_filter';
$handler->display->display_options['filters']['nid_entityreference_filter']['reference_display'] = 'llorg_ref:pub';
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['relationship'] = 'reverse_field_doc_provider_node';
$handler->display->display_options['filters']['nid']['group_type'] = 'count';
$handler->display->display_options['filters']['nid']['operator'] = '>=';
$handler->display->display_options['filters']['nid']['value']['value'] = '100';
$handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
$handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
$handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
$handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';

