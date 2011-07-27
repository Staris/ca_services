<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_services_user_default_roles() {
  $roles = array();

  // Exported role: services administrator
  $roles['services administrator'] = array(
    'name' => 'services administrator',
  );

  // Exported role: services writer
  $roles['services writer'] = array(
    'name' => 'services writer',
  );

  return $roles;
}
