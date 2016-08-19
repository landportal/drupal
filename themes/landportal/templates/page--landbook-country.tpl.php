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
      <div class="container">
          <div class="row">
            <div id="header"><div class="section clearfix">

              <?php if ($logo): ?>
                <div class="col-md-3">
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
              <div class="col-md-9">
                <div class="row">
                  <?php print render($page['header']); ?>
                </div>
              </div>
            </div>
          </div>
      </div>
    </div>

    <div id="section-header"><div class="section clearfix">
      <?php print render($page['section_header']); ?>
    </div></div> <!-- /.section-header -->

<?php
/**
 * Page content starts here
 */
?>
    <br/>
    <?php /*if ($breadcrumb): ?>
      <div id="breadcrumb"><?php print $breadcrumb; ?></div>
    <?php endif;*/ ?>
    <?php print $messages; ?>

<?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
    
    <div id="main-wrapper"><div id="main" class="clearfix">
<?php /* if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; */ ?>
        <?php print render($title_prefix); ?>
<?php /* Add Country Flag to title */ ?>
       <?php if ($title): ?><h1 class="title" id="page-title"><span>
 <?php print '<img src="/'.drupal_get_path('theme',$GLOBALS['theme']).'/images/flags/'.$node->book['iso3'].'.png" alt="flag"/>'; ?><?php print $title; ?>
</span></h1><?php endif; ?>
        <?php print render($title_suffix); ?>

    <section id="content">
    
        <?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
        <a id="main-content"></a>
        <?php print render($page['help']); ?>
        <?php print render($page['content']); ?>
        <?php print $feed_icons; ?>
    
      </section> <!-- /.section -->

      <?php if ($page['sidebar_first']): ?>
        <div id="sidebar-first" class="column sidebar"><div class="section">
          <?php print render($page['sidebar_first']); ?>
        </div></div> <!-- /.section, /#sidebar-first -->
      <?php endif; ?>

      <?php if ($page['sidebar_second']): ?>
        <div id="sidebar-second" class="column sidebar"><div class="section">
       <h2 class="section section-name"><span><?php print t('Also on the Landportal'); ?></span></h2>
          <?php print render($page['sidebar_second']); ?>
        </div></div> <!-- /.section, /#sidebar-second -->
      <?php endif; ?>

    </div></div> <!-- /#main, /#main-wrapper -->

    <div id="footer">
        <div class="section container">
            <div class="row">
                <?php print render($page['footer']); ?>
            </div>
        </div>
    </div>

  </div></div> <!-- /#page, /#page-wrapper -->
