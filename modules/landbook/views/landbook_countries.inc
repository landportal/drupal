<?php

$view = new view();
$view->name = 'landbook_countries';
$view->description = 'Landbook countries, list all known countries from taxonomy, link to country pages';
$view->tag = 'taxonomy, landbook';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Landbook Countries';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Countries';
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
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* Field: Taxonomy term: ISO3 */
$handler->display->display_options['fields']['field_iso3']['id'] = 'field_iso3';
$handler->display->display_options['fields']['field_iso3']['table'] = 'field_data_field_iso3';
$handler->display->display_options['fields']['field_iso3']['field'] = 'field_iso3';
$handler->display->display_options['fields']['field_iso3']['label'] = '';
$handler->display->display_options['fields']['field_iso3']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_iso3']['alter']['text'] = '<span class="flag-icon flag-icon-rounded flag-[field_iso3]"> </span>';
$handler->display->display_options['fields']['field_iso3']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_iso3']['element_default_classes'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name_field']['id'] = 'name_field';
$handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field']['field'] = 'name_field';
$handler->display->display_options['fields']['name_field']['label'] = '';
$handler->display->display_options['fields']['name_field']['alter']['text'] = '[name_field] - [field_iso3]';
$handler->display->display_options['fields']['name_field']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name_field']['link_to_entity'] = 0;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'regions' => 'regions',
);
/* Filter criterion: Taxonomy term: ISO3 (field_iso3) */
$handler->display->display_options['filters']['field_iso3_value']['id'] = 'field_iso3_value';
$handler->display->display_options['filters']['field_iso3_value']['table'] = 'field_data_field_iso3';
$handler->display->display_options['filters']['field_iso3_value']['field'] = 'field_iso3_value';
$handler->display->display_options['filters']['field_iso3_value']['operator'] = 'not empty';

/* Display: Regions vocabulary */
$handler = $view->new_display('page', 'Regions vocabulary', 'page_voc_regions');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Regions';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'view-grid';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: ISO3 */
$handler->display->display_options['fields']['field_iso3']['id'] = 'field_iso3';
$handler->display->display_options['fields']['field_iso3']['table'] = 'field_data_field_iso3';
$handler->display->display_options['fields']['field_iso3']['field'] = 'field_iso3';
$handler->display->display_options['fields']['field_iso3']['label'] = '';
$handler->display->display_options['fields']['field_iso3']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_iso3']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name_field']['id'] = 'name_field';
$handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field']['field'] = 'name_field';
$handler->display->display_options['fields']['name_field']['label'] = '';
$handler->display->display_options['fields']['name_field']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name_field']['alter']['text'] = '<span class="flag-icon flag-[field_iso3]"></span> [name_field]';
$handler->display->display_options['fields']['name_field']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name_field']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['name_field']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name_field']['link_to_entity'] = 1;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'regions' => 'regions',
);
$handler->display->display_options['filters']['machine_name']['group'] = 1;
$handler->display->display_options['path'] = 'voc/region';

/* Display: Book countries block */
$handler = $view->new_display('block', 'Book countries block', 'block_all');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'view-grid';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: ISO3 */
$handler->display->display_options['fields']['field_iso3']['id'] = 'field_iso3';
$handler->display->display_options['fields']['field_iso3']['table'] = 'field_data_field_iso3';
$handler->display->display_options['fields']['field_iso3']['field'] = 'field_iso3';
$handler->display->display_options['fields']['field_iso3']['label'] = '';
$handler->display->display_options['fields']['field_iso3']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_iso3']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name_field']['id'] = 'name_field';
$handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field']['field'] = 'name_field';
$handler->display->display_options['fields']['name_field']['label'] = '';
$handler->display->display_options['fields']['name_field']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name_field']['alter']['text'] = '<span class="flag-icon flag-[field_iso3]"></span> [name_field]';
$handler->display->display_options['fields']['name_field']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name_field']['alter']['path'] = 'book/countries/[field_iso3]';
$handler->display->display_options['fields']['name_field']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['name_field']['element_type'] = 'div';
$handler->display->display_options['fields']['name_field']['element_class'] = 'text-center';
$handler->display->display_options['fields']['name_field']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name_field']['link_to_entity'] = 0;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Taxonomy term: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['name']['field'] = 'name';

