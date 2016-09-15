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
<?php switch ($view_mode) : ?>
<?php case 'listing' : ?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> node-listing clearfix"<?php print $attributes; ?>>

  <?php print $user_picture; ?>
  <div class="node-title">
    <span class="type"><?php print node_type_get_name($node); ?></span>
   <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  </div>
  <?php print render($title_prefix); ?>
  <?php print render($title_suffix); ?>

  <?php $information = '' ?>
  <?php $information = render($content['field_image']); ?>
  <?php $information .= render($content['field_date']); ?>
  <?php $information .= render($content['field_geographical_focus']); ?>
  <?php $information .= render($content['field_related_topics']); ?>
  <?php $contet_class = 'full-content'; ?>
  <?php if (!empty($information)) : ?>
    <section class="information">
      <?php $contet_class = 'content'; ?>
      <?php print $information; ?>
    </section>
  <?php endif; ?>

  <section class="<?php print $contet_class; ?>"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>

</div>

<?php break; ?>

<?php case 'teaser' : ?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
    <?php print render($title_prefix); ?>
    <?php print render($title_suffix); ?>
    <?php if (!empty($content['field_image'])): ?>
      <?php print render($content['field_image']); ?>
    <?php else: ?>
      <a href="<?php print $node_url; ?>"><?php print $title; ?></a>
    <?php endif; ?>
    <?php
    // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
</article>

<?php break; ?>

<?php default: ?>
<?php
//dpm($content);
hide($content['field_related_topics']);
hide($content['field_geographical_focus']);
hide($content['locations']);
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <aside class="col-sm-4 col-lg-3">
<?php print render($content['field_image']); ?>
<?php if ($page):
print render($content['field_related_topics']);
print render($content['field_geographical_focus']);
endif ?>
  </aside>
  <div class="content col-sm-8 col-lg-9"<?php print $content_attributes; ?>>
<?php print render($title_prefix); ?>
<?php if ($page): ?>
    <h1<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h1>
<?php elseif ($teaser && !isset($content['field_image'][0])): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
<?php endif; ?>
<?php print render($title_suffix); ?>

<?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
<?php endif; ?>
<?php
// We hide the comments and links now.
hide($content['links']);
hide($content['comments']);
print render($content);
?>
  </div>
</div>
<?php break; ?>
<?php endswitch; ?>
