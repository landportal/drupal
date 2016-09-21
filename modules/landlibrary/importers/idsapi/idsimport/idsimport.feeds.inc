<?php
// $Id;

/* --------------------------------- Fetchers --------------------------------- */
/**
 * IdsContentFetcherResult Class
 */
class IdsContentFetcherResult extends FeedsFetcherResult {

  // Object of type IdsApiResponse that holds the results of the API call.
  public $ids_api_response;

 /**
  * Constructor. Makes the call to the IDS API.
  */
  public function __construct($fetcher) {
    $this->ids_api_response = $fetcher->ids_api_wrapper->makeRequest();
  }

}

/*
 * IdsAssetsFetcher Class
 */
class IdsAssetsFetcher extends FeedsFetcher {

  // Object of type IdsApiWrapper that performs the API request.
  public $ids_api_wrapper;

  /**
   * Overrides parent::__construct().
   */
  public function __construct() {
    $this->ids_api_wrapper = new IdsApiWrapper();
    $this->ids_api_wrapper->setApiKey(variable_get('idsapi_api_key', ''));
    $this->ids_api_wrapper->setSite(variable_get('idsimport_default_dataset', IDS_API_DEFAULT_DATASET));
    $this->ids_api_wrapper->setNumRequested(variable_get('idsimport_number_assets', IDS_IMPORT_NUM_ASSETS));
    $this->ids_api_wrapper->setAgeResults(variable_get('idsimport_age_new_assets', IDS_IMPORT_AGE_NEW_ASSETS));
    $this->ids_api_wrapper->setFormat('full');
    if ($query_string = variable_get('idsimport_query_string')) {
      $this->ids_api_wrapper->setQueryString($query_string);
    }
  }

  /**
   * Overrides parent::fetch().
   */
  public function fetch(FeedsSource $source) {
    $this->ids_api_wrapper->setObjectType($this->config['asset_type']);
    $fetcher_result = new IdsContentFetcherResult($this);
    return $fetcher_result;
  }
  
  /**
   * Override parent::configDefaults().
   */
  public function configDefaults() {
    return array(
      'asset_type' => 'documents',
    );
  }

  /**
   * Override parent::configForm().
   */
  public function configForm(&$form_state) {
    $form = array();
    $form['asset_type'] = array(
      '#title' => t('Type of asset'),
      '#type' => 'select',
      '#options' => array(
        'documents' => t('Documents'),
        'organisations' => t('Organisations'),
       ),
      '#required' => TRUE,
      '#default_value' => $this->config['asset_type'],
      '#description' => t('Please indicate the type of asset that you want to import.'),
    );
    return $form;
  }

}

/*
 * IdsCategoriesFetcher Class
 */
class IdsCategoriesFetcher extends FeedsFetcher {

  public $ids_api_wrapper;

  /**
   * Overrides parent::__construct().
   */
  public function __construct() {
    $this->ids_api_wrapper = new IdsApiWrapper();
    $this->ids_api_wrapper->setApiKey(variable_get('idsapi_api_key', ''));
    $this->ids_api_wrapper->setSite(variable_get('idsimport_default_dataset', IDS_API_DEFAULT_DATASET));
    $this->ids_api_wrapper->setFormat('full');
    if ($query_string = variable_get('idsimport_query_string')) {
      $this->ids_api_wrapper->setQueryString($query_string);
    }
  }

  /**
   * Overrides parent::fetch().
   * Note: The defined default dataset is used.
   */
  public function fetch(FeedsSource $source) {
    $this->ids_api_wrapper->setObjectType($this->config['category_type']);
    if (($this->config['category_type'] == 'themes') || ($this->config['category_type'] == 'subjects') || ($this->config['category_type'] == 'regions')) {
      if ($levels = variable_get('idsimport_levels_categories')) {
        $this->ids_api_wrapper->setParam('level', $levels);
      }
    }
    $fetcher_result = new IdsContentFetcherResult($this);
    return $fetcher_result;
  }
  
  /**
   * Override parent::configDefaults().
   */
  public function configDefaults() {
    return array(
      'category_type' => 'themes',
    );
  }

