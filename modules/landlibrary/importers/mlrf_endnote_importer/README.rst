Mekong Land Research Forum importer
===================================

:URL: https://landportal.info/admin/structure/feeds/mlrf_endnote_importer
:source code: https://github.com/landportal/drupal/tree/master/modules/landlibrary/importers/mlrf_endnote_importer
:Author: Carlos Tejo-Alonso


Information
-----------
The source file is a EndNote file from http://rcsd.soc.cmu.ac.th/mlrf/?q=search/export/xml

EndNote Library XML specifications (DTD)
http://endnote.com/support/helpdocs/endnote.zip 


Workflow 
--------
- Go to https://landportal.info/admin/modules
- Enable module "Mekong Land Research Forum - EndNote importer"
- Go to https://landportal.info/admin/people/create
- Create a user for the importer (importer_mlrf_endnote) with the role "landportal editor"
- Go to http://landportal.info/import/ to start the import process


Files imported
--------------
- 20160923 - Biblio-EndNote.xml

Notes
-----

In the tamper for matching the publisher, the characters '(' and ')' has been modified (t o'\(' ), 
due to the use of preg_replace PHP function by the multiple replace tamper plugin 
https://www.drupal.org/node/1525540
http://php.net/manual/function.preg-replace.php