/* Display: Country Portfolio */
$handler = $view->new_display('page', 'Country Portfolio', 'portfolio');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['display_description'] = 'Land Book Country narrative page';
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: View area */
$handler->display->display_options['header']['view']['id'] = 'view';
$handler->display->display_options['header']['view']['table'] = 'views';
$handler->display->display_options['header']['view']['field'] = 'view';
$handler->display->display_options['header']['view']['empty'] = TRUE;
$handler->display->display_options['header']['view']['view_to_insert'] = 'landbook_countries:cp_header';
$handler->display->display_options['header']['view']['inherit_arguments'] = TRUE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Taxonomy term: Content using Geographical focus */
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['id'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['field'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: ISO3 */
$handler->display->display_options['fields']['field_iso3']['id'] = 'field_iso3';
$handler->display->display_options['fields']['field_iso3']['table'] = 'field_data_field_iso3';
$handler->display->display_options['fields']['field_iso3']['field'] = 'field_iso3';
$handler->display->display_options['fields']['field_iso3']['label'] = '';
$handler->display->display_options['fields']['field_iso3']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_iso3']['element_label_colon'] = FALSE;
/* Field: Content: Rendered Content */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['relationship'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: ISO3 (field_iso3) */
$handler->display->display_options['arguments']['field_iso3_value']['id'] = 'field_iso3_value';
$handler->display->display_options['arguments']['field_iso3_value']['table'] = 'field_data_field_iso3';
$handler->display->display_options['arguments']['field_iso3_value']['field'] = 'field_iso3_value';
$handler->display->display_options['arguments']['field_iso3_value']['default_action'] = 'not found';
$handler->display->display_options['arguments']['field_iso3_value']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['field_iso3_value']['default_argument_options']['index'] = '0';
$handler->display->display_options['arguments']['field_iso3_value']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_iso3_value']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_iso3_value']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_iso3_value']['limit'] = '0';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'regions' => 'regions',
);
/* Filter criterion: Taxonomy term: ISO3 (field_iso3) */
$handler->display->display_options['filters']['field_iso3_value']['id'] = 'field_iso3_value';
$handler->display->display_options['filters']['field_iso3_value']['table'] = 'field_data_field_iso3';
$handler->display->display_options['filters']['field_iso3_value']['field'] = 'field_iso3_value';
$handler->display->display_options['filters']['field_iso3_value']['operator'] = 'not empty';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['filters']['type']['value'] = array(
  'landbook_country' => 'landbook_country',
);
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['filters']['status']['value'] = '1';
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['relationship'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
$handler->display->display_options['path'] = 'book/countries/%';

/* Display: CP header */
$handler = $view->new_display('block', 'CP header', 'cp_header');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'clearfix';
$handler->display->display_options['defaults']['footer'] = FALSE;
/* Footer: Global: Unfiltered text */
$handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
$handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['footer']['area_text_custom']['content'] = '<div id="page-submenu"><ul class="nav"></ul></div>';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: ISO3 */
$handler->display->display_options['fields']['field_iso3']['id'] = 'field_iso3';
$handler->display->display_options['fields']['field_iso3']['table'] = 'field_data_field_iso3';
$handler->display->display_options['fields']['field_iso3']['field'] = 'field_iso3';
$handler->display->display_options['fields']['field_iso3']['label'] = '';
$handler->display->display_options['fields']['field_iso3']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_iso3']['alter']['text'] = '<span class="flag-icon flag-icon-rounded flag-[field_iso3]"> </span>';
$handler->display->display_options['fields']['field_iso3']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_iso3']['element_default_classes'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name_field']['id'] = 'name_field';
$handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field']['field'] = 'name_field';
$handler->display->display_options['fields']['name_field']['label'] = '';
$handler->display->display_options['fields']['name_field']['alter']['text'] = '[name_field] - [field_iso3]';
$handler->display->display_options['fields']['name_field']['element_type'] = 'h1';
$handler->display->display_options['fields']['name_field']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name_field']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['name_field']['type'] = 'text_plain';
$handler->display->display_options['fields']['name_field']['link_to_entity'] = 0;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: ISO3 (field_iso3) */
$handler->display->display_options['arguments']['field_iso3_value']['id'] = 'field_iso3_value';
$handler->display->display_options['arguments']['field_iso3_value']['table'] = 'field_data_field_iso3';
$handler->display->display_options['arguments']['field_iso3_value']['field'] = 'field_iso3_value';
$handler->display->display_options['arguments']['field_iso3_value']['default_action'] = 'empty';
$handler->display->display_options['arguments']['field_iso3_value']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['field_iso3_value']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_iso3_value']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_iso3_value']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_iso3_value']['limit'] = '0';
