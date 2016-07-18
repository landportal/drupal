<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
  	<a class="mic-i-a fos" data-control="" data-localize="global.historicalinfo" href="#legalinfo"><?php print  strip_tags(render($content['field_info_title'])); ?></a>
  	<span class="mic-i-control click"></span>
  	<div class="mic-content">
    	<?php print render($content['field_info_description']);?>
    </div>
  </div>
</div>