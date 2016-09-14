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
    <div class="node-image group col-md-5">
      <?php print render($content['field_image']); ?>
    </div>
    <div class="node-intro displayb col-md-7">
        <?php print render($title_prefix); ?>
        <?php print render($title_suffix); ?>
        <h2><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
        <?php $field_values = field_get_items('node', $node, 'field_date');
          $date_start = date('F jS',strtotime($field_values[0]['value']));
          $date_end = date('F jS, Y',strtotime($field_values[0]['value2']));
        ?>
        <div class="date"><?php print $date_start.' - '.$date_end; ?></div>
        <?php if(!empty($node->location['name'])): ?>
            <?php $location = $node->location['name']; ?>
        <?php else: ?>
            <?php $location = t($node->location['city'].' ,'.$node->location['country']); ?>
        <?php endif; ?>
        <div class="location"><?php print $location; ?></div>
        <?php
        // We hide the comments and links now so that we can render them later.
          hide($content['comments']);
          hide($content['links']);
          hide($content['field_image']);
          hide($content['field_date']);
          hide($content['location']);
          print render($content);
        ?>
    </div>
</article>

<?php break; ?>

<?php case 'promoted_country_page' : ?>
<?php 
hide($content['comments']);
hide($content['links']);
 ?>
<div class="c-item">
      <figure class="fig-carousel r-pos group">
          <?php print render($content); ?>
          <figcaption class="pos-txt-img-carousel c-contrast fos"><?php print $title; ?></figcaption>
          <div class="cover-img-carousel"></div>
      </figure>
    </div>

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
