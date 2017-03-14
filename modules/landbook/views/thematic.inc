<?php

$view = new view();
$view->name = 'thematic';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Thematic';
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
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'no concepts found
!1 | [name]';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_landvoc_to_node']['id'] = 'reverse_field_landvoc_to_node';
$handler->display->display_options['relationships']['reverse_field_landvoc_to_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_landvoc_to_node']['field'] = 'reverse_field_landvoc_to_node';
$handler->display->display_options['relationships']['reverse_field_landvoc_to_node']['label'] = 'narrative';
$handler->display->display_options['relationships']['reverse_field_landvoc_to_node']['required'] = TRUE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_landvoc_to_node';
$handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'overarching_categories' => 'overarching_categories',
  'themes' => 'themes',
);

/* Display: Ref Concepts */
$handler = $view->new_display('entityreference', 'Ref Concepts', 'ref_concepts');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'name' => 'name',
  'name_field' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Taxonomy term: Taxonomy term using Related concepts */
$handler->display->display_options['relationships']['reverse_field_related_topics_taxonomy_term']['id'] = 'reverse_field_related_topics_taxonomy_term';
$handler->display->display_options['relationships']['reverse_field_related_topics_taxonomy_term']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_related_topics_taxonomy_term']['field'] = 'reverse_field_related_topics_taxonomy_term';
$handler->display->display_options['relationships']['reverse_field_related_topics_taxonomy_term']['label'] = 'theme';
$handler->display->display_options['relationships']['reverse_field_related_topics_taxonomy_term']['required'] = TRUE;
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_landvoc_to_node']['id'] = 'reverse_field_landvoc_to_node';
$handler->display->display_options['relationships']['reverse_field_landvoc_to_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_landvoc_to_node']['field'] = 'reverse_field_landvoc_to_node';
$handler->display->display_options['relationships']['reverse_field_landvoc_to_node']['relationship'] = 'reverse_field_related_topics_taxonomy_term';
$handler->display->display_options['relationships']['reverse_field_landvoc_to_node']['label'] = 'narrative';
$handler->display->display_options['relationships']['reverse_field_landvoc_to_node']['required'] = TRUE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'landvoc_concepts' => 'landvoc_concepts',
);

/* Display: Ref Theme */
$handler = $view->new_display('entityreference', 'Ref Theme', 'ref_theme');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'name' => 'name',
  'name_field' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
