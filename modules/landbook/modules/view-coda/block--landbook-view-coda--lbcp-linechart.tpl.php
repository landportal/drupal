        <article id="<?php print $block_html_id; ?>" class="view-coda <?php print $classes; ?>"<?php print $attributes; ?>>
          <header class="text-center">
<?php print render($title_prefix); ?>
<?php if ($block->subject): ?>
            <h2<?php print $title_attributes; ?>><?php print $block->subject ?></h2>
<?php endif;?>
<?php print render($title_suffix); ?>
        <form>
          <div class="form-group col-xs-12 col-sm-3">
            <select name="indicator" class="form-control">
              <option data-localize="inputs.indicators">Select an indicator...</option>
            </select>
          </div>
          <div class="form-group col-xs-6 col-sm-2">
            <select name="year[from]" class="form-control" disabled="disabled">
              <option data-localize="inputs.speriodfrom">From year ...</option>
            </select>
          </div>
          <div class="form-group col-xs-6 col-sm-2">
            <select name="year[to]" class="form-control" disabled="disabled">
              <option data-localize="inputs.speriodto">To year ...</option>
            </select>
          </div>
          <div class="form-group hidden-xs col-sm-1"></div>
          <div class="form-group col-xs-6 col-sm-3">
            <select name="country" class="form-control" disabled="disabled">
              <option data-localize="inputs.scountry">Select country ...</option>
            </select>
          </div>
          <div class="form-group col-xs-2 col-sm-1">
            <input type="submit" name="add" value="Add" class="btn btn-primary" data-localize="inputs.addtocompare"/>
          </div>
        </form>
          </header>
          <div class="col-xs-12 text-center" id="labels-compare">
            <span class="hidden">Remove countries added</span>
          </div>
          <div class="col-xs-12">
            <div id="<?php print $block_html_id; ?>-wrapper"></div>
          </div>
        </article>
