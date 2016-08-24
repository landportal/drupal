<section id="map-global" class="country-section row">
  <?php if(!empty($block->subject)): ?>
    <header class="col-md-offset-2 col-md-8 text-center">
      <h2 data-localize="global.mapping"><?php print $block->subject; ?></h2>
    </header>
  <?php endif;?>

        <nav class="text-center">
          <form>
            <div class="form-group col-xs-8 col-lg-offset-2 col-lg-5">
              <select name="indicator" class="form-control" disabled="disabled"></select>
            </div>
            <div class="form-group col-xs-4 col-lg-3">
              <select name="year" class="form-control" disabled="disabled"></select>
            </div>
          </form>
        </nav>

        <div class="col-xs-12">

    <div style="position: absolute; z-index: 200; width: 100%; margin-top: -30px;">
    <div class="loading">
      <div class="sk-three-bounce no-m-bottom">
        <div class="sk-child sk-bounce1"></div>
        <div class="sk-child sk-bounce2"></div>
        <div class="sk-child sk-bounce3"></div>
      </div>
      <p class="text-center" data-localize="feedback.loading">Loading data ...</p>
    </div>
    </div>

          <div class="map-fluid">
            <div id="map-global-wrapper" class="map-fluid-wrapper"></div>
          </div>
        </div>

</section>
