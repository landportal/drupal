<?php

$view = new view();
$view->name = 'people';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'profile';
$view->human_name = 'People';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'People';
$handler->display->display_options['css_class'] = 'view-users';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['link_display'] = 'custom_url';
$handler->display->display_options['link_url'] = 'people';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
$handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '32';
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
/* Relationship: Profile: User uid */
$handler->display->display_options['relationships']['user']['id'] = 'user';
$handler->display->display_options['relationships']['user']['table'] = 'profile';
$handler->display->display_options['relationships']['user']['field'] = 'user';
/* Relationship: Profile: Location (field_location) */
$handler->display->display_options['relationships']['field_location_lid']['id'] = 'field_location_lid';
$handler->display->display_options['relationships']['field_location_lid']['table'] = 'field_data_field_location';
$handler->display->display_options['relationships']['field_location_lid']['field'] = 'field_location_lid';
$handler->display->display_options['relationships']['field_location_lid']['label'] = 'location';
/* Field: Profile: Profile ID */
$handler->display->display_options['fields']['pid']['id'] = 'pid';
$handler->display->display_options['fields']['pid']['table'] = 'profile';
$handler->display->display_options['fields']['pid']['field'] = 'pid';
$handler->display->display_options['fields']['pid']['label'] = '';
$handler->display->display_options['fields']['pid']['exclude'] = TRUE;
$handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
/* Field: Profile: Rendered Profile */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_profile2';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['rendered_entity']['element_wrapper_class'] = 'profile';
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
/* Sort criterion: Profile: Last name (field_lastname) */
$handler->display->display_options['sorts']['field_lastname_value']['id'] = 'field_lastname_value';
$handler->display->display_options['sorts']['field_lastname_value']['table'] = 'field_data_field_lastname';
$handler->display->display_options['sorts']['field_lastname_value']['field'] = 'field_lastname_value';
/* Sort criterion: Profile: First name (field_firstname) */
$handler->display->display_options['sorts']['field_firstname_value']['id'] = 'field_firstname_value';
$handler->display->display_options['sorts']['field_firstname_value']['table'] = 'field_data_field_firstname';
$handler->display->display_options['sorts']['field_firstname_value']['field'] = 'field_firstname_value';
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'OR',
);
/* Filter criterion: Profile: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'profile';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'main' => 'main',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Field: Hide my profile on public listings (field_hide_profile) */
$handler->display->display_options['filters']['field_hide_profile_value']['id'] = 'field_hide_profile_value';
$handler->display->display_options['filters']['field_hide_profile_value']['table'] = 'field_data_field_hide_profile';
$handler->display->display_options['filters']['field_hide_profile_value']['field'] = 'field_hide_profile_value';
$handler->display->display_options['filters']['field_hide_profile_value']['operator'] = 'not';
$handler->display->display_options['filters']['field_hide_profile_value']['value'] = array(
  1 => '1',
);
$handler->display->display_options['filters']['field_hide_profile_value']['group'] = 1;
/* Filter criterion: Location: Country */
$handler->display->display_options['filters']['country']['id'] = 'country';
$handler->display->display_options['filters']['country']['table'] = 'location';
$handler->display->display_options['filters']['country']['field'] = 'country';
$handler->display->display_options['filters']['country']['relationship'] = 'field_location_lid';
$handler->display->display_options['filters']['country']['group'] = 1;
$handler->display->display_options['filters']['country']['exposed'] = TRUE;
$handler->display->display_options['filters']['country']['expose']['operator_id'] = 'country_op';
$handler->display->display_options['filters']['country']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['country']['expose']['operator'] = 'country_op';
$handler->display->display_options['filters']['country']['expose']['identifier'] = 'country';
$handler->display->display_options['filters']['country']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Profile: Last name (field_lastname) */
$handler->display->display_options['filters']['field_lastname_value']['id'] = 'field_lastname_value';
$handler->display->display_options['filters']['field_lastname_value']['table'] = 'field_data_field_lastname';
$handler->display->display_options['filters']['field_lastname_value']['field'] = 'field_lastname_value';
$handler->display->display_options['filters']['field_lastname_value']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_lastname_value']['group'] = 2;
/* Filter criterion: Profile: First name (field_firstname) */
$handler->display->display_options['filters']['field_firstname_value']['id'] = 'field_firstname_value';
$handler->display->display_options['filters']['field_firstname_value']['table'] = 'field_data_field_firstname';
$handler->display->display_options['filters']['field_firstname_value']['field'] = 'field_firstname_value';
$handler->display->display_options['filters']['field_firstname_value']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_firstname_value']['group'] = 2;
/* Filter criterion: Profile: Label */
$handler->display->display_options['filters']['label']['id'] = 'label';
$handler->display->display_options['filters']['label']['table'] = 'profile';
$handler->display->display_options['filters']['label']['field'] = 'label';
$handler->display->display_options['filters']['label']['operator'] = 'contains';
$handler->display->display_options['filters']['label']['exposed'] = TRUE;
$handler->display->display_options['filters']['label']['expose']['operator_id'] = 'label_op';
$handler->display->display_options['filters']['label']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['label']['expose']['operator'] = 'label_op';
$handler->display->display_options['filters']['label']['expose']['identifier'] = 'label';
$handler->display->display_options['filters']['label']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);

