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
  switch ($delta) {
  case 'lbvc_download_ind':
    $block['subject'] = t('Download');
    $block['content'] = array(
      '#markup' => '<p>You will soon be able to download the data we have for this indicator.</p>'
/*       '#markup' => '<pre>[ ] All years */

/* <span class="glyphicon glyphicon-download"></span> Choose your format: */
/* <a href=""><i class="fa fa-table" aria-hidden="true"></i> CSV</a> - <a href=""><i class="fa fa-file-code-o" aria-hidden="true"></i> XML</a> - <a href=""><i class="fa fa-recycle" aria-hidden="true"></i> JSON</a> */
/* </pre>', */
    );
    break;
  case 'lbvc_download_cat':
    $block['subject'] = t('Download');
    $block['content'] = array(
      '#markup' => '<p>You will soon be able to download the data we have for this dataset.</p>'
/*       '#markup' => '<pre>[x] All indicators */
/* [x] All years */

/* <span class="glyphicon glyphicon-download"></span> Choose your format: */
/* <a href=""><i class="fa fa-table" aria-hidden="true"></i> CSV</a> - <a href=""><i class="fa fa-file-code-o" aria-hidden="true"></i> XML</a> - <a href=""><i class="fa fa-recycle" aria-hidden="true"></i> JSON</a> */
/* </pre>', */
    );
    break;
  }
  return $block;
}
