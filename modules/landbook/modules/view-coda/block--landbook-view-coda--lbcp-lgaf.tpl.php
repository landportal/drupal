    <section id="lgaf" class="country-section">
      <div class="container">
        <header class="row text-center">
      <?php if(!empty($block->subject)): ?>
          <div class="col-xs-12">
           <h2 data-localize="global.rankings"><?php print $block->subject; ?></h2>
          </div>
      <?php endif;?>
        </header>
      <div class="col-xs-12 ldaf-title">
            <p class="displayb txt-c fos"><?php print t('Land Governance Assessment Framework (LGAF)');?></p>
      </div>
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
        <div class="col-lg-offset-3 col-lg-6 col-md-offset-2 col-md-8">
          <div class="loading hidden">
            <div class="sk-three-bounce">
              <div class="sk-child sk-bounce1"></div>
              <div class="sk-child sk-bounce2"></div>
              <div class="sk-child sk-bounce3"></div>
            </div>
            <p class="text-center" data-localize="feedback.loading">Loading data ...</p>
          </div>
          <ul id="lgaf-wrapper" class="list-unstyled">
            <li>Please, select year and panels to show the info.</li>
          </ul>
        </div>
        <div class="col-lg-offset-3 col-lg-6 col-md-offset-2 col-md-8 text-center">
          <ul id="lgaf-legend" class="list-unstyled list-inline">
            <li><span class="lgaf-value-a lgaf-value"></span> <span data-localize="label.vgp">Very Good Practice</span></li>
            <li><span class="lgaf-value-b lgaf-value"></span> <span data-localize="label.gp">Good Practice</span></li>
            <li><span class="lgaf-value-c lgaf-value"></span> <span data-localize="label.wp">Weak Practice</span></li>
            <li><span class="lgaf-value-d lgaf-value"></span> <span data-localize="label.vwp">Very Weak Practice </span></li>
            <li><span class="lgaf-value-na lgaf-value"></span> <span data-localize="label.ndata">Missing Value</span></li>
          </ul>
        </div>
        <div class="col-xs-12">
         <?php $block = block_load('landbook', 'lgaf_block');
          $block = _block_render_blocks(array($block));
          $block_build = _block_get_renderable_array($block);
          echo drupal_render($block_build);?>
        </div>
      </div>
      </div>
      <div class="container piechart">
      <?php $block = block_load('landbook_view_coda', 'lbcp_pie');
          $block = _block_render_blocks(array($block));
          $block_build = _block_get_renderable_array($block);
          echo drupal_render($block_build);?>
      <?php $block = block_load('landbook_view_coda', 'lbcp_spider');
          $block = _block_render_blocks(array($block));
          $block_build = _block_get_renderable_array($block);
          echo drupal_render($block_build);?>
      <?php $block = block_load('landbook_view_coda', 'lbcp_spider_note');
          $block = _block_render_blocks(array($block));
          $block_build = _block_get_renderable_array($block);
          echo drupal_render($block_build);?>
      </div>
    </section>
