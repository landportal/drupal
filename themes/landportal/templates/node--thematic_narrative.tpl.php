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

<?php default: ?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <section class="content"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_landvoc_to']);
      hide($content['title_field']);
      hide($content['group_topics_regions']);
      hide($content['field_thematic_image']);
      ?>
      <div class="container">
           <div class="row">
               <div class="col-xs-12 thematic-top">
                   <?php print render($content['field_thematic_image']);?>
                   <?php print render($content['field_landvoc_to']);?>
                   <?php print render($content['title_field']);?>
                   <?php print render($content['group_topics_regions']);?>
               </div>
           </div>
      </div>
      <?php        
        $block = block_load('landbook', 'thematic_promoted_nodes_block');
        $block = _block_render_blocks(array($block));
        $block_build = _block_get_renderable_array($block);
        echo drupal_render($block_build);      
      ?>
      <?php         
        $block = block_load('landbook', 'thematic_country_navigation_block');
        $block = _block_render_blocks(array($block));
        $block_build = _block_get_renderable_array($block);
        echo drupal_render($block_build);      
      ?>
      <div class="container">
           <div class="row">
               <div class="col-xs-12">
                    <?php print render($content); ?>
               </div>
           </div>
      </div>

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
