<?php
/**
 * @file
 * Administration page callbacks for Landbook module
 *
 * The Landportal landbook
 *
 * Original work by: WESO
 * Drupal refactoring: Jules <jules@ker.bz>
 */

/**
 * From builder.
 */

function landbook_admin_settings() {
  $form['landbook_sparql'] = array(
    '#type'             => 'textfield',
    '#title'            => 'Sparql URL',
    '#description'      => t('URL to the Landportal SPARQL endpoint'),
    '#default_value'    => variable_get('landbook_sparql', 'http://localhost/sparql'),
  );

  $form['#submit'][] = 'landbook_admin_settings_submit';
  return system_settings_form($form);
}


/**
 * Dummy check (see @TODO) to see if sumbited values are URL
 */
function landbook_admin_settings_validate($form, &$form_state) {
  $t = array('landbook_sparql');
  foreach ($t as $v) {
    if (substr($form_state['values'][$v], 0, 4) != 'http' && $form_state['values'][$v][0] != '/') {
      form_set_error($v, t($v.': must be a valid URL, got: ') . $form_state['values'][$v]);
    }
    // @TODO ping URL to check if it responds or print warning (not a fatal error)
  }
}


/**
 * Store new values in variables
 */
function landbook_admin_settings_submit($form, $form_state) {
  $t = array('landbook_sparql');
  foreach ($t as $v) {
    variable_set($v, $form_state['values'][$v]);
    watchdog('Landbook', 'Updated ' . $v . ' value to ' . $form_state['values'][$v]);
  }
}
