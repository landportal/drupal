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
$handler->display->display_options['title'] = 'Land Book Indicators';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter indicators';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset filters';
$handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Field: Themes (field_related_themes) (translated) */
$handler->display->display_options['relationships']['field_related_themes_tid_i18n']['id'] = 'field_related_themes_tid_i18n';
$handler->display->display_options['relationships']['field_related_themes_tid_i18n']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['relationships']['field_related_themes_tid_i18n']['field'] = 'field_related_themes_tid_i18n';
$handler->display->display_options['relationships']['field_related_themes_tid_i18n']['label'] = 'themes';
/* Relationship: Field: Overarching categories (field_related_domains) (translated) */
$handler->display->display_options['relationships']['field_related_domains_tid_i18n']['id'] = 'field_related_domains_tid_i18n';
$handler->display->display_options['relationships']['field_related_domains_tid_i18n']['table'] = 'field_data_field_related_domains';
$handler->display->display_options['relationships']['field_related_domains_tid_i18n']['field'] = 'field_related_domains_tid_i18n';
$handler->display->display_options['relationships']['field_related_domains_tid_i18n']['label'] = 'domains';
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
$handler->display->display_options['fields']['name']['alter']['path'] = 'book/indicators/[field_id]';
$handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Sort criterion: Taxonomy term: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['name']['field'] = 'name';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'indicators' => 'indicators',
);

/* Display: Page indicators */
$handler = $view->new_display('page', 'Page indicators', 'page');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['defaults']['fields'] = FALSE;
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
$handler->display->display_options['fields']['name']['alter']['path'] = 'book/indicators/[field_id]';
$handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name']['element_wrapper_type'] = 'h2';
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
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'indicators' => 'indicators',
);
/* Filter criterion: Taxonomy term: Dataset (field_dataset) (reference filter) */
$handler->display->display_options['filters']['field_dataset_tid_entityreference_filter']['id'] = 'field_dataset_tid_entityreference_filter';
$handler->display->display_options['filters']['field_dataset_tid_entityreference_filter']['table'] = 'field_data_field_dataset';
$handler->display->display_options['filters']['field_dataset_tid_entityreference_filter']['field'] = 'field_dataset_tid_entityreference_filter';
$handler->display->display_options['filters']['field_dataset_tid_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_dataset_tid_entityreference_filter']['expose']['operator_id'] = 'field_dataset_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_dataset_tid_entityreference_filter']['expose']['label'] = 'Filter by dataset';
$handler->display->display_options['filters']['field_dataset_tid_entityreference_filter']['expose']['operator'] = 'field_dataset_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_dataset_tid_entityreference_filter']['expose']['identifier'] = 'field_dataset_tid_entityreference_filter';
$handler->display->display_options['filters']['field_dataset_tid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_dataset_tid_entityreference_filter']['reference_display'] = 'landbook_catalog:entityreference_1';
/* Filter criterion: Field: Themes (field_related_themes) */
$handler->display->display_options['filters']['field_related_themes_tid']['id'] = 'field_related_themes_tid';
$handler->display->display_options['filters']['field_related_themes_tid']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['filters']['field_related_themes_tid']['field'] = 'field_related_themes_tid';
$handler->display->display_options['filters']['field_related_themes_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_related_themes_tid']['expose']['operator_id'] = 'field_related_themes_tid_op';
$handler->display->display_options['filters']['field_related_themes_tid']['expose']['label'] = 'Themes';
$handler->display->display_options['filters']['field_related_themes_tid']['expose']['operator'] = 'field_related_themes_tid_op';
$handler->display->display_options['filters']['field_related_themes_tid']['expose']['identifier'] = 'field_related_themes_tid';
$handler->display->display_options['filters']['field_related_themes_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_themes_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_related_themes_tid']['vocabulary'] = 'themes';
/* Filter criterion: Field: Overarching categories (field_related_domains) */
$handler->display->display_options['filters']['field_related_domains_tid']['id'] = 'field_related_domains_tid';
$handler->display->display_options['filters']['field_related_domains_tid']['table'] = 'field_data_field_related_domains';
$handler->display->display_options['filters']['field_related_domains_tid']['field'] = 'field_related_domains_tid';
$handler->display->display_options['filters']['field_related_domains_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_related_domains_tid']['expose']['operator_id'] = 'field_related_domains_tid_op';
$handler->display->display_options['filters']['field_related_domains_tid']['expose']['label'] = 'Overarching categories';
$handler->display->display_options['filters']['field_related_domains_tid']['expose']['operator'] = 'field_related_domains_tid_op';
$handler->display->display_options['filters']['field_related_domains_tid']['expose']['identifier'] = 'field_related_domains_tid';
$handler->display->display_options['filters']['field_related_domains_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_domains_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_related_domains_tid']['vocabulary'] = 'overarching_categories';
$handler->display->display_options['path'] = 'book/indicators';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Indicators';
$handler->display->display_options['menu']['weight'] = '3';
$handler->display->display_options['menu']['name'] = 'landbook-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Dataset indicators */
$handler = $view->new_display('block', 'Dataset indicators', 'block_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Dataset indicators';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Field: Themes (field_related_themes) (translated) */
$handler->display->display_options['relationships']['field_related_themes_tid_i18n']['id'] = 'field_related_themes_tid_i18n';
$handler->display->display_options['relationships']['field_related_themes_tid_i18n']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['relationships']['field_related_themes_tid_i18n']['field'] = 'field_related_themes_tid_i18n';
$handler->display->display_options['relationships']['field_related_themes_tid_i18n']['label'] = 'themes';
/* Relationship: Field: Overarching categories (field_related_domains) (translated) */
$handler->display->display_options['relationships']['field_related_domains_tid_i18n']['id'] = 'field_related_domains_tid_i18n';
$handler->display->display_options['relationships']['field_related_domains_tid_i18n']['table'] = 'field_data_field_related_domains';
$handler->display->display_options['relationships']['field_related_domains_tid_i18n']['field'] = 'field_related_domains_tid_i18n';
$handler->display->display_options['relationships']['field_related_domains_tid_i18n']['label'] = 'domains';
/* Relationship: Taxonomy term: Dataset (field_dataset) */
$handler->display->display_options['relationships']['field_dataset_tid']['id'] = 'field_dataset_tid';
$handler->display->display_options['relationships']['field_dataset_tid']['table'] = 'field_data_field_dataset';
$handler->display->display_options['relationships']['field_dataset_tid']['field'] = 'field_dataset_tid';
$handler->display->display_options['relationships']['field_dataset_tid']['label'] = 'Dataset';
$handler->display->display_options['relationships']['field_dataset_tid']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
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
$handler->display->display_options['fields']['name']['alter']['path'] = 'book/indicators/[field_id]';
$handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
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
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: Term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['relationship'] = 'field_dataset_tid';
$handler->display->display_options['arguments']['tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
  'datasets' => 'datasets',
  'indicators' => 'indicators',
);
$handler->display->display_options['arguments']['tid']['validate']['fail'] = 'access denied';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'indicators' => 'indicators',
);
