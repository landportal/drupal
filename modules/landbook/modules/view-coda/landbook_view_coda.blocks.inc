<?php
/**
 * Land Portal View Coda
 *
 * Module blocks
 * 
 * Author: Jules <jules@landportal.info>
 */

global $plugins_blocks;
$plugins_blocks = array();
//$module_path = drupal_get_path('module', 'landbook_view_coda');
$files = file_scan_directory(dirname(__FILE__) . '/plugins', '/blocks.inc$/');
foreach($files as $file) {
  include_once $file->uri;
  //dpm($file, 'blocks: ' . basename(dirname($file->uri)));
  $plugins_blocks[] = basename(dirname($file->uri)); // the directory or this file
}
//dpm($plugins_blocks, 'PB');

function landbook_view_coda_block_info() {
  global $plugins_blocks;
  $blocks = array();

//  dpm($plugins_blocks, 'pb here');
  foreach($plugins_blocks as $p) {
    $fxptr = 'lbvc_plugin_' . $p . '_block_info';
    if (function_exists($fxptr)) {
      $blocks += $fxptr();
    }
  }

  // Old style blocks
  $blocks['lbcp_linechart'] = array(
    'info'      => t('View CODA: Infographics (linechart)'),
    'status'    => TRUE,
    'region'    => 'content',
    'visibility'=> BLOCK_VISIBILITY_LISTED,
    'pages'     => "book/countries/*",
    'weight'    => 11
  );
  $blocks['lbcp_lgaf'] = array(
    'info'      => t('View CODA: LGAF'),
    'status'    => TRUE,
    'region'    => 'content',
    'visibility'=> BLOCK_VISIBILITY_LISTED,
    'pages'     => "book/countries/*",
    'weight'    => 16
  );
  $blocks['lbcp_pie'] = array(
    'info'      => t('View CODA: Pie chart'),
    'status'    => TRUE,
    'region'    => -1,
    'visibility'=> BLOCK_VISIBILITY_LISTED,
    'pages'     => "book/countries/*",
    'weight'    => 17
  );
  $blocks['lbcp_spider'] = array(
    'info'      => t('View CODA: Spider'),
    'status'    => TRUE,
    'region'    => -1,
    'visibility'=> BLOCK_VISIBILITY_LISTED,
    'pages'     => "book/countries/*",
    'weight'    => 18
  );
  /* $blocks['indicator_dl'] = array( */
  /*   'info'      => t('View CODA: Indicator Download'), */
  /*   'status'    => TRUE, */
  /*   'region'    => 'content', */
  /*   'visibility'=> BLOCK_VISIBILITY_LISTED, */
  /*   'pages'     => "book/indicators/\*\n", */
  /*   'weight'    => 13 */
  /* ); */
  $blocks['indicator_ranking'] = array(
    'info'      => t('View CODA: Indicator Ranking'),
    'status'    => TRUE,
    'region'    => 'content',
    'visibility'=> BLOCK_VISIBILITY_LISTED,
    'pages'     => "book/indicators/*\nbook/thematic/*",
    'weight'    => 16
  );

  //dpm($blocks, 'LBVC register blocks');
  return $blocks;
}

// Wrap lbvis.[CHART] callback
function landbook_view_coda_lbvis_ready_callback($callback) {
    return 'jQuery(document).ready(function () { LBV.ready().done(function () { ' . $callback . ' }) });';
}

