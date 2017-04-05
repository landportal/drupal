<?php

$view = new view();
$view->name = 'by_providers';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Library resources by provider';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Resources';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'more...';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'node';
$handler->display->display_options['row_options']['links'] = FALSE;
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
/* Sort criterion: Content: Date of publication (field_doc_creation_date) */
$handler->display->display_options['sorts']['field_doc_creation_date_value_1']['id'] = 'field_doc_creation_date_value_1';
$handler->display->display_options['sorts']['field_doc_creation_date_value_1']['table'] = 'field_data_field_doc_creation_date';
$handler->display->display_options['sorts']['field_doc_creation_date_value_1']['field'] = 'field_doc_creation_date_value';
$handler->display->display_options['sorts']['field_doc_creation_date_value_1']['order'] = 'DESC';
$handler->display->display_options['sorts']['field_doc_creation_date_value_1']['exposed'] = TRUE;
$handler->display->display_options['sorts']['field_doc_creation_date_value_1']['expose']['label'] = 'Date of publication';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
$handler->display->display_options['sorts']['title']['exposed'] = TRUE;
$handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
/* Contextual filter: Content: Data Provider (field_doc_provider) */
$handler->display->display_options['arguments']['field_doc_provider_target_id']['id'] = 'field_doc_provider_target_id';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['table'] = 'field_data_field_doc_provider';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['field'] = 'field_doc_provider_target_id';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['field_doc_provider_target_id']['title'] = '%1 Resources';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['field_doc_provider_target_id']['validate']['type'] = 'node';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['validate_options']['types'] = array(
  'organization' => 'organization',
);
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
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['use_more_text'] = 'more...';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'node';
$handler->display->display_options['row_options']['links'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['path'] = 'library/browse/by-organizations';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'view-with-filters';
$handler->display->display_options['defaults']['query'] = FALSE;
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['contextual_filters_or'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'views-row';
$handler->display->display_options['style_options']['uses_fields'] = TRUE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'node';
$handler->display->display_options['row_options']['links'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Data Provider (field_doc_provider) */
$handler->display->display_options['arguments']['field_doc_provider_target_id']['id'] = 'field_doc_provider_target_id';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['table'] = 'field_data_field_doc_provider';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['field'] = 'field_doc_provider_target_id';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['field_doc_provider_target_id']['title'] = '%1 Resources';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['field_doc_provider_target_id']['validate']['type'] = 'node';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['validate_options']['types'] = array(
  'organization' => 'organization',
);
/* Contextual filter: Content: Publisher(s) (field_doc_publisher) */
$handler->display->display_options['arguments']['field_doc_publisher_target_id']['id'] = 'field_doc_publisher_target_id';
$handler->display->display_options['arguments']['field_doc_publisher_target_id']['table'] = 'field_data_field_doc_publisher';
$handler->display->display_options['arguments']['field_doc_publisher_target_id']['field'] = 'field_doc_publisher_target_id';
$handler->display->display_options['arguments']['field_doc_publisher_target_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_doc_publisher_target_id']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['field_doc_publisher_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_doc_publisher_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_doc_publisher_target_id']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['block_description'] = 'Library resources by providers';
