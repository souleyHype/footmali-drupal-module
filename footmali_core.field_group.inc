<?php
/**
 * @file
 * footmali_core.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function footmali_core_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_competition|node|fixture|form';
  $field_group->group_name = 'group_competition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fixture';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Compétition',
    'weight' => '1',
    'children' => array(
      0 => 'field_competition',
      1 => 'field_competition_round',
      2 => 'field_season',
      3 => 'field_competition_group',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-competition field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_competition|node|fixture|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_favorites|user|user|default';
  $field_group->group_name = 'group_favorites';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile';
  $field_group->data = array(
    'label' => 'Favoris',
    'weight' => '10',
    'children' => array(
      0 => 'field_favorite_competitons',
      1 => 'field_favorite_players',
      2 => 'field_favorite_teams',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-favorites field-group-tab',
      ),
    ),
  );
  $export['group_favorites|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_match_status|node|fixture|form';
  $field_group->group_name = 'group_match_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fixture';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Statut',
    'weight' => '3',
    'children' => array(
      0 => 'field_date_time',
      1 => 'field_match_played',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-match-status field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_match_status|node|fixture|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal_information|user|user|default';
  $field_group->group_name = 'group_personal_information';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile';
  $field_group->data = array(
    'label' => 'Information Personnelle',
    'weight' => '9',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-personal-information field-group-tab',
      ),
    ),
  );
  $export['group_personal_information|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile|user|user|default';
  $field_group->group_name = 'group_profile';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profil',
    'weight' => '0',
    'children' => array(
      0 => 'group_personal_information',
      1 => 'group_favorites',
      2 => 'group_subscription',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-profile field-group-tabs',
      ),
    ),
  );
  $export['group_profile|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teams_scores|node|fixture|form';
  $field_group->group_name = 'group_teams_scores';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fixture';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Équipes & Scores',
    'weight' => '2',
    'children' => array(
      0 => 'field_away_team',
      1 => 'field_away_team_score',
      2 => 'field_home_team',
      3 => 'field_home_team_score',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-teams-scores field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_teams_scores|node|fixture|form'] = $field_group;

  return $export;
}
