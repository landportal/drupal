<?php

$view = new view();
$view->name = 'thematic_content';
$view->description = 'Landbook thematics related content. For each LP content type, show the latest nodes tagged with a given thematic';
$view->tag = 'landbook';
$view->base_table = 'node';
$view->human_name = 'Thematic content';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Book Latest Blocks';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'mini';
$handler->display->display_options['pager']['options']['items_per_page'] = '4';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['uses_fields'] = TRUE;
$handler->display->display_options['row_plugin'] = 'node';
$handler->display->display_options['row_options']['links'] = FALSE;
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
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Global: Null */
$handler->display->display_options['arguments']['null']['id'] = 'null';
$handler->display->display_options['arguments']['null']['table'] = 'views';
$handler->display->display_options['arguments']['null']['field'] = 'null';
$handler->display->display_options['arguments']['null']['default_action'] = 'default';
$handler->display->display_options['arguments']['null']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['null']['default_argument_options']['index'] = '1';
$handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'OR',
);
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
);
$handler->display->display_options['filters']['language']['group'] = 1;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'blog_post' => 'blog_post',
  'debate' => 'debate',
  'event' => 'event',
  'landlibrary_resource' => 'landlibrary_resource',
  'news' => 'news',
  'organization' => 'organization',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Field: Themes (field_related_themes) (reference filter) */
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['id'] = 'field_related_themes_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['field'] = 'field_related_themes_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['group'] = 2;
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['operator_id'] = 'field_related_themes_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['label'] = 'Themes (field_related_themes) (reference filter)';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['operator'] = 'field_related_themes_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['identifier'] = 'field_related_themes_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['reference_display'] = 'thematic:ref_theme';
/* Filter criterion: Field: Related concepts (field_related_topics) (reference filter) */
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['id'] = 'field_related_topics_tid_entityreference_filter_1';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['table'] = 'field_data_field_related_topics';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['field'] = 'field_related_topics_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['group'] = 2;
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['expose']['operator_id'] = 'field_related_topics_tid_entityreference_filter_1_op';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['expose']['label'] = 'Related concepts (field_related_topics) (reference filter)';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['expose']['operator'] = 'field_related_topics_tid_entityreference_filter_1_op';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['expose']['identifier'] = 'field_related_topics_tid_entityreference_filter_1';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['expose']['hide_empty_filter'] = FALSE;
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['group_info']['label'] = 'Related concepts (field_related_topics) (reference filter)';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['group_info']['identifier'] = 'field_related_topics_tid_entityreference_filter_1';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['group_info']['remember'] = FALSE;
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['group_info']['group_items'] = array(
  1 => array(),
  2 => array(),
  3 => array(),
);
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['reference_display'] = 'thematic:ref_concepts';

/* Display: Latest Debate */
$handler = $view->new_display('block', 'Latest Debate', 'debates');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Debates';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Field: Date -  start date (field_date) */
$handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
$handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
$handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
$handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'debate' => 'debate',
);

/* Display: Latest Blog */
$handler = $view->new_display('block', 'Latest Blog', 'blogs');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Latest Blogs';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'blog';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'blog_post' => 'blog_post',
);

/* Display: Latest Events */
$handler = $view->new_display('block', 'Latest Events', 'events');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Latest Events';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Field: Date -  start date (field_date) */
$handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
$handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
$handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
$handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'event' => 'event',
);

/* Display: Latest News */
$handler = $view->new_display('block', 'Latest News', 'news');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Latest News';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'news' => 'news',
);

/* Display: Partners */
$handler = $view->new_display('block', 'Partners', 'partners');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Partners';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'partners view-grid';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '8';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'node';
$handler->display->display_options['row_options']['links'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;

/* Display: Library */
$handler = $view->new_display('block', 'Library', 'library');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Library';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'view-with-filters';
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['use_more_text'] = 'Find more resources in the Land Library';
$handler->display->display_options['defaults']['exposed_form'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '6';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'node';
$handler->display->display_options['row_options']['links'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'Currently there are no resources in the Land Library for this country. <a href=" /library/contribute">Help us populate the Land Library by contributing!</a>
[!1]';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
$handler->display->display_options['empty']['area']['tokenize'] = TRUE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Date of publication (field_doc_creation_date) */
$handler->display->display_options['sorts']['field_doc_creation_date_value']['id'] = 'field_doc_creation_date_value';
$handler->display->display_options['sorts']['field_doc_creation_date_value']['table'] = 'field_data_field_doc_creation_date';
$handler->display->display_options['sorts']['field_doc_creation_date_value']['field'] = 'field_doc_creation_date_value';
$handler->display->display_options['sorts']['field_doc_creation_date_value']['order'] = 'DESC';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'OR',
);
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
);
$handler->display->display_options['filters']['language']['group'] = 1;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'blog_post' => 'blog_post',
  'debate' => 'debate',
  'event' => 'event',
  'landlibrary_resource' => 'landlibrary_resource',
  'news' => 'news',
  'organization' => 'organization',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Field: Themes (field_related_themes) (reference filter) */
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['id'] = 'field_related_themes_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['field'] = 'field_related_themes_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['group'] = 2;
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['operator_id'] = 'field_related_themes_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['label'] = 'Themes (field_related_themes) (reference filter)';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['operator'] = 'field_related_themes_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['identifier'] = 'field_related_themes_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['reference_display'] = 'thematic:ref_theme';
/* Filter criterion: Field: Related concepts (field_related_topics) (reference filter) */
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['id'] = 'field_related_topics_tid_entityreference_filter_1';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['table'] = 'field_data_field_related_topics';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['field'] = 'field_related_topics_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['group'] = 2;
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['expose']['operator_id'] = 'field_related_topics_tid_entityreference_filter_1_op';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['expose']['label'] = 'Related concepts (field_related_topics) (reference filter)';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['expose']['operator'] = 'field_related_topics_tid_entityreference_filter_1_op';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['expose']['identifier'] = 'field_related_topics_tid_entityreference_filter_1';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['expose']['hide_empty_filter'] = FALSE;
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['group_info']['label'] = 'Related concepts (field_related_topics) (reference filter)';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['group_info']['identifier'] = 'field_related_topics_tid_entityreference_filter_1';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['group_info']['remember'] = FALSE;
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['group_info']['group_items'] = array(
  1 => array(),
  2 => array(),
  3 => array(),
);
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter_1']['reference_display'] = 'thematic:ref_concepts';
/* Filter criterion: Field: Related concepts (field_related_topics) (reference filter) */
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['id'] = 'field_related_topics_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['table'] = 'field_data_field_related_topics';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['field'] = 'field_related_topics_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['operator_id'] = 'field_related_topics_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['label'] = 'Related concepts (field_related_topics) (reference filter)';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['operator'] = 'field_related_topics_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['identifier'] = 'field_related_topics_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['hide_empty_filter'] = FALSE;
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['reference_display'] = 'thematic:ref_concepts';
$handler->display->display_options['block_caching'] = '-1';
