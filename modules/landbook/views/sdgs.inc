<?php

$view = new view();
$view->name = 'sdgs';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'SDGs';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = '<none>';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = '[tid]';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_sdgs_type' => 'field_sdgs_type',
  'field_id' => 'field_id',
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
/* Field: Taxonomy term: Type */
$handler->display->display_options['fields']['field_sdgs_type']['id'] = 'field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['table'] = 'field_data_field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['field'] = 'field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['label'] = '';
$handler->display->display_options['fields']['field_sdgs_type']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_sdgs_type']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: ID */
$handler->display->display_options['fields']['field_id']['id'] = 'field_id';
$handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
$handler->display->display_options['fields']['field_id']['field'] = 'field_id';
$handler->display->display_options['fields']['field_id']['label'] = '';
$handler->display->display_options['fields']['field_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_id']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['text'] = '[field_sdgs_type] [field_id]: [name]';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Sort criterion: Taxonomy term: Term hierarchy */
$handler->display->display_options['sorts']['hierarchy_sort']['id'] = 'hierarchy_sort';
$handler->display->display_options['sorts']['hierarchy_sort']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['hierarchy_sort']['field'] = 'hierarchy_sort';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'sdgs' => 'sdgs',
);

/* Display: Goals */
$handler = $view->new_display('block', 'Goals', 'block_sdgs');
$handler->display->display_options['display_description'] = 'SDG accordion with Goals, Targets and Indicators';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_accordion_plugin_style';
$handler->display->display_options['style_options']['row_class'] = 'goal-[tid]';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['style_options']['title_field'] = 'name';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Type */
$handler->display->display_options['fields']['field_sdgs_type']['id'] = 'field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['table'] = 'field_data_field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['field'] = 'field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['label'] = '';
$handler->display->display_options['fields']['field_sdgs_type']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_sdgs_type']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Taxonomy term: ID */
$handler->display->display_options['fields']['field_id']['id'] = 'field_id';
$handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
$handler->display->display_options['fields']['field_id']['field'] = 'field_id';
$handler->display->display_options['fields']['field_id']['label'] = '';
$handler->display->display_options['fields']['field_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_id']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['text'] = '<span>[field_sdgs_type] [field_id]</span>: [name]';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Global: View */
$handler->display->display_options['fields']['view']['id'] = 'view';
$handler->display->display_options['fields']['view']['table'] = 'views';
$handler->display->display_options['fields']['view']['field'] = 'view';
$handler->display->display_options['fields']['view']['label'] = '';
$handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['view']['view'] = 'sdgs';
$handler->display->display_options['fields']['view']['display'] = 'targets';
$handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'sdgs' => 'sdgs',
);
/* Filter criterion: Taxonomy term: Parent term */
$handler->display->display_options['filters']['parent']['id'] = 'parent';
$handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['filters']['parent']['field'] = 'parent';

/* Display: Targets */
$handler = $view->new_display('block', 'Targets', 'targets');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'target-[tid]';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_sdgs_type' => 'field_sdgs_type',
  'field_id' => 'field_id',
  'name' => 'name',
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Taxonomy term: Type */
$handler->display->display_options['fields']['field_sdgs_type']['id'] = 'field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['table'] = 'field_data_field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['field'] = 'field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['label'] = '';
$handler->display->display_options['fields']['field_sdgs_type']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_sdgs_type']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: ID */
$handler->display->display_options['fields']['field_id']['id'] = 'field_id';
$handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
$handler->display->display_options['fields']['field_id']['field'] = 'field_id';
$handler->display->display_options['fields']['field_id']['label'] = '';
$handler->display->display_options['fields']['field_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_id']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_id']['alter']['text'] = '[field_sdgs_type] [field_id]';
$handler->display->display_options['fields']['field_id']['element_label_colon'] = FALSE;
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
/* Field: Global: View */
$handler->display->display_options['fields']['view']['id'] = 'view';
$handler->display->display_options['fields']['view']['table'] = 'views';
$handler->display->display_options['fields']['view']['field'] = 'view';
$handler->display->display_options['fields']['view']['label'] = '';
$handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view']['view'] = 'sdgs';
$handler->display->display_options['fields']['view']['display'] = 'indicators';
$handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: Parent term */
$handler->display->display_options['arguments']['parent']['id'] = 'parent';
$handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['arguments']['parent']['field'] = 'parent';
$handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'sdgs' => 'sdgs',
);
/* Filter criterion: Taxonomy term: Parent term */
$handler->display->display_options['filters']['parent']['id'] = 'parent';
$handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['filters']['parent']['field'] = 'parent';
$handler->display->display_options['filters']['parent']['operator'] = '!=';
$handler->display->display_options['filters']['parent']['value']['value'] = '0';

