<?php

// DO NOT OVERRIDE $block IN A BLOCK TEMPLATE!!!
//print_r ($block);

$views = [
    'news' => 'landbook_countries_related-block_3',
    'blog' => 'landbook_countries_related-block_1',
    'events' => 'landbook_countries_related-block_2',
    'debates' => 'landbook_countries_related-block',
];

foreach ($views as $vid => $view) {
    $v = block_load('views', $view);
    $render_block = _block_get_renderable_array(_block_render_blocks(array($v)));
    if (isset($render_block['views_' . $view]['#markup'])) {
        $render[$vid] = drupal_render($render_block);
    }
    else{
        $render[$vid] = '';
    }
}
?>

<?php if(!empty($render['news']) || !empty($render['blog']) || !empty($render['events']) || !empty($render['debates'])):?>
    <section class="country-section">
        <div class="container">
            <div class="row">
                <div class="col-md-offset-2 col-md-8">
                    <a id="media"></a>
                    <h2 class="media section-title"><?php print $block->subject; ?></h2>
                </div>
            </div>
        </div>

        <?php $full_width=''; ?>
        <?php $centerred=''; ?>
        <?php if(empty($render['news'])):?>
            <?php $col1='hide '; ?>
            <?php $col2='centered'; ?>
        <?php endif; ?>
        <?php if(empty($render['blog'])):?>
            <?php $col2='hide '; ?>
            <?php $col1='centered'; ?>
            <?php $full_width='full-width'; ?>
        <?php endif; ?>
        <div class="bg-gray <?php print $full_width; ?>">
            <div class="container">
                <div class="row">
                    <div class="col-md-8 col-xs-12 bg-media <?php print $col1; ?>">
                        <?php print ($render['news']); ?>
                    </div>
                    <div class="col-md-4 col-xs-12 bg-white <?php print $col1; ?>">
                        <div class="adj-blog">
                            <?php print ($render['blog']); ?>
                        </div>
                    </div>
                </div>
            </div>
        </div>
        <div class="container">
            <div class="row">
                <?php $col1=''; ?>
                <?php $col2=''; ?>
                <?php $centerred=''; ?>
                <?php if(empty($render['events'])):?>
                    <?php $col1='hide '; ?>
                    <?php $col2='centered'; ?>
                <?php endif; ?>
                <?php if(empty($render['debates'])):?>
                    <?php $col2='hide '; ?>
                    <?php $col1='centered'; ?>
                <?php endif; ?>
                <div class="col-md-6 col-xs-12 <?php print $col1; ?>">
                    <?php print ($render['events']); ?>
                </div>
                <div class="col-md-6 col-xs-12 <?php print $col2; ?>">
                    <?php print ($render['debates']); ?>
                </div>
            </div>
        </div>
    </section>
<?php endif; ?>