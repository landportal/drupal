<?php

$view = new view();
$view->name = 'debates';
$view->description = 'A view to browse the Debates';
$view->tag = 'landportal, debate';
$view->base_table = 'node';
$view->human_name = 'Land Debates';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Land Debates';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'Read more';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'node';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
/* Field: Field: Date */
$handler->display->display_options['fields']['field_date']['id'] = 'field_date';
$handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
$handler->display->display_options['fields']['field_date']['field'] = 'field_date';
$handler->display->display_options['fields']['field_date']['settings'] = array(
  'format_type' => 'day_month_year',
  'custom_date_format' => '',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 1,
  'show_repeat_rule' => 'show',
);
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['text'] = '[field_date]
[body]';
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '600',
);
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
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'debate' => 'debate',
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

/* Display: Overview */
$handler = $view->new_display('block', 'Overview', 'overview');
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'debate' => 'debate',
);
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
/* Filter criterion: Content: Body (body) */
$handler->display->display_options['filters']['body_value']['id'] = 'body_value';
$handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
$handler->display->display_options['filters']['body_value']['field'] = 'body_value';
$handler->display->display_options['filters']['body_value']['operator'] = 'contains';
$handler->display->display_options['filters']['body_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['body_value']['expose']['operator_id'] = 'body_value_op';
$handler->display->display_options['filters']['body_value']['expose']['description'] = 'Search';
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
$handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['description'] = 'Geographical focus';
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
/* Filter criterion: Date: Date (node) */
$handler->display->display_options['filters']['date_filter_1']['id'] = 'date_filter_1';
$handler->display->display_options['filters']['date_filter_1']['table'] = 'node';
$handler->display->display_options['filters']['date_filter_1']['field'] = 'date_filter';
$handler->display->display_options['filters']['date_filter_1']['operator'] = 'contains';
$handler->display->display_options['filters']['date_filter_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['date_filter_1']['expose']['operator_id'] = 'date_filter_1_op';
$handler->display->display_options['filters']['date_filter_1']['expose']['operator'] = 'date_filter_1_op';
$handler->display->display_options['filters']['date_filter_1']['expose']['identifier'] = 'date_filter_1';
$handler->display->display_options['filters']['date_filter_1']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['date_filter_1']['granularity'] = 'year';
$handler->display->display_options['filters']['date_filter_1']['year_range'] = '-6:+0';
$handler->display->display_options['filters']['date_filter_1']['date_fields'] = array(
  'node.created' => 'node.created',
  'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  'field_data_field_date.field_date_value2' => 'field_data_field_date.field_date_value2',
);

/* Display: Slider */
$handler = $view->new_display('block', 'Slider', 'slider');
$handler->display->display_options['enabled'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
$handler->display->display_options['style_options']['interval'] = 'false';
$handler->display->display_options['style_options']['navigation'] = 1;
$handler->display->display_options['style_options']['indicators'] = 0;
$handler->display->display_options['style_options']['pause'] = 0;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'views_bootstrap_carousel_plugin_rows';
$handler->display->display_options['row_options']['image'] = 'field_image';
$handler->display->display_options['row_options']['title'] = 'title';
$handler->display->display_options['row_options']['description'] = 'rendered_entity';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => '',
  'image_link' => '',
);
/* Field: Field: Date */
$handler->display->display_options['fields']['field_date']['id'] = 'field_date';
$handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
$handler->display->display_options['fields']['field_date']['field'] = 'field_date';
$handler->display->display_options['fields']['field_date']['settings'] = array(
  'format_type' => 'day_month_year',
  'custom_date_format' => '',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 1,
  'show_repeat_rule' => 'show',
);
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['text'] = '[field_date]
[body]';
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '600',
);
/* Field: Content: Rendered Content */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;

