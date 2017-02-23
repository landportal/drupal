Rural21 - Simple Land Portal CSV importer
=========================================

:URL: https://landportal.info/admin/structure/feeds/rural21_simple_land_portal_csv_importer
:source code: https://github.com/landportal/drupal/tree/master/modules/landlibrary/importers/rural21_simple_land_portal_csv_importer
:Author: Carlos Tejo-Alonso (based on the work of Antonella and Jules)

This importer is based on the Simple LP CSV importer



Workflow
========

- Populate the excel file
- Export as .csv (; separated)
- Open with editor (as Notepad++) and convert codification to "UTF-8 without BOM"
- Clean the plain text file for any strange characters

- Go to https://landportal.info/admin/modules
- Enable module Rural21 - Simple Land Portal CSV importer
- Go to https://landportal.info/admin/people/create
- Create a user for the importer (importer_rural212_simple_land_portal_csv) with the role "contributor"
- Go to http://landportal.info/import/ to start the import process