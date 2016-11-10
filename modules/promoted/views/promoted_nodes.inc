<?php

$view = new view();
$view->name = 'promoted_nodes';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Promoted nodes';
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
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = '<div class="empty"></div>';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['max_length'] = '60';
$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'country_promoted',
  'image_link' => 'content',
);
/* Field: Content: Thumbnail of the resource */
$handler->display->display_options['fields']['field_doc_thumb']['id'] = 'field_doc_thumb';
$handler->display->display_options['fields']['field_doc_thumb']['table'] = 'field_data_field_doc_thumb';
$handler->display->display_options['fields']['field_doc_thumb']['field'] = 'field_doc_thumb';
$handler->display->display_options['fields']['field_doc_thumb']['label'] = '';
$handler->display->display_options['fields']['field_doc_thumb']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_doc_thumb']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_doc_thumb']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_doc_thumb']['settings'] = array(
  'image_style' => 'country_promoted',
  'image_link' => 'content',
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
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
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

/* Display: Promoted thematic */
$handler = $view->new_display('block', 'Promoted thematic', 'block');
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_thematic_promoted_target_id']['id'] = 'field_thematic_promoted_target_id';
$handler->display->display_options['relationships']['field_thematic_promoted_target_id']['table'] = 'field_data_field_thematic_promoted';
$handler->display->display_options['relationships']['field_thematic_promoted_target_id']['field'] = 'field_thematic_promoted_target_id';
$handler->display->display_options['relationships']['field_thematic_promoted_target_id']['label'] = 'Thematic promoted';
$handler->display->display_options['relationships']['field_thematic_promoted_target_id']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['max_length'] = '60';
$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'country_promoted',
  'image_link' => 'content',
);
/* Field: Content: Thumbnail of the resource */
$handler->display->display_options['fields']['field_doc_thumb']['id'] = 'field_doc_thumb';
$handler->display->display_options['fields']['field_doc_thumb']['table'] = 'field_data_field_doc_thumb';
$handler->display->display_options['fields']['field_doc_thumb']['field'] = 'field_doc_thumb';
$handler->display->display_options['fields']['field_doc_thumb']['label'] = '';
$handler->display->display_options['fields']['field_doc_thumb']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_doc_thumb']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_doc_thumb']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_doc_thumb']['settings'] = array(
  'image_style' => 'country_promoted',
  'image_link' => 'content',
);
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
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
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
/* Filter criterion: Content: Promoted to Thematic page */
$handler->display->display_options['filters']['promoted_to_thematic_page']['id'] = 'promoted_to_thematic_page';
$handler->display->display_options['filters']['promoted_to_thematic_page']['table'] = 'node';
$handler->display->display_options['filters']['promoted_to_thematic_page']['field'] = 'promoted_to_thematic_page';
$handler->display->display_options['filters']['promoted_to_thematic_page']['value'] = '1';

/* Display: Promoted country */
$handler = $view->new_display('block', 'Promoted country', 'block_1');
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Content: Country Promoted (field_country_promoted) */
$handler->display->display_options['relationships']['field_country_promoted_tid']['id'] = 'field_country_promoted_tid';
$handler->display->display_options['relationships']['field_country_promoted_tid']['table'] = 'field_data_field_country_promoted';
$handler->display->display_options['relationships']['field_country_promoted_tid']['field'] = 'field_country_promoted_tid';
$handler->display->display_options['relationships']['field_country_promoted_tid']['label'] = 'Country Promoted';
$handler->display->display_options['relationships']['field_country_promoted_tid']['required'] = TRUE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: ISO3 (field_iso3) */
$handler->display->display_options['arguments']['field_iso3_value']['id'] = 'field_iso3_value';
$handler->display->display_options['arguments']['field_iso3_value']['table'] = 'field_data_field_iso3';
$handler->display->display_options['arguments']['field_iso3_value']['field'] = 'field_iso3_value';
$handler->display->display_options['arguments']['field_iso3_value']['relationship'] = 'field_country_promoted_tid';
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
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
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
/* Filter criterion: Content: Promoted to country page */
$handler->display->display_options['filters']['promoted_to_country_page']['id'] = 'promoted_to_country_page';
$handler->display->display_options['filters']['promoted_to_country_page']['table'] = 'node';
$handler->display->display_options['filters']['promoted_to_country_page']['field'] = 'promoted_to_country_page';
$handler->display->display_options['filters']['promoted_to_country_page']['value'] = '1';
