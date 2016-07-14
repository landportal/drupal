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

function landbook_block_info() {
    $blocks['country_indicators_table'] = array(
        'info' => t('LB Country Indicators table'),
        'region' => 'content',
        'status' => TRUE,
        'node_types'  => array('landbook_country')
    );
    $blocks['country_book'] = array(
        'info' => t('LB Country book data'),
        'region' => 'content',
        'status' => TRUE,
        'node_types'  => array('landbook_country')
    );
    $blocks['country_sidebar_first']['info'] = t('Country maps and graphs');
    $blocks['country_sidebar_second']['info'] = t('Country selectors');
    $blocks['indicator_sidebar_second']['info'] = t('Indicator selectors');
    $blocks['regions_selectors']['info'] = t('Regions selector snippet');
    $translatables['book'][] = t('Country maps and graphs');
    $translatables['book'][] = t('Country selectors');

    $blocks['infografic_block'] = array(
      'info' => t('Infografic Block'),
    );
    $blocks['compare_block'] = array(
      'info' => t('Compare Block'),
    );
    return $blocks;
}

function landbook_block_view($delta = '') {
    $block = array();
    switch ($delta) {
        case 'country_indicators_table':
            $block['content'] = landbook_country_indicators_table();
            break;
        case 'country_book':
            $block['content'] = landbook_country_book();
            break;
        // Old LB blocks
        case 'regions_selectors':
            $block['content'] = landbook_regions_selectors();
            break;
        case 'indicator_sidebar_second':
            $block['content'] = 'indicator sidebar';
            break;
        case 'country_sidebar_first':
            $block['content'] = landbook_country_sidebar_first();
            break;
        case 'country_sidebar_second':
            $block['content'] = landbook_country_sidebar_second();
            break;
        case 'infografic_block' :
          $block['content'] = landbook_infografic_block_view();
          break;
        case 'compare_block' :
          $block['content'] = landbook_compare_block_view();
          break;
    }
    return $block;
}

/**
 * Block content helpers
 */
function landbook_country_book() {
  if ($node = menu_get_object()) {
      if ($node->type == 'landbook_country') {
          return array('#type'=>'markup', '#markup'=>$node->book);
      }
  }
  return '';
}
function landbook_country_indicators_table() {
  global $language;
  if ($node = menu_get_object()) {
      if ($node->type == 'landbook_country') {
          $data = $node->book;
          // Get Indicators for this country (from field_indicators)
          $indicators_field = field_get_items('node', $node, 'field_indicators');
          $data['indicators'] = $indicators_field;
          return array('#type' => 'markup', '#markup'=> $data);
      }
  }
  return '';
}

function landbook_regions_selectors($data=NULL) {
  global $language;
  if (!$data) return '';
  return theme('regions-selectors', array('data' => $data));
}
function landbook_country_sidebar_first($data=NULL) {
  global $language;
  if (!$data) return '';
  return theme('country-sidebar-first', array('data' => $data));
}
function landbook_country_sidebar_second($data=NULL) {
  global $language;
  if (!$data) return '';
  return theme('country-sidebar-second', array('data' => $data));
}
function landbook_indicator_sidebar_second($data=NULL) {
  global $language;
  if (!$data) return '';
  return theme('indicator-sidebar-second', array('data' => $data));
}

function landbook_infografic_block_view(){
  return drupal_get_form('landbook_infografic_block_form');
}

function landbook_compare_block_view(){
  return drupal_get_form('landbook_compare_block_form');
}

/**
 * LandBook blocks display settings for Landportal theme
 */
