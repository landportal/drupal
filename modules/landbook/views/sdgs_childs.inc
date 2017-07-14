<?php

$view = new view();
$view->name = 'sdgs_childs';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Sdgs childs';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Sdgs childs';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '0';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'clearfix';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'field_id' => 'field_id',
  'name' => 'name',
);
$handler->display->display_options['row_options']['separator'] = '-';
/* Relationship: Taxonomy term: Content using SDG */
$handler->display->display_options['relationships']['reverse_field_sdg_node']['id'] = 'reverse_field_sdg_node';
$handler->display->display_options['relationships']['reverse_field_sdg_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_sdg_node']['field'] = 'reverse_field_sdg_node';
$handler->display->display_options['relationships']['reverse_field_sdg_node']['label'] = 'sdgi';
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
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Rendered Taxonomy term */
$handler->display->display_options['fields']['rendered_entity_1']['id'] = 'rendered_entity_1';
$handler->display->display_options['fields']['rendered_entity_1']['table'] = 'views_entity_taxonomy_term';
$handler->display->display_options['fields']['rendered_entity_1']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity_1']['label'] = '';
$handler->display->display_options['fields']['rendered_entity_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity_1']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity_1']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity_1']['view_mode'] = 'teaser';
$handler->display->display_options['fields']['rendered_entity_1']['bypass_access'] = 0;
/* Field: Content: Rendered Content */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['relationship'] = 'reverse_field_sdg_node';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
/* Sort criterion: Taxonomy term: Weight */
$handler->display->display_options['sorts']['weight']['id'] = 'weight';
$handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['weight']['field'] = 'weight';
/* Contextual filter: Taxonomy term: Parent term */
$handler->display->display_options['arguments']['parent']['id'] = 'parent';
$handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['arguments']['parent']['field'] = 'parent';
$handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['parent']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['parent']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['parent']['validate_options']['vocabularies'] = array(
  'sdgs' => 'sdgs',
);
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

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');

