<?php
/* Get Contact us / feedback localized node URL */
global $language;
$translations = translation_path_get_translations("node/30375");
$url=drupal_get_path_alias($translations[$language->language]);
$contact_url='/'.$url;
if($language->language != 'en'){
  $contact_url='/'.$language->language.'/'.$url;;
}
?>

<?php $theme_path = drupal_get_path('theme', variable_get('theme_default', NULL));//pa($block,1); ?>
<div id="content-related-links" class="row clearfix text-center">
  <div class="col-md-6">
    <a href="<?php print base_path().current_path().'/pdf';?>">
      <img alt="PDF" src="<?php print '/'.$theme_path.'/images/ico-download.svg';?>">
      <span>Download PDF</span>
    </a>
  </div>
  <div class="col-md-6">
    <a href="<?php print $contact_url; ?>">
      <img alt="Feedback" src="<?php print '/'.$theme_path.'/images/ico-feedback.svg';?>">
      <span>Give us your feedback</span>
    </a>
  </div>
</div>