function landbook_view_coda_block_view($delta = '') {
  global $plugins_blocks;
  
  //dpm($plugins_blocks, 'pb');
  foreach($plugins_blocks as $p) {
    $fxptr = 'lbvc_plugin_' . $p . '_block_view';
    if (function_exists($fxptr)) {
      $block = $fxptr($delta);
    }
  }


  
  $LBVIS_PATH = base_path() . 'sites/all/libraries/lbvis';
  $jsAttr = 'vis: LBV, iso3: Drupal.settings.landbook.countryCode';
  $jsRanking = 'vis: LBV, type: "indicators", indicator: Drupal.settings.landbook.ranking || Drupal.settings.landbook.id';

  switch ($delta) {
  case 'lbcp_linechart' :
    $block['subject'] = t('Compare countries');
    $block['content'] = array(
      '#attached' => array(
        'library' => array(array('landbook_view_coda', 'lbvis.linechart')),
        'js' => array(array(
          'type' => 'inline',
          'data' => landbook_view_coda_lbvis_ready_callback(
            'COMP = new lbvisLC({'.$jsAttr.', target: "#block-landbook-view-coda-lbcp-linechart"}); COMP.init();')
        ))
      ),
    );
    break;
  case 'lbcp_lgaf' :
    $block['subject'] = t('Land Governance Assessment Framework (LGAF)');
    $block['content'] = array(
      '#attached' => array(
        'library' => array(array('landbook_view_coda', 'lbvis.lgaf')),
        'js' => array(array(
          'type' => 'inline',
          'data' => landbook_view_coda_lbvis_ready_callback(
            'LGAF = new lbvisLGAF({'.$jsAttr.', jsonPath: "'.$LBVIS_PATH . '/json/", target: "#block-landbook-view-coda-lbcp-lgaf"}); LGAF.init();')
        ))
      ),
      '#markup' => landbook_view_coda_body($delta)
    );
    break;
  case 'lbcp_pie' :
    $block['subject'] = '<none>';
//    $block['classes'][] = 'piechart';
    $block['content'] = array(
      '#attached' => array(
        'library' => array(array('landbook_view_coda', 'lbvis.pie')),
        'js' => array(array(
          'type' => 'inline',
          'data' => landbook_view_coda_lbvis_ready_callback(
            'PIE = new lbvisPie({' . $jsAttr . ', target: "#block-landbook-view-coda-lbcp-pie-wrapper"}); PIE.init();')
        ))
      )
    );
//  dpm($block);
    break;
  case 'lbcp_spider' :
    $block['subject'] = '<none>';
//    $block['classes'][] = 'spiderchart';
    $block['content'] = array(
      '#attached' => array(
        'library' => array(array('landbook_view_coda', 'lbvis.spider')),
        'js' => array(array(
          'type' => 'inline',
          'data' => landbook_view_coda_lbvis_ready_callback(
            'SPIDER = new lbvisSpider({' . $jsAttr . ', target: "#block-landbook-view-coda-lbcp-spider-wrapper"}); SPIDER.init();')
        ))
      ),
      '#markup' => landbook_view_coda_body($delta)
    );
//  dpm($block);
    break;
  case 'indicator_ranking' :
    $block['subject'] = t('Ranking');
    $block['content'] = array(
      '#attached' => array(
        'library' => array(array('landbook_view_coda', 'lbvis.ranking')),
        'js' => array(array(
          'type' => 'inline',
          'data' => landbook_view_coda_lbvis_ready_callback(
            'RANKING = new lbvisRanking({' . $jsRanking . ',  target: "#block-landbook-view-coda-indicator-ranking"}); RANKING.init();')
        ))
      )
    );
    break;
  case 'indicator_dl':
    $block['subject'] = t('Download');
    $block['content'] = array(
      '#attached' => array(
        'library' => array(array('landbook_view_coda', 'lbvis.dl')),
        'js' => array(array(
          'type' => 'inline',
          'data' => landbook_view_coda_lbvis_ready_callback('DL = new lbvis.dl({'.$jsAttr.',  target: "#block-landbook-view-coda-indicator-dl", indicator: Drupal.settings.landbook.id});')
        ))
      )
    );
    break;
  }
  return $block;
}

function landbook_view_coda_body($name) {
  $default = array(
    'lbcp_lgaf'   => '<p>Note: Some Indicators might have multiple values (e.g. Green-Orange), which might refers to different localities or categories of people. For more information please refers to specific country reports and to the methodology made available by the original data source/provider: <a href="http://go.worldbank.org/21M7S7AZO0" target="_blank">The Land GovernanceAssessment Framework (LGAF) website of the World Bank</a></p>',

    'lbcp_spider' => 'Note: This spider chart reflects the level of development of a country on four dimensions, which are measured using four internationally accepted indexes:
<p class="m-xs-top no-m-bottom"><a href="https://landportal.info/book/indicators/oecd-sigi">The Social Institutions and Gender Index (SIGI) by OECD</a></p>

<p class="no-m-top no-m-bottom"><a href="https://landportal.info/book/indicators/wb-sipovgini">The GINI Index by the World Bank</a></p>

<p class="no-m-top no-m-bottom"><a href="https://landportal.info/book/indicators/undp-hdi-index">The Human Development Index (HDI) by UNDP</a></p>

<p><a href="https://landportal.info/book/indicators/ifpri-ghi">The Global Hunger Index (GHI) by IFPRI</a></p>

<p>All original values for the indexes have been rescaled from 0 to 100, where 0 reflects low development levels and 100 reflects high development levels.For each index the value for the most recent available year is selected by default".</p>'
    );

    //$default: The default value to use if this variable has never been set.
    $output = variable_get('landbook-' . $name, $default[$name]);
    if (empty($output)) {
        $output = $default[$name];
    }
    return $output;
}

/* Drupal administration form for block */
function landbook_view_coda_block_configure($delta='') {
  if (!in_array($delta, array('lbcp_lgaf', 'lbcp_spider'))) return ;
   $form = array(
     'text_body' => array(
       '#type'          => 'text_format',
       //'#title'         => t('Landbook VIEW_CODA information'),
       '#default_value' => landbook_view_coda_body()
     )
   );
   return $form;
}

function landbook_view_coda_block_save($delta = '', $edit = array()) {
  if (!in_array($delta, array('lbcp_lgaf', 'lbcp_spider'))) return ;
  variable_set('landbook-' . $delta, $edit['text_body']['value']);
}
