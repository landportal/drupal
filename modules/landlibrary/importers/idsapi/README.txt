IDS API Module
--------------

This module provides a Drupal 7 interface for the Institute for Development Studies (IDS)'s Open API (http://api.ids.ac.uk/).
The goal of the module is to allow retrieving data from the IDS Collections (Eldis and Bridge) for use within a Drupal site.

* Setup *

- Install this module in the usual manner.
- Get an API key from IDS (http://api.ids.ac.uk/accounts/login/) and enter it in the module's configuration page:
  '/admin/config/services/idsapi'.
- Optionally, configure additional settings (default dataset, default number of items retrieved, cache time).
  Please note that the module is designed to cache API responses in order to minimise external calls.
  The module handles paged responses (overriding the API's default number of items).

* Examples * 

-   Examples of uses are included in: idswrapper/examples.php

* Instructions *

- API calls are implemented through the class IdsApiRequest (idswrapper.wrapper.inc).
- Items retrieved are made available to Drupal by an object of class IdsApiResponse (idsapi.response.inc), which includes
  the total number of items retrieved and an array of objects retrieved implemented by subclasses of IdsApiObject (for instance:
  IdsApiObjectAssetDocument, IdsApiObjectAssetOrganisation, etc.).
- Check the parameters and types of requests supported by the API at: http://api.dev.ids.ac.uk/docs/functions/
- Please note that currently the module supports only 'search', 'get' and 'get_all' queries.

IDS Import Module
-----------------

This module allows to use the IDS API and Feeds modules to use the IDS API in order to import content into Drupal's database.
IDS documents and organisations are imported as Drupal nodes, while IDS regions, countries, themes (and also keywords and authors)
are imported as Drupal taxonomy terms.

* Setup *

- Install this module in the usual manner. Please note that this modules requires the IDS API module to be installed and
  configured (with a valid API key).
  This module requires Drupal 7 versions of the Feeds (http://drupal.org/project/feeds) and Date (http://drupal.org/project/date) modules.
- Several of the modules' options can be set up and are explained in the module's configuration page (/admin/config/services/idsapi_feeds).
- WARNING At the moment the Import Module requires Feeds version 7.x-2.0-alpha9 (https://www.drupal.org/node/2507273) 
  The Beta verson of Feeds included a major rewrite of the FeedsImporter class removing the shedule method that the Import Module calls. 

* Instructions *

- Assets (documents and organisations) and categories (regions, themes and countries) can be set to be imported periodically
  and can also be imported manually, from the module's configuration page (admin/config/services/idsimport).
- When the module is installed and enabled content types and vocabularies are created for IDS assets and categories.
  They are available at '/admin/structure/types' and '/admin/structure/taxonomy', respectively.
- By default a new Drupal user is also created, which is used as author of the imported content.

* Additional information *

- The module implements a number of Feeds plugins (fetchers, parsers and processors) and attaches them to Feeds importers that are used
  for each type of imported content (documents, organisations, regions, themes, countries).
  The Feeds importers created are available at 'admin/structure/feeds'.
- The module implements default instances (nodes) of Feeds importers for documents, organisations, regions, themes  and countries,
  with their corresponding content types.
  The default Feeds importers can be edited and new importers can be created with different configurations (overriding the module's
  defaults configurations). For instance, this could be needed if documents and organisations want to be imported with different
  frequencies, but for most uses the settings available from the module's configuration page should be enough.
  Experienced users might also want to change the node's content type definitions and the default mappings in the Feeds's
  processors (for instance, if you want to created a type of node that includes only some of the documents' fields).
  In case you want to change the default Feeds settings or create new Feeds importers, please read the Feeds module's documentation:
  http://drupal.org/node/622696
 
IDS Views Module
----------------

This module allows to query the IDS collection of documents and organisations and display them using the Views module.

* Setup *

- Install this module in the usual manner. Please note that this modules requires the IDS API module to be installed and
  configured (with a valid API key), as well as the Views module.

* Instructions *

- When the module is enabled, a Views query plugin and a series of basic field, filter and sort handlers and made available.
  This means that new Views can be created incorporating IDS documents and/or organisations retrieved via the API.
- The module makes available in Views all of the documents and organisations fields (http://api.ids.ac.uk/docs/objects/) as well as
  all of the general and document and organisation-specific query fields (as filters) (http://api.ids.ac.uk/docs/functions/search/).
  Sorting is also implemented based on the functionalities provided by the API (http://api.ids.ac.uk/docs/functions/search/#sorting).
- The easiest way to use this module might be to take the default views that are created when the module is installed and modify them
  to suit your needs. These views ('IDS Documents View' and 'IDS Organisations View') are available at 'admin/structure/views'.
  These views implement a number of pages:
  /eldis-documents-list
  /eldis-documents
  /bridge-documents-list
  /bridge-documents
  and 
  /eldis-organisations-list
  /eldis-organisations, 
  respectively.
- These views also make available two blocks with exposed filters that allow to query the IDS documents and organisations.
  Changing the filters that are exposed, customised search blocks can be easily implemented.

---------------------------------------------------------------------------------------------------------------------------------
These modules were developed in 2012 by Pablo Accuosto (accuosto@gmail.com) for the Institute of Development Studies (IDS).

