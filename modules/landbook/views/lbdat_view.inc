<?php

$view = new view();
$view->name = 'lbdat_view';
$view->description = '';
$view->tag = 'default, landbook';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Land Book Datasets';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['css_class'] = 'teaser-fullwidth view-grid-4 view-wrapped';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'See all datasets';
$handler->display->display_options['link_display'] = 'custom_url';
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '16';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
/* Relationship: Taxonomy term: Taxonomy term using Catalog */
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['id'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['field'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['relationships']['reverse_field_dataset_taxonomy_term']['label'] = 'Indicators';
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
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
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
/* Field: COUNT(Taxonomy term: Term ID) */
$handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid_1']['field'] = 'tid';
$handler->display->display_options['fields']['tid_1']['relationship'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['fields']['tid_1']['group_type'] = 'count';
$handler->display->display_options['fields']['tid_1']['label'] = 'Indicators';
$handler->display->display_options['fields']['tid_1']['separator'] = '';
/* Field: Taxonomy term: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'term_authoring_info';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Updated';
$handler->display->display_options['fields']['changed']['exclude'] = TRUE;
$handler->display->display_options['fields']['changed']['date_format'] = 'day_month_year';
$handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
/* Sort criterion: Taxonomy term: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['name']['field'] = 'name';
/* Sort criterion: Taxonomy term: Updated date */
$handler->display->display_options['sorts']['changed']['id'] = 'changed';
$handler->display->display_options['sorts']['changed']['table'] = 'term_authoring_info';
$handler->display->display_options['sorts']['changed']['field'] = 'changed';
$handler->display->display_options['sorts']['changed']['order'] = 'DESC';
/* Filter criterion: Taxonomy term: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['value'] = array(
  24 => '24',
);
$handler->display->display_options['filters']['vid']['group'] = 1;
/* Filter criterion: Taxonomy term: Vocabulary */
$handler->display->display_options['filters']['vid_1']['id'] = 'vid_1';
$handler->display->display_options['filters']['vid_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid_1']['field'] = 'vid';
$handler->display->display_options['filters']['vid_1']['relationship'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['filters']['vid_1']['value'] = array(
  25 => '25',
);
$handler->display->display_options['filters']['vid_1']['group'] = 1;
/* Filter criterion: Taxonomy term: Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Dataset name';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Field: Organization (field_orgref) (reference filter) */
$handler->display->display_options['filters']['field_orgref_target_id_entityreference_filter']['id'] = 'field_orgref_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_orgref_target_id_entityreference_filter']['table'] = 'field_data_field_orgref';
$handler->display->display_options['filters']['field_orgref_target_id_entityreference_filter']['field'] = 'field_orgref_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_orgref_target_id_entityreference_filter']['group'] = 1;
$handler->display->display_options['filters']['field_orgref_target_id_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_orgref_target_id_entityreference_filter']['expose']['operator_id'] = 'field_orgref_target_id_entityreference_filter_op';
$handler->display->display_options['filters']['field_orgref_target_id_entityreference_filter']['expose']['label'] = 'Provider';
$handler->display->display_options['filters']['field_orgref_target_id_entityreference_filter']['expose']['operator'] = 'field_orgref_target_id_entityreference_filter_op';
$handler->display->display_options['filters']['field_orgref_target_id_entityreference_filter']['expose']['identifier'] = 'field_orgref_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_orgref_target_id_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_orgref_target_id_entityreference_filter']['reference_display'] = 'lborg:ref';
/* Filter criterion: Field: Themes (field_related_themes) (reference filter) */
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['id'] = 'field_related_themes_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['field'] = 'field_related_themes_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['group'] = 1;
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['operator_id'] = 'field_related_themes_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['label'] = 'Issue';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['operator'] = 'field_related_themes_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['identifier'] = 'field_related_themes_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['reference_display'] = 'lbdat:ref_theme';

/* Display: All */
$handler = $view->new_display('block', 'All', 'all');
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['use_more_text'] = 'See all datasets';
$handler->display->display_options['link_url'] = 'book/datasets';
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
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
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
/* Field: COUNT(Taxonomy term: Term ID) */
$handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid_1']['field'] = 'tid';
$handler->display->display_options['fields']['tid_1']['relationship'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['fields']['tid_1']['group_type'] = 'count';
$handler->display->display_options['fields']['tid_1']['label'] = 'Indicators';
$handler->display->display_options['fields']['tid_1']['separator'] = '';
/* Field: Taxonomy term: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'term_authoring_info';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Updated';
$handler->display->display_options['fields']['changed']['exclude'] = TRUE;
$handler->display->display_options['fields']['changed']['date_format'] = 'day_month_year';
$handler->display->display_options['fields']['changed']['second_date_format'] = 'long';

/* Display: Latest */
$handler = $view->new_display('block', 'Latest', 'latest');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Last updated';
$handler->display->display_options['link_url'] = 'book/datasets';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '4';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Taxonomy term: Updated date */
$handler->display->display_options['sorts']['changed']['id'] = 'changed';
$handler->display->display_options['sorts']['changed']['table'] = 'term_authoring_info';
$handler->display->display_options['sorts']['changed']['field'] = 'changed';
$handler->display->display_options['sorts']['changed']['order'] = 'DESC';
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
/* Filter criterion: Taxonomy term: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['relationship'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['filters']['vid']['value'] = array(
  25 => '25',
);
$handler->display->display_options['filters']['vid']['group'] = 1;

/* Display: Promoted */
$handler = $view->new_display('block', 'Promoted', 'highlight');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Featured datasets';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '2';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Taxonomy term: Content using Catalog */
$handler->display->display_options['relationships']['reverse_field_catalog_node']['id'] = 'reverse_field_catalog_node';
$handler->display->display_options['relationships']['reverse_field_catalog_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_catalog_node']['field'] = 'reverse_field_catalog_node';
$handler->display->display_options['relationships']['reverse_field_catalog_node']['label'] = 'ds';
$handler->display->display_options['relationships']['reverse_field_catalog_node']['required'] = TRUE;
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
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Content: Rendered Content */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['relationship'] = 'reverse_field_catalog_node';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Promoted to front page */
$handler->display->display_options['sorts']['promote']['id'] = 'promote';
$handler->display->display_options['sorts']['promote']['table'] = 'node';
$handler->display->display_options['sorts']['promote']['field'] = 'promote';
$handler->display->display_options['sorts']['promote']['relationship'] = 'reverse_field_catalog_node';
$handler->display->display_options['sorts']['promote']['order'] = 'DESC';
/* Sort criterion: Content: Updated date */
$handler->display->display_options['sorts']['changed']['id'] = 'changed';
$handler->display->display_options['sorts']['changed']['table'] = 'node';
$handler->display->display_options['sorts']['changed']['field'] = 'changed';
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
