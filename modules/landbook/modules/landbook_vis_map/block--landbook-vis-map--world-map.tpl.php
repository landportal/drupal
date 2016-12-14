    <section id="<?php print $block_html_id; ?>" class="view-coda <?php print $classes; ?>"<?php print $attributes; ?>>
<?php if(!empty($block->subject)): ?>
      <header class="text-center">
<?php print render($title_prefix); ?>
<?php if ($block->subject): ?>
        <h2<?php print $title_attributes; ?>><?php print $block->subject ?></h2>
<?php endif;?>
<?php print render($title_suffix); ?>
      </header>
<?php endif;?>
      <div class="col-xs-12">
        <div class="map-fluid">
          <div id="<?php print $block_html_id; ?>-wrapper" class="map-fluid-wrapper"></div>
        </div>
      </div>
    </section>
