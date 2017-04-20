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
            <th data-localize="label.iname">Indicators</th>
            <th data-localize="label.year">Year</th>
            <th data-localize="label.val">Value</th>
            <th data-localize="label.unit">Unit</th>
            <th data-localize="label.dataset">Dataset</th>
            <th data-localize="label.dataset">Source</th>
            <th data-localize="label.remove">Remove</th>
          </tr>
        </thead>
        <tbody>
          <tr>
            <td colspan="7">
              <div class="loading">
                <div class="sk-three-bounce">
                  <div class="sk-child sk-bounce1"></div>
                  <div class="sk-child sk-bounce2"></div>
                  <div class="sk-child sk-bounce3"></div>
                </div>
                <p class="text-center" data-localize="feedback.loading">Loading data ...</p>
              </div>
            </td>
          </tr>
        </tbody>
      </table>
          </div>
          <footer>
            <form>
              <div class="form-group col-xs-7 col-sm-6">
                <select name="indicator" class="form-control">
                  <option data-localize="inputs.indicators">Select an indicator...</option>
                </select>
              </div>
              <div class="form-group col-xs-5 col-sm-3">
                <select name="year" class="form-control" disabled="disabled">
                  <option data-localize="inputs.years">Year...</option>
                </select>
              </div>
              <div class="form-group col-xs-7 col-sm-3">
                <input type="submit" name="add" value="Add" class="btn btn-primary" data-localize="inputs.addindicator"/>
              </div>
            </form>
          </footer>
        </section>