/* Display: Indicators */
$handler = $view->new_display('block', 'Indicators', 'indicators');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'indicator-[tid]';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Taxonomy term: Content using SDG */
$handler->display->display_options['relationships']['reverse_field_sdg_node']['id'] = 'reverse_field_sdg_node';
$handler->display->display_options['relationships']['reverse_field_sdg_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_sdg_node']['field'] = 'reverse_field_sdg_node';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Taxonomy term: Type */
$handler->display->display_options['fields']['field_sdgs_type']['id'] = 'field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['table'] = 'field_data_field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['field'] = 'field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['label'] = '';
$handler->display->display_options['fields']['field_sdgs_type']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_sdgs_type']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: ID */
$handler->display->display_options['fields']['field_id']['id'] = 'field_id';
$handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
$handler->display->display_options['fields']['field_id']['field'] = 'field_id';
$handler->display->display_options['fields']['field_id']['label'] = '';
$handler->display->display_options['fields']['field_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_id']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Rendered Taxonomy term */
$handler->display->display_options['fields']['rendered_entity_1']['id'] = 'rendered_entity_1';
$handler->display->display_options['fields']['rendered_entity_1']['table'] = 'views_entity_taxonomy_term';
$handler->display->display_options['fields']['rendered_entity_1']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity_1']['label'] = '';
$handler->display->display_options['fields']['rendered_entity_1']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['rendered_entity_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity_1']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity_1']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity_1']['view_mode'] = 'teaser';
$handler->display->display_options['fields']['rendered_entity_1']['bypass_access'] = 0;
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['relationship'] = 'reverse_field_sdg_node';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_sdg_node';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = 'Read more';
$handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['nid']['element_class'] = 'node-readmore';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Taxonomy term: Term hierarchy */
$handler->display->display_options['sorts']['hierarchy_sort']['id'] = 'hierarchy_sort';
$handler->display->display_options['sorts']['hierarchy_sort']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['hierarchy_sort']['field'] = 'hierarchy_sort';
/* Sort criterion: Taxonomy term: Weight */
$handler->display->display_options['sorts']['weight']['id'] = 'weight';
$handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['weight']['field'] = 'weight';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: Parent term */
$handler->display->display_options['arguments']['parent']['id'] = 'parent';
$handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['arguments']['parent']['field'] = 'parent';
$handler->display->display_options['arguments']['parent']['default_action'] = 'empty';
$handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';

/* Display: SDGi Header */
$handler = $view->new_display('block', 'SDGi Header', 'sdgi_parents');
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: View area */
$handler->display->display_options['header']['view']['id'] = 'view';
$handler->display->display_options['header']['view']['table'] = 'views';
$handler->display->display_options['header']['view']['field'] = 'view';
$handler->display->display_options['header']['view']['view_to_insert'] = 'sdgi:block';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Taxonomy term: Content using SDG */
$handler->display->display_options['relationships']['reverse_field_sdg_node']['id'] = 'reverse_field_sdg_node';
$handler->display->display_options['relationships']['reverse_field_sdg_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_sdg_node']['field'] = 'reverse_field_sdg_node';
/* Relationship: Taxonomy term: Parent term */
$handler->display->display_options['relationships']['parent']['id'] = 'parent';
$handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['relationships']['parent']['field'] = 'parent';
$handler->display->display_options['relationships']['parent']['label'] = 'Target';
/* Relationship: Taxonomy term: Parent term */
$handler->display->display_options['relationships']['parent_1']['id'] = 'parent_1';
$handler->display->display_options['relationships']['parent_1']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['relationships']['parent_1']['field'] = 'parent';
$handler->display->display_options['relationships']['parent_1']['relationship'] = 'parent';
$handler->display->display_options['relationships']['parent_1']['label'] = 'Goal';
$handler->display->display_options['relationships']['parent_1']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'parent_1';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => '',
);
/* Field: Taxonomy term: Type */
$handler->display->display_options['fields']['field_sdgs_type']['id'] = 'field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['table'] = 'field_data_field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['field'] = 'field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['relationship'] = 'parent_1';
$handler->display->display_options['fields']['field_sdgs_type']['label'] = '';
$handler->display->display_options['fields']['field_sdgs_type']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_sdgs_type']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: ID */
$handler->display->display_options['fields']['field_id']['id'] = 'field_id';
$handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
$handler->display->display_options['fields']['field_id']['field'] = 'field_id';
$handler->display->display_options['fields']['field_id']['relationship'] = 'parent_1';
$handler->display->display_options['fields']['field_id']['label'] = '';
$handler->display->display_options['fields']['field_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_id']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'parent_1';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['text'] = '[field_sdgs_type] [field_id]: [name]';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_sdg_node';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

