        <article id="<?php print $block_html_id; ?>" class="view-coda view-coda-ranking <?php print $classes; ?>"<?php print $attributes; ?>>
          <header class="text-center">
<?php print render($title_prefix); ?>
<?php if ($block->subject): ?>
            <h2<?php print $title_attributes; ?>><?php print $block->subject ?></h2>
<?php endif;?>
<?php print render($title_suffix); ?>
            <form class="form-horizontal">
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
          </header>
          <div class="view-coda-vis">
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
            <div class="legend text-center">
              <em>Legend</em>
              <ul class="list-unstyled list-inline">
                <li><span class="lgaf-value-a lgaf-value"></span> <?php print t('Very Good Practice'); ?></li>
                <li><span class="lgaf-value-b lgaf-value"></span> <?php print t('Good Practice'); ?></li>
                <li><span class="lgaf-value-c lgaf-value"></span> <?php print t('Weak Practice'); ?></li>
                <li><span class="lgaf-value-d lgaf-value"></span> <?php print t('Very Weak Practice'); ?></li>
                <li><span class="lgaf-value-na lgaf-value"></span> <?php print t('Missing Value'); ?></li>
              </ul>
            </div>
          <footer>
            <div<?php print $content_attributes; ?>><?php print $content ?></div>
          </footer>
        </article>
