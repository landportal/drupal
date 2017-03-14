<?php

$view = new view();
$view->name = 'library_pages';
$view->description = 'Land Library Resources pages by taxonomy filter (theme, geo, type, license...)';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Library';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Land Library resources';
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'Find more on the Library';
$handler->display->display_options['link_display'] = 'page_1';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'teaser';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'empty';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Sort criterion: Content: Date of publication (field_doc_creation_date) */
$handler->display->display_options['sorts']['field_doc_creation_date_value']['id'] = 'field_doc_creation_date_value';
$handler->display->display_options['sorts']['field_doc_creation_date_value']['table'] = 'field_data_field_doc_creation_date';
$handler->display->display_options['sorts']['field_doc_creation_date_value']['field'] = 'field_doc_creation_date_value';
$handler->display->display_options['sorts']['field_doc_creation_date_value']['order'] = 'DESC';
/* Contextual filter: Content: Has taxonomy term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'landlibrary_resource' => 'landlibrary_resource',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
$handler->display->display_options['filters']['language']['group'] = 1;
/* Filter criterion: Content: Resource type (field_doc_type) (reference filter) */
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['id'] = 'field_doc_type_tid_entityreference_filter';
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['table'] = 'field_data_field_doc_type';
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['field'] = 'field_doc_type_tid_entityreference_filter';
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['group'] = 1;
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['expose']['operator_id'] = 'field_doc_type_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['expose']['label'] = 'Resource type';
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['expose']['operator'] = 'field_doc_type_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['expose']['identifier'] = 'field_doc_type_tid_entityreference_filter';
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['reference_display'] = 'library:ref_types';
/* Filter criterion: Content: License of the resource (field_doc_licencing) (reference filter) */
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['id'] = 'field_doc_licencing_tid_entityreference_filter';
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['table'] = 'field_data_field_doc_licencing';
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['field'] = 'field_doc_licencing_tid_entityreference_filter';
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['group'] = 1;
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['expose']['operator_id'] = 'field_doc_licencing_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['expose']['label'] = 'License of the resource';
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['expose']['operator'] = 'field_doc_licencing_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['expose']['identifier'] = 'field_doc_licencing_tid_entityreference_filter';
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['reference_display'] = 'library:ref_licenses';
/* Filter criterion: Field: Related concepts (field_related_topics) (reference filter) */
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['id'] = 'field_related_topics_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['table'] = 'field_data_field_related_topics';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['field'] = 'field_related_topics_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['group'] = 1;
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['operator_id'] = 'field_related_topics_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['label'] = 'Related concepts';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['operator'] = 'field_related_topics_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['identifier'] = 'field_related_topics_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['reference_display'] = 'library:ref_concepts';
/* Filter criterion: Field: Geographical focus (field_geographical_focus) */
$handler->display->display_options['filters']['field_geographical_focus_tid']['id'] = 'field_geographical_focus_tid';
$handler->display->display_options['filters']['field_geographical_focus_tid']['table'] = 'field_data_field_geographical_focus';
$handler->display->display_options['filters']['field_geographical_focus_tid']['field'] = 'field_geographical_focus_tid';
$handler->display->display_options['filters']['field_geographical_focus_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['operator_id'] = 'field_geographical_focus_tid_op';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['label'] = 'Geographical focus';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['operator'] = 'field_geographical_focus_tid_op';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['identifier'] = 'field_geographical_focus_tid';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_geographical_focus_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_geographical_focus_tid']['vocabulary'] = 'regions';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['path'] = 'library/browse/all';

/* Display: Type */
$handler = $view->new_display('page', 'Type', 'page_type');
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: View area */
$handler->display->display_options['header']['view']['id'] = 'view';
$handler->display->display_options['header']['view']['table'] = 'views';
$handler->display->display_options['header']['view']['field'] = 'view';
$handler->display->display_options['header']['view']['view_to_insert'] = 'library_browse:term';
$handler->display->display_options['header']['view']['inherit_arguments'] = TRUE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['path'] = 'library/browse/type/%';

/* Display: License */
$handler = $view->new_display('page', 'License', 'page_license');
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: View area */
$handler->display->display_options['header']['view']['id'] = 'view';
$handler->display->display_options['header']['view']['table'] = 'views';
$handler->display->display_options['header']['view']['field'] = 'view';
$handler->display->display_options['header']['view']['view_to_insert'] = 'library_browse:term';
$handler->display->display_options['header']['view']['inherit_arguments'] = TRUE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['path'] = 'library/browse/license/%';

/* Display: Theme */
$handler = $view->new_display('page', 'Theme', 'page_theme');
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: View area */
$handler->display->display_options['header']['view']['id'] = 'view';
$handler->display->display_options['header']['view']['table'] = 'views';
$handler->display->display_options['header']['view']['field'] = 'view';
$handler->display->display_options['header']['view']['view_to_insert'] = 'library_browse:term';
$handler->display->display_options['header']['view']['inherit_arguments'] = TRUE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['path'] = 'library/browse/theme/%';