/* Display: Entity Reference */
$handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'field_sdgs_type' => 'field_sdgs_type',
  'field_id' => 'field_id',
  'name' => 'name',
  'tid' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Weight */
$handler->display->display_options['fields']['weight_1']['id'] = 'weight_1';
$handler->display->display_options['fields']['weight_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['weight_1']['field'] = 'weight';
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Taxonomy term: Type */
$handler->display->display_options['fields']['field_sdgs_type']['id'] = 'field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['table'] = 'field_data_field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['field'] = 'field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['label'] = '';
$handler->display->display_options['fields']['field_sdgs_type']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_sdgs_type']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: ID */
$handler->display->display_options['fields']['field_id']['id'] = 'field_id';
$handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
$handler->display->display_options['fields']['field_id']['field'] = 'field_id';
$handler->display->display_options['fields']['field_id']['label'] = '';
$handler->display->display_options['fields']['field_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_id']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['text'] = '[field_sdgs_type] [field_id]: [name]';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Taxonomy term: ID (field_id) */
$handler->display->display_options['sorts']['field_id_value']['id'] = 'field_id_value';
$handler->display->display_options['sorts']['field_id_value']['table'] = 'field_data_field_id';
$handler->display->display_options['sorts']['field_id_value']['field'] = 'field_id_value';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'status');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Status of Land-related indicators';
$handler->display->display_options['enabled'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'tid' => 'tid',
  'field_sdgs_type' => 'field_sdgs_type',
  'field_id' => 'field_id',
  'name' => 'name',
  'field_sdgs_tier' => 'field_sdgs_tier',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'tid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_sdgs_type' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_sdgs_tier' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['override'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Taxonomy term: Content using SDG */
$handler->display->display_options['relationships']['reverse_field_sdg_node']['id'] = 'reverse_field_sdg_node';
$handler->display->display_options['relationships']['reverse_field_sdg_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_sdg_node']['field'] = 'reverse_field_sdg_node';
$handler->display->display_options['relationships']['reverse_field_sdg_node']['label'] = 'sdgi';
$handler->display->display_options['relationships']['reverse_field_sdg_node']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['relationship'] = 'reverse_field_sdg_node';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Taxonomy term: Type */
$handler->display->display_options['fields']['field_sdgs_type']['id'] = 'field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['table'] = 'field_data_field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['field'] = 'field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['label'] = '';
$handler->display->display_options['fields']['field_sdgs_type']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_sdgs_type']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: ID */
$handler->display->display_options['fields']['field_id']['id'] = 'field_id';
$handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
$handler->display->display_options['fields']['field_id']['field'] = 'field_id';
$handler->display->display_options['fields']['field_id']['label'] = '';
$handler->display->display_options['fields']['field_id']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_id']['alter']['text'] = 'Indicator [field_id]';
$handler->display->display_options['fields']['field_id']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_id']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['field_id']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['text'] = '[field_sdgs_type] [field_id]: [name]';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Content: Tier */
$handler->display->display_options['fields']['field_sdgs_tier']['id'] = 'field_sdgs_tier';
$handler->display->display_options['fields']['field_sdgs_tier']['table'] = 'field_data_field_sdgs_tier';
$handler->display->display_options['fields']['field_sdgs_tier']['field'] = 'field_sdgs_tier';
$handler->display->display_options['fields']['field_sdgs_tier']['relationship'] = 'reverse_field_sdg_node';
$handler->display->display_options['fields']['field_sdgs_tier']['label'] = '';
$handler->display->display_options['fields']['field_sdgs_tier']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_sdgs_tier']['type'] = 'i18n_taxonomy_term_reference_plain';

/* Display: Grid */
$handler = $view->new_display('block', 'Grid', 'block_grid');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = 'The Sustainable Development Goals (SDGs) is a set of <b>17 "Global Goals"</b>. Five of the Goals are relevant to the Land Portal community.';
$handler->display->display_options['header']['area']['format'] = 'full_html';
$handler->display->display_options['defaults']['footer'] = FALSE;
/* Footer: Global: Text area */
$handler->display->display_options['footer']['area']['id'] = 'area';
$handler->display->display_options['footer']['area']['table'] = 'views';
$handler->display->display_options['footer']['area']['field'] = 'area';
$handler->display->display_options['footer']['area']['content'] = '<p>Each Goal has a series of <b>"Targets"</b>, in total there are 169 targets between all Goals. Each target has one or more <b>"Indicators"</b> that allow the world to measure progress against Targets and ultimately Goals.</p>
The Land Portal community is focused on <b>eight Targets</b>, each with one indicator and one with two.';
$handler->display->display_options['footer']['area']['format'] = 'full_html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => '',
);
/* Field: Taxonomy term: ID */
$handler->display->display_options['fields']['field_id']['id'] = 'field_id';
$handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
$handler->display->display_options['fields']['field_id']['field'] = 'field_id';
$handler->display->display_options['fields']['field_id']['label'] = '';
$handler->display->display_options['fields']['field_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_id']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Type */
$handler->display->display_options['fields']['field_sdgs_type']['id'] = 'field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['table'] = 'field_data_field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['field'] = 'field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['label'] = '';
$handler->display->display_options['fields']['field_sdgs_type']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_sdgs_type']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['text'] = '[field_sdgs_type] [field_id]: [name]';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Global: View */
$handler->display->display_options['fields']['view']['id'] = 'view';
$handler->display->display_options['fields']['view']['table'] = 'views';
$handler->display->display_options['fields']['view']['field'] = 'view';
$handler->display->display_options['fields']['view']['label'] = 'Indicators';
$handler->display->display_options['fields']['view']['view'] = 'sdgs';
$handler->display->display_options['fields']['view']['display'] = 'grid_ind';
$handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
/* Field: Global: View */
$handler->display->display_options['fields']['view_1']['id'] = 'view_1';
$handler->display->display_options['fields']['view_1']['table'] = 'views';
$handler->display->display_options['fields']['view_1']['field'] = 'view';
$handler->display->display_options['fields']['view_1']['label'] = 'Tiers';
$handler->display->display_options['fields']['view_1']['view'] = 'sdgs';
$handler->display->display_options['fields']['view_1']['display'] = 'block_1';
$handler->display->display_options['fields']['view_1']['arguments'] = '[!tid]';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Taxonomy term: Term hierarchy */
$handler->display->display_options['sorts']['hierarchy_sort']['id'] = 'hierarchy_sort';
$handler->display->display_options['sorts']['hierarchy_sort']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['hierarchy_sort']['field'] = 'hierarchy_sort';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'sdgs' => 'sdgs',
);
/* Filter criterion: Taxonomy term: Parent term */
$handler->display->display_options['filters']['parent']['id'] = 'parent';
$handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['filters']['parent']['field'] = 'parent';
$handler->display->display_options['filters']['parent']['value']['value'] = '0';

