<?php
/**
 * @file
 * mailchimp_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mailchimp_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bulletin|user|user|form';
  $field_group->group_name = 'group_bulletin';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Legend Bulletin ',
    'weight' => '10',
    'children' => array(
      0 => 'field_legend_arabic_language',
      1 => 'field_legend_english_language',
      2 => 'field_legend_french_language',
      3 => 'field_legend_spanish_language',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-bulletin field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_bulletin|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landportal_newsletter|user|user|form';
  $field_group->group_name = 'group_landportal_newsletter';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Landportal newsletter',
    'weight' => '5',
    'children' => array(
      0 => 'field_arabic_language',
      1 => 'field_english_language',
      2 => 'field_french_language',
      3 => 'field_spanish_language',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-landportal-newsletter field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_landportal_newsletter|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Landportal newsletter');
  t('Legend Bulletin ');

  return $field_groups;
}
