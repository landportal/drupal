<?php
/**
 * @file
 * landbook_promoted_thematic.features.inc
 */

/**
 * Implements hook_custom_pub_defaults().
 */
function landbook_promoted_thematic_custom_pub_defaults() {
  $options = array();
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
