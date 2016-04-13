$view = new view();
$view->name = 'providers_library';
$view->description = '';
$view->tag = 'landportal';
$view->base_table = 'node';
$view->human_name = 'Providers library';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Browse by Providers';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'mini';
$handler->display->display_options['pager']['options']['items_per_page'] = '32';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
$handler->display->display_options['style_plugin'] = 'grid';
$handler->display->display_options['style_options']['uses_fields'] = TRUE;
$handler->display->display_options['style_options']['columns'] = '8';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_doc_provider_node']['id'] = 'reverse_field_doc_provider_node';
$handler->display->display_options['relationships']['reverse_field_doc_provider_node']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_doc_provider_node']['field'] = 'reverse_field_doc_provider_node';
$handler->display->display_options['relationships']['reverse_field_doc_provider_node']['label'] = 'Providers';
$handler->display->display_options['relationships']['reverse_field_doc_provider_node']['required'] = TRUE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['label'] = '';
$handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_doc_provider_node';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = 'Library resources';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['separator'] = '';
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['alter']['path'] = 'organization/[nid]';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => 'content',
);
$handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'organization' => 'organization',
);
/* Filter criterion: Field: Image (field_image:fid) */
$handler->display->display_options['filters']['field_image_fid']['id'] = 'field_image_fid';
$handler->display->display_options['filters']['field_image_fid']['table'] = 'field_data_field_image';
$handler->display->display_options['filters']['field_image_fid']['field'] = 'field_image_fid';
$handler->display->display_options['filters']['field_image_fid']['operator'] = 'not empty';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['path'] = 'library/browsebyorg';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');
$handler->display->display_options['block_description'] = 'browse_by_providers';
$translatables['providers_library'] = array(
  t('Master'),
  t('Browse by Providers'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('« first'),
  t('‹ previous'),
  t('next ›'),
  t('last »'),
  t('Providers'),
  t('Library resources'),
  t('Page'),
  t('Block'),
  t('browse_by_providers'),
);
