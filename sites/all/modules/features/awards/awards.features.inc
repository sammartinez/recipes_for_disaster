<?php
/**
 * @file
 * awards.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function awards_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function awards_node_info() {
  $items = array(
    'awards' => array(
      'name' => t('Awards'),
      'base' => 'node_content',
      'description' => t('List of awards won'),
      'has_title' => '1',
      'title_label' => t('Award Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
