<?php

$view = new view();
$view->name = 'ldref';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Land Debate ref';
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
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'name' => 'name',
  'nid' => 'nid',
);
/* Relationship: Taxonomy term: Content with term */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
$handler->display->display_options['relationships']['nid']['required'] = TRUE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Taxonomy vocabulary: Machine name */
$handler->display->display_options['fields']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['fields']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['fields']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['fields']['machine_name']['label'] = '';
$handler->display->display_options['fields']['machine_name']['exclude'] = TRUE;
$handler->display->display_options['fields']['machine_name']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['prefix'] = '(';
$handler->display->display_options['fields']['nid']['suffix'] = ')';
/* Sort criterion: Taxonomy term: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['name']['field'] = 'name';
/* Contextual filter: Content: Type */
$handler->display->display_options['arguments']['type']['id'] = 'type';
$handler->display->display_options['arguments']['type']['table'] = 'node';
$handler->display->display_options['arguments']['type']['field'] = 'type';
$handler->display->display_options['arguments']['type']['relationship'] = 'nid';
$handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['type']['limit'] = '0';
/* Contextual filter: Field: Geographical focus (field_geographical_focus) */
$handler->display->display_options['arguments']['field_geographical_focus_tid']['id'] = 'field_geographical_focus_tid';
$handler->display->display_options['arguments']['field_geographical_focus_tid']['table'] = 'field_data_field_geographical_focus';
$handler->display->display_options['arguments']['field_geographical_focus_tid']['field'] = 'field_geographical_focus_tid';
$handler->display->display_options['arguments']['field_geographical_focus_tid']['relationship'] = 'nid';
$handler->display->display_options['arguments']['field_geographical_focus_tid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_geographical_focus_tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_geographical_focus_tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_geographical_focus_tid']['summary_options']['items_per_page'] = '25';
/* Contextual filter: Field: Themes (field_related_themes) */
$handler->display->display_options['arguments']['field_related_themes_tid']['id'] = 'field_related_themes_tid';
$handler->display->display_options['arguments']['field_related_themes_tid']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['arguments']['field_related_themes_tid']['field'] = 'field_related_themes_tid';
$handler->display->display_options['arguments']['field_related_themes_tid']['relationship'] = 'nid';
$handler->display->display_options['arguments']['field_related_themes_tid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_related_themes_tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_related_themes_tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_related_themes_tid']['summary_options']['items_per_page'] = '25';
/* Contextual filter: Content: Organization type (field_organization_type) */
$handler->display->display_options['arguments']['field_organization_type_tid']['id'] = 'field_organization_type_tid';
$handler->display->display_options['arguments']['field_organization_type_tid']['table'] = 'field_data_field_organization_type';
$handler->display->display_options['arguments']['field_organization_type_tid']['field'] = 'field_organization_type_tid';
$handler->display->display_options['arguments']['field_organization_type_tid']['relationship'] = 'nid';
$handler->display->display_options['arguments']['field_organization_type_tid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_organization_type_tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_organization_type_tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_organization_type_tid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['relationship'] = 'nid';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);

/* Display: themes */
$handler = $view->new_display('entityreference', 'themes', 'themes');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'tid' => 'tid',
  'name' => 'name',
  'nid' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['row_options']['separator'] = '';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['relationship'] = 'nid';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'themes' => 'themes',
);

/* Display: geo */
$handler = $view->new_display('entityreference', 'geo', 'geo');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'tid' => 'tid',
  'name' => 'name',
  'field_iso2' => 'field_iso2',
  'field_iso3' => 'field_iso3',
  'machine_name' => 0,
  'nid' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['row_options']['separator'] = '';
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
/* Field: Taxonomy vocabulary: Machine name */
$handler->display->display_options['fields']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['fields']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['fields']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['fields']['machine_name']['label'] = '';
$handler->display->display_options['fields']['machine_name']['exclude'] = TRUE;
$handler->display->display_options['fields']['machine_name']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'nid';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['prefix'] = '(';
$handler->display->display_options['fields']['nid']['suffix'] = ')';
/* Field: Taxonomy term: ISO2 */
$handler->display->display_options['fields']['field_iso2']['id'] = 'field_iso2';
$handler->display->display_options['fields']['field_iso2']['table'] = 'field_data_field_iso2';
$handler->display->display_options['fields']['field_iso2']['field'] = 'field_iso2';
$handler->display->display_options['fields']['field_iso2']['label'] = '';
$handler->display->display_options['fields']['field_iso2']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_iso2']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: ISO3 */
$handler->display->display_options['fields']['field_iso3']['id'] = 'field_iso3';
$handler->display->display_options['fields']['field_iso3']['table'] = 'field_data_field_iso3';
$handler->display->display_options['fields']['field_iso3']['field'] = 'field_iso3';
$handler->display->display_options['fields']['field_iso3']['label'] = '';
$handler->display->display_options['fields']['field_iso3']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_iso3']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'regions' => 'regions',
);
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['relationship'] = 'nid';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);

