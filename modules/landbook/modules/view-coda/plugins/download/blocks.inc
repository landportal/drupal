<?php
/**
 * Land Portal View Coda
 *
 * Module blocks
 * 
 * Author: Jules <jules@landportal.info>
 */

function lbvc_plugin_download_block_info() {
  $blocks = array();
  $blocks['lbvc_download_ind'] = array(
    'info'            => t('LBVC: Download indicator'),
    'status'          => TRUE,
    'region'          => -1,
  );
  $blocks['lbvc_download_cat'] = array(
    'info'            => t('LBVC: Download catalog'),
    'status'          => TRUE,
    'region'          => -1,
  );
  return $blocks;
}

function lbvc_plugin_download_block_view($delta) {
  $block = NULL;
  $jsid = '#block-landbook-view-coda-' . str_replace('_', '-', $delta);
  $params = '$.extend({"debug": true, "target": "' . $jsid . '"}, Drupal.settings.landbook)';
  $js = 'DL = new lbvis.dl(LBV, ' . $params . '); DL.init();';

  switch ($delta) {
  case 'lbvc_download_ind':
    $block['subject'] = t('Download');
    $block['content'] = array(
      '#markup' => '<p>Download this Indicator data.</p>',
      '#attached' => array(
        'library' => array(array('landbook_view_coda', 'lbvis.dl')),
        'js' =>  array(array(
          'type' => 'inline',
          'data' => lbvc__js_ready($js)
        ))
      ),
      '#value' => t('Loading...')
    );
    break;
  case 'lbvc_download_cat':
    $block['subject'] = t('Download');
    $block['content'] = array(
      '#markup' => '<p>Download this Dataset data.</p>',
      '#attached' => array(
        'library' => array(array('landbook_view_coda', 'lbvis.dl')),
        'js' =>  array(array(
          'type' => 'inline',
          'data' => lbvc__js_ready($js)
        ))
      ),
      '#value' => t('Loading...')
    );
/*       '#markup' => '<pre>[x] All indicators */
/* [x] All years */

/* <span class="glyphicon glyphicon-download"></span> Choose your format: */
/* <a href=""><i class="fa fa-table" aria-hidden="true"></i> CSV</a> - <a href=""><i class="fa fa-file-code-o" aria-hidden="true"></i> XML</a> - <a href=""><i class="fa fa-recycle" aria-hidden="true"></i> JSON</a> */
/* </pre>', */

    break;
  }
  return $block;
}
