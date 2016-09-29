<?php
// $Id;

/**
 * @file
 *   IDS Import Module default parameters.
 */

//define('FEEDS_NODE_BATCH_SIZE', 50);

// TODO Query the database to see the available number. We now just set a large number in order not to limit results by this parameter.
define('IDS_IMPORT_GET_ALL_ITEMS', 1000000);

define('IDS_IMPORT_NUM_ASSETS', 1000);
define('IDS_IMPORT_AGE_NEW_ASSETS', 0);

define('IDS_IMPORT_IMPORT_DATA', 'all');
define('IDS_IMPORT_CREATE_USER', TRUE);
define('IDS_IMPORT_USER', 'IDS');
define('IDS_IMPORT_USER_EMAIL','api@ids.ac.uk');

define('IDS_IMPORT_EXPIRE_PERIOD_ASSETS', FEEDS_SCHEDULE_NEVER);
define('IDS_IMPORT_EXPIRE_PERIOD_CATEGORIES', FEEDS_SCHEDULE_NEVER);
define('IDS_IMPORT_IMPORT_PERIOD_ASSETS', FEEDS_SCHEDULE_NEVER);
define('IDS_IMPORT_IMPORT_PERIOD_CATEGORIES', FEEDS_SCHEDULE_NEVER);

define('IDS_IMPORT_IMPORT_CATEGORIES', TRUE);
define('IDS_IMPORT_LEVELS_CATEGORIES', '1|2');

define('IDS_IMPORT_IMPORTER_DOCUMENTS', 'ids_documents_importer');
define('IDS_IMPORT_IMPORTER_ORGANISATIONS', 'ids_organisations_importer');
define('IDS_IMPORT_IMPORTER_REGIONS', 'ids_regions_importer');
define('IDS_IMPORT_IMPORTER_THEMES', 'ids_themes_importer');
define('IDS_IMPORT_IMPORTER_SUBJECTS', 'ids_subjects_importer');
define('IDS_IMPORT_IMPORTER_COUNTRIES', 'ids_countries_importer');

define('IDS_IMPORT_DOCUMENTS_TYPE', 'ids_document');
define('IDS_IMPORT_ORGANISATIONS_TYPE', 'ids_organisation');
define('IDS_IMPORT_REGIONS_VOCABULARY', 'ids_regions');
define('IDS_IMPORT_THEMES_VOCABULARY', 'ids_themes');
define('IDS_IMPORT_SUBJECTS_VOCABULARY', 'ids_subjects');
define('IDS_IMPORT_COUNTRIES_VOCABULARY', 'ids_countries');

define('IDS_IMPORT_DOCUMENTS_FEED_TYPE', 'ids_documents_feed');
define('IDS_IMPORT_ORGANISATIONS_FEED_TYPE', 'ids_organisations_feed');
define('IDS_IMPORT_REGIONS_FEED_TYPE', 'ids_regions_feed');
define('IDS_IMPORT_THEMES_FEED_TYPE', 'ids_themes_feed');
define('IDS_IMPORT_SUBJECTS_FEED_TYPE', 'ids_subjects_feed');
define('IDS_IMPORT_COUNTRIES_FEED_TYPE', 'ids_countries_feed');






