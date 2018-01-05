<?php

$view = new view();
$view->name = 'lbind_view';
$view->description = '';
$view->tag = 'default, landbook';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Land Book Inds';
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
$handler->display->display_options['link_url'] = 'book/indicators';
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
/* Relationship: Taxonomy term: Catalog (field_dataset) */
$handler->display->display_options['relationships']['field_dataset_tid']['id'] = 'field_dataset_tid';
$handler->display->display_options['relationships']['field_dataset_tid']['table'] = 'field_data_field_dataset';
$handler->display->display_options['relationships']['field_dataset_tid']['field'] = 'field_dataset_tid';
$handler->display->display_options['relationships']['field_dataset_tid']['label'] = 'dataset';
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
$handler->display->display_options['filters']['vid']['relationship'] = 'reverse_field_dataset_taxonomy_term';
$handler->display->display_options['filters']['vid']['value'] = array(
  25 => '25',
);
$handler->display->display_options['filters']['vid']['group'] = 1;
/* Filter criterion: Taxonomy term: Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Indicator name';
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
$handler->display->display_options['filters']['field_orgref_target_id_entityreference_filter']['relationship'] = 'field_dataset_tid';
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
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['reference_display'] = 'lbind:ref_theme';
/* Filter criterion: Taxonomy term: Catalog (field_dataset) (reference filter) */
$handler->display->display_options['filters']['field_dataset_tid_entityreference_filter']['id'] = 'field_dataset_tid_entityreference_filter';
$handler->display->display_options['filters']['field_dataset_tid_entityreference_filter']['table'] = 'field_data_field_dataset';
$handler->display->display_options['filters']['field_dataset_tid_entityreference_filter']['field'] = 'field_dataset_tid_entityreference_filter';
$handler->display->display_options['filters']['field_dataset_tid_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_dataset_tid_entityreference_filter']['expose']['operator_id'] = 'field_dataset_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_dataset_tid_entityreference_filter']['expose']['label'] = 'Dataset';
$handler->display->display_options['filters']['field_dataset_tid_entityreference_filter']['expose']['operator'] = 'field_dataset_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_dataset_tid_entityreference_filter']['expose']['identifier'] = 'field_dataset_tid_entityreference_filter';
$handler->display->display_options['filters']['field_dataset_tid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_dataset_tid_entityreference_filter']['reference_display'] = 'lbdat:ref';

/* Display: All */
$handler = $view->new_display('block', 'All', 'all');
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['use_more_text'] = 'See all datasets';
$handler->display->display_options['link_url'] = 'book/indicators';

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
