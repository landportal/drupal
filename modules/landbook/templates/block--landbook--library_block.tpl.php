<?php

// DO NOT OVERRIDE $block IN A BLOCK TEMPLATE!!!
$v = block_load('views', 'landbook_countries_related-block_5');
if (!isset($v->title)) {
  $v->title = '';
}
$render = _block_get_renderable_array(_block_render_blocks(array($v)));
if (!empty($render['views_landbook_countries_related-block_5'])) {
  if (!isset($render['views_landbook_countries_related-block_5']['#block']->region)) {
    $render['views_landbook_countries_related-block_5']['#block']->region = -1;
  }
}
$output = drupal_render($render);
?>
<?php if(!empty($output)):?>
  <section class="country-section">
      <div class="container">
          <div class="row">
              <div class="col-md-offset-2 col-md-8">
                  <a id="library"></a>
                  <h2 class="library section-title"><?php print $block->subject;?></h2>
              </div>
          </div>
          <div class="row">
        <?php print $output; ?>
          </div>
      </div>
  </section>
<?php endif;?>