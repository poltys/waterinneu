<?php
/**
 * @file
 * n52_feature_forum.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function n52_feature_forum_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function n52_feature_forum_field_default_field_instances_alter(&$data) {
  if (isset($data['harmony_post-harmony_post-field_harmony_text'])) {
    $data['harmony_post-harmony_post-field_harmony_text']['display']['default']['settings']['field_formatter_class'] = ''; /* WAS: '' */
    $data['harmony_post-harmony_post-field_harmony_text']['display']['full']['settings']['field_formatter_class'] = ''; /* WAS: '' */
    $data['harmony_post-harmony_post-field_harmony_text']['settings']['better_formats']['allowed_formats']['filtered_html'] = 'filtered_html'; /* WAS: 0 */
    $data['harmony_post-harmony_post-field_harmony_text']['settings']['better_formats']['allowed_formats']['full_html_plain_no_filter_'] = 0; /* WAS: '' */
    $data['harmony_post-harmony_post-field_harmony_text']['settings']['better_formats']['allowed_formats']['full_html_tinymce'] = 0; /* WAS: '' */
    $data['harmony_post-harmony_post-field_harmony_text']['settings']['better_formats']['allowed_formats']['plain_text'] = 'plain_text'; /* WAS: 0 */
    $data['harmony_post-harmony_post-field_harmony_text']['settings']['better_formats']['default_order_wrapper']['formats']['full_html_plain_no_filter_'] = array(
      'weight' => 0,
    ); /* WAS: '' */
    $data['harmony_post-harmony_post-field_harmony_text']['settings']['better_formats']['default_order_wrapper']['formats']['full_html_tinymce'] = array(
      'weight' => -7,
    ); /* WAS: '' */
    $data['harmony_post-harmony_post-field_harmony_text']['settings']['course_enrollment'] = FALSE; /* WAS: '' */
    $data['harmony_post-harmony_post-field_harmony_text']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
    $data['harmony_post-harmony_post-field_harmony_text']['settings']['linkit'] = array(
      'button_text' => 'Search',
      'enable' => 0,
      'profile' => '',
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_default_harmony_thread_type().
 */
function n52_feature_forum_default_harmony_thread_type() {
  $items = array();
  $items['harmony_thread'] = entity_import('harmony_thread_type', '{ "type" : "harmony_thread", "label" : "Thread", "rdf_mapping" : [] }');
  return $items;
}
