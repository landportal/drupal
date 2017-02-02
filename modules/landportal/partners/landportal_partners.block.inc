<?php

function landportal_partners_block_info() {

  $blocks['legend_contact'] = array(
    'info'          => t('Partners - LEGEND contact'),
    'status'        => TRUE,
    'region'        => 'content',
    'visibility'    => BLOCK_VISIBILITY_LISTED,
    'pages'         => "partners/legend*",
    'weight'        => 10
  );
  return $blocks;
}

function landportal_partners_block_view($delta = '') {
    $block = array();
    switch ($delta) {
    case 'legend_contact' :
        $block['subject'] = '<none>';
        $block['content'] = landportal_partners_block_body($delta);
        break;
    }
    return $block;
}

function landportal_partners_block_body($delta) {
  $default = array(
    'legend_contact' => 'For more information, contact <a href="mailto:legend@odi.org.uk">legend@odi.org.uk</a>.'
  );

  $out = variable_get('landportal_partners_' . $delta, $default[$delta]);
  return $out;
}