  /**
   * Override parent::configForm().
   */
  public function configForm(&$form_state) {
    $form = array();
    $form['category_type'] = array(
      '#title' => t('Type of category'),
      '#type' => 'select',
      '#options' => array(
        'themes' => t('Themes'),
        'subjects' => t('Subjects'),
        'regions' => t('Regions'),
        'countries' => t('Countries'),
       ),
      '#required' => TRUE,
      '#default_value' => $this->config['category_type'],
      '#description' => t('Please indicate the type of category that you want to import.'),
    );
    return $form;
  }

}

/* --------------------------------- Parsers --------------------------------- */

/*
 * IdsAssetsParser Class
 */
class IdsAssetsParser extends FeedsParser {

  /**
   * Defines mapping sources.
   */
  public function getMappingSources() {
    return array(
      'object_id' => array(
        'name' => t('Object ID'),
        'description' => t('ID of the object in the IDS collection.'),
      ),
      'object_type' => array(
        'name' => t('Object Type'),
        'description' => t('Type of the object'),
      ),
      'title' => array(
        'name' => t('Title'),
        'description' => t('Title of the object'),
      ),
      'metadata_url' => array(
        'name' => t('Metadata URL'),
        'metadata_url' => t('URL with the IDS API metadata of the object'),
      ),
    );
  }

  /**
   * Calls the fetcher and parses the results.
   */
  public function parse(FeedsSource $source, FeedsFetcherResult $fetcher_result) {
    $result = new FeedsParserResult();
    $response = $fetcher_result->ids_api_response;
    if ($response instanceof IdsApiResponse) {
      $results = $response->getResults();
      foreach($results as $asset) {
        $item = array(
          'object_id' => $asset->object_id,
          'object_type' => $asset->object_type,
          'title' => $asset->title,
          'metadata_url' => $asset->metadata_url,
        );
        $result->items[] = $item;
      }
    }
    return $result;
  }

}

/*
 * IdsDocumentsParser Class
 */
class IdsDocumentsParser extends FeedsParser {

  /**
   * Defines mapping sources.
   */
  public function getMappingSources() {
    return array(
      'object_id' => array(
        'name' => t('Object ID'),
        'description' => t('Unique identifier of this object (for example, A1417).'),
      ),
      'object_type' => array(
        'name' => t('Object type'),
        'description' => t('Type of object. (Document, Publication, Theme, Subject, Region, Country).'),
      ),
      'title' => array(
        'name' => t('Title'),
        'description' => t('Readable identifier of this object.'),
      ),
      'site' => array(
        'name' => t('Site'),
        'description' => t('Dataset (eldis or bridge).'),
      ),
      'metadata_url' => array(
        'name' => t('Metadata URL'),
        'description' => t('Web-accessible uri for this object.'),
      ),
      'timestamp' => array(
        'name' => t('Timestamp'),
        'description' => t('Indicates when record was indexed in the API.'),
      ),
      'website_url' => array(
        'name' => t('Website URL'),
        'description' => t('URL for the asset on the collection website.'),
      ),
      'name' => array(
        'name' => t('Name'),
        'description' => t('Name of the object.'),
      ),
      'asset_id' => array(
        'name' => t('Asset ID'),
        'description' => t('Asset identifier (for example, 12345).'),
      ),
      'date_created' => array(
        'name' => t('Date created'),
        'description' => t('Creation date. (Example: 2012-02-09 14:36:21). Date in which the object was added to the collection.'),
      ),
      'date_updated' => array(
        'name' => t('Date updated'),
        'description' => t('Modification date. (Example: 2012-02-09 14:36:21). Date in which the object was last modified.'),
      ),
      'category_theme_array' => array(
        'name' => t('Themes'),
        'description' => t('Thematic categories which apply to the document.'),
      ),
      'category_subject_array' => array(
        'name' => t('Subjects'),
        'description' => t('Subject categories which apply to the document.'),
      ),
      'category_region_array' => array(
        'name' => t('Regions'),
        'description' => t('Regions that apply to the document.'),
      ),
      'country_focus_array' => array(
        'name' => t('Countries'),
        'description' => t('Countries that apply to the document.'),
      ),
      'keywords' => array(
        'name' => t('Keywords'),
        'description' => t('Subject keywords that relate to the asset.'),
      ),
      'description' => array(
        'name' => t('Description'),
        'description' => t('Description of the document.'),
      ),
      'authors' => array(
        'name' => t('Authors'),
        'description' => t('Authors (First initial. Surname).'),
      ),
      'language_name' => array(
        'name' => t('Language'),
        'description' => t('The language in which the title, headline and description are written.'),
      ),
      'publication_date' => array(
        'name' => t('Publication date'),
        'description' => t('Year when the research document was first published.'),
      ),
      'publisher' => array(
        'name' => t('Publisher'),
        'description' => t('Name of the organisation that published the research.'),
      ),
      'publisher_id' => array(
        'name' => t('Publisher ID'),
        'description' => t('Object ID of the organisation that published the research.'),
      ),
      'licence_type' => array(
        'name' => t('Licence type'),
        'description' => t('Licence type.'),
      ),
      'document_type' => array(
        'name' => t('Document type'),
        'description' => t('Document type.'),
      ),
      'urls' => array(
        'name' => t('External URLs'),
        'description' => t('External URLs of the full text document.'),
      ),
      'headline' => array(
        'name' => t('Headline'),
        'description' => t('Headline or short description of title of the document.'),
      ),
    );
  }

