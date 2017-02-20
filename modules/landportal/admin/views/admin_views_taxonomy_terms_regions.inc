<?php

$view = new view();
$view->name = 'admin_views_taxonomy_terms_regions';
$view->description = 'Manage Regions taxonomy';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Regions';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Manage Regions';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
$handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '20, 50, 100, 200';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'draggableviews' => 'draggableviews',
  'name' => 'name',
  'field_iso3' => 'field_iso3',
  'field_area_code_un_m_49' => 'field_area_code_un_m_49',
  'nid' => 'nid',
  'edit_term' => 'edit_term',
  'views_bulk_operations' => 'views_bulk_operations',
  'name_field_et' => 'name_field_et',
  'name_field_et_1' => 'name_field_et_1',
  'name_field_et_2' => 'name_field_et_2',
  'name_field_et_3' => 'name_field_et_3',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'draggableviews' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_iso3' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_area_code_un_m_49' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'nid' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_term' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name_field_et' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name_field_et_1' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name_field_et_2' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name_field_et_3' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
/* Relationship: Taxonomy term: Content using Geographical focus */
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['id'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_geographical_focus_node']['field'] = 'reverse_field_geographical_focus_node';
/* Field: Draggableviews: Taxonomy term */
$handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
$handler->display->display_options['fields']['draggableviews']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
$handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['draggableviews']['draggableviews']['hierarchy_handler'] = 'draggableviews_hierarchy_handler_native';
$handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Taxonomy term: ISO3 */
$handler->display->display_options['fields']['field_iso3']['id'] = 'field_iso3';
$handler->display->display_options['fields']['field_iso3']['table'] = 'field_data_field_iso3';
$handler->display->display_options['fields']['field_iso3']['field'] = 'field_iso3';
/* Field: Taxonomy term: Area code (UN M.49) */
$handler->display->display_options['fields']['field_area_code_un_m_49']['id'] = 'field_area_code_un_m_49';
$handler->display->display_options['fields']['field_area_code_un_m_49']['table'] = 'field_data_field_area_code_un_m_49';
$handler->display->display_options['fields']['field_area_code_un_m_49']['field'] = 'field_area_code_un_m_49';
/* Field: COUNT(Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = 'References';
/* Field: Taxonomy term: Term edit link */
$handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['label'] = 'Actions';
/* Field: Bulk operations: Taxonomy term */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        '_all_' => '_all_',
      ),
    ),
  ),
  'action::pathauto_taxonomy_term_update_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
  ),
);
/* Field: Entity translation: Name: translated */
$handler->display->display_options['fields']['name_field_et']['id'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field_et']['field'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et']['label'] = 'EN';
$handler->display->display_options['fields']['name_field_et']['group_column'] = 'entity_id';
$handler->display->display_options['fields']['name_field_et']['language'] = 'en';
/* Field: Entity translation: Name: translated */
$handler->display->display_options['fields']['name_field_et_1']['id'] = 'name_field_et_1';
$handler->display->display_options['fields']['name_field_et_1']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field_et_1']['field'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et_1']['label'] = 'FR';
$handler->display->display_options['fields']['name_field_et_1']['group_column'] = 'entity_id';
$handler->display->display_options['fields']['name_field_et_1']['language'] = 'fr';
/* Field: Entity translation: Name: translated */
$handler->display->display_options['fields']['name_field_et_2']['id'] = 'name_field_et_2';
$handler->display->display_options['fields']['name_field_et_2']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field_et_2']['field'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et_2']['label'] = 'ES';
$handler->display->display_options['fields']['name_field_et_2']['group_column'] = 'entity_id';
$handler->display->display_options['fields']['name_field_et_2']['language'] = 'es';
/* Field: Entity translation: Name: translated */
$handler->display->display_options['fields']['name_field_et_3']['id'] = 'name_field_et_3';
$handler->display->display_options['fields']['name_field_et_3']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field_et_3']['field'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et_3']['label'] = 'PT';
$handler->display->display_options['fields']['name_field_et_3']['group_column'] = 'entity_id';
$handler->display->display_options['fields']['name_field_et_3']['language'] = 'pt';
/* Sort criterion: Taxonomy edge: taxonomy hierarchy order */
$handler->display->display_options['sorts']['term_sort_hierarchy']['id'] = 'term_sort_hierarchy';
$handler->display->display_options['sorts']['term_sort_hierarchy']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['term_sort_hierarchy']['field'] = 'term_sort_hierarchy';
/* Filter criterion: Taxonomy term: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['value'] = array(
  7 => '7',
);
/* Filter criterion: Taxonomy term: Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['name']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: COUNT(Content: Nid) */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['relationship'] = 'reverse_field_geographical_focus_node';
$handler->display->display_options['filters']['nid']['group_type'] = 'count';
$handler->display->display_options['filters']['nid']['exposed'] = TRUE;
$handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
$handler->display->display_options['filters']['nid']['expose']['label'] = 'References';
$handler->display->display_options['filters']['nid']['expose']['description'] = 'Number of content tagged';
$handler->display->display_options['filters']['nid']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
$handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
$handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['nid']['group_info']['label'] = 'Nid';
$handler->display->display_options['filters']['nid']['group_info']['identifier'] = 'nid';
$handler->display->display_options['filters']['nid']['group_info']['remember'] = FALSE;
$handler->display->display_options['filters']['nid']['group_info']['group_items'] = array(
  1 => array(),
  2 => array(),
  3 => array(),
);

/* Display: System */
$handler = $view->new_display('system', 'System', 'system_1');
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['path'] = 'admin/structure/taxonomy/terms/regions';
