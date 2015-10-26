<?php
/**
 * @file
 * test_test_test_.features.inc
 */

/**
 * Implements hook_node_info().
 */
function test_test_test__node_info() {
  $items = array(
    'someting_test_' => array(
      'name' => t('Someting Test'),
      'base' => 'node_content',
      'description' => t('I made this for a test. '),
      'has_title' => '1',
      'title_label' => t('Name '),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
