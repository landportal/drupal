<?php
/* VGGT visualization block */
//dpm($block);
?>
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
                </select>
              </div>
              <div class="form-group col-xs-8 col-sm-5">
                <select name="panel" class="form-control">
                </select>
              </div>
              <div class="form-group col-xs-12 col-sm-5">
                <select name="subpanel" class="form-control">
                </select>
              </div>
            </form>
          </header>
          <div class="view-coda-vis">
              <div id="<?php print $block_html_id; ?>-wrapper" class="">
                <ul class="list-unstyled text-center"><li class="panelVal values-panel"></li></ul>
                <div class="panel panel-default">
                  <div class="panel-heading">Explanation</div>
                  <div class="panel-body">
                    <div class="panelInfo"><p>Please, select year and panels to show the info.</p></div>
                  </div>
                </div>
                <div class="panel panel-default">
                  <div class="panel-heading">Relevant laws</div>
                  <div class="panel-body">
                    <div class="countryInfo"></div>
                  </div>
                </div>
              </div>
          </div>
          <footer>
            <div>
              <div class="panel panel-default">
                <div class="panel-heading">Information on indicators</div>
                <div class="panel-body"<?php print $content_attributes; ?>><?php print $content ?></div>
              </div>
            </div>
            <div class="legend text-center">
              <em>Legend</em>
              <ul class="list-unstyled list-inline values-legend">
                <li><span class="value-a"></span> <?php print t('National laws fully adopt the VGGT principle'); ?></li>
                <li><span class="value-b"></span> <?php print t('National laws partially adopt the VGGT principle'); ?></li>
                <li><span class="value-c"></span> <?php print t('National laws do not adopt the VGGT principle'); ?></li>
                <li><span class="value-na"></span> <?php print t('Missing Value'); ?></li>
              </ul>
            </div>
          </footer>
        </article>
