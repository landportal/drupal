<?php  $block = block_load('views', 'landbook_countries_related-block_3');
  $block = _block_render_blocks(array($block));
  $block_build = _block_get_renderable_array($block);
  $news=drupal_render($block_build);
?>
<?php  $block = block_load('views', 'landbook_countries_related-block_1');
  $block = _block_render_blocks(array($block));
  $block_build = _block_get_renderable_array($block);
  $blog=drupal_render($block_build);
?>
<?php  $block = block_load('views', 'landbook_countries_related-block_2');
  $block = _block_render_blocks(array($block));
  $block_build = _block_get_renderable_array($block);
  $events=drupal_render($block_build);
?>
<?php  $block = block_load('views', 'landbook_countries_related-block');
  $block = _block_render_blocks(array($block));
  $block_build = _block_get_renderable_array($block);
  $debates=drupal_render($block_build);
?>

<?php if(!empty($news) || !empty($blog) || !empty($events) || !empty($debates) ): ?>
<section class="country-section">
    <div class="container">
        <div class="row">
            <div class="col-md-offset-2 col-md-8">
                <a id="media"></a>
                <h2 class="media section-title"><?php print $title;?></h2>
            </div>
        </div>
    </div>
    <div class="bg-gray">
        <div class="container">
            <div class="row">
                <div class="col-md-8 col-xs-12 bg-media">
                    <?php  echo $news; ?>
                </div>
                <div class="col-md-4 col-xs-12 bg-white">
                    <div class="adj-blog">
                        <?php print $blog; ?>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <div class="container">
        <div class="row">
            <div class="col-md-6 col-xs-12">
                <?php  print $events;
                ?>
            </div>
            <div class="col-md-6 col-xs-12">
                <?php  print $debates;
                ?>
            </div>
        </div>
    </div>
</section>
<?php endif; ?>