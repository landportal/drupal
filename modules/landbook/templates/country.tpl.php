<?php
/**
 * @file
 * Country page template
 *
 * The Landportal landbook
 *
 * Original work by: WESO (http://www.weso.es/)
 * Drupal refactoring: Jules <jules@ker.bz>
 */
?>
<?php //pa($data['charts']['gaugeIndicators'],1); ?>
<input type="hidden" id="entity-id" value="<?php echo $data['entity-id']; ?>" />
<input type="hidden" id="path" value="<?php echo drupal_get_path('module', 'landbook'); ?>" />
<input type="hidden" id="continent-id" value="<?php echo $data['info']['region']['un_code']; ?>" />
<input type="hidden" id="continent-name" value="<?php echo $data['info']['region']['name']; ?>" />
<input type="hidden" id="country-name" value="<?php echo $data['info']['name']; ?>" />
<input type="hidden" id="un-code" value="<?php echo $data['info']['iso3']; ?>" />
<input type="hidden" id="starred-indicators" value="<?php $si=''; foreach($data['starred']['indicators'] as $indicators): $si .= ($si? ',':'').$indicators['id']; endforeach; echo $si; ?>" />
<!--

  <div class="row">
    <div class="col-sm-12">
      <h1 class="country-name"><span class="country-name no-margin flag"><img id="flag" class="flag" src="/<?php echo drupal_get_path('theme', 'landportal'); ?>/images/flags/<?php echo $data['info']['iso3']; ?>.png" /><?php echo $data['info']['name']; ?></span></h1>
    </div>
  </div>



      <h2 class="section"><span><?php echo t('Socio-economic values'); ?></span></h2>
      <div class="socioeconomic-values chart-content">
<?php if ($data['charts']['tableIndicators']): ?>
   <?php echo landbook_table_render($data['charts']['tableIndicators']); ?>
<?php endif; ?>

        <p class="chart-source text-right"><?php echo t('Source'); ?>: <a href="/book/sources/worldbank"><?php echo t('World bank'); ?></a></p>
      </div>

      <h2 class="section section-name"><span class="indicator-name"></span><span> </span><span><?php echo t('For countries'); ?></span></h2>
      <div id="mapDiv" class="map-medium indicator-map"></div>
      <div id="chart-region-bar-comparison" class="graph-medium"></div>

      <h2 class="section section-name"><span class="indicator-name"></span><span> </span><span><?php echo t('Across time'); ?></span><span> </span><span class="country-name"><?php echo $data['info']['name']; ?></span></h2>
      <div class="row">
        <div class="col-xs-4"><?php echo t('Compare with'); ?></div>
        <div class="col-xs-8 compare-bar">
          <select id="country-comparing-select" class="form-control">
<?php foreach ($data['selectors']['countries'] as $c): ?>
            <option value="<?php echo $c['iso3']; ?>" data-region="<?php echo $c['region']; ?>"
  <?php if (!$c['data']) { echo ' disabled="disabled"'; } ?>><?php echo $c['name']; ?></option>
<?php endforeach; /* selectors/countries */ ?>
          </select>
        </div>
      </div>

      <div class="row compare-legend">
				<div class="col-xs-6">
					<div id="compare-legend-circle-1" class="circle"></div>
					<span id="compare-legend-text-1"></span>
				</div>
				<div class="col-xs-6">
					<div id="compare-legend-circle-2" class="circle"></div>
					<span id="compare-legend-text-2"></span>
				</div>
      </div>
      <div id="chart-timeline-comparison" class="graph">
            	<div class="source-graph chart-content">
   <?php if (isset($data['charts']['employment-timeline'])): ?>
   <?php echo landbook_table_render($data['charts']['employment-timeline']); ?>
   <?php endif; ?>
            	</div>
      </div>


      <h2 class="section section-wide"><span><strong><?php echo t('tendencies'); ?></strong></span></h2>
<?php foreach ($data['starred']['topics'] as $c): ?>
      <h2 class="section"><span><?php echo $c['name']; ?></span></h2>
      <div class="row evolutions">
  <?php foreach ($c['indicators'] as $i): ?>
        <div class="col-xs-6 col-md-3 no-signature">
          <div id="starred_<?php echo $i['id']; ?>" class="graph-small"></div>
          <p class="indicator-name"><?php echo $i['name']; ?></p>
        </div>
  <?php endforeach; ?>
      </div>
