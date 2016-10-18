<section id="ranking" class="container">
<?php if(!empty($block->subject)): ?>
  <header class="row">
    <div class="col-xs-12">
      <h2><?php print $block->subject; ?></h2>
    </div>
  </header>
<?php endif;?>
  <nav class="row">
    <form>
      <div class="form-group col-xs-4 col-xs-push-3">
        <select name="indicator" class="form-control">
          <option data-localize="inputs.indicators">Select an indicator...</option>
        </select>
      </div>
      <div class="form-group col-xs-2 col-xs-push-3">
        <select name="year" class="form-control" disabled="disabled">
          <option data-localize="inputs.years">Year...</option>
        </select>
      </div>
    </form>
  </nav>
  <div class="row metadata">
    <div class="col-md-offset-2 col-md-8 text-center h2 visible-print-block">
      <a><span name="indicator"></span></a>
      <span name="year" class="h3"></span>
    </div>
    <div class="col-md-offset-2 col-md-8 text-center h3">
      <a><span name="dataset"></span></a> -
      <a><span name="source"></span></a>
    </div>
    <div class="col-md-offset-2 col-md-8 text-center">
      <p><span name="description"></span></p>
    </div>
  </div>
  <div class="row">
    <div class="col-xs-10 col-xs-push-1 col-sm-8 col-sm-push-2 col-lg-6 col-lg-push-3">
      <ul id="ranking-wrapper" class="ranking list-unstyled"></ul>
    </div>
  </div>
</section>
