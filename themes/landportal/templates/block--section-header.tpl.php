<?php
/**
 * @file
 * Show block in header-section region
 *
 * Only difference from default blocks is to show the description
 *  of the block (normally only visible in the admin) if it exists
 *
 * Those descriptions are automatically added to the landdebate-menu
 *  & landbook-menu from Landportal theme via hook_page_build()
 * Default theme implementation to display a block.
 *
 * @see landportal_page_build()
 * @see template_preprocess()
 * @see template_preprocess_block()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<?php if(arg(0)== 'book'): ?>
<div id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
	<div class="container menu-top">
	  	<?php print render($title_prefix); ?>
		<?php if ($block->subject): ?>
		  <h2<?php print $title_attributes; ?>><?php print $block->subject ?></h2>
		<?php endif; ?>
		  <?php print render($title_suffix); ?>
		 <?php if (isset($block->description)) : ?>
		  <p><?php print render($block->description); ?></p>
		<?php endif; ?>
	</div>
	<div class="menu-wrapper content"<?php print $content_attributes; ?>>
		<div class="container">
	    	<?php print $content ?>
	    </div>
	</div>
</div>

<?php else: ?>
<div id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <?php print render($title_prefix); ?>
<?php if ($block->subject): ?>
  <h2<?php print $title_attributes; ?>><?php print $block->subject ?></h2>
<?php endif; ?>
  <?php print render($title_suffix); ?>
 <?php if (isset($block->description)) : ?>
  <p><?php print render($block->description); ?></p>
<?php endif; ?>
  <div class="content"<?php print $content_attributes; ?>>
    <?php print $content ?>
  </div>
</div>

<?php endif; ?>
