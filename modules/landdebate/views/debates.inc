<?php

$view = new view();
$view->name = 'debates';
$view->description = 'A view to browse the Debates';
$view->tag = 'landportal, debate';
$view->base_table = 'node';
$view->human_name = 'Land Debates';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Discussions';
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['use_more_text'] = 'More debates';
$handler->display->display_options['link_display'] = 'page';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
$handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '12';
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
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Sort criterion: Field: Date -  start date (field_date) */
$handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
$handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
$handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
$handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
/* Sort criterion: Field: Date - end date (field_date:value2) */
$handler->display->display_options['sorts']['field_date_value2']['id'] = 'field_date_value2';
$handler->display->display_options['sorts']['field_date_value2']['table'] = 'field_data_field_date';
$handler->display->display_options['sorts']['field_date_value2']['field'] = 'field_date_value2';
$handler->display->display_options['sorts']['field_date_value2']['order'] = 'DESC';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'debate' => 'debate',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
$handler->display->display_options['filters']['language']['group'] = 1;

/* Display: All */
$handler = $view->new_display('block', 'All', 'all');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'view-grid-2';
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['use_more_text'] = 'More debates';
$handler->display->display_options['link_url'] = 'debates';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'date_views_pager';
$handler->display->display_options['pager']['options']['link_format'] = 'clean';
$handler->display->display_options['pager']['options']['skip_empty_pages'] = 1;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '<span class="badge count">@total</span> discussions so far this year';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Date: Date (node) */
$handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
$handler->display->display_options['arguments']['date_argument']['table'] = 'node';
$handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
$handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
$handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
$handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['date_argument']['year_range'] = '-5:+1';
$handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
$handler->display->display_options['arguments']['date_argument']['granularity_reset'] = 0;
$handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
  'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
);
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'debate' => 'debate',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
$handler->display->display_options['filters']['language']['group'] = 1;
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
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['reference_display'] = 'ldref:themes';
$handler->display->display_options['filters']['field_related_themes_tid_entityreference_filter']['reference_arguments'] = 'debate';
/* Filter criterion: Field: Geographical focus (field_geographical_focus) (reference filter) */
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['id'] = 'field_geographical_focus_tid_entityreference_filter';
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['table'] = 'field_data_field_geographical_focus';
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['field'] = 'field_geographical_focus_tid_entityreference_filter';
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['group'] = 1;
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
$handler->display->display_options['filters']['field_geographical_focus_tid_entityreference_filter']['reference_arguments'] = 'debate';

/* Display: Open */
$handler = $view->new_display('block', 'Open', 'open');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Open & upcoming';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'view-grid-2';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['use_more_text'] = 'More debates';
$handler->display->display_options['link_url'] = 'debates';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'debate' => 'debate',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
$handler->display->display_options['filters']['language']['group'] = 1;
/* Filter criterion: Content: Status (field_status) */
$handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
$handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
$handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
$handler->display->display_options['filters']['field_status_tid']['value'] = array(
  537 => '537',
  538 => '538',
);
$handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'debate_status';

/* Display: Latest */
$handler = $view->new_display('block', 'Latest', 'latest');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'teaser-fullwidth';
$handler->display->display_options['display_description'] = 'show Upcoming + Open';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['use_more_text'] = 'More debates';
$handler->display->display_options['defaults']['link_display'] = FALSE;
$handler->display->display_options['link_display'] = 'custom_url';
$handler->display->display_options['link_url'] = 'debates';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '2';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
$handler->display->display_options['style_options']['interval'] = '9000';
$handler->display->display_options['style_options']['navigation'] = 0;
$handler->display->display_options['style_options']['indicators'] = 1;
$handler->display->display_options['style_options']['pause'] = 0;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'node';
$handler->display->display_options['defaults']['row_options'] = FALSE;

/* Display: Past */
$handler = $view->new_display('block', 'Past', 'past');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Recently closed';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'teaser-fullwidth view-grid-4';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['use_more_text'] = 'More debates';
$handler->display->display_options['link_url'] = 'debates';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '4';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Created year */
$handler->display->display_options['arguments']['created_year']['id'] = 'created_year';
$handler->display->display_options['arguments']['created_year']['table'] = 'node';
$handler->display->display_options['arguments']['created_year']['field'] = 'created_year';
$handler->display->display_options['arguments']['created_year']['default_argument_type'] = 'date';
$handler->display->display_options['arguments']['created_year']['default_argument_skip_url'] = TRUE;
$handler->display->display_options['arguments']['created_year']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['created_year']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['created_year']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'debate' => 'debate',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
$handler->display->display_options['filters']['language']['group'] = 1;
/* Filter criterion: Content: Status (field_status) */
$handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
$handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
$handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
$handler->display->display_options['filters']['field_status_tid']['value'] = array(
  539 => '539',
);
$handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'debate_status';

/* Display: Archives */
$handler = $view->new_display('page', 'Archives', 'page');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'view-grid-2';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'date_views_pager';
$handler->display->display_options['pager']['options']['link_format'] = 'clean';
$handler->display->display_options['pager']['options']['skip_empty_pages'] = 0;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Entity: Rendered entity */
$handler->display->display_options['header']['entity']['id'] = 'entity';
$handler->display->display_options['header']['entity']['table'] = 'entity__global';
$handler->display->display_options['header']['entity']['field'] = 'entity';
$handler->display->display_options['header']['entity']['empty'] = TRUE;
$handler->display->display_options['header']['entity']['entity_id'] = '63181';
$handler->display->display_options['header']['entity']['bypass_access'] = 0;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '<span class="badge count">@total</span> discussions archived';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Date: Date (node) */
$handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
$handler->display->display_options['arguments']['date_argument']['table'] = 'node';
$handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
$handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
$handler->display->display_options['arguments']['date_argument']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['date_argument']['title'] = '%1 discussions archives';
$handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
$handler->display->display_options['arguments']['date_argument']['year_range'] = '2011:+0';
$handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
$handler->display->display_options['arguments']['date_argument']['granularity_reset'] = 0;
$handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
  'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
);
$handler->display->display_options['path'] = 'debates/%';
$handler->display->display_options['menu']['title'] = 'Archives';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'landportal-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

