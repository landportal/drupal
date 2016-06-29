<?php
/**
 * @file
 * social_login_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function social_login_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_customize_widget_per_form';
  $strongarm->value = 0;
  $export['hybridauth_bonus_customize_widget_per_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_registration_roles';
  $strongarm->value = array(
    111731461 => 0,
    25521343 => 0,
    111903910 => 0,
    30037204 => 0,
  );
  $export['hybridauth_bonus_registration_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_registration_roles_multiple';
  $strongarm->value = 1;
  $export['hybridauth_bonus_registration_roles_multiple'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_registration_roles_required';
  $strongarm->value = 0;
  $export['hybridauth_bonus_registration_roles_required'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_registration_role_choice';
  $strongarm->value = 0;
  $export['hybridauth_bonus_registration_role_choice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_hide_links_comment_form';
  $strongarm->value = 0;
  $export['hybridauth_bonus_widget_hide_links_comment_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_hide_links_user_login';
  $strongarm->value = 0;
  $export['hybridauth_bonus_widget_hide_links_user_login'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_hide_links_user_login_block';
  $strongarm->value = 0;
  $export['hybridauth_bonus_widget_hide_links_user_login_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_hide_links_user_register_form';
  $strongarm->value = 0;
  $export['hybridauth_bonus_widget_hide_links_user_register_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_icon_pack_comment_form';
  $strongarm->value = 'hybridauth_32';
  $export['hybridauth_bonus_widget_icon_pack_comment_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_icon_pack_user_login';
  $strongarm->value = 'hybridauth_32';
  $export['hybridauth_bonus_widget_icon_pack_user_login'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_icon_pack_user_login_block';
  $strongarm->value = 'hybridauth_32';
  $export['hybridauth_bonus_widget_icon_pack_user_login_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_icon_pack_user_register_form';
  $strongarm->value = 'hybridauth_32';
  $export['hybridauth_bonus_widget_icon_pack_user_register_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_link_text_comment_form';
  $strongarm->value = 'Social network account';
  $export['hybridauth_bonus_widget_link_text_comment_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_link_text_user_login';
  $strongarm->value = 'Social network account';
  $export['hybridauth_bonus_widget_link_text_user_login'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_link_text_user_login_block';
  $strongarm->value = 'Social network account';
  $export['hybridauth_bonus_widget_link_text_user_login_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_link_text_user_register_form';
  $strongarm->value = 'Social network account';
  $export['hybridauth_bonus_widget_link_text_user_register_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_link_title_comment_form';
  $strongarm->value = 'Social network account';
  $export['hybridauth_bonus_widget_link_title_comment_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_link_title_user_login';
  $strongarm->value = 'Social network account';
  $export['hybridauth_bonus_widget_link_title_user_login'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_link_title_user_login_block';
  $strongarm->value = 'Social network account';
  $export['hybridauth_bonus_widget_link_title_user_login_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_link_title_user_register_form';
  $strongarm->value = 'Social network account';
  $export['hybridauth_bonus_widget_link_title_user_register_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_title_comment_form';
  $strongarm->value = 'Or log in with...';
  $export['hybridauth_bonus_widget_title_comment_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_title_user_login';
  $strongarm->value = 'Or log in with...';
  $export['hybridauth_bonus_widget_title_user_login'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_title_user_login_block';
  $strongarm->value = 'Or log in with...';
  $export['hybridauth_bonus_widget_title_user_login_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_title_user_register_form';
  $strongarm->value = 'Or log in with...';
  $export['hybridauth_bonus_widget_title_user_register_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_type_comment_form';
  $strongarm->value = 'list';
  $export['hybridauth_bonus_widget_type_comment_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_type_user_login';
  $strongarm->value = 'list';
  $export['hybridauth_bonus_widget_type_user_login'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_type_user_login_block';
  $strongarm->value = 'list';
  $export['hybridauth_bonus_widget_type_user_login_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_type_user_register_form';
  $strongarm->value = 'list';
  $export['hybridauth_bonus_widget_type_user_register_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_use_overlay_comment_form';
  $strongarm->value = 1;
  $export['hybridauth_bonus_widget_use_overlay_comment_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_use_overlay_user_login';
  $strongarm->value = 1;
  $export['hybridauth_bonus_widget_use_overlay_user_login'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_use_overlay_user_login_block';
  $strongarm->value = 1;
  $export['hybridauth_bonus_widget_use_overlay_user_login_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_use_overlay_user_register_form';
  $strongarm->value = 1;
  $export['hybridauth_bonus_widget_use_overlay_user_register_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_weight_comment_form';
  $strongarm->value = '100';
  $export['hybridauth_bonus_widget_weight_comment_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_weight_user_login';
  $strongarm->value = '100';
  $export['hybridauth_bonus_widget_weight_user_login'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_weight_user_login_block';
  $strongarm->value = '100';
  $export['hybridauth_bonus_widget_weight_user_login_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_bonus_widget_weight_user_register_form';
  $strongarm->value = '100';
  $export['hybridauth_bonus_widget_weight_user_register_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_debug';
  $strongarm->value = 0;
  $export['hybridauth_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_destination';
  $strongarm->value = '';
  $export['hybridauth_destination'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_destination_error';
  $strongarm->value = '';
  $export['hybridauth_destination_error'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_disable_username_change';
  $strongarm->value = 1;
  $export['hybridauth_disable_username_change'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_display_name';
  $strongarm->value = '[user:hybridauth:firstName] [user:hybridauth:lastName]';
  $export['hybridauth_display_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_duplicate_emails';
  $strongarm->value = '2';
  $export['hybridauth_duplicate_emails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_email_verification';
  $strongarm->value = '0';
  $export['hybridauth_email_verification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_email_verification_body';
  $strongarm->value = '[user:name],

Thank you for registering at [site:name]. You need to confirm your e-mail address by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and activate your account.

After that, you will be able to log in at [site:login-url] using your [user:hybridauth:provider] account.

--  [site:name] team';
  $export['hybridauth_email_verification_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_email_verification_subject';
  $strongarm->value = 'Account details for [user:name] at [site:name]';
  $export['hybridauth_email_verification_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_forms';
  $strongarm->value = array(
    'user_login' => 'user_login',
    'user_login_block' => 'user_login_block',
    'user_register_form' => 'user_register_form',
    'comment_form' => 0,
  );
  $export['hybridauth_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_override_realname';
  $strongarm->value = 0;
  $export['hybridauth_override_realname'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_pictures';
  $strongarm->value = 1;
  $export['hybridauth_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_providers';
  $strongarm->value = array(
    'Twitter' => 'Twitter',
    'Facebook' => 'Facebook',
    'Google' => 'Google',
    'AOL' => 0,
    'Foursquare' => 0,
    'LinkedIn' => 0,
    'Live' => 0,
    'MySpace' => 0,
    'OpenID' => 0,
    'Yahoo' => 0,
    'px500' => 0,
    'Disqus' => 0,
    'FamilySearch' => 0,
    'Geni' => 0,
    'GitHub' => 0,
    'Goodreads' => 0,
    'Identica' => 0,
    'Instagram' => 0,
    'LastFM' => 0,
    'Mailru' => 0,
    'Murmur' => 0,
    'MyHeritage' => 0,
    'Odnoklassniki' => 0,
    'Pixnet' => 0,
    'Plurk' => 0,
    'QQ' => 0,
    'Sina' => 0,
    'Skyrock' => 0,
    'Steam' => 0,
    'Tumblr' => 0,
    'TwitchTV' => 0,
    'Viadeo' => 0,
    'Vimeo' => 0,
    'Vkontakte' => 0,
    'Yandex' => 0,
  );
  $export['hybridauth_providers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Facebook_display';
  $strongarm->value = 'popup';
  $export['hybridauth_provider_Facebook_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Facebook_keys_id';
  $strongarm->value = '610427542421736';
  $export['hybridauth_provider_Facebook_keys_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Facebook_keys_secret';
  $strongarm->value = '3c3fcee363f038d5602451ffa415e8ca';
  $export['hybridauth_provider_Facebook_keys_secret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Facebook_scope';
  $strongarm->value = array(
    'user_about_me' => 'user_about_me',
    'user_birthday' => 'user_birthday',
    'user_hometown' => 'user_hometown',
    'user_website' => 'user_website',
    'email' => 'email',
    'offline_access' => 'offline_access',
    'user_activities' => 0,
    'user_checkins' => 0,
    'user_education_history' => 0,
    'user_events' => 0,
    'user_groups' => 0,
    'user_interests' => 0,
    'user_likes' => 0,
    'user_location' => 0,
    'user_notes' => 0,
    'user_online_presence' => 0,
    'user_photos' => 0,
    'user_questions' => 0,
    'user_relationships' => 0,
    'user_relationship_details' => 0,
    'user_religion_politics' => 0,
    'user_status' => 0,
    'user_videos' => 0,
    'user_work_history' => 0,
    'read_friendlists' => 0,
    'read_insights' => 0,
    'read_mailbox' => 0,
    'read_requests' => 0,
    'read_stream' => 0,
    'xmpp_login' => 0,
    'ads_management' => 0,
    'create_event' => 0,
    'manage_friendlists' => 0,
    'manage_notifications' => 0,
    'publish_checkins' => 0,
    'publish_stream' => 0,
    'rsvp_event' => 0,
    'sms' => 0,
    'publish_actions' => 0,
  );
  $export['hybridauth_provider_Facebook_scope'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Facebook_window_height';
  $strongarm->value = '500';
  $export['hybridauth_provider_Facebook_window_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Facebook_window_type';
  $strongarm->value = 'popup';
  $export['hybridauth_provider_Facebook_window_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Facebook_window_width';
  $strongarm->value = '800';
  $export['hybridauth_provider_Facebook_window_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Google_keys_id';
  $strongarm->value = '158143040800-fqrfqg8517na17dl6r7vve6vus0dkesl.apps.googleusercontent.com';
  $export['hybridauth_provider_Google_keys_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Google_keys_secret';
  $strongarm->value = '7Wld7fs1TOWsV_C-VKnY7QBP';
  $export['hybridauth_provider_Google_keys_secret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Google_scope';
  $strongarm->value = 'https://www.googleapis.com/auth/userinfo.profile https://www.googleapis.com/auth/userinfo.email';
  $export['hybridauth_provider_Google_scope'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Google_window_height';
  $strongarm->value = '500';
  $export['hybridauth_provider_Google_window_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Google_window_type';
  $strongarm->value = 'current';
  $export['hybridauth_provider_Google_window_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Google_window_width';
  $strongarm->value = '800';
  $export['hybridauth_provider_Google_window_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Twitter_keys_key';
  $strongarm->value = 'mKc7vKU6pvMYJSx7MBuB6vEW9';
  $export['hybridauth_provider_Twitter_keys_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Twitter_keys_secret';
  $strongarm->value = 'xN6scqZwFg14e0pUhAx9XweOA0xyAhD4TD52MBNGHSJfK5dsmT';
  $export['hybridauth_provider_Twitter_keys_secret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Twitter_window_height';
  $strongarm->value = '500';
  $export['hybridauth_provider_Twitter_window_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Twitter_window_type';
  $strongarm->value = 'popup';
  $export['hybridauth_provider_Twitter_window_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_provider_Twitter_window_width';
  $strongarm->value = '800';
  $export['hybridauth_provider_Twitter_window_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_proxy';
  $strongarm->value = '';
  $export['hybridauth_proxy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_register';
  $strongarm->value = '0';
  $export['hybridauth_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_registration_password';
  $strongarm->value = 0;
  $export['hybridauth_registration_password'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_registration_username_change';
  $strongarm->value = 0;
  $export['hybridauth_registration_username_change'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_remove_password_fields';
  $strongarm->value = 1;
  $export['hybridauth_remove_password_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_required_fields';
  $strongarm->value = array(
    'email' => 'email',
    'firstName' => 'firstName',
    'lastName' => 'lastName',
    'gender' => 0,
  );
  $export['hybridauth_required_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_username';
  $strongarm->value = 'hybridauth_[user:hybridauth:provider]_[user:hybridauth:identifier]';
  $export['hybridauth_username'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_hide_links';
  $strongarm->value = 0;
  $export['hybridauth_widget_hide_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_icon_pack';
  $strongarm->value = 'hybridauth_32';
  $export['hybridauth_widget_icon_pack'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_link_text';
  $strongarm->value = 'Social network account';
  $export['hybridauth_widget_link_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_link_title';
  $strongarm->value = 'Social network account';
  $export['hybridauth_widget_link_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_title';
  $strongarm->value = 'Or log in with...';
  $export['hybridauth_widget_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_type';
  $strongarm->value = 'list';
  $export['hybridauth_widget_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_use_overlay';
  $strongarm->value = 1;
  $export['hybridauth_widget_use_overlay'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hybridauth_widget_weight';
  $strongarm->value = '100';
  $export['hybridauth_widget_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_custom_disabled_strings_en';
  $strongarm->value = array();
  $export['locale_custom_disabled_strings_en'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_custom_disabled_strings_es';
  $strongarm->value = array();
  $export['locale_custom_disabled_strings_es'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_custom_disabled_strings_fr';
  $strongarm->value = array();
  $export['locale_custom_disabled_strings_fr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_custom_strings_en';
  $strongarm->value = array(
    '' => array(
      'HybridAuth' => 'Social Logins',
    ),
  );
  $export['locale_custom_strings_en'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_custom_strings_es';
  $strongarm->value = array(
    '' => array(
      'HybridAuth' => 'Conexiones Sociales',
    ),
  );
  $export['locale_custom_strings_es'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_custom_strings_fr';
  $strongarm->value = array(
    '' => array(
      'HybridAuth' => 'Connexions sociales',
    ),
  );
  $export['locale_custom_strings_fr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pcp_enabled_fields';
  $strongarm->value = array(
    'profile2:main:field_geographical_focus' => 'profile2:main:field_geographical_focus',
    'profile2:main:field_description' => 'profile2:main:field_description',
    'profile2:main:field_interests' => 'profile2:main:field_interests',
    'profile2:main:field_location' => 'profile2:main:field_location',
    'profile2:main:field_image' => 'profile2:main:field_image',
    'profile2:main:field_link' => 'profile2:main:field_link',
    'profile2:main:field_related_topics' => 'profile2:main:field_related_topics',
    'profile2:main:field_firstname' => 'profile2:main:field_firstname',
    'profile2:main:field_lastname' => 'profile2:main:field_lastname',
  );
  $export['pcp_enabled_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pcp_enable_user_picture';
  $strongarm->value = 0;
  $export['pcp_enable_user_picture'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pcp_fields_open_option';
  $strongarm->value = '_self';
  $export['pcp_fields_open_option'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pcp_fields_order';
  $strongarm->value = '1';
  $export['pcp_fields_order'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pcp_hide_block_on_complete';
  $strongarm->value = 0;
  $export['pcp_hide_block_on_complete'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pcp_login_message';
  $strongarm->value = 'Your Profile is not complete. Filling out remaining fields will make it 100%. Now you\'ve reached [pcp-user:pcp-user]%.';
  $export['pcp_login_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pcp_login_message_role';
  $strongarm->value = array(
    2 => 0,
    111903911 => 0,
    111903912 => 0,
    25521343 => 0,
    111903910 => 0,
    30037204 => 0,
  );
  $export['pcp_login_message_role'] = $strongarm;

  return $export;
}
