# Landportal Drupal Install

Here are the steps required to deploy the 'Landportal' theme and
modules.
See also the Drupal developer documentation at
https://docs.google.com/document/d/1TF8s7_ZLaaAgYE7wvI4L-YZG9S0neiqvzvn-ZTl-e8o/edit#heading=h.v8i2zww174uj
for more details.

## Get code

Checkout the latest version from GIT (master = production)
```
cd /etc/drupal/7/sites/
git clone https://github.com/landportal/drupal [SITENAME]
```

## Setup site

Then you need to configure the site.
Copy / create the following files in /etc/drupal/7/sites/[SITENAME]

- baseurl.php
```
cat /etc/drupal/7/sites/[SITENAME]/baseurl.php
<?php
$base_url = 'http://landportal'
```
- local.settings.php
```
\# in /etc/drupal/7/sites/[SITENAME]/local.settings.php
$conf['file_public_path']  = 'sites/[SITENAME]/files';
$conf['file_private_path'] = 'sites/[SITENAME]/private';
$conf['file_temporary_path'] = '/tmp';
\#...
```

- dbconfig.php (required)
```
\# in /etc/drupal/7/sites/[SITENAME]/dbconfig.php
$databases['default']['default']  = array( ... );
$databases['default']['landbook'] = array( ... );
\#...
```
- settings.php


Create a symbolic link to "files" & "private" in your site
directory ( /etc/drupal/7/sites/[SITENAME] )




### Web server / Apache

Configure your Web server to handle [SITENAME] with Drupal7.
Typically, under Debian this should look like:
```
<VirtualHost *:80> # or 443 for SSL
    ...
    DocumentRoot /usr/share/drupal7
    <Directory /usr/share/drupal7/>
        ...
    </Directory>
    ...
</VirtualHost>
```
## Drush

This is Drupal's command line companion.
```
cat /etc/drush/drushrc.php 
<?php
$options['l'] = '[SITENAME]';
```


## Drupal

### Install require modules

use drush make files (landportal.make and landportal-custom.make) to
install all the modules required by the website.


### Bootstrap/Backup LP

Push a dump of LP's DB in mysql (optionnal)
```
mysql [YOURDB] < _MYSITE_mysqldump.sql
```

Help Drupal reset some internal stuff (cache, registry...)
```
cd /usr/share/drupal7/
drush -l [SITENAME] rr
drush -l [SITENAME] cc all
```

### New site

If you want to 'start' from scratch (for dev, testing, or rebuilding a
Landportal of your own, reuse some modules...)
Once you have the code deployed and the Virtualhost running:
- Create a database for the drupal instance.
- Configure [...]drupal7/sites/HOSTNAME/dbconfig.php and
  local.settings.php accordingly
- Run the default drupal install process(?)
  http://HOSTNAME/install.php
- Enable and set default theme to landportal
- Enable modules as you see fit.

# About

See also: README.md

## Author

Jules Clement <jules@ker.bz> - Sept. 2015
