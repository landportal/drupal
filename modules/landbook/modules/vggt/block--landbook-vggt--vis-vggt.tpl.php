<?php
/* VGGT visualization block */
//dpm($block);
?>
        <article id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
          <header class="text-center">
<?php print render($title_prefix); ?>
<?php if ($block->subject): ?>
            <h2<?php print $title_attributes; ?>><?php print $block->subject ?></h2>
<?php endif;?>
<?php print render($title_suffix); ?>
          </header>
          <nav class="row">
            <form>
              <div class="form-group col-xs-6 col-sm-2">
                <select name="year" class="form-control" disabled="disabled">
                </select>
              </div>
              <div class="form-group col-xs-9 col-sm-5">
                <select name="panel" class="form-control">
                </select>
              </div>
              <div class="form-group col-xs-12 col-sm-5">
                <select name="subpanel" class="form-control">
                </select>
              </div>
            </form>
          </nav>
          <div class="row">
            <div class="col-lg-offset-3 col-lg-6 col-md-offset-2 col-md-8">
              <div id="<?php print $block_html_id; ?>-wrapper" class="">
                <ul class="list-unstyled text-center"><li class="panelVal"></li></ul>
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
          </div>
          <footer class="row">
            <div class="col-lg-offset-3 col-lg-6 col-md-offset-2 col-md-8">
              <div class="panel panel-default">
                <div class="panel-heading">Information on indicators</div>
                <div class="panel-body"<?php print $content_attributes; ?>><?php print $content ?></div>
              </div>
            </div>
            <div class="col-lg-offset-3 col-lg-6 col-md-offset-2 col-md-8 text-center">
              <em>Legend</em>
              <ul class="list-unstyled list-inline values-legend">
                <li><span class="value-a"></span> <span data-localize="label.vgp">Fully adopt the VGGT principle</span></li>
                <li><span class="value-b"></span> <span data-localize="label.gp">Partially adopt the VGGT principle</span></li>
                <li><span class="value-c"></span> <span data-localize="label.wp">Do not adopt the VGGT principle</span></li>
                <li><span class="value-na"></span> <span data-localize="label.ndata">Missing Value</span></li>
              </ul>
            </div>
          </footer>
        </article>
