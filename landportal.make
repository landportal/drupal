#
# Landportal drush make file
#
# This file list contrib modules that are at their latest version
#
# Author: Jules Clement <jules.clement@landportal.info>
#
core: 7.x
api: 2
# defaults:
#   projects:
#     subdir: "sites/all/modules"
projects:
  - addtoany
  - admin_menu
  - admin_views
  - apachesolr
#  - apachesolr_views
  - auto_entitylabel
  - better_formats
  - block_class
  - calendar
  - captcha
  - ckeditor
  - complete_profile
  - computed_field
  - context
  - ctools
  - custom_pub
  - date
  - disable_messages
  - draggableviews
  - ds
  - elysia_cron
  - email
  - entity
  - entity_embed
  - entity_translation
  - entityconnect
  - entityreference
  - entityreference_feeds
  - entityreference_filter
  - entityreference_prepopulate
  - extlink
  - facetapi
  - facetapi_collapsible
  - features
  - features_extra
  - feeds
  - feeds_et
  - feeds_jsonpath_parser
  - feeds_oai_pmh
  - feeds_tamper_conditional
  - feeds_tamper_php
  - feeds_tamper_string2id
  - feeds_xpathparser
  - field_collection
  - field_collection_fieldset
  - field_group
  - field_tools
  - field_validation
  - file_entity
  - global_filter
  - google_adwords
  - google_analytics
  - honeypot
  - hybridauth
  - i18n
  - i18nviews
  - job_scheduler
  - libraries
  - link
  - linkchecker
  - location
  - login_one_time
  - logintoboggan
  - mailchimp
  - masquerade
  - media
  - media_ckeditor
  - metatag
  - module_filter
  - node_edit_protection
  - oauth
  - og
  - og_menu
  - pathauto
  - pcp
  - phpwkhtmltopdf
  - print
  - recaptcha
  - references
  - restws
  - rules
  - rules_autotag
  - save_draft
  - search_api
  - search_api_solr
  - services
  - session_cache
  - sparql
  - strongarm
  - synonyms
  - taxonomy_edge
  - term_authoring_info
  - term_merge
  - term_search
  - title
  - token
  - uuid
  - uuid_features
  - uuid_redirect
  - variable
  - vertical_tabs_responsive
  - video_filter
  - views
  - views_bootstrap
  - views_bulk_operations
  - views_contextual_filters_or
  - views_distinct
  - views_php
  - views_term_path
  - views_tree
  - webform
  - xmlsitemap

includes:
  - "landportal-custom.make"
