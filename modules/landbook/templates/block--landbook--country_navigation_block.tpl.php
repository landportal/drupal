<section id="country-navigation">
    <div class="container">
      <?php if (!empty($block->country_info)): ?>
        <div class="row">
            <div class="col-md-12">
              <header>
                <?php if (!empty($block->country_info['iso'])): ?>
                  <span class="flag flag-<?php print $block->country_info['iso']; ?>"></span>
                <?php endif;?>
                <?php if (!empty($block->country_info['country_name'])): ?>
                  <h2><?php print $block->country_info['country_name'];?></h2>
                <?php endif;?>
              </header>
            </div>
        </div>
      <?php endif; ?>
        <div class="row">
          <div class="col-md-12">
            <div class="ul-wrap">
              <ul class="nav-inside-country">
                <li>
                  <a href="#"><?php print t('The country'); ?></a>
                </li>
                <li>
                  <a href="#table-indicators"><?php print t('Indicators'); ?></a>
                </li>
                <li>
                  <a href="#lgaf"><?php print t('Infographic'); ?></a>
                </li>
                <li>
                  <a href="#map-global"><?php print t('Mapping'); ?></a>
                </li>
                <li>
                  <a href="#compare"><?php print t('Compare countries'); ?></a>
                </li>
                <li>
                  <a href="#media"><?php print t('Media'); ?></a>
                </li>
                <li>
                  <a href="#partners"><?php print t('Partners'); ?></a>
                </li>
                <li>
                  <a href="#library"><?php print t('Library'); ?></a>
                </li>
              </ul>
            </div>
          </div>
        </div>
    </div>
</section>
