<?php

$view = new view();
$view->name = 'org_ref';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Organization ref';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['link_display'] = 'custom_url';
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Taxonomy term: Content with term */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
$handler->display->display_options['relationships']['nid']['required'] = TRUE;
/* Relationship: Taxonomy term: Parent term */
$handler->display->display_options['relationships']['parent']['id'] = 'parent';
$handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['relationships']['parent']['field'] = 'parent';
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = 'TID';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid_1']['field'] = 'tid';
$handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
$handler->display->display_options['fields']['tid_1']['label'] = 'PID';
$handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid_1']['separator'] = '';
/* Field: Taxonomy term: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['prefix'] = '(';
$handler->display->display_options['fields']['nid']['suffix'] = ')';
/* Sort criterion: Taxonomy term: Weight */
$handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
$handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
/* Sort criterion: Taxonomy term: Hierarchical weight */
$handler->display->display_options['sorts']['hweight']['id'] = 'hweight';
$handler->display->display_options['sorts']['hweight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['hweight']['field'] = 'hweight';
/* Contextual filter: Taxonomy vocabulary: Machine name */
$handler->display->display_options['arguments']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['arguments']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['arguments']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['arguments']['machine_name']['default_action'] = 'not found';
$handler->display->display_options['arguments']['machine_name']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['machine_name']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['machine_name']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['machine_name']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['machine_name']['limit'] = '0';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'nid';
$handler->display->display_options['filters']['type']['value'] = array(
  'organization' => 'organization',
);
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['relationship'] = 'nid';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);

/* Display: Tree */
$handler = $view->new_display('block', 'Tree', 'tree');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'tree';
$handler->display->display_options['style_options']['main_field'] = 'tid';
$handler->display->display_options['style_options']['parent_field'] = 'tid_1';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;

/* Display: Jump to */
$handler = $view->new_display('block', 'Jump to', 'jump');
$handler->display->display_options['link_url'] = 'organizations';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'jump_menu';
$handler->display->display_options['style_options']['hide'] = TRUE;
$handler->display->display_options['style_options']['path'] = 'path';
$handler->display->display_options['style_options']['inline'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;

/* Display: By types */
$handler = $view->new_display('block', 'By types', 'jump_types');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'By type of organization';
$handler->display->display_options['link_url'] = 'organizations';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'jump_menu';
$handler->display->display_options['style_options']['hide'] = TRUE;
$handler->display->display_options['style_options']['path'] = 'path';
$handler->display->display_options['style_options']['inline'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy vocabulary: Machine name */
$handler->display->display_options['arguments']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['arguments']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['arguments']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['arguments']['machine_name']['default_action'] = 'default';
$handler->display->display_options['arguments']['machine_name']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['machine_name']['default_argument_options']['argument'] = 'organization_types';
$handler->display->display_options['arguments']['machine_name']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['machine_name']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['machine_name']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['machine_name']['limit'] = '0';

/* Display: By geographical focus */
$handler = $view->new_display('block', 'By geographical focus', 'jump_geo');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'By geographical focus';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'jump_menu';
$handler->display->display_options['style_options']['hide'] = TRUE;
$handler->display->display_options['style_options']['path'] = 'path';
$handler->display->display_options['style_options']['inline'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = 'TID';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid_1']['field'] = 'tid';
$handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
$handler->display->display_options['fields']['tid_1']['label'] = 'PID';
$handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid_1']['separator'] = '';
/* Field: Taxonomy term: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['path']['alter']['text'] = 'countries/[tid]/organization';
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['prefix'] = '(';
$handler->display->display_options['fields']['nid']['suffix'] = ')';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy vocabulary: Machine name */
$handler->display->display_options['arguments']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['arguments']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['arguments']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['arguments']['machine_name']['default_action'] = 'default';
$handler->display->display_options['arguments']['machine_name']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['machine_name']['default_argument_options']['argument'] = 'regions';
$handler->display->display_options['arguments']['machine_name']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['machine_name']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['machine_name']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['machine_name']['limit'] = '0';

/* Display: By Issue */
$handler = $view->new_display('block', 'By Issue', 'jump_themes');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'By issue';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'jump_menu';
$handler->display->display_options['style_options']['hide'] = TRUE;
$handler->display->display_options['style_options']['path'] = 'path';
$handler->display->display_options['style_options']['inline'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = 'TID';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid_1']['field'] = 'tid';
$handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
$handler->display->display_options['fields']['tid_1']['label'] = 'PID';
$handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid_1']['separator'] = '';
/* Field: Taxonomy term: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['path']['alter']['text'] = 'issues/[tid]/organization';
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['prefix'] = '(';
$handler->display->display_options['fields']['nid']['suffix'] = ')';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy vocabulary: Machine name */
$handler->display->display_options['arguments']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['arguments']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['arguments']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['arguments']['machine_name']['default_action'] = 'default';
$handler->display->display_options['arguments']['machine_name']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['machine_name']['default_argument_options']['argument'] = 'themes';
$handler->display->display_options['arguments']['machine_name']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['machine_name']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['machine_name']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['machine_name']['limit'] = '0';

