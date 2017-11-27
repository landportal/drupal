<?php

$view = new view();
$view->name = 'org_view';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Organizations overview';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Organizations';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['link_display'] = 'custom_url';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
$handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '24';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'node';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
$handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
/* Contextual filter: Content: Title */
$handler->display->display_options['arguments']['title']['id'] = 'title';
$handler->display->display_options['arguments']['title']['table'] = 'node';
$handler->display->display_options['arguments']['title']['field'] = 'title';
$handler->display->display_options['arguments']['title']['default_action'] = 'default';
$handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'all';
$handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['title']['summary_options']['count'] = FALSE;
$handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['title']['glossary'] = TRUE;
$handler->display->display_options['arguments']['title']['limit'] = '1';
$handler->display->display_options['arguments']['title']['break_phrase'] = TRUE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'organization' => 'organization',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Organization type (field_organization_type) */
$handler->display->display_options['filters']['field_organization_type_tid']['id'] = 'field_organization_type_tid';
$handler->display->display_options['filters']['field_organization_type_tid']['table'] = 'field_data_field_organization_type';
$handler->display->display_options['filters']['field_organization_type_tid']['field'] = 'field_organization_type_tid';
$handler->display->display_options['filters']['field_organization_type_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_organization_type_tid']['vocabulary'] = 'organization_types';
$handler->display->display_options['filters']['field_organization_type_tid']['hierarchy'] = 1;
/* Filter criterion: Field: Geographical focus (field_geographical_focus) (reference filter) */
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['id'] = 'field_geographical_focus_tid_entityreference_filter';
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['table'] = 'field_data_field_geographical_focus';
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['field'] = 'field_geographical_focus_tid_entityreference_filter';
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['expose']['operator_id'] = 'field_geographical_focus_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['expose']['label'] = 'Geographical focus (field_geographical_focus) (reference filter)';
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['expose']['operator'] = 'field_geographical_focus_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['expose']['identifier'] = 'field_geographical_focus_tid_entityreference_filter';

/* Display: Promoted */
$handler = $view->new_display('block', 'Promoted', 'promoted');
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['use_more_text'] = 'More organizations';
$handler->display->display_options['link_url'] = 'organizations';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '2';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Promoted to front page */
$handler->display->display_options['sorts']['promote']['id'] = 'promote';
$handler->display->display_options['sorts']['promote']['table'] = 'node';
$handler->display->display_options['sorts']['promote']['field'] = 'promote';
$handler->display->display_options['sorts']['promote']['order'] = 'DESC';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'organization' => 'organization',
);
$handler->display->display_options['filters']['type']['group'] = 1;

/* Display: All */
$handler = $view->new_display('block', 'All', 'all');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'view-grid-4 view-wrapped';
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'organization' => 'organization',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Organization type (field_organization_type) */
$handler->display->display_options['filters']['field_organization_type_tid']['id'] = 'field_organization_type_tid';
$handler->display->display_options['filters']['field_organization_type_tid']['table'] = 'field_data_field_organization_type';
$handler->display->display_options['filters']['field_organization_type_tid']['field'] = 'field_organization_type_tid';
$handler->display->display_options['filters']['field_organization_type_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_organization_type_tid']['expose']['operator_id'] = 'field_organization_type_tid_op';
$handler->display->display_options['filters']['field_organization_type_tid']['expose']['label'] = 'Organization type';
$handler->display->display_options['filters']['field_organization_type_tid']['expose']['operator'] = 'field_organization_type_tid_op';
$handler->display->display_options['filters']['field_organization_type_tid']['expose']['identifier'] = 'field_organization_type_tid';
$handler->display->display_options['filters']['field_organization_type_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_organization_type_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_organization_type_tid']['vocabulary'] = 'organization_types';
$handler->display->display_options['filters']['field_organization_type_tid']['hierarchy'] = 1;
/* Filter criterion: Field: Geographical focus (field_geographical_focus) (reference filter) */
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['id'] = 'field_geographical_focus_tid_entityreference_filter';
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['table'] = 'field_data_field_geographical_focus';
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['field'] = 'field_geographical_focus_tid_entityreference_filter';
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['expose']['operator_id'] = 'field_geographical_focus_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['expose']['label'] = 'Geographical focus';
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['expose']['operator'] = 'field_geographical_focus_tid_entityreference_filter_op';
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['expose']['identifier'] = 'field_geographical_focus_tid_entityreference_filter';
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['reference_display'] = 'ldref:geo';
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['reference_arguments'] = 'organization';

