<?php

$view = new view();
$view->name = 'thematic_pages';
$view->description = 'Show all other TP after the highlighted 2';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Thematic pages';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '12';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'node';
/* Relationship: Content: Taxonomy terms on node */
$handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
$handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
$handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Type */
$handler->display->display_options['sorts']['type']['id'] = 'type';
$handler->display->display_options['sorts']['type']['table'] = 'node';
$handler->display->display_options['sorts']['type']['field'] = 'type';
/* Sort criterion: Content: Updated date */
$handler->display->display_options['sorts']['changed']['id'] = 'changed';
$handler->display->display_options['sorts']['changed']['table'] = 'node';
$handler->display->display_options['sorts']['changed']['field'] = 'changed';
$handler->display->display_options['sorts']['changed']['order'] = 'DESC';
$handler->display->display_options['filter_groups']['operator'] = 'OR';
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'AND',
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'thematic_narrative' => 'thematic_narrative',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['value']['value'] = '52263';
$handler->display->display_options['filters']['nid']['group'] = 2;

/* Display: Highlight */
$handler = $view->new_display('block', 'Highlight', 'highlight');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Issues highlight';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'view-grid-2';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '2';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Type */
$handler->display->display_options['sorts']['type']['id'] = 'type';
$handler->display->display_options['sorts']['type']['table'] = 'node';
$handler->display->display_options['sorts']['type']['field'] = 'type';
/* Sort criterion: Content: Promoted (field_promoted) */
$handler->display->display_options['sorts']['field_promoted_target_id']['id'] = 'field_promoted_target_id';
$handler->display->display_options['sorts']['field_promoted_target_id']['table'] = 'field_data_field_promoted';
$handler->display->display_options['sorts']['field_promoted_target_id']['field'] = 'field_promoted_target_id';
$handler->display->display_options['sorts']['field_promoted_target_id']['order'] = 'DESC';
/* Sort criterion: Content: Updated date */
$handler->display->display_options['sorts']['changed']['id'] = 'changed';
$handler->display->display_options['sorts']['changed']['table'] = 'node';
$handler->display->display_options['sorts']['changed']['field'] = 'changed';
$handler->display->display_options['sorts']['changed']['order'] = 'DESC';

/* Display: All */
$handler = $view->new_display('block', 'All', 'all');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'All issues';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'teaser-fullwidth view-grid-4 view-wrapped';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '12';
$handler->display->display_options['pager']['options']['offset'] = '2';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';

/* Display: Last */
$handler = $view->new_display('block', 'Last', 'last');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_landvoc_to_target_id']['id'] = 'field_landvoc_to_target_id';
$handler->display->display_options['relationships']['field_landvoc_to_target_id']['table'] = 'field_data_field_landvoc_to';
$handler->display->display_options['relationships']['field_landvoc_to_target_id']['field'] = 'field_landvoc_to_target_id';
$handler->display->display_options['relationships']['field_landvoc_to_target_id']['label'] = 'issue';
$handler->display->display_options['relationships']['field_landvoc_to_target_id']['required'] = TRUE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Updated date */
$handler->display->display_options['sorts']['changed']['id'] = 'changed';
$handler->display->display_options['sorts']['changed']['table'] = 'node';
$handler->display->display_options['sorts']['changed']['field'] = 'changed';
$handler->display->display_options['sorts']['changed']['order'] = 'DESC';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: Term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['relationship'] = 'field_landvoc_to_target_id';
$handler->display->display_options['arguments']['tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['filter_groups']['operator'] = 'OR';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'thematic_narrative' => 'thematic_narrative',
);
$handler->display->display_options['filters']['type']['group'] = 1;

/* Display: Context data */
$handler = $view->new_display('block', 'Context data', 'last_vis');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_landvoc_to_target_id']['id'] = 'field_landvoc_to_target_id';
$handler->display->display_options['relationships']['field_landvoc_to_target_id']['table'] = 'field_data_field_landvoc_to';
$handler->display->display_options['relationships']['field_landvoc_to_target_id']['field'] = 'field_landvoc_to_target_id';
$handler->display->display_options['relationships']['field_landvoc_to_target_id']['label'] = 'issue';
$handler->display->display_options['relationships']['field_landvoc_to_target_id']['required'] = TRUE;
/* Relationship: Field: Land Book Indicators (field_visualization) */
$handler->display->display_options['relationships']['field_visualization_value']['id'] = 'field_visualization_value';
$handler->display->display_options['relationships']['field_visualization_value']['table'] = 'field_data_field_visualization';
$handler->display->display_options['relationships']['field_visualization_value']['field'] = 'field_visualization_value';
$handler->display->display_options['relationships']['field_visualization_value']['label'] = 'vis';
$handler->display->display_options['relationships']['field_visualization_value']['required'] = TRUE;
$handler->display->display_options['relationships']['field_visualization_value']['delta'] = '-1';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Field collection item: Rendered Field collection item */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_field_collection_item';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['relationship'] = 'field_visualization_value';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Updated date */
$handler->display->display_options['sorts']['changed']['id'] = 'changed';
$handler->display->display_options['sorts']['changed']['table'] = 'node';
$handler->display->display_options['sorts']['changed']['field'] = 'changed';
$handler->display->display_options['sorts']['changed']['order'] = 'DESC';
/* Sort criterion: Field: Land Book Indicators (field_visualization:delta) */
$handler->display->display_options['sorts']['delta']['id'] = 'delta';
$handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_visualization';
$handler->display->display_options['sorts']['delta']['field'] = 'delta';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: Term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['relationship'] = 'field_landvoc_to_target_id';
$handler->display->display_options['arguments']['tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['filter_groups']['operator'] = 'OR';
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'thematic_narrative' => 'thematic_narrative',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Global: PHP */
$handler->display->display_options['filters']['php']['id'] = 'php';
$handler->display->display_options['filters']['php']['table'] = 'views';
$handler->display->display_options['filters']['php']['field'] = 'php';
$handler->display->display_options['filters']['php']['use_php_setup'] = 0;
$handler->display->display_options['filters']['php']['php_filter'] = '$vis = entity_load(\'field_collection_item\', array($row->rendered_entity));
$v = $vis[$row->rendered_entity]->field_view_coda[\'und\'][0];
return !in_array($v[\'type\'], array(\'table\', \'map\'));
';

