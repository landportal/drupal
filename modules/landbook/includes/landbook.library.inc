<?php

function landbook_library() {
    $LBVIS_PATH = base_path() . 'sites/all/libraries/lbvis';
    $BOOK_PATH = drupal_get_path('module', 'landbook');
    
    $libraries['view-coda'] = array(
        'title' => 'JS View Country Data', 
        'website' => 'https://github.com/landportal/js-view-coda/', 
        'version' => '0.0.1',
        'js' => array(
            $BOOK_PATH . '/js/view-coda.js' => array(),
        ),
        'dependencies' => array(
            array('landbook', 'lbvis'),
        ),
    );

    // Vendor stuff
    $libraries['lbvis.highcharts'] = array(
        'title' => 'view-coda vendor libs', 
        'version' => '0.0.1', 
        'js' => array(
            $LBVIS_PATH . '/js/vendor/highstock.js' => array('weight' => 0), 
            $LBVIS_PATH . '/js/vendor/highmaps.js' => array('weight' => 1), 
            $LBVIS_PATH . '/js/vendor/highcharts-more.js' => array('weight' => 2), 
      ), 
    );
    $libraries['lbvis.map_data'] = array(
        'title' => 'Map data for highmaps', 
        'website' => 'https://github.com/landportal/js-view-coda/', 
        'version' => '0.0.1',
        'js' => array(
            $LBVIS_PATH . '/js/map_data.js' => array(),
        ),
    );

    $libraries['lbvis'] = array(
        'title' => 'JS View Country Data', 
        'website' => 'https://github.com/landportal/js-view-coda/', 
        'version' => '0.0.1',
        'js' => array(
            $LBVIS_PATH . '/js/lbvis.js' => array(),
        ),
        'dependencies' => array(
            array('system', 'jquery'),
            array('landbook', 'lbvis.highcharts'),
            array('landbook', 'lbvis.data'),
        ),
    );
    $libraries['lbvis.data'] = array(
        'title' => 'JS View Country Data', 
        'website' => 'https://github.com/landportal/js-view-coda/', 
        'version' => '0.0.1',
        'js' => array(
            $LBVIS_PATH . '/js/lbvis.data.js' => array(),
        ),
    );
    $libraries['lbvis.map'] = array(
        'title' => 'view-coda map', 
        'version' => '0.0.1', 
        'js' => array(
            //$LBVIS_PATH . '/js/vendor/highmaps.js' => array(), 
            $LBVIS_PATH . '/js/lbvis.map.js' => array(), 
        ),
        'dependencies' => array(
            array('landbook', 'view-coda'),
            array('landbook', 'lbvis.map_data'),
        ),
    );
    $libraries['lbvis.table'] = array(
        'title' => 'view-coda table', 
        'version' => '0.0.1', 
        'js' => array(
            $LBVIS_PATH . '/js/lbvis.table.js' => array(), 
        ),
        'dependencies' => array(
            array('landbook', 'view-coda'),
        ),
    );
    $libraries['lbvis.linechart'] = array(
        'title' => 'view-coda linechart', 
        'version' => '0.0.1', 
        'js' => array(
            $LBVIS_PATH . '/js/lbvis.linechart.js' => array(), 
        ),
        'dependencies' => array(
            array('landbook', 'view-coda'),
        ),
    );
    $libraries['lbvis.lgaf'] = array(
        'title' => 'view-coda lgaf', 
        'version' => '0.0.1', 
        'js' => array(
            $LBVIS_PATH . '/js/lbvis.lgaf.js' => array(), 
        ),
        'dependencies' => array(
            array('landbook', 'view-coda'),
        ),
    );
    $libraries['lbvis.pie'] = array(
        'title' => 'view-coda pie', 
        'version' => '0.0.1', 
        'js' => array(
            $LBVIS_PATH . '/js/lbvis.pie.js' => array(), 
        ),
        'dependencies' => array(
            array('landbook', 'view-coda'),
        ),
    );
    $libraries['lbvis.spider'] = array(
        'title' => 'view-coda spider', 
        'version' => '0.0.1', 
        'js' => array(
            $LBVIS_PATH . '/js/lbvis.spider.js' => array(), 
        ),
        'dependencies' => array(
            array('landbook', 'view-coda'),
        ),
    );
    return $libraries;
}
