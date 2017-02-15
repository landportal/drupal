<?php
/**
 * @file
 * landportal_display.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function landportal_display_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'filter_html' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <h1> <h2> <h3> <h4> <b> <i> <u> <br> <hr> <p> <table> <tbody> <tr> <th> <td> <tfoot> <thead>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'video_filter' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'video_filter_width' => 400,
          'video_filter_height' => 400,
          'video_filter_autoplay' => 0,
          'video_filter_related' => 1,
          'video_filter_html5' => 1,
          'video_filter_codecs' => array(
            'archive' => 'Archive.org',
            'bliptv' => 'Blip.tv',
            'candidcareer' => 'Candid Career',
            'capped' => 'Capped',
            'collegehumor' => 'College Humor',
            'coub' => 'Coub',
            'dailymotion' => 'DailyMotion',
            'democracynow_fullshow' => 'DemocracyNow Fullshow',
            'democracynow_story' => 'DemocracyNow Story',
            'flickr_slideshows' => 'Flickr Slideshows',
            'flickr_video' => 'Flickr Video',
            'foxnews' => 'Fox News',
            'gametrailers' => 'Game Trailers',
            'gamevideos' => 'Game Videos',
            'giphy' => 'Giphy',
            'godtube' => 'GodTube',
            'google' => 'Google Video',
            'instagram' => 'Instagram',
            'metacafe' => 'Meta Cafe',
            'mailru' => 'Mail.Ru',
            'myspace' => 'MySpace',
            'myvideo' => 'MyVideo',
            'picasa_slideshows' => 'Picasa Slideshows',
            'rutube' => 'Rutube',
            'slideshare' => 'Slideshare',
            'streamhoster' => 'Streamhoster',
            'teachertube' => 'Teachertube',
            'ted' => 'TED',
            'twitch' => 'Twitch',
            'ustream' => 'Ustream',
            'vbox' => 'Vbox7',
            'vimeo' => 'Vimeo',
            'vine' => 'Vine',
            'whatchado' => 'whatchado',
            'wistia' => 'Wistia',
            'youku' => 'YouKu',
            'youtube' => 'YouTube',
            'youtube_playlist' => 'YouTube (Playlist)',
          ),
          'video_filter_multiple_sources' => TRUE,
        ),
      ),
      'media_filter' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 0,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'video_filter' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'video_filter_width' => 400,
          'video_filter_height' => 400,
          'video_filter_autoplay' => 0,
          'video_filter_related' => 1,
          'video_filter_html5' => 1,
          'video_filter_codecs' => array(
            'whatchado' => 'whatchado',
            'archive' => 0,
            'bliptv' => 0,
            'candidcareer' => 0,
            'capped' => 0,
            'collegehumor' => 0,
            'coub' => 0,
            'dailymotion' => 0,
            'democracynow_fullshow' => 0,
            'democracynow_story' => 0,
            'flickr_slideshows' => 0,
            'flickr_video' => 0,
            'foxnews' => 0,
            'gametrailers' => 0,
            'gamevideos' => 0,
            'giphy' => 0,
            'godtube' => 0,
            'google' => 0,
            'instagram' => 0,
            'metacafe' => 0,
            'mailru' => 0,
            'myspace' => 0,
            'myvideo' => 0,
            'picasa_slideshows' => 0,
            'rutube' => 0,
            'slideshare' => 0,
            'streamhoster' => 0,
            'teachertube' => 0,
            'ted' => 0,
            'twitch' => 0,
            'ustream' => 0,
            'vbox' => 0,
            'vimeo' => 0,
            'vine' => 0,
            'wistia' => 0,
            'youku' => 0,
            'youtube' => 0,
            'youtube_playlist' => 0,
          ),
          'video_filter_multiple_sources' => 1,
        ),
      ),
      'filter_url' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
      'entity_embed' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
