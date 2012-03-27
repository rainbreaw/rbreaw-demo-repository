<?php
/**
 * @file
 * example.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function example_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function example_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function example_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
