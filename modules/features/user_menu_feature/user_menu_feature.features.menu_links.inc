<?php
/**
 * @file
 * user_menu_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function user_menu_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_add-blog-post:node/add/blog-post.
  $menu_links['user-menu_add-blog-post:node/add/blog-post'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/blog-post',
    'router_path' => 'node/add/blog-post',
    'link_title' => 'Add Blog Post',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_add-blog-post:node/add/blog-post',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_add-content:node/add',
  );
  // Exported menu link: user-menu_add-content:node/add.
  $menu_links['user-menu_add-content:node/add'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_add-content:node/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_contribute:node/add',
  );
  // Exported menu link: user-menu_add-debate:node/add/debate.
  $menu_links['user-menu_add-debate:node/add/debate'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/debate',
    'router_path' => 'node/add/debate',
    'link_title' => 'Add Debate',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_add-debate:node/add/debate',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_add-content:node/add',
  );
  // Exported menu link: user-menu_add-event:node/add/event.
  $menu_links['user-menu_add-event:node/add/event'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/event',
    'router_path' => 'node/add/event',
    'link_title' => 'Add Event',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_add-event:node/add/event',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_add-content:node/add',
  );
  // Exported menu link: user-menu_add-file:file/add.
  $menu_links['user-menu_add-file:file/add'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'file/add',
    'router_path' => 'file/add',
    'link_title' => 'Add File',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_add-file:file/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_add-content:node/add',
  );
  // Exported menu link: user-menu_add-landlibrary-resource:node/add/landlibrary-resource.
  $menu_links['user-menu_add-landlibrary-resource:node/add/landlibrary-resource'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/landlibrary-resource',
    'router_path' => 'node/add/landlibrary-resource',
    'link_title' => 'Add Landlibrary Resource',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_add-landlibrary-resource:node/add/landlibrary-resource',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_add-content:node/add',
  );
  // Exported menu link: user-menu_add-news:node/add/news.
  $menu_links['user-menu_add-news:node/add/news'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/news',
    'router_path' => 'node/add/news',
    'link_title' => 'Add News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_add-news:node/add/news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_add-content:node/add',
  );
  // Exported menu link: user-menu_add-page:node/add/page.
  $menu_links['user-menu_add-page:node/add/page'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Add Page',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_add-page:node/add/page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_add-content:node/add',
  );
  // Exported menu link: user-menu_add-person:node/add/person.
  $menu_links['user-menu_add-person:node/add/person'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/person',
    'router_path' => 'node/add/person',
    'link_title' => 'Add Person',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_add-person:node/add/person',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_add-content:node/add',
  );
  // Exported menu link: user-menu_contribute:node/add.
  $menu_links['user-menu_contribute:node/add'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Contribute',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_contribute:node/add',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_docs:node/13059.
  $menu_links['user-menu_docs:node/13059'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/13059',
    'router_path' => 'node/%',
    'link_title' => 'Docs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_docs:node/13059',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_contribute:node/add',
  );
  // Exported menu link: user-menu_forms-management:admin/content/webform.
  $menu_links['user-menu_forms-management:admin/content/webform'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'admin/content/webform',
    'router_path' => 'admin/content/webform',
    'link_title' => 'Forms management',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_forms-management:admin/content/webform',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_contribute:node/add',
  );
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_mailing-lists:admin/mailchimp/user_lists.
  $menu_links['user-menu_mailing-lists:admin/mailchimp/user_lists'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'admin/mailchimp/user_lists',
    'router_path' => 'admin',
    'link_title' => 'Mailing Lists',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_mailing-lists:admin/mailchimp/user_lists',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'user-menu_contribute:node/add',
  );
  // Exported menu link: user-menu_sign-in:user/login.
  $menu_links['user-menu_sign-in:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Sign in',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_sign-in:user/login',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Blog Post');
  t('Add Content');
  t('Add Debate');
  t('Add Event');
  t('Add File');
  t('Add Landlibrary Resource');
  t('Add News');
  t('Add Page');
  t('Add Person');
  t('Contribute');
  t('Docs');
  t('Forms management');
  t('Log out');
  t('Mailing Lists');
  t('Sign in');

  return $menu_links;
}
