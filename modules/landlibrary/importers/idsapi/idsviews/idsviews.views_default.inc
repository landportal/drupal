<?php
/**
 * @file
 * idsviews.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function idsviews_views_default_views() {
  $export = array();
  $additional_fields = variable_get('idsapi_additional_fields', FALSE);

  /******************* IDS Documents View *******************/

  $view = new view;
  $view->name = 'ids_documents_view';
  $view->description = 'View used to retrieve IDS documents.';
  $view->tag = 'default';
  $view->base_table = 'idsviews_documents';
  $view->human_name = 'IDS Documents View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE;

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'ids-documents-view';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;

  /* No results behavior: No results found */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['ui_name'] = 'No results found';
  $handler->display->display_options['empty']['area']['label'] = 'No results';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'The IDS API retrieved no results for your query. Please try using different serch terms.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;

  /* Field: IDS: Site */
  $handler->display->display_options['fields']['site']['id'] = 'site';
  $handler->display->display_options['fields']['site']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['site']['field'] = 'site';
  $handler->display->display_options['fields']['site']['label'] = '';
  $handler->display->display_options['fields']['site']['exclude'] = TRUE;
  $handler->display->display_options['fields']['site']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['site']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['site']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['site']['alter']['external'] = 0;
  $handler->display->display_options['fields']['site']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['site']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['site']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['site']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['site']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['site']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['site']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['site']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['site']['alter']['html'] = 0;
  $handler->display->display_options['fields']['site']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['site']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['site']['hide_empty'] = 0;
  $handler->display->display_options['fields']['site']['empty_zero'] = 0;
  $handler->display->display_options['fields']['site']['hide_alter_empty'] = 1;

  /* Field: IDS: Object ID */
  $handler->display->display_options['fields']['object_id']['id'] = 'object_id';
  $handler->display->display_options['fields']['object_id']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['object_id']['field'] = 'object_id';
  $handler->display->display_options['fields']['object_id']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['object_id']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['object_id']['alter']['path'] = 'eldis-documents-view?object_id_filter=[object_id]';
  $handler->display->display_options['fields']['object_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['object_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['object_id']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['object_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['object_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['object_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['object_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['object_id']['hide_alter_empty'] = 1;

  /* Field: IDS: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[site]-documents?object_id_filter=[object_id]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;

  /* Field: IDS: Authors */
  $handler->display->display_options['fields']['authors']['id'] = 'authors';
  $handler->display->display_options['fields']['authors']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['authors']['field'] = 'authors';
  $handler->display->display_options['fields']['authors']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['authors']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['authors']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['authors']['alter']['external'] = 0;
  $handler->display->display_options['fields']['authors']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['authors']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['authors']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['authors']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['authors']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['authors']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['authors']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['authors']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['authors']['alter']['html'] = 0;
  $handler->display->display_options['fields']['authors']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['authors']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['authors']['hide_empty'] = 1;
  $handler->display->display_options['fields']['authors']['empty_zero'] = 1;
  $handler->display->display_options['fields']['authors']['hide_alter_empty'] = 1;

  /* Field: IDS: Keywords */
  $handler->display->display_options['fields']['keywords']['id'] = 'keywords';
  $handler->display->display_options['fields']['keywords']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['keywords']['field'] = 'keywords';
  $handler->display->display_options['fields']['keywords']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['keywords']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['keywords']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['keywords']['alter']['external'] = 0;
  $handler->display->display_options['fields']['keywords']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['keywords']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['keywords']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['keywords']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['keywords']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['keywords']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['keywords']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['keywords']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['keywords']['alter']['html'] = 0;
  $handler->display->display_options['fields']['keywords']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['keywords']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['keywords']['hide_empty'] = 1;
  $handler->display->display_options['fields']['keywords']['empty_zero'] = 0;
  $handler->display->display_options['fields']['keywords']['hide_alter_empty'] = 0;

  /* Field: IDS: metadata_languages */

  $handler->display->display_options['fields']['metadata_languages']['id'] = "metadata_languages";
  $handler->display->display_options['fields']['metadata_languages']['table'] = "idsviews_documents";
  $handler->display->display_options['fields']['metadata_languages']['field'] = "metadata_languages";
  $handler->display->display_options['fields']['metadata_languages']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['metadata_languages']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['metadata_languages']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['metadata_languages']['alter']['external'] = 0;
  $handler->display->display_options['fields']['metadata_languages']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['metadata_languages']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['metadata_languages']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['metadata_languages']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['metadata_languages']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['metadata_languages']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['metadata_languages']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['metadata_languages']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['metadata_languages']['alter']['html'] = 0;
  $handler->display->display_options['fields']['metadata_languages']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['metadata_languages']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['metadata_languages']['hide_empty'] = 1;
  $handler->display->display_options['fields']['metadata_languages']['empty_zero'] = 1;
  $handler->display->display_options['fields']['metadata_languages']['hide_alter_empty'] = 1;


  /* Field: IDS: Themes */
  $handler->display->display_options['fields']['category_theme_array']['id'] = 'category_theme_array';
  $handler->display->display_options['fields']['category_theme_array']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['category_theme_array']['field'] = 'category_theme_array';
  $handler->display->display_options['fields']['category_theme_array']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['alter']['external'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['category_theme_array']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['category_theme_array']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['alter']['html'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['category_theme_array']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['category_theme_array']['hide_empty'] = 1;
  $handler->display->display_options['fields']['category_theme_array']['empty_zero'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['hide_alter_empty'] = 0;


  /* Field: IDS: Subjects - Included only when using a partner�s API keys */
  if ($additional_fields) {
    idsviews_display_subject_field($handler->display, 'idsviews_documents');
  }

  /* Field: IDS: Countries */
  $handler->display->display_options['fields']['country_focus_array']['id'] = 'country_focus_array';
  $handler->display->display_options['fields']['country_focus_array']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['country_focus_array']['field'] = 'country_focus_array';
  $handler->display->display_options['fields']['country_focus_array']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['alter']['external'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['country_focus_array']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['country_focus_array']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['alter']['html'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['country_focus_array']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['country_focus_array']['hide_empty'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['empty_zero'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['hide_alter_empty'] = 1;

  /* Field: IDS: Regions */
  $handler->display->display_options['fields']['category_region_array']['id'] = 'category_region_array';
  $handler->display->display_options['fields']['category_region_array']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['category_region_array']['field'] = 'category_region_array';
  $handler->display->display_options['fields']['category_region_array']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['category_region_array']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['category_region_array']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['category_region_array']['alter']['external'] = 0;
  $handler->display->display_options['fields']['category_region_array']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['category_region_array']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['category_region_array']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['category_region_array']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['category_region_array']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['category_region_array']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['category_region_array']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['category_region_array']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['category_region_array']['alter']['html'] = 0;
  $handler->display->display_options['fields']['category_region_array']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['category_region_array']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['category_region_array']['hide_empty'] = 1;
  $handler->display->display_options['fields']['category_region_array']['empty_zero'] = 0;
  $handler->display->display_options['fields']['category_region_array']['hide_alter_empty'] = 0;

  /* Field: IDS: Description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['description']['alter']['nl2br'] = 1;
  $handler->display->display_options['fields']['description']['alter']['max_length'] = '5000';
  $handler->display->display_options['fields']['description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['description']['alter']['more_link'] = 1;
  $handler->display->display_options['fields']['description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['description']['alter']['html'] = 1;
  $handler->display->display_options['fields']['description']['element_type'] = 'em';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['description']['hide_alter_empty'] = 1;

  /* Field: IDS: Publisher */
  $handler->display->display_options['fields']['publisher']['id'] = 'publisher';
  $handler->display->display_options['fields']['publisher']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['publisher']['field'] = 'publisher';
  $handler->display->display_options['fields']['publisher']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['publisher']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['publisher']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['publisher']['alter']['external'] = 0;
  $handler->display->display_options['fields']['publisher']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['publisher']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['publisher']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['publisher']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['publisher']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['publisher']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['publisher']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['publisher']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['publisher']['alter']['html'] = 0;
  $handler->display->display_options['fields']['publisher']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['publisher']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['publisher']['hide_empty'] = 1;
  $handler->display->display_options['fields']['publisher']['empty_zero'] = 0;
  $handler->display->display_options['fields']['publisher']['hide_alter_empty'] = 0;

  /* Field: IDS: Date updated */
  $handler->display->display_options['fields']['date_updated']['id'] = 'date_updated';
  $handler->display->display_options['fields']['date_updated']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['date_updated']['field'] = 'date_updated';
  $handler->display->display_options['fields']['date_updated']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['date_updated']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['date_updated']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['date_updated']['alter']['external'] = 0;
  $handler->display->display_options['fields']['date_updated']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['date_updated']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['date_updated']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['date_updated']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['date_updated']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['date_updated']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['date_updated']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['date_updated']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['date_updated']['alter']['html'] = 0;
  $handler->display->display_options['fields']['date_updated']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['date_updated']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['date_updated']['hide_empty'] = 0;
  $handler->display->display_options['fields']['date_updated']['empty_zero'] = 0;
  $handler->display->display_options['fields']['date_updated']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['date_updated']['date_format'] = 'long';

  /* Field: IDS: Metadata URL */
  $handler->display->display_options['fields']['metadata_url']['id'] = 'metadata_url';
  $handler->display->display_options['fields']['metadata_url']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['metadata_url']['field'] = 'metadata_url';
  $handler->display->display_options['fields']['metadata_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['metadata_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['metadata_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['metadata_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['metadata_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['metadata_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['metadata_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['metadata_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['metadata_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['metadata_url']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['metadata_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['metadata_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['metadata_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['metadata_url']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['metadata_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['metadata_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['metadata_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['metadata_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['metadata_url']['display_as_link'] = 1;

  /* Field: IDS: External URLs */
  $handler->display->display_options['fields']['urls']['id'] = 'urls';
  $handler->display->display_options['fields']['urls']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['urls']['field'] = 'urls';
  $handler->display->display_options['fields']['urls']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['urls']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['urls']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['urls']['alter']['external'] = 0;
  $handler->display->display_options['fields']['urls']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['urls']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['urls']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['urls']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['urls']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['urls']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['urls']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['urls']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['urls']['alter']['html'] = 0;
  $handler->display->display_options['fields']['urls']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['urls']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['urls']['hide_empty'] = 0;
  $handler->display->display_options['fields']['urls']['empty_zero'] = 0;
  $handler->display->display_options['fields']['urls']['hide_alter_empty'] = 1;


  /* Field: IDS: Corporate Authors */
  $handler->display->display_options['fields']['corporate_author']['id'] = 'corporate_author';
  $handler->display->display_options['fields']['corporate_author']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['corporate_author']['field'] = 'corporate_author';
  $handler->display->display_options['fields']['corporate_author']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['corporate_author']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['corporate_author']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['corporate_author']['alter']['external'] = 0;
  $handler->display->display_options['fields']['corporate_author']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['corporate_author']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['corporate_author']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['corporate_author']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['corporate_author']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['corporate_author']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['corporate_author']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['corporate_author']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['corporate_author']['alter']['html'] = 0;
  $handler->display->display_options['fields']['corporate_author']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['corporate_author']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['corporate_author']['hide_empty'] = 0;
  $handler->display->display_options['fields']['corporate_author']['empty_zero'] = 0;
  $handler->display->display_options['fields']['corporate_author']['hide_alter_empty'] = 1;


  /* Sort criterion: IDS: Sort order */
  $handler->display->display_options['sorts']['sort_order']['id'] = 'sort_order';
  $handler->display->display_options['sorts']['sort_order']['table'] = 'idsviews_documents';
  $handler->display->display_options['sorts']['sort_order']['field'] = 'sort_order';
  $handler->display->display_options['sorts']['sort_order']['order'] = 'DESC';

  /* Filter criterion: IDS: Query */
  $handler->display->display_options['filters']['query_filter']['id'] = 'query_filter';
  $handler->display->display_options['filters']['query_filter']['table'] = 'idsviews_documents';
  $handler->display->display_options['filters']['query_filter']['field'] = 'query_filter';
  $handler->display->display_options['filters']['query_filter']['group'] = 1;
  $handler->display->display_options['filters']['query_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['query_filter']['expose']['operator_id'] = 'query_filter_op';
  $handler->display->display_options['filters']['query_filter']['expose']['label'] = 'Query';
  $handler->display->display_options['filters']['query_filter']['expose']['operator'] = 'query_filter_op';
  $handler->display->display_options['filters']['query_filter']['expose']['identifier'] = 'query_filter';
  $handler->display->display_options['filters']['query_filter']['expose']['multiple'] = FALSE;

  /* Filter criterion: IDS: Dataset */
  $handler->display->display_options['filters']['dataset_filter']['id'] = 'dataset_filter';
  $handler->display->display_options['filters']['dataset_filter']['table'] = 'idsviews_documents';
  $handler->display->display_options['filters']['dataset_filter']['field'] = 'dataset_filter';
  $handler->display->display_options['filters']['dataset_filter']['group'] = 1;

  /* Filter criterion: IDS: Keyword */
  $handler->display->display_options['filters']['keyword_filter']['id'] = 'keyword_filter';
  $handler->display->display_options['filters']['keyword_filter']['table'] = 'idsviews_documents';
  $handler->display->display_options['filters']['keyword_filter']['field'] = 'keyword_filter';
  $handler->display->display_options['filters']['keyword_filter']['group'] = 1;
  $handler->display->display_options['filters']['keyword_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keyword_filter']['expose']['operator_id'] = 'keyword_filter_op';
  $handler->display->display_options['filters']['keyword_filter']['expose']['label'] = 'Keyword';
  $handler->display->display_options['filters']['keyword_filter']['expose']['operator'] = 'keyword_filter_op';
  $handler->display->display_options['filters']['keyword_filter']['expose']['identifier'] = 'keyword_filter';
  $handler->display->display_options['filters']['keyword_filter']['expose']['multiple'] = FALSE;

  /* Filter criterion: IDS: Countries */
  $handler->display->display_options['filters']['country_filter']['id'] = 'country_filter';
  $handler->display->display_options['filters']['country_filter']['table'] = 'idsviews_documents';
  $handler->display->display_options['filters']['country_filter']['field'] = 'country_filter';
  $handler->display->display_options['filters']['country_filter']['value'] = array();
  $handler->display->display_options['filters']['country_filter']['group'] = 1;
  $handler->display->display_options['filters']['country_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['country_filter']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['country_filter']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['country_filter']['expose']['operator'] = 'country_filter_op';
  $handler->display->display_options['filters']['country_filter']['expose']['identifier'] = 'country_filter';
  $handler->display->display_options['filters']['country_filter']['expose']['multiple'] = 1;

  /* Filter criterion: IDS: Regions */
  $handler->display->display_options['filters']['region_filter']['id'] = 'region_filter';
  $handler->display->display_options['filters']['region_filter']['table'] = 'idsviews_documents';
  $handler->display->display_options['filters']['region_filter']['field'] = 'region_filter';
  $handler->display->display_options['filters']['region_filter']['value'] = array();
  $handler->display->display_options['filters']['region_filter']['group'] = 1;
  $handler->display->display_options['filters']['region_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['region_filter']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['region_filter']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['region_filter']['expose']['operator'] = 'region_filter_op';
  $handler->display->display_options['filters']['region_filter']['expose']['identifier'] = 'region_filter';
  $handler->display->display_options['filters']['region_filter']['expose']['multiple'] = 1;

  /* Filter criterion: IDS: Themes */
  $handler->display->display_options['filters']['theme_filter']['id'] = 'theme_filter';
  $handler->display->display_options['filters']['theme_filter']['table'] = 'idsviews_documents';
  $handler->display->display_options['filters']['theme_filter']['field'] = 'theme_filter';
  $handler->display->display_options['filters']['theme_filter']['value'] = array();
  $handler->display->display_options['filters']['theme_filter']['group'] = 1;
  $handler->display->display_options['filters']['theme_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['theme_filter']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['theme_filter']['expose']['label'] = 'Theme';
  $handler->display->display_options['filters']['theme_filter']['expose']['operator'] = 'theme_filter_op';
  $handler->display->display_options['filters']['theme_filter']['expose']['identifier'] = 'theme_filter';
  $handler->display->display_options['filters']['theme_filter']['expose']['multiple'] = 1;

  /* Filter criterion: IDS: Subjects - Included only when using a partner�s API keys */
  if ($additional_fields) {
    idsviews_display_subject_filter($handler->display, 'idsviews_documents');
  }

  /* Filter criterion: IDS: Author(s) */
  $handler->display->display_options['filters']['author_filter']['id'] = 'author_filter';
  $handler->display->display_options['filters']['author_filter']['table'] = 'idsviews_documents';
  $handler->display->display_options['filters']['author_filter']['field'] = 'author_filter';
  $handler->display->display_options['filters']['author_filter']['group'] = 1;
  $handler->display->display_options['filters']['author_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['author_filter']['expose']['operator_id'] = 'author_filter_op';
  $handler->display->display_options['filters']['author_filter']['expose']['label'] = 'Author(s)';
  $handler->display->display_options['filters']['author_filter']['expose']['operator'] = 'author_filter_op';
  $handler->display->display_options['filters']['author_filter']['expose']['identifier'] = 'author_filter';
  $handler->display->display_options['filters']['author_filter']['expose']['multiple'] = FALSE;

  /* Filter criterion: IDS: Document published after */
  $handler->display->display_options['filters']['document_published_after_filter']['id'] = 'document_published_after_filter';
  $handler->display->display_options['filters']['document_published_after_filter']['table'] = 'idsviews_documents';
  $handler->display->display_options['filters']['document_published_after_filter']['field'] = 'document_published_after_filter';
  $handler->display->display_options['filters']['document_published_after_filter']['group'] = 1;
  $handler->display->display_options['filters']['document_published_after_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['document_published_after_filter']['expose']['operator_id'] = 'document_published_after_filter_op';
  $handler->display->display_options['filters']['document_published_after_filter']['expose']['label'] = 'Document published after (YYYY-MM-DD)';
  $handler->display->display_options['filters']['document_published_after_filter']['expose']['operator'] = 'document_published_after_filter_op';
  $handler->display->display_options['filters']['document_published_after_filter']['expose']['identifier'] = 'document_published_after_filter';
  $handler->display->display_options['filters']['document_published_after_filter']['expose']['multiple'] = FALSE;

  /* Filter criterion: IDS: Document published before */
  $handler->display->display_options['filters']['document_published_before_filter']['id'] = 'document_published_before_filter';
  $handler->display->display_options['filters']['document_published_before_filter']['table'] = 'idsviews_documents';
  $handler->display->display_options['filters']['document_published_before_filter']['field'] = 'document_published_before_filter';
  $handler->display->display_options['filters']['document_published_before_filter']['group'] = 1;
  $handler->display->display_options['filters']['document_published_before_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['document_published_before_filter']['expose']['operator_id'] = 'document_published_before_filter_op';
  $handler->display->display_options['filters']['document_published_before_filter']['expose']['label'] = 'Document published before  (YYYY-MM-DD)';
  $handler->display->display_options['filters']['document_published_before_filter']['expose']['operator'] = 'document_published_before_filter_op';
  $handler->display->display_options['filters']['document_published_before_filter']['expose']['identifier'] = 'document_published_before_filter';
  $handler->display->display_options['filters']['document_published_before_filter']['expose']['multiple'] = FALSE;

  /* Filter criterion: IDS: Publisher country */
  $handler->display->display_options['filters']['publisher_country_filter']['id'] = 'publisher_country_filter';
  $handler->display->display_options['filters']['publisher_country_filter']['table'] = 'idsviews_documents';
  $handler->display->display_options['filters']['publisher_country_filter']['field'] = 'publisher_country_filter';
  $handler->display->display_options['filters']['publisher_country_filter']['group'] = 1;
  $handler->display->display_options['filters']['publisher_country_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['publisher_country_filter']['expose']['operator_id'] = 'publisher_country_filter_op';
  $handler->display->display_options['filters']['publisher_country_filter']['expose']['label'] = 'Publisher country';
  $handler->display->display_options['filters']['publisher_country_filter']['expose']['operator'] = 'publisher_country_filter_op';
  $handler->display->display_options['filters']['publisher_country_filter']['expose']['identifier'] = 'publisher_country_filter';
  $handler->display->display_options['filters']['publisher_country_filter']['expose']['multiple'] = FALSE;

  /* Filter criterion: IDS: Publisher name */
  $handler->display->display_options['filters']['publisher_name_filter']['id'] = 'publisher_name_filter';
  $handler->display->display_options['filters']['publisher_name_filter']['table'] = 'idsviews_documents';
  $handler->display->display_options['filters']['publisher_name_filter']['field'] = 'publisher_name_filter';
  $handler->display->display_options['filters']['publisher_name_filter']['group'] = 1;
  $handler->display->display_options['filters']['publisher_name_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['publisher_name_filter']['expose']['operator_id'] = 'publisher_name_filter_op';
  $handler->display->display_options['filters']['publisher_name_filter']['expose']['label'] = 'Publisher name';
  $handler->display->display_options['filters']['publisher_name_filter']['expose']['operator'] = 'publisher_name_filter_op';
  $handler->display->display_options['filters']['publisher_name_filter']['expose']['identifier'] = 'publisher_name_filter';
  $handler->display->display_options['filters']['publisher_name_filter']['expose']['multiple'] = FALSE;

  /* Filter criterion: IDS: Language */
  $handler->display->display_options['filters']['language_name_filter']['id'] = 'language_name_filter';
  $handler->display->display_options['filters']['language_name_filter']['table'] = 'idsviews_documents';
  $handler->display->display_options['filters']['language_name_filter']['field'] = 'language_name_filter';
  $handler->display->display_options['filters']['language_name_filter']['group'] = 1;
  $handler->display->display_options['filters']['language_name_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language_name_filter']['expose']['operator_id'] = 'language_name_filter_op';
  $handler->display->display_options['filters']['language_name_filter']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['language_name_filter']['expose']['operator'] = 'language_name_filter_op';
  $handler->display->display_options['filters']['language_name_filter']['expose']['identifier'] = 'language_name_filter';
  $handler->display->display_options['filters']['language_name_filter']['expose']['multiple'] = FALSE;

  /* Filter criterion: IDS: Object ID */
  $handler->display->display_options['filters']['object_id_filter']['id'] = 'object_id_filter';
  $handler->display->display_options['filters']['object_id_filter']['table'] = 'idsviews_documents';
  $handler->display->display_options['filters']['object_id_filter']['field'] = 'object_id_filter';
  $handler->display->display_options['filters']['object_id_filter']['group'] = 1;
  $handler->display->display_options['filters']['object_id_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['object_id_filter']['expose']['operator_id'] = 'object_id_filter_op';
  $handler->display->display_options['filters']['object_id_filter']['expose']['label'] = 'Object ID';
  $handler->display->display_options['filters']['object_id_filter']['expose']['operator'] = 'object_id_filter_op';
  $handler->display->display_options['filters']['object_id_filter']['expose']['identifier'] = 'object_id_filter';
  $handler->display->display_options['filters']['object_id_filter']['expose']['multiple'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'site',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['path'] = 'eldis-documents';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'site',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;

  /* Field: IDS: Site */
  $handler->display->display_options['fields']['site']['id'] = 'site';
  $handler->display->display_options['fields']['site']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['site']['field'] = 'site';
  $handler->display->display_options['fields']['site']['label'] = '';
  $handler->display->display_options['fields']['site']['exclude'] = TRUE;
  $handler->display->display_options['fields']['site']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['site']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['site']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['site']['alter']['external'] = 0;
  $handler->display->display_options['fields']['site']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['site']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['site']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['site']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['site']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['site']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['site']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['site']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['site']['alter']['html'] = 0;
  $handler->display->display_options['fields']['site']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['site']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['site']['hide_empty'] = 0;
  $handler->display->display_options['fields']['site']['empty_zero'] = 0;
  $handler->display->display_options['fields']['site']['hide_alter_empty'] = 1;

  /* Field: IDS: Object ID */
  $handler->display->display_options['fields']['object_id']['id'] = 'object_id';
  $handler->display->display_options['fields']['object_id']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['object_id']['field'] = 'object_id';
  $handler->display->display_options['fields']['object_id']['label'] = '';
  $handler->display->display_options['fields']['object_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['object_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['object_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['object_id']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['object_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['object_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['object_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['object_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['object_id']['hide_alter_empty'] = 1;

  /* Field: IDS: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[site]-documents?object_id_filter=[object_id]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Filter criterion: IDS: Query */
  $handler->display->display_options['filters']['query_filter']['id'] = 'query_filter';
  $handler->display->display_options['filters']['query_filter']['table'] = 'idsviews_documents';
  $handler->display->display_options['filters']['query_filter']['field'] = 'query_filter';
  $handler->display->display_options['filters']['query_filter']['group'] = 1;
  $handler->display->display_options['filters']['query_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['query_filter']['expose']['operator_id'] = 'query_filter_op';
  $handler->display->display_options['filters']['query_filter']['expose']['label'] = 'Query';
  $handler->display->display_options['filters']['query_filter']['expose']['operator'] = 'query_filter_op';
  $handler->display->display_options['filters']['query_filter']['expose']['identifier'] = 'query_filter';
  $handler->display->display_options['filters']['query_filter']['expose']['multiple'] = FALSE;

  /* Filter criterion: IDS: Dataset */
  $handler->display->display_options['filters']['dataset_filter']['id'] = 'dataset_filter';
  $handler->display->display_options['filters']['dataset_filter']['table'] = 'idsviews_documents';
  $handler->display->display_options['filters']['dataset_filter']['field'] = 'dataset_filter';
  $handler->display->display_options['filters']['dataset_filter']['group'] = 1;
  $handler->display->display_options['path'] = 'eldis-documents-list';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_2');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'site',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['path'] = 'bridge-documents';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_3');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'site',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;

  /* Field: IDS: Site */
  $handler->display->display_options['fields']['site']['id'] = 'site';
  $handler->display->display_options['fields']['site']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['site']['field'] = 'site';
  $handler->display->display_options['fields']['site']['label'] = '';
  $handler->display->display_options['fields']['site']['exclude'] = TRUE;
  $handler->display->display_options['fields']['site']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['site']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['site']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['site']['alter']['external'] = 0;
  $handler->display->display_options['fields']['site']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['site']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['site']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['site']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['site']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['site']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['site']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['site']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['site']['alter']['html'] = 0;
  $handler->display->display_options['fields']['site']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['site']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['site']['hide_empty'] = 0;
  $handler->display->display_options['fields']['site']['empty_zero'] = 0;
  $handler->display->display_options['fields']['site']['hide_alter_empty'] = 1;

  /* Field: IDS: Object ID */
  $handler->display->display_options['fields']['object_id']['id'] = 'object_id';
  $handler->display->display_options['fields']['object_id']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['object_id']['field'] = 'object_id';
  $handler->display->display_options['fields']['object_id']['label'] = '';
  $handler->display->display_options['fields']['object_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['object_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['object_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['object_id']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['object_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['object_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['object_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['object_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['object_id']['hide_alter_empty'] = 1;

  /* Field: IDS: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[site]-documents?object_id_filter=[object_id]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Filter criterion: IDS: Query */
  $handler->display->display_options['filters']['query_filter']['id'] = 'query_filter';
  $handler->display->display_options['filters']['query_filter']['table'] = 'idsviews_documents';
  $handler->display->display_options['filters']['query_filter']['field'] = 'query_filter';
  $handler->display->display_options['filters']['query_filter']['group'] = 1;
  $handler->display->display_options['filters']['query_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['query_filter']['expose']['operator_id'] = 'query_filter_op';
  $handler->display->display_options['filters']['query_filter']['expose']['label'] = 'Query';
  $handler->display->display_options['filters']['query_filter']['expose']['operator'] = 'query_filter_op';
  $handler->display->display_options['filters']['query_filter']['expose']['identifier'] = 'query_filter';
  $handler->display->display_options['filters']['query_filter']['expose']['multiple'] = FALSE;

  /* Filter criterion: IDS: Dataset */
  $handler->display->display_options['filters']['dataset_filter']['id'] = 'dataset_filter';
  $handler->display->display_options['filters']['dataset_filter']['table'] = 'idsviews_documents';
  $handler->display->display_options['filters']['dataset_filter']['field'] = 'dataset_filter';
  $handler->display->display_options['filters']['dataset_filter']['group'] = 1;
  $handler->display->display_options['filters']['dataset_filter']['filter_dataset'] = 'bridge';
  $handler->display->display_options['path'] = 'bridge-documents-list';

  /* Add view to list of views to provide */
  $export[$view->name] =   $view;

  /******************* IDS Organisations View *******************/

  $view = new view;
  $view->name = 'ids_organisations_view';
  $view->description = 'View used to retrieve organisations in the IDS collection.';
  $view->tag = 'default';
  $view->base_table = 'idsviews_organisations';
  $view->human_name = 'IDS Organisations View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE;

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'ids-organisations-view';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'site',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;

  /* No results behavior: No results found */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['ui_name'] = 'No results found';
  $handler->display->display_options['empty']['area']['label'] = 'No results';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'The IDS API retrieved no results for your query. Please try using different serch terms.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;

  /* Field: IDS: Site */
  $handler->display->display_options['fields']['site']['id'] = 'site';
  $handler->display->display_options['fields']['site']['table'] = 'idsviews_organisations';
  $handler->display->display_options['fields']['site']['field'] = 'site';
  $handler->display->display_options['fields']['site']['label'] = '';
  $handler->display->display_options['fields']['site']['exclude'] = TRUE;
  $handler->display->display_options['fields']['site']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['site']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['site']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['site']['alter']['external'] = 0;
  $handler->display->display_options['fields']['site']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['site']['alter']['path_case'] = 'upper';
  $handler->display->display_options['fields']['site']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['site']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['site']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['site']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['site']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['site']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['site']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['site']['alter']['html'] = 0;
  $handler->display->display_options['fields']['site']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['site']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['site']['hide_empty'] = 0;
  $handler->display->display_options['fields']['site']['empty_zero'] = 0;
  $handler->display->display_options['fields']['site']['hide_alter_empty'] = 1;

  /* Field: IDS: Object ID */
  $handler->display->display_options['fields']['object_id']['id'] = 'object_id';
  $handler->display->display_options['fields']['object_id']['table'] = 'idsviews_organisations';
  $handler->display->display_options['fields']['object_id']['field'] = 'object_id';
  $handler->display->display_options['fields']['object_id']['label'] = '';
  $handler->display->display_options['fields']['object_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['object_id']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['object_id']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['object_id']['alter']['path'] = 'eldis-organisations-view?object_id_filter=[object_id]';
  $handler->display->display_options['fields']['object_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['object_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['object_id']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['object_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['object_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['object_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['object_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['object_id']['hide_alter_empty'] = 1;

  /* Field: IDS: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'idsviews_organisations';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[site]-organisations?object_id_filter=[object_id]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;

  /* Field: IDS: Acronym */
  $handler->display->display_options['fields']['acronym']['id'] = 'acronym';
  $handler->display->display_options['fields']['acronym']['table'] = 'idsviews_organisations';
  $handler->display->display_options['fields']['acronym']['field'] = 'acronym';
  $handler->display->display_options['fields']['acronym']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['acronym']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['acronym']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['acronym']['alter']['external'] = 0;
  $handler->display->display_options['fields']['acronym']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['acronym']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['acronym']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['acronym']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['acronym']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['acronym']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['acronym']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['acronym']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['acronym']['alter']['html'] = 0;
  $handler->display->display_options['fields']['acronym']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['acronym']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['acronym']['hide_empty'] = 0;
  $handler->display->display_options['fields']['acronym']['empty_zero'] = 0;
  $handler->display->display_options['fields']['acronym']['hide_alter_empty'] = 1;

  /* Field: IDS: Alternative name */
  $handler->display->display_options['fields']['alternative_name']['id'] = 'alternative_name';
  $handler->display->display_options['fields']['alternative_name']['table'] = 'idsviews_organisations';
  $handler->display->display_options['fields']['alternative_name']['field'] = 'alternative_name';
  $handler->display->display_options['fields']['alternative_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['alternative_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['alternative_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['alternative_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['alternative_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['alternative_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['alternative_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['alternative_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['alternative_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['alternative_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['alternative_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['alternative_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['alternative_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['alternative_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['alternative_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['alternative_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['alternative_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['alternative_name']['hide_alter_empty'] = 1;

  /* Field: IDS: Alternative acronym */
  $handler->display->display_options['fields']['alternative_acronym']['id'] = 'alternative_acronym';
  $handler->display->display_options['fields']['alternative_acronym']['table'] = 'idsviews_organisations';
  $handler->display->display_options['fields']['alternative_acronym']['field'] = 'alternative_acronym';
  $handler->display->display_options['fields']['alternative_acronym']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['alternative_acronym']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['alternative_acronym']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['alternative_acronym']['alter']['external'] = 0;
  $handler->display->display_options['fields']['alternative_acronym']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['alternative_acronym']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['alternative_acronym']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['alternative_acronym']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['alternative_acronym']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['alternative_acronym']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['alternative_acronym']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['alternative_acronym']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['alternative_acronym']['alter']['html'] = 0;
  $handler->display->display_options['fields']['alternative_acronym']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['alternative_acronym']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['alternative_acronym']['hide_empty'] = 0;
  $handler->display->display_options['fields']['alternative_acronym']['empty_zero'] = 0;
  $handler->display->display_options['fields']['alternative_acronym']['hide_alter_empty'] = 1;

  /* Field: IDS: Organisation type */
  $handler->display->display_options['fields']['organisation_type']['id'] = 'organisation_type';
  $handler->display->display_options['fields']['organisation_type']['table'] = 'idsviews_organisations';
  $handler->display->display_options['fields']['organisation_type']['field'] = 'organisation_type';
  $handler->display->display_options['fields']['organisation_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['organisation_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['organisation_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['organisation_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['organisation_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['organisation_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['organisation_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['organisation_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['organisation_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['organisation_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['organisation_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['organisation_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['organisation_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['organisation_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['organisation_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['organisation_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['organisation_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['organisation_type']['hide_alter_empty'] = 1;

  /* Field: IDS: Keywords */
  $handler->display->display_options['fields']['keywords']['id'] = 'keywords';
  $handler->display->display_options['fields']['keywords']['table'] = 'idsviews_organisations';
  $handler->display->display_options['fields']['keywords']['field'] = 'keywords';
  $handler->display->display_options['fields']['keywords']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['keywords']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['keywords']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['keywords']['alter']['external'] = 0;
  $handler->display->display_options['fields']['keywords']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['keywords']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['keywords']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['keywords']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['keywords']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['keywords']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['keywords']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['keywords']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['keywords']['alter']['html'] = 0;
  $handler->display->display_options['fields']['keywords']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['keywords']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['keywords']['hide_empty'] = 1;
  $handler->display->display_options['fields']['keywords']['empty_zero'] = 0;
  $handler->display->display_options['fields']['keywords']['hide_alter_empty'] = 0;

  /* Field: IDS: Themes */
  $handler->display->display_options['fields']['category_theme_array']['id'] = 'category_theme_array';
  $handler->display->display_options['fields']['category_theme_array']['table'] = 'idsviews_organisations';
  $handler->display->display_options['fields']['category_theme_array']['field'] = 'category_theme_array';
  $handler->display->display_options['fields']['category_theme_array']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['alter']['external'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['category_theme_array']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['category_theme_array']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['alter']['html'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['category_theme_array']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['category_theme_array']['hide_empty'] = 1;
  $handler->display->display_options['fields']['category_theme_array']['empty_zero'] = 0;
  $handler->display->display_options['fields']['category_theme_array']['hide_alter_empty'] = 0;

  /* Field: IDS: Subjects - Included only when using a partner�s API keys */
  if ($additional_fields) {
    idsviews_display_subject_field($handler->display, 'idsviews_organisations');
  }

  /* Field: IDS: Regions */
  $handler->display->display_options['fields']['category_region_array']['id'] = 'category_region_array';
  $handler->display->display_options['fields']['category_region_array']['table'] = 'idsviews_organisations';
  $handler->display->display_options['fields']['category_region_array']['field'] = 'category_region_array';
  $handler->display->display_options['fields']['category_region_array']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['category_region_array']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['category_region_array']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['category_region_array']['alter']['external'] = 0;
  $handler->display->display_options['fields']['category_region_array']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['category_region_array']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['category_region_array']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['category_region_array']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['category_region_array']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['category_region_array']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['category_region_array']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['category_region_array']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['category_region_array']['alter']['html'] = 0;
  $handler->display->display_options['fields']['category_region_array']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['category_region_array']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['category_region_array']['hide_empty'] = 1;
  $handler->display->display_options['fields']['category_region_array']['empty_zero'] = 0;
  $handler->display->display_options['fields']['category_region_array']['hide_alter_empty'] = 0;

  /* Field: IDS: Countries */
  $handler->display->display_options['fields']['country_focus_array']['id'] = 'country_focus_array';
  $handler->display->display_options['fields']['country_focus_array']['table'] = 'idsviews_organisations';
  $handler->display->display_options['fields']['country_focus_array']['field'] = 'country_focus_array';
  $handler->display->display_options['fields']['country_focus_array']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['alter']['external'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['country_focus_array']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['country_focus_array']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['alter']['html'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['country_focus_array']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['country_focus_array']['hide_empty'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['empty_zero'] = 0;
  $handler->display->display_options['fields']['country_focus_array']['hide_alter_empty'] = 1;

  /* Field: IDS: Description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'idsviews_organisations';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['description']['alter']['max_length'] = '5000';
  $handler->display->display_options['fields']['description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['description']['alter']['more_link'] = 1;
  $handler->display->display_options['fields']['description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['description']['alter']['html'] = 1;
  $handler->display->display_options['fields']['description']['element_type'] = 'em';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['description']['hide_alter_empty'] = 1;

  /* Field: IDS: Organisation URL */
  $handler->display->display_options['fields']['organisation_url']['id'] = 'organisation_url';
  $handler->display->display_options['fields']['organisation_url']['table'] = 'idsviews_organisations';
  $handler->display->display_options['fields']['organisation_url']['field'] = 'organisation_url';
  $handler->display->display_options['fields']['organisation_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['organisation_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['organisation_url']['alter']['path'] = '[organisation_url]';
  $handler->display->display_options['fields']['organisation_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['organisation_url']['alter']['external'] = 1;
  $handler->display->display_options['fields']['organisation_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['organisation_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['organisation_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['organisation_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['organisation_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['organisation_url']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['organisation_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['organisation_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['organisation_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['organisation_url']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['organisation_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['organisation_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['organisation_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['organisation_url']['hide_alter_empty'] = 1;

  /* Field: IDS: Date updated */
  $handler->display->display_options['fields']['date_updated']['id'] = 'date_updated';
  $handler->display->display_options['fields']['date_updated']['table'] = 'idsviews_organisations';
  $handler->display->display_options['fields']['date_updated']['field'] = 'date_updated';
  $handler->display->display_options['fields']['date_updated']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['date_updated']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['date_updated']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['date_updated']['alter']['external'] = 0;
  $handler->display->display_options['fields']['date_updated']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['date_updated']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['date_updated']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['date_updated']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['date_updated']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['date_updated']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['date_updated']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['date_updated']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['date_updated']['alter']['html'] = 0;
  $handler->display->display_options['fields']['date_updated']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['date_updated']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['date_updated']['hide_empty'] = 0;
  $handler->display->display_options['fields']['date_updated']['empty_zero'] = 0;
  $handler->display->display_options['fields']['date_updated']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['date_updated']['date_format'] = 'long';

  /* Field: IDS: Metadata URL */
  $handler->display->display_options['fields']['metadata_url']['id'] = 'metadata_url';
  $handler->display->display_options['fields']['metadata_url']['table'] = 'idsviews_organisations';
  $handler->display->display_options['fields']['metadata_url']['field'] = 'metadata_url';
  $handler->display->display_options['fields']['metadata_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['metadata_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['metadata_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['metadata_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['metadata_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['metadata_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['metadata_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['metadata_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['metadata_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['metadata_url']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['metadata_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['metadata_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['metadata_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['metadata_url']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['metadata_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['metadata_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['metadata_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['metadata_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['metadata_url']['display_as_link'] = 1;

  /* Sort criterion: IDS: Sort order */
  $handler->display->display_options['sorts']['sort_order']['id'] = 'sort_order';
  $handler->display->display_options['sorts']['sort_order']['table'] = 'idsviews_organisations';
  $handler->display->display_options['sorts']['sort_order']['field'] = 'sort_order';
  $handler->display->display_options['sorts']['sort_order']['order'] = 'DESC';

  /* Filter criterion: IDS: Dataset */
  $handler->display->display_options['filters']['dataset_filter']['id'] = 'dataset_filter';
  $handler->display->display_options['filters']['dataset_filter']['table'] = 'idsviews_organisations';
  $handler->display->display_options['filters']['dataset_filter']['field'] = 'dataset_filter';
  $handler->display->display_options['filters']['dataset_filter']['group'] = 1;

  /* Filter criterion: IDS: Query */
  $handler->display->display_options['filters']['query_filter']['id'] = 'query_filter';
  $handler->display->display_options['filters']['query_filter']['table'] = 'idsviews_organisations';
  $handler->display->display_options['filters']['query_filter']['field'] = 'query_filter';
  $handler->display->display_options['filters']['query_filter']['group'] = 1;
  $handler->display->display_options['filters']['query_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['query_filter']['expose']['operator_id'] = 'query_filter_op';
  $handler->display->display_options['filters']['query_filter']['expose']['label'] = 'Query';
  $handler->display->display_options['filters']['query_filter']['expose']['operator'] = 'query_filter_op';
  $handler->display->display_options['filters']['query_filter']['expose']['identifier'] = 'query_filter';
  $handler->display->display_options['filters']['query_filter']['expose']['multiple'] = FALSE;

  /* Filter criterion: IDS: Organisation name */
  $handler->display->display_options['filters']['organisation_name_filter']['id'] = 'organisation_name_filter';
  $handler->display->display_options['filters']['organisation_name_filter']['table'] = 'idsviews_organisations';
  $handler->display->display_options['filters']['organisation_name_filter']['field'] = 'organisation_name_filter';
  $handler->display->display_options['filters']['organisation_name_filter']['group'] = 1;
  $handler->display->display_options['filters']['organisation_name_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['organisation_name_filter']['expose']['operator_id'] = 'organisation_name_filter_op';
  $handler->display->display_options['filters']['organisation_name_filter']['expose']['label'] = 'Organisation name';
  $handler->display->display_options['filters']['organisation_name_filter']['expose']['operator'] = 'organisation_name_filter_op';
  $handler->display->display_options['filters']['organisation_name_filter']['expose']['identifier'] = 'organisation_name_filter';
  $handler->display->display_options['filters']['organisation_name_filter']['expose']['multiple'] = FALSE;

  /* Filter criterion: IDS: Acronym */
  $handler->display->display_options['filters']['acronym_filter']['id'] = 'acronym_filter';
  $handler->display->display_options['filters']['acronym_filter']['table'] = 'idsviews_organisations';
  $handler->display->display_options['filters']['acronym_filter']['field'] = 'acronym_filter';
  $handler->display->display_options['filters']['acronym_filter']['group'] = 1;
  $handler->display->display_options['filters']['acronym_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['acronym_filter']['expose']['operator_id'] = 'acronym_filter_op';
  $handler->display->display_options['filters']['acronym_filter']['expose']['label'] = 'Acronym';
  $handler->display->display_options['filters']['acronym_filter']['expose']['operator'] = 'acronym_filter_op';
  $handler->display->display_options['filters']['acronym_filter']['expose']['identifier'] = 'acronym_filter';
  $handler->display->display_options['filters']['acronym_filter']['expose']['multiple'] = FALSE;

  /* Filter criterion: IDS: Keyword */
  $handler->display->display_options['filters']['keyword_filter']['id'] = 'keyword_filter';
  $handler->display->display_options['filters']['keyword_filter']['table'] = 'idsviews_organisations';
  $handler->display->display_options['filters']['keyword_filter']['field'] = 'keyword_filter';
  $handler->display->display_options['filters']['keyword_filter']['group'] = 1;
  $handler->display->display_options['filters']['keyword_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keyword_filter']['expose']['operator_id'] = 'keyword_filter_op';
  $handler->display->display_options['filters']['keyword_filter']['expose']['label'] = 'Keyword';
  $handler->display->display_options['filters']['keyword_filter']['expose']['operator'] = 'keyword_filter_op';
  $handler->display->display_options['filters']['keyword_filter']['expose']['identifier'] = 'keyword_filter';
  $handler->display->display_options['filters']['keyword_filter']['expose']['multiple'] = FALSE;

  /* Filter criterion: IDS: Themes */
  $handler->display->display_options['filters']['theme_filter']['id'] = 'theme_filter';
  $handler->display->display_options['filters']['theme_filter']['table'] = 'idsviews_organisations';
  $handler->display->display_options['filters']['theme_filter']['field'] = 'theme_filter';
  $handler->display->display_options['filters']['theme_filter']['value'] = array();
  $handler->display->display_options['filters']['theme_filter']['group'] = 1;
  $handler->display->display_options['filters']['theme_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['theme_filter']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['theme_filter']['expose']['label'] = 'Theme';
  $handler->display->display_options['filters']['theme_filter']['expose']['operator'] = 'theme_filter_op';
  $handler->display->display_options['filters']['theme_filter']['expose']['identifier'] = 'theme_filter';
  $handler->display->display_options['filters']['theme_filter']['expose']['multiple'] = 1;

  /* Filter criterion: IDS: Subjects - Included only when using a partner�s API keys */
  if ($additional_fields) {
    idsviews_display_subject_filter($handler->display, 'idsviews_organisations');
  }

  /* Filter criterion: IDS: Regions */
  $handler->display->display_options['filters']['region_filter']['id'] = 'region_filter';
  $handler->display->display_options['filters']['region_filter']['table'] = 'idsviews_organisations';
  $handler->display->display_options['filters']['region_filter']['field'] = 'region_filter';
  $handler->display->display_options['filters']['region_filter']['value'] = array();
  $handler->display->display_options['filters']['region_filter']['group'] = 1;
  $handler->display->display_options['filters']['region_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['region_filter']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['region_filter']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['region_filter']['expose']['operator'] = 'region_filter_op';
  $handler->display->display_options['filters']['region_filter']['expose']['identifier'] = 'region_filter';
  $handler->display->display_options['filters']['region_filter']['expose']['multiple'] = 1;

  /* Filter criterion: IDS: Countries */
  $handler->display->display_options['filters']['country_filter']['id'] = 'country_filter';
  $handler->display->display_options['filters']['country_filter']['table'] = 'idsviews_organisations';
  $handler->display->display_options['filters']['country_filter']['field'] = 'country_filter';
  $handler->display->display_options['filters']['country_filter']['value'] = array();
  $handler->display->display_options['filters']['country_filter']['group'] = 1;
  $handler->display->display_options['filters']['country_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['country_filter']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['country_filter']['expose']['label'] = 'Countries';
  $handler->display->display_options['filters']['country_filter']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['country_filter']['expose']['operator'] = 'country_filter_op';
  $handler->display->display_options['filters']['country_filter']['expose']['identifier'] = 'country_filter';
  $handler->display->display_options['filters']['country_filter']['expose']['multiple'] = 1;

  /* Filter criterion: IDS: Location country */
  $handler->display->display_options['filters']['location_country_filter']['id'] = 'location_country_filter';
  $handler->display->display_options['filters']['location_country_filter']['table'] = 'idsviews_organisations';
  $handler->display->display_options['filters']['location_country_filter']['field'] = 'location_country_filter';
  $handler->display->display_options['filters']['location_country_filter']['group'] = 1;
  $handler->display->display_options['filters']['location_country_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['location_country_filter']['expose']['operator_id'] = 'location_country_filter_op';
  $handler->display->display_options['filters']['location_country_filter']['expose']['label'] = 'Location country';
  $handler->display->display_options['filters']['location_country_filter']['expose']['operator'] = 'location_country_filter_op';
  $handler->display->display_options['filters']['location_country_filter']['expose']['identifier'] = 'location_country_filter';
  $handler->display->display_options['filters']['location_country_filter']['expose']['multiple'] = FALSE;

  /* Filter criterion: IDS: Metadata published after */
  $handler->display->display_options['filters']['metadata_published_after_filter']['id'] = 'metadata_published_after_filter';
  $handler->display->display_options['filters']['metadata_published_after_filter']['table'] = 'idsviews_organisations';
  $handler->display->display_options['filters']['metadata_published_after_filter']['field'] = 'metadata_published_after_filter';
  $handler->display->display_options['filters']['metadata_published_after_filter']['group'] = 1;
  $handler->display->display_options['filters']['metadata_published_after_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['metadata_published_after_filter']['expose']['operator_id'] = 'metadata_published_after_filter_op';
  $handler->display->display_options['filters']['metadata_published_after_filter']['expose']['label'] = 'Organisation published after (YYYY-MM-DD)';
  $handler->display->display_options['filters']['metadata_published_after_filter']['expose']['operator'] = 'metadata_published_after_filter_op';
  $handler->display->display_options['filters']['metadata_published_after_filter']['expose']['identifier'] = 'metadata_published_after_filter';
  $handler->display->display_options['filters']['metadata_published_after_filter']['expose']['multiple'] = FALSE;

  /* Filter criterion: IDS: Metadata published before */
  $handler->display->display_options['filters']['metadata_published_before_filter']['id'] = 'metadata_published_before_filter';
  $handler->display->display_options['filters']['metadata_published_before_filter']['table'] = 'idsviews_organisations';
  $handler->display->display_options['filters']['metadata_published_before_filter']['field'] = 'metadata_published_before_filter';
  $handler->display->display_options['filters']['metadata_published_before_filter']['group'] = 1;
  $handler->display->display_options['filters']['metadata_published_before_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['metadata_published_before_filter']['expose']['operator_id'] = 'metadata_published_before_filter_op';
  $handler->display->display_options['filters']['metadata_published_before_filter']['expose']['label'] = 'Organisation published before (YYYY-MM-DD))';
  $handler->display->display_options['filters']['metadata_published_before_filter']['expose']['operator'] = 'metadata_published_before_filter_op';
  $handler->display->display_options['filters']['metadata_published_before_filter']['expose']['identifier'] = 'metadata_published_before_filter';
  $handler->display->display_options['filters']['metadata_published_before_filter']['expose']['multiple'] = FALSE;

  /* Filter criterion: IDS: Object ID */
  $handler->display->display_options['filters']['object_id_filter']['id'] = 'object_id_filter';
  $handler->display->display_options['filters']['object_id_filter']['table'] = 'idsviews_organisations';
  $handler->display->display_options['filters']['object_id_filter']['field'] = 'object_id_filter';
  $handler->display->display_options['filters']['object_id_filter']['group'] = 1;
  $handler->display->display_options['filters']['object_id_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['object_id_filter']['expose']['operator_id'] = 'object_id_filter_op';
  $handler->display->display_options['filters']['object_id_filter']['expose']['label'] = 'Object ID';
  $handler->display->display_options['filters']['object_id_filter']['expose']['operator'] = 'object_id_filter_op';
  $handler->display->display_options['filters']['object_id_filter']['expose']['identifier'] = 'object_id_filter';
  $handler->display->display_options['filters']['object_id_filter']['expose']['multiple'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'site',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'site' => 'site',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['path'] = 'eldis-organisations';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;

  /* Field: IDS: Site */
  $handler->display->display_options['fields']['site']['id'] = 'site';
  $handler->display->display_options['fields']['site']['table'] = 'idsviews_organisations';
  $handler->display->display_options['fields']['site']['field'] = 'site';
  $handler->display->display_options['fields']['site']['label'] = '';
  $handler->display->display_options['fields']['site']['exclude'] = TRUE;
  $handler->display->display_options['fields']['site']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['site']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['site']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['site']['alter']['external'] = 0;
  $handler->display->display_options['fields']['site']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['site']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['site']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['site']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['site']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['site']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['site']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['site']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['site']['alter']['html'] = 0;
  $handler->display->display_options['fields']['site']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['site']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['site']['hide_empty'] = 0;
  $handler->display->display_options['fields']['site']['empty_zero'] = 0;
  $handler->display->display_options['fields']['site']['hide_alter_empty'] = 1;

  /* Field: IDS: Object ID */
  $handler->display->display_options['fields']['object_id']['id'] = 'object_id';
  $handler->display->display_options['fields']['object_id']['table'] = 'idsviews_organisations';
  $handler->display->display_options['fields']['object_id']['field'] = 'object_id';
  $handler->display->display_options['fields']['object_id']['label'] = '';
  $handler->display->display_options['fields']['object_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['object_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['object_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['object_id']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['object_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['object_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['object_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['object_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['object_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['object_id']['hide_alter_empty'] = 1;

  /* Field: IDS: Acronym */
  $handler->display->display_options['fields']['acronym']['id'] = 'acronym';
  $handler->display->display_options['fields']['acronym']['table'] = 'idsviews_organisations';
  $handler->display->display_options['fields']['acronym']['field'] = 'acronym';
  $handler->display->display_options['fields']['acronym']['label'] = '';
  $handler->display->display_options['fields']['acronym']['exclude'] = TRUE;
  $handler->display->display_options['fields']['acronym']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['acronym']['alter']['text'] = '([acronym])';
  $handler->display->display_options['fields']['acronym']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['acronym']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['acronym']['alter']['external'] = 0;
  $handler->display->display_options['fields']['acronym']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['acronym']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['acronym']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['acronym']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['acronym']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['acronym']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['acronym']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['acronym']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['acronym']['alter']['html'] = 0;
  $handler->display->display_options['fields']['acronym']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['acronym']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['acronym']['hide_empty'] = 1;
  $handler->display->display_options['fields']['acronym']['empty_zero'] = 0;
  $handler->display->display_options['fields']['acronym']['hide_alter_empty'] = 1;

  /* Field: IDS: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'idsviews_organisations';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] [acronym]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[site]-organisations?object_id_filter=[object_id]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['path'] = 'eldis-organisations-list';

  /* Add view to list of views to provide */
  $export[$view->name] =   $view;

  // Add new views that are used on the IDS bridge site
  idsviews_default_view_bibliography($export);
  idsviews_default_view_cutting_edge_packs($export);
  idsviews_default_view_briefings($export);
  idsviews_default_view_reports($export);
  /* Return array of default views. */
  return $export;
}

/**
 * Add a view for looking at IDS BRIDGE Bibliography documents.
 */
function idsviews_default_view_bibliography(&$export){
  $view = new view();
  $view->name = 'ids_bridge_bibliographies';
  $view->description = 'View used to retrieve IDS Bridge Bibliographies.';
  $view->tag = 'default';
  $view->base_table = 'idsviews_documents';
  $view->human_name = 'IDS Bridge Bibliographies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = TRUE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More on Bibliographies';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Bibliographies';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: IDS: Object ID */
  $handler->display->display_options['fields']['object_id']['id'] = 'object_id';
  $handler->display->display_options['fields']['object_id']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['object_id']['field'] = 'object_id';
  $handler->display->display_options['fields']['object_id']['label'] = '';
  $handler->display->display_options['fields']['object_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['object_id']['element_label_colon'] = FALSE;
  /* Field: IDS: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'bridge-documents/?object_id_filter=[object_id]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: IDS: Authors */
  $handler->display->display_options['fields']['authors']['id'] = 'authors';
  $handler->display->display_options['fields']['authors']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['authors']['field'] = 'authors';
  $handler->display->display_options['fields']['authors']['label'] = '';
  $handler->display->display_options['fields']['authors']['exclude'] = TRUE;
  $handler->display->display_options['fields']['authors']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['authors']['display_as_links'] = FALSE;
  /* Field: IDS: Publisher */
  $handler->display->display_options['fields']['publisher']['id'] = 'publisher';
  $handler->display->display_options['fields']['publisher']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['publisher']['field'] = 'publisher';
  $handler->display->display_options['fields']['publisher']['label'] = '';
  $handler->display->display_options['fields']['publisher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['publisher']['element_label_colon'] = FALSE;
  /* Field: IDS: Publication date */
  $handler->display->display_options['fields']['publication_date']['id'] = 'publication_date';
  $handler->display->display_options['fields']['publication_date']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['publication_date']['field'] = 'publication_date';
  $handler->display->display_options['fields']['publication_date']['label'] = '';
  $handler->display->display_options['fields']['publication_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['publication_date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['publication_date']['custom_date_format'] = 'M Y';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Author(s): [authors], [publisher], [publication_date]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: IDS: Description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['alter']['max_length'] = '185';
  $handler->display->display_options['fields']['description']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['more_link_text'] = 'Find out more';
  $handler->display->display_options['fields']['description']['alter']['more_link_path'] = 'bridge-documents?object_id_filter=[object_id]';
  $handler->display->display_options['fields']['description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Filter criterion: IDS: Subjects */
  $handler->display->display_options['filters']['subject_filter']['id'] = 'subject_filter';
  $handler->display->display_options['filters']['subject_filter']['table'] = 'idsviews_documents';
  $handler->display->display_options['filters']['subject_filter']['field'] = 'subject_filter';
  $handler->display->display_options['filters']['subject_filter']['value'] = array(
    'C1798' => 'C1798',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'bridge-publications/bridge-bibliographies';
  $export[$view->name] =   $view;
}

/**
 * Add a view that displays only IDS BRIDGE Cutting Edge Packs.
 */
function idsviews_default_view_cutting_edge_packs(&$export){
  $view = new view();
  $view->name = 'ids_bridge_cutting_edge_packs';
  $view->description = 'View used to retrieve IDS Bridge Cutting Edge Packs.';
  $view->tag = 'default';
  $view->base_table = 'idsviews_documents';
  $view->human_name = 'IDS Bridge Cutting Edge Packs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = TRUE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More on Bibliographies';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Cutting Edge Packs';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: IDS: Object ID */
  $handler->display->display_options['fields']['object_id']['id'] = 'object_id';
  $handler->display->display_options['fields']['object_id']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['object_id']['field'] = 'object_id';
  $handler->display->display_options['fields']['object_id']['label'] = '';
  $handler->display->display_options['fields']['object_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['object_id']['element_label_colon'] = FALSE;
  /* Field: IDS: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'bridge-documents/?object_id_filter=[object_id]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: IDS: Authors */
  $handler->display->display_options['fields']['authors']['id'] = 'authors';
  $handler->display->display_options['fields']['authors']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['authors']['field'] = 'authors';
  $handler->display->display_options['fields']['authors']['label'] = '';
  $handler->display->display_options['fields']['authors']['exclude'] = TRUE;
  $handler->display->display_options['fields']['authors']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['authors']['display_as_links'] = FALSE;
  /* Field: IDS: Publisher */
  $handler->display->display_options['fields']['publisher']['id'] = 'publisher';
  $handler->display->display_options['fields']['publisher']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['publisher']['field'] = 'publisher';
  $handler->display->display_options['fields']['publisher']['label'] = '';
  $handler->display->display_options['fields']['publisher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['publisher']['element_label_colon'] = FALSE;
  /* Field: IDS: Publication date */
  $handler->display->display_options['fields']['publication_date']['id'] = 'publication_date';
  $handler->display->display_options['fields']['publication_date']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['publication_date']['field'] = 'publication_date';
  $handler->display->display_options['fields']['publication_date']['label'] = '';
  $handler->display->display_options['fields']['publication_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['publication_date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['publication_date']['custom_date_format'] = 'M Y';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Author(s): [authors], [publisher], [publication_date]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: IDS: Description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['alter']['max_length'] = '185';
  $handler->display->display_options['fields']['description']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['more_link_text'] = 'Find out more';
  $handler->display->display_options['fields']['description']['alter']['more_link_path'] = 'bridge-documents?object_id_filter=[object_id]';
  $handler->display->display_options['fields']['description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Filter criterion: IDS: Subjects */
  $handler->display->display_options['filters']['subject_filter']['id'] = 'subject_filter';
  $handler->display->display_options['filters']['subject_filter']['table'] = 'idsviews_documents';
  $handler->display->display_options['filters']['subject_filter']['field'] = 'subject_filter';
  $handler->display->display_options['filters']['subject_filter']['value'] = array(
    'C1755' => 'C1755',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'bridge-publications/cutting-edge-packs';
  $export[$view->name] =   $view;
}

/**
 * Add a view that displays only briefings.
 *
 * @param $export
 */
function idsviews_default_view_briefings(&$export){
  $view = new view();
  $view->name = 'ids_bridge_briefings';
  $view->description = 'View used to retrieve IDS Bridge Briefings.';
  $view->tag = 'default';
  $view->base_table = 'idsviews_documents';
  $view->human_name = 'IDS Bridge Briefings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = TRUE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More on Bibliographies';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Briefings';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: IDS: Object ID */
  $handler->display->display_options['fields']['object_id']['id'] = 'object_id';
  $handler->display->display_options['fields']['object_id']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['object_id']['field'] = 'object_id';
  $handler->display->display_options['fields']['object_id']['label'] = '';
  $handler->display->display_options['fields']['object_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['object_id']['element_label_colon'] = FALSE;
  /* Field: IDS: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'bridge-documents/?object_id_filter=[object_id]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: IDS: Authors */
  $handler->display->display_options['fields']['authors']['id'] = 'authors';
  $handler->display->display_options['fields']['authors']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['authors']['field'] = 'authors';
  $handler->display->display_options['fields']['authors']['label'] = '';
  $handler->display->display_options['fields']['authors']['exclude'] = TRUE;
  $handler->display->display_options['fields']['authors']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['authors']['display_as_links'] = FALSE;
  /* Field: IDS: Publisher */
  $handler->display->display_options['fields']['publisher']['id'] = 'publisher';
  $handler->display->display_options['fields']['publisher']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['publisher']['field'] = 'publisher';
  $handler->display->display_options['fields']['publisher']['label'] = '';
  $handler->display->display_options['fields']['publisher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['publisher']['element_label_colon'] = FALSE;
  /* Field: IDS: Publication date */
  $handler->display->display_options['fields']['publication_date']['id'] = 'publication_date';
  $handler->display->display_options['fields']['publication_date']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['publication_date']['field'] = 'publication_date';
  $handler->display->display_options['fields']['publication_date']['label'] = '';
  $handler->display->display_options['fields']['publication_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['publication_date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['publication_date']['custom_date_format'] = 'M Y';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Author(s): [authors], [publisher], [publication_date]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: IDS: Description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['alter']['max_length'] = '185';
  $handler->display->display_options['fields']['description']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['more_link_text'] = 'Find out more';
  $handler->display->display_options['fields']['description']['alter']['more_link_path'] = 'bridge-documents?object_id_filter=[object_id]';
  $handler->display->display_options['fields']['description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Filter criterion: IDS: Subjects */
  $handler->display->display_options['filters']['subject_filter']['id'] = 'subject_filter';
  $handler->display->display_options['filters']['subject_filter']['table'] = 'idsviews_documents';
  $handler->display->display_options['filters']['subject_filter']['field'] = 'subject_filter';
  $handler->display->display_options['filters']['subject_filter']['value'] = array(
    'C1797' => 'C1797',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'bridge-publications/bridge-briefings';
  $export[$view->name] =   $view;
}

function idsviews_default_view_reports(&$export){
  $view = new view();
  $view->name = 'ids_bridge_reports';
  $view->description = 'View used to retrieve IDS Bridge Reports.';
  $view->tag = 'default';
  $view->base_table = 'idsviews_documents';
  $view->human_name = 'IDS Bridge Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = TRUE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More on Bibliographies';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Reports';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: IDS: Object ID */
  $handler->display->display_options['fields']['object_id']['id'] = 'object_id';
  $handler->display->display_options['fields']['object_id']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['object_id']['field'] = 'object_id';
  $handler->display->display_options['fields']['object_id']['label'] = '';
  $handler->display->display_options['fields']['object_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['object_id']['element_label_colon'] = FALSE;
  /* Field: IDS: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'bridge-documents/?object_id_filter=[object_id]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: IDS: Authors */
  $handler->display->display_options['fields']['authors']['id'] = 'authors';
  $handler->display->display_options['fields']['authors']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['authors']['field'] = 'authors';
  $handler->display->display_options['fields']['authors']['label'] = '';
  $handler->display->display_options['fields']['authors']['exclude'] = TRUE;
  $handler->display->display_options['fields']['authors']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['authors']['display_as_links'] = FALSE;
  /* Field: IDS: Publisher */
  $handler->display->display_options['fields']['publisher']['id'] = 'publisher';
  $handler->display->display_options['fields']['publisher']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['publisher']['field'] = 'publisher';
  $handler->display->display_options['fields']['publisher']['label'] = '';
  $handler->display->display_options['fields']['publisher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['publisher']['element_label_colon'] = FALSE;
  /* Field: IDS: Publication date */
  $handler->display->display_options['fields']['publication_date']['id'] = 'publication_date';
  $handler->display->display_options['fields']['publication_date']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['publication_date']['field'] = 'publication_date';
  $handler->display->display_options['fields']['publication_date']['label'] = '';
  $handler->display->display_options['fields']['publication_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['publication_date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['publication_date']['custom_date_format'] = 'M Y';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Author(s): [authors], [publisher], [publication_date]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: IDS: Description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'idsviews_documents';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['alter']['max_length'] = '185';
  $handler->display->display_options['fields']['description']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['more_link_text'] = 'Find out more';
  $handler->display->display_options['fields']['description']['alter']['more_link_path'] = 'bridge-documents?object_id_filter=[object_id]';
  $handler->display->display_options['fields']['description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Filter criterion: IDS: Subjects */
  $handler->display->display_options['filters']['subject_filter']['id'] = 'subject_filter';
  $handler->display->display_options['filters']['subject_filter']['table'] = 'idsviews_documents';
  $handler->display->display_options['filters']['subject_filter']['field'] = 'subject_filter';
  $handler->display->display_options['filters']['subject_filter']['value'] = array(
    'C1796' => 'C1796',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'bridge-publications/bridge-reports';
  $export[$view->name] =   $view;

}

function idsviews_display_subject_filter($display, $table) {
  $display->display_options['filters']['subject_filter']['id'] = 'subject_filter';
  $display->display_options['filters']['subject_filter']['table'] = $table;
  $display->display_options['filters']['subject_filter']['field'] = 'subject_filter';
  $display->display_options['filters']['subject_filter']['value'] = array();
  $display->display_options['filters']['subject_filter']['group'] = 1;
  $display->display_options['filters']['subject_filter']['exposed'] = TRUE;
  $display->display_options['filters']['subject_filter']['expose']['operator_id'] = '';
  $display->display_options['filters']['subject_filter']['expose']['label'] = 'Subject';
  $display->display_options['filters']['subject_filter']['expose']['operator'] = 'subject_filter_op';
  $display->display_options['filters']['subject_filter']['expose']['identifier'] = 'subject_filter';
  $display->display_options['filters']['subject_filter']['expose']['multiple'] = 1;
}

// In the case of subjects we need to call these functions when the API key is changed.
// Functions could also be defined for the other fields and, but we intend to keep the same structure of the exported views, so
// the fields and filters can be easily changed copying and pasting from the views defined with Views UI.
function idsviews_display_subject_field($display, $table) {
  $display->display_options['fields']['category_subject_array']['id'] = 'category_subject_array';
  $display->display_options['fields']['category_subject_array']['table'] = $table;
  $display->display_options['fields']['category_subject_array']['field'] = 'category_subject_array';
  $display->display_options['fields']['category_subject_array']['alter']['alter_text'] = 0;
  $display->display_options['fields']['category_subject_array']['alter']['make_link'] = 0;
  $display->display_options['fields']['category_subject_array']['alter']['absolute'] = 0;
  $display->display_options['fields']['category_subject_array']['alter']['external'] = 0;
  $display->display_options['fields']['category_subject_array']['alter']['replace_spaces'] = 0;
  $display->display_options['fields']['category_subject_array']['alter']['trim_whitespace'] = 0;
  $display->display_options['fields']['category_subject_array']['alter']['nl2br'] = 0;
  $display->display_options['fields']['category_subject_array']['alter']['word_boundary'] = 1;
  $display->display_options['fields']['category_subject_array']['alter']['ellipsis'] = 1;
  $display->display_options['fields']['category_subject_array']['alter']['more_link'] = 0;
  $display->display_options['fields']['category_subject_array']['alter']['strip_tags'] = 0;
  $display->display_options['fields']['category_subject_array']['alter']['trim'] = 0;
  $display->display_options['fields']['category_subject_array']['alter']['html'] = 0;
  $display->display_options['fields']['category_subject_array']['element_label_colon'] = 1;
  $display->display_options['fields']['category_subject_array']['element_default_classes'] = 1;
  $display->display_options['fields']['category_subject_array']['hide_empty'] = 1;
  $display->display_options['fields']['category_subject_array']['empty_zero'] = 0;
  $display->display_options['fields']['category_subject_array']['hide_alter_empty'] = 0;
}