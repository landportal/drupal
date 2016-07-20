<section class="country-section grey">
    <div class="container">
        <div class="row">
            <div class="col-md-offset-2 col-md-8">
                <a id="infographic"></a>
                <h2 class="rankings section-title"><?php print $title;?></h2>
            </div>
        </div>
        <div class="LGAF_area hddn">

          <div class="row m-l-top p-xl-bottom cb-bottom-lh">

            <div class="col-xs-12 m-l-top m-s-bottom">
              <p class="displayb txt-c fos">Land Governance Assessment Framework (LGAF)</p>
            </div>
            
            <div class="col-md-offset-1 col-md-2">
              <select class="egsyear fos cinput cinput-s-arrow cinput-sh">
                  <option value="0" selected="selected">Select year ...</option>
                </select>
            </div>

            <div class="col-md-4">
              <select class="egspanel fos cinput cinput-s-arrow cinput-sh cbtn-dis cinput-disabled" disabled="disabled">
                  <option value="0">Select panel...</option>
                </select>
            </div>

            <div class="col-md-4">
              <select class="egsindicator fos cinput cinput-s-arrow cinput-sh cinput-disabled" disabled="disabled">
                  <option value="0">Select Sub-panel ...</option>
                </select>
            </div>

          </div>

          <div class="row p-l-bottom">

            <div class="col-lg-offset-3 col-lg-6 col-md-offset-2 col-md-8 r-pos" id="quality-info">
              
              <ul class="quality-list">
                <li class="item-q fos r-pos txt-c c-g40">Please, select year and panels to show the info.</li>
              </ul>
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

            <div class="col-xs-12">
                <div class="quality-legend fos txt-c txt-s">
                  <span class="cqdata-il cqdata-a"></span> <span data-localize="label.vgp">Very Good Practice</span> &nbsp; 
                  <span class="cqdata-il cqdata-b"></span> <span data-localize="label.gp">Good Practice</span> &nbsp; 
                  <span class="cqdata-il cqdata-c"></span> <span data-localize="label.wp">Weak Practice</span> &nbsp;
                  <span class="cqdata-il cqdata-d"></span> <span data-localize="label.vwp">Very Weak Practice </span> &nbsp;
                  <span class="cqdata-il cqdata-na"></span> <span data-localize="label.ndata">Missing Value</span> 
                </div>
            </div>

            <div class="col-xs-12 m-l-top">
                <div class="txt-s c-g40 fos">Note: Some Indicators might have multiple values (e.g. Green-Orange), which might refers to different localities or categories of people. For more information please refers to specific country reports and to the methodology made available by the original data source/provider: <a href="http://go.worldbank.org/21M7S7AZO0" target="_blank">The Land GovernanceAssessment Framework (LGAF) website of the World Bank</a></div>
            </div>
            
          </div>
        </div>

        <div class="row">
        <?php  $block = block_load('block', '4');
                  $block = _block_render_blocks(array($block));
                  $block_build = _block_get_renderable_array($block);
                  echo drupal_render($block_build);
                ?>
        </div>
        <div class="row">
            <?php //drupal_add_js(array('landbook' => array('data_land' => $data['charts']['gaugeIndicators'])), 'setting'); ?>
            <div class="col-md-6">
              <div id="wrapper-piechart" data-highcharts-chart="1"></div>
            </div>
            <div class="col-md-6 sep-left-charts">
              <div id="wrapper-spiderchart" data-highcharts-chart="2"></div>
              <?php  $block = block_load('block', '3');
                  $block = _block_render_blocks(array($block));
                  $block_build = _block_get_renderable_array($block);
                  echo drupal_render($block_build);
                ?>
            </div>
        </div>
    </div>
</section>