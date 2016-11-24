<?php
/**
 * LP Organizations Reference filters
 *
 * Those MUST be used by other views that require to narrow down
 * organizations lists
 *
 * Copy/paste from:
 * http://landportal.info/admin/structure/views/view/organizations/export
 */

$view = new view();
$view->name = 'organizations';
$view->description = 'Organizations reference filters';
$view->tag = 'default, organizations, filters';
$view->base_table = 'node';
$view->human_name = 'Organizations';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'time';
$handler->display->display_options['cache']['results_lifespan'] = '3600';
$handler->display->display_options['cache']['results_lifespan_custom'] = '0';
$handler->display->display_options['cache']['output_lifespan'] = '3600';
$handler->display->display_options['cache']['output_lifespan_custom'] = '0';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: Content: Acronym */
$handler->display->display_options['fields']['field_acronym']['id'] = 'field_acronym';
$handler->display->display_options['fields']['field_acronym']['table'] = 'field_data_field_acronym';
$handler->display->display_options['fields']['field_acronym']['field'] = 'field_acronym';
$handler->display->display_options['fields']['field_acronym']['label'] = '';
$handler->display->display_options['fields']['field_acronym']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'organization' => 'organization',
);

/* Display: All */
$handler = $view->new_display('entityreference', 'All', 'entityreference_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'title' => 'title',
  'field_acronym' => 'field_acronym',
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;

/* Display: Book provider */
$handler = $view->new_display('entityreference', 'Book provider', 'entityreference_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['display_description'] = 'Land book dataset sources';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'title' => 'title',
  'field_acronym' => 'field_acronym',
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_orgref_taxonomy_term']['id'] = 'reverse_field_orgref_taxonomy_term';
$handler->display->display_options['relationships']['reverse_field_orgref_taxonomy_term']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_orgref_taxonomy_term']['field'] = 'reverse_field_orgref_taxonomy_term';
$handler->display->display_options['relationships']['reverse_field_orgref_taxonomy_term']['required'] = TRUE;

/* Display: LL provider */
$handler = $view->new_display('entityreference', 'LL provider', 'entityreference_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'title' => 'title',
  'field_acronym' => 'field_acronym',
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
$handler->display->display_options['relationships']['reverse_field_doc_provider_node']['label'] = 'Provider';
$handler->display->display_options['relationships']['reverse_field_doc_provider_node']['required'] = TRUE;

/* Display: LL publisher */
$handler = $view->new_display('entityreference', 'LL publisher', 'entityreference_4');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'title' => 'title',
  'field_acronym' => 'field_acronym',
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
$handler->display->display_options['relationships']['reverse_field_doc_publisher_node']['label'] = 'Publisher';
$handler->display->display_options['relationships']['reverse_field_doc_publisher_node']['required'] = TRUE;

/* Display: LL Organizations */
$handler = $view->new_display('entityreference', 'LL Organizations', 'entityreference_5');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['display_description'] = 'LL publisher or provider DOT NOT USE FOR DISPLAY, only select/filter (?)';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'title' => 'title',
  'field_acronym' => 'field_acronym',
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
$handler->display->display_options['relationships']['reverse_field_doc_publisher_node']['label'] = 'Publisher';
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_doc_provider_node']['id'] = 'reverse_field_doc_provider_node';
$handler->display->display_options['relationships']['reverse_field_doc_provider_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_doc_provider_node']['field'] = 'reverse_field_doc_provider_node';
$handler->display->display_options['relationships']['reverse_field_doc_provider_node']['label'] = 'Provider';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: Content: Acronym */
$handler->display->display_options['fields']['field_acronym']['id'] = 'field_acronym';
$handler->display->display_options['fields']['field_acronym']['table'] = 'field_data_field_acronym';
$handler->display->display_options['fields']['field_acronym']['field'] = 'field_acronym';
$handler->display->display_options['fields']['field_acronym']['label'] = '';
$handler->display->display_options['fields']['field_acronym']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'OR',
);
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'organization' => 'organization',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['filters']['nid_1']['table'] = 'node';
$handler->display->display_options['filters']['nid_1']['field'] = 'nid';
$handler->display->display_options['filters']['nid_1']['relationship'] = 'reverse_field_doc_provider_node';
$handler->display->display_options['filters']['nid_1']['operator'] = 'not empty';
$handler->display->display_options['filters']['nid_1']['group'] = 2;
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['relationship'] = 'reverse_field_doc_publisher_node';
$handler->display->display_options['filters']['nid']['group_type'] = 'count';
$handler->display->display_options['filters']['nid']['operator'] = 'not empty';
$handler->display->display_options['filters']['nid']['value']['value'] = '0';
$handler->display->display_options['filters']['nid']['group'] = 2;
