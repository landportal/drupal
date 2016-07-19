<div class="row m-l-top">
          <div class="col-md-3">
              <select class="sindicator fos cinput cinput-s-arrow cinput-sh" id="lsindicador"></select>
          </div>
          <div class="col-md-3">
              <select class="scountry fos cinput cinput-s-arrow cinput-sh " id="lscountry" disabled="disabled">
                <option value="0" data-localize="inputs.scountry">Select country ...</option>
              </select>
          </div>
          <div class="col-md-2">
              <select class="speriod fos cinput cinput-s-arrow cinput-sh " id="lsperiod_from" disabled="disabled">
                <option value="0" data-localize="inputs.speriodfrom">From year ...</option>
              </select>
          </div>
          <div class="col-md-2">
              <select class="speriod fos cinput cinput-s-arrow cinput-sh " id="lsperiod_to" disabled="disabled">
                <option value="0" data-localize="inputs.speriodto">To year ...</option>
              </select>
          </div>
          <div class="col-md-2">
              <a href="#" class="txt-s uppc txt-c cbtn cbtn-block cbtn-s-acc cbtn-s-sh2 fos cbtn-ladd-compare" data-localize="inputs.addtocompare">add</a>
          </div>
        </div>
        <div class="row">
          <div class="col-xs-12 txt-c p-l-top p-l-bottom" id="labels-compare">
            <span class="displayb c-g40 txt-xs uppc fos m-xs-bottom hddn remove-text">Remove countries added</span>
            <!--span class="label-compare displayib fos txt-s" data-iso3="CHN">China <a href="#" class="close-label"><img src="img/close-label.svg"></a></span-->
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