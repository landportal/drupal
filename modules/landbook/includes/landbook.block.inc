<?php
/**
 * @file
 * This module provide an interface to the landbook section of the Landportal.
 *
 * The Landportal landbook
 *
 * Original work by: WESO (http://www.weso.es/)
 * Drupal refactoring: Jules <jules@ker.bz>
 */


/**
 * Blocks for Landbook country page sections
 * Each block (template file) calls countries_related content view(s)
 */
function landbook_block_info() {
    $blocks['disclaimer_block'] = array(
        'info'          => t('Landbook country page Disclaimer'),
        'status'        => TRUE,
        'region'        => 'content',
        'visibility'    => BLOCK_VISIBILITY_LISTED,
        'pages'         => "book/countries/*",
        'weight'        => -39
    );
    $blocks['media'] = array(
        'info'          => t('Landbook Media'),
        'status'        => TRUE,
        'region'        => 'content',
        'visibility'    => BLOCK_VISIBILITY_LISTED,
        'pages'         => "book/countries/*\nbook/thematic/*",
        'weight'        => 23
    );
    $blocks['infographics'] = array(
        'info'          => t('Landbook Infographics'),
        'status'        => TRUE,
        'region'        => 'content',
        'visibility'    => BLOCK_VISIBILITY_LISTED,
        'pages'         => "book/countries/*\nbook/thematic/*",
        'weight'        => 15
    );
    // @TODO: cleanup this shit
    $blocks['country_navigation_block'] = array(
        'info'          => t('Landbook country page navigation'),
        'status'        => TRUE,
        'region'        => 'content',
        'visibility'    => BLOCK_VISIBILITY_LISTED,
        'pages'         => "book/countries/*",
        'weight'        => -42
    );
    $blocks['thematic_navigation_block'] = array(
        'info'          => t('Landbook thematic page navigation'),
        'status'        => TRUE,
        'region'        => -1,
        'visibility'    => BLOCK_VISIBILITY_LISTED,
        'pages'         => "book/thematic/*",
        'weight'        => -42
    );
    // @TODO: rename and cleanup , this block provide BOTH the PDF + Feedback links
    $blocks['country_pdf_block'] = array(
        'info'          => t('Landbook country page pdf block'),
        'status'        => TRUE,
        'region'        => 'content',
        'visibility'    => BLOCK_VISIBILITY_LISTED,
        'pages'         => "book/countries/*",
        'weight'        => -40
    );
    return $blocks;
}

function landbook_block_view($delta = '') {
    $block = array();
    switch ($delta) {
    case 'disclaimer_block' :
        $block['subject'] = '<none>';
        $block['content'] = landbook_block_body($delta);
        break;
    case 'media' :
        $block['subject'] = t('Media');
        $block['content'] = landbook_block_body($delta);
        break;
    case 'infographics' :
        $block['subject'] = t('Infographics');
        $block['content'] = landbook_block_body($delta);
        break;

    // @TODO: cleanup this shit
    // all that seems a bit weird...
    case 'country_navigation_block' :
        $block['subject'] = '<none>';
        $block['content'] = ' ';
        $block['country_info'] = landbook_get_country_info();
        break;
    case 'thematic_navigation_block' :
        $block['subject'] = '<none>';
        break;
    case 'country_pdf_block' :
        $block['subject'] = '<none>';
        $block['content'] = ' ';
        $block['pdf_url'] = landbook_get_pdf_url();
        break;
    }
    return $block;
}
// TMP
function landbook_get_pdf_url(){
    $iso3 = arg(2);
    if (in_array($iso3, ['KHM', 'LAO', 'MMR', 'THA', 'VNM'])) {
        return file_create_url('public://2016/countries/' . $iso3 . '.pdf');
    }
    return ;
}
// TODO: cleanup this shit
function landbook_get_country_info(){
    $output = array();
    $args = arg();
    if ($args[0] == 'book' && $args[1] == 'countries' && !empty($args[2])) {
        $iso = $args[2];
        $output['iso'] = $iso;
        $tid = landbook_get_region_iso($iso);
        $term = taxonomy_term_load($tid);
        if ($term) {
            $output['country_name'] = $term->name;
        }
    }
    return $output;
}

function landbook_block_body($name) {
    $default = array(
        'disclaimer_block' => '<p><b>Disclaimer:</b> The data displayed on the Land Portal is provided by third parts indicated as the data source or as the data provider. The Land Portal team is constantly working to ensure the highest possible standard of data quality and accuracy, yet the data is by its nature approximate and will contain some inaccuracies. The data may contain errors introduced by the data provider(s) and/or by the Land Portal team. In addition, this page allows you to compare data from different sources, but not all indicators are necessarily statistically comparable. The Land Portal Foundation (A) expressly disclaims the accuracy, adequacy, or completeness of any data and (B) shall not be liable for any errors, omissions or other defects in, delays or interruptions in such data, or for any actions taken in reliance thereon. Neither the Land Portal Foundation nor any of its data providers will be liable for any damages relating to your use of the data provided herein.</p>',
    );
    
    //$default: The default value to use if this variable has never been set.
    $output = variable_get('landbook-' . $name, $default[$name]);
    if (empty($output)) {
      $output = (isset($default[$name]) ? $default[$name] : ' ');
    }
    return $output;
}