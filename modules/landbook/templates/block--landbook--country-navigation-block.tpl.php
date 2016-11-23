<section id="country-navigation" class="text-center row">
<?php if (!empty($block->country_info)): ?>
  <div class="col-md-12">
  <header>
<?php if (!empty($block->country_info['iso'])): ?>
    <span class="flag-icon flag-icon-rounded flag-<?php print $block->country_info['iso']; ?>"></span>
<?php endif;?>
<?php if (!empty($block->country_info['country_name'])): ?>
    <h2><?php print $block->country_info['country_name'];?></h2>
<?php endif;?>
  </header>
  </div>
<?php endif; ?>
  <div class="col-md-12">
    <div>
     <ul class="list-inline list-unstyled">
       <li><a href="#narrative"><?php print t('Country Narrative'); ?></a></li>
       <li><a href="#table-indicators"><?php print t('Indicators'); ?></a></li>
       <li><a href="#compare"><?php print t('Compare countries'); ?></a></li>
       <li><a href="#map-global"><?php print t('Mapping'); ?></a></li>
       <li><a href="#lgaf"><?php print t('Infographics'); ?></a></li>
       <li><a href="#block-media"><?php print t('Media'); ?></a></li>
       <li><a href="#partners"><?php print t('Partners'); ?></a></li>
       <li><a href="#library"><?php print t('Library'); ?></a></li>
     </ul>
   </div>
  </div>
  <a id="narrative"></a>
</section>
