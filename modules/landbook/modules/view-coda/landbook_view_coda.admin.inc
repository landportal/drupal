<?php


/**
 * Form constructor for the add block form.
 *
 * @see landbook_view_coda_add_block_form_validate()
 * @see landbook_view_coda_add_block_form_submit()
 * @ingroup forms
 */
function landbook_view_coda_add_block_form($form, &$form_state) {
  module_load_include('inc', 'block', 'block.admin');
  $form = block_admin_configure($form, $form_state, 'landbook_view_coda', NULL);

  // Other modules should be able to use hook_form_block_add_block_form_alter()
  // to modify this form, so add a base form ID.
  $form_state['build_info']['base_form_id'] = 'block_add_block_form';

  // Prevent block_add_block_form_validate/submit() from being automatically
  // added because of the base form ID by providing these handlers manually.
  $form['#validate'] = array('landbook_view_coda_add_block_form_validate');
  $form['#submit'] = array('landbook_view_coda_add_block_form_submit');

  return $form;
}


/**
 * Form validation handler for landbook_view_coda_add_block_form().
 *
 * @see landbook_view_coda_add_block_form()
 * @see landbook_view_coda_add_block_form_submit()
 */
function landbook_view_coda_add_block_form_validate($form, &$form_state) {
  // @TODO: Check it!
}



/**
 * Form submission handler for landbook_view_coda_add_block_form().
 *
 * Saves the new custom Twitter block.
 *
 * @see landbook_view_coda_add_block_form()
 * @see landbook_view_coda_add_block_form_validate()
 */
function landbook_view_coda_add_block_form_submit($form, &$form_state) {
  // The serialized 'data' column contains the timeline settings.
  //dpm($form_state['values'], 'POST');
  /* $data = array( */
  /*   'theme' => $form_state['values']['theme'], */
  /*   'link_color' => $form_state['values']['link_color'], */
  /*   'width' => $form_state['values']['width'], */
  /*   'height' => $form_state['values']['height'], */
  /*   'chrome' => $form_state['values']['chrome'], */
  /*   'border_color' => $form_state['values']['border_color'], */
  /*   'language' => $form_state['values']['language'], */
  /*   'tweet_limit' => $form_state['values']['tweet_limit'], */
  /*   'related' => $form_state['values']['related'], */
  /*   'polite' => $form_state['values']['polite'], */
  /* ); */

  /* // Save the block configuration. */
  /* $delta = db_insert('twitter_block') */
  /*   ->fields(array( */
  /*     'info' => $form_state['values']['info'], */
  /*     'widget_id' => $form_state['values']['widget_id'], */
  /*     'username' => $form_state['values']['username'], */
  /*     'data' => serialize($data), */
  /*   )) */
  /*   ->execute(); */

  // Store block delta to allow other modules to work with new block.
  $form_state['values']['delta'] = $delta;

  // Run the normal new block submission (borrowed from block_add_block_form_submit).
  $query = db_insert('block')->fields(array('visibility', 'pages', 'custom', 'title', 'module', 'theme', 'status', 'weight', 'delta', 'cache'));
  foreach (list_themes() as $key => $theme) {
    if ($theme->status) {
      $query->values(array(
        'visibility' => (int) $form_state['values']['visibility'],
        'pages' => trim($form_state['values']['pages']),
        'custom' => (int) $form_state['values']['custom'],
        'title' => $form_state['values']['title'],
        'module' => $form_state['values']['module'],
        'theme' => $theme->name,
        'status' => 0,
        'weight' => 0,
        'delta' => $delta,
        'cache' => DRUPAL_NO_CACHE,
      ));
    }
  }
  $query->execute();

  $query = db_insert('block_role')->fields(array('rid', 'module', 'delta'));
  foreach (array_filter($form_state['values']['roles']) as $rid) {
    $query->values(array(
      'rid' => $rid,
      'module' => $form_state['values']['module'],
      'delta' => $delta,
    ));
  }
  $query->execute();

  // Store regions per theme for this block.
  foreach ($form_state['values']['regions'] as $theme => $region) {
    db_merge('block')
      ->key(array('theme' => $theme, 'delta' => $delta, 'module' => $form_state['values']['module']))
      ->fields(array(
        'region' => ($region == BLOCK_REGION_NONE ? '' : $region),
        'pages' => trim($form_state['values']['pages']),
        'status' => (int) ($region != BLOCK_REGION_NONE),
      ))
      ->execute();
  }

  drupal_set_message(t('The block has been created.'));
  cache_clear_all();
  $form_state['redirect'] = 'admin/structure/block';
}

/**
 * Form constructor for the custom Twitter block deletion form.
 *
 * @param $delta
 *   The unique ID of the block within the context of $module.
 *
 * @see landbook_view_coda_delete_submit()
 */
function landbook_view_coda_block_delete($form, &$form_state, $delta) {
  $block = block_load('landbook_view_coda', $delta);

  // @todo: delete view block
  /* $landbook_view_coda = landbook_view_coda_block_get($block->delta); */
  /* $form['info'] = array('#type' => 'hidden', '#value' => $landbook_view_coda['info'] ? $landbook_view_coda['info'] : $landbook_view_coda['title']); */
  /* $form['bid'] = array('#type' => 'hidden', '#value' => $block->delta); */
  //dpm($block);
  return FALSE;// confirm_form($form, t('Are you sure you want to delete the block %name?', array('%name' => $landbook_view_coda['info'])), 'admin/structure/block', '', t('Delete'), t('Cancel'));
}

/**
 * Form submission handler for landbook_view_coda_delete().
 *
 * @see landbook_view_coda_delete()
 */
function landbook_view_coda_block_delete_submit($form, &$form_state) {
  // @todo: delete view block data
  /* db_delete('VC TABLE') */
  /*   ->condition('bid', $form_state['values']['bid']) */
  /*   ->execute(); */
  db_delete('block')
    ->condition('module', 'landbook_view_coda')
    ->condition('delta', $form_state['values']['bid'])
    ->execute();
  db_delete('block_role')
    ->condition('module', 'landbook_view_coda')
    ->condition('delta', $form_state['values']['bid'])
    ->execute();
  drupal_set_message(t('The block %name has been removed.', array('%name' => $form_state['values']['info'])));
  cache_clear_all();
  $form_state['redirect'] = 'admin/structure/block';
  return;
}
