<?php

$view = new view();
$view->name = 'admin_views_taxonomy_terms_overarching_categories';
$view->description = 'Provide an administrative view to manage Overarching Categories';
$view->tag = 'landportal, taxonomies, overarching categories';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Administration: Overarching categories';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Overarching categories management';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'edit terms in 27';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '100';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'tid' => 'tid',
  'field_id' => 'field_id',
  'draggableviews' => 'draggableviews',
  'name' => 'name',
  'description_field' => 'description_field',
  'name_field_et' => 'name_field_et',
  'name_field_et_1' => 'name_field_et_1',
  'name_field_et_2' => 'name_field_et_2',
  'name_field_et_3' => 'name_field_et_3',
  'name_field_et_4' => 'name_field_et_4',
  'nid' => 'nid',
  'edit_term' => 'edit_term',
  'views_bulk_operations' => 'views_bulk_operations',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'tid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
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
  'description_field' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
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
  'name_field_et_4' => array(
    'sortable' => 0,
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
);
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
/* Relationship: Taxonomy term: Parent term */
$handler->display->display_options['relationships']['parent']['id'] = 'parent';
$handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['relationships']['parent']['field'] = 'parent';
/* Relationship: Taxonomy term: Content using Overarching categories */
$handler->display->display_options['relationships']['reverse_field_related_domains_node']['id'] = 'reverse_field_related_domains_node';
$handler->display->display_options['relationships']['reverse_field_related_domains_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_related_domains_node']['field'] = 'reverse_field_related_domains_node';
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = 'TID';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
/* Field: Taxonomy term: ID */
$handler->display->display_options['fields']['field_id']['id'] = 'field_id';
$handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
$handler->display->display_options['fields']['field_id']['field'] = 'field_id';
$handler->display->display_options['fields']['field_id']['relationship'] = 'parent';
$handler->display->display_options['fields']['field_id']['label'] = 'PID';
$handler->display->display_options['fields']['field_id']['exclude'] = TRUE;
/* Field: Draggableviews: Taxonomy term */
$handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
$handler->display->display_options['fields']['draggableviews']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
$handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['draggableviews']['draggableviews']['hierarchy_handler'] = 'draggableviews_hierarchy_handler_native';
$handler->display->display_options['fields']['draggableviews']['draggableviews']['save_button_label'] = 'Save order';
$handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Taxonomy term: Description */
$handler->display->display_options['fields']['description_field']['id'] = 'description_field';
$handler->display->display_options['fields']['description_field']['table'] = 'field_data_description_field';
$handler->display->display_options['fields']['description_field']['field'] = 'description_field';
$handler->display->display_options['fields']['description_field']['link_to_entity'] = 0;
/* Field: Entity translation: Name: translated */
$handler->display->display_options['fields']['name_field_et']['id'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field_et']['field'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et']['label'] = 'EN';
$handler->display->display_options['fields']['name_field_et']['exclude'] = TRUE;
$handler->display->display_options['fields']['name_field_et']['alter']['text'] = '[name_field_et] - [name_field_et-value]';
$handler->display->display_options['fields']['name_field_et']['language'] = 'en';
/* Field: Entity translation: Name: translated */
$handler->display->display_options['fields']['name_field_et_1']['id'] = 'name_field_et_1';
$handler->display->display_options['fields']['name_field_et_1']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field_et_1']['field'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et_1']['label'] = 'FR';
$handler->display->display_options['fields']['name_field_et_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['name_field_et_1']['language'] = 'fr';
/* Field: Entity translation: Name: translated */
$handler->display->display_options['fields']['name_field_et_2']['id'] = 'name_field_et_2';
$handler->display->display_options['fields']['name_field_et_2']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field_et_2']['field'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et_2']['label'] = 'ES';
$handler->display->display_options['fields']['name_field_et_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['name_field_et_2']['language'] = 'es';
/* Field: Entity translation: Name: translated */
$handler->display->display_options['fields']['name_field_et_3']['id'] = 'name_field_et_3';
$handler->display->display_options['fields']['name_field_et_3']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field_et_3']['field'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et_3']['label'] = 'PT';
$handler->display->display_options['fields']['name_field_et_3']['exclude'] = TRUE;
$handler->display->display_options['fields']['name_field_et_3']['language'] = 'pt';
/* Field: Entity translation: Name: translated */
$handler->display->display_options['fields']['name_field_et_4']['id'] = 'name_field_et_4';
$handler->display->display_options['fields']['name_field_et_4']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field_et_4']['field'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et_4']['label'] = 'Translations';
$handler->display->display_options['fields']['name_field_et_4']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name_field_et_4']['alter']['text'] = 'EN: [name_field_et]
FR: [name_field_et_1]
ES: [name_field_et_2]
PT: [name_field_et_3]
';
$handler->display->display_options['fields']['name_field_et_4']['alter']['nl2br'] = TRUE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_related_domains_node';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = 'References';
/* Field: Taxonomy term: Term edit link */
$handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['label'] = 'Links';
/* Field: Bulk operations: Taxonomy term */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_taxonomy_term';
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
    'skip_confirmation' => 1,
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
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'overarching_categories' => 'overarching_categories',
);
/* Filter criterion: Taxonomy term: Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
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

/* Display: System */
$handler = $view->new_display('system', 'System', 'system_admin_oacs');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = 'TID';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
/* Field: Taxonomy term: ID */
$handler->display->display_options['fields']['field_id']['id'] = 'field_id';
$handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
$handler->display->display_options['fields']['field_id']['field'] = 'field_id';
$handler->display->display_options['fields']['field_id']['relationship'] = 'parent';
$handler->display->display_options['fields']['field_id']['label'] = 'PID';
$handler->display->display_options['fields']['field_id']['exclude'] = TRUE;
/* Field: Draggableviews: Taxonomy term */
$handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
$handler->display->display_options['fields']['draggableviews']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
$handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['draggableviews']['draggableviews']['hierarchy_handler'] = 'draggableviews_hierarchy_handler_native';
$handler->display->display_options['fields']['draggableviews']['draggableviews']['save_button_label'] = 'Save order';
$handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Taxonomy term: Description */
$handler->display->display_options['fields']['description_field']['id'] = 'description_field';
$handler->display->display_options['fields']['description_field']['table'] = 'field_data_description_field';
$handler->display->display_options['fields']['description_field']['field'] = 'description_field';
$handler->display->display_options['fields']['description_field']['link_to_entity'] = 0;
/* Field: Entity translation: Name: translated */
$handler->display->display_options['fields']['name_field_et']['id'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field_et']['field'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et']['label'] = 'EN';
$handler->display->display_options['fields']['name_field_et']['exclude'] = TRUE;
$handler->display->display_options['fields']['name_field_et']['alter']['text'] = '[name_field_et] - [name_field_et-value]';
$handler->display->display_options['fields']['name_field_et']['language'] = 'en';
/* Field: Entity translation: Name: translated */
$handler->display->display_options['fields']['name_field_et_1']['id'] = 'name_field_et_1';
$handler->display->display_options['fields']['name_field_et_1']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field_et_1']['field'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et_1']['label'] = 'FR';
$handler->display->display_options['fields']['name_field_et_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['name_field_et_1']['language'] = 'fr';
/* Field: Entity translation: Name: translated */
$handler->display->display_options['fields']['name_field_et_2']['id'] = 'name_field_et_2';
$handler->display->display_options['fields']['name_field_et_2']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field_et_2']['field'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et_2']['label'] = 'ES';
$handler->display->display_options['fields']['name_field_et_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['name_field_et_2']['language'] = 'es';
/* Field: Entity translation: Name: translated */
$handler->display->display_options['fields']['name_field_et_3']['id'] = 'name_field_et_3';
$handler->display->display_options['fields']['name_field_et_3']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field_et_3']['field'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et_3']['label'] = 'PT';
$handler->display->display_options['fields']['name_field_et_3']['exclude'] = TRUE;
$handler->display->display_options['fields']['name_field_et_3']['language'] = 'pt';
/* Field: Entity translation: Name: translated */
$handler->display->display_options['fields']['name_field_et_4']['id'] = 'name_field_et_4';
$handler->display->display_options['fields']['name_field_et_4']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field_et_4']['field'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et_4']['label'] = 'Translations';
$handler->display->display_options['fields']['name_field_et_4']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name_field_et_4']['alter']['text'] = 'EN: [name_field_et]
FR: [name_field_et_1]
ES: [name_field_et_2]
PT: [name_field_et_3]
';
$handler->display->display_options['fields']['name_field_et_4']['alter']['nl2br'] = TRUE;
/* Field: Field: Related concepts */
$handler->display->display_options['fields']['field_related_topics']['id'] = 'field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['table'] = 'field_data_field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['field'] = 'field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['delta_offset'] = '0';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_related_domains_node';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = 'References';
/* Field: Taxonomy term: Term edit link */
$handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['label'] = 'Links';
/* Field: Bulk operations: Taxonomy term */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_taxonomy_term';
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
    'skip_confirmation' => 1,
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
$handler->display->display_options['path'] = 'admin/structure/taxonomy/terms/overarching-categories';