function landbook_block_info_alter(&$blocks, $theme, $code_blocks) {
    if ($theme == 'landportal') {
        $blocks['menu']['landbook-menu']['status'] = TRUE;
        $blocks['menu']['landbook-menu']['region'] = 'section_header';
        $blocks['menu']['landbook-menu']['visibility'] = BLOCK_VISIBILITY_LISTED;
        $blocks['menu']['landbook-menu']['pages'] = "book\nbook/*";
        
        /* $blocks['landbook']['country_indicators_table']['status'] = TRUE; */
        /* $blocks['landbook']['country_indicators_table']['region'] = 'content';//sidebar_second'; */
        /* /\* $blocks['landbook']['country_indicators_table']['visibility'] = BLOCK_VISIBILITY_LISTED; *\/ */
        /* /\* $blocks['landbook']['country_indicators_table']['pages'] = "book/countries/\\*"; *\/ */
        /* $blocks['landbook']['country_indicators_table']['types'] = array("landbook-country"); */

        /* $blocks['landbook']['country_book']['status'] = TRUE; */
        /* $blocks['landbook']['country_book']['region'] = 'content'; */
        /* $blocks['landbook']['country_book']['visibility'] = BLOCK_VISIBILITY_LISTED; */
        /* $blocks['landbook']['country_book']['pages'] = "book/countries/\*"; */

        /* Old blocks */
        $blocks['landbook']['regions_selectors']['status'] = TRUE;
        $blocks['landbook']['regions_selectors']['region'] = 'sidebar_second';
        $blocks['landbook']['regions_selectors']['visibility'] = BLOCK_VISIBILITY_LISTED;
        $blocks['landbook']['regions_selectors']['pages'] = "book/regions*";

        $blocks['landbook']['country_sidebar_first']['status'] = TRUE;
        $blocks['landbook']['country_sidebar_first']['region'] = 'sidebar_first';
        $blocks['landbook']['country_sidebar_first']['visibility'] = BLOCK_VISIBILITY_LISTED;
        $blocks['landbook']['country_sidebar_first']['pages'] = "book/countries/*";

        $blocks['landbook']['country_sidebar_second']['status'] = TRUE;
        $blocks['landbook']['country_sidebar_second']['region'] = 'sidebar_second';
        $blocks['landbook']['country_sidebar_second']['weight'] = 1;
        $blocks['landbook']['country_sidebar_second']['visibility'] = BLOCK_VISIBILITY_LISTED;
        $blocks['landbook']['country_sidebar_second']['pages'] = "book/countries/*";

        $blocks['landbook']['indicator_sidebar_second']['status'] = TRUE;
        $blocks['landbook']['indicator_sidebar_second']['region'] = 'sidebar_second';
        $blocks['landbook']['indicator_sidebar_second']['weight'] = 1;
        $blocks['landbook']['indicator_sidebar_second']['visibility'] = BLOCK_VISIBILITY_LISTED;
        $blocks['landbook']['indicator_sidebar_second']['pages'] = "book/indicators/*";
    }
    return $blocks;
}


function landbook_infografic_block_form($form,$form_state){
  $form['title']=array(
    '#type'=>'markup',
    '#markup'=>'<h3 class="form-title">Land Governance Assessment Framework (LGAF)</h3>',
  );
  $years=array("all"=>'Select year',"2016"=>"2016","2015"=>"2015","2014"=>"2014");
  $form['years']=array(
    '#type'=>'select',
    '#options'=>$years,
    '#prefix'=>'<div class="col-md-2">',
    '#suffix'=>'</div>'
  );
  $panel=array("all"=>'Select Panel...',"WB-LGAF2016-1"=>"Land tenure recognition","WB-LGAF2016-3"=>"Urban land use, planning, and development");
  $form['panel']=array(
    '#type'=>'select',
    '#options'=>$panel,
    '#prefix'=>'<div class="col-md-5">',
    '#suffix'=>'</div>'
  );
  $subpanel=array("all"=>'Select Sub-Panel...',"WB-LGAF2016-1.1"=>"Recognition of a continuum of rights","WB-LGAF2016-1.2"=>"Respect for and enforcement of rights");
  $form['subpanel']=array(
    '#type'=>'select',
    '#options'=>$subpanel,
    '#prefix'=>'<div class="col-md-5">',
    '#suffix'=>'</div>'
  );
  return $form;
}

function landbook_compare_block_form($form,$form_state){
  $years=array("all"=>'Rural Population');
  $form['indicator']=array(
    '#type'=>'select',
    '#options'=>$years,
    '#prefix'=>'<div class="col-md-3">',
    '#suffix'=>'</div>'
  );
  $country=array("all"=>'Select Country...');
  $form['country']=array(
    '#type'=>'select',
    '#options'=>$country,
    '#prefix'=>'<div class="col-md-3">',
    '#suffix'=>'</div>'
  );
  $start_year=array("all"=>'From Year...');
  $form['start_year']=array(
    '#type'=>'select',
    '#options'=>$start_year,
    '#prefix'=>'<div class="col-md-2">',
    '#suffix'=>'</div>'
  );
  $endt_year=array("all"=>'To Year...');
  $form['end_year']=array(
    '#type'=>'select',
    '#options'=>$endt_year,
    '#prefix'=>'<div class="col-md-2">',
    '#suffix'=>'</div>'
  );
  $form['add_to']=array(
    '#type'=>'button',
    '#value'=>'Add to Compare',
    '#prefix'=>'<div class="col-md-2 form-item">',
    '#suffix'=>'</div>',
    '#attributes' => array('class' => array('button')),
  );
  return $form;
}