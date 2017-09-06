<?php

$view = new view();
$view->name = 'catalog_adm';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'catalog_adm';
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
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'draggableviews' => 'draggableviews',
  'name' => 'name',
  'weight_1' => 'weight_1',
  'weight' => 'weight',
  'parent' => 'tid',
  'field_parent' => 'tid',
  'tid' => 'tid',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'draggableviews' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'weight_1' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'weight' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'parent' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_parent' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'tid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => ':',
    'empty_column' => 0,
  ),
);
/* Relationship: Taxonomy term: Parent term */
$handler->display->display_options['relationships']['parent']['id'] = 'parent';
$handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['relationships']['parent']['field'] = 'parent';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Draggableviews: Taxonomy term */
$handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
$handler->display->display_options['fields']['draggableviews']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
$handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['draggableviews']['draggableviews']['hierarchy_handler'] = 'draggableviews_hierarchy_handler_native';
$handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
/* Field: Draggableviews: Parent */
$handler->display->display_options['fields']['parent']['id'] = 'parent';
$handler->display->display_options['fields']['parent']['table'] = 'draggableviews_structure';
$handler->display->display_options['fields']['parent']['field'] = 'parent';
$handler->display->display_options['fields']['parent']['label'] = '';
$handler->display->display_options['fields']['parent']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['parent']['separator'] = '';
/* Field: Taxonomy term: Parent */
$handler->display->display_options['fields']['field_parent']['id'] = 'field_parent';
$handler->display->display_options['fields']['field_parent']['table'] = 'field_data_field_parent';
$handler->display->display_options['fields']['field_parent']['field'] = 'field_parent';
$handler->display->display_options['fields']['field_parent']['settings'] = array(
  'bypass_access' => 0,
  'link' => 0,
);
$handler->display->display_options['fields']['field_parent']['delta_offset'] = '0';
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = 'TID';
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Sort criterion: Draggableviews: Weight */
$handler->display->display_options['sorts']['weight']['id'] = 'weight';
$handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
$handler->display->display_options['sorts']['weight']['field'] = 'weight';
$handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'catalog_adm:page_1';
$handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'indicators' => 'indicators',
);
/* Filter criterion: Taxonomy term: Catalog (field_dataset) */
$handler->display->display_options['filters']['field_dataset_tid']['id'] = 'field_dataset_tid';
$handler->display->display_options['filters']['field_dataset_tid']['table'] = 'field_data_field_dataset';
$handler->display->display_options['filters']['field_dataset_tid']['field'] = 'field_dataset_tid';
$handler->display->display_options['filters']['field_dataset_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_dataset_tid']['expose']['operator_id'] = 'field_dataset_tid_op';
$handler->display->display_options['filters']['field_dataset_tid']['expose']['label'] = 'Catalog';
$handler->display->display_options['filters']['field_dataset_tid']['expose']['operator'] = 'field_dataset_tid_op';
$handler->display->display_options['filters']['field_dataset_tid']['expose']['identifier'] = 'field_dataset_tid';
$handler->display->display_options['filters']['field_dataset_tid']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['field_dataset_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_dataset_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_dataset_tid']['vocabulary'] = 'datasets';

/* Display: System */
$handler = $view->new_display('system', 'System', 'system_1');
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['path'] = 'admin/structure/book';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['path'] = 'admin/content/book';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Book';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'management';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

