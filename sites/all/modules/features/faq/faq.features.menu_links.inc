<?php
/**
 * @file
 * faq.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function faq_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_faq:node/5.
  $menu_links['main-menu_faq:node/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => 'This is where frequently ask questions are',
      ),
      'identifier' => 'main-menu_faq:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('FAQ');

  return $menu_links;
}
