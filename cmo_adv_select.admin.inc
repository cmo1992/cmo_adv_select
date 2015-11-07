<?php

/**
 * @file
 * CMO's Advanced Select Module
 */
/**
 * 
 */
function cmo_adv_select_admin_settings() {
  $form = array();

  // This is the field fieldset.
  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t("CMO's Advanced Select Mod"),
    '#collapsible' => TRUE,
    '#description' => t('Add URLs for sign up forms that use a select ' .
      'option for the sessions. The options will have to be formatted ' .
      '"sesstionkey_&ltcapasity&gt|&ltSesstion Title&gt &ltDate/Time&gt"'),
  );
  $form['settings']['visibility_urls'] = array(
    '#type' => 'textarea',
    '#title' => t('Advanced Select Pages'),
    '#description' => t('Add URLs that need the advanced select applied to.'),
    '#default_value' => variable_get('cmo_adv_select_nids'),
    '#rows' => 10,
  );
  // Submit button
  $form['settings']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save settings'),
    '#submit' => array(cmo_adv_select_save),
  );

  return $form;
}

function cmo_adv_select_save($form, &$form_state) {
  watchdog('cmo-php', print_r($form_state));
  drupal_set_message(t('Your new session form has been saved.'));
  $form_state['redirect'] = 'admin/config/development/cmo_adv_select';
}