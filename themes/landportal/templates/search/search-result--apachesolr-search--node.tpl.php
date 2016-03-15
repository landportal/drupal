<li class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="node-teaser node-search">
    <?php print render($title_prefix); ?>
    <?php print render($title_suffix); ?>
    <div class="search-title">
      <span class="type"><?php print $content['type']; ?></span>
      <h2 <?php print $title_attributes; ?>><a href="<?php print $url; ?>"><?php print $title; ?></a></h2>
    </div>
    <?php if (!empty($content['image']) || $content['date'] || $content['regions'] || $content['topics']) : ?>
      <section class="information">
        <?php print render($content['image']); ?>
        <?php print render($content['date']); ?>
        <?php print render($content['regions']); ?>
        <?php print render($content['topics']); ?>
      </section>
      <section class="content"<?php print $content_attributes; ?>>
        <?php print render($content['body']); ?>
      </section>
    <?php else : ?>
      <section class="full-content"<?php print $content_attributes; ?>>
        <?php print render($content['body']); ?>
      </section>
    <?php endif; ?>
  </div>
</li>
