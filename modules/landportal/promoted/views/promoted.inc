<?php

$view = new view();
$view->name = 'promoted';
$view->description = 'Blocks for promoted items';
$view->tag = 'landportal';
$view->base_table = 'node';
$view->human_name = 'Promoted';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Promoted items';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '4';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'full_width',
  'image_link' => 'content',
);
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '600',
);
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
  'blog_post' => 'blog_post',
  'debate' => 'debate',
  'event' => 'event',
  'landlibrary_resource' => 'landlibrary_resource',
  'news' => 'news',
);
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
/* Filter criterion: Content: Promoted to front page */
$handler->display->display_options['filters']['promote']['id'] = 'promote';
$handler->display->display_options['filters']['promote']['table'] = 'node';
$handler->display->display_options['filters']['promote']['field'] = 'promote';
$handler->display->display_options['filters']['promote']['value'] = '1';

/* Display: Front block */
$handler = $view->new_display('block', 'Front block', 'front');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
$handler->display->display_options['style_options']['interval'] = '5000';
$handler->display->display_options['style_options']['navigation'] = 1;
$handler->display->display_options['style_options']['indicators'] = 1;
$handler->display->display_options['style_options']['pause'] = 1;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'views_bootstrap_carousel_plugin_rows';
$handler->display->display_options['row_options']['image'] = 'field_image';
$handler->display->display_options['row_options']['title'] = 'title';
$handler->display->display_options['row_options']['description'] = 'body';
$handler->display->display_options['defaults']['row_options'] = FALSE;

/* Display: Library block */
$handler = $view->new_display('block', 'Library block', 'library');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
/* Filter criterion: Content: Promoted to Library */
$handler->display->display_options['filters']['promoted_library']['id'] = 'promoted_library';
$handler->display->display_options['filters']['promoted_library']['table'] = 'node';
$handler->display->display_options['filters']['promoted_library']['field'] = 'promoted_library';
$handler->display->display_options['filters']['promoted_library']['value'] = '1';

/* Display: CP block */
$handler = $view->new_display('block', 'CP block', 'country');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Field: Geographical focus (field_geographical_focus) */
$handler->display->display_options['relationships']['field_geographical_focus_tid']['id'] = 'field_geographical_focus_tid';
$handler->display->display_options['relationships']['field_geographical_focus_tid']['table'] = 'field_data_field_geographical_focus';
$handler->display->display_options['relationships']['field_geographical_focus_tid']['field'] = 'field_geographical_focus_tid';
$handler->display->display_options['relationships']['field_geographical_focus_tid']['label'] = 'geo';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'large',
  'image_link' => 'content',
);
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Promoted to country page */
$handler->display->display_options['sorts']['promoted_to_country_page']['id'] = 'promoted_to_country_page';
$handler->display->display_options['sorts']['promoted_to_country_page']['table'] = 'node';
$handler->display->display_options['sorts']['promoted_to_country_page']['field'] = 'promoted_to_country_page';
$handler->display->display_options['sorts']['promoted_to_country_page']['order'] = 'DESC';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: ISO3 (field_iso3) */
$handler->display->display_options['arguments']['field_iso3_value']['id'] = 'field_iso3_value';
$handler->display->display_options['arguments']['field_iso3_value']['table'] = 'field_data_field_iso3';
$handler->display->display_options['arguments']['field_iso3_value']['field'] = 'field_iso3_value';
$handler->display->display_options['arguments']['field_iso3_value']['relationship'] = 'field_geographical_focus_tid';
$handler->display->display_options['arguments']['field_iso3_value']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_iso3_value']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['field_iso3_value']['default_argument_options']['index'] = '2';
$handler->display->display_options['arguments']['field_iso3_value']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_iso3_value']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_iso3_value']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_iso3_value']['limit'] = '0';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
  'blog_post' => 'blog_post',
  'debate' => 'debate',
  'event' => 'event',
  'landlibrary_resource' => 'landlibrary_resource',
  'news' => 'news',
);
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
/* Filter criterion: Field: Image (field_image:fid) */
$handler->display->display_options['filters']['field_image_fid']['id'] = 'field_image_fid';
$handler->display->display_options['filters']['field_image_fid']['table'] = 'field_data_field_image';
$handler->display->display_options['filters']['field_image_fid']['field'] = 'field_image_fid';
$handler->display->display_options['filters']['field_image_fid']['operator'] = 'not empty';

/* Display: TP block */
$handler = $view->new_display('block', 'TP block', 'thematic');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_thematic_promoted_target_id']['id'] = 'field_thematic_promoted_target_id';
$handler->display->display_options['relationships']['field_thematic_promoted_target_id']['table'] = 'field_data_field_thematic_promoted';
$handler->display->display_options['relationships']['field_thematic_promoted_target_id']['field'] = 'field_thematic_promoted_target_id';
$handler->display->display_options['relationships']['field_thematic_promoted_target_id']['label'] = 'thematic';
$handler->display->display_options['relationships']['field_thematic_promoted_target_id']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'large',
  'image_link' => 'content',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['relationship'] = 'field_thematic_promoted_target_id';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'field_thematic_promoted_target_id';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
  'blog_post' => 'blog_post',
  'debate' => 'debate',
  'event' => 'event',
  'landlibrary_resource' => 'landlibrary_resource',
  'news' => 'news',
);
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
/* Filter criterion: Content: Promoted to Thematic page */
$handler->display->display_options['filters']['promoted_to_thematic_page']['id'] = 'promoted_to_thematic_page';
$handler->display->display_options['filters']['promoted_to_thematic_page']['table'] = 'node';
$handler->display->display_options['filters']['promoted_to_thematic_page']['field'] = 'promoted_to_thematic_page';
$handler->display->display_options['filters']['promoted_to_thematic_page']['value'] = '1';

