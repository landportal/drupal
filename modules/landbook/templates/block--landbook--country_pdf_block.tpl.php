<?php $theme_path = drupal_get_path('theme', variable_get('theme_default', NULL));//pa($block,1); ?>
<div class="pdf-block">
  <div class="container">
    <div class="row">
      <div class="col-md-12">
        <div class="col-sm-offset-2 col-sm-4 txt-c cb-right-2">
          <a class="displayb" href="<?php print $block->pdf_url; ?>" download="">
          <img class="c-obj" alt="Download PDF country" src="<?php print '/'.$theme_path.'/images/ico-download.svg';?>">
          <span class="displayb txt-m m-s-top fos" data-localize="global.download">Download PDF</span>
          </a>
        </div>
        <div class="col-sm-4 txt-c">
          <a class="displayb" href="/contact-us">
          <img class="c-obj" alt="Download PDF country" src="<?php print '/'.$theme_path.'/images/ico-feedback.svg';?>">
          <span class="displayb txt-m m-s-top fos" data-localize="global.feedback">Give us your feedback</span>
          </a>
        </div>
      </div>
    </div>
  </div>
</div>