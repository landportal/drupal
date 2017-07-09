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
$handler->display->display_options['style_plugin'] = 'timelinejs';
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
$handler = $view->new_display('block', 'Block', 'block_sdgs_timeline');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'timelinejs';
$handler->display->display_options['style_options']['timeline_config']['height'] = '350px';
$handler->display->display_options['style_options']['timeline_config']['hash_bookmark'] = 0;
$handler->display->display_options['style_options']['timeline_config']['start_at_end'] = 0;
$handler->display->display_options['style_options']['additional_config']['start_at_current'] = 0;
$handler->display->display_options['style_options']['timeline_fields']['caption'] = 'title';
$handler->display->display_options['style_options']['timeline_fields']['credit'] = 'title';
$handler->display->display_options['style_options']['timeline_fields']['start_date'] = 'field_milestone';
$handler->display->display_options['style_options']['timeline_fields']['display_date'] = 'field_milestone';
$handler->display->display_options['style_options']['timeline_fields']['text'] = 'body';
$handler->display->display_options['style_options']['timeline_fields']['headline'] = 'title';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
/* Field: Content: Deadlines */
$handler->display->display_options['fields']['field_milestone']['id'] = 'field_milestone';
$handler->display->display_options['fields']['field_milestone']['table'] = 'field_data_field_milestone';
$handler->display->display_options['fields']['field_milestone']['field'] = 'field_milestone';
$handler->display->display_options['fields']['field_milestone']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_milestone']['type'] = 'field_collection_fields';
$handler->display->display_options['fields']['field_milestone']['settings'] = array(
  'view_mode' => 'full',
);
$handler->display->display_options['fields']['field_milestone']['delta_offset'] = '0';
