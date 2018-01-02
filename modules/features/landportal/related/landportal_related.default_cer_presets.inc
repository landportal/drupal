<?php
/**
 * @file
 * landportal_related.default_cer_presets.inc
 */

/**
 * Implements hook_default_cer().
 */
function landportal_related_default_cer() {
  $export = array();

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*blog_post*field_noderef*node*page*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*blog_post*field_noderef*node*page*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*blog_post*field_noderef*node*partners_page*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*blog_post*field_noderef*node*partners_page*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*blog_post*field_noderef*node*sdgi*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*blog_post*field_noderef*node*sdgi*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*dataset*field_noderef*node*page*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*dataset*field_noderef*node*page*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*dataset*field_noderef*node*partners_page*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*dataset*field_noderef*node*partners_page*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*dataset*field_noderef*node*sdgi*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*dataset*field_noderef*node*sdgi*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*debate*field_noderef*node*page*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*debate*field_noderef*node*page*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*debate*field_noderef*node*partners_page*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*debate*field_noderef*node*partners_page*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*debate*field_noderef*node*sdgi*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*debate*field_noderef*node*sdgi*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*event*field_noderef*node*page*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*event*field_noderef*node*page*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*event*field_noderef*node*partners_page*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*event*field_noderef*node*partners_page*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*event*field_noderef*node*sdgi*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*event*field_noderef*node*sdgi*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*landlibrary_resource*field_noderef*node*page*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*landlibrary_resource*field_noderef*node*page*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*landlibrary_resource*field_noderef*node*partners_page*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*landlibrary_resource*field_noderef*node*partners_page*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*landlibrary_resource*field_noderef*node*sdgi*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*landlibrary_resource*field_noderef*node*sdgi*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*news*field_noderef*node*page*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*news*field_noderef*node*page*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*news*field_noderef*node*partners_page*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*news*field_noderef*node*partners_page*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*news*field_noderef*node*sdgi*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*news*field_noderef*node*sdgi*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*page*field_noderef*node*blog_post*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*page*field_noderef*node*blog_post*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*page*field_noderef*node*dataset*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*page*field_noderef*node*dataset*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*page*field_noderef*node*debate*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*page*field_noderef*node*debate*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*page*field_noderef*node*event*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*page*field_noderef*node*event*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*page*field_noderef*node*landlibrary_resource*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*page*field_noderef*node*landlibrary_resource*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*page*field_noderef*node*news*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*page*field_noderef*node*news*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*page*field_noderef*node*partners*field_featured';
  $cnr_obj->enabled = 0;
  $export['node*page*field_noderef*node*partners*field_featured'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*page*field_noderef*node*partners*field_promoted';
  $cnr_obj->enabled = 0;
  $export['node*page*field_noderef*node*partners*field_promoted'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*page*field_noderef*node*partners_page*field_noderef';
  $cnr_obj->enabled = 0;
  $export['node*page*field_noderef*node*partners_page*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*page*field_noderef*node*sdgi*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*page*field_noderef*node*sdgi*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*partners_page*field_noderef*node*blog_post*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*partners_page*field_noderef*node*blog_post*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*partners_page*field_noderef*node*dataset*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*partners_page*field_noderef*node*dataset*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*partners_page*field_noderef*node*debate*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*partners_page*field_noderef*node*debate*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*partners_page*field_noderef*node*event*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*partners_page*field_noderef*node*event*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*partners_page*field_noderef*node*landlibrary_resource*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*partners_page*field_noderef*node*landlibrary_resource*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*partners_page*field_noderef*node*news*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*partners_page*field_noderef*node*news*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*partners_page*field_noderef*node*page*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*partners_page*field_noderef*node*page*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*partners_page*field_noderef*node*partners_page*field_noderef';
  $cnr_obj->enabled = 0;
  $export['node*partners_page*field_noderef*node*partners_page*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*partners_page*field_noderef*node*sdgi*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*partners_page*field_noderef*node*sdgi*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*sdgi*field_noderef*node*blog_post*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*sdgi*field_noderef*node*blog_post*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*sdgi*field_noderef*node*dataset*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*sdgi*field_noderef*node*dataset*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*sdgi*field_noderef*node*debate*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*sdgi*field_noderef*node*debate*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*sdgi*field_noderef*node*event*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*sdgi*field_noderef*node*event*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*sdgi*field_noderef*node*landlibrary_resource*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*sdgi*field_noderef*node*landlibrary_resource*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*sdgi*field_noderef*node*news*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*sdgi*field_noderef*node*news*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*sdgi*field_noderef*node*page*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*sdgi*field_noderef*node*page*field_noderef'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*sdgi*field_noderef*node*partners_page*field_noderef';
  $cnr_obj->enabled = 1;
  $export['node*sdgi*field_noderef*node*partners_page*field_noderef'] = $cnr_obj;

  return $export;
}
