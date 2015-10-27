<?php
/**
 * @file
 * news_.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function news__ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function news__node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Post your news here'),
      'has_title' => '1',
      'title_label' => t('Name of Article'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
