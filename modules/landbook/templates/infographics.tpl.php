<div class="row">
  <?php  $block = block_load('landbook', 'infografic_block');
          $block = _block_render_blocks(array($block));
          $block_build = _block_get_renderable_array($block);
          echo drupal_render($block_build);
        ?>
</div>
<div class="row">
<?php  $block = block_load('block', '4');
          $block = _block_render_blocks(array($block));
          $block_build = _block_get_renderable_array($block);
          echo drupal_render($block_build);
        ?>
</div>
<div class="row">
    <?php  drupal_add_js(array('landbook' => array('data_land' => $data['charts']['gaugeIndicators'])), 'setting'); ?>
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