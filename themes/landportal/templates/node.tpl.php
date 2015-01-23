<?php
/**
 * @file node.tpl.php
 * Almost a default theme implementation to display a node.
 *
 * @see node.tpl.php
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */

?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content-info"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['field_image']);
      hide($content['field_date']);
      hide($content['links']);
      hide($content['comments']);
      print render($content['field_image']);
if (isset($content['field_status'])) {
      hide($content['field_status']);
      print render($content['field_status']);
}
      print render($content['field_date']);

if ($teaser) {
      hide($content['locations']);
      print render($content['locations']);
}
if (isset($content['field_facilitators'])) {
      hide($content['field_facilitators']);
      print render($content['field_facilitators']);
}
    ?>
  </div>

  <div class="content"<?php print $content_attributes; ?>>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

    <?php
      // We hide the comments and links now so that we can render them later.
  print render($content);

    ?>
  </div>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</div>
