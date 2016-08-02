    <section id="compare" class="container-fluid">
      <?php if(!empty($block->subject)): ?>
        <header class="row">
          <div class="col-md-offset-2 col-md-8 text-center">
           <h2 class="" data-localize="global.compare"><?php print $block->subject ?></h2>
          </div>
        </header>
      <?php endif;?>

      <div class="row">
        <form>
          <div class="form-group col-xs-6 col-sm-3">
            <select name="indicator" class="form-control">
              <option data-localize="inputs.indicators">Select an indicator...</option>
            </select>
          </div>
          <div class="form-group col-xs-6 col-sm-3">
            <select name="country" class="form-control" disabled="disabled">
              <option data-localize="inputs.scountry">Select country ...</option>
            </select>
          </div>
          <div class="form-group col-xs-3 col-sm-2">
            <select name="year[from]" class="form-control" disabled="disabled">
              <option data-localize="inputs.speriodfrom">From year ...</option>
            </select>
          </div>
          <div class="form-group col-xs-3 col-sm-2">
            <select name="year[to]" class="form-control" disabled="disabled">
              <option data-localize="inputs.speriodto">To year ...</option>
            </select>
          </div>
          <div class="form-group col-xs-3 col-sm-2">
            <input type="submit" name="add" value="Add country" class="btn btn-primary" data-localize="inputs.addtocompare"/>
          </div>
        </form>
      </div>
      <div class="row">
        <div class="col-xs-12 text-center" id="labels-compare">
          <span class="hidden">Remove countries added</span>
        </div>
      </div>
      <div class="row">
        <div class="col-xs-12">
          <div id="compare-chart"></div>
          <div class="loading">
            <div class="pos_spinkit">
              <div class="sk-three-bounce no-m-bottom">
                <div class="sk-child sk-bounce1"></div>
                <div class="sk-child sk-bounce2"></div>
                <div class="sk-child sk-bounce3"></div>
              </div>
              <p class="text-center" data-localize="feedback.loading">Loading data ...</p>
            </div>
          </div>
        </div>
      </div>
    </section>
