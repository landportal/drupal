<?php
/**
 * @file 
 */

$plugin = array(
  'single' => TRUE,
  'title' => t("IDS Document"),
  'description' => t("Shows a single IDS document"),
  'category' => t("IDS Content"),
  'edit form' => "idscontent_content_type_edit_form",
  'render callback' => "idscontent_content_type_render",
  'admin info' => "idscontent_content_type_admin_info",
  'required context' => new ctools_context_required(t("IDS Document"), "idscontent"),
  'defaults' => array(
    "show_title_in_content" => FALSE,
    "title_label" => "",
    "show_authors" => TRUE,
    "author_label" => t("Author") . ": ",
    "show_documents" => TRUE,
    'documents_label' => "",
    "show_publisher" => TRUE,
    "publisher_label" => t("Publisher").": ",
    "show_metadata_languages" => TRUE,
    "languages_label" => "",
    "show_publication_date" => TRUE,
    "publication_date_label" => t("Publication Date").": ",
    'show_description' => TRUE,
    "description_label" => "",
    'show_headline' => TRUE,
    "headline_label" => ""
  )
);

function idscontent_content_type_edit_form($form, &$form_state){
  $form['show_title_in_content'] = array(
    '#type' => "checkbox",
    '#default_value' => isset($form_state['conf']['show_title_in_content']) ? $form_state['conf']['show_title_in_content'] : 0,
    '#title' => t("Show title"),
    '#description' => t("If this is unselected the title will still be displayed above the content box (unless you have also changed that).")
  );
  $form['title_label'] = array(
    '#type' => "textfield",
    '#default_value' => isset($form_state['conf']['title_label']) ? $form_state['conf']['title_label'] : $form_state['plugin']['defaults']['title_label'],
    '#title' => t("Title label"),
    '#description' => t("If left blank then no label will be shown, otherwise the text provided will be shown")
  );
  $form['show_authors'] = array(
    '#type' => "checkbox",
    '#default_value' => isset($form_state['conf']['show_authors']) ? $form_state['conf']['show_authors'] : 1,
    '#title' => t("Show authors"),
  );
  $form['author_label'] = array(
    '#type' => "textfield",
    '#default_value' => isset($form_state['conf']['author_label']) ? $form_state['conf']['author_label'] : $form_state['plugin']['defaults']['author_label'],
    '#title' => t("Author label"),
    '#description' => t("If left blank then no label will be shown, otherwise the text provided will be shown")
  );
  $form['show_publisher'] = array(
    '#type' => "checkbox",
    '#default_value' => isset($form_state['conf']['show_publisher']) ? $form_state['conf']['show_publisher'] : 1,
    '#title' => t("Show publisher"),
  );
  $form['publisher_label'] = array(
    '#type' => "textfield",
    '#default_value' => isset($form_state['conf']['publisher_label']) ? $form_state['conf']['publisher_label'] : $form_state['plugin']['defaults']['publisher_label'],
    '#title' => t("Publisher label"),
    '#description' => t("If left blank then no label will be shown, otherwise the text provided will be shown")
  );
  $form['show_publication_date'] = array(
    '#type' => "checkbox",
    '#default_value' => isset($form_state['conf']['show_publication_date']) ? $form_state['conf']['show_publication_date'] : 1,
    '#title' => t("Show publication date"),
  );
  $form['publication_date_label'] = array(
    '#type' => "textfield",
    '#default_value' => isset($form_state['conf']['publication_date_label']) ? $form_state['conf']['publication_date_label'] : $form_state['plugin']['defaults']['publication_date_label'],
    '#title' => t("Publication date label"),
    '#description' => t("If left blank then no label will be shown, otherwise the text provided will be shown")
  );
  $form['show_metadata_languages'] = array(
    '#type' => "checkbox",
    '#default_value' => isset($form_state['conf']['show_metadata_languages']) ? $form_state['conf']['show_metadata_languages'] : 1,
    '#title' => t("Show languages"),
    '#description' => t("If this is checked, a list of translation languages will be provided, allowing the user to switch between languages.")
  );
  $form['metadata_languages_label'] = array(
    '#type' => "textfield",
    '#default_value' => isset($form_state['conf']['metadata_languages_label']) ? $form_state['conf']['metadata_languages_label'] : $form_state['plugin']['defaults']['metadata_languages_label'],
    '#title' => t("Languages label"),
    '#description' => t("If left blank then no label will be shown, otherwise the text provided will be shown")
  );
  $form['show_documents'] = array(
    '#type' => "checkbox",
    '#default_value' => isset($form_state['conf']['show_documents']) ? $form_state['conf']['show_documents'] : 1,
    '#title' => t("Show documents"),
    '#description' => t("If this is checked, a list of related documents will be provided with links to the documents.")
  );
  $form['documents_label'] = array(
    '#type' => "textfield",
    '#default_value' => isset($form_state['conf']['documents_label']) ? $form_state['conf']['documents_label'] : $form_state['plugin']['defaults']['documents_label'],
    '#title' => t("Documents label"),
    '#description' => t("If left blank then no label will be shown, otherwise the text provided will be shown")
  );
  $form['show_description'] = array(
    '#type' => "checkbox",
    '#default_value' => isset($form_state['conf']['show_description']) ? $form_state['conf']['show_description'] : 1,
    '#title' => t("Show description")
  );
  $form['description_label'] = array(
    '#type' => "textfield",
    '#default_value' => isset($form_state['conf']['description_label']) ? $form_state['conf']['description_label'] : $form_state['plugin']['defaults']['description_label'],
    '#title' => t("Description label"),
    '#description' => t("If left blank then no label will be shown, otherwise the text provided will be shown")
  );
  $form['show_headline'] = array(
    '#type' => "checkbox",
    '#default_value' => isset($form_state['conf']['show_headline']) ? $form_state['conf']['show_headline'] : 1,
    '#title' => t("Show headline")
  );
  $form['headline_label'] = array(
    '#type' => "textfield",
    '#default_value' => isset($form_state['conf']['headline_label']) ? $form_state['conf']['headline_label'] : $form_state['plugin']['defaults']['headline_label'],
    '#title' => t("Headline label"),
    '#description' => t("If left blank then no label will be shown, otherwise the text provided will be shown")
  );
  return $form;
}

