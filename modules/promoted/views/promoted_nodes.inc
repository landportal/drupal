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
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
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

/* Display: Promoted thematic */
$handler = $view->new_display('block', 'Promoted thematic', 'block');
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['filter_groups']['operator'] = 'OR';
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'AND',
  3 => 'AND',
);
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
  'organization' => 'organization',
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
/* Filter criterion: Content: Promoted to Thematic page */
$handler->display->display_options['filters']['promoted_to_thematic_page']['id'] = 'promoted_to_thematic_page';
$handler->display->display_options['filters']['promoted_to_thematic_page']['table'] = 'node';
$handler->display->display_options['filters']['promoted_to_thematic_page']['field'] = 'promoted_to_thematic_page';
$handler->display->display_options['filters']['promoted_to_thematic_page']['value'] = '1';
$handler->display->display_options['filters']['promoted_to_thematic_page']['group'] = 1;
/* Filter criterion: Content: Thematic Promoted (field_thematic_promoted) */
$handler->display->display_options['filters']['field_thematic_promoted_target_id']['id'] = 'field_thematic_promoted_target_id';
$handler->display->display_options['filters']['field_thematic_promoted_target_id']['table'] = 'field_data_field_thematic_promoted';
$handler->display->display_options['filters']['field_thematic_promoted_target_id']['field'] = 'field_thematic_promoted_target_id';
$handler->display->display_options['filters']['field_thematic_promoted_target_id']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_thematic_promoted_target_id']['group'] = 1;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status_1']['id'] = 'status_1';
$handler->display->display_options['filters']['status_1']['table'] = 'node';
$handler->display->display_options['filters']['status_1']['field'] = 'status';
$handler->display->display_options['filters']['status_1']['value'] = '1';
$handler->display->display_options['filters']['status_1']['group'] = 2;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type_1']['id'] = 'type_1';
$handler->display->display_options['filters']['type_1']['table'] = 'node';
$handler->display->display_options['filters']['type_1']['field'] = 'type';
$handler->display->display_options['filters']['type_1']['value'] = array(
  'blog_post' => 'blog_post',
  'debate' => 'debate',
  'event' => 'event',
  'landlibrary_resource' => 'landlibrary_resource',
  'news' => 'news',
  'organization' => 'organization',
);
$handler->display->display_options['filters']['type_1']['group'] = 2;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language_1']['id'] = 'language_1';
$handler->display->display_options['filters']['language_1']['table'] = 'node';
$handler->display->display_options['filters']['language_1']['field'] = 'language';
$handler->display->display_options['filters']['language_1']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
$handler->display->display_options['filters']['language_1']['group'] = 2;
/* Filter criterion: Content: Promoted to Thematic page */
$handler->display->display_options['filters']['promoted_to_thematic_page_1']['id'] = 'promoted_to_thematic_page_1';
$handler->display->display_options['filters']['promoted_to_thematic_page_1']['table'] = 'node';
$handler->display->display_options['filters']['promoted_to_thematic_page_1']['field'] = 'promoted_to_thematic_page';
$handler->display->display_options['filters']['promoted_to_thematic_page_1']['value'] = '1';
$handler->display->display_options['filters']['promoted_to_thematic_page_1']['group'] = 2;
/* Filter criterion: Content: Thematic Promoted (field_thematic_promoted) */
$handler->display->display_options['filters']['field_thematic_promoted_target_id_2']['id'] = 'field_thematic_promoted_target_id_2';
$handler->display->display_options['filters']['field_thematic_promoted_target_id_2']['table'] = 'field_data_field_thematic_promoted';
$handler->display->display_options['filters']['field_thematic_promoted_target_id_2']['field'] = 'field_thematic_promoted_target_id';
$handler->display->display_options['filters']['field_thematic_promoted_target_id_2']['operator'] = 'empty';
$handler->display->display_options['filters']['field_thematic_promoted_target_id_2']['group'] = 2;
/* Filter criterion: Field: Themes (field_related_themes) */
$handler->display->display_options['filters']['field_related_themes_tid']['id'] = 'field_related_themes_tid';
$handler->display->display_options['filters']['field_related_themes_tid']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['filters']['field_related_themes_tid']['field'] = 'field_related_themes_tid';
$handler->display->display_options['filters']['field_related_themes_tid']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_related_themes_tid']['group'] = 2;
$handler->display->display_options['filters']['field_related_themes_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_related_themes_tid']['vocabulary'] = 'themes';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status_2']['id'] = 'status_2';
$handler->display->display_options['filters']['status_2']['table'] = 'node';
$handler->display->display_options['filters']['status_2']['field'] = 'status';
$handler->display->display_options['filters']['status_2']['value'] = '1';
$handler->display->display_options['filters']['status_2']['group'] = 3;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type_2']['id'] = 'type_2';
$handler->display->display_options['filters']['type_2']['table'] = 'node';
$handler->display->display_options['filters']['type_2']['field'] = 'type';
$handler->display->display_options['filters']['type_2']['value'] = array(
  'blog_post' => 'blog_post',
  'debate' => 'debate',
  'event' => 'event',
  'landlibrary_resource' => 'landlibrary_resource',
  'news' => 'news',
  'organization' => 'organization',
);
$handler->display->display_options['filters']['type_2']['group'] = 3;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language_2']['id'] = 'language_2';
$handler->display->display_options['filters']['language_2']['table'] = 'node';
$handler->display->display_options['filters']['language_2']['field'] = 'language';
$handler->display->display_options['filters']['language_2']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
$handler->display->display_options['filters']['language_2']['group'] = 3;
/* Filter criterion: Content: Promoted to Thematic page */
$handler->display->display_options['filters']['promoted_to_thematic_page_2']['id'] = 'promoted_to_thematic_page_2';
$handler->display->display_options['filters']['promoted_to_thematic_page_2']['table'] = 'node';
$handler->display->display_options['filters']['promoted_to_thematic_page_2']['field'] = 'promoted_to_thematic_page';
$handler->display->display_options['filters']['promoted_to_thematic_page_2']['value'] = '1';
$handler->display->display_options['filters']['promoted_to_thematic_page_2']['group'] = 3;
/* Filter criterion: Content: Thematic Promoted (field_thematic_promoted) */
$handler->display->display_options['filters']['field_thematic_promoted_target_id_1']['id'] = 'field_thematic_promoted_target_id_1';
$handler->display->display_options['filters']['field_thematic_promoted_target_id_1']['table'] = 'field_data_field_thematic_promoted';
$handler->display->display_options['filters']['field_thematic_promoted_target_id_1']['field'] = 'field_thematic_promoted_target_id';
$handler->display->display_options['filters']['field_thematic_promoted_target_id_1']['operator'] = 'empty';
$handler->display->display_options['filters']['field_thematic_promoted_target_id_1']['group'] = 3;
/* Filter criterion: Field: Overarching categories (field_related_domains) */
$handler->display->display_options['filters']['field_related_domains_tid']['id'] = 'field_related_domains_tid';
$handler->display->display_options['filters']['field_related_domains_tid']['table'] = 'field_data_field_related_domains';
$handler->display->display_options['filters']['field_related_domains_tid']['field'] = 'field_related_domains_tid';
$handler->display->display_options['filters']['field_related_domains_tid']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_related_domains_tid']['group'] = 3;
$handler->display->display_options['filters']['field_related_domains_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_related_domains_tid']['vocabulary'] = 'overarching_categories';

/* Display: Promoted country */
$handler = $view->new_display('block', 'Promoted country', 'block_1');
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
/* Filter criterion: Content: Promoted to country page */
$handler->display->display_options['filters']['promoted_to_country_page']['id'] = 'promoted_to_country_page';
$handler->display->display_options['filters']['promoted_to_country_page']['table'] = 'node';
$handler->display->display_options['filters']['promoted_to_country_page']['field'] = 'promoted_to_country_page';
$handler->display->display_options['filters']['promoted_to_country_page']['value'] = '1';
/* Filter criterion: Content: Country Promoted (field_country_promoted) */
$handler->display->display_options['filters']['field_country_promoted_tid']['id'] = 'field_country_promoted_tid';
$handler->display->display_options['filters']['field_country_promoted_tid']['table'] = 'field_data_field_country_promoted';
$handler->display->display_options['filters']['field_country_promoted_tid']['field'] = 'field_country_promoted_tid';
$handler->display->display_options['filters']['field_country_promoted_tid']['value'] = array(
  13 => '13',
);
$handler->display->display_options['filters']['field_country_promoted_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_country_promoted_tid']['vocabulary'] = 'countries';
