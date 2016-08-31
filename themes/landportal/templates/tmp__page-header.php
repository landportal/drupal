<?php
/* This is a TEMPORARY HACK
   to make all page*tpl.php headers the same
 */
?>
      <div class="container-fluid">
        <div class="row">

<div id="header"><div class="section clearfix">
    <?php if ($logo): ?>
    <div class="col-xs-4 col-sm-3 text-center">
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
      </a>
    </div>
    <?php endif; ?>
    <?php if ($site_name || $site_slogan):?>
    <div id="name-and-slogan">
      <?php if ($site_name): ?>
      <?php if ($title): ?>
      <div id="site-name"><strong>
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
      </strong></div>
      <?php else: /* Use h1 when the content title is empty */ ?>
      <h1 id="site-name">
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
      </h1>
      <?php endif; ?>
      <?php endif; ?>
      <?php if ($site_slogan): ?>
      <div id="site-slogan"><?php print $site_slogan; ?></div>
      <?php endif; ?>
    </div> <!-- /#name-and-slogan -->
    <?php endif; ?>
    <div class="col-xs-8 col-sm-9">
      <div class="row">
        <?php print render($page['header']); ?>
      </div>
    </div>
  </div>
</div>


      </div>
    </div>
