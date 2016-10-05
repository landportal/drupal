<?php

/**
 * Implements hook_theme().
 */
function promoted_theme($existing, $type, $theme, $path) {
  $templates = drupal_find_theme_templates($existing, '.tpl.php', $path);
  return $templates;
}
