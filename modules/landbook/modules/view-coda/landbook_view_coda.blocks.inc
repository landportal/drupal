<?php

function landbook_view_coda_block_info() {
    $blocks['lbcp_linechart'] = array(
        'info'      => t('Country page: Infographics (linechart)'),
        'status'    => TRUE,
        'region'    => 'content',
        'visibility'=> BLOCK_VISIBILITY_LISTED,
        'pages'     => "book/countries/*",
        'weight'    => 11
    );
    $blocks['lbcp_lgaf'] = array(
        'info'      => t('Country page: LGAF'),
        'status'    => TRUE,
        'region'    => 'content',
        'visibility'=> BLOCK_VISIBILITY_LISTED,
        'pages'     => "book/countries/*",
        'weight'    => 13
    );
    $blocks['lbcp_pie'] = array(
        'info'      => t('Country page: Pie chart'),
        'status'    => TRUE,
        'region'    => -1,
        'visibility'=> BLOCK_VISIBILITY_LISTED,
        'pages'     => "",
        'weight'    => 14
    );
    $blocks['lbcp_spider'] = array(
        'info'      => t('Country page: Spider'),
        'status'    => TRUE,
        'region'    => -1,
        'visibility'=> BLOCK_VISIBILITY_LISTED,
        'pages'     => "",
        'weight'    => 15
    );
    $blocks['lbcp_spider_note'] = array(
        'info'      => t('Country page: Spider note'),
        'status'    => TRUE,
        'region'    => -1,
        'visibility'=> BLOCK_VISIBILITY_LISTED,
        'pages'     => "",
        'weight'    => 16
    );
    $blocks['indicator_dl'] = array(
        'info'      => t('View CODA: Indicator Download'),
        'status'    => TRUE,
        'region'    => 'content',
        'visibility'=> BLOCK_VISIBILITY_LISTED,
        'pages'     => "book/indicators/*\n",
        'weight'    => 13
    );
    $blocks['indicator_ranking'] = array(
        'info'      => t('View CODA: Indicator Ranking'),
        'status'    => TRUE,
        'region'    => 'content',
        'visibility'=> BLOCK_VISIBILITY_LISTED,
        'pages'     => "book/indicators/*\nbook/thematic/*",
        'weight'    => 14
    );
    return $blocks;
}

// Wrap lbvis.[CHART] callback
function landbook_view_coda_lbvis_ready_callback($callback) {
    return 'jQuery(document).ready(function () { LBV.ready().done(function () { ' . $callback . ' }) });';
}

function landbook_view_coda_block_view($delta = '') {
    $LBVIS_PATH = base_path() . 'sites/all/libraries/lbvis';
    $block = array('subject' => 'default', 'content' => 'bad');
    $jsAttr = 'vis: LBV, iso3: Drupal.settings.landbook.countryCode';
    $jsAttrIndicators = 'vis: LBV, type: "indicators", indicator: Drupal.settings.landbook.id';

    switch ($delta) {
    case 'lbcp_linechart' :
        $block['subject'] = t('Compare countries');
        $block['content'] = array(
            '#attached' => array(
                'library' => array(
                    array('landbook_view_coda', 'lbvis.linechart')
                ),
                'js' => array(
                     array(
                         'type' => 'inline',
                         'data' => landbook_view_coda_lbvis_ready_callback('COMP = new lbvisLC({'.$jsAttr.'}); COMP.init();')
                     )
                )
            )
        );
        break;
    case 'lbcp_lgaf' :
        $block['subject'] = t('Infographics');
        $block['content'] = array(
            '#attached' => array(
                'library' => array(
                    array('landbook_view_coda', 'lbvis.lgaf')
                ),
                'js' => array(
                    array(
                        'type' => 'inline',
                        'data' => landbook_view_coda_lbvis_ready_callback(
                            'LGAF = new lbvisLGAF({'.$jsAttr.', jsonPath: "'.$LBVIS_PATH . '/json/"}); LGAF.init();'
                        )
                    )
                )
            )
        );
        break;
    case 'lbcp_pie' :
        $block['subject'] = '<none>';
        $block['content'] = array(
            '#attached' => array(
                'library' => array(
                    array('landbook_view_coda', 'lbvis.pie')
                ),
                'js' => array(
                    array(
                        'type' => 'inline',
                        'data' => landbook_view_coda_lbvis_ready_callback('PIE = new lbvisPie({' . $jsAttr . '}); PIE.init();')
                    )
                )
            )
        );
        break;
    case 'lbcp_spider_note' :
        $block['subject'] = '<none>';
        $block['content'] = landbook_view_coda_block_body($delta);
        break;
    case 'lbcp_spider' :
        $block['subject'] = '<none>';
        $block['content'] = array(
            '#attached' => array(
                'library' => array(
                    array('landbook_view_coda', 'lbvis.spider')
                ),
                'js' => array(
                    array(
                         'type' => 'inline',
                         'data' => landbook_view_coda_lbvis_ready_callback(
                             'SPIDER = new lbvisSpider({' . $jsAttr . '}); SPIDER.init();')
                     ),
                )
            )
        );
        break;
    case 'indicator_ranking' :
        $block['subject'] = t('Ranking');
        $block['content'] = array('#attached' => array(
            'library' => array(array('landbook_view_coda', 'lbvis.ranking')),
            'js' => array(array(
                'type' => 'inline',
                'data' => landbook_view_coda_lbvis_ready_callback(
                    'RANKING = new lbvisRanking({' . $jsAttrIndicators . '}); RANKING.init();')
            ))
        ));
        break;
    case 'indicator_dl':
        $block['subject'] = t('Download');
        $block['content'] = array('#attached' => array(
            'library' => array(array('landbook_view_coda', 'lbvis.dl')),
            'js' => array(array(
                'type' => 'inline',
                'data' => landbook_view_coda_lbvis_ready_callback('DL = new lbvis.dl({'.$jsAttr.'});')
            ))
        ));
        break;
    }
    return $block;
}

function landbook_view_coda_block_body($name) {
    $default = array(
        'lbcp_spider_note' => 'Note: This spider chart reflects the level of development of a country on four dimensions, which are measured using four internationally accepted indexes:
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