function idscontent_content_type_edit_form_submit($form, &$form_state){
  foreach ($form_state['plugin']['defaults'] as $key => $value){
    if (isset($form_state['values'][$key])){
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
    else {
      $form_state['conf'][$key] = $value;
    }
  }
}

/**
 * Render the content type pane.
 *
 * @param      $subtype
 * @param      $conf
 * @param      $panel_args
 * @param null $context
 *
 * @return stdClass
 */
function idscontent_content_type_render($subtype, $conf, $panel_args, $context = null){
  $block = new stdClass();
  $block->title = '';
  $block->content = '';
  if (empty($context->data)){
    return $block;
  }

  $data = $context->data;
  $params = drupal_get_query_parameters();
  $title = $data->title;
  $description = $data->description;
  if (isset($params['lang'])){
    foreach ($data->language_array['language'] as $language){
      if ($language['isocode'] === $params['lang']){
        $title = $language['title'];
        $description = $language['description'];
      }
    }
  }
  $fields = array(
    "title" => array(
      "value" => $title,
      'label' => isset($conf['title_label']) ? $conf['title_label'] : "",
      "show" => isset($conf["show_title_in_content"]) ? $conf['show_title_in_content'] : FALSE),
    "author" => array(
      "value" => implode(", ", $data->authors),
      "label" => isset($conf['author_label']) ? $conf['author_label'] : "",
      "show" => isset($conf['show_authors']) ? $conf['show_authors'] : 1),
    "publisher" => array(
      "value" => $data->publisher,
      "show" => isset($conf['show_publisher']) ? $conf['show_publisher'] : 1,
      "label" => isset($conf['publisher_label']) ? $conf['publisher_label'] : ""),
    "publication_date" => array(
      "value" => date("M Y", $data->publication_date),
      "show" => isset($conf['show_publication_date']) ? $conf['show_publication_date'] : 1,
      "label" => isset($conf['publication_date_label']) ? $conf['publication_date_label'] : ""),
    "documents" => array(
      "value" => theme("idscontent_field_documents", array("documents" => $data->urls, "document" => $data, "conf" => $conf)),
      "label" => isset($conf['documents_label']) ? $conf['documents_label'] : "",
      "show" => isset($conf['show_documents']) ? $conf['show_documents'] : 1),
    "metadata_languages" => array(
      "value" => theme("idscontent_field_metadata_languages", array("languages" => $data->metadata_languages, "document" => $data, "conf" => $conf)),
      'label' => isset($conf['metadata_languages_label']) ? $conf['metadata_languages_label'] : "",
      "show" => isset($conf['show_metadata_languages']) ? $conf['show_metadata_languages'] : 1),
    "description" => array(
      "value" => $description,
      'label' => isset($conf['description_label']) ? $conf['description_label'] : "",
      "show" => isset($conf['show_description']) ? $conf['show_description'] : 1),
    "headline" => array(
      "value" => $headline,
      'label' => isset($conf['headline_label']) ? $conf['headline_label'] : "",
      "show" => isset($conf['show_headline']) ? $conf['show_headline'] : 1)
  );
  $block->title = $conf['override_title'] ? $conf['override_title_text'] : $title;
  $block->content = theme("idscontent_document", array("fields" => $fields, "document" => $data, "conf" => $conf));

  return $block;
}

function idscontent_content_type_admin_info($subtype, $conf, $contexts){
  if (!empty($conf)){
    $block = new stdClass;
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = t("Content from API would appear here");
    return $block;
  }
}