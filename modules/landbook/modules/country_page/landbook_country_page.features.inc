<?php
/**
 * @file
 * landbook_country_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landbook_country_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_custom_pub_defaults().
 */
function landbook_country_page_custom_pub_defaults() {
  $options = array();
  // Exported option: promoted_to_country_page
  $options['promoted_to_country_page'] = array(
    'type' => 'promoted_to_country_page',
    'name' => t('Promoted to country page'),
    'node_types' => array(
      'blog_post' => t('Blog post'),
      'debate' => t('Debate'),
      'event' => t('Event'),
      'landlibrary_resource' => t('LandLibrary Resource'),
      'news' => t('News'),
    ),
  );

  // Exported option: promoted_to_thematic_page
  $options['promoted_to_thematic_page'] = array(
    'type' => 'promoted_to_thematic_page',
    'name' => t('Promoted to Thematic page'),
    'node_types' => array(
      'blog_post' => t('Blog post'),
      'debate' => t('Debate'),
      'event' => t('Event'),
      'landlibrary_resource' => t('LandLibrary Resource'),
      'news' => t('News'),
      'organization' => t('Organization'),
    ),
  );

  return $options;
}
