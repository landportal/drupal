#
# Landportal drush make file
#
# This file contains contrib modules required by the Landportal
#  at specific versions, with patches etc...
#
# Also pull libraries
#
# Author: Jules Clement <jules.clement@landportal.info>
#
core: 7.x
api: 2
# defaults:
#   projects:
#     subdir: "sites/all/modules"
projects:
  entityreference_view_widget:
    patch:
      - "https://www.drupal.org/files/issues/entityreference_view_widget_suffix-2524296-2.patch"
  drupal:
    patch:
      - "https://github.com/landportal/drupal/files/766584/change-dc-to-dct.txt"
	  - "https://github.com/landportal/drupal/files/876566/no-callback-in-RDFa.txt"
  profile2:
    version: ~
    patch:
      - "https://www.drupal.org/files/issues/profile2--inherit-view_mode.patch"
  feeds_crawler:
    version: "2.x-dev"
  feeds_fetcher_directory:
    version: "2.0-beta5"
    patch:
      - "https://www.drupal.org/files/issues/Feeds_directory_fetcher-Fixed2_changing_file_mask_for_fetcher-2002244.patch"
  feeds_tamper:
    version: ~
    patch:
      - "https://www.drupal.org/files/issues/feeds_tamper-multiple_replace-1525540-11.patch"
      - "https://www.drupal.org/files/issues/feeds_tamper-2792585-3.patch"
  feeds_oai_pmh:
    version: "1.x-dev"
    patch:
      - "https://www.drupal.org/files/issues/2383997-7.patch"
  jquery_update:
    version: "3.0-alpha3"
  link:
    version: ~
    patch:
      - "https://www.drupal.org/files/issues/validate_url-2299657-46.patch"
  mailchimp:
    version: "2.13"
  rdfx:
    download:
      type: "git"
      url: "https://github.com/landportal/rdfx"
      tag: "7.x-2.0-alpha5"
  rdf_indexer:
    download:
      type: "git"
      url: "https://github.com/landportal/rdf_indexer"
      tag: "7.x-1.x-alpha1"
  context_og:
    patch:
      - "https://www.drupal.org/files/issues/context_og-reaction_fail-2147405-5.patch"

libraries:
  jsonpath:
    download:
      type: "file"
      url: "https://storage.googleapis.com/google-code-archive-downloads/v2/code.google.com/jsonpath/jsonpath-0.8.1.php"
      #url: "http://jsonpath.googlecode.com/svn/trunk/src/php/jsonpath.php"
  arc:
    subdir: "ARC2"
    download:
      type: "git"
      url: "https://github.com/semsol/arc2.git"
    # patch:
    #   - "XXXXX"
  mailchimp:
    download:
      # V1 API
#      type: "file"
#      url: "http://apidocs.mailchimp.com/api/downloads/mailchimp-api-class.zip"
      # V2 API
      #type: "git"
      #url: "https://bitbucket.org/mailchimp/mailchimp-api-php.git"
      # MC V3 API - library v1.0.4
      type: "file"
      url: "https://github.com/thinkshout/mailchimp-api-php/archive/v1.0.4.zip"
  hybridauth:
    download:
      type: "git"
      url: "https://github.com/hybridauth/hybridauth"
  ckeditor:
    download:
      type: "file"
      url: "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.5.4/ckeditor_4.5.4_full.zip"
  chosen:
    download:
      type: "file"
      url: "https://github.com/harvesthq/chosen/releases/download/v1.1.0/chosen_v1.1.0.zip"
  lbvis:
    download:
      type: "git"
      url: "https://github.com/landportal/js-view-coda"
  dompdf:
    download:
      type: "file"
      url: "https://github.com/dompdf/dompdf/releases/download/v0.6.2/dompdf-0.6.2.zip"
