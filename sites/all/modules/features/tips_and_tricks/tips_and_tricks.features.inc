<?php
/**
 * @file
 * tips_and_tricks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tips_and_tricks_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tips_and_tricks_node_info() {
  $items = array(
    'tips_and_tricks' => array(
      'name' => t('Tips and Tricks'),
      'base' => 'node_content',
      'description' => t('Post various tips and tricks here'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
