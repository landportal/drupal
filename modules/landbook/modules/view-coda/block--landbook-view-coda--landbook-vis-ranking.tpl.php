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
      <div class="row">
        <div class="col-xs-12">
          <ul id="ranking-wrapper" class="list-unstyled"></ul>
        </div>
      </div>
    </section>
