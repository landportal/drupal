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
