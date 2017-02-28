<?php

// From https://landportal.info/admin/structure/views/view/thematic_pages/export

$view = new view();
$view->name = 'thematic_pages';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Land Book - Thematic portfolios';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Thematic portfolios';
$handler->display->display_options['css_class'] = 'view-grid-3';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '12';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_landvoc_to_target_id']['id'] = 'field_landvoc_to_target_id';
$handler->display->display_options['relationships']['field_landvoc_to_target_id']['table'] = 'field_data_field_landvoc_to';
$handler->display->display_options['relationships']['field_landvoc_to_target_id']['field'] = 'field_landvoc_to_target_id';
$handler->display->display_options['relationships']['field_landvoc_to_target_id']['label'] = 'landvoc';
$handler->display->display_options['relationships']['field_landvoc_to_target_id']['required'] = TRUE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name_field']['id'] = 'name_field';
$handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field']['field'] = 'name_field';
$handler->display->display_options['fields']['name_field']['relationship'] = 'field_landvoc_to_target_id';
$handler->display->display_options['fields']['name_field']['label'] = '';
$handler->display->display_options['fields']['name_field']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name_field']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['name_field']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name_field']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['name_field']['settings'] = array(
  'title_style' => 'h2',
  'title_link' => '',
  'title_class' => '',
);
$handler->display->display_options['fields']['name_field']['link_to_entity'] = 0;
/* Sort criterion: Taxonomy term: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['name']['field'] = 'name';
$handler->display->display_options['sorts']['name']['relationship'] = 'field_landvoc_to_target_id';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'thematic_narrative' => 'thematic_narrative',
);

/* Display: Entity Reference */
$handler = $view->new_display('entityreference', 'Entity Reference', 'ref_landvoc');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'entityreference_style';
$handler->display->display_options['style_options']['search_fields'] = array(
  'name_field' => 'name_field',
  'title' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entityreference_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;

/* Display: Block-Land Book Thematic portfolios */
$handler = $view->new_display('block', 'Block-Land Book Thematic portfolios', 'block_lb_thematic_portfolios');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['relationship'] = 'field_landvoc_to_target_id';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_image']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'square_thumbnail',
  'image_link' => '',
);
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name_field']['id'] = 'name_field';
$handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field']['field'] = 'name_field';
$handler->display->display_options['fields']['name_field']['relationship'] = 'field_landvoc_to_target_id';
$handler->display->display_options['fields']['name_field']['label'] = '';
$handler->display->display_options['fields']['name_field']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name_field']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['name_field']['element_type'] = 'h2';
$handler->display->display_options['fields']['name_field']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name_field']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['name_field']['settings'] = array(
  'title_style' => 'h2',
  'title_link' => '',
  'title_class' => '',
);
$handler->display->display_options['fields']['name_field']['link_to_entity'] = 0;
/* Field: Content: Published */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['label'] = '';
$handler->display->display_options['fields']['status']['element_class'] = 'error ';
$handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['status']['element_wrapper_class'] = 'alert alert-danger';
$handler->display->display_options['fields']['status']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['status']['type'] = 'custom';
$handler->display->display_options['fields']['status']['type_custom_false'] = 'NOT PUBLISHED';
$handler->display->display_options['fields']['status']['not'] = 0;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
