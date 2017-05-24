<?php

function landportal_partners_block_info() {

  $blocks['mlike_footer_links'] = array(
    'info'          => t('Partners - MLIKE Footer links'),
    'status'        => TRUE,
    'region'        => 'footer',
    'visibility'    => BLOCK_VISIBILITY_LISTED,
    'pages'         => "partners/mlike*",
    'weight'        => 10
  );

  $blocks['mlike_header_links'] = array(
    'info'          => t('Partners - MLIKE Header links'),
    'status'        => TRUE,
    'region'        => 'header',
    'visibility'    => BLOCK_VISIBILITY_LISTED,
    'pages'         => "partners/mlike*",
    'weight'        => 10
  );

  $blocks['legend_contact'] = array(
    'info'          => t('Partners - LEGEND contact'),
    'status'        => TRUE,
    'region'        => 'content',
    'visibility'    => BLOCK_VISIBILITY_LISTED,
    'pages'         => "partners/legend*",
    'weight'        => 10
  );

  $blocks['legend_footer_links'] = array(
    'info'          => t('Partners - LEGEND Footer links'),
    'status'        => TRUE,
    'region'        => 'footer',
    'visibility'    => BLOCK_VISIBILITY_LISTED,
    'pages'         => "partners/legend*",
    'weight'        => 10
  );
  return $blocks;
}

function landportal_partners_block_view($delta = '') {
    $block = array();
    switch ($delta) {
    default:
      $str = landportal_partners_block_body($delta);
        $block['subject'] = '<none>';
        $block['content'] = $str;
        break;
    }
    return $block;
}

function landportal_partners_block_body($delta) {
  $default = array(
    'legend_contact' => 'For more information, contact <a href="mailto:legend@odi.org.uk">legend@odi.org.uk</a>.',
    'mlike_header_links' => '<ul class="list-inline"><li><a href="https://www.facebook.com/MLIKE.MRLG/" target="_blank"><span class="fa fa-facebook fa-border"></span></a></li></ul>',
  );

  $out = variable_get('lpp_' . $delta, (isset($default[$delta]) ? $default[$delta] : ''));
  return $out;
}

function landportal_partners_block_save($delta = '', $edit = array()) {
  switch($delta) {
  default:
    variable_set('lpp_' . $delta, $edit['text_body']['value']);
    break;
  }
}

function landportal_partners_block_configure($delta='') {
   $form = array();
   switch($delta) {
   default:
     $form['text_body'] = array(
       '#type' => 'text_format',
       '#title' => '',
       '#default_value' => landportal_partners_block_body($delta),
     );
   }
   return $form;
}
