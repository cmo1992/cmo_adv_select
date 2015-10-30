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
  $form['settings']['urls'] = array(
    '#type' => 'textarea',
    '#title' => t('Advanced Select Pages'),
    '#description' => t('Add URLs that need the advanced select applied to.'),
    '#default_value' => '',
  );
  // Submit button
  $form['settings']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save settings'),
    '#validate' => array(
      'session_select_validate'
    ),
  );

  return $form;
}


function session_selest_validate($form, &$form_state) {
  watchdog("cmo", "session_selest_validate");
}