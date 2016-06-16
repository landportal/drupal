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
  mailchimp:
    version: "2.12"
  ckeditor:
    # Dev version otherwise there is a bug with Media modules, see:
    # https://www.drupal.org/node/2121253
    # https://www.drupal.org/node/2455391
    # https://www.drupal.org/node/2454933
    version: "1.x-dev"
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
      - "https://www.drupal.org/files/issues/multiple_replace-1525540-7.patch"
  feeds_oai_pmh:
    version: "1.x-dev"
    patch:
      - "https://www.drupal.org/files/issues/2383997-7.patch"
  jquery_update:
    version: "3.0-alpha3"
  rdf_indexer:
    version: ~
    patch:
      - "https://www.drupal.org/files/issues/rdf_indexer-add_virtuoso_support-2029717-15.patch"

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
      type: "file"
      url: "http://apidocs.mailchimp.com/api/downloads/mailchimp-api-class.zip"
      # V2 API
      # type: "git"
      # url: "https://bitbucket.org/mailchimp/mailchimp-api-php.git"
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
