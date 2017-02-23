<?php 

$view = new view();
$view->name = 'landbook_countries_related';
$view->description = 'Landbook countries related content. For each LP content type, show the latest nodes tagged with a given country';
$view->tag = 'landbook';
$view->base_table = 'node';
$view->human_name = 'Landbook Countries Latest related content';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = TRUE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Book Latest Blocks';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '4';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'node';
$handler->display->display_options['row_options']['links'] = FALSE;
/* Relationship: Field: Geographical focus (field_geographical_focus) */
$handler->display->display_options['relationships']['field_geographical_focus_tid']['id'] = 'field_geographical_focus_tid';
$handler->display->display_options['relationships']['field_geographical_focus_tid']['table'] = 'field_data_field_geographical_focus';
$handler->display->display_options['relationships']['field_geographical_focus_tid']['field'] = 'field_geographical_focus_tid';
$handler->display->display_options['relationships']['field_geographical_focus_tid']['required'] = TRUE;
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
  'debate' => 'debate',
);
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
);

/* Display: Latest Debate */
$handler = $view->new_display('block', 'Latest Debate', 'block');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Debate';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Field: Date -  start date (field_date) */
$handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
$handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
$handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
$handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';

/* Display: Latest Blog */
$handler = $view->new_display('block', 'Latest Blog', 'block_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Latest Blog';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'blog';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['pager']['options']['offset'] = '0';
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
);
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);

/* Display: Latest Events */
$handler = $view->new_display('block', 'Latest Events', 'block_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Latest Events';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Field: Date -  start date (field_date) */
$handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
$handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
$handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
$handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
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

/* Display: Latest News */
$handler = $view->new_display('block', 'Latest News', 'block_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Latest News';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '4';
$handler->display->display_options['pager']['options']['offset'] = '0';
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
  'news' => 'news',
);
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
);

/* Display: Partners */
$handler = $view->new_display('block', 'Partners', 'block_4');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Partners';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'partners';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '8';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'grid';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'node';
$handler->display->display_options['row_options']['links'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
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
  'organization' => 'organization',
);
/* Filter criterion: Content: Organization relationship (field_organization_relationship) */
$handler->display->display_options['filters']['field_organization_relationship_tid']['id'] = 'field_organization_relationship_tid';
$handler->display->display_options['filters']['field_organization_relationship_tid']['table'] = 'field_data_field_organization_relationship';
$handler->display->display_options['filters']['field_organization_relationship_tid']['field'] = 'field_organization_relationship_tid';
$handler->display->display_options['filters']['field_organization_relationship_tid']['value'] = array(
  6119 => '6119',
);
$handler->display->display_options['filters']['field_organization_relationship_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_organization_relationship_tid']['vocabulary'] = 'organization_relation';

/* Display: Library */
$handler = $view->new_display('block', 'Library', 'block_5');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Library';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'clearfix';
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['use_more_text'] = 'Find more resources in the Land Library';
$handler->display->display_options['defaults']['link_display'] = FALSE;
$handler->display->display_options['link_display'] = 'custom_url';
$handler->display->display_options['defaults']['exposed_form'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '6';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'node';
$handler->display->display_options['row_options']['links'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
/* Footer: Global: Text area */
$handler->display->display_options['footer']['area']['id'] = 'area';
$handler->display->display_options['footer']['area']['table'] = 'views';
$handler->display->display_options['footer']['area']['field'] = 'area';
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'Currently there are no resources in the Land Library for this country. <a href=" /library/contribute">Help us populate the Land Library by contributing!</a>';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Date of publication (field_doc_creation_date) */
$handler->display->display_options['sorts']['field_doc_creation_date_value']['id'] = 'field_doc_creation_date_value';
$handler->display->display_options['sorts']['field_doc_creation_date_value']['table'] = 'field_data_field_doc_creation_date';
$handler->display->display_options['sorts']['field_doc_creation_date_value']['field'] = 'field_doc_creation_date_value';
$handler->display->display_options['sorts']['field_doc_creation_date_value']['order'] = 'DESC';
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
/* Filter criterion: Content: Resource type (field_doc_type) */
$handler->display->display_options['filters']['field_doc_type_tid']['id'] = 'field_doc_type_tid';
$handler->display->display_options['filters']['field_doc_type_tid']['table'] = 'field_data_field_doc_type';
$handler->display->display_options['filters']['field_doc_type_tid']['field'] = 'field_doc_type_tid';
$handler->display->display_options['filters']['field_doc_type_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_doc_type_tid']['expose']['operator_id'] = 'field_doc_type_tid_op';
$handler->display->display_options['filters']['field_doc_type_tid']['expose']['operator'] = 'field_doc_type_tid_op';
$handler->display->display_options['filters']['field_doc_type_tid']['expose']['identifier'] = 'field_doc_type_tid';
$handler->display->display_options['filters']['field_doc_type_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_doc_type_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_doc_type_tid']['vocabulary'] = 'landlibrary_resource_type';
$handler->display->display_options['filters']['field_doc_type_tid']['hierarchy'] = 1;
/* Filter criterion: Content: Date of publication (field_doc_creation_date) */
$handler->display->display_options['filters']['field_doc_creation_date_value']['id'] = 'field_doc_creation_date_value';
$handler->display->display_options['filters']['field_doc_creation_date_value']['table'] = 'field_data_field_doc_creation_date';
$handler->display->display_options['filters']['field_doc_creation_date_value']['field'] = 'field_doc_creation_date_value';
$handler->display->display_options['filters']['field_doc_creation_date_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_doc_creation_date_value']['expose']['operator_id'] = 'field_doc_creation_date_value_op';
$handler->display->display_options['filters']['field_doc_creation_date_value']['expose']['operator'] = 'field_doc_creation_date_value_op';
$handler->display->display_options['filters']['field_doc_creation_date_value']['expose']['identifier'] = 'field_doc_creation_date_value';
$handler->display->display_options['filters']['field_doc_creation_date_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_doc_creation_date_value']['granularity'] = 'year';
$handler->display->display_options['filters']['field_doc_creation_date_value']['year_range'] = '-26:+0';
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
/* Filter criterion: Content: Publisher (field_doc_publisher) (reference filter) */
$handler->display->display_options['filters']['field_doc_publisher_target_id_entityreference_filter']['id'] = 'field_doc_publisher_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_doc_publisher_target_id_entityreference_filter']['table'] = 'field_data_field_doc_publisher';
$handler->display->display_options['filters']['field_doc_publisher_target_id_entityreference_filter']['field'] = 'field_doc_publisher_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_doc_publisher_target_id_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_doc_publisher_target_id_entityreference_filter']['expose']['operator_id'] = 'field_doc_publisher_target_id_entityreference_filter_op';
$handler->display->display_options['filters']['field_doc_publisher_target_id_entityreference_filter']['expose']['operator'] = 'field_doc_publisher_target_id_entityreference_filter_op';
$handler->display->display_options['filters']['field_doc_publisher_target_id_entityreference_filter']['expose']['identifier'] = 'field_doc_publisher_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_doc_publisher_target_id_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_doc_publisher_target_id_entityreference_filter']['reference_display'] = 'organizations:ref_all';
$handler->display->display_options['block_caching'] = '-1';
