<?php
 /**
  * @File
  *   Provides the admin pages for mailfish
  */

/**
 * Provides the Mailfish settings form.
 */
function mailfish_settings_form () {
  $form['mailfish_types'] = array(
    '#title' => t('The content types to enable Mailfish for'),
    '#description' => t('On the specified node types a Mailfish subscription option will be available and can be enabled while that node is being edited'),
    '#type' => 'checkboxes',
    '#options' => node_get_types('names'),
    '#default_value' => variable_get('mailfish_types',array()),
  );
  return system_settings_form($form);
}
