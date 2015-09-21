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
  <div class="content"<?php print $content_attributes; ?>>
<?php print render($content['field_image']); ?>

<?php print render($title_prefix); ?>
<?php if (!$page && ($teaser && !isset($content['field_image'][0]) )): ?>
<h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
<?php elseif ($teaser && isset($content['field_image'][0])): ?>
<span<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></span>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['links']);
      hide($content['comments']);
      print render($content);
    ?>
  </div>

</div>
