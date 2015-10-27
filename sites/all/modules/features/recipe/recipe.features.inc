<?php
/**
 * @file
 * recipe.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function recipe_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function recipe_node_info() {
  $items = array(
    'recipe' => array(
      'name' => t('Recipe'),
      'base' => 'node_content',
      'description' => t('Step-by-step recipes'),
      'has_title' => '1',
      'title_label' => t('Recipe'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
