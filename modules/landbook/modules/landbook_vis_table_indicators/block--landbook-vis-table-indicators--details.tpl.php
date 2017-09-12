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
        <div class="view-coda-vis">
          <table class="table">
            <thead>
              <tr>
           <th>Indicator / Dataset (Source)</th>
           <th>Min-Max<br/>Number of years</th>
           <th><span class="hidden-xs">Countries</span><br/><acronym title="Number of Observations">Obs</acronym> missing</th>
           <th>Min / Max<span class="hidden-xs"> Value</span></th>
           <th>Remove</th>
              </tr>
            </thead>
            <tbody>
            </tbody>
          </table>
        </div>
      <footer>
        <nav>
          <form>
            <div class="form-group col-xs-8 col-sm-9">
              <select name="indicator" class="form-control">
                <option data-localize="inputs.indicators">Select an indicator...</option>
              </select>
            </div>
            <div class="form-group col-xs-4 col-sm-3">
              <input type="submit" name="add" value="Add" class="btn btn-primary" data-localize="inputs.addindicator"/>
            </div>
          </form>
        </nav>
      </footer>
    </section>
