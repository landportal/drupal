<?php
/**
 * @file
 * Landportal blocks
 *
 * Provide customizable blocks for the landportal
 * - footer
 *
 * Original work by: WESO (http://weso.es/)
 * Drupal refactoring: Jules <jules@ker.bz>
 */

function landportal_blocks_block_info() {
  $blocks = array(
    'landportal_footer' => array(
      'info'    => t('Landportal Footer text'),
      'status'  => TRUE,
    ),
    'lp_footer_social' => array(
      'info' => t('Footer social icons'),
      'status'  => TRUE,
      'theme'   => 'landportal',
      'region'  => 'footer',
    ),
    /* 'lp_header_social' => array( */
    /*   'info' => t('Header social icons'), */
    /*   'status' => TRUE, */
    /*   'region' => 'header', */
    /* ), */
    'lp_twitter' => array(
      'info'            => t('Twitter widget'),
      'status'          => TRUE,
      'region'          => -1,
      'visibility'      => BLOCK_VISIBILITY_LISTED,
      'pages'           => "debate/debates\ndebate/news",
    ),
    'lp_facebook' => array(
      'info'            => t('Facebook widget'),
      'status'          => TRUE,
      'region'          => -1,
    ),
    'lp_shareit' => array(
      'info'            => t('Share it widget'),
      'status'          => TRUE,
      'region'          => 'sidebar_first',
      'visibility'      => BLOCK_VISIBILITY_LISTED,
      'pages'           => "debate/debates/*\ndebate/news/*\ndebate/event/*",
    ),
    'lp_share' => array(
      'info'            => t('Share Buttons Block'),
      'status'          => TRUE,
      'region'          => -1,
    ),
  );
  return $blocks;
}

function landportal_blocks_block_default_body($name) {
  $default = array(
    'lp_facebook'       => '<iframe src="//www.facebook.com/plugins/likebox.php?href=https://www.facebook.com/landportal&amp;width=292&amp;colorscheme=light&amp;show_faces=true&amp;bordercolor&amp;stream=true&amp;header=true&amp;height=880&amp;show_border=false&amp;force_wall=true" scrolling="no" frameborder="0" style="border: none; overflow: hidden; width: 340px; height: 880px;" allowtransparency="true" title="Like us on Facebook"></iframe>',
    'lp_twitter'        => '<a class="twitter-timeline" href="https://twitter.com/search?q=%23landportal" data-widget-id="515155865456766978" data-chrome="nofooter transparent noscrollbar" data-tweet-limit="5">Landportal on Twitter</a>
      <script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],p=/^http:/.test(d.location)?"http":"https";if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src=p+"://platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script>',
    'landportal_footer' => '<p>Copyright © 2014-' . date('Y') . '&nbsp;Land Portal Foundation /&nbsp;RSIN 854330045<br />
Contact&nbsp;<a href="mailto:hello@landportal.info">hello@landportal.info</a>&nbsp;/&nbsp;Read more <a href="/about">about us</a>&nbsp;/ See our <a href="/about/privacy-policy">privacy&nbsp;policy</a><br />
&nbsp;</p>',
    'lp_footer_social'  => '<ul><li class="twitter"><a href="http://twitter.com/landportal"><i class="fa fa-twitter"></i></a></li><li class="facebook"><a href="http://facebook.com/landportal"><i class="fa fa-facebook"></i></a></li><li><a href="https://www.youtube.com/channel/UCXi7yRaXT0DYrY8drhpekwQ" target="_blank"><i class="fa fa-youtube"></i></a></li></ul>',
  );

  //$default: The default value to use if this variable has never been set.
  $output = variable_get($name, $default[$name]);
  if (empty($output)) {
    $output = $default[$name];
  }
  return $output;
}

function landportal_blocks_block_configure($delta='') {
   $form = array();
  
   switch($delta) {
   case 'landportal_footer' :
     $form['text_body'] = array(
       '#type' => 'text_format',
       '#title' => t('Landportal footer text'),
       '#default_value' => landportal_blocks_block_default_body('landportal_footer'),
     );
     break;
   case 'lp_twitter' :
     $form['text_body'] = array(
       '#type' => 'textarea',
       '#title' => t('Twitter widget (follow landportal)'),
       '#default_value' => landportal_blocks_block_default_body('lp_twitter'),
     );
     break;
   case 'lp_facebook' :
     $form['text_body'] = array(
       '#type' => 'textarea',
       '#title' => t('Facebook iframe (HTML)'),
       '#default_value' => landportal_blocks_block_default_body('lp_facebook'),
     );
     break;
   case 'lp_footer_social' :
     $form['text_body'] = array(
       '#type' => 'text_format',
       '#title' => t('Footer Social Networks (check if icon exists at: http://fortawesome.github.io/Font-Awesome/icons/#brand)'),
       '#default_value' => landportal_blocks_block_default_body('lp_footer_social'),
     );
     break;
   case 'lp_shareit' :
     $form['text_body'] = array(
       '#type' => 'text_format',
       '#title' => t('List of link to share current page'),
       '#default_value' => variable_get('lp_shareit', 'mail, twitter, facebook, linkedin'),
     );
     break;
   }
   return $form;
 }

function landportal_blocks_block_save($delta = '', $edit = array()) {
  switch($delta) {
  case 'landportal_footer' :
    variable_set('landportal_footer', $edit['text_body']['value']);
    break;
  case 'lp_twitter' :
    variable_set('lp_twitter', $edit['text_body']);
    break;
  case 'lp_facebook' :
    variable_set('lp_facebook', $edit['text_body']);
    break;
  case 'lp_footer_social' :
    variable_set('lp_footer_social', $edit['text_body']['value']);
    break;
  case 'lp_shareit' :
    variable_set('lp_shareit', $edit['text_body']['value']);
    break;
  }

}

function landportal_blocks_block_view($delta = '') {
  $block = array();
  switch ($delta) {
  case 'landportal_footer':
    $text = landportal_blocks_block_default_body('landportal_footer');
    $block['content'] = $text;
    $block['subject'] = '<none>';
    break;
  case 'lp_footer_social':
    $str = landportal_blocks_block_default_body('lp_footer_social');
    $block['content'] = array('#type' => 'markup', '#markup' => $str);
    $block['subject'] = '<none>';
    break;
  case 'lp_twitter':
    $block['content'] = landportal_blocks_block_default_body('lp_twitter');
    $block['subject'] = '<none>';
    break;
  case 'lp_facebook':
    $block['content'] = landportal_blocks_block_default_body('lp_facebook');
    $block['subject'] = '<none>';
    break;
  case 'lp_shareit':
    $block['title'] = 'Share it';
    $block['content'] = variable_get('lp_shareit', '');
    $block['subject'] = '<none>';
    break;
  case 'lp_share':
      $item = menu_get_item();
      $title = $item['title'];
      if ($item['page_callback'] == 'views_page') {
          $view = views_get_page_view();
          $title = $view->get_title();
      }
      $block['content'] = addtoany_create_buttons(drupal_get_path_alias(), $title);
      $block['subject'] = '<none>';
      break;
  }
  return $block;
}
