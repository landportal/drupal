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
            <form class="form-horizontal row">
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
              <ul class="list-unstyled"><li class="panelVal values-panel"></li></ul>
              <div class="collapsible collapsed panel panel-default">
                  <div class="panel-heading">
                     <a class="collapsed" role="button" data-toggle="collapse" aria-expanded="false" data-target="#vggt-exp">Explanation</a>
                  </div>
                  <div id="vggt-exp" class="panel-collapse collapse in">
                    <div class="panel-body">
                      <div class="panelInfo"><p>Please, select year and panels to show the info.</p></div>
                    </div>
                  </div>
                </div>

                <div class="collapsible collapsed panel panel-default">
                  <div class="panel-heading">
                    <a class="collapsed" role="button" data-toggle="collapse" aria-expanded="false" data-target="#vggt-laws">Relevant laws</a>
                  </div>
                  <div id="vggt-laws" class="panel-collapse collapse in">
                    <div class="panel-body">
                      <div class="countryInfo"><p>No relevant laws.</p></div>
                    </div>
                  </div>
                </div>
            </div>
          </div>
          <hr/>
                <div class="legend text-center">
                <em><?php print t('Legend'); ?>: <?php print t('National laws adoption of the VGGT principle'); ?></em>
                <ul class="list-unstyled list-inline values-legend">
                  <li><span class="value-a"></span> <?php print t('Fully adopt'); ?></li>
                  <li><span class="value-b"></span> <?php print t('Partially adopt'); ?></li>
                  <li><span class="value-c"></span> <?php print t('Not adopted'); ?></li>
                  <li><span class="value-na"></span> <?php print t('Missing Value'); ?></li>
                </ul>
              </div>
          <footer>
            <div class="panel-body"<?php print $content_attributes; ?>><?php print $content ?></div>
</footer>
</article>
