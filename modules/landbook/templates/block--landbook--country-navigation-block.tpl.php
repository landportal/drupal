<section id="country-navigation" class="text-center">
<?php if (!empty($block->country_info)): ?>
  <header>
<?php if (!empty($block->country_info['iso'])): ?>
    <span class="flag-icon flag-icon-rounded flag-<?php print $block->country_info['iso']; ?>"></span>
<?php endif;?>
<?php if (!empty($block->country_info['country_name'])): ?>
    <h2><?php print $block->country_info['country_name'];?></h2>
<?php endif;?>
  </header>
<?php endif; ?>
   <div class="col-sm-12 text-center">
     <ul class="list-inline list-unstyled">
       <li><a href="#narrative"><?php print t('Country Narrative'); ?></a></li><li><a href="#block-landbook-vis-table-indicators-country-values"><?php print t('Indicators'); ?></a></li><li><a href="#block-landbook-view-coda-lbcp-linechart"><?php print t('Compare countries'); ?></a></li><li><a href="#block-landbook-vis-map-compare-map"><?php print t('Mapping'); ?></a></li><li><a href="#block-landbook-infographics"><?php print t('Infographics'); ?></a></li><li><a href="#block-landbook-media"><?php print t('Media'); ?></a></li><li><a href="#block-views-country-content-partners"><?php print t('Partners'); ?></a></li><li><a href="#block-views-country-content-library"><?php print t('Library'); ?></a></li>
     </ul>
   </div>
</section>
