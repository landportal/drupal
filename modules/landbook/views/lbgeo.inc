<?php

$view = new view();
$view->name = 'lbgeo';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Land Book by geography';
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
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Taxonomy term: ISO3 */
$handler->display->display_options['fields']['field_iso3']['id'] = 'field_iso3';
$handler->display->display_options['fields']['field_iso3']['table'] = 'field_data_field_iso3';
$handler->display->display_options['fields']['field_iso3']['field'] = 'field_iso3';
$handler->display->display_options['fields']['field_iso3']['label'] = '';
$handler->display->display_options['fields']['field_iso3']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_iso3']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_iso3']['alter']['text'] = 'book/countries/[field_iso3]';
$handler->display->display_options['fields']['field_iso3']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['path'] = '[field_iso3]';
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
  'regions' => 'regions',
);
/* Filter criterion: Taxonomy term: Term (reference filter) */
$handler->display->display_options['filters']['tid_entityreference_filter']['id'] = 'tid_entityreference_filter';
$handler->display->display_options['filters']['tid_entityreference_filter']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['tid_entityreference_filter']['field'] = 'tid_entityreference_filter';
$handler->display->display_options['filters']['tid_entityreference_filter']['expose']['operator_id'] = 'tid_entityreference_filter_op';
$handler->display->display_options['filters']['tid_entityreference_filter']['expose']['label'] = 'Term (reference filter)';
$handler->display->display_options['filters']['tid_entityreference_filter']['expose']['operator'] = 'tid_entityreference_filter_op';
$handler->display->display_options['filters']['tid_entityreference_filter']['expose']['identifier'] = 'tid_entityreference_filter';
$handler->display->display_options['filters']['tid_entityreference_filter']['reference_display'] = 'geo:entityreference_2';
$handler->display->display_options['filters']['tid_entityreference_filter']['reference_arguments'] = '!1';

/* Display: Top Regions */
$handler = $view->new_display('block', 'Top Regions', 'regions');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'view-grid-5';
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
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_type'] = 'h3';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Global: View */
$handler->display->display_options['fields']['view_1']['id'] = 'view_1';
$handler->display->display_options['fields']['view_1']['table'] = 'views';
$handler->display->display_options['fields']['view_1']['field'] = 'view';
$handler->display->display_options['fields']['view_1']['label'] = '';
$handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view_1']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['view_1']['view'] = 'lbgeo';
$handler->display->display_options['fields']['view_1']['display'] = 'country_narrative';
$handler->display->display_options['fields']['view_1']['arguments'] = '[!tid]';
/* Field: Global: View */
$handler->display->display_options['fields']['view']['id'] = 'view';
$handler->display->display_options['fields']['view']['table'] = 'views';
$handler->display->display_options['fields']['view']['field'] = 'view';
$handler->display->display_options['fields']['view']['label'] = '';
$handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['view']['view'] = 'lbgeo';
$handler->display->display_options['fields']['view']['display'] = 'countries_drop';
$handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'regions' => 'regions',
);
/* Filter criterion: Taxonomy term: Term (reference filter) */
$handler->display->display_options['filters']['tid_entityreference_filter']['id'] = 'tid_entityreference_filter';
$handler->display->display_options['filters']['tid_entityreference_filter']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['tid_entityreference_filter']['field'] = 'tid_entityreference_filter';
$handler->display->display_options['filters']['tid_entityreference_filter']['reference_display'] = 'geo:ref_top';

/* Display: Country with narrative */
$handler = $view->new_display('block', 'Country with narrative', 'country_narrative');
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Taxonomy term: Content using Geographical focus */
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['id'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['field'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['label'] = 'narrative';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['required'] = TRUE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'regions' => 'regions',
);
/* Filter criterion: Taxonomy term: Term (reference filter) */
$handler->display->display_options['filters']['tid_entityreference_filter']['id'] = 'tid_entityreference_filter';
$handler->display->display_options['filters']['tid_entityreference_filter']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['tid_entityreference_filter']['field'] = 'tid_entityreference_filter';
$handler->display->display_options['filters']['tid_entityreference_filter']['expose']['operator_id'] = 'tid_entityreference_filter_op';
$handler->display->display_options['filters']['tid_entityreference_filter']['expose']['label'] = 'Term (reference filter)';
$handler->display->display_options['filters']['tid_entityreference_filter']['expose']['operator'] = 'tid_entityreference_filter_op';
$handler->display->display_options['filters']['tid_entityreference_filter']['expose']['identifier'] = 'tid_entityreference_filter';
$handler->display->display_options['filters']['tid_entityreference_filter']['reference_display'] = 'geo:ref_countries';
$handler->display->display_options['filters']['tid_entityreference_filter']['reference_arguments'] = '!1';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['filters']['type']['value'] = array(
  'landbook_country' => 'landbook_country',
);

/* Display: Country dropdown */
$handler = $view->new_display('block', 'Country dropdown', 'countries_drop');
$handler->display->display_options['display_description'] = '(can filter by Region)';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'jump_menu';
$handler->display->display_options['style_options']['hide'] = TRUE;
$handler->display->display_options['style_options']['path'] = 'field_iso3';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'regions' => 'regions',
);
/* Filter criterion: Taxonomy term: Term (reference filter) */
$handler->display->display_options['filters']['tid_entityreference_filter']['id'] = 'tid_entityreference_filter';
$handler->display->display_options['filters']['tid_entityreference_filter']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['tid_entityreference_filter']['field'] = 'tid_entityreference_filter';
$handler->display->display_options['filters']['tid_entityreference_filter']['expose']['operator_id'] = 'tid_entityreference_filter_op';
$handler->display->display_options['filters']['tid_entityreference_filter']['expose']['label'] = 'Term (reference filter)';
$handler->display->display_options['filters']['tid_entityreference_filter']['expose']['operator'] = 'tid_entityreference_filter_op';
$handler->display->display_options['filters']['tid_entityreference_filter']['expose']['identifier'] = 'tid_entityreference_filter';
$handler->display->display_options['filters']['tid_entityreference_filter']['reference_display'] = 'geo:ref_countries';
$handler->display->display_options['filters']['tid_entityreference_filter']['reference_arguments'] = '!1';

