<?php
/**
 * @file
 * ct_thematic_narrative.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ct_thematic_narrative_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_thematic_narrative';
  $strongarm->value = 0;
  $export['comment_anonymous_thematic_narrative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_thematic_narrative';
  $strongarm->value = 0;
  $export['comment_default_mode_thematic_narrative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_thematic_narrative';
  $strongarm->value = '50';
  $export['comment_default_per_page_thematic_narrative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_thematic_narrative';
  $strongarm->value = 1;
  $export['comment_form_location_thematic_narrative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_thematic_narrative';
  $strongarm->value = '1';
  $export['comment_preview_thematic_narrative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_thematic_narrative';
  $strongarm->value = 1;
  $export['comment_subject_field_thematic_narrative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_thematic_narrative';
  $strongarm->value = '1';
  $export['comment_thematic_narrative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_thematic_narrative';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_thematic_narrative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_thematic_narrative';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_thematic_narrative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_thematic_narrative';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_thematic_narrative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__thematic_narrative';
  $strongarm->value = array(
    'view_modes' => array(
      'listing' => array(
        'custom_settings' => TRUE,
      ),
      'promoted_country_page' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '5',
        ),
        'locations' => array(
          'weight' => '8',
        ),
        'path' => array(
          'weight' => '9',
        ),
        'xmlsitemap' => array(
          'weight' => '7',
        ),
        'metatags' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__thematic_narrative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_thematic_narrative';
  $strongarm->value = '1';
  $export['i18n_node_extended_thematic_narrative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_thematic_narrative';
  $strongarm->value = array();
  $export['i18n_node_options_thematic_narrative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_thematic_narrative';
  $strongarm->value = array();
  $export['i18n_sync_node_type_thematic_narrative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_thematic_narrative';
  $strongarm->value = '2';
  $export['language_content_type_thematic_narrative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_thematic_narrative';
  $strongarm->value = array();
  $export['menu_options_thematic_narrative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_thematic_narrative';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_thematic_narrative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_thematic_narrative';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_thematic_narrative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_thematic_narrative';
  $strongarm->value = '1';
  $export['node_preview_thematic_narrative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_thematic_narrative';
  $strongarm->value = 0;
  $export['node_submitted_thematic_narrative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_thematic_narrative_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_thematic_narrative_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_thematic_narrative_es_pattern';
  $strongarm->value = '';
  $export['pathauto_node_thematic_narrative_es_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_thematic_narrative_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_thematic_narrative_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_thematic_narrative_pattern';
  $strongarm->value = 'book/thematic/[node:title]';
  $export['pathauto_node_thematic_narrative_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_thematic_narrative_pt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_thematic_narrative_pt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_thematic_narrative_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_thematic_narrative_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_thematic_narrative';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.6',
  );
  $export['xmlsitemap_settings_node_thematic_narrative'] = $strongarm;

  return $export;
}
