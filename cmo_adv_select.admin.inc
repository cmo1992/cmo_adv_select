<?php

/**
 * @file
 * CMO's Advanced Select Module
 */
/**
 * Admin settings form.
 */
function cmo_adv_select_admin_settings() {
  $form = array();
  $form['settings']['visibility_urls'] = array(
    '#type' => 'textarea',
    '#title' => t('Advanced Select Pages'),
    '#description' => t('Add Node id and a descriptive name in a "nid|' .
        'disctiptive name|custom error message" (ex. 2523|Drupal 101 - Nov. ' .
        '10th 2015|Sorry select a different section). One entry per line and ' .
        'the nodes listed will get the advanced select applied to them.'),
    
    '#default_value' => variable_get('cmo_adv_select_nids'),
    '#rows' => 10,
  );
  // Submit button
  $form['settings']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save settings'),
    '#submit' => array('cmo_adv_select_save'),
  );

  return $form;
}

/**
 * Saves the nodes that are configured to use the module.
 * @param type $form
 * @param array $form_state
 */
function cmo_adv_select_save($form, &$form_state) {
  variable_set('cmo_adv_select_nids', $form_state['values']['visibility_urls']);
  drupal_set_message(t('Your new session form has been saved.'));
  $form_state['redirect'] = 'admin/config/development/cmo_adv_select';
}