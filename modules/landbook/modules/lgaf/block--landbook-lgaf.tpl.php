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
              <span><i class="fa fa-spinner fa-spin"></i> Loading data</span>
            </div>
           <div class="empty"><p>Please, select year and panels to show the info.</p></div>
            <ul id="<?php print $block_html_id; ?>-wrapper" class="list-unstyled"></ul>
          </div>
            <div class="legend text-center">
              <em>Legend</em>
              <ul class="list-unstyled list-inline">
                <li><span class="value-a"></span> <?php print t('Very Good Practice'); ?></li>
                <li><span class="value-b"></span> <?php print t('Good Practice'); ?></li>
                <li><span class="value-c"></span> <?php print t('Weak Practice'); ?></li>
                <li><span class="value-d"></span> <?php print t('Very Weak Practice'); ?></li>
                <li><span class="value-na"></span> <?php print t('Missing Value'); ?></li>
              </ul>
            </div>
          <footer>
            <div<?php print $content_attributes; ?>><?php print $content ?></div>
          </footer>
        </article>
