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
<?php //pa($data,1); ?>
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

<section>
    <div class="container">
        <div class="row main">
            <div class="col-md-offset-2 col-md-8">
                <div class="country-flag">
                    <img src="/<?php echo drupal_get_path('theme', 'landportal'); ?>/images/flags/<?php echo $data['info']['iso3']; ?>.png" />
                </div>
                <h2><?php echo $data['info']['name']; ?></h2>
            </div>
        </div>
        <nav class="nav-top txt-c group m-l-bottom ">
            <ul class="nav-inside-country fos">
                <li class="nic-item">
                  <a href="#">The Country</a>
                </li>
                <li class="nic-item">
                  <a href="#indicators">Indicators</a>
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
                <li class="nic-item">
                  <a href="#media">Media</a>
                </li>
                <li class="nic-item">
                  <a href="#partners">Partners</a>
                </li>
                <li class="nic-item">
                  <a href="#library">Library</a>
                </li>
            </ul>
        </nav>
    </div>
</section>
<section>
    <div class="container">
        <div class="row">
            <div class="col-md-offset-2 col-md-8">
                <a id="indicators"></a>
                <h2 class="indicators section-title">Indicators</h2>
            </div>
        </div>
    </div>
        <?php if ($data['charts']['tableIndicators']): ?>
        <div class="socioeconomic-values chart-content">
           <?php echo landbook_table_render($data['charts']['tableIndicators']); ?>
        </div>
        <?php endif; ?>
    </div>
</section>
<section>
    <div class="container">
        <div class="row">
            <div class="col-md-offset-2 col-md-8">
                <a id="infographic"></a>
                <h2 class="infographics section-title">Infographics</h2>
                <p>grafics</p>
            </div>
        </div>
    </div>
</section>
<section>
    <div class="container">
        <div class="row">
            <div class="col-md-offset-2 col-md-8">
                <a id="mapping"></a>
                <h2 class="mapping section-title">Mapping</h2>
                <p>Very big map :)</p>
            </div>
        </div>
    </div>
</section>
<section>
    <div class="container">
        <div class="row">
            <div class="col-md-offset-2 col-md-8">
                <a id="rankings"></a>
                <h2 class="rankings section-title">Rankings</h2>
                <p>rankings</p>
            </div>
        </div>
    </div>
</section>
<section>
    <div class="container">
        <div class="row">
            <div class="col-md-offset-2 col-md-8">
                <a id="media"></a>
                <h2 class="media section-title">Media</h2>
            </div>
        </div>
        <?php  $block = block_load('views', 'book_latest_blocks-block_3');
          $block = _block_render_blocks(array($block));
          $block_build = _block_get_renderable_array($block);
          echo drupal_render($block_build);
        ?>

        <?php  $block = block_load('views', 'book_latest_blocks-block_1');
          $block = _block_render_blocks(array($block));
          $block_build = _block_get_renderable_array($block);
          echo drupal_render($block_build);
        ?>
        <?php  $block = block_load('views', 'book_latest_blocks-block_2');
          $block = _block_render_blocks(array($block));
          $block_build = _block_get_renderable_array($block);
          echo drupal_render($block_build);
        ?>

        <?php  $block = block_load('views', 'book_latest_blocks-block');
          $block = _block_render_blocks(array($block));
          $block_build = _block_get_renderable_array($block);
          echo drupal_render($block_build);
        ?>
    </div>
</section>
<section>
    <div class="container">
        <div class="row">
            <div class="col-md-offset-2 col-md-8">
                <a id="partners"></a>
                <h2 class="partners section-title">Partners</h2>
                <p>partners</p>
            </div>
        </div>
    </div>
</section>
<section>
    <div class="container">
        <div class="row">
            <div class="col-md-offset-2 col-md-8">
                <a id="library"></a>
                <h2 class="library section-title">Library</h2>
                <p>library</p>
            </div>
        </div>
    </div>
</section>
