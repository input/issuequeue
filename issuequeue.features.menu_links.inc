<?php
/**
 * @file
 * issuequeue.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function issuequeue_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:node/add/issue
  $menu_links['navigation:node/add/issue'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/issue',
    'router_path' => 'node/add/issue',
    'link_title' => 'Issue',
    'options' => array(
      'attributes' => array(
        'title' => '<em>Issues</em> are items which require that some action be taken to resolve them.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Issue');


  return $menu_links;
}
