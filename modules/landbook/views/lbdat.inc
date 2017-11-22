<?php

$view = new view();
$view->name = 'lbdat';
$view->description = 'Provide ref and base views for dataset based lists';
$view->tag = 'taxonomy, landbook';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Land Book Datasets ref';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = '<none>';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter indicators';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset filters';
$handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'php' => 'php',
  'name' => 'name',
);
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['path'] = 'book/indicators/[field_id]';
$handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Sort criterion: Taxonomy term: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['name']['field'] = 'name';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'datasets' => 'datasets',
);
$handler->display->display_options['filters']['machine_name']['group'] = 1;

/* Display: RefID */
$handler = $view->new_display('entityreference', 'RefID', 'refid');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['display_description'] = 'LB datasets ref';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'tid' => 'tid',
  'name' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';

/* Display: Ref Datasets */
$handler = $view->new_display('entityreference', 'Ref Datasets', 'ref');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['display_description'] = 'LB datasets ref list';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'name' => 'name',
  'tid' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;

/* Display: Ref Theme */
$handler = $view->new_display('entityreference', 'Ref Theme', 'ref_theme');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'name' => 'name',
  'tid' => 0,
  'path' => 0,
  'field_id' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Taxonomy term: Taxonomy term using Themes */
$handler->display->display_options['relationships']['reverse_field_related_themes_taxonomy_term']['id'] = 'reverse_field_related_themes_taxonomy_term';
$handler->display->display_options['relationships']['reverse_field_related_themes_taxonomy_term']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_related_themes_taxonomy_term']['field'] = 'reverse_field_related_themes_taxonomy_term';
$handler->display->display_options['relationships']['reverse_field_related_themes_taxonomy_term']['label'] = 'dataset';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['path'] = 'book/indicators/[field_id]';
$handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid_1']['field'] = 'tid';
$handler->display->display_options['fields']['tid_1']['relationship'] = 'reverse_field_related_themes_taxonomy_term';
$handler->display->display_options['fields']['tid_1']['group_type'] = 'count';
$handler->display->display_options['fields']['tid_1']['label'] = '';
$handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Taxonomy term: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['name']['field'] = 'name';
$handler->display->display_options['sorts']['name']['relationship'] = 'field_related_themes_tid';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'themes' => 'themes',
);
/* Filter criterion: Taxonomy term: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['relationship'] = 'reverse_field_related_themes_taxonomy_term';
$handler->display->display_options['filters']['vid']['value'] = array(
  24 => '24',
);

/* Display: Ref Indicators */
$handler = $view->new_display('entityreference', 'Ref Indicators', 'ref_indicators');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['query'] = FALSE;
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['contextual_filters_or'] = TRUE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'name' => 'name',
  'tid' => 0,
  'path' => 0,
  'field_id' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Taxonomy term: Taxonomy term using Dataset */
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['id'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['field'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['label'] = 'indicators';
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['required'] = TRUE;
/* Relationship: Taxonomy term: Parent term */
$handler->display->display_options['relationships']['parent']['id'] = 'parent';
$handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['relationships']['parent']['field'] = 'parent';
$handler->display->display_options['relationships']['parent']['relationship'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['relationship'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['path'] = 'book/indicators/[field_id]';
$handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Taxonomy term: Hierarchical weight */
$handler->display->display_options['sorts']['hweight']['id'] = 'hweight';
$handler->display->display_options['sorts']['hweight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['hweight']['field'] = 'hweight';
$handler->display->display_options['sorts']['hweight']['relationship'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: Term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['default_action'] = 'empty';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'datasets' => 'datasets',
);

/* Display: Ref Ind */
$handler = $view->new_display('entityreference', 'Ref Ind', 'ref_ind');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['query'] = FALSE;
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['contextual_filters_or'] = TRUE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'tid' => 'tid',
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Taxonomy term: Taxonomy term using Dataset */
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['id'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['field'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['label'] = 'indicators';
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['required'] = TRUE;
/* Relationship: Taxonomy term: Parent term */
$handler->display->display_options['relationships']['parent']['id'] = 'parent';
$handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['relationships']['parent']['field'] = 'parent';
$handler->display->display_options['relationships']['parent']['relationship'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['relationship'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Taxonomy term: Hierarchical weight */
$handler->display->display_options['sorts']['hweight']['id'] = 'hweight';
$handler->display->display_options['sorts']['hweight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['hweight']['field'] = 'hweight';
$handler->display->display_options['sorts']['hweight']['relationship'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: Term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'datasets' => 'datasets',
);

/* Display: Dataset teaser (from Node) */
$handler = $view->new_display('block', 'Dataset teaser (from Node)', 'catalog');
$handler->display->display_options['enabled'] = FALSE;
$handler->display->display_options['defaults']['query'] = FALSE;
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['contextual_filters_or'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'header';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Taxonomy term: Content using Catalog */
$handler->display->display_options['relationships']['reverse_field_catalog_node']['id'] = 'reverse_field_catalog_node';
$handler->display->display_options['relationships']['reverse_field_catalog_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_catalog_node']['field'] = 'reverse_field_catalog_node';
$handler->display->display_options['relationships']['reverse_field_catalog_node']['label'] = 'ds';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['path'] = 'book/indicators/[field_id]';
$handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Rendered Taxonomy term */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_taxonomy_term';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_catalog_node';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

/* Display: Indicator or Dataset */
$handler = $view->new_display('block', 'Indicator or Dataset', 'jump');
$handler->display->display_options['defaults']['query'] = FALSE;
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['contextual_filters_or'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Taxonomy term: Taxonomy term using Dataset */
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['id'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['field'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['label'] = 'indicators';
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Global: View */
$handler->display->display_options['fields']['view']['id'] = 'view';
$handler->display->display_options['fields']['view']['table'] = 'views';
$handler->display->display_options['fields']['view']['field'] = 'view';
$handler->display->display_options['fields']['view']['label'] = '';
$handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view']['view'] = 'lbdat';
$handler->display->display_options['fields']['view']['display'] = 'menu_ind';
$handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
$handler->display->display_options['defaults']['sorts'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: Term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
$handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
/* Contextual filter: Taxonomy term: Term ID */
$handler->display->display_options['arguments']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['arguments']['tid_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['arguments']['tid_1']['field'] = 'tid';
$handler->display->display_options['arguments']['tid_1']['relationship'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['arguments']['tid_1']['default_action'] = 'default';
$handler->display->display_options['arguments']['tid_1']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['tid_1']['default_argument_options']['node'] = TRUE;
$handler->display->display_options['arguments']['tid_1']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid_1']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid_1']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'datasets' => 'datasets',
);
$handler->display->display_options['filters']['machine_name']['group'] = 1;

/* Display: Indicators menu */
$handler = $view->new_display('block', 'Indicators menu', 'menu_ind');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'jump_menu';
$handler->display->display_options['style_options']['hide'] = TRUE;
$handler->display->display_options['style_options']['path'] = 'path';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'php' => 'php',
  'name' => 'name',
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Taxonomy term: Taxonomy term using Dataset */
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['id'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['field'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['label'] = 'indicators';
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Taxonomy term: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['relationship'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Hierarchical depth */
$handler->display->display_options['fields']['hdepth']['id'] = 'hdepth';
$handler->display->display_options['fields']['hdepth']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['hdepth']['field'] = 'hdepth';
$handler->display->display_options['fields']['hdepth']['relationship'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['fields']['hdepth']['label'] = '';
$handler->display->display_options['fields']['hdepth']['exclude'] = TRUE;
$handler->display->display_options['fields']['hdepth']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['hdepth']['separator'] = '';
/* Field: Global: PHP */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['label'] = '';
$handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_value'] = '$out = \'\';
for ($i=0; $i < $row->hdepth; $i++) {
$out .=  \' - \';
}
return $out;';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['path'] = 'book/indicators/[field_id]';
$handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid_1']['field'] = 'tid';
$handler->display->display_options['fields']['tid_1']['relationship'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['fields']['tid_1']['label'] = '';
$handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid_1']['separator'] = '';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Taxonomy term: Hierarchical weight */
$handler->display->display_options['sorts']['hweight']['id'] = 'hweight';
$handler->display->display_options['sorts']['hweight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['hweight']['field'] = 'hweight';
$handler->display->display_options['sorts']['hweight']['relationship'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: Term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
$handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'datasets' => 'datasets',
);
$handler->display->display_options['filters']['machine_name']['group'] = 1;
/* Filter criterion: Taxonomy term: Hierarchical depth */
$handler->display->display_options['filters']['hdepth']['id'] = 'hdepth';
$handler->display->display_options['filters']['hdepth']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['hdepth']['field'] = 'hdepth';
$handler->display->display_options['filters']['hdepth']['relationship'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['filters']['hdepth']['operator'] = '<=';
$handler->display->display_options['filters']['hdepth']['value']['value'] = '0';
$handler->display->display_options['filters']['hdepth']['group'] = 1;
$handler->display->display_options['filters']['hdepth']['expose']['operator_id'] = 'hdepth_op';
$handler->display->display_options['filters']['hdepth']['expose']['label'] = 'Hierarchical depth';
$handler->display->display_options['filters']['hdepth']['expose']['operator'] = 'hdepth_op';
$handler->display->display_options['filters']['hdepth']['expose']['identifier'] = 'hdepth';

