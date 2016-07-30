<?php $block = block_load('views', 'landbook_countries_related-block_4');
  $block = _block_render_blocks(array($block));
  $block_build = _block_get_renderable_array($block);
  $partners=drupal_render($block_build);
?>
<?php if(!empty($partners)): ?>
<section class="country-section grey">
    <div class="container">
        <div class="row">
            <div class="col-md-offset-2 col-md-8">
                <a id="partners"></a>
                <h2 class="partners section-title"><?php print $title;?></h2>
            </div>
        </div>
        <div class="row">
          <?php  print $partners; ?>
        </div>
    </div>
</section>
<?php endif; ?>