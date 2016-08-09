<div class="col-sm-6">
<div id="wrapper-spiderchart"></div>
<?php $block = block_load('block', 3);
  $block = _block_render_blocks(array($block));
  $block_build = _block_get_renderable_array($block);
  echo drupal_render($block_build);
?>
</div>