/* Display: G Targets */
$handler = $view->new_display('block', 'G Targets', 'grid_targets');
$handler->display->display_options['enabled'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'target-[tid]';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_sdgs_type' => 'field_sdgs_type',
  'field_id' => 'field_id',
  'name' => 'name',
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Taxonomy term: Type */
$handler->display->display_options['fields']['field_sdgs_type']['id'] = 'field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['table'] = 'field_data_field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['field'] = 'field_sdgs_type';
$handler->display->display_options['fields']['field_sdgs_type']['label'] = '';
$handler->display->display_options['fields']['field_sdgs_type']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_sdgs_type']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: ID */
$handler->display->display_options['fields']['field_id']['id'] = 'field_id';
$handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
$handler->display->display_options['fields']['field_id']['field'] = 'field_id';
$handler->display->display_options['fields']['field_id']['label'] = '';
$handler->display->display_options['fields']['field_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_id']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_id']['alter']['text'] = '[field_sdgs_type] [field_id]';
$handler->display->display_options['fields']['field_id']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Rendered Taxonomy term */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_taxonomy_term';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['exclude'] = TRUE;
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
/* Field: Global: View */
$handler->display->display_options['fields']['view']['id'] = 'view';
$handler->display->display_options['fields']['view']['table'] = 'views';
$handler->display->display_options['fields']['view']['field'] = 'view';
$handler->display->display_options['fields']['view']['label'] = '';
$handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view']['view'] = 'sdgs';
$handler->display->display_options['fields']['view']['display'] = 'grid_ind';
$handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: Parent term */
$handler->display->display_options['arguments']['parent']['id'] = 'parent';
$handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['arguments']['parent']['field'] = 'parent';
$handler->display->display_options['arguments']['parent']['default_action'] = 'empty';
$handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'sdgs' => 'sdgs',
);
/* Filter criterion: Taxonomy term: Parent term */
$handler->display->display_options['filters']['parent']['id'] = 'parent';
$handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['filters']['parent']['field'] = 'parent';
$handler->display->display_options['filters']['parent']['operator'] = '!=';
$handler->display->display_options['filters']['parent']['value']['value'] = '0';