  /**
   * Calls the fetcher and parses the results.
   */
  public function parse(FeedsSource $source, FeedsFetcherResult $fetcher_result) {
    $result = new FeedsParserResult();
    $response = $fetcher_result->ids_api_response;
    if ($response instanceof IdsApiResponse) {
      $results = $response->getResults();
      foreach($results as $asset) {
        $item = array(
          'object_id' => $asset->object_id,
          'object_type' => $asset->object_type,
          'title' => $asset->title,
          'site' => $asset->site,
          'metadata_url' => $asset->metadata_url,
          'timestamp' => $asset->timestamp,
          'website_url' => $asset->website_url,
          'name' => $asset->name,
          'asset_id' => $asset->asset_id,
          'date_created' => $asset->date_created,
          'date_updated' => $asset->date_updated,
          'category_theme_array' => $asset->category_theme_array,
          'category_subject_array' => $asset->category_subject_array,
          'category_region_array' => $asset->category_region_array,
          'country_focus_array' => $asset->country_focus_array,
          'keywords' => $asset->keywords,
          'description' => $asset->description,
          'authors' => $asset->authors,
          'language_name' => $asset->language_name,
          'publication_date' => $asset->publication_date,
          'publisher' => $asset->publisher,
          'publisher_id' => $asset->publisher_id,
          'licence_type' => $asset->licence_type,
          'document_type' => $asset->document_type,
          'urls' => $asset->urls,
        );
        $result->items[] = $item;
      }
    }
    return $result;
  }

}

/*
 * IdsOrganisationsParser Class
 */
class IdsOrganisationsParser extends FeedsParser {

  /**
   * Defines mapping sources.
   */
  public function getMappingSources() {
    return array(
      'object_id' => array(
        'name' => t('Object ID'),
        'description' => t('Unique identifier of this object (for example, A1417).'),
      ),
      'object_type' => array(
        'name' => t('Object type'),
        'description' => t('Type of object. (Document, Publication, Theme, Subject, Region, Country).'),
      ),
      'title' => array(
        'name' => t('Title'),
        'description' => t('Readable identifier of this object.'),
      ),
      'site' => array(
        'name' => t('Site'),
        'description' => t('Dataset (eldis or bridge).'),
      ),
      'metadata_url' => array(
        'name' => t('Metadata URL'),
        'description' => t('Web-accessible uri for this object.'),
      ),
      'timestamp' => array(
        'name' => t('Timestamp'),
        'description' => t('Indicates when record was indexed in the API.'),
      ),
      'website_url' => array(
        'name' => t('Website URL'),
        'description' => t('URL for the asset on the collection website.'),
      ),
      'name' => array(
        'name' => t('Name'),
        'description' => t('Name of the object.'),
      ),
      'asset_id' => array(
        'name' => t('Asset ID'),
        'description' => t('Asset identifier (for example, 12345).'),
      ),
      'date_created' => array(
        'name' => t('Date created'),
        'description' => t('Creation date. (Example: 2012-02-09 14:36:21). Date in which the object was added to the collection.'),
      ),
      'date_updated' => array(
        'name' => t('Date updated'),
        'description' => t('Modification date. (Example: 2012-02-09 14:36:21). Date in which the object was last modified.'),
      ),
      'category_theme_array' => array(
        'name' => t('Themes'),
        'description' => t('Thematic categories which apply to the organisation.'),
      ),
      'category_subject_array' => array(
        'name' => t('Subjects'),
        'description' => t('Subject categories which apply to the organisation.'),
      ),
      'category_region_array' => array(
        'name' => t('Regions'),
        'description' => t('Regions that apply to the organisation.'),
      ),
      'country_focus_array' => array(
        'name' => t('Countries'),
        'description' => t('Countries that apply to the organisation.'),
      ),
      'keywords' => array(
        'name' => t('Keywords'),
        'description' => t('Subject keywords that relate to the organisation.'),
      ),
      'description' => array(
        'name' => t('Description'),
        'description' => t('Description of the organisation.'),
      ),
      '$acronym' => array(
        'name' => t('Acronym'),
        'description' => t('Acronym of organisation.'),
      ),
      '$alternative_acronym' => array(
        'name' => t('Alternative acronym'),
        'description' => t('Alternative acronym of organisation.'),
      ),
      '$alternative_name' => array(
        'name' => t('Alternative name'),
        'description' => t('Alternative name of organisation.'),
      ),
      '$organisation_type' => array(
        'name' => t('Organisation type'),
        'description' => t('Primary function or role of the organisation in relation to international development.'),
      ),
      '$organisation_url' => array(
        'name' => t('Organisation URL'),
        'description' => t('Link to the organisation website.'),
      ),
      '$location_country' => array(
        'name' => t('Location country'),
        'description' => t('Country where the organisation is located.'),
      ),
    );
  }

