<?php
/**
 * @file
 * ik_dashboard.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ik_dashboard_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'dashboard';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'indholdskanalen';
  $export['theme_default'] = $strongarm;

  return $export;
}