/* Display: G Indicators */
$handler = $view->new_display('block', 'G Indicators', 'grid_ind');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'indicator-[tid]';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Taxonomy term: Content using SDG */
$handler->display->display_options['relationships']['reverse_field_sdg_node']['id'] = 'reverse_field_sdg_node';
$handler->display->display_options['relationships']['reverse_field_sdg_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_sdg_node']['field'] = 'reverse_field_sdg_node';
/* Relationship: Taxonomy term: Parent term */
$handler->display->display_options['relationships']['parent']['id'] = 'parent';
$handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['relationships']['parent']['field'] = 'parent';
$handler->display->display_options['relationships']['parent']['label'] = 'Target';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['relationship'] = 'reverse_field_sdg_node';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: ID */
$handler->display->display_options['fields']['field_id']['id'] = 'field_id';
$handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
$handler->display->display_options['fields']['field_id']['field'] = 'field_id';
$handler->display->display_options['fields']['field_id']['label'] = '';
$handler->display->display_options['fields']['field_id']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_id']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['field_id']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Taxonomy term: Weight */
$handler->display->display_options['sorts']['weight']['id'] = 'weight';
$handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['weight']['field'] = 'weight';
$handler->display->display_options['sorts']['weight']['relationship'] = 'parent';
/* Sort criterion: Taxonomy term: Weight */
$handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
$handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: Parent term */
$handler->display->display_options['arguments']['parent']['id'] = 'parent';
$handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['arguments']['parent']['field'] = 'parent';
$handler->display->display_options['arguments']['parent']['relationship'] = 'parent';
$handler->display->display_options['arguments']['parent']['default_action'] = 'empty';
$handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';

/* Display: G Indicators T */
$handler = $view->new_display('block', 'G Indicators T', 'block_1');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'indicator-[tid]';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Taxonomy term: Content using SDG */
$handler->display->display_options['relationships']['reverse_field_sdg_node']['id'] = 'reverse_field_sdg_node';
$handler->display->display_options['relationships']['reverse_field_sdg_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_sdg_node']['field'] = 'reverse_field_sdg_node';
/* Relationship: Taxonomy term: Parent term */
$handler->display->display_options['relationships']['parent']['id'] = 'parent';
$handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['relationships']['parent']['field'] = 'parent';
$handler->display->display_options['relationships']['parent']['label'] = 'Target';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['relationship'] = 'reverse_field_sdg_node';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: ID */
$handler->display->display_options['fields']['field_id']['id'] = 'field_id';
$handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
$handler->display->display_options['fields']['field_id']['field'] = 'field_id';
$handler->display->display_options['fields']['field_id']['label'] = '';
$handler->display->display_options['fields']['field_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_id']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_id']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['field_id']['element_label_colon'] = FALSE;
/* Field: Content: Tier */
$handler->display->display_options['fields']['field_sdgs_tier']['id'] = 'field_sdgs_tier';
$handler->display->display_options['fields']['field_sdgs_tier']['table'] = 'field_data_field_sdgs_tier';
$handler->display->display_options['fields']['field_sdgs_tier']['field'] = 'field_sdgs_tier';
$handler->display->display_options['fields']['field_sdgs_tier']['relationship'] = 'reverse_field_sdg_node';
$handler->display->display_options['fields']['field_sdgs_tier']['label'] = '';
$handler->display->display_options['fields']['field_sdgs_tier']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_sdgs_tier']['type'] = 'i18n_taxonomy_term_reference_plain';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Taxonomy term: Weight */
$handler->display->display_options['sorts']['weight']['id'] = 'weight';
$handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['weight']['field'] = 'weight';
$handler->display->display_options['sorts']['weight']['relationship'] = 'parent';
/* Sort criterion: Taxonomy term: Weight */
$handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
$handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: Parent term */
$handler->display->display_options['arguments']['parent']['id'] = 'parent';
$handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['arguments']['parent']['field'] = 'parent';
$handler->display->display_options['arguments']['parent']['relationship'] = 'parent';
$handler->display->display_options['arguments']['parent']['default_action'] = 'empty';
$handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';

