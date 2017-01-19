    <section id="<?php print $block_html_id; ?>" class="view-coda view-coda-ranking <?php print $classes; ?>"<?php print $attributes; ?>>
<?php if(!empty($block->subject)): ?>
          <header class="text-center">
<?php print render($title_prefix); ?>
<?php if ($block->subject): ?>
            <h2<?php print $title_attributes; ?>><?php print $block->subject ?></h2>
<?php endif;?>
<?php print render($title_suffix); ?>
          </header>
<?php endif;?>
  <nav>
    <form>
      <div class="form-group">
        <select name="indicator" class="form-control">
          <option data-localize="inputs.indicators">Select an indicator...</option>
        </select>
      </div>
      <div class="form-group">
        <select name="year" class="form-control" disabled="disabled">
          <option data-localize="inputs.years">Year...</option>
        </select>
      </div>
    </form>
  </nav>
  <div class="metadata">
    <div class="text-center h2 visible-print-block">
      <a><span name="indicator"></span></a>
      <span name="year" class="h3"></span>
    </div>
    <div class="text-center h3">
      <a><span name="dataset"></span></a> -
      <a><span name="source"></span></a>
    </div>
    <div class="text-center">
      <p><span name="description"></span></p>
    </div>
  </div>
  <div>
       <ul id="<?php print $block_html_id; ?>-wrapper" class="ranking list-unstyled"></ul>
  </div>
</section>
