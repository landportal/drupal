<?php

$view = new view();
$view->name = 'landlibrary_promoted';
$view->description = 'Visual block of home page promoted items';
$view->tag = 'landportal';
$view->base_table = 'node';
$view->human_name = 'LandLibrary promoted';
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
$handler->display->display_options['pager']['options']['items_per_page'] = '4';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_doc_provider_target_id']['id'] = 'field_doc_provider_target_id';
$handler->display->display_options['relationships']['field_doc_provider_target_id']['table'] = 'field_data_field_doc_provider';
$handler->display->display_options['relationships']['field_doc_provider_target_id']['field'] = 'field_doc_provider_target_id';
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'field_doc_provider_target_id';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => '',
  'image_link' => 'content',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['max_length'] = '70';
$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Thumb */
$handler->display->display_options['fields']['field_doc_thumb']['id'] = 'field_doc_thumb';
$handler->display->display_options['fields']['field_doc_thumb']['table'] = 'field_data_field_doc_thumb';
$handler->display->display_options['fields']['field_doc_thumb']['field'] = 'field_doc_thumb';
$handler->display->display_options['fields']['field_doc_thumb']['label'] = '';
$handler->display->display_options['fields']['field_doc_thumb']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_doc_thumb']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_doc_thumb']['settings'] = array(
  'image_style' => 'featured',
  'image_link' => 'content',
);
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Sort criterion: Content: Updated date */
$handler->display->display_options['sorts']['changed']['id'] = 'changed';
$handler->display->display_options['sorts']['changed']['table'] = 'node';
$handler->display->display_options['sorts']['changed']['field'] = 'changed';
$handler->display->display_options['sorts']['changed']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Promoted to front page */
$handler->display->display_options['filters']['promote']['id'] = 'promote';
$handler->display->display_options['filters']['promote']['table'] = 'node';
$handler->display->display_options['filters']['promote']['field'] = 'promote';
$handler->display->display_options['filters']['promote']['value'] = '1';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'landlibrary_resource' => 'landlibrary_resource',
);
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['enabled'] = FALSE;
$handler->display->display_options['path'] = 'library';
$translatables['landlibrary_promoted'] = array(
  t('Master'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Content entity referenced from field_doc_provider'),
  t('Block'),
  t('Page'),
);
