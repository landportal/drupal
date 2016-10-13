<?php $theme_path = drupal_get_path('theme', variable_get('theme_default', NULL));//pa($block,1); ?>
<div class="pdf-block">
  <div class="container">
    <div class="row">
      <div class="col-md-12">
        <div class="col-sm-offset-2 col-sm-4 txt-c cb-right-2">
          <!--<a class="displayb"<?php if ($block->pdf_url) { ?> href="<?php print $block->pdf_url; ?>"<?php } ?> download=""><img class="c-obj" alt="PDF" src="<?php print '/'.$theme_path.'/images/ico-download.svg';?>"><span class="displayb txt-m m-s-top fos" data-localize="global.download">Download PDF</span>
    </a>
<?php if (!$block->pdf_url) { ?>
                              <i>(Coming soon)</i>
<?php } ?>-->
<a class="displayb" href="<?php print base_path().current_path().'/pdf';?>">
   <img class="c-obj" alt="PDF" src="<?php print '/'.$theme_path.'/images/ico-download.svg';?>">
    <span class="displayb txt-m m-s-top fos" data-localize="global.download">Download PDF</span>
</a>
               </div>
        <div class="col-sm-4 txt-c">
          <?php 
          global $language;
          $translations = translation_path_get_translations("node/30375");
          $url=drupal_get_path_alias($translations[$language->language]);
          $contact_url='/'.$url;
          if($language->language != 'en'){
              $contact_url='/'.$language->language.'/'.$url;;
          }
          ?>
          <a class="displayb" href="<?php print $contact_url; ?>">
          <img class="c-obj" alt="Feedback" src="<?php print '/'.$theme_path.'/images/ico-feedback.svg';?>">
          <span class="displayb txt-m m-s-top fos" data-localize="global.feedback">Give us your feedback</span>
          </a>
        </div>
      </div>
    </div>
  </div>
</div>