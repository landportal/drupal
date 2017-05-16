<?php

/**
 * Page callback: Displays add content links for available content types.
 *
 * Redirects to node/add/[type] if only one content type is available.
 *
 * @see node_menu()
 */
function profile2_create_add_page() {
  $content = array();
  $path = $_GET['q'];
  foreach(profile2_get_types() as $type) {
    $type_url_str = str_replace('_', '-', $type->type);
    $content[] = menu_get_item($path . '/' . $type_url_str);
  }
  // Bypass the node/add listing if only one content type is available.
  if (count($content) == 1) {
    $item = array_shift($content);
    drupal_goto($item['href']);
  }
  return theme('profile2_create_add_list', array('content' => $content));
}

/**
 * Returns a profile2 submission form.
 */
function profile2_create_add($type) {
  global $user;

  $types = profile2_get_types();
  $profile = profile2_create(array('type' => $types[$type]));
  drupal_set_title(t('Create @name', array('@name' => $types[$type]->label)), PASS_THROUGH);
  $output = drupal_get_form('profile2_create_form', $profile);


  return $output;
}

/**
 * The profile edit form.
 */
function profile2_create_form($form, &$form_state, $profile) {
  if (empty($form_state['profiles'])) {
    $form_state['profiles'][$profile->type] = $profile;
  }
  // Prevent invoking the same hooks twice, so tell profile2_attach_form() to
  // skip invoking the hooks.
  $form_state['profile2_skip_hook'] = TRUE;
  profile2_attach_form($form, $form_state);

  if ($profile->uid) {
    $profile_user = $profile->user();
  }
  $form['user'] = array(
    '#type' => 'textfield',
    '#title' => t('User'),
    '#maxlength' => 60,
    '#autocomplete_path' => 'user/autocomplete',
    '#default_value' => isset($profile_user) ? $profile_user->name : '',
    '#weight' => 5,
    '#description' => t('Leave blank for %anonymous.', array('%anonymous' => variable_get('anonymous', t('Anonymous')))),
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#weight' => 40,
  );
  if (!empty($profile->pid) && user_access('administer profiles')) {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete profile'),
      '#weight' => 45,
      '#limit_validation_errors' => array(),
      '#submit' => array('profile2_create_form_submit_delete')
    );
  }

  $form['#validate'][] = 'profile2_create_form_validate';

  $form['#submit'][] = 'profile2_create_form_submit';
  return $form;
}

function profile2_create_form_validate(&$form, &$form_state) {
  if (!empty($form['user']['#value'])) {
    $user = user_load_by_name($form['user']['#value']);
    if (!empty($user)) {
      foreach ($form_state['profiles'] as $type => $profile) {
        $form_state['profiles'][$type]->uid = $user->uid;
      }
    }
  }
}

/**
 * Profile form submit handler.
 */
function profile2_create_form_submit($form, &$form_state) {
  // The profile is being saved by profile2_form_submit_handler().
  drupal_set_message(t('The changes have been saved.'));
  if (isset($form_state['profile2_create'])) {
    $form_state['redirect'] = $form_state['profile2_create']->path();
  }
  else {
    foreach ($form_state['profiles'] as $type => $profile) {
      $form_state['redirect'] = $profile->path();
      break;
    }
  }
}

/**
 * Profile form submit handler for the delete button.
 */
function profile2_create_form_submit_delete($form, &$form_state) {
  $form_state['redirect'] = $form_state['profile2_create']->path() . '/delete';
}

/**
 * Returns HTML for a list of available node types for node creation.
 *
 * @param $variables
 *   An associative array containing:
 *   - content: An array of content types.
 *
 * @ingroup themeable
 */
function theme_profile2_create_add_list($variables) {
  $content = $variables['content'];
  $output = '';

  if ($content) {
    $output = '<dl class="node-type-list">';
    foreach ($content as $item) {
      $output .= '<dt>' . l($item['title'], $item['href'], $item['localized_options']) . '</dt>';
      $output .= '<dd>' . filter_xss_admin($item['description']) . '</dd>';
    }
    $output .= '</dl>';
  }
  else {
    $output = '<p>' . t('You have not created any profile types yet. Go to the <a href="@create-profile-type">profile type creation page</a> to add a new profile type.', array('@create-content' => url('admin/structure/profiles/add'))) . '</p>';
  }
  return $output;
}