/* Display: All */
$handler = $view->new_display('block', 'All', 'all');
$handler->display->display_options['link_url'] = 'people';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
$handler->display->display_options['style_options']['columns_horizontal'] = '0';
$handler->display->display_options['style_options']['columns_vertical'] = '4';
$handler->display->display_options['style_options']['columns_xs'] = '12';
$handler->display->display_options['style_options']['columns_sm'] = '6';
$handler->display->display_options['style_options']['columns_md'] = '3';
$handler->display->display_options['style_options']['columns_lg'] = '2';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;

/* Display: Entity Reference */
$handler = $view->new_display('entityreference', 'Entity Reference', 'pub');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'field_firstname' => 'field_firstname',
  'field_lastname' => 'field_lastname',
  'pid' => 0,
  'field_title' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['row_options']['separator'] = ' ';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Profile: Profile ID */
$handler->display->display_options['fields']['pid']['id'] = 'pid';
$handler->display->display_options['fields']['pid']['table'] = 'profile';
$handler->display->display_options['fields']['pid']['field'] = 'pid';
$handler->display->display_options['fields']['pid']['label'] = '';
$handler->display->display_options['fields']['pid']['exclude'] = TRUE;
$handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
/* Field: Profile: Title */
$handler->display->display_options['fields']['field_title']['id'] = 'field_title';
$handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
$handler->display->display_options['fields']['field_title']['field'] = 'field_title';
$handler->display->display_options['fields']['field_title']['label'] = '';
$handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
/* Field: Profile: First name */
$handler->display->display_options['fields']['field_firstname']['id'] = 'field_firstname';
$handler->display->display_options['fields']['field_firstname']['table'] = 'field_data_field_firstname';
$handler->display->display_options['fields']['field_firstname']['field'] = 'field_firstname';
$handler->display->display_options['fields']['field_firstname']['label'] = '';
$handler->display->display_options['fields']['field_firstname']['element_label_colon'] = FALSE;
/* Field: Profile: Last name */
$handler->display->display_options['fields']['field_lastname']['id'] = 'field_lastname';
$handler->display->display_options['fields']['field_lastname']['table'] = 'field_data_field_lastname';
$handler->display->display_options['fields']['field_lastname']['field'] = 'field_lastname';
$handler->display->display_options['fields']['field_lastname']['label'] = '';
$handler->display->display_options['fields']['field_lastname']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'OR',
);
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Profile: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'profile';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'main' => 'main',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Field: Hide my profile on public listings (field_hide_profile) */
$handler->display->display_options['filters']['field_hide_profile_value']['id'] = 'field_hide_profile_value';
$handler->display->display_options['filters']['field_hide_profile_value']['table'] = 'field_data_field_hide_profile';
$handler->display->display_options['filters']['field_hide_profile_value']['field'] = 'field_hide_profile_value';
$handler->display->display_options['filters']['field_hide_profile_value']['operator'] = 'not';
$handler->display->display_options['filters']['field_hide_profile_value']['value'] = array(
  1 => '1',
);
$handler->display->display_options['filters']['field_hide_profile_value']['group'] = 1;
/* Filter criterion: Profile: Last name (field_lastname) */
$handler->display->display_options['filters']['field_lastname_value']['id'] = 'field_lastname_value';
$handler->display->display_options['filters']['field_lastname_value']['table'] = 'field_data_field_lastname';
$handler->display->display_options['filters']['field_lastname_value']['field'] = 'field_lastname_value';
$handler->display->display_options['filters']['field_lastname_value']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_lastname_value']['group'] = 2;
/* Filter criterion: Profile: First name (field_firstname) */
$handler->display->display_options['filters']['field_firstname_value']['id'] = 'field_firstname_value';
$handler->display->display_options['filters']['field_firstname_value']['table'] = 'field_data_field_firstname';
$handler->display->display_options['filters']['field_firstname_value']['field'] = 'field_firstname_value';
$handler->display->display_options['filters']['field_firstname_value']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_firstname_value']['group'] = 2;

