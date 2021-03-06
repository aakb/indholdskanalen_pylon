<?php
/**
 * @file
 * ik_roles_and_permissions.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function ik_roles_and_permissions_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:department:add user'
  $permissions['node:department:add user'] = array(
    'roles' => array(
      'Gruppe administrator' => 'Gruppe administrator',
    ),
  );

  // Exported og permission: 'node:department:administer group'
  $permissions['node:department:administer group'] = array(
    'roles' => array(
      'Gruppe administrator' => 'Gruppe administrator',
    ),
  );

  // Exported og permission: 'node:department:approve and deny subscription'
  $permissions['node:department:approve and deny subscription'] = array(
    'roles' => array(
      'Gruppe administrator' => 'Gruppe administrator',
    ),
  );

  // Exported og permission: 'node:department:create channel content'
  $permissions['node:department:create channel content'] = array(
    'roles' => array(
      'Redaktør' => 'Redaktør',
    ),
  );

  // Exported og permission: 'node:department:create department content'
  $permissions['node:department:create department content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:department:create media_rss_slide_import content'
  $permissions['node:department:create media_rss_slide_import content'] = array(
    'roles' => array(
      'Redaktør' => 'Redaktør',
      'Bidragyder' => 'Bidragyder',
    ),
  );

  // Exported og permission: 'node:department:create slide content'
  $permissions['node:department:create slide content'] = array(
    'roles' => array(
      'Redaktør' => 'Redaktør',
      'Bidragyder' => 'Bidragyder',
    ),
  );

  // Exported og permission: 'node:department:delete any channel content'
  $permissions['node:department:delete any channel content'] = array(
    'roles' => array(
      'Redaktør' => 'Redaktør',
    ),
  );

  // Exported og permission: 'node:department:delete any department content'
  $permissions['node:department:delete any department content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:department:delete any media_rss_slide_import content'
  $permissions['node:department:delete any media_rss_slide_import content'] = array(
    'roles' => array(
      'Redaktør' => 'Redaktør',
    ),
  );

  // Exported og permission: 'node:department:delete any slide content'
  $permissions['node:department:delete any slide content'] = array(
    'roles' => array(
      'Redaktør' => 'Redaktør',
    ),
  );

  // Exported og permission: 'node:department:delete own channel content'
  $permissions['node:department:delete own channel content'] = array(
    'roles' => array(
      'Redaktør' => 'Redaktør',
    ),
  );

  // Exported og permission: 'node:department:delete own department content'
  $permissions['node:department:delete own department content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:department:delete own media_rss_slide_import content'
  $permissions['node:department:delete own media_rss_slide_import content'] = array(
    'roles' => array(
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
    ),
  );

  // Exported og permission: 'node:department:delete own slide content'
  $permissions['node:department:delete own slide content'] = array(
    'roles' => array(
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
    ),
  );

  // Exported og permission: 'node:department:manage members'
  $permissions['node:department:manage members'] = array(
    'roles' => array(
      'Gruppe administrator' => 'Gruppe administrator',
    ),
  );

  // Exported og permission: 'node:department:manage permissions'
  $permissions['node:department:manage permissions'] = array(
    'roles' => array(
      'Gruppe administrator' => 'Gruppe administrator',
    ),
  );

  // Exported og permission: 'node:department:manage roles'
  $permissions['node:department:manage roles'] = array(
    'roles' => array(
      'Gruppe administrator' => 'Gruppe administrator',
    ),
  );

  // Exported og permission: 'node:department:subscribe'
  $permissions['node:department:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:department:subscribe without approval'
  $permissions['node:department:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:department:unsubscribe'
  $permissions['node:department:unsubscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:department:update any channel content'
  $permissions['node:department:update any channel content'] = array(
    'roles' => array(
      'Redaktør' => 'Redaktør',
    ),
  );

  // Exported og permission: 'node:department:update any department content'
  $permissions['node:department:update any department content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:department:update any media_rss_slide_import content'
  $permissions['node:department:update any media_rss_slide_import content'] = array(
    'roles' => array(
      'Redaktør' => 'Redaktør',
    ),
  );

  // Exported og permission: 'node:department:update any slide content'
  $permissions['node:department:update any slide content'] = array(
    'roles' => array(
      'Redaktør' => 'Redaktør',
    ),
  );

  // Exported og permission: 'node:department:update group'
  $permissions['node:department:update group'] = array(
    'roles' => array(
      'Redaktør' => 'Redaktør',
      'Gruppe administrator' => 'Gruppe administrator',
    ),
  );

  // Exported og permission: 'node:department:update own channel content'
  $permissions['node:department:update own channel content'] = array(
    'roles' => array(
      'Redaktør' => 'Redaktør',
    ),
  );

  // Exported og permission: 'node:department:update own department content'
  $permissions['node:department:update own department content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:department:update own media_rss_slide_import content'
  $permissions['node:department:update own media_rss_slide_import content'] = array(
    'roles' => array(
      'Redaktør' => 'Redaktør',
      'Bidragyder' => 'Bidragyder',
    ),
  );

  // Exported og permission: 'node:department:update own slide content'
  $permissions['node:department:update own slide content'] = array(
    'roles' => array(
      'Bidragyder' => 'Bidragyder',
      'Redaktør' => 'Redaktør',
    ),
  );

  // Exported og permission: 'node:organisation:add user'
  $permissions['node:organisation:add user'] = array(
    'roles' => array(
      'Gruppe administrator' => 'Gruppe administrator',
    ),
  );

  // Exported og permission: 'node:organisation:administer group'
  $permissions['node:organisation:administer group'] = array(
    'roles' => array(
      'Gruppe administrator' => 'Gruppe administrator',
    ),
  );

  // Exported og permission: 'node:organisation:approve and deny subscription'
  $permissions['node:organisation:approve and deny subscription'] = array(
    'roles' => array(
      'Gruppe administrator' => 'Gruppe administrator',
    ),
  );

  // Exported og permission: 'node:organisation:create channel content'
  $permissions['node:organisation:create channel content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:create department content'
  $permissions['node:organisation:create department content'] = array(
    'roles' => array(
      'Redaktør' => 'Redaktør',
    ),
  );

  // Exported og permission: 'node:organisation:create media_rss_slide_import content'
  $permissions['node:organisation:create media_rss_slide_import content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:create slide content'
  $permissions['node:organisation:create slide content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:delete any channel content'
  $permissions['node:organisation:delete any channel content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:delete any department content'
  $permissions['node:organisation:delete any department content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:delete any media_rss_slide_import content'
  $permissions['node:organisation:delete any media_rss_slide_import content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:delete any slide content'
  $permissions['node:organisation:delete any slide content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:delete own channel content'
  $permissions['node:organisation:delete own channel content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:delete own department content'
  $permissions['node:organisation:delete own department content'] = array(
    'roles' => array(
      'Redaktør' => 'Redaktør',
    ),
  );

  // Exported og permission: 'node:organisation:delete own media_rss_slide_import content'
  $permissions['node:organisation:delete own media_rss_slide_import content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:delete own slide content'
  $permissions['node:organisation:delete own slide content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:manage members'
  $permissions['node:organisation:manage members'] = array(
    'roles' => array(
      'Gruppe administrator' => 'Gruppe administrator',
    ),
  );

  // Exported og permission: 'node:organisation:manage permissions'
  $permissions['node:organisation:manage permissions'] = array(
    'roles' => array(
      'Gruppe administrator' => 'Gruppe administrator',
    ),
  );

  // Exported og permission: 'node:organisation:manage roles'
  $permissions['node:organisation:manage roles'] = array(
    'roles' => array(
      'Gruppe administrator' => 'Gruppe administrator',
    ),
  );

  // Exported og permission: 'node:organisation:subscribe'
  $permissions['node:organisation:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:subscribe without approval'
  $permissions['node:organisation:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:unsubscribe'
  $permissions['node:organisation:unsubscribe'] = array(
    'roles' => array(
      'Gruppe administrator' => 'Gruppe administrator',
    ),
  );

  // Exported og permission: 'node:organisation:update any channel content'
  $permissions['node:organisation:update any channel content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:update any department content'
  $permissions['node:organisation:update any department content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:update any media_rss_slide_import content'
  $permissions['node:organisation:update any media_rss_slide_import content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:update any slide content'
  $permissions['node:organisation:update any slide content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:update group'
  $permissions['node:organisation:update group'] = array(
    'roles' => array(
      'Gruppe administrator' => 'Gruppe administrator',
    ),
  );

  // Exported og permission: 'node:organisation:update own channel content'
  $permissions['node:organisation:update own channel content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:update own department content'
  $permissions['node:organisation:update own department content'] = array(
    'roles' => array(
      'Redaktør' => 'Redaktør',
    ),
  );

  // Exported og permission: 'node:organisation:update own media_rss_slide_import content'
  $permissions['node:organisation:update own media_rss_slide_import content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:organisation:update own slide content'
  $permissions['node:organisation:update own slide content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
