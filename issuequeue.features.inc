<?php
/**
 * @file
 * issuequeue.features.inc
 */

/**
 * Implements hook_views_api().
 */
function issuequeue_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function issuequeue_node_info() {
  $items = array(
    'issue' => array(
      'name' => t('Issue'),
      'base' => 'node_content',
      'description' => t('<em>Issues</em> are items which require that some action be taken to resolve them.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
