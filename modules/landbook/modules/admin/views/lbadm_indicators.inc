<?php

$view = new view();
$view->name = 'lbadm_indicators';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Administration: Land Book Indicators';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Land Book Indicators';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'edit terms in 25';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
$handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '30';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'tid' => 'tid',
  'tid_1' => 'tid_1',
  'name' => 'name',
  'field_id' => 'field_id',
  'draggableviews' => 'draggableviews',
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
  'tid_1' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
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
);
$handler->display->display_options['style_options']['override'] = FALSE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '@start - @end of @total Indicators';
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = 'Nothing there, sorry';
/* Relationship: Taxonomy term: Parent term */
$handler->display->display_options['relationships']['parent']['id'] = 'parent';
$handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['relationships']['parent']['field'] = 'parent';
/* Relationship: Taxonomy term: Catalog (field_dataset) */
$handler->display->display_options['relationships']['field_dataset_tid']['id'] = 'field_dataset_tid';
$handler->display->display_options['relationships']['field_dataset_tid']['table'] = 'field_data_field_dataset';
$handler->display->display_options['relationships']['field_dataset_tid']['field'] = 'field_dataset_tid';
$handler->display->display_options['relationships']['field_dataset_tid']['label'] = 'Catalog';
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid_1']['field'] = 'tid';
$handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
$handler->display->display_options['fields']['tid_1']['label'] = 'PID';
$handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid_1']['separator'] = '';
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['fields']['tid_2']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid_2']['field'] = 'tid';
$handler->display->display_options['fields']['tid_2']['relationship'] = 'field_dataset_tid';
$handler->display->display_options['fields']['tid_2']['label'] = 'CID';
$handler->display->display_options['fields']['tid_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid_2']['separator'] = '';
/* Field: Taxonomy term: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name_field_1']['id'] = 'name_field_1';
$handler->display->display_options['fields']['name_field_1']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field_1']['field'] = 'name_field';
$handler->display->display_options['fields']['name_field_1']['relationship'] = 'field_dataset_tid';
$handler->display->display_options['fields']['name_field_1']['label'] = 'Catalog';
$handler->display->display_options['fields']['name_field_1']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name_field_1']['alter']['path'] = 'admin/content/landbook/catalogs/[tid_2]';
$handler->display->display_options['fields']['name_field_1']['link_to_entity'] = 0;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name_field']['id'] = 'name_field';
$handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field']['field'] = 'name_field';
$handler->display->display_options['fields']['name_field']['label'] = 'Indicator';
$handler->display->display_options['fields']['name_field']['link_to_entity'] = 1;
/* Field: Field: ID */
$handler->display->display_options['fields']['field_id']['id'] = 'field_id';
$handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
$handler->display->display_options['fields']['field_id']['field'] = 'field_id';
/* Field: Taxonomy term: Measurement unit */
$handler->display->display_options['fields']['field_unit']['id'] = 'field_unit';
$handler->display->display_options['fields']['field_unit']['table'] = 'field_data_field_unit';
$handler->display->display_options['fields']['field_unit']['field'] = 'field_unit';
$handler->display->display_options['fields']['field_unit']['label'] = 'Unit';
/* Field: Field: Overarching categories */
$handler->display->display_options['fields']['field_related_domains']['id'] = 'field_related_domains';
$handler->display->display_options['fields']['field_related_domains']['table'] = 'field_data_field_related_domains';
$handler->display->display_options['fields']['field_related_domains']['field'] = 'field_related_domains';
$handler->display->display_options['fields']['field_related_domains']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_related_domains']['type'] = 'i18n_taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_related_domains']['delta_offset'] = '0';
/* Field: Field: Themes */
$handler->display->display_options['fields']['field_related_themes']['id'] = 'field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['field'] = 'field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_related_themes']['type'] = 'i18n_taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_related_themes']['delta_offset'] = '0';
/* Field: Field: Related concepts */
$handler->display->display_options['fields']['field_related_topics']['id'] = 'field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['table'] = 'field_data_field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['field'] = 'field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_related_topics']['type'] = 'i18n_taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_related_topics']['delta_offset'] = '0';
/* Field: Taxonomy term: Description */
$handler->display->display_options['fields']['description_field']['id'] = 'description_field';
$handler->display->display_options['fields']['description_field']['table'] = 'field_data_description_field';
$handler->display->display_options['fields']['description_field']['field'] = 'description_field';
$handler->display->display_options['fields']['description_field']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['description_field']['settings'] = array(
  'trim_length' => '240',
);
$handler->display->display_options['fields']['description_field']['link_to_entity'] = 0;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = 'Tags';
$handler->display->display_options['fields']['nothing']['alter']['text'] = 'OA: [field_related_domains]<br/>
TH: [field_related_themes]<br/>
LV: [field_related_topics]';
/* Field: Taxonomy term: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'term_authoring_info';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Updated';
$handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
$handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['changed']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['changed']['date_format'] = 'short';
$handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
/* Field: Taxonomy term: Term edit link */
$handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['label'] = 'Links';
$handler->display->display_options['fields']['edit_term']['text'] = 'Edit';
/* Sort criterion: Taxonomy term: Weight */
$handler->display->display_options['sorts']['weight']['id'] = 'weight';
$handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['weight']['field'] = 'weight';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'indicators' => 'indicators',
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
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Field: ID (field_id) */
$handler->display->display_options['filters']['field_id_value']['id'] = 'field_id_value';
$handler->display->display_options['filters']['field_id_value']['table'] = 'field_data_field_id';
$handler->display->display_options['filters']['field_id_value']['field'] = 'field_id_value';
$handler->display->display_options['filters']['field_id_value']['operator'] = 'contains';
$handler->display->display_options['filters']['field_id_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_id_value']['expose']['operator_id'] = 'field_id_value_op';
$handler->display->display_options['filters']['field_id_value']['expose']['label'] = 'ID';
$handler->display->display_options['filters']['field_id_value']['expose']['operator'] = 'field_id_value_op';
$handler->display->display_options['filters']['field_id_value']['expose']['identifier'] = 'field_id_value';
$handler->display->display_options['filters']['field_id_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);

/* Display: Indicators */
$handler = $view->new_display('page', 'Indicators', 'page');
$handler->display->display_options['display_description'] = 'All LB indicators';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'indicators' => 'indicators',
);
$handler->display->display_options['filters']['machine_name']['group'] = 1;
/* Filter criterion: Taxonomy term: Name (name_field) */
$handler->display->display_options['filters']['name_field_value']['id'] = 'name_field_value';
$handler->display->display_options['filters']['name_field_value']['table'] = 'field_data_name_field';
$handler->display->display_options['filters']['name_field_value']['field'] = 'name_field_value';
$handler->display->display_options['filters']['name_field_value']['relationship'] = 'field_dataset_tid';
$handler->display->display_options['filters']['name_field_value']['operator'] = 'contains';
$handler->display->display_options['filters']['name_field_value']['group'] = 1;
$handler->display->display_options['filters']['name_field_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['name_field_value']['expose']['operator_id'] = 'name_field_value_op';
$handler->display->display_options['filters']['name_field_value']['expose']['label'] = 'Catalog';
$handler->display->display_options['filters']['name_field_value']['expose']['operator'] = 'name_field_value_op';
$handler->display->display_options['filters']['name_field_value']['expose']['identifier'] = 'name_field_value';
$handler->display->display_options['filters']['name_field_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Taxonomy term: Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'contains';
$handler->display->display_options['filters']['name']['group'] = 1;
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Indicator';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Field: ID (field_id) */
$handler->display->display_options['filters']['field_id_value']['id'] = 'field_id_value';
$handler->display->display_options['filters']['field_id_value']['table'] = 'field_data_field_id';
$handler->display->display_options['filters']['field_id_value']['field'] = 'field_id_value';
$handler->display->display_options['filters']['field_id_value']['operator'] = 'contains';
$handler->display->display_options['filters']['field_id_value']['group'] = 1;
$handler->display->display_options['filters']['field_id_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_id_value']['expose']['operator_id'] = 'field_id_value_op';
$handler->display->display_options['filters']['field_id_value']['expose']['label'] = 'ID';
$handler->display->display_options['filters']['field_id_value']['expose']['operator'] = 'field_id_value_op';
$handler->display->display_options['filters']['field_id_value']['expose']['identifier'] = 'field_id_value';
$handler->display->display_options['filters']['field_id_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Taxonomy term: Measurement unit (field_unit) */
$handler->display->display_options['filters']['field_unit_value']['id'] = 'field_unit_value';
$handler->display->display_options['filters']['field_unit_value']['table'] = 'field_data_field_unit';
$handler->display->display_options['filters']['field_unit_value']['field'] = 'field_unit_value';
$handler->display->display_options['filters']['field_unit_value']['operator'] = 'contains';
$handler->display->display_options['filters']['field_unit_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_unit_value']['expose']['operator_id'] = 'field_unit_value_op';
$handler->display->display_options['filters']['field_unit_value']['expose']['label'] = 'Unit';
$handler->display->display_options['filters']['field_unit_value']['expose']['operator'] = 'field_unit_value_op';
$handler->display->display_options['filters']['field_unit_value']['expose']['identifier'] = 'field_unit_value';
$handler->display->display_options['filters']['field_unit_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['path'] = 'admin/content/landbook/indicators';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Indicators';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: System */
$handler = $view->new_display('system', 'System', 'system_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Land Book Catalog Indicators';
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['content'] = '<h2>[name_field_1] <small>(<a href="/taxonomy/term/[tid_2]/edit">edit</a>)</small></h2>';
$handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '@start - @end of @total Indicators';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
$handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid_1']['field'] = 'tid';
$handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
$handler->display->display_options['fields']['tid_1']['label'] = 'PID';
$handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid_1']['separator'] = '';
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid_2']['id'] = 'tid_2';
$handler->display->display_options['fields']['tid_2']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid_2']['field'] = 'tid';
$handler->display->display_options['fields']['tid_2']['relationship'] = 'field_dataset_tid';
$handler->display->display_options['fields']['tid_2']['label'] = 'CID';
$handler->display->display_options['fields']['tid_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid_2']['separator'] = '';
/* Field: Taxonomy term: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name_field_1']['id'] = 'name_field_1';
$handler->display->display_options['fields']['name_field_1']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field_1']['field'] = 'name_field';
$handler->display->display_options['fields']['name_field_1']['relationship'] = 'field_dataset_tid';
$handler->display->display_options['fields']['name_field_1']['label'] = 'Catalog';
$handler->display->display_options['fields']['name_field_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['name_field_1']['link_to_entity'] = 1;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name_field']['id'] = 'name_field';
$handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field']['field'] = 'name_field';
$handler->display->display_options['fields']['name_field']['label'] = 'Indicator';
$handler->display->display_options['fields']['name_field']['link_to_entity'] = 1;
/* Field: Field: ID */
$handler->display->display_options['fields']['field_id']['id'] = 'field_id';
$handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
$handler->display->display_options['fields']['field_id']['field'] = 'field_id';
/* Field: Taxonomy term: Measurement unit */
$handler->display->display_options['fields']['field_unit']['id'] = 'field_unit';
$handler->display->display_options['fields']['field_unit']['table'] = 'field_data_field_unit';
$handler->display->display_options['fields']['field_unit']['field'] = 'field_unit';
$handler->display->display_options['fields']['field_unit']['label'] = 'Unit';
/* Field: Field: Overarching categories */
$handler->display->display_options['fields']['field_related_domains']['id'] = 'field_related_domains';
$handler->display->display_options['fields']['field_related_domains']['table'] = 'field_data_field_related_domains';
$handler->display->display_options['fields']['field_related_domains']['field'] = 'field_related_domains';
$handler->display->display_options['fields']['field_related_domains']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_related_domains']['type'] = 'i18n_taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_related_domains']['delta_offset'] = '0';
/* Field: Field: Themes */
$handler->display->display_options['fields']['field_related_themes']['id'] = 'field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['field'] = 'field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_related_themes']['type'] = 'i18n_taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_related_themes']['delta_offset'] = '0';
/* Field: Field: Related concepts */
$handler->display->display_options['fields']['field_related_topics']['id'] = 'field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['table'] = 'field_data_field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['field'] = 'field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_related_topics']['type'] = 'i18n_taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_related_topics']['delta_offset'] = '0';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = 'Tags';
$handler->display->display_options['fields']['nothing']['alter']['text'] = 'OA: [field_related_domains]<br/>
TH: [field_related_themes]<br/>
LV: [field_related_topics]';
/* Field: Taxonomy term: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'term_authoring_info';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Updated';
$handler->display->display_options['fields']['changed']['alter']['max_length'] = '10';
$handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['changed']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['changed']['date_format'] = 'short';
$handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
/* Field: Taxonomy term: Term edit link */
$handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['label'] = 'Links';
$handler->display->display_options['fields']['edit_term']['text'] = 'Edit';
/* Field: Draggableviews: Taxonomy term */
$handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
$handler->display->display_options['fields']['draggableviews']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
$handler->display->display_options['fields']['draggableviews']['label'] = '';
$handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['draggableviews']['draggableviews']['handler'] = 'draggableviews_taxonomy_term_handler_taxonomy_term';
$handler->display->display_options['fields']['draggableviews']['draggableviews']['hierarchy_handler'] = 'draggableviews_taxonomy_term_hierarchy_handler_taxonomy_term';
$handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Draggableviews: Weight */
$handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
$handler->display->display_options['sorts']['weight_1']['table'] = 'draggableviews_structure';
$handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
$handler->display->display_options['sorts']['weight_1']['draggableviews_setting_view'] = 'lbadm_indicators:system_1';
$handler->display->display_options['sorts']['weight_1']['draggableviews_setting_new_items_bottom_list'] = 1;
/* Sort criterion: Taxonomy term: Weight */
$handler->display->display_options['sorts']['weight']['id'] = 'weight';
$handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['weight']['field'] = 'weight';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: Term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['relationship'] = 'field_dataset_tid';
$handler->display->display_options['arguments']['tid']['default_action'] = 'empty';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['path'] = 'admin/content/landbook/catalogs/%';