  /**
   * Calls the fetcher and parses the results.
   */
  public function parse(FeedsSource $source, FeedsFetcherResult $fetcher_result) {
    $result = new FeedsParserResult();
    $response = $fetcher_result->ids_api_response;
    if ($response instanceof IdsApiResponse) {
      $results = $response->getResults();
      foreach($results as $asset) {
        $item = array(
          'object_id' => $asset->object_id,
          'object_type' => $asset->object_type,
          'title' => $asset->title,
          'site' => $asset->site,
          'metadata_url' => $asset->metadata_url,
          'timestamp' => $asset->timestamp,
          'website_url' => $asset->website_url,
          'name' => $asset->name,
          'asset_id' => $asset->asset_id,
          'date_created' => $asset->date_created,
          'date_updated' => $asset->date_updated,
          'category_theme_array' => $asset->category_theme_array,
          'category_subject_array' => $asset->category_subject_array,
          'category_region_array' => $asset->category_region_array,
          'country_focus_array' => $asset->country_focus_array,
          'keywords' => $asset->keywords,
          'description' => $asset->description,
          '$acronym' => $asset->acronym,
          '$alternative_acronym' => $asset->alternative_acronym,
          '$alternative_name' => $asset->alternative_name,
          '$organisation_type' => $asset->organisation_type,
          '$organisation_url' => $asset->organisation_url,
          'location_country' => $asset->location_country,
        );
        $result->items[] = $item;
      }
    }
    return $result;
  }

}

/*
 * IdsCategoriesParser Class
 */
class IdsCategoriesParser extends FeedsParser {

  public function getMappingSources() {
    return array(
      'name' => array(
        'name' => t('Name'),
        'description' => t('Name of the category.'),
      ),  
      'title' => array(
        'name' => t('Title'),
        'description' => t('Title of the category.'),
      ),    
      'category_id' => array(
        'name' => t('Category ID'),
        'description' => t('ID of the category in the IDS collection.'),
      ),
      'cat_parent' => array(
        'name' => t('Parent category'),
        'description' => t('ID of the parent category in this vocabulary.'),
      ),
      'cat_superparent' => array(
        'name' => t('Root category'),
        'description' => t('ID of the root category in this vocabulary.'),
      ),
      'site' => array(
        'name' => t('Site'),
        'description' => t('Name of the collection to which this category belongs.'),
      ),
      'website_url' => array(
        'name' => t('Website URL'),
        'description' => t('Link to the region page on the site URL, where applicable.'),
      ),
      'metadata_url' => array(
        'name' => t('Metadata URL'),
        'description' => t('Web-accessible IDS API URI for this object.'),
      ),
      'object_id' => array(
        'name' => t('Object ID'),
        'description' => t('Unique identifier of this object in the IDS collection.'),
      ),
      'object_type' => array(
        'name' => t('Object Type'),
        'description' => t('The type of the category in the IDS collection.'),
      ),
      'timestamp' => array(
        'name' => t('Timestamp'),
        'description' => t('Indicates when record was indexed in the IDS collection. Timestamp is in ISO 8601 format: YYYY-MM-DD hh:mm:ss.'),
      ),
      'archived' => array(
        'name' => t('Archived'),
        'description' => t('Indicates if the category is archived. Archived categories are not imported as taxonomy terms.'),
      ),
    );
  }

