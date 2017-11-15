<?php

$view = new view();
$view->name = 'events';
$view->description = 'Overview of Landportal Events';
$view->tag = 'landportal';
$view->base_table = 'node';
$view->human_name = 'Events';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Events';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '4';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'node';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Sort criterion: Content: Sticky */
$handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
$handler->display->display_options['sorts']['sticky']['table'] = 'node';
$handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
$handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
/* Sort criterion: Field: Date -  start date (field_date) */
$handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
$handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
$handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
$handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
/* Sort criterion: Field: Date - end date (field_date:value2) */
$handler->display->display_options['sorts']['field_date_value2']['id'] = 'field_date_value2';
$handler->display->display_options['sorts']['field_date_value2']['table'] = 'field_data_field_date';
$handler->display->display_options['sorts']['field_date_value2']['field'] = 'field_date_value2';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'event' => 'event',
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

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Sticky */
$handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
$handler->display->display_options['sorts']['sticky']['table'] = 'node';
$handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
$handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
/* Sort criterion: Field: Date -  start date (field_date) */
$handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
$handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
$handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
$handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
/* Sort criterion: Field: Date - end date (field_date:value2) */
$handler->display->display_options['sorts']['field_date_value2']['id'] = 'field_date_value2';
$handler->display->display_options['sorts']['field_date_value2']['table'] = 'field_data_field_date';
$handler->display->display_options['sorts']['field_date_value2']['field'] = 'field_date_value2';
$handler->display->display_options['sorts']['field_date_value2']['order'] = 'DESC';
$handler->display->display_options['path'] = 'debate/events/all';

/* Display: Future */
$handler = $view->new_display('block', 'Future', 'future');
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Sticky */
$handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
$handler->display->display_options['sorts']['sticky']['table'] = 'node';
$handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
$handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
/* Sort criterion: Field: Date -  start date (field_date) */
$handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
$handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
$handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
/* Sort criterion: Field: Date - end date (field_date:value2) */
$handler->display->display_options['sorts']['field_date_value2']['id'] = 'field_date_value2';
$handler->display->display_options['sorts']['field_date_value2']['table'] = 'field_data_field_date';
$handler->display->display_options['sorts']['field_date_value2']['field'] = 'field_date_value2';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'event' => 'event',
);
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
/* Filter criterion: Field: Date -  start date (field_date) */
$handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
$handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
$handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
$handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
$handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_text';
$handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
$handler->display->display_options['filters']['field_date_value']['year_range'] = '-0:+3';

/* Display: Past */
$handler = $view->new_display('block', 'Past', 'past');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'view-grid-2';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['use_more_text'] = 'View all events';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '4';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'node';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'event' => 'event',
);
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
/* Filter criterion: Field: Date -  start date (field_date) */
$handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
$handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
$handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
$handler->display->display_options['filters']['field_date_value']['operator'] = '<';
$handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_text';
$handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
$handler->display->display_options['filters']['field_date_value']['year_range'] = '-0:+3';

/* Display: Latest */
$handler = $view->new_display('block', 'Latest', 'latest');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '2';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'node';
$handler->display->display_options['defaults']['row_options'] = FALSE;

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'event' => 'event',
);
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
/* Filter criterion: Date: Date (node) */
$handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
$handler->display->display_options['filters']['date_filter']['table'] = 'node';
$handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
$handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
$handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Date';
$handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
$handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
$handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['date_filter']['granularity'] = 'year';
$handler->display->display_options['filters']['date_filter']['year_range'] = '-6:+3';
$handler->display->display_options['filters']['date_filter']['date_fields'] = array(
  'node.created' => 'node.created',
  'node.changed' => 'node.changed',
  'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  'field_data_field_date.field_date_value2' => 'field_data_field_date.field_date_value2',
);
/* Filter criterion: Content: Body (body) */
$handler->display->display_options['filters']['body_value']['id'] = 'body_value';
$handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
$handler->display->display_options['filters']['body_value']['field'] = 'body_value';
$handler->display->display_options['filters']['body_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['body_value']['expose']['operator_id'] = 'body_value_op';
$handler->display->display_options['filters']['body_value']['expose']['label'] = 'Search';
$handler->display->display_options['filters']['body_value']['expose']['operator'] = 'body_value_op';
$handler->display->display_options['filters']['body_value']['expose']['identifier'] = 'body_value';
$handler->display->display_options['filters']['body_value']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['field_geographical_focus_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['operator_id'] = 'field_geographical_focus_tid_op';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['label'] = 'Geographical focus';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['operator'] = 'field_geographical_focus_tid_op';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['identifier'] = 'field_geographical_focus_tid';
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_geographical_focus_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_geographical_focus_tid']['vocabulary'] = 'regions';

