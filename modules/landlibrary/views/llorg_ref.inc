<?php

$view = new view();
$view->name = 'llorg_ref';
$view->description = 'Reference lists for: all, publisher and provider';
$view->tag = 'landlibrary';
$view->base_table = 'node';
$view->human_name = 'Land Library Organizations ref';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'time';
$handler->display->display_options['cache']['results_lifespan'] = '1800';
$handler->display->display_options['cache']['results_lifespan_custom'] = '0';
$handler->display->display_options['cache']['output_lifespan'] = '1800';
$handler->display->display_options['cache']['output_lifespan_custom'] = '0';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '100';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'OR',
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'organization' => 'organization',
);
$handler->display->display_options['filters']['type']['group'] = 1;

/* Display: ref publisher */
$handler = $view->new_display('entityreference', 'ref publisher', 'pub');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'nid' => 'nid',
  'title' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_doc_publisher_node']['id'] = 'reverse_field_doc_publisher_node';
$handler->display->display_options['relationships']['reverse_field_doc_publisher_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_doc_publisher_node']['field'] = 'reverse_field_doc_publisher_node';
$handler->display->display_options['relationships']['reverse_field_doc_publisher_node']['label'] = 'publisher';
$handler->display->display_options['relationships']['reverse_field_doc_publisher_node']['required'] = TRUE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'OR',
);
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'organization' => 'organization',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: COUNT(Content: Nid) */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['relationship'] = 'reverse_field_doc_publisher_node';
$handler->display->display_options['filters']['nid']['group_type'] = 'count';
$handler->display->display_options['filters']['nid']['operator'] = '>';
$handler->display->display_options['filters']['nid']['value']['value'] = '0';
$handler->display->display_options['filters']['nid']['group'] = 2;

/* Display: ref provider */
$handler = $view->new_display('entityreference', 'ref provider', 'pro');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'nid' => 'nid',
  'title' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_doc_provider_node']['id'] = 'reverse_field_doc_provider_node';
$handler->display->display_options['relationships']['reverse_field_doc_provider_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_doc_provider_node']['field'] = 'reverse_field_doc_provider_node';
$handler->display->display_options['relationships']['reverse_field_doc_provider_node']['label'] = 'provider';
$handler->display->display_options['relationships']['reverse_field_doc_provider_node']['required'] = TRUE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'OR',
);
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'organization' => 'organization',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: COUNT(Content: Nid) */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['relationship'] = 'reverse_field_doc_provider_node';
$handler->display->display_options['filters']['nid']['group_type'] = 'count';
$handler->display->display_options['filters']['nid']['operator'] = '>';
$handler->display->display_options['filters']['nid']['value']['value'] = '0';
$handler->display->display_options['filters']['nid']['group'] = 2;

/* Display: ref all */
$handler = $view->new_display('entityreference', 'ref all', 'all');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'nid' => 'nid',
  'title' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'OR',
);
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
$handler->display->display_options['filters']['nid_entityreference_filter']['group'] = 2;
$handler->display->display_options['filters']['nid_entityreference_filter']['reference_display'] = 'llorg_ref:pro';
/* Filter criterion: Content: Nid (reference filter) */
$handler->display->display_options['filters']['nid_entityreference_filter_1']['id'] = 'nid_entityreference_filter_1';
$handler->display->display_options['filters']['nid_entityreference_filter_1']['table'] = 'node';
$handler->display->display_options['filters']['nid_entityreference_filter_1']['field'] = 'nid_entityreference_filter';
$handler->display->display_options['filters']['nid_entityreference_filter_1']['group'] = 2;
$handler->display->display_options['filters']['nid_entityreference_filter_1']['reference_display'] = 'llorg_ref:pub';

/* Display: ref all name */
$handler = $view->new_display('entityreference', 'ref all name', 'all_name');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['display_description'] = 'to search by name + acronym';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'title' => 'title',
  'field_acronym' => 'field_acronym',
  'nid' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: Field: Acronym */
$handler->display->display_options['fields']['field_acronym']['id'] = 'field_acronym';
$handler->display->display_options['fields']['field_acronym']['table'] = 'field_data_field_acronym';
$handler->display->display_options['fields']['field_acronym']['field'] = 'field_acronym';
$handler->display->display_options['fields']['field_acronym']['label'] = '';
$handler->display->display_options['fields']['field_acronym']['element_label_colon'] = FALSE;
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
$handler->display->display_options['filters']['nid_entityreference_filter']['reference_display'] = 'llorg_ref:all';

