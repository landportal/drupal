<?php

$view = new view();
$view->name = 'admin_views_geo_term_content';
$view->description = 'Overview of content by type and geography.';
$view->tag = 'admin';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Administration: Content by type and geography';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Terms';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'menu';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['pager']['type'] = 'mini';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '20, 50, 100, 200';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'name_1' => 'name_1',
  'draggableviews' => 'draggableviews',
  'name' => 'name',
  'nid' => 'nid',
  'tid' => 'tid',
  'views_bulk_operations' => 'views_bulk_operations',
  'field_iso3' => 'field_iso3',
);
$handler->display->display_options['style_options']['default'] = 'name';
$handler->display->display_options['style_options']['info'] = array(
  'name_1' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'draggableviews' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'nid' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'tid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_iso3' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
/* Relationship: Taxonomy term: Content using Geographical focus */
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['id'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['field'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['label'] = 'geo';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['required'] = TRUE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = 'Term';
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['relationship'] = 'reverse_field_geographical_focus_node';
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = 'count';
/* Sort criterion: Taxonomy term: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['name']['field'] = 'name';
/* Filter criterion: Taxonomy term: Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'word';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember'] = TRUE;
/* Filter criterion: Taxonomy term: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['value'] = array(
  7 => '7',
);
$handler->display->display_options['filters']['vid']['group'] = 1;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['filters']['type']['exposed'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);

/* Display: System */
$handler = $view->new_display('system', 'System', 'system_all');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['path'] = 'admin/structure/taxonomy/geo/count';

/* Display: System LLR */
$handler = $view->new_display('system', 'System LLR', 'system_llr');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Taxonomy term: Content using Geographical focus */
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['id'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['field'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['label'] = 'geo';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['required'] = TRUE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_doc_publisher_target_id']['id'] = 'field_doc_publisher_target_id';
$handler->display->display_options['relationships']['field_doc_publisher_target_id']['table'] = 'field_data_field_doc_publisher';
$handler->display->display_options['relationships']['field_doc_publisher_target_id']['field'] = 'field_doc_publisher_target_id';
$handler->display->display_options['relationships']['field_doc_publisher_target_id']['relationship'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['relationships']['field_doc_publisher_target_id']['label'] = 'publisher';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_doc_provider_target_id']['id'] = 'field_doc_provider_target_id';
$handler->display->display_options['relationships']['field_doc_provider_target_id']['table'] = 'field_data_field_doc_provider';
$handler->display->display_options['relationships']['field_doc_provider_target_id']['field'] = 'field_doc_provider_target_id';
$handler->display->display_options['relationships']['field_doc_provider_target_id']['relationship'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['relationships']['field_doc_provider_target_id']['label'] = 'provider';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = 'Term';
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: COUNT(Content: Nid) */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['relationship'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['fields']['nid_1']['group_type'] = 'count';
$handler->display->display_options['fields']['nid_1']['label'] = 'LLR';
$handler->display->display_options['fields']['nid_1']['separator'] = '';
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'field_doc_publisher_target_id';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = 'Publisher';
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
$handler->display->display_options['fields']['nid_2']['table'] = 'node';
$handler->display->display_options['fields']['nid_2']['field'] = 'nid';
$handler->display->display_options['fields']['nid_2']['relationship'] = 'field_doc_provider_target_id';
$handler->display->display_options['fields']['nid_2']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid_2']['label'] = 'Provider';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Taxonomy term: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['name']['field'] = 'name';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy term: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['value'] = array(
  7 => '7',
);
$handler->display->display_options['filters']['vid']['group'] = 1;
/* Filter criterion: Taxonomy term: Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'word';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember'] = TRUE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['filters']['type']['value'] = array(
  'landlibrary_resource' => 'landlibrary_resource',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['path'] = 'admin/structure/taxonomy/geo/library';

/* Display: System FULL */
$handler = $view->new_display('system', 'System FULL', 'system_borken');
$handler->display->display_options['enabled'] = FALSE;
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['defaults']['query'] = FALSE;
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'mini';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '20, 50, 100, 200';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Taxonomy term: Content using Geographical focus */
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['id'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['field'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['label'] = 'news';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['required'] = TRUE;
/* Relationship: Taxonomy term: Content using Geographical focus */
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node_1']['id'] = 'reverse_field_geographical_focus_node_1';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node_1']['field'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node_1']['label'] = 'debates';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node_1']['required'] = TRUE;
/* Relationship: Taxonomy term: Content using Geographical focus */
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node_2']['id'] = 'reverse_field_geographical_focus_node_2';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node_2']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node_2']['field'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node_2']['label'] = 'blogs';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node_2']['required'] = TRUE;
/* Relationship: Taxonomy term: Content using Geographical focus */
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node_3']['id'] = 'reverse_field_geographical_focus_node_3';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node_3']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node_3']['field'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node_3']['label'] = 'events';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node_3']['required'] = TRUE;
/* Relationship: Taxonomy term: Content using Geographical focus */
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node_4']['id'] = 'reverse_field_geographical_focus_node_4';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node_4']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node_4']['field'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node_4']['label'] = 'org';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node_4']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = 'Term';
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['relationship'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['fields']['nid_1']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid_1']['label'] = 'Geo';
$handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
$handler->display->display_options['fields']['nid_2']['table'] = 'node';
$handler->display->display_options['fields']['nid_2']['field'] = 'nid';
$handler->display->display_options['fields']['nid_2']['relationship'] = 'reverse_field_geographical_focus_node_1';
$handler->display->display_options['fields']['nid_2']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid_2']['label'] = 'Geo';
$handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid_3']['id'] = 'nid_3';
$handler->display->display_options['fields']['nid_3']['table'] = 'node';
$handler->display->display_options['fields']['nid_3']['field'] = 'nid';
$handler->display->display_options['fields']['nid_3']['relationship'] = 'reverse_field_geographical_focus_node_2';
$handler->display->display_options['fields']['nid_3']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid_3']['label'] = 'Geo';
$handler->display->display_options['fields']['nid_3']['exclude'] = TRUE;
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid_4']['id'] = 'nid_4';
$handler->display->display_options['fields']['nid_4']['table'] = 'node';
$handler->display->display_options['fields']['nid_4']['field'] = 'nid';
$handler->display->display_options['fields']['nid_4']['relationship'] = 'reverse_field_geographical_focus_node_3';
$handler->display->display_options['fields']['nid_4']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid_4']['label'] = 'Geo';
$handler->display->display_options['fields']['nid_4']['exclude'] = TRUE;
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid_5']['id'] = 'nid_5';
$handler->display->display_options['fields']['nid_5']['table'] = 'node';
$handler->display->display_options['fields']['nid_5']['field'] = 'nid';
$handler->display->display_options['fields']['nid_5']['relationship'] = 'reverse_field_geographical_focus_node_4';
$handler->display->display_options['fields']['nid_5']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid_5']['label'] = 'Geo';
$handler->display->display_options['fields']['nid_5']['exclude'] = TRUE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy term: Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'word';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember'] = TRUE;
/* Filter criterion: Taxonomy term: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['value'] = array(
  7 => '7',
);
$handler->display->display_options['filters']['vid']['group'] = 1;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type_4';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_geographical_focus_node_4';
$handler->display->display_options['filters']['type']['value'] = array(
  'organization' => 'organization',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type_1']['id'] = 'type_1';
$handler->display->display_options['filters']['type_1']['table'] = 'node';
$handler->display->display_options['filters']['type_1']['field'] = 'type';
$handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['filters']['type_1']['value'] = array(
  'news' => 'news',
);
$handler->display->display_options['filters']['type_1']['group'] = 1;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type_2']['id'] = 'type_2';
$handler->display->display_options['filters']['type_2']['table'] = 'node';
$handler->display->display_options['filters']['type_2']['field'] = 'type';
$handler->display->display_options['filters']['type_2']['relationship'] = 'reverse_field_geographical_focus_node_1';
$handler->display->display_options['filters']['type_2']['value'] = array(
  'debate' => 'debate',
);
$handler->display->display_options['filters']['type_2']['group'] = 1;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type_3']['id'] = 'type_3';
$handler->display->display_options['filters']['type_3']['table'] = 'node';
$handler->display->display_options['filters']['type_3']['field'] = 'type';
$handler->display->display_options['filters']['type_3']['relationship'] = 'reverse_field_geographical_focus_node_3';
$handler->display->display_options['filters']['type_3']['value'] = array(
  'event' => 'event',
);
$handler->display->display_options['filters']['type_3']['group'] = 1;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type_4']['id'] = 'type_4';
$handler->display->display_options['filters']['type_4']['table'] = 'node';
$handler->display->display_options['filters']['type_4']['field'] = 'type';
$handler->display->display_options['filters']['type_4']['relationship'] = 'reverse_field_geographical_focus_node_2';
$handler->display->display_options['filters']['type_4']['value'] = array(
  'blog_post' => 'blog_post',
);
$handler->display->display_options['filters']['type_4']['group'] = 1;
$handler->display->display_options['path'] = 'admin/structure/borken';
