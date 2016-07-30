<?php  $block = block_load('views', 'landbook_countries_related-block_5');
    $block = _block_render_blocks(array($block));
    $block_build = _block_get_renderable_array($block);
    $library=drupal_render($block_build);
?>
<?php if(!empty($library)): ?>
<section class="country-section">
    <div class="container">
        <div class="row">
            <div class="col-md-offset-2 col-md-8">
                <a id="library"></a>
                <h2 class="library section-title"><?php print $title;?></h2>
            </div>
        </div>
        <div class="row">
            <?php  echo $library; ?>
        </div>
    </div>
</section>
<?php endif; ?>