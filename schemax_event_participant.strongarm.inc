<?php
/**
 * @file
 * schemax_event_participant.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function schemax_event_participant_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_schemax_event_participant';
  $strongarm->value = 0;
  $export['comment_anonymous_schemax_event_participant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_schemax_event_participant';
  $strongarm->value = 1;
  $export['comment_default_mode_schemax_event_participant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_schemax_event_participant';
  $strongarm->value = '50';
  $export['comment_default_per_page_schemax_event_participant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_schemax_event_participant';
  $strongarm->value = 1;
  $export['comment_form_location_schemax_event_participant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_schemax_event_participant';
  $strongarm->value = '1';
  $export['comment_preview_schemax_event_participant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_schemax_event_participant';
  $strongarm->value = '1';
  $export['comment_schemax_event_participant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_schemax_event_participant';
  $strongarm->value = 1;
  $export['comment_subject_field_schemax_event_participant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__schemax_event_participant';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__schemax_event_participant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_schemax_event_participant';
  $strongarm->value = '0';
  $export['language_content_type_schemax_event_participant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_schemax_event_participant';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_schemax_event_participant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_schemax_event_participant';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_schemax_event_participant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_schemax_event_participant';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_schemax_event_participant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_schemax_event_participant';
  $strongarm->value = '1';
  $export['node_preview_schemax_event_participant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_schemax_event_participant';
  $strongarm->value = 0;
  $export['node_submitted_schemax_event_participant'] = $strongarm;

  return $export;
}
