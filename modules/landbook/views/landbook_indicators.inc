<?php

$view = new view();
$view->name = 'landbook_indicators';
$view->description = '';
$view->tag = 'taxonomy, landbook';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Landbook Indicators';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Landbook Indicators';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Taxonomy term: Rendered Taxonomy term */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_taxonomy_term';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
/* Field: Taxonomy term: Rendered Taxonomy term */
$handler->display->display_options['fields']['rendered_entity_1']['id'] = 'rendered_entity_1';
$handler->display->display_options['fields']['rendered_entity_1']['table'] = 'views_entity_taxonomy_term';
$handler->display->display_options['fields']['rendered_entity_1']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity_1']['relationship'] = 'field_dataset_tid';
$handler->display->display_options['fields']['rendered_entity_1']['label'] = 'Dataset';
$handler->display->display_options['fields']['rendered_entity_1']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity_1']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity_1']['view_mode'] = 'search_index';
$handler->display->display_options['fields']['rendered_entity_1']['bypass_access'] = 0;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'indicators' => 'indicators',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');

/* Display: Page */
$handler = $view->new_display('page', 'Page indicators', 'page');
$handler->display->display_options['path'] = 'book/indicators';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Indicators';
$handler->display->display_options['menu']['weight'] = '3';
$handler->display->display_options['menu']['name'] = 'landbook-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Page indicator */
$handler = $view->new_display('page', 'Page indicator', 'page_1');
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Taxonomy term: Dataset (field_dataset) */
$handler->display->display_options['relationships']['field_dataset_tid']['id'] = 'field_dataset_tid';
$handler->display->display_options['relationships']['field_dataset_tid']['table'] = 'field_data_field_dataset';
$handler->display->display_options['relationships']['field_dataset_tid']['field'] = 'field_dataset_tid';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: ID (field_id) */
$handler->display->display_options['arguments']['field_id_value']['id'] = 'field_id_value';
$handler->display->display_options['arguments']['field_id_value']['table'] = 'field_data_field_id';
$handler->display->display_options['arguments']['field_id_value']['field'] = 'field_id_value';
$handler->display->display_options['arguments']['field_id_value']['default_action'] = 'empty';
$handler->display->display_options['arguments']['field_id_value']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_id_value']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_id_value']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_id_value']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_id_value']['limit'] = '0';
$handler->display->display_options['path'] = 'book/indicator/%';
