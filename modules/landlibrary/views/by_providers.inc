<?php

$view = new view();
$view->name = 'resources_by_providers';
$view->description = '';
$view->tag = 'landlibrary';
$view->base_table = 'node';
$view->human_name = 'Resources by providers';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Land Library Resources';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'more...';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'teaser';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Description */
$handler->display->display_options['fields']['field_doc_description']['id'] = 'field_doc_description';
$handler->display->display_options['fields']['field_doc_description']['table'] = 'field_data_field_doc_description';
$handler->display->display_options['fields']['field_doc_description']['field'] = 'field_doc_description';
$handler->display->display_options['fields']['field_doc_description']['label'] = '';
$handler->display->display_options['fields']['field_doc_description']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_doc_description']['type'] = 'text_trimmed';
$handler->display->display_options['fields']['field_doc_description']['settings'] = array(
  'trim_length' => '200',
);
/* Field: Content: Keyword */
$handler->display->display_options['fields']['field_doc_keyword']['id'] = 'field_doc_keyword';
$handler->display->display_options['fields']['field_doc_keyword']['table'] = 'field_data_field_doc_keyword';
$handler->display->display_options['fields']['field_doc_keyword']['field'] = 'field_doc_keyword';
$handler->display->display_options['fields']['field_doc_keyword']['label'] = '';
$handler->display->display_options['fields']['field_doc_keyword']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_doc_keyword']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_doc_keyword']['delta_offset'] = '0';
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title_1']['alter']['text'] = '</BR></BR>';
$handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: Provider (field_doc_provider) */
$handler->display->display_options['arguments']['field_doc_provider_target_id']['id'] = 'field_doc_provider_target_id';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['table'] = 'field_data_field_doc_provider';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['field'] = 'field_doc_provider_target_id';
$handler->display->display_options['arguments']['field_doc_provider_target_id']['default_action'] = 'default';
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
/* Filter criterion: Content: Country (field_doc_country) */
$handler->display->display_options['filters']['field_doc_country_tid']['id'] = 'field_doc_country_tid';
$handler->display->display_options['filters']['field_doc_country_tid']['table'] = 'field_data_field_doc_country';
$handler->display->display_options['filters']['field_doc_country_tid']['field'] = 'field_doc_country_tid';
$handler->display->display_options['filters']['field_doc_country_tid']['value'] = '';
$handler->display->display_options['filters']['field_doc_country_tid']['vocabulary'] = 'countries';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'library/by-providers';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['block_description'] = 'Library resources by providers';
$translatables['resources_by_providers'] = array(
  t('Master'),
  t('Land Library Resources'),
  t('more...'),
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
  t('</BR></BR>'),
  t('All'),
  t('Page'),
  t('more'),
  t('Block'),
  t('resources_by_providers'),
);
