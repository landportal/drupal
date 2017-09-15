<?php

$view = new view();
$view->name = 'lbadm_catalogs';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Adminstration: Land Book Catalogs';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Land Book Catalogs';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
$handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['style_plugin'] = 'table';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = '@start - @end of @total Catalogs';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_orgref_target_id']['id'] = 'field_orgref_target_id';
$handler->display->display_options['relationships']['field_orgref_target_id']['table'] = 'field_data_field_orgref';
$handler->display->display_options['relationships']['field_orgref_target_id']['field'] = 'field_orgref_target_id';
$handler->display->display_options['relationships']['field_orgref_target_id']['label'] = 'Source';
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = '';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
$handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Taxonomy term: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = '';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
$handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['exclude'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name_field']['id'] = 'name_field';
$handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field']['field'] = 'name_field';
$handler->display->display_options['fields']['name_field']['label'] = 'Catalog';
$handler->display->display_options['fields']['name_field']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name_field']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name_field']['alter']['path'] = 'admin/content/landbook/catalogs/[tid]';
$handler->display->display_options['fields']['name_field']['link_to_entity'] = 0;
/* Field: Field: ID */
$handler->display->display_options['fields']['field_id']['id'] = 'field_id';
$handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
$handler->display->display_options['fields']['field_id']['field'] = 'field_id';
/* Field: Field: Acronym */
$handler->display->display_options['fields']['field_acronym']['id'] = 'field_acronym';
$handler->display->display_options['fields']['field_acronym']['table'] = 'field_data_field_acronym';
$handler->display->display_options['fields']['field_acronym']['field'] = 'field_acronym';
$handler->display->display_options['fields']['field_acronym']['relationship'] = 'field_orgref_target_id';
$handler->display->display_options['fields']['field_acronym']['label'] = 'Source';
$handler->display->display_options['fields']['field_acronym']['type'] = 'title_linked';
$handler->display->display_options['fields']['field_acronym']['settings'] = array(
  'title_style' => '_none',
  'title_link' => 'content',
  'title_class' => '',
);
/* Field: Taxonomy term: Description */
$handler->display->display_options['fields']['description_field']['id'] = 'description_field';
$handler->display->display_options['fields']['description_field']['table'] = 'field_data_description_field';
$handler->display->display_options['fields']['description_field']['field'] = 'description_field';
$handler->display->display_options['fields']['description_field']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['description_field']['settings'] = array(
  'trim_length' => '240',
);
$handler->display->display_options['fields']['description_field']['link_to_entity'] = 0;
/* Field: Field: Overarching categories */
$handler->display->display_options['fields']['field_related_domains']['id'] = 'field_related_domains';
$handler->display->display_options['fields']['field_related_domains']['table'] = 'field_data_field_related_domains';
$handler->display->display_options['fields']['field_related_domains']['field'] = 'field_related_domains';
$handler->display->display_options['fields']['field_related_domains']['label'] = 'OA';
$handler->display->display_options['fields']['field_related_domains']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_related_domains']['type'] = 'i18n_taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_related_domains']['delta_offset'] = '0';
/* Field: Field: Related concepts */
$handler->display->display_options['fields']['field_related_topics']['id'] = 'field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['table'] = 'field_data_field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['field'] = 'field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['label'] = 'Concepts';
$handler->display->display_options['fields']['field_related_topics']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_related_topics']['type'] = 'i18n_taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_related_topics']['delta_offset'] = '0';
/* Field: Field: Themes */
$handler->display->display_options['fields']['field_related_themes']['id'] = 'field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['field'] = 'field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_related_themes']['type'] = 'i18n_taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_related_themes']['delta_offset'] = '0';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = 'Tags';
$handler->display->display_options['fields']['nothing']['alter']['text'] = 'OA: [field_related_domains]<br/>
TH: [field_related_themes]<br/>
LV: [field_related_topics]<br/>
Term: [name]';
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
$handler->display->display_options['fields']['edit_term']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['edit_term']['alter']['text'] = '<a href="[path]">View</a> - [edit_term] ';
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
  'datasets' => 'datasets',
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
/* Filter criterion: Field: Organization (field_orgref) (reference filter) */
$handler->display->display_options['filters']['field_orgref_target_id_entityreference_filter']['id'] = 'field_orgref_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_orgref_target_id_entityreference_filter']['table'] = 'field_data_field_orgref';
$handler->display->display_options['filters']['field_orgref_target_id_entityreference_filter']['field'] = 'field_orgref_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_orgref_target_id_entityreference_filter']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_orgref_target_id_entityreference_filter']['expose']['operator_id'] = 'field_orgref_target_id_entityreference_filter_op';
$handler->display->display_options['filters']['field_orgref_target_id_entityreference_filter']['expose']['label'] = 'Source';
$handler->display->display_options['filters']['field_orgref_target_id_entityreference_filter']['expose']['operator'] = 'field_orgref_target_id_entityreference_filter_op';
$handler->display->display_options['filters']['field_orgref_target_id_entityreference_filter']['expose']['identifier'] = 'field_orgref_target_id_entityreference_filter';
$handler->display->display_options['filters']['field_orgref_target_id_entityreference_filter']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111903911 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_orgref_target_id_entityreference_filter']['reference_display'] = 'organizations:ref_book';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'admin/content/landbook/catalogs';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Catalogs';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