  /**
   * Call the fetcher and parses the results.
   */
  public function parse(FeedsSource $source, FeedsFetcherResult $fetcher_result) {
    $result = new FeedsParserResult();
    $response = $fetcher_result->ids_api_response;
    if ($response instanceof IdsApiResponse) {
      $results = $response->getResults();
      foreach($results as $category) {
        $item = array(
          'name' => $category->name,
          'title' => $category->title,
          'category_id' => $category->category_id,
          'cat_superparent' => $category->cat_superparent,
          'parent_object_id' => $category->parent_object_id,
          'site' => $category->site,
          'website_url' => $category->website_url,
          'metadata_url' => $category->metadata_url,
          'object_id' => $category->object_id,
          'object_type' => $category->object_type,
          'timestamp' => $category->timestamp,
        );
        if (isset($category->archived) && ($category->archived === 'true')) {
          $item['archived'] = 1;
        }
        else {
          $item['archived'] = 0;
        }
        if (($category->cat_parent == 1) || ($category->cat_parent == 2)){
          $item['cat_parent'] = 0;
        }
        else {
          $item['cat_parent'] = $category->cat_parent;
        }
        $result->items[] = $item;
      }
    }
    return $result;
  }

}

/*
 * IdsCountriesParser Class
 */
class IdsCountriesParser extends FeedsParser {

  /**
   * Defines mapping sources.
   */
  public function getMappingSources() {
    return array(
      'object_id' => array(
        'name' => t('Object ID'),
        'description' => t('Unique identifier of this object (for example, A1417).'),
      ),
      'object_type' => array(
        'name' => t('Object type'),
        'description' => t('Type of object. (Document, Publication, Theme, Subject, Region, Country).'),
      ),
      'title' => array(
        'name' => t('Title'),
        'description' => t('Readable identifier of this object.'),
      ),
      'site' => array(
        'name' => t('Site'),
        'description' => t('Dataset (eldis or bridge).'),
      ),
      'metadata_url' => array(
        'name' => t('Metadata URL'),
        'description' => t('Web-accessible uri for this object.'),
      ),
      'timestamp' => array(
        'name' => t('Timestamp'),
        'description' => t('Indicates when record was indexed in the API.'),
      ),
      'website_url' => array(
        'name' => t('Website URL'),
        'description' => t('URL for the asset on the collection website.'),
      ),
      'name' => array(
        'name' => t('Name'),
        'description' => t('Name of the country.'),
      ),
      'alternative_name' => array(
        'name' => t('Alternative name'),
        'description' => t('Alternative name of the country.'),
      ),
      'asset_id' => array(
        'name' => t('Asset ID'),
        'description' => t('Country identifier (for example, 12345).'),
      ),
      'iso_number' => array(
        'name' => t('ISO number'),
        'description' => t('ISO number. Example: 50 (Bangladesh).'),
      ),
      'iso_three_letter_code' => array(
        'name' => t('ISO three-letter code'),
        'description' => t('ISO three-letter code. Example: BGD (Bangladesh).'),
      ),
      'iso_two_letter_code' => array(
        'name' => t('ISO two-letter code'),
        'description' => t('ISO two-letter code. Example: BD (Bangladesh).'),
      ),
      'category_region_array' => array(
        'name' => t('Regions'),
        'description' => t('Regions to which this country belongs..'),
      ), 
    );
  }

  /**
   * Calls the fetcher and parses the results.
   */
  public function parse(FeedsSource $source, FeedsFetcherResult $fetcher_result) {
    $result = new FeedsParserResult();
    $response = $fetcher_result->ids_api_response;
    if ($response instanceof IdsApiResponse) {
      $results = $response->getResults();
      foreach($results as $country) {
        $item = array(
          'object_id' => $country->object_id,
          'object_type' => $country->object_type,
          'title' => $country->title,
          'site' => $country->site,
          'metadata_url' => $country->metadata_url,
          'timestamp' => $country->timestamp,
          'website_url' => $country->website_url,
          'name' => $country->name,
          'alternative_name' => $country->alternative_name,
          'asset_id' => $country->asset_id,
          'iso_number' => $country->iso_number,
          'iso_three_letter_code' => $country->iso_three_letter_code,
          'iso_two_letter_code' => $country->iso_two_letter_code,
          'category_region_array' => $country->category_region_array,  
        );
        $result->items[] = $item;
      }
    }
    return $result;
  }

}

