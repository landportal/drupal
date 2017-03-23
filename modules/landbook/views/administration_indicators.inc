<?php

$view = new view();
$view->name = 'administration_indicators';
$view->description = 'Manage Indicators taxonomy';
$view->tag = 'default, admin';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Administration: Indicators';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Manage Indicators';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
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
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'edit_term' => 'edit_term',
  'name' => 'name',
  'field_id' => 'field_id',
  'description' => 'description',
  'field_dataset' => 'field_dataset',
  'field_highlow' => 'field_highlow',
  'field_hascodedvalue' => 'field_hascodedvalue',
  'field_min' => 'field_min',
  'field_max' => 'field_max',
  'field_unit' => 'field_unit',
  'field_related_domains' => 'field_related_domains',
  'field_related_themes' => 'field_related_themes',
  'field_related_topics' => 'field_related_topics',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_term' => array(
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
  'field_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'description' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_dataset' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_highlow' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_hascodedvalue' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_min' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_max' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_unit' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_related_domains' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_related_themes' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_related_topics' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
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
/* Field: Taxonomy term: Term edit link */
$handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['label'] = 'Actions';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Taxonomy term: Term description */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['description']['field'] = 'description';
$handler->display->display_options['fields']['description']['label'] = 'Description';
$handler->display->display_options['fields']['description']['alter']['max_length'] = '400';
$handler->display->display_options['fields']['description']['alter']['trim'] = TRUE;
/* Field: Taxonomy term: ID */
$handler->display->display_options['fields']['field_id']['id'] = 'field_id';
$handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
$handler->display->display_options['fields']['field_id']['field'] = 'field_id';
$handler->display->display_options['fields']['field_id']['exclude'] = TRUE;
/* Field: Taxonomy term: Dataset */
$handler->display->display_options['fields']['field_dataset']['id'] = 'field_dataset';
$handler->display->display_options['fields']['field_dataset']['table'] = 'field_data_field_dataset';
$handler->display->display_options['fields']['field_dataset']['field'] = 'field_dataset';
$handler->display->display_options['fields']['field_dataset']['exclude'] = TRUE;
/* Field: Taxonomy term: High / Low */
$handler->display->display_options['fields']['field_highlow']['id'] = 'field_highlow';
$handler->display->display_options['fields']['field_highlow']['table'] = 'field_data_field_highlow';
$handler->display->display_options['fields']['field_highlow']['field'] = 'field_highlow';
$handler->display->display_options['fields']['field_highlow']['exclude'] = TRUE;
/* Field: Taxonomy term: has Coded Value */
$handler->display->display_options['fields']['field_hascodedvalue']['id'] = 'field_hascodedvalue';
$handler->display->display_options['fields']['field_hascodedvalue']['table'] = 'field_data_field_hascodedvalue';
$handler->display->display_options['fields']['field_hascodedvalue']['field'] = 'field_hascodedvalue';
$handler->display->display_options['fields']['field_hascodedvalue']['exclude'] = TRUE;
/* Field: Taxonomy term: min */
$handler->display->display_options['fields']['field_min']['id'] = 'field_min';
$handler->display->display_options['fields']['field_min']['table'] = 'field_data_field_min';
$handler->display->display_options['fields']['field_min']['field'] = 'field_min';
$handler->display->display_options['fields']['field_min']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_min']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 1,
);
/* Field: Taxonomy term: max */
$handler->display->display_options['fields']['field_max']['id'] = 'field_max';
$handler->display->display_options['fields']['field_max']['table'] = 'field_data_field_max';
$handler->display->display_options['fields']['field_max']['field'] = 'field_max';
$handler->display->display_options['fields']['field_max']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_max']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 1,
);
/* Field: Taxonomy term: Measurement unit */
$handler->display->display_options['fields']['field_unit']['id'] = 'field_unit';
$handler->display->display_options['fields']['field_unit']['table'] = 'field_data_field_unit';
$handler->display->display_options['fields']['field_unit']['field'] = 'field_unit';
$handler->display->display_options['fields']['field_unit']['exclude'] = TRUE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = 'Metadata___details';
$handler->display->display_options['fields']['nothing']['alter']['text'] = 'ID: [field_id] <br />
Dataset [field_dataset] <br />
Measurement unit: [field_unit] <br />
Min: [field_min] <br />
Max: [field_max] <br />
High/Low: [field_highlow] <br />
Has Coded value: [field_hascodedvalue] <br />
';
/* Field: Field: Overarching categories */
$handler->display->display_options['fields']['field_related_domains']['id'] = 'field_related_domains';
$handler->display->display_options['fields']['field_related_domains']['table'] = 'field_data_field_related_domains';
$handler->display->display_options['fields']['field_related_domains']['field'] = 'field_related_domains';
$handler->display->display_options['fields']['field_related_domains']['delta_offset'] = '0';
/* Field: Field: Themes */
$handler->display->display_options['fields']['field_related_themes']['id'] = 'field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['field'] = 'field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['delta_offset'] = '0';
/* Field: Field: Related concepts */
$handler->display->display_options['fields']['field_related_topics']['id'] = 'field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['table'] = 'field_data_field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['field'] = 'field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['delta_offset'] = '0';
/* Sort criterion: Taxonomy term: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['name']['field'] = 'name';
/* Filter criterion: Taxonomy term: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['value'] = array(
  25 => '25',
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
/* Filter criterion: Field: Overarching categories (field_related_domains) */
$handler->display->display_options['filters']['field_related_domains_tid']['id'] = 'field_related_domains_tid';
$handler->display->display_options['filters']['field_related_domains_tid']['table'] = 'field_data_field_related_domains';
$handler->display->display_options['filters']['field_related_domains_tid']['field'] = 'field_related_domains_tid';
$handler->display->display_options['filters']['field_related_domains_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_related_domains_tid']['expose']['operator_id'] = 'field_related_domains_tid_op';
$handler->display->display_options['filters']['field_related_domains_tid']['expose']['label'] = 'Overarching categories (field_related_domains)';
$handler->display->display_options['filters']['field_related_domains_tid']['expose']['operator'] = 'field_related_domains_tid_op';
$handler->display->display_options['filters']['field_related_domains_tid']['expose']['identifier'] = 'field_related_domains_tid';
$handler->display->display_options['filters']['field_related_domains_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_domains_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_related_domains_tid']['vocabulary'] = 'overarching_categories';
/* Filter criterion: Field: Themes (field_related_themes) */
$handler->display->display_options['filters']['field_related_themes_tid']['id'] = 'field_related_themes_tid';
$handler->display->display_options['filters']['field_related_themes_tid']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['filters']['field_related_themes_tid']['field'] = 'field_related_themes_tid';
$handler->display->display_options['filters']['field_related_themes_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_related_themes_tid']['expose']['operator_id'] = 'field_related_themes_tid_op';
$handler->display->display_options['filters']['field_related_themes_tid']['expose']['label'] = 'Themes (field_related_themes)';
$handler->display->display_options['filters']['field_related_themes_tid']['expose']['operator'] = 'field_related_themes_tid_op';
$handler->display->display_options['filters']['field_related_themes_tid']['expose']['identifier'] = 'field_related_themes_tid';
$handler->display->display_options['filters']['field_related_themes_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_themes_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_related_themes_tid']['vocabulary'] = 'themes';
/* Filter criterion: Field: Related concepts (field_related_topics) */
$handler->display->display_options['filters']['field_related_topics_tid']['id'] = 'field_related_topics_tid';
$handler->display->display_options['filters']['field_related_topics_tid']['table'] = 'field_data_field_related_topics';
$handler->display->display_options['filters']['field_related_topics_tid']['field'] = 'field_related_topics_tid';
$handler->display->display_options['filters']['field_related_topics_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_related_topics_tid']['expose']['operator_id'] = 'field_related_topics_tid_op';
$handler->display->display_options['filters']['field_related_topics_tid']['expose']['label'] = 'Related concepts (field_related_topics)';
$handler->display->display_options['filters']['field_related_topics_tid']['expose']['operator'] = 'field_related_topics_tid_op';
$handler->display->display_options['filters']['field_related_topics_tid']['expose']['identifier'] = 'field_related_topics_tid';
$handler->display->display_options['filters']['field_related_topics_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_related_topics_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_related_topics_tid']['vocabulary'] = 'landvoc_concepts';
/* Filter criterion: Taxonomy term: Dataset (field_dataset) */
$handler->display->display_options['filters']['field_dataset_tid']['id'] = 'field_dataset_tid';
$handler->display->display_options['filters']['field_dataset_tid']['table'] = 'field_data_field_dataset';
$handler->display->display_options['filters']['field_dataset_tid']['field'] = 'field_dataset_tid';
$handler->display->display_options['filters']['field_dataset_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_dataset_tid']['expose']['operator_id'] = 'field_dataset_tid_op';
$handler->display->display_options['filters']['field_dataset_tid']['expose']['label'] = 'Dataset (field_dataset)';
$handler->display->display_options['filters']['field_dataset_tid']['expose']['operator'] = 'field_dataset_tid_op';
$handler->display->display_options['filters']['field_dataset_tid']['expose']['identifier'] = 'field_dataset_tid';
$handler->display->display_options['filters']['field_dataset_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_dataset_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_dataset_tid']['vocabulary'] = 'datasets';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_admin_indicators');
$handler->display->display_options['path'] = 'admin/structure/taxonomy/terms/indicators';
