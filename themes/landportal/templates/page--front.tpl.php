<?php
/**
 * @file
 * Base page template for the Landportal
 *
 * This template is based on the default Drupal7 system page.
 * See also: /usr/share/drupal7/modules/system/page.tpl.php
 *
 * For: Landportal theme
 * Original work by: WESO (http://www.weso.es)
 * Drupal refactoring: Jules <jules@ker.bz>
 *
 * Git: https://github.com/landportal/drupal/
 */
?>
  <div id="page-wrapper"><div id="page">
      <div class="container-fluid">
          <div class="row">
            <div id="header"><div class="section clearfix">

              <?php if ($logo): ?>
                <div class="col-lg-2 col-lg-offset-1">
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
              <div class="col-lg-8">
                <div class="row">
                  <?php print render($page['header']); ?>
                </div>
              </div>
            </div>
          </div>
      </div>
    </div>

    <?php print $messages; ?>

    <div id="main-wrapper"><div id="main" class="clearfix">
        <?php print render($title_prefix); ?>
        <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
        <?php print render($title_suffix); ?>

      <div id="content" class="column"><div class="section">
        <?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
        <a id="main-content"></a>
        <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
        <?php print render($page['content']); ?>
        <?php print $feed_icons; ?>
      </div></div> <!-- /.section, /#content -->

    </div></div> <!-- /#main, /#main-wrapper -->

<?php echo views_embed_view('front_page_promoted', 'block'); ?>
<?php echo views_embed_view('news', 'block_1'); ?>
<?php echo views_embed_view('front_page_teasers', 'block'); ?>

    <div id="footer">
        <div class="section container">
            <div class="row">
                <?php print render($page['footer']); ?>
            </div>
        </div>
    </div>

  </div></div> <!-- /#page, /#page-wrapper -->
