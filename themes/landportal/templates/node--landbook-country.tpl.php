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
    <div class="col-md-offset-2 col-md-8 country-description">
      <?php print render($content); ?>
    </div>
<?php break; ?>

<?php default: ?>
<aside class="col-md-4">
    <article>
      <h2 class="section"><span><?php echo t('Country map'); ?></span></h2>
      <div id="country-map" class="country-map"></div>
    </article>
    <article class="text-center">
      <a href="/book/countries/<?php echo $node->book['data']['entity-id']; ?>/details" class="btn btn-primary"><?php echo t('Full data on'); ?> <span class="country-name"><?php echo $node->book['data']['info']['name']; ?></span></a>
      <a href="/search/site/<?php echo $node->book['data']['info']['name']; ?>" target="_blank" class="btn btn-primary"><?php echo t('Search the Land Portal'); ?></a>
      <a href="/library/search?keyword=<?php echo $node->book['data']['info']['name']; ?>" target="_blank" class="btn btn-primary"><?php echo t('Consult the Land Library'); ?></a>
    </article>
</aside>

                   
<div id="node-<?php print $node->nid; ?>" class=" col-md-8<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <section class="information">
    <?php print render($content['field_image']); ?>
    <?php print render($content['field_date']); ?>
    <?php print render($content['field_geographical_focus']); ?>
    <?php print render($content['field_related_topics']); ?>
  </section>

  <section class="content"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>

  <?php /* if ($display_submitted): ?>
  <div class="submitted">
      <?php print $submitted; ?>
    </div>
    <?php endif; */ ?>
  </section>

  <?php print render($content['links']); ?>
  <?php print render($content['comments']); ?>

</div>
<?php break; ?>
<?php endswitch; ?>