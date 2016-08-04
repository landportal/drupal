<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * @see node.tpl.php
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
$country = taxonomy_term_load($node->field_countries['und'][0]['tid']);
$iso3 = $country->field_iso3['und'][0]['value'];
?>
<?php switch ($view_mode) : ?>
<?php case 'teaser' : ?>
    <?php hide($content['links']); ?>
    <div class="col-md-8 col-md-offset-2 country-teaser">
      <?php print render($content); ?>
    </div>
<?php break; ?>

<?php default: ?>
<div id="node-<?php print $node->nid; ?>" class="col-md-8 col-md-offset-2 <?php print $classes; ?>"<?php print $attributes; ?>>
  <header>
   <span class="flag flag-<?php print $iso3; ?>"></span>
    <?php print render($title_prefix); ?>
    <?php if (!$page): ?>
      <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
  </header>
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
  <section class="content"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </section>

  <?php print render($content['links']); ?>
  <?php print render($content['comments']); ?>

</div>
<?php break; ?>
<?php endswitch; ?>