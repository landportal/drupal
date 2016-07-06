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
  <?php $information = render($content['field_doc_thumb']); ?>
  <?php $information .= render($content['field_date']); ?>
  <?php $information .= render($content['field_geographical_focus']); ?>
  <?php $information .= render($content['field_related_topics']); ?>
  <?php $information .= render($content['field_doc_geographic_region']); ?>
  <?php $information .= render($content['field_doc_country']); ?>
  <?php $information .= render($content['field_doc_subject']); ?>
  <?php //$information .= render($content['field_doc_keyword']); ?>
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
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix new p-l-top p-l-bottom group"<?php print $attributes; ?>>
    <div class="node-image group col-md-4">
      <?php print render($content['field_image']); ?>
    </div>
    <div class="node-intro displayb col-md-8">
        <?php print render($title_prefix); ?>
        <?php print render($title_suffix); ?>
        <h3><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
        <span class="created"><?php print t('On ').date('D j, Y',$node->created); ?></span>
        <div class="text">
            <?php print render($content['body']); ?>
        </div>
    </div>
</article>

<?php break; ?>

<?php default: ?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if($node->type !='page'): ?>
    <?php if($view_mode =='full'): ?>
    <section class="lang">
      <?php print render($content['links']['translation']); ?>
    </section>
  <?php endif; ?>
  <?php unset($content['links']['translation']); ?>
<?php endif; ?>
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

  <?php if ($display_submitted): ?>
  <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>
  </section>
  <?php if($node->type !='page'): ?>
    <?php print render($content['links']); ?>
  <?php endif; ?>
  <?php print render($content['comments']); ?>

</div>
<?php break; ?>
<?php endswitch; ?>
