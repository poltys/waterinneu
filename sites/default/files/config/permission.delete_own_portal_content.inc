<?php
/**
 * @file
 * permission.delete_own_portal_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own portal content',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array(
  'content_type.portal' => 'content_type.portal',
);

$optional = array();

$modules = array(
  0 => 'node',
);