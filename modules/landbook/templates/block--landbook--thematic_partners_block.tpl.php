<?php

// DO NOT OVERRIDE $block IN A BLOCK TEMPLATE!!!
$v = block_load('views', 'landbook_thematics_related-block_4');
$render = _block_get_renderable_array(_block_render_blocks(array($v)));
$output = drupal_render($render);
?>
<?php if(!empty($output)):?>
    <section id="partners-block" class="country-section grey">
        <div class="container">
            <div class="row">
                <div class="col-md-offset-2 col-md-8">
                    <a id="partners"></a>
                    <h2 class="partners section-title"><?php print $block->subject; ?></h2>
                </div>
            </div>
            <div class="row">
                <?php print $output; ?>
            </div>
        </div>
    </section>
<?php endif;?>