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
$handler->display->display_options['use_more'] = TRUE;
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
/* Field: Content: Thumb */
$handler->display->display_options['fields']['field_doc_thumb']['id'] = 'field_doc_thumb';
$handler->display->display_options['fields']['field_doc_thumb']['table'] = 'field_data_field_doc_thumb';
$handler->display->display_options['fields']['field_doc_thumb']['field'] = 'field_doc_thumb';
$handler->display->display_options['fields']['field_doc_thumb']['label'] = '';
$handler->display->display_options['fields']['field_doc_thumb']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_doc_thumb']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_doc_thumb']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => 'content',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'h3';
$handler->display->display_options['fields']['title']['element_class'] = 'views_title';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Description */
$handler->display->display_options['fields']['field_doc_description']['id'] = 'field_doc_description';
$handler->display->display_options['fields']['field_doc_description']['table'] = 'field_data_field_doc_description';
$handler->display->display_options['fields']['field_doc_description']['field'] = 'field_doc_description';
$handler->display->display_options['fields']['field_doc_description']['label'] = '';
$handler->display->display_options['fields']['field_doc_description']['alter']['max_length'] = '400';
$handler->display->display_options['fields']['field_doc_description']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['field_doc_description']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_doc_description']['type'] = 'text_plain';
$handler->display->display_options['fields']['field_doc_description']['settings'] = array(
  'trim_length' => '200',
);
/* Field: Content: Resource type */
$handler->display->display_options['fields']['field_doc_type']['id'] = 'field_doc_type';
$handler->display->display_options['fields']['field_doc_type']['table'] = 'field_data_field_doc_type';
$handler->display->display_options['fields']['field_doc_type']['field'] = 'field_doc_type';
$handler->display->display_options['fields']['field_doc_type']['label'] = 'Resource type:';
$handler->display->display_options['fields']['field_doc_type']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_doc_type']['delta_offset'] = '0';
/* Field: Content: Publication date */
$handler->display->display_options['fields']['field_doc_creation_date']['id'] = 'field_doc_creation_date';
$handler->display->display_options['fields']['field_doc_creation_date']['table'] = 'field_data_field_doc_creation_date';
$handler->display->display_options['fields']['field_doc_creation_date']['field'] = 'field_doc_creation_date';
$handler->display->display_options['fields']['field_doc_creation_date']['label'] = 'Publication date:';
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
/* Field: Content: Topics */
$handler->display->display_options['fields']['field_doc_subject']['id'] = 'field_doc_subject';
$handler->display->display_options['fields']['field_doc_subject']['table'] = 'field_data_field_doc_subject';
$handler->display->display_options['fields']['field_doc_subject']['field'] = 'field_doc_subject';
$handler->display->display_options['fields']['field_doc_subject']['label'] = 'Topics:';
$handler->display->display_options['fields']['field_doc_subject']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_doc_subject']['delta_offset'] = 'A';
$handler->display->display_options['fields']['field_doc_subject']['delta_reversed'] = TRUE;
/* Field: Content: Country */
$handler->display->display_options['fields']['field_doc_country']['id'] = 'field_doc_country';
$handler->display->display_options['fields']['field_doc_country']['table'] = 'field_data_field_doc_country';
$handler->display->display_options['fields']['field_doc_country']['field'] = 'field_doc_country';
$handler->display->display_options['fields']['field_doc_country']['label'] = 'Geographic focus:';
$handler->display->display_options['fields']['field_doc_country']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_doc_country']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_doc_country']['hide_empty'] = TRUE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '</BR>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
/* Filter criterion: Content: Topics (field_doc_subject) */
$handler->display->display_options['filters']['field_doc_subject_tid']['id'] = 'field_doc_subject_tid';
$handler->display->display_options['filters']['field_doc_subject_tid']['table'] = 'field_data_field_doc_subject';
$handler->display->display_options['filters']['field_doc_subject_tid']['field'] = 'field_doc_subject_tid';
$handler->display->display_options['filters']['field_doc_subject_tid']['value'] = '';
$handler->display->display_options['filters']['field_doc_subject_tid']['group'] = 1;
$handler->display->display_options['filters']['field_doc_subject_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_doc_subject_tid']['expose']['operator_id'] = 'field_doc_subject_tid_op';
$handler->display->display_options['filters']['field_doc_subject_tid']['expose']['label'] = 'Topics';
$handler->display->display_options['filters']['field_doc_subject_tid']['expose']['operator'] = 'field_doc_subject_tid_op';
$handler->display->display_options['filters']['field_doc_subject_tid']['expose']['identifier'] = 'field_doc_subject_tid';
$handler->display->display_options['filters']['field_doc_subject_tid']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['field_doc_subject_tid']['expose']['remember_roles'] = array(
  2 => 0,
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_doc_subject_tid']['vocabulary'] = 'landportal_topics';
$handler->display->display_options['filters']['field_doc_subject_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Publication date (field_doc_creation_date) */
$handler->display->display_options['filters']['field_doc_creation_date_value']['id'] = 'field_doc_creation_date_value';
$handler->display->display_options['filters']['field_doc_creation_date_value']['table'] = 'field_data_field_doc_creation_date';
$handler->display->display_options['filters']['field_doc_creation_date_value']['field'] = 'field_doc_creation_date_value';
$handler->display->display_options['filters']['field_doc_creation_date_value']['group'] = 1;
$handler->display->display_options['filters']['field_doc_creation_date_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_doc_creation_date_value']['expose']['operator_id'] = 'field_doc_creation_date_value_op';
$handler->display->display_options['filters']['field_doc_creation_date_value']['expose']['label'] = 'Publication year';
$handler->display->display_options['filters']['field_doc_creation_date_value']['expose']['operator'] = 'field_doc_creation_date_value_op';
$handler->display->display_options['filters']['field_doc_creation_date_value']['expose']['identifier'] = 'field_doc_creation_date_value';
$handler->display->display_options['filters']['field_doc_creation_date_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_doc_creation_date_value']['granularity'] = 'year';
$handler->display->display_options['filters']['field_doc_creation_date_value']['form_type'] = 'date_text';
$handler->display->display_options['filters']['field_doc_creation_date_value']['year_range'] = '-10:+10';
/* Filter criterion: Content: Country (field_doc_country) */
$handler->display->display_options['filters']['field_doc_country_tid']['id'] = 'field_doc_country_tid';
$handler->display->display_options['filters']['field_doc_country_tid']['table'] = 'field_data_field_doc_country';
$handler->display->display_options['filters']['field_doc_country_tid']['field'] = 'field_doc_country_tid';
$handler->display->display_options['filters']['field_doc_country_tid']['value'] = '';
$handler->display->display_options['filters']['field_doc_country_tid']['group'] = 1;
$handler->display->display_options['filters']['field_doc_country_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_doc_country_tid']['expose']['operator_id'] = 'field_doc_country_tid_op';
$handler->display->display_options['filters']['field_doc_country_tid']['expose']['label'] = 'Geographic Focus';
$handler->display->display_options['filters']['field_doc_country_tid']['expose']['operator'] = 'field_doc_country_tid_op';
$handler->display->display_options['filters']['field_doc_country_tid']['expose']['identifier'] = 'field_doc_country_tid';
$handler->display->display_options['filters']['field_doc_country_tid']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['field_doc_country_tid']['expose']['remember_roles'] = array(
  2 => 0,
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_doc_country_tid']['vocabulary'] = 'countries';
$handler->display->display_options['filters']['field_doc_country_tid']['error_message'] = FALSE;
/* Filter criterion: Content: Resource type (field_doc_type) */
$handler->display->display_options['filters']['field_doc_type_tid_1']['id'] = 'field_doc_type_tid_1';
$handler->display->display_options['filters']['field_doc_type_tid_1']['table'] = 'field_data_field_doc_type';
$handler->display->display_options['filters']['field_doc_type_tid_1']['field'] = 'field_doc_type_tid';
$handler->display->display_options['filters']['field_doc_type_tid_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_doc_type_tid_1']['expose']['operator_id'] = 'field_doc_type_tid_1_op';
$handler->display->display_options['filters']['field_doc_type_tid_1']['expose']['label'] = 'Resource type';
$handler->display->display_options['filters']['field_doc_type_tid_1']['expose']['operator'] = 'field_doc_type_tid_1_op';
$handler->display->display_options['filters']['field_doc_type_tid_1']['expose']['identifier'] = 'field_doc_type_tid_1';
$handler->display->display_options['filters']['field_doc_type_tid_1']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_doc_type_tid_1']['type'] = 'select';
$handler->display->display_options['filters']['field_doc_type_tid_1']['vocabulary'] = 'landlibrary_resource_type';
$handler->display->display_options['filters']['field_doc_type_tid_1']['hierarchy'] = 1;
$handler->display->display_options['filters']['field_doc_type_tid_1']['error_message'] = FALSE;

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
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_doc_description' => 'field_doc_description',
  'field_doc_type' => 'field_doc_type',
  'field_doc_creation_date' => 'field_doc_creation_date',
  'field_doc_subject' => 'field_doc_subject',
  'field_doc_country' => 'field_doc_country',
  'nothing' => 'nothing',
);
$handler->display->display_options['row_options']['separator'] = '</BR>';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['path'] = 'library/browse/by-organizations';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '6';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'views-row';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_doc_description' => 'field_doc_description',
  'field_doc_type' => 'field_doc_type',
  'field_doc_creation_date' => 'field_doc_creation_date',
  'field_doc_subject' => 'field_doc_subject',
  'field_doc_country' => 'field_doc_country',
  'nothing' => 'nothing',
);
$handler->display->display_options['row_options']['separator'] = '</BR>';
$handler->display->display_options['row_options']['hide_empty'] = TRUE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Provider (field_doc_provider) */
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
$handler->display->display_options['block_description'] = 'docs_by_org';
$translatables['by_providers'] = array(
  t('Master'),
  t('Resources'),
  t('more...'),
  t('Search'),
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
  t('Resource type:'),
  t('Publication date:'),
  t('Topics:'),
  t('Geographic focus:'),
  t('</BR>'),
  t('All'),
  t('%1 Resources'),
  t('Title'),
  t('Topics'),
  t('Publication year'),
  t('Geographic Focus'),
  t('Resource type'),
  t('Page'),
  t('Block'),
  t('more'),
  t('docs_by_org'),
);
