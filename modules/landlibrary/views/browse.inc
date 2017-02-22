<?php

$view = new view();
$view->name = 'library';
$view->description = 'Land Library resources';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Library';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Land Library resources';
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'Find more on the Library';
$handler->display->display_options['link_display'] = 'page_1';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'teaser';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Sort criterion: Content: Date of publication (field_doc_creation_date) */
$handler->display->display_options['sorts']['field_doc_creation_date_value']['id'] = 'field_doc_creation_date_value';
$handler->display->display_options['sorts']['field_doc_creation_date_value']['table'] = 'field_data_field_doc_creation_date';
$handler->display->display_options['sorts']['field_doc_creation_date_value']['field'] = 'field_doc_creation_date_value';
$handler->display->display_options['sorts']['field_doc_creation_date_value']['order'] = 'DESC';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'landlibrary_resource' => 'landlibrary_resource',
);
/* Filter criterion: Content: Resource type (field_doc_type) (reference filter) */
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['id'] = 'field_doc_type_tid_entityreference_filter';
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['table'] = 'field_data_field_doc_type';
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['field'] = 'field_doc_type_tid_entityreference_filter';
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['expose']['operator_id'] = 'field_doc_type_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['expose']['label'] = 'Resource type (field_doc_type) (reference filter)';
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['expose']['operator'] = 'field_doc_type_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['expose']['identifier'] = 'field_doc_type_tid_entityreference_filter';
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_doc_type_tid_entityreference_filter']['reference_display'] = 'library_browse:ref_types';
/* Filter criterion: Content: License of the resource (field_doc_licencing) (reference filter) */
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['id'] = 'field_doc_licencing_tid_entityreference_filter';
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['table'] = 'field_data_field_doc_licencing';
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['field'] = 'field_doc_licencing_tid_entityreference_filter';
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['expose']['operator_id'] = 'field_doc_licencing_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['expose']['label'] = 'License of the resource (field_doc_licencing) (reference filter)';
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['expose']['operator'] = 'field_doc_licencing_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['expose']['identifier'] = 'field_doc_licencing_tid_entityreference_filter';
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_doc_licencing_tid_entityreference_filter']['reference_display'] = 'library_browse:ref_licences';
/* Filter criterion: Field: Overarching categories (field_related_domains) (reference filter) */
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['id'] = 'field_related_domains_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['table'] = 'field_data_field_related_domains';
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['field'] = 'field_related_domains_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['expose']['operator_id'] = 'field_related_domains_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['expose']['label'] = 'Overarching categories (field_related_domains) (reference filter)';
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['expose']['operator'] = 'field_related_domains_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['expose']['identifier'] = 'field_related_domains_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['reference_display'] = 'library_browse:ref_categories';
/* Filter criterion: Field: Related concepts (field_related_topics) (reference filter) */
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['id'] = 'field_related_topics_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['table'] = 'field_data_field_related_topics';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['field'] = 'field_related_topics_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['operator_id'] = 'field_related_topics_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['label'] = 'Related concepts (field_related_topics) (reference filter)';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['operator'] = 'field_related_topics_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['identifier'] = 'field_related_topics_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['reference_display'] = 'library_browse:ref_concepts';
/* Filter criterion: Field: Themes (field_related_themes) (reference filter) */
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['id'] = 'field_related_themes_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['field'] = 'field_related_themes_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['operator_id'] = 'field_related_themes_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['label'] = 'Themes (field_related_themes) (reference filter)';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['operator'] = 'field_related_themes_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['identifier'] = 'field_related_themes_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['reference_display'] = 'library_browse:ref_themes';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['path'] = 'library/browse/all';

