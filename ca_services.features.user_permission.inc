<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ca_services_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ca_services content
  $permissions['create ca_services content'] = array(
    'name' => 'create ca_services content',
    'roles' => array(
      '0' => 'services administrator',
      '1' => 'services writer',
    ),
  );

  // Exported permission: delete any ca_services content
  $permissions['delete any ca_services content'] = array(
    'name' => 'delete any ca_services content',
    'roles' => array(
      '0' => 'services administrator',
    ),
  );

  // Exported permission: delete own ca_services content
  $permissions['delete own ca_services content'] = array(
    'name' => 'delete own ca_services content',
    'roles' => array(
      '0' => 'services administrator',
      '1' => 'services writer',
    ),
  );

  // Exported permission: edit any ca_services content
  $permissions['edit any ca_services content'] = array(
    'name' => 'edit any ca_services content',
    'roles' => array(
      '0' => 'services administrator',
    ),
  );

  // Exported permission: edit own ca_services content
  $permissions['edit own ca_services content'] = array(
    'name' => 'edit own ca_services content',
    'roles' => array(
      '0' => 'services administrator',
      '1' => 'services writer',
    ),
  );

  return $permissions;
}
