    <section id="ranking" class="container">
<?php if(!empty($block->subject)): ?>
      <header class="row">
        <div class="col-xs-12">
          <h2><?php print $block->subject; ?></h2>
        </div>
      </header>
<?php endif;?>
      <div class="row text-center">
        <div class="col-md-offset-2 col-md-8 text-center">
          <form class="form-inline h3">
            <div class="form-group">
              <label>
                <span class="glyphicon glyphicon-download-alt"></span> Download the data for
              </label>
                <select name="year" class="form-control" disabled="disabled">
                  <option data-localize="inputs.years">Year...</option>
                </select>
            </div>
            <div class="form-group">
              <div class="checkbox">
                <label>
                  <input type="checkbox" name="all" value="all">
                  All years
                </label>
              </div>
            </div>
          </form>
        </div>
      </div>
      <div class="row text-center h3">
        <div class="col-sm-offset-1 col-sm-2"><a name="cvs" rel="nofollow" target="_blank" disabled="disabled" class="btn btn-default">CVS</label></a></div>
        <div class="col-sm-2"><a name="json" target="_blank" disabled="disabled" rel="nofollow" class="btn btn-default">JSON</label></a></div>
        <div class="col-sm-2"><a name="xml"  target="_blank" disabled="disabled" rel="nofollow" class="btn btn-default">XML</label></a></div>
        <div class="col-sm-2"><a name="application/vnd.ms-excel" target="_blank" disabled="disabled" rel="nofollow" class="btn btn-default">EXCEL</label></a></div>
        <div class="col-sm-2"><a name="html" target="_blank" disabled="disabled" rel="nofollow" class="btn btn-default">HTML</label></a></div>
      </div>
    </section>
