<?php

$view = new view();
$view->name = 'landvoc_concepts';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'LandVoc concepts';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'LandVoc concepts';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '80';
$handler->display->display_options['style_plugin'] = 'grid';
$handler->display->display_options['style_options']['row_class'] = 'field-type-taxonomy-term-reference';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
/* Relationship: Taxonomy term: Content using Related concepts */
$handler->display->display_options['relationships']['reverse_field_related_topics_node']['id'] = 'reverse_field_related_topics_node';
$handler->display->display_options['relationships']['reverse_field_related_topics_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_related_topics_node']['field'] = 'reverse_field_related_topics_node';
/* Field: COUNT(Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_related_topics_node';
$handler->display->display_options['fields']['nid']['group_type'] = 'count';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name_field']['id'] = 'name_field';
$handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field']['field'] = 'name_field';
$handler->display->display_options['fields']['name_field']['label'] = '';
$handler->display->display_options['fields']['name_field']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name_field']['alter']['text'] = '[name_field] ([nid])';
$handler->display->display_options['fields']['name_field']['element_type'] = 'div';
$handler->display->display_options['fields']['name_field']['element_class'] = 'field-item';
$handler->display->display_options['fields']['name_field']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['name_field']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['name_field']['link_to_entity'] = 1;
/* Sort criterion: Taxonomy term: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['name']['field'] = 'name';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'landvoc_concepts' => 'landvoc_concepts',
);
/* Filter criterion: Taxonomy term: Name (name_field:language) */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'field_data_name_field';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'voc/landvoc/concept';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_concepts');
