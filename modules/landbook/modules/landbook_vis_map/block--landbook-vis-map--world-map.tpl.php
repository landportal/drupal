<section id="map-global" class="container-fluid">
  <header class="row">
    <div class="col-md-offset-2 col-md-8 text-center">
      <h2 data-localize="global.mapping"><?php print $block->subject; ?></h2>
    </div>
  </header>

  <div class="row">
    <form class="text-center">
      <div class="form-group col-xs-8 col-lg-offset-2 col-lg-5">
        <select name="indicator" class="form-control"></select>
      </div>
      <div class="form-group col-xs-4 col-lg-3">
        <select name="year" class="form-control" disabled="disabled">
          <option data-localize="inputs.syear">Select year ...</option>
        </select>
      </div>
    </form>
  </div>
  <div class="row">
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
    <div id="map-global-wrapper" class="col-xs-12"></div>
  </div>
  <div class="row hidden year-navigation">
    <div class="col-xs-12">
      <ul class="nav-years">
        <li><a href="#">2008</a></li>
      </ul>
    </div>
  </div>
</section>
