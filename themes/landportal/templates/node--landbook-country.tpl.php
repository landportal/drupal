<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * @see node.tpl.php
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<?php switch ($view_mode) : ?>
<?php case 'teaser' : ?>
    <?php hide($content['links']); ?>
    <div class="col-md-8 col-md-offset-2 country-teaser">
      <?php print render($content); ?>
    </div>
<?php break; ?>

<?php default: ?>
<div id="node-<?php print $node->nid; ?>" class="col-md-8 col-md-offset-2 <?php print $classes; ?>"<?php print $attributes; ?>>
  <section class="content"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </section>

  <?php print render($content['links']); ?>
  <?php print render($content['comments']); ?>

</div>
<?php break; ?>
<?php endswitch; ?>