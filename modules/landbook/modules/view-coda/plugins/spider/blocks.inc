<?php
/**
 * Land Portal View Coda
 *
 * Module blocks
 *
 * Author: Jules <jules@landportal.info>
 */

function lbvc_plugin_spider_block_info() {
  $blocks = array();
  $blocks['lbvc_spider'] = array(
    'info'      => t('LBVC: Spider'),
    'status'    => TRUE,
    'region'    => -1,
    'visibility'=> BLOCK_VISIBILITY_LISTED,
    'pages'     => "book/countries/*",
    'weight'    => 18
  );
  return $blocks;
}

function lbvc_plugin_spider_block_view($delta) {
  if ($delta != 'lbvc_spider') return;

  $body = variable_get('landbook-lbcp_spider', 'Note: This spider chart reflects the level of development of a country on four dimensions, which are measured using four internationally accepted indexes:<p class="m-xs-top no-m-bottom"><a href="https://landportal.info/book/indicators/oecd-sigi">The Social Institutions and Gender Index (SIGI) by OECD</a></p><p class="no-m-top no-m-bottom"><a href="https://landportal.info/book/indicators/wb-sipovgini">The GINI Index by the World Bank</a></p><p class="no-m-top no-m-bottom"><a href="https://landportal.info/book/indicators/undp-hdi-index">The Human Development Index (HDI) by UNDP</a></p><p><a href="https://landportal.info/book/indicators/ifpri-ghi">The Global Hunger Index (GHI) by IFPRI</a></p><p>All original values for the indexes have been rescaled from 0 to 100, where 0 reflects low development levels and 100 reflects high development levels.For each index the value for the most recent available year is selected by default".</p>');

  $block = array(
    'subject' => '<none>',
    'content' => array(
      '#markup' => $body,
      '#attached' => array(
        'library' => array(array('landbook_view_coda', 'lbvis.spider')),
        'js' => array(array(
          'type' => 'inline',
          'data' => lbvc__js_ready(
            'SPIDER = new lbvisSpider(LBV, {' . $jsAttr . ', target: "#block-landbook-view-coda-lbcp-spider-wrapper"}); SPIDER.init();'
          )
        ))
      )
    )
  );
  return $block;
}
