<?php
/**
 * @file
 * base_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function base_slideshow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function base_slideshow_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function base_slideshow_node_info() {
  $items = array(
    'slideshow_slide' => array(
      'name' => t('Slideshow Slide'),
      'base' => 'node_content',
      'description' => t('Use this to create slideshow slides that can be redirected to any internal or external link.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
