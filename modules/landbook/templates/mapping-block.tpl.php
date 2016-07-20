<section class="country-section">
    <div class="container-fluid">
        <div class="row">
            <div class="col-md-offset-2 col-md-8">
                <a id="mapping"></a>
                <h2 class="mapping section-title"><?php print $title;?></h2>
            </div>
        </div>
        <div class="container p-l-bottom">

          <div class="row m-l-top">

            <div class="col-lg-offset-2 col-lg-5 col-md-8">
              <select class="msindicator fos cinput cinput-s-arrow cinput-sh cinput-gray" id="msindicator"></select>
            </div>

            <div class="col-lg-3 col-md-4">
              <select id="msyear" class="msyear fos cinput cinput-s-arrow cinput-sh cinput-gray cinput-disabled" disabled="disabled">
                  <option value="0" data-localize="inputs.syear">Select year ...</option>
                </select>
            </div>

          </div>

        </div>

        <div id="maparea" class="r-pos">
          <div class="tit-mapping">--</div>
          <div id="wrapper-mapping"></div>

          <div class="pos_loader_data hddn">
            <div class="pos_spinkit">
              <div class="sk-three-bounce no-m-bottom">
                <div class="sk-child sk-bounce1"></div>
                <div class="sk-child sk-bounce2"></div>
                <div class="sk-child sk-bounce3"></div>
              </div>
              <p class="txt-s c-g40 uppc txt-c fos no-m-top m-xs-top" data-localize="feedback.loading">Loading data ...</p>
            </div>
          </div>

        </div>
    </div>
</section>