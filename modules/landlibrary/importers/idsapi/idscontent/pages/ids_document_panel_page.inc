<?php
$page = new stdClass();
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'ids_document_panel_page';
$page->task = 'page';
$page->admin_title = 'IDS document panel page';
$page->admin_description = '';
$page->path = 'ids-document/%object_id';
$page->access = array();
$page->menu = array();
$page->arguments = array(
  'object_id' => array(
    'id' => 1,
    'identifier' => 'IDS Document',
    'name' => 'object_id',
    'settings' => array(),
  ),
);
$page->conf = array(
  'admin_paths' => FALSE,
);
$page->default_handlers = array();
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_ids_document_panel_page_panel_context';
$handler->task = 'page';
$handler->subtask = 'ids_document_panel_page';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Panel',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
);
$display = new panels_display();
$display->layout = 'flexible';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'center' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->uuid = 'f3840873-a553-4bd6-b514-5d134dfa374d';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-9f7410a1-fcf1-4288-8d51-10e00a75e73e';
$pane->panel = 'center';
$pane->type = 'idscontent_content_type';
$pane->subtype = 'idscontent_content_type';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'context' => 'argument_object_id_1',
  'override_title' => 0,
  'override_title_text' => 'Test',
  'show_title_in_content' => 0,
  'show_authors' => 1,
  'show_documents' => 1,
  'show_publisher' => 1,
  'show_metadata_languages' => 1,
  'show_publication_date' => 1,
  'show_description' => 1,
  'title_label' => '',
  'author_label' => 'Author: ',
  'documents_label' => '',
  'publisher_label' => 'Publisher: ',
  'languages_label' => '',
  'publication_date_label' => 'Publication Date: ',
  'description_label' => '',
);
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array();
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = '9f7410a1-fcf1-4288-8d51-10e00a75e73e';
$display->content['new-9f7410a1-fcf1-4288-8d51-10e00a75e73e'] = $pane;
$display->panels['center'][0] = 'new-9f7410a1-fcf1-4288-8d51-10e00a75e73e';
$display->hide_title = PANELS_TITLE_PANE;
$display->title_pane = '0';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;
