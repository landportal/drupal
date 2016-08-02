<?php
/**
 * @file
 * Show block in header-section region
 *
 * Only difference from default blocks is to show the description
 *  of the block (normally only visible in the admin) if it exists
 *
 * Those descriptions are automatically added to the landdebate-menu
 *  & landbook-menu from Landportal theme via hook_page_build()
 * Default theme implementation to display a block.
 *
 * @see landportal_page_build()
 * @see template_preprocess()
 * @see template_preprocess_block()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<div id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="container menu-top">
      <?php print render($title_prefix); ?>
    <?php if ($block->subject): ?>
      <h2<?php print $title_attributes; ?>><?php print $block->subject ?></h2>
    <?php endif; ?>
      <?php print render($title_suffix); ?>
     <?php if (isset($block->description)) : ?>
      <p><?php print render($block->description); ?></p>
    <?php endif; ?>
  </div>

  <div class="menu-wrapper content navbar navbar-inverse" role="navigation">
    <div class="container">
      <div class="navbar-header">
          <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
          </button>
        </div>
        <div class="collapse navbar-collapse" id="header-menu">
          <?php print $content ?>
        </div>
      </div>
  </div>
</div>
