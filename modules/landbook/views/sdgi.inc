<?php

$view = new view();
$view->name = 'sdgi';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'SDGi';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'SDGi';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'jump_menu';
$handler->display->display_options['style_options']['path'] = 'nid';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Content: SDG (field_sdg) */
$handler->display->display_options['relationships']['field_sdg_tid']['id'] = 'field_sdg_tid';
$handler->display->display_options['relationships']['field_sdg_tid']['table'] = 'field_data_field_sdg';
$handler->display->display_options['relationships']['field_sdg_tid']['field'] = 'field_sdg_tid';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = 'node/[nid]';
/* Sort criterion: Taxonomy term: Term hierarchy */
$handler->display->display_options['sorts']['hierarchy_sort']['id'] = 'hierarchy_sort';
$handler->display->display_options['sorts']['hierarchy_sort']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['hierarchy_sort']['field'] = 'hierarchy_sort';
$handler->display->display_options['sorts']['hierarchy_sort']['relationship'] = 'field_sdg_tid';
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
$handler = $view->new_display('block', 'Block', 'block');
