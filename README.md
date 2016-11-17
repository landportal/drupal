# Landportal Drupal (v7.x-2.2)

This repository contain the theme and modules used to setup the Landportal website.

Theme: landportal

Modules:
 - landbook
 - landdebate
 - landlibrary
 - landlibrary_rdfext

Features (in modules/features/):
 - landlibrary
 - landportal/
   - taxonomy
   - homepage
   - extra
   - field_base
   - content_types

Original work for the new Landportal version (as of 2014) and development of the Landbook was made by WESO (http://github.com/weso) and SBC4D (http://sbc4d.com).
A Drupal refactoring have been done by Jules Clement (http://jcpc.ker.bz) late 2014.
The Landlibrary "module" / part have been added by Agroknow in June 2015.

## Versions

- 1.x: pre-September 2014
- 2.0: New site release (WESO), September 2014
- 2.1-pre: Refactoring, January 2015
- 2.1: Land Library release (Agroknow), April/Mai 2015
- 2.2: LandCommunity release, Sept. 2015
    add better management/views for Administration, Organizations,
    User & profiles. Land Library breakup in multiple features.
    Small visual and code cleanup.
- 2.3: Late 2015/early 2016
    Lot of cleanup, news views and content types for future landbook
    developments, land library getting more and more properly
    integrated.
    Few improvements to user accounts and profiles as well as organizations.
    
# Installation

See INSTALL.md for virtualhost / website deployment

## Environment

Aside of the Drupal 7.x install you need to have the following services accessible:
 - DB: mysql, postgresql, virtuoso
 - Caching: memcached
 - Search: SOLR
   with the following 'entry point' configured
   - library
   - drupal
And eventually (might be depreciated)
 - Landportal services: api, receiver
 - Web based service: CKAN, Wesby (by WESO)

Refer to the LandPortal Drupal developer documentation for further details.


# Components

## Theme

Implements the Landportal design.

## Modules

There is 4 'main' modules
- landbook
- landlibrary
- landdebate
- landcommunity

### landbook

Before enabling this module, you need to have a dump of the 'landportal/landbook'
database up and running.
You also need to configure it in the drupal settings or dbconfig.php as follow:
```
$databases['default']['landbook'] = array(
	'driver' => 'mysql',
	'database' => 'landportal',
	'username' => 'USERNAME',
	'password' => 'USERPASS',
	'host' => 'localhost',
	'port' => '',
	'prefix' => ''
);
```
### landlibrary

AK landlibrary

### landdebate

Provide views and blocks for the landdebate sections of the portal.

### landcommunity

Provide base fields for organizations, users, profile...
Holds content_type definition for organization, main (public) profile.

## Other modules / Features

### landportal_admin

Provide specialized (to LP), administrative views & helpers for the Landportal.

### landportal_base

Provide basic fields, permissions and settings for LP-like portal.
Can be used without much dependancies (landportal_taxonomy?)

### landportal_content_types (DEPREC as of 2.2)

Base Landportal content types

### landportal_extra (DEPREC as of 2.2)

Pulls dependencies for the landportal base modules and theme.
Set default configuration for menus and few other things.
This module should be enabled first.

### landportal_homepage

Provides views and configuration for the landing page.
(Future DEPREC? > merge in base?)

Each of them holds specific
 - landportal_taxonomy
 - landportal_field_base
 - landportal_content_type

### landportal_taxonomy

Contains LP base taxonomies (topics, countries, regions,
organization_types, etc...) and their default settings.

# More information

You can find some more details on the Landportal infrastructures and services in the handbooks.
 - the Editor one on how to manage the landportal website
 - the Administrator one about the Landportal stack and environment.

## Author

Jules Clement <jules@ker.bz> - Sept. 2015

## License
This software project is under MIT license (see LICENSE)