/* --------------------------------- Processors -------------------------------- */

/*
 * IdsAssetsProcessor Class
 */
class IdsAssetsProcessor extends FeedsNodeProcessor {

  public $parsed_items;

  /**
   * Make hash and newItemInfo methods public
   */
  public function generateHash($item) {
    return $this->hash($item);
  }

  public function newIdsItemInfo($entity, $feed_nid, $hash) {
    $this->newItemInfo($entity, $feed_nid, $hash);
  }

  /**
   * Allows to override default author.
   */
  public function setAuthor($uid) {
    $this->config['author'] = $uid;
  }

  /**
   * Allows to override default expire period.
   */
  public function setExpirePeriod($period) {
    $this->config['expire'] = $period;
  }

  /**
   * Override parent::configForm().
   */
  public function configForm(&$form_state) {
    $form = parent::configForm($form_state);
    $author_id = $this->config['author'];
    $author = user_load($author_id);
    $form['author'] = array(
      '#type' => 'textfield',
      '#title' => t('Author'),
      '#description' => t('Imported IDS content will be assigned to this user. If the user does not exist, it will be created.'),
      '#autocomplete_path' => 'user/autocomplete',
      '#default_value' =>  empty($author->name) ?  'anonymous' : check_plain($author->name),
    );
    $form['expire'] = array(
      '#title' => t('Expire content'),
      '#type' => 'select',
      '#options' => array(
        '-1' => t('Never'),
        '3600' => t('After one hour'),
        '10800' => t('After three hours'),
        '21600' => t('After six hours'),
        '43200' => t('After twelve hours'),
        '86400' => t('After one day'),
        '259200' => t('After three days'),
        '604800' => t('After one week'),
        '2592000' => t('After one month'),
        '7776000' => t('After three months'),
        '15552000' => t('After six months'),
        '31536000' => t('After one year'),
       ),
      '#default_value' => $this->config['expire'],
      '#description' => t('Select after how much time imported IDS content should expire and be deleted from the database.'),
    );
    return $form;
  }

  /**
   * Override parent::configDefaults().
   */
  public function configDefaults() {
    $author = variable_get('idsimport_new_user_id', 0);
    $expire = variable_get('idsimport_expire_period_assets', IDS_IMPORT_EXPIRE_PERIOD_ASSETS);
    return array(
      'author' => $author,
      'expire' => $expire,
    ) + parent::configDefaults();
  }

  /**
   * Override parent::configFormValidate().
   */
  public function configFormValidate(&$values) {
    $author_name = $values['author'];
    $author_id = idsimport_new_user($author_name);
    $values['author'] = $author_id;
    $expire_period = $values['expire'];
    variable_set('idsimport_new_user_id', $author_id);
    variable_set('idsimport_new_user', $author_name);
    variable_set('idsimport_expire_period_assets', $expire_period);
  }
  
  /**
   * Override parent::process().
   *
   * Processes the imported assets and updates the taxonomy hierarchy.
   */
  public function process(FeedsSource $source, FeedsParserResult $parser_result) {
    // Keep a copy of the parsed items (which are consumed in the processing).
    $this->parsed_items = $parser_result->items;
    parent::process($source, $parser_result);
  }
}

/*
 * IdsCategoriesProcessor Class
 */
class IdsCategoriesProcessor extends FeedsTermProcessor {

  /**
   * Override parent::process().
   */
  public function process(FeedsSource $source, FeedsParserResult $parser_result) {
    parent::process($source, $parser_result);
  }

  /**
   * Make hash and newItemInfo methods public
   */
  public function generateHash($item) {
    return $this->hash($item);
  }

  public function newIdsItemInfo($entity, $feed_nid, $hash) {
    $this->newItemInfo($entity, $feed_nid, $hash);
  }

}

/*
 * IdsCountriesProcessor Class
 */
class IdsCountriesProcessor extends IdsCategoriesProcessor {

  public $parsed_items;

  /**
   * Override parent::process().
   */
  public function process(FeedsSource $source, FeedsParserResult $parser_result) {
    $this->parsed_items = $parser_result->items;
    parent::process($source, $parser_result);
  }

}

