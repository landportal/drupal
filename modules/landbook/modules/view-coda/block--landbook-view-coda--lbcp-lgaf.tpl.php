    <section id="lgaf" class="container">
      <?php if(!empty($block->subject)): ?>
        <header class="row text-center">
          <div class="col-xs-12">
           <h2 data-localize="global.rankings"><?php print $block->subject; ?></h2>
          </div>
          <div class="col-xs-12">
            <h3>Land Governance Assessment Framework (LGAF)</h3>
          </div>
        </header>
      <?php endif;?>
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
        <div class="col-xs-12 col-md-offset-2 col-md-8">
          <div class="loading hidden">
            <div class="sk-three-bounce">
              <div class="sk-child sk-bounce1"></div>
              <div class="sk-child sk-bounce2"></div>
              <div class="sk-child sk-bounce3"></div>
            </div>
            <p class="text-center" data-localize="feedback.loading">Loading data ...</p>
          </div>
          <ul id="lgaf-values" class="list-unstyled">
            <li>Please, select year and panels to show the info.</li>
          </ul>
        </div>
        <div class="col-xs-12 text-center">
          <ul id="lgaf-legend" class="list-unstyled list-inline">
            <li><span class="lgaf-value-a"></span> <span data-localize="label.vgp">Very Good Practice</span></li>
            <li><span class="lgaf-value-b"></span> <span data-localize="label.gp">Good Practice</span></li>
            <li><span class="lgaf-value-c"></span> <span data-localize="label.wp">Weak Practice</span></li>
            <li><span class="lgaf-value-d"></span> <span data-localize="label.vwp">Very Weak Practice </span></li>
            <li><span class="lgaf-value-na"></span> <span data-localize="label.ndata">Missing Value</span></li>
          </ul>
        </div>
        <div class="col-xs-12">
          <p>Note: Some Indicators might have multiple values (e.g. Green-Orange), which might refers to different localities or categories of people. For more information please refers to specific country reports and to the methodology made available by the original data source/provider: <a href="http://go.worldbank.org/21M7S7AZO0" target="_blank">The Land GovernanceAssessment Framework (LGAF) website of the World Bank</a></p>
        </div>
      </div>
    </section>
