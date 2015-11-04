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
  feeds:
    version: "2.0-beta1" #2.0-alpha8+85-dev"
  feeds_crawler:
    version: "2.x-dev"
  feeds_fetcher_directory:
    version: "2.0-beta5"
  feeds_tamper:
    version: ~
    patch:
      - "https://www.drupal.org/files/issues/multiple_replace-1525540-7.patch"

libraries:
  jsonpath:
    download:
      type: "file"
      url: "http://jsonpath.googlecode.com/svn/trunk/src/php/jsonpath.php"
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
