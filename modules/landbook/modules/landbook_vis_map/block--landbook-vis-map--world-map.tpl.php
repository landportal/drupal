<section id="map">
<?php if(!empty($block->subject)): ?>
  <header class="col-md-offset-2 col-md-8 text-center">
    <h2><?php print $block->subject; ?></h2>
  </header>
<?php endif;?>
  <div class="col-xs-12">
    <div class="map-fluid">
      <div id="map-wrapper" class="map-fluid-wrapper"></div>
    </div>
  </div>
</section>
