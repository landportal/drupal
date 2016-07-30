<?php
/**
 * Alter theme registry to automatically 'get' this module template files
 * See: https://www.drupal.org/node/715160
 */

function landbook_theme($existing, $type, $theme, $path) {
    $templates = drupal_find_theme_templates($existing, '.tpl.php', $path);
    //dpm($templates, 'Landbook templates');
    return $templates;
}
