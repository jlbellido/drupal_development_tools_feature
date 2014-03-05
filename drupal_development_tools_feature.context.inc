<?php
/**
 * @file
 * drupal_development_tools_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function drupal_development_tools_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'drupal_development_tools';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'devel-execute_php' => array(
          'module' => 'devel',
          'delta' => 'execute_php',
          'region' => 'devel-footer',
          'weight' => '-10',
        ),
        'devel-switch_user' => array(
          'module' => 'devel',
          'delta' => 'switch_user',
          'region' => 'devel-footer',
          'weight' => '-9',
        ),
        'menu-devel' => array(
          'module' => 'menu',
          'delta' => 'devel',
          'region' => 'devel-footer',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['drupal_development_tools'] = $context;

  return $export;
}
