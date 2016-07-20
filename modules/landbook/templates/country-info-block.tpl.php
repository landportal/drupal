<?php  $block = block_load('views', 'book_latest_blocks-block_3');
  $block = _block_render_blocks(array($block));
  $block_build = _block_get_renderable_array($block);
  $news=drupal_render($block_build);
?>
<?php  $block = block_load('views', 'book_latest_blocks-block_1');
  $block = _block_render_blocks(array($block));
  $block_build = _block_get_renderable_array($block);
  $blog=drupal_render($block_build);
?>
<?php  $block = block_load('views', 'book_latest_blocks-block_2');
  $block = _block_render_blocks(array($block));
  $block_build = _block_get_renderable_array($block);
  $events=drupal_render($block_build);
?>
<?php  $block = block_load('views', 'book_latest_blocks-block');
  $block = _block_render_blocks(array($block));
  $block_build = _block_get_renderable_array($block);
  $debates=drupal_render($block_build);
?>

<?php $block = block_load('views', 'book_latest_blocks-block_4');
  $block = _block_render_blocks(array($block));
  $block_build = _block_get_renderable_array($block);
  $partners=drupal_render($block_build);
?>

<?php  $block = block_load('views', 'book_latest_blocks-block_5');
    $block = _block_render_blocks(array($block));
    $block_build = _block_get_renderable_array($block);
    $library=drupal_render($block_build);
?>

<section class="top-hero grey">
  <div id="mapDiv" data-highcharts-map="0"></div>
  <div class="photo-gallery">
    <div class="cover-pg r-pos">
        <?php  $block = block_load('views', 'book_latest_blocks-block_6');
        $block = _block_render_blocks(array($block));
        $block_build = _block_get_renderable_array($block);
        print drupal_render($block_build);
        ?>

      <div class="country-intro">
        <div class="country-flag">
            <img src="/<?php echo drupal_get_path('theme', 'landportal'); ?>/images/flags/<?php echo $data['info']['iso3']; ?>.png" />
        </div>
        <h2><?php echo $data['info']['name']; ?></h2>
      </div>
    </div>
  </div>
</section>
<section class="country-section grey nopadding">
    <div class="container">
        <div class="row main">
            <div class="col-md-12">
                <nav class="nav-top txt-c group m-l-bottom ">
                    <span class="ul-wrap">
                    <ul class="nav-inside-country fos">
                        <li class="nic-item">
                          <a href="#"><?php print t('The Country');?></a>
                        </li>
                        <li class="nic-item">
                          <a href="#indicators"><?php print t('Indicators');?></a>
                        </li>
                        <li class="nic-item">
                          <a href="#compare"><?php print t('Compare Countries');?></a>
                        </li>
                        <li class="nic-item">
                          <a href="#infographic"><?php print t('Infographic');?></a>
                        </li>
                        <li class="nic-item">
                          <a href="#mapping">Mapping</a>
                        </li>
                        <?php if(!empty($news) || !empty($blog) || !empty($events) || !empty($debates) ): ?>
                          <li class="nic-item">
                            <a href="#media"><?php print t('Media');?></a>
                          </li>
                        <?php endif; ?>
                        <?php if(!empty($partners)): ?>
                          <li class="nic-item">
                            <a href="#partners"><?php print t('Partners');?></a>
                          </li>
                        <?php endif; ?>
                        <?php if(!empty($library)): ?>
                        <li class="nic-item">
                          <a href="#library"><?php print t('Library');?></a>
                        </li>
                        <?php endif; ?>
                    </ul>
                    </span>
                </nav>
                <?php $description_country=load_country_description($data['info']['name']); ?>
                <?php if(empty($description_country)):?>
                  <div class="col-md-offset-2 col-md-8">
                  <!--<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>-->
                  </div>
                <?php else: ?>
                  <?php print render($description_country); ?>
                <?php endif; ?>
                <?php $theme_path = drupal_get_path('theme', variable_get('theme_default', NULL));?>
                <div class="info-bottom col-md-12">
                <div class="col-sm-offset-2 col-sm-4 txt-c cb-right-2">
                <a class="displayb" href="#">
                <img class="c-obj" alt="Download PDF country" src="/<?php print $theme_path?>/images/ico-download.svg">
                <span class="displayb txt-m m-s-top fos" data-localize="global.download">Download PDF</span>
                </a>
                </div>
                <div class="col-sm-4 txt-c">
                <a class="displayb" href="/contact-us">
                <img class="c-obj" alt="Download PDF country" src="/<?php print $theme_path?>/images/ico-feedback.svg">
                <span class="displayb txt-m m-s-top fos" data-localize="global.feedback">Give us your feedback</span>
                </a>
                </div>
              </div>
            </div>
        </div>
    </div>
</section>
<section id="disclaimer">
    <div class="container-fluid">
      <div class="row">
        <div class="col-xs-offset-1 col-xs-10">
            <?php  $block = block_load('block', '2');
                $block = _block_render_blocks(array($block));
                $block_build = _block_get_renderable_array($block);
                echo drupal_render($block_build);
            ?>
          </div>
        </div>
      </div>
</section>