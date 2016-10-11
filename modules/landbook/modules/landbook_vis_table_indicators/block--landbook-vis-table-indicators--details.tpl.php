<section id="table-indicators" class="country-section">
  <div class="container">
  <?php if(!empty($block->subject)): ?>
    <header class="row">
      <div class="col-md-offset-2 col-md-8 text-center">
        <h2 data-localize="global.indicators"><?php print $block->subject;?></h2>
      </div>
    </header>
  <?php endif;?>
      <div class="row">
        <div class="col-xs-12">
          <table class="table">
            <thead>
              <tr>
                <th data-localize="label.iname">Indicator</th>
                <th data-localize="label.minYear">Min Year</th>
                <th data-localize="label.maxYear">Max Year</th>
                <th data-localize="label.unit">Unit</th>
                <th data-localize="label.nObs">Number Observations</th>
                <th data-localize="label.nYears">Number Years</th>
                <th data-localize="label.nCountryWithValue">Total Countries</th>
                <th data-localize="label.perMissingValue">Missing Values (%)</th>
                <th data-localize="label.minvalue">Min Value</th>
                <th data-localize="label.maxValue">Max Value</th>
                <th data-localize="label.dataset">Dataset</th>
                <th data-localize="label.source">Source</th>
                <th data-localize="label.remove">Remove</th>
              </tr>
            </thead>
            <tbody>
            </tbody>
          </table>
        </div>
      </div>
      <footer class="row">
        <nav>
          <form>
            <div class="form-group col-xs-8 col-sm-9">
              <select name="indicator" class="form-control">
                <option data-localize="inputs.indicators">Select an indicator...</option>
              </select>
            </div>
            <div class="form-group col-xs-4 col-sm-3">
              <input type="submit" name="add" value="Add" class="btn btn-primary" data-localize="inputs.addindicator"/>
            </div>
          </form>
        </nav>
      </footer>
    </section>
