<?php
/**
 * @file
 * schemax_event_participant.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function schemax_event_participant_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function schemax_event_participant_node_info() {
  $items = array(
    'schemax_event_participant' => array(
      'name' => t('Event Participant'),
      'base' => 'node_content',
      'description' => t('Denotes the association of a person with an event and tracks their status'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