/* Display: Page by type */
$handler = $view->new_display('page', 'Page by type', 'page_type');
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Resource type (field_doc_type) */
$handler->display->display_options['arguments']['field_doc_type_tid']['id'] = 'field_doc_type_tid';
$handler->display->display_options['arguments']['field_doc_type_tid']['table'] = 'field_data_field_doc_type';
$handler->display->display_options['arguments']['field_doc_type_tid']['field'] = 'field_doc_type_tid';
$handler->display->display_options['arguments']['field_doc_type_tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_doc_type_tid']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['field_doc_type_tid']['title'] = '%1 browse - Land Library';
$handler->display->display_options['arguments']['field_doc_type_tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['field_doc_type_tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_doc_type_tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_doc_type_tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'landlibrary_resource' => 'landlibrary_resource',
);
/* Filter criterion: Field: Overarching categories (field_related_domains) (reference filter) */
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['id'] = 'field_related_domains_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['table'] = 'field_data_field_related_domains';
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['field'] = 'field_related_domains_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['expose']['operator_id'] = 'field_related_domains_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['expose']['label'] = 'Overarching categories (field_related_domains) (reference filter)';
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['expose']['operator'] = 'field_related_domains_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['expose']['identifier'] = 'field_related_domains_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['reference_display'] = 'library_browse:ref_categories';
/* Filter criterion: Field: Related concepts (field_related_topics) (reference filter) */
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['id'] = 'field_related_topics_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['table'] = 'field_data_field_related_topics';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['field'] = 'field_related_topics_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['operator_id'] = 'field_related_topics_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['label'] = 'Related concepts (field_related_topics) (reference filter)';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['operator'] = 'field_related_topics_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['identifier'] = 'field_related_topics_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['reference_display'] = 'library_browse:ref_concepts';
/* Filter criterion: Field: Themes (field_related_themes) (reference filter) */
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['id'] = 'field_related_themes_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['field'] = 'field_related_themes_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['operator_id'] = 'field_related_themes_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['label'] = 'Themes (field_related_themes) (reference filter)';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['operator'] = 'field_related_themes_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['identifier'] = 'field_related_themes_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['reference_display'] = 'library_browse:ref_themes';
$handler->display->display_options['path'] = 'library/browse/type/%';

/* Display: Page by license */
$handler = $view->new_display('page', 'Page by license', 'page_license');
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: License of the resource (field_doc_licencing) */
$handler->display->display_options['arguments']['field_doc_licencing_tid']['id'] = 'field_doc_licencing_tid';
$handler->display->display_options['arguments']['field_doc_licencing_tid']['table'] = 'field_data_field_doc_licencing';
$handler->display->display_options['arguments']['field_doc_licencing_tid']['field'] = 'field_doc_licencing_tid';
$handler->display->display_options['arguments']['field_doc_licencing_tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_doc_licencing_tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['field_doc_licencing_tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_doc_licencing_tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_doc_licencing_tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'landlibrary_resource' => 'landlibrary_resource',
);
/* Filter criterion: Field: Overarching categories (field_related_domains) (reference filter) */
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['id'] = 'field_related_domains_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['table'] = 'field_data_field_related_domains';
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['field'] = 'field_related_domains_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['expose']['operator_id'] = 'field_related_domains_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['expose']['label'] = 'Overarching categories (field_related_domains) (reference filter)';
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['expose']['operator'] = 'field_related_domains_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['expose']['identifier'] = 'field_related_domains_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_domains_tid_entityreference_filter']['reference_display'] = 'library_browse:ref_categories';
/* Filter criterion: Field: Related concepts (field_related_topics) (reference filter) */
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['id'] = 'field_related_topics_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['table'] = 'field_data_field_related_topics';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['field'] = 'field_related_topics_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['operator_id'] = 'field_related_topics_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['label'] = 'Related concepts (field_related_topics) (reference filter)';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['operator'] = 'field_related_topics_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['identifier'] = 'field_related_topics_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_topics_tid_entityreference_filter']['reference_display'] = 'library_browse:ref_concepts';
/* Filter criterion: Field: Themes (field_related_themes) (reference filter) */
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['id'] = 'field_related_themes_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['field'] = 'field_related_themes_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['operator_id'] = 'field_related_themes_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['label'] = 'Themes (field_related_themes) (reference filter)';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['operator'] = 'field_related_themes_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['identifier'] = 'field_related_themes_tid_entityreference_filter';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['reference_display'] = 'library_browse:ref_themes';
$handler->display->display_options['path'] = 'library/browse/license/%';
