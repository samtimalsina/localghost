<?php

function localghost_configure_form($form, &$form_state) {
	$form = array();
	$form['mn_basic'] = array(
		'#type' => 'fieldset',
		'#title' => t('Basic Settings'),
		'#group' => 'basic',
	);
	
	$form['mn_basic']['enable_localghost'] = array(
		'#type' => 'checkbox',
		'#title' => t('Enable LocalGhost'),
		'#default_value' => variable_get('enable_localghost', FALSE),
	);

	return system_settings_form($form);
}