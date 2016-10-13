<?php

/**
 * @file
 * Default theme implementation for profiles.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */

//include_once drupal_get_path('module', 'profile2').'/profile2.tpl.php';

hide($content['field_image']);
hide($content['field_title']);
hide($content['field_firstname']);
hide($content['field_lastname']);
?>

<article class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
<?php if ($variables['elements']['#bundle'] == 'main'): ?><header>
<?php
if ($variables['elements']['#view_mode'] == 'teaser') {
    echo '<a href="' . $variables['url'] . '">';
}
print render($content['field_title']);
print render($content['field_firstname']);
print render($content['field_lastname']);
if ($variables['elements']['#view_mode'] == 'teaser') { echo '</a>'; }
?>
</header><?php endif; ?>
  <div class="content"<?php print $content_attributes; ?>>
    <?php print render($content); ?>
    <?php print render($content['field_image']); ?>
  </div>
</article>
