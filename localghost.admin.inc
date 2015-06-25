<?php

function localghost_configure_form($form, &$form_state) {
	$form = array();
	$form['localghost_basic'] = array(
		'#type' => 'fieldset',
		'#title' => t('Basic Settings'),
		'#group' => 'basic',
	);

	$form['localghost_basic']['enable_localghost'] = array(
		'#type' => 'checkbox',
		'#title' => t('Enable LocalGhost'),
		'#default_value' => variable_get('enable_localghost', FALSE),
		'#description' => 'Enable/Disable LocalGhost',
	);

	if(empty(variable_get('file_localghost_path'))) {
		$form['localghost_basic']['enable_localghost']['#disabled'] = TRUE;
		$form['localghost_basic']['enable_localghost']['#description'] = t('The file system for localhost has not been configured.');
	}

	return system_settings_form($form);
}
