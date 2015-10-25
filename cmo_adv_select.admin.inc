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

  // Submit button
  $form['settings']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save settings'),
  );

  return $form;
}
