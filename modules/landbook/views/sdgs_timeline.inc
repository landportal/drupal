<?php

$view = new view();
$view->name = 'sdgs_timeline';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'SDGs timeline';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Land-related SDG timeline: track decisions & deadlines';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '0';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Content: Key dates (field_milestone) */
$handler->display->display_options['relationships']['field_milestone_value']['id'] = 'field_milestone_value';
$handler->display->display_options['relationships']['field_milestone_value']['table'] = 'field_data_field_milestone';
$handler->display->display_options['relationships']['field_milestone_value']['field'] = 'field_milestone_value';
$handler->display->display_options['relationships']['field_milestone_value']['delta'] = '-1';
/* Relationship: Content: SDG (field_sdg) */
$handler->display->display_options['relationships']['field_sdg_tid']['id'] = 'field_sdg_tid';
$handler->display->display_options['relationships']['field_sdg_tid']['table'] = 'field_data_field_sdg';
$handler->display->display_options['relationships']['field_sdg_tid']['field'] = 'field_sdg_tid';
$handler->display->display_options['relationships']['field_sdg_tid']['label'] = 'indicator';
/* Relationship: Taxonomy term: Parent term */
$handler->display->display_options['relationships']['parent']['id'] = 'parent';
$handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['relationships']['parent']['field'] = 'parent';
$handler->display->display_options['relationships']['parent']['relationship'] = 'field_sdg_tid';
$handler->display->display_options['relationships']['parent']['label'] = 'target';
/* Relationship: Taxonomy term: Parent term */
$handler->display->display_options['relationships']['parent_1']['id'] = 'parent_1';
$handler->display->display_options['relationships']['parent_1']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['relationships']['parent_1']['field'] = 'parent';
$handler->display->display_options['relationships']['parent_1']['relationship'] = 'parent';
$handler->display->display_options['relationships']['parent_1']['label'] = 'goal';
/* Field: Taxonomy term: ID */
$handler->display->display_options['fields']['field_id']['id'] = 'field_id';
$handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
$handler->display->display_options['fields']['field_id']['field'] = 'field_id';
$handler->display->display_options['fields']['field_id']['relationship'] = 'parent_1';
$handler->display->display_options['fields']['field_id']['label'] = '';
$handler->display->display_options['fields']['field_id']['element_label_colon'] = FALSE;
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: Field: Date */
$handler->display->display_options['fields']['field_singledate']['id'] = 'field_singledate';
$handler->display->display_options['fields']['field_singledate']['table'] = 'field_data_field_singledate';
$handler->display->display_options['fields']['field_singledate']['field'] = 'field_singledate';
$handler->display->display_options['fields']['field_singledate']['relationship'] = 'field_milestone_value';
$handler->display->display_options['fields']['field_singledate']['label'] = '';
$handler->display->display_options['fields']['field_singledate']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_singledate']['settings'] = array(
  'format_type' => 'year_month_day',
  'custom_date_format' => '',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'show',
);
/* Field: Field: Title */
$handler->display->display_options['fields']['title_field']['id'] = 'title_field';
$handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
$handler->display->display_options['fields']['title_field']['field'] = 'title_field';
$handler->display->display_options['fields']['title_field']['relationship'] = 'field_milestone_value';
$handler->display->display_options['fields']['title_field']['label'] = '';
$handler->display->display_options['fields']['title_field']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['title_field']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_field']['empty'] = '[title]';
$handler->display->display_options['fields']['title_field']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
/* Field: Field: Description */
$handler->display->display_options['fields']['field_description']['id'] = 'field_description';
$handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
$handler->display->display_options['fields']['field_description']['field'] = 'field_description';
$handler->display->display_options['fields']['field_description']['relationship'] = 'field_milestone_value';
$handler->display->display_options['fields']['field_description']['label'] = '';
$handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
/* Sort criterion: Taxonomy term: Weight */
$handler->display->display_options['sorts']['weight_2']['id'] = 'weight_2';
$handler->display->display_options['sorts']['weight_2']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['weight_2']['field'] = 'weight';
$handler->display->display_options['sorts']['weight_2']['relationship'] = 'parent_1';
/* Sort criterion: Taxonomy term: Weight */
$handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
$handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
$handler->display->display_options['sorts']['weight_1']['relationship'] = 'parent';
/* Sort criterion: Taxonomy term: Weight */
$handler->display->display_options['sorts']['weight']['id'] = 'weight';
$handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['weight']['field'] = 'weight';
$handler->display->display_options['sorts']['weight']['relationship'] = 'field_sdg_tid';
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'OR',
);
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Field: Description (field_description) */
$handler->display->display_options['filters']['field_description_value']['id'] = 'field_description_value';
$handler->display->display_options['filters']['field_description_value']['table'] = 'field_data_field_description';
$handler->display->display_options['filters']['field_description_value']['field'] = 'field_description_value';
$handler->display->display_options['filters']['field_description_value']['relationship'] = 'field_milestone_value';
$handler->display->display_options['filters']['field_description_value']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_description_value']['group'] = 1;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type_1']['id'] = 'type_1';
$handler->display->display_options['filters']['type_1']['table'] = 'node';
$handler->display->display_options['filters']['type_1']['field'] = 'type';
$handler->display->display_options['filters']['type_1']['value'] = array(
  'sdgi' => 'sdgi',
);
$handler->display->display_options['filters']['type_1']['group'] = 2;
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['value']['value'] = '52263';
$handler->display->display_options['filters']['nid']['group'] = 2;

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'main');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'timelinejs';
$handler->display->display_options['style_options']['timeline_config']['height'] = '350px';
$handler->display->display_options['style_options']['timeline_config']['hash_bookmark'] = 0;
$handler->display->display_options['style_options']['timeline_config']['start_at_end'] = 0;
$handler->display->display_options['style_options']['additional_config']['start_at_current'] = 0;
$handler->display->display_options['style_options']['timeline_fields']['start_date'] = 'field_singledate';
$handler->display->display_options['style_options']['timeline_fields']['display_date'] = 'field_singledate';
$handler->display->display_options['style_options']['timeline_fields']['text'] = 'field_description';
$handler->display->display_options['style_options']['timeline_fields']['headline'] = 'title_field';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;

