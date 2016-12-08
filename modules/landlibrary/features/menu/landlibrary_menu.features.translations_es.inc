<?php
/**
 * @file
 * landlibrary_menu.features.translations_es.inc
 */

/**
 * Implements hook_translations_es_defaults().
 */
function landlibrary_menu_translations_es_defaults() {
  $translations = array();
  $translatables = array();
  $translations['es:menu']['f8ab6f058caae409183acd35dd6ca821'] = array(
    'source' => 'Landlibrary',
    'context' => 'item:4197:title',
    'location' => 'menu:item:4197:title',
    'translation' => 'Landlibrary',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Landlibrary', array(), array('context' => 'item:4197:title'));
  return $translations;
}