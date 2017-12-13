<?php

$view = new view();
$view->name = 'promoted';
$view->description = 'Land Portal front page promoted blocks';
$view->tag = 'landportal, promoted';
$view->base_table = 'node';
$view->human_name = 'Front page promoted';
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
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '2';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Rendered Content */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
/* Sort criterion: Content: Promoted to front page */
$handler->display->display_options['sorts']['promote']['id'] = 'promote';
$handler->display->display_options['sorts']['promote']['table'] = 'node';
$handler->display->display_options['sorts']['promote']['field'] = 'promote';
$handler->display->display_options['sorts']['promote']['order'] = 'DESC';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Promoted to front page */
$handler->display->display_options['filters']['promote']['id'] = 'promote';
$handler->display->display_options['filters']['promote']['table'] = 'node';
$handler->display->display_options['filters']['promote']['field'] = 'promote';
$handler->display->display_options['filters']['promote']['value'] = '1';
$handler->display->display_options['filters']['promote']['group'] = 1;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
$handler->display->display_options['filters']['language']['group'] = 1;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'blog_post' => 'blog_post',
  'event' => 'event',
  'news' => 'news',
);
$handler->display->display_options['filters']['type']['group'] = 1;

/* Display: News, blogs */
$handler = $view->new_display('block', 'News, blogs', 'front');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['display_description'] = 'First Block on the front page';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['pager']['options']['offset'] = '0';

/* Display: Library */
$handler = $view->new_display('block', 'Library', 'library');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Land Library';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '2';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Promoted to front page */
$handler->display->display_options['filters']['promote']['id'] = 'promote';
$handler->display->display_options['filters']['promote']['table'] = 'node';
$handler->display->display_options['filters']['promote']['field'] = 'promote';
$handler->display->display_options['filters']['promote']['value'] = '1';
$handler->display->display_options['filters']['promote']['group'] = 1;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
$handler->display->display_options['filters']['language']['group'] = 1;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'landlibrary_resource' => 'landlibrary_resource',
);
$handler->display->display_options['filters']['type']['group'] = 1;

/* Display: Countries */
$handler = $view->new_display('block', 'Countries', 'country');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Countries';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '2';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
$handler->display->display_options['filters']['language']['group'] = 1;
/* Filter criterion: Content: Promoted to front page */
$handler->display->display_options['filters']['promote']['id'] = 'promote';
$handler->display->display_options['filters']['promote']['table'] = 'node';
$handler->display->display_options['filters']['promote']['field'] = 'promote';
$handler->display->display_options['filters']['promote']['value'] = '1';
$handler->display->display_options['filters']['promote']['group'] = 1;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'landbook_country' => 'landbook_country',
);
$handler->display->display_options['filters']['type']['group'] = 1;

/* Display: Issues */
$handler = $view->new_display('block', 'Issues', 'thematic');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Issues';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '2';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'thematic_narrative' => 'thematic_narrative',
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

/* Display: Discussions */
$handler = $view->new_display('block', 'Discussions', 'discussions');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Discussions';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'teaser-fullwidth';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
$handler->display->display_options['style_options']['interval'] = '12000';
$handler->display->display_options['style_options']['navigation'] = 0;
$handler->display->display_options['style_options']['indicators'] = 1;
$handler->display->display_options['style_options']['pause'] = 1;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'node';
$handler->display->display_options['row_options']['links'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Field: Picture */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'large',
  'image_link' => 'content',
);
/* Field: Content: Status */
$handler->display->display_options['fields']['field_status']['id'] = 'field_status';
$handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
$handler->display->display_options['fields']['field_status']['field'] = 'field_status';
$handler->display->display_options['fields']['field_status']['label'] = '';
$handler->display->display_options['fields']['field_status']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_status']['type'] = 'i18n_taxonomy_term_reference_plain';
/* Field: Field: Date */
$handler->display->display_options['fields']['field_date']['id'] = 'field_date';
$handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
$handler->display->display_options['fields']['field_date']['field'] = 'field_date';
$handler->display->display_options['fields']['field_date']['label'] = '';
$handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_date']['settings'] = array(
  'format_type' => 'day_month_year',
  'custom_date_format' => '',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'show',
);
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['text'] = '<span class="glyphicon glyphicon-calendar"></span> [field_date]<br/>
Status: [field_status]<br/>
[body]';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '200',
);
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Promoted to front page */
$handler->display->display_options['filters']['promote']['id'] = 'promote';
$handler->display->display_options['filters']['promote']['table'] = 'node';
$handler->display->display_options['filters']['promote']['field'] = 'promote';
$handler->display->display_options['filters']['promote']['value'] = '1';
$handler->display->display_options['filters']['promote']['group'] = 1;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
$handler->display->display_options['filters']['language']['group'] = 1;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'debate' => 'debate',
);
$handler->display->display_options['filters']['type']['group'] = 1;

/* Display: Events */
$handler = $view->new_display('block', 'Events', 'events');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Events';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'teaser-fullwidth';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
$handler->display->display_options['style_options']['interval'] = '15000';
$handler->display->display_options['style_options']['navigation'] = 0;
$handler->display->display_options['style_options']['indicators'] = 1;
$handler->display->display_options['style_options']['pause'] = 1;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'node';
$handler->display->display_options['row_options']['links'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Field: Picture */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'large',
  'image_link' => 'content',
);
/* Field: Field: Date */
$handler->display->display_options['fields']['field_date']['id'] = 'field_date';
$handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
$handler->display->display_options['fields']['field_date']['field'] = 'field_date';
$handler->display->display_options['fields']['field_date']['label'] = '';
$handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_date']['settings'] = array(
  'format_type' => 'day_month_year',
  'custom_date_format' => '',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'show',
);
/* Field: Location: Country */
$handler->display->display_options['fields']['country']['id'] = 'country';
$handler->display->display_options['fields']['country']['table'] = 'location';
$handler->display->display_options['fields']['country']['field'] = 'country';
$handler->display->display_options['fields']['country']['label'] = '';
$handler->display->display_options['fields']['country']['exclude'] = TRUE;
$handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['text'] = '<span class="glyphicon glyphicon-calendar"></span> [field_date]<br/>
<span class="glyphicon glyphicon-map-marker"></span> [country]<br/>
[body]';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '200',
);
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Promoted to front page */
$handler->display->display_options['filters']['promote']['id'] = 'promote';
$handler->display->display_options['filters']['promote']['table'] = 'node';
$handler->display->display_options['filters']['promote']['field'] = 'promote';
$handler->display->display_options['filters']['promote']['value'] = '1';
$handler->display->display_options['filters']['promote']['group'] = 1;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
$handler->display->display_options['filters']['language']['group'] = 1;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'event' => 'event',
);
$handler->display->display_options['filters']['type']['group'] = 1;

/* Display: Projects */
$handler = $view->new_display('block', 'Projects', 'projects');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Projects';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
$handler->display->display_options['filters']['language']['group'] = 1;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'partners' => 'partners',
);
$handler->display->display_options['filters']['type']['group'] = 1;

/* Display: Data */
$handler = $view->new_display('block', 'Data', 'data');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Data';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'teaser-fullwidth';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);
$handler->display->display_options['filters']['language']['group'] = 1;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'dataset' => 'dataset',
);
$handler->display->display_options['filters']['type']['group'] = 1;

