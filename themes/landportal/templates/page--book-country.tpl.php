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
<?php include 'tmp__page-header.php'; ?>

    <div id="section-header"><div class="section clearfix">
      <?php print render($page['section_header']); ?>
    </div></div> <!-- /.section-header -->
<!--
    <?php if ($breadcrumb): ?>
      <div id="breadcrumb"><?php print $breadcrumb; ?></div>
    <?php endif; ?>-->

    <?php print $messages; ?>

    <!--<div id="main-wrapper"><div id="main" class="clearfix">-->
        <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
        <?php print render($title_prefix); ?>
        <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
        <?php print render($title_suffix); ?>

        <?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
        <a id="main-content"></a>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
        <?php print render($page['content']); ?>
        <?php print $feed_icons; ?>
        </div> <!-- /.section, /#content --

    <!--</div>--></div> <!-- /#main, /#main-wrapper -->

    <div id="footer">
        <div class="section container">
            <div class="row">
                <?php print render($page['footer']); ?>
            </div>
        </div>
    </div>

  </div></div> <!-- /#page, /#page-wrapper -->
