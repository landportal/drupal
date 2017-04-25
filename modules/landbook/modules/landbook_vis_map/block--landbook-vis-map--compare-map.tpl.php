    <section id="<?php print $block_html_id; ?>" class="clearfix view-coda <?php print $classes; ?>"<?php print $attributes; ?>>
<?php if(!empty($block->subject)): ?>
      <header class="text-center">
<?php print render($title_prefix); ?>
<?php if ($block->subject): ?>
        <h2<?php print $title_attributes; ?>><?php print $block->subject ?></h2>
<?php endif;?>
<?php print render($title_suffix); ?>
      </header>
<?php endif;?>
      <nav class="text-center">
        <form>
          <div class="form-group col-xs-8 col-lg-offset-2 col-lg-5 hidden">
            <select name="indicator" class="form-control" disabled="disabled"></select>
          </div>
          <div class="form-group col-xs-4 col-lg-3 hidden">
            <select name="year" class="form-control" disabled="disabled"></select>
          </div>
        </form>
      </nav>

      <div>

        <div style="position: absolute; z-index: 200; width: 100%; margin-top: -30px;">
          <div class="loading">
            <div class="sk-three-bounce no-m-bottom">
              <div class="sk-child sk-bounce1"></div>
              <div class="sk-child sk-bounce2"></div>
              <div class="sk-child sk-bounce3"></div>
            </div>
            <p class="text-center" data-localize="feedback.loading">Loading data ...</p>
          </div>
        </div>
        <div class="map-fluid">
          <div id="<?php print $block_html_id; ?>-wrapper" class="map-fluid-wrapper"></div>
        </div>
      </div>
    </section>
