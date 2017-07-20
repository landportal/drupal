<?php

$view = new view();
$view->name = 'sdgs_timeline';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'SDGs timeline';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Land-related SDG timeline: track decisions & deadlines';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '0';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Content: Deadlines (field_milestone) */
$handler->display->display_options['relationships']['field_milestone_value']['id'] = 'field_milestone_value';
$handler->display->display_options['relationships']['field_milestone_value']['table'] = 'field_data_field_milestone';
$handler->display->display_options['relationships']['field_milestone_value']['field'] = 'field_milestone_value';
$handler->display->display_options['relationships']['field_milestone_value']['delta'] = '-1';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'field_noderef_target_id';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  'sdgi' => 'sdgi',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'main');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'timelinejs';
$handler->display->display_options['style_options']['timeline_config']['height'] = '350px';
$handler->display->display_options['style_options']['timeline_config']['hash_bookmark'] = 0;
$handler->display->display_options['style_options']['timeline_config']['start_at_end'] = 0;
$handler->display->display_options['style_options']['additional_config']['start_at_current'] = 0;
$handler->display->display_options['style_options']['timeline_fields']['caption'] = 'title';
$handler->display->display_options['style_options']['timeline_fields']['credit'] = 'title';
$handler->display->display_options['style_options']['timeline_fields']['start_date'] = 'field_singledate';
$handler->display->display_options['style_options']['timeline_fields']['display_date'] = 'field_singledate';
$handler->display->display_options['style_options']['timeline_fields']['text'] = 'field_description';
$handler->display->display_options['style_options']['timeline_fields']['headline'] = 'title';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Field: Deadline */
$handler->display->display_options['fields']['field_singledate']['id'] = 'field_singledate';
$handler->display->display_options['fields']['field_singledate']['table'] = 'field_data_field_singledate';
$handler->display->display_options['fields']['field_singledate']['field'] = 'field_singledate';
$handler->display->display_options['fields']['field_singledate']['relationship'] = 'field_milestone_value';
$handler->display->display_options['fields']['field_singledate']['label'] = '';
$handler->display->display_options['fields']['field_singledate']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_singledate']['settings'] = array(
  'format_type' => 'year_month_day',
  'custom_date_format' => '',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'show',
);
/* Field: Field: Description */
$handler->display->display_options['fields']['field_description']['id'] = 'field_description';
$handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
$handler->display->display_options['fields']['field_description']['field'] = 'field_description';
$handler->display->display_options['fields']['field_description']['relationship'] = 'field_milestone_value';
$handler->display->display_options['fields']['field_description']['label'] = '';
$handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;

