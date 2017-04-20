<?php

$view = new view();
$view->name = 'partners_wrapper';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Partners wrapper';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'node';
$handler->display->display_options['row_options']['view_mode'] = 'full';
$handler->display->display_options['row_options']['comments'] = TRUE;
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
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['arguments']['nid_1']['table'] = 'node';
$handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
$handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['nid_1']['default_argument_options']['index'] = '3';
$handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: MLIKE */
$handler = $view->new_display('page', 'MLIKE', 'page');
$handler->display->display_options['path'] = 'partners/mlike/content/%';
