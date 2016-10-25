<?php
/**
 * @file
 * landlibrary_taxonomy.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function landlibrary_taxonomy_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'taxonomy_term-landlibrary_resource_type-synonyms_synonyms'.
  $field_instances['taxonomy_term-landlibrary_resource_type-synonyms_synonyms'] = array(
    'bundle' => 'landlibrary_resource_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please, enter the synonyms which should be related to this term.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'synonyms_synonyms',
    'label' => 'Synonyms',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Please, enter the synonyms which should be related to this term.');
  t('Synonyms');

  return $field_instances;
}
