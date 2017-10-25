<?php

function lbvc_plugin_ui_form_wrapper($VCC, $fields) {
  $fields['submit'] = array(
        '#attributes' => array(
          'class' => 'action',
        ),
        '#type' => 'container',
        'items' => array(
          '#name' => 'update',
          '#type' => 'submit',
          '#value' => t('Update'),
        )
  );
  $form = array(
    '#attributes' => array(
      'id' => $VCC['vid'] . '-form',
      'class' => 'view-coda-form form-inline',
    ),
    '#type' => 'container',
    'items' => array(
      '#attributes' => array(
        'class' => 'row',
      ),
      '#type' => 'container',
      'items' => $fields
    ),
  );
  return $form;
}
