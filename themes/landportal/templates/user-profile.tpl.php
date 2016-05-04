<?php

/**
 * @file
 * Default theme implementation to present all user profile data.
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 * Use render($user_profile) to print all profile items, or print a subset
 * such as render($user_profile['user_picture']). Always call
 * render($user_profile) at the end in order to print all remaining items. If
 * the item is a category, it will contain all its profile items. By default,
 * $user_profile['summary'] is provided, which contains data on the user's
 * history. Other data can be included by modules. $user_profile['user_picture']
 * is available for showing the account picture.
 *
 * Available variables:
 *   - $user_profile: An array of profile items. Use render() to print them.
 *   - Field variables: for each field instance attached to the user a
 *     corresponding variable is defined; e.g., $account->field_example has a
 *     variable $field_example defined. When needing to access a field's raw
 *     values, developers/themers are strongly encouraged to use these
 *     variables. Otherwise they will have to explicitly specify the desired
 *     field language, e.g. $account->field_example['en'], thus overriding any
 *     language negotiation rule that was previously applied.
 *
 * @see user-profile-category.tpl.php
 *   Where the html is handled for the group.
 * @see user-profile-item.tpl.php
 *   Where the html is handled for each item in the group.
 * @see template_preprocess_user_profile()
 *
 * @ingroup themeable
 */

$account = $variables['elements']['#account'];
$print_account_name = FALSE;
/* $user_dup_fields = array('field_title', 'field_firstname', 'field_lastname', 'field_location', 'field_description'); */
/* if (array_key_exists('profile_main', $user_profile)) { */
/*     // TMP: 'copy' users fields value to profile main */
/*     list($pi, $p) = each($user_profile['profile_main']['view']['profile2']); */
/*     foreach ($user_dup_fields as $field_name) { */
/*         if (!array_key_exists($field_name, $p) */
/*         && array_key_exists($field_name, $user_profile)) { */
/*             $user_profile['profile_main']['view']['profile2'][$pi][$field_name] */
/*                 = $user_profile[$field_name]; */
/*             //$p[$field_name] = $user_profile[$field_name]; */
/*         } */
/*         hide($user_profile[$field_name]); */
/*     } */
/* } else if (!array_key_exists('field_lastname', $user_profile) */
/*     && !array_key_exists('field_firstname', $user_profile)) { */
/*     // TMP Fix user where we only have a account->name */
/*     $print_account_name = TRUE; */
/* } else { */
/*     // Those would normally render in the user main profile aka Public */
/*     foreach (array('field_title', 'field_firstname', 'field_lastname') as $field_name) { */
/*         hide($user_profile[$field_name]); */
/*     } */
/* } */

//dpm($account);

hide($user_profile['user_picture']);
?>

<div class="profile"<?php print $attributes; ?>>
<?php print render($user_profile['user_picture']); ?>
<?php /* if ($variables['elements']['#view_mode'] == 'teaser'): ?><a href="/user/<?php print $account->uid ?>"><?php endif; ?>
<?php if (!array_key_exists('profile_main', $user_profile)): ?><header><?php
    foreach (array('field_title', 'field_firstname', 'field_lastname') as $field_name) {
        print render($user_profile[$field_name]);
    }
?></header><?php endif; ?>
<?php if ($variables['elements']['#view_mode']): ?></a><?php endif; */ ?>
<?php if ($print_account_name): ?><div class="field account-name"><?php print $account->name; ?></div><?php endif; ?>
<?php print render($user_profile); ?>
</div>
