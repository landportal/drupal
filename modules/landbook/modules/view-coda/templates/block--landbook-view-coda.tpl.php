<?php
/* A generic block to display a LB view coda visualization */
?>
        <section id="<?php print $block_html_id; ?>" class="block view-coda <?php print $classes; ?>"<?php print $attributes; ?>>
<?php if(!empty($block->subject)): ?>
          <header>
<?php print render($title_prefix); ?>
<?php if ($block->subject): ?>
            <h2<?php print $title_attributes; ?>><?php print $block->subject ?></h2>
<?php endif;?>
<?php print render($title_suffix); ?>
          </header>
<?php endif;?>
<?php if ($block->vis): ?>
<div id="<?php print $block_html_id; ?>-wrapper"><?php print render($block->vis) ?></div>
<?php endif;?>
<?php if ($content): ?>
          <footer>
            <div<?php print $content_attributes; ?>><?php print $content ?></div>
          </footer>
<?php endif;?>
        </section>