<?php endforeach; /* starred/topics */ ?>

<h2 class=="fos txt-small m-xs-top" data-localize="global.media">Media</h2>
-->
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




<div id="mapDiv" data-highcharts-map="0"></div>
<section class="country-section grey">
    <div class="container">
        <div class="row main">
            <div class="col-md-12">
                <div class="country-flag">
                    <img src="/<?php echo drupal_get_path('theme', 'landportal'); ?>/images/flags/<?php echo $data['info']['iso3']; ?>.png" />
                </div>
                <h2><?php echo $data['info']['name']; ?></h2>
                <nav class="nav-top txt-c group m-l-bottom ">
                    <span class="ul-wrap">
                    <ul class="nav-inside-country fos">
                        <li class="nic-item">
                          <a href="#">The Country</a>
                        </li>
                        <li class="nic-item">
                          <a href="#indicators">Indicators</a>
                        </li>
                        <li class="nic-item">
                          <a href="#compare">Compare Countries</a>
                        </li>
                        <li class="nic-item">
                          <a href="#infographic">Infographic</a>
                        </li>
                        <li class="nic-item">
                          <a href="#mapping">Mapping</a>
                        </li>
                        <li class="nic-item">
                          <a href="#rankings">Rankings</a>
                        </li>
                        <?php if(!empty($news) || !empty($blog) || !empty($events) || !empty($debates) ): ?>
                          <li class="nic-item">
                            <a href="#media">Media</a>
                          </li>
                        <?php endif; ?>
                        <?php if(!empty($partners)): ?>
                          <li class="nic-item">
                            <a href="#partners">Partners</a>
                          </li>
                        <?php endif; ?>
                        <?php if(!empty($library)): ?>
                        <li class="nic-item">
                          <a href="#library">Library</a>
                        </li>
                        <?php endif; ?>
                    </ul>
                    </span>
                </nav>
                <?php $description_country=load_country_description($data['info']['name']); ?>
                <?php if(empty($description_country)):?>
                  <div class="col-md-offset-2 col-md-8">
                  <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
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

<section class="country-section">
    <div class="container">
        <div class="row">
            <div class="col-md-offset-2 col-md-8">
                <a id="indicators"></a>
                <h2 class="indicators section-title">Indicators</h2>
            </div>
        </div>
        <?php print theme('indicators-table',array('data' => '')); ?>
    </div>
</section>

<section class="country-section grey">
    <div class="container">
        <div class="row">
            <div class="col-md-offset-2 col-md-8">
                <a id="compare"></a>
                <h2 class="infographics section-title">Compare countries</h2>
            </div>
        </div>
        <?php print theme('compare-contries',array('data' => '')); ?>
    </div>
</section>

<section class="country-section">
    <div class="container-fluid">
        <div class="row">
            <div class="col-md-offset-2 col-md-8">
                <a id="mapping"></a>
                <h2 class="mapping section-title">Mapping</h2>
            </div>
        </div>
        <?php print theme('mapping',array('data' => '')); ?>
    </div>
</section>

<section class="country-section grey">
    <div class="container">
        <div class="row">
            <div class="col-md-offset-2 col-md-8">
                <a id="infographic"></a>
                <h2 class="rankings section-title">Infographics</h2>
            </div>
        </div>
        <?php print theme('infographics',array('data' => '')); ?>
    </div>
</section>

<?php if(!empty($news) || !empty($blog) || !empty($events) || !empty($debates) ): ?>
<section class="country-section">
    <div class="container">
        <div class="row">
            <div class="col-md-offset-2 col-md-8">
                <a id="media"></a>
                <h2 class="media section-title">Media</h2>
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

<?php if(!empty($partners)): ?>
<section class="country-section grey">
    <div class="container">
        <div class="row">
            <div class="col-md-offset-2 col-md-8">
                <a id="partners"></a>
                <h2 class="partners section-title">Partners</h2>
            </div>
        </div>
        <div class="row">
          <?php  print $partners; ?>
        </div>
    </div>
</section>
<?php endif; ?>

<?php if(!empty($library)): ?>
<section class="country-section">
    <div class="container">
        <div class="row">
            <div class="col-md-offset-2 col-md-8">
                <a id="library"></a>
                <h2 class="library section-title">Library</h2>
            </div>
        </div>
        <div class="row">
            <?php  echo $library; ?>
        </div>
    </div>
</section>
<?php endif; ?>