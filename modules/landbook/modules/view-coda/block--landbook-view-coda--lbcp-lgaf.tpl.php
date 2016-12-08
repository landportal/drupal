        <article id="<?php print $block_html_id; ?>" class="view-coda <?php print $classes; ?>"<?php print $attributes; ?>>
          <header class="text-center">
<?php print render($title_prefix); ?>
<?php if ($block->subject): ?>
            <h2<?php print $title_attributes; ?>><?php print $block->subject ?></h2>
<?php endif;?>
<?php print render($title_suffix); ?>
          </header>
          <div class="row">
            <form>
              <div class="form-group col-xs-6 col-sm-2">
                <select name="year" class="form-control" disabled="disabled">
                  <option data-localize="inputs.subpanels">Year</option>
                </select>
              </div>
              <div class="form-group col-xs-9 col-sm-5">
                <select name="panel" class="form-control">
                  <option data-localize="inputs.subpanels">Panel</option>
                </select>
              </div>
              <div class="form-group col-xs-12 col-sm-5">
                <select name="subpanel" class="form-control">
                  <option data-localize="inputs.subpanels">Sub-panel</option>
                </select>
              </div>
            </form>
          </div>
          <div class="row">
            <div class="col-xs-12">
              <div class="loading hidden">
                <div class="sk-three-bounce">
                  <div class="sk-child sk-bounce1"></div>
                  <div class="sk-child sk-bounce2"></div>
                  <div class="sk-child sk-bounce3"></div>
                </div>
                <p class="text-center" data-localize="feedback.loading">Loading data ...</p>
              </div>
              <ul id="<?php print $block_html_id; ?>-wrapper" class="list-unstyled">
                <li>Please, select year and panels to show the info.</li>
              </ul>
            </div>
            <div class="col-xs-12 legend text-center">
              <em>Legend</em>
              <ul class="list-unstyled list-inline">
                <li><span class="lgaf-value-a lgaf-value"></span> <span data-localize="label.vgp">Very Good Practice</span></li>
                <li><span class="lgaf-value-b lgaf-value"></span> <span data-localize="label.gp">Good Practice</span></li>
                <li><span class="lgaf-value-c lgaf-value"></span> <span data-localize="label.wp">Weak Practice</span></li>
                <li><span class="lgaf-value-d lgaf-value"></span> <span data-localize="label.vwp">Very Weak Practice </span></li>
                <li><span class="lgaf-value-na lgaf-value"></span> <span data-localize="label.ndata">Missing Value</span></li>
              </ul>
            </div>
          </div>
          <footer>
            <div<?php print $content_attributes; ?>><?php print $content ?></div>
          </footer>
        </article>
