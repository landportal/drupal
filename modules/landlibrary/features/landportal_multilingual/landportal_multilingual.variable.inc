<?php
/**
 * @file
 * landportal_multilingual.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function landportal_multilingual_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['global']['default'] = array(
  'user_mail_cancel_confirm_body' => '[user:name],

A request to cancel your account has been made at [site:name].

You may now cancel your account on [site:url-brief] by clicking this link or copying and pasting it into your browser:

[user:cancel-url]

NOTE: The cancellation of your account is not reversible.

This link expires in one day and nothing will happen if it is not used.

--  [site:name] team',
  'user_mail_cancel_confirm_subject' => 'Account cancellation request for [user:name] at [site:name]',
  'user_mail_password_reset_body' => '[user:name],

A request to reset the password for your account has been made at [site:name].

You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password. It expires after one day and nothing will happen if it\'s not used.

--  [site:name] team',
  'user_mail_password_reset_subject' => 'Replacement login information for [user:name] at [site:name]',
  'user_mail_register_admin_created_body' => '[user:name],

A site administrator at [site:name] has created an account for you. You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_register_admin_created_subject' => 'An administrator created an account for you at [site:name]',
  'user_mail_register_no_approval_required_body' => '[user:name],

Thank you for registering at [site:name]. You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_register_no_approval_required_subject' => 'Account details for [user:name] at [site:name]',
  'user_mail_register_pending_approval_body' => '[user:name],

Thank you for registering at [site:name]. Your application for an account is currently pending approval. Once it has been approved, you will receive another e-mail containing information about how to log in, set your password, and other details.


--  [site:name] team',
  'user_mail_register_pending_approval_subject' => 'Account details for [user:name] at [site:name] (pending admin approval)',
  'user_mail_status_activated_body' => '[user:name],

Your account at [site:name] has been activated.

You may now log in by clicking this link or copying and pasting it into your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_status_activated_notify' => 1,
  'user_mail_status_activated_subject' => 'Account details for [user:name] at [site:name] (approved)',
  'user_mail_status_blocked_body' => '[user:name],

Your account on [site:name] has been blocked.

--  [site:name] team',
  'user_mail_status_blocked_notify' => 0,
  'user_mail_status_blocked_subject' => 'Account details for [user:name] at [site:name] (blocked)',
  'user_mail_status_canceled_body' => '[user:name],

Your account on [site:name] has been canceled.

--  [site:name] team',
  'user_mail_status_canceled_notify' => 0,
  'user_mail_status_canceled_subject' => 'Account details for [user:name] at [site:name] (canceled)',
  'variable_module_list' => array(
    'locale' => array(
      0 => 'language_content_type_article',
      1 => 'language_content_type_page',
      2 => 'language_content_type_landbook_country',
      3 => 'language_content_type_landbook_indicator',
      4 => 'language_default',
    ),
    'i18n' => array(
      0 => 'i18n_language_list',
    ),
    'i18n_string' => array(
      0 => 'i18n_string_translate_langcode_en',
      1 => 'i18n_string_allowed_formats',
      2 => 'i18n_string_source_language',
      3 => 'i18n_string_debug',
    ),
    'googleanalytics' => array(
      0 => 'googleanalytics_account',
    ),
  ),
  'variable_realm_list_language' => array(
    0 => 'site_name',
    1 => 'site_slogan',
    2 => 'site_frontpage',
    3 => 'user_mail_register_admin_created_[mail_part]',
    4 => 'user_mail_register_no_approval_required_[mail_part]',
    5 => 'user_mail_register_pending_approval_[mail_part]',
    6 => 'user_mail_password_reset_[mail_part]',
    7 => 'user_mail_status_activated_[mail_part]',
    8 => 'user_mail_status_blocked_[mail_part]',
    9 => 'user_mail_cancel_confirm_[mail_part]',
    10 => 'user_mail_status_canceled_[mail_part]',
  ),
);
  $realm_variables['language']['en'] = array(
  'site_frontpage' => 'node/10064',
  'site_name' => 'Landportal',
  'site_slogan' => '',
);
  $realm_variables['language']['es'] = array(
  'site_frontpage' => 'node/10071',
  'site_name' => 'Landportal',
  'site_slogan' => '',
);
  $realm_variables['language']['fr'] = array(
  'site_frontpage' => 'node/10070',
  'site_name' => 'Landportal',
  'site_slogan' => '',
);
  $realm_variables['language']['pt'] = array(
  'site_frontpage' => 'node/28444',
  'site_name' => 'Landportal',
  'site_slogan' => '',
);

return $realm_variables;
}
