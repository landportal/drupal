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
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
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
$handler->display->display_options['filters']['nid_entityreference_filter']['reference_display'] = 'llorg_ref:all';

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

