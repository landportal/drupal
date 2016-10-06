Rwanda LAND - Simple Land Portal CSV importer
=============================================

:URL: https://landportal.info/admin/structure/feeds/rwanda_land_simple_lp_csv_importer
:source code: https://github.com/landportal/drupal/tree/master/modules/landlibrary/importers/rwanda_land_simple_lp_csv_importer
:Author: Carlos Tejo-Alonso (based on the work of Antonella and Jules)

This importer is based on the Simple LP CSV importer



Workflow
========

- Populate the excel file
- Export as .csv (; separated)
- Open with editor (as Notepad++) and convert codification to "UTF-8 without BOM"
- Clean the plain text file for any strange characters

- Go to https://landportal.info/admin/modules
- Enable module Rwanda LAND - Simple Land Portal CSV importer
- Go to https://landportal.info/admin/people/create
- Create a user for the importer (importer_rwanda_land_simple_land_portal_csv) with the role "landportal editor"
- Go to http://landportal.info/import/ to start the import process