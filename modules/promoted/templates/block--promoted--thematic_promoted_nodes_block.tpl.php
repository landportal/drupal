<?php
  $v = block_load('views', 'promoted_nodes-block');
  $render = _block_get_renderable_array(_block_render_blocks(array($v)));
  $output = drupal_render($render);
?>

<?php if(!empty($output)):?>
  <section id="reletad-content">
      <div class="container-fluid">
      <?php if(!empty($block->subject)):?>
          <div class="row">
              <div class="col-md-offset-2 col-md-8">
                  <h2 class="section-title"><?php print $block->subject;?></h2>
              </div>
          </div>
      <?php endif;?>
          <div class="row">
        <?php print $output; ?>
          </div>
      </div>
  </section>
<?php endif;?>