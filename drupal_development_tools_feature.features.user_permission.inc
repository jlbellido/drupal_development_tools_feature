<?php
/**
 * @file
 * drupal_development_tools_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function drupal_development_tools_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: 'view code review'.
  $permissions['view code review'] = array(
    'name' => 'view code review',
    'roles' => array(),
    'module' => 'coder_review',
  );

  // Exported permission: 'view code review all'.
  $permissions['view code review all'] = array(
    'name' => 'view code review all',
    'roles' => array(),
    'module' => 'coder_review',
  );

  return $permissions;
}
