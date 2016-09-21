<?php

/**
 * IdsApiObject class.
 *
 * Objects of this class' inherited classes contain the information of assets (documents and organisations), categories (regions and themes)
 * and countries available in the IDS datasets.
 *
 */
class IdsApiObject {

  // Unique identifier of this object (for example, A1417)
  public $object_id;

  // Type of object. String. (Document, Publication, Theme, Region, Country).
  public $object_type;

  // Readable identifier of this object.
  public $title;

  // Dataset (eldis or bridge).
  public $site;

  // Web-accessible uri for this object 
  public $metadata_url;

  // Indicates when record was indexed in the API.
  public $timestamp;

  // URL for the asset on the collection website.
  public $website_url;

  // Name of the object.
  public $name;

  /**
   * Factory method used to create IdsApiObject objects, depending on its type.
   *
   * @return a new IdsApiObject object
   */
  // TODO: Check parameters. $format not used any more???
  public static function factory($object, $object_type) {
    switch ($object_type) {
      case 'assets':
        return new IdsApiObjectAsset($object);
      case 'documents':
        return new IdsApiObjectAssetDocument($object);
      case 'organisations':
        return new IdsApiObjectAssetOrganisation($object);
      case 'themes':
        return new IdsApiObjectCategory($object);
      case 'subjects':
        return new IdsApiObjectCategory($object);
      case 'regions':
        return new IdsApiObjectCategory($object);
      case 'countries':
        return new IdsApiObjectCountry($object);
      case 'country_count':
      case 'theme_count':
      case 'region_count':
      case 'subject_count':
      case 'keyword_count':
        return new IdsApiCount($object, $object_type);
      default:
        return new IdsApiObject($object);
    }
  }
 
  /**
   * Constructor.
   */
  public function __construct($object) {
    // Basic fields, present in all responses.
    if (isset($object['object_id'])) {
      $this->object_id = $object['object_id'];
    }
    if (isset($object['object_type'])) {
      $this->object_type = $object['object_type'];
    }
    if (isset($object['metadata_url'])) {
      $this->metadata_url = $object['metadata_url'];
    }
    // Additional properties common to all objects that might be present.
    if (isset($object['site'])) {
      $this->site = $object['site'];
    }
    if (isset($object['title'])) {
      $this->title = $object['title'];
    }
    if (isset($object['timestamp'])) {
      $this->timestamp = $object['timestamp'];
    }
    if (isset($object['website_url'])) {
      $this->website_url = $object['website_url'];
    }
    if (isset($object['name'])) {
      $this->name = $object['name'];
    }
    elseif (isset($object['object_name'])) {
      $this->name = $object['object_name'];
    }
    else {
      $this->name = $this->title;
    }
  }

}

/**
 * IdsApiObjectAsset class.
 * 
 * This class extends IdsApiObject and is inherited by IdsApiObjectAssetDocument and IdsApiObjectAssetOrganisation.
 *
 */
abstract class IdsApiObjectAsset extends IdsApiObject {

  // Asset identifier (for example, 12345).
  public $asset_id;

  // Creation date. String. (Example: 2012-02-09 14:36:21). Date in which the object was added to the collection.
  public $date_created;

  // Modification date. String. (Example: 2012-02-09 14:36:21). Date in which the object was last modified.
  public $date_updated;

  // Themes. Array of themes (IdsObjectCategory). Thematic categories which apply to the document or organisation.
  public $category_theme_array;

  // Subjects. Array of subjects (IdsObjectCategory). Subject-based categories which apply to the document or organisation.
  public $category_subject_array;

  // Regions. Array of regions (IdsApiObjectCategory). Regions in which the organisation operates or which apply to the document.
  public $category_region_array;

  // Countries. Array of countries (IdsApiObjectCountry). Countries in which the organisation operates or which apply to the document.
  public $country_focus_array;

  // Keywords. Array of strings. Subject keywords that relate to the asset.
  public $keywords;

  // Description. String. Description of the document or organisation.
  public $description;


  /**
   * Constructor.
   */
  public function __construct($object) {
    parent::__construct($object);
    if (isset($object['asset_id'])) {
      $this->asset_id = $object['asset_id'];
    }
    if (isset($object['date_created'])) {
      $this->date_created = $object['date_created'];
    }
    if (isset($object['date_updated'])) {
      $this->date_updated = $object['date_updated'];
    }
    if (isset($object['category_theme_array'])) {
      $this->category_theme_array = build_array_categories($object['category_theme_array']);
    }
    if (isset($object['category_subject_array'])) {
      $this->category_subject_array = build_array_categories($object['category_subject_array']);
    }
    if (isset($object['category_region_array'])) {
      $this->category_region_array = build_array_categories($object['category_region_array']);;
    }
    if (isset($object['country_focus_array'])) {
      $this->country_focus_array = build_array_countries($object['country_focus_array']);;
    }
    if (isset($object['keyword'])) {
      $this->keywords = $object['keyword'];
    }
    if (isset($object['description'])) {
      $this->description = $object['description'];
    }
  }

}

/**
 * IdsApiObjectAssetDocument class.
 * 
 * The objects of this class contain the information of documents in the IDS collection.
 *
 */
class IdsApiObjectAssetDocument extends IdsApiObjectAsset {

  /*
  Inherited:

  IdsApiObject properties:
  public $object_id;
  public $object_type;
  public $title;
  public $site = 'eldis';
  public $metadata_url;
  public $timestamp;
  public $website_url;
  public $name;

  IdsApiObjectAsset properties:
  public $asset_id;
  public $date_created;
  public $date_updated;
  public $category_theme_array;
  public $category_subject_array;
  public $category_region_array;
  public $country_focus_array;
  public $keyword;
  public $description;
  */

  // Authors (First initial. Surname). Array of strings. 
  public $authors;

  // Language. String. The language in which the title, headline and description are written.
  public $language_name;

  // Language ID. Int. The language in which the title, headline and description are written (language IDS numeric code corresponding to language_name).
  public $language_id;

  // Metadata languages. Languages (two-letter code) in which the translatable metadata (title, description) is available. Array of strings.
  public $metadata_languages;

  // Language array. Holds translatable metadata (title, description) in all available languages.
  public $language_array;

  // Publication date. Date (example: 2004-01-01 00:00:00). Year that the research document was first published.
  public $publication_date;

  // Publication year.
  public $publication_year;

  // Publisher.
  public $publisher;

  // Publisher ID.
  public $publisher_id;

  // Publisher country.
  public $publisher_country;

  // Publishers. Array of IdsApiObjectAssetOrganisation. Organisations that published the research.
  public $publisher_array;

  // Licence type. String.
  // This is not documented. Will not be used? It's now being retrieved with the documents' data.
  public $licence_type;

  // External URLs. Array of strings. URLs of the full text document. 
  public $urls;

  // Type of document. Array of strings.
  public $document_type;
  
   // Type of document. Array of strings.
  public $bridge_document_type;

  // Headline. String. A short version of the title or description of the research document.
  public $headline;

  /**
   * Constructor.
   */
  public function __construct($object) {
    parent::__construct($object);
    if (isset($object['author'])) {
      $this->authors = $object['author'];
    }
    if (isset($object['language_name'])) {
      $this->language_name = $object['language_name'];
    }
    if (isset($object['language_id'])) {
      $this->language_id = $object['language_id'];
    }
    if (isset($object['metadata_languages'])) {
      $this->metadata_languages = $object['metadata_languages'];
    }
    if (isset($object['language_array'])) {
      $this->language_array = build_array_languages($object['language_array']);
    }
    if (isset($object['publication_date'])) {
      $this->publication_date = $object['publication_date'];
    }
    if (isset($object['publication_year'])) {
      $this->publication_year = $object['publication_year'];
    }
    if (isset($object['publisher'])) {
      $this->publisher = $object['publisher'];
    }
    if (isset($object['publisher_id'])) {
      $this->publisher_id = $object['publisher_id'];
    }
    if (isset($object['publisher_country'])) {
      $this->publisher_country = $object['publisher_country'];
    }
    if (isset($object['publisher_array'])) {
      $this->publisher_array = build_array_organisations($object['publisher_array']);
    }
    if (isset($object['licence_type'])) {
      $this->licence_type = $object['licence_type'];
    }
    if (isset($object['urls'])) {
      $this->urls = $object['urls'];
    }
    if (isset($object['category_sector'])) {
      $this->bridge_document_type = $object['category_sector'];
    }
    if (isset($object['document_type'])) {
      $this->document_type = $object['document_type'];
    }
  }

}

/**
 * IdsApiObjectAssetOrganisation class.
 * 
 * The objects of this class contain the information of organisations in the IDS collection.
 *
 */
class IdsApiObjectAssetOrganisation extends IdsApiObjectAsset {

  /*
  Inherited:

  IdsApiObject properties:
  public $object_id;
  public $object_type;
  public $title;
  public $site = 'eldis';
  public $metadata_url;
  public $timestamp;
  public $website_url;
  public $name;

  IdsApiObjectAsset properties:
  public $asset_id;
  public $date_created;
  public $date_updated;
  public $category_theme_array;
  public $category_subject_array;
  public $category_region_array;
  public $country_focus_array;
  public $keyword;
  public $description;
  */

  // Acronym. String. Acronym of organisation.
  public $acronym;

  // Alternative acronym. String. Alternative acronym of organisation.
  public $alternative_acronym;

  // Alternative name. String. Alternative name of organisation.
  public $alternative_name;

  // Organisation type. String. Primary function or role of the organisation in relation to international development. 
  public $organisation_type;

  // Organisation URL. String. Link to the organisation's website.
  public $organisation_url;

  // Country where the organisation is located. String.
  public $location_country;

  // Is this needed? Organisation type id. String. Numerical ID of the organisation type.
  // public $organisation_type_id;

  // Is this needed? It's only present in organisations. publication_date in documents has another meaning.
  //public $asset_publication_date;

  /**
   * Constructor.
   */
  public function __construct($object) {
    parent::__construct($object);
    if (isset($object['acronym'])) {
      $this->acronym = $object['acronym'];
    }
    if (isset($object['alternative_acronym'])) {
      $this->alternative_acronym = $object['alternative_acronym'];
    }
    if (isset($object['alternative_name'])) {
      $this->alternative_name = $object['alternative_name'];
    }
    if (isset($object['organisation_type'])) {
      $this->organisation_type = $object['organisation_type'];
    }
    if (isset($object['organisation_url'])) {
      $this->organisation_url = $object['organisation_url'];
    }
    if (isset($object['location_country'])) {
      $this->location_country = $object['location_country'];
    }
  }

}

/**
 * IdsApiObjectObjectCategory class.
 * 
 * The objects of this class contain the information of regions and themes in the IDS collection.
 *
 */
class IdsApiObjectCategory extends IdsApiObject {

  /*
  Inherited:

  IdsApiObject properties:
  public $object_id;
  public $object_type;
  public $title;
  public $site = 'eldis';
  public $metadata_url;
  public $timestamp;
  public $website_url;
  public $name;
  */

  // Level of the category in the hierarchy.
  public $level;

  // Numerical code of the parent category. Example: 34. [This is no longer included in the API response?].
  public $cat_parent;

  // Object Id of the parent category. Example: C34.
  public $parent_object_id;

  // Id of the superparent category. '2' represents the root level.
  public $cat_superparent;

  // Id of the category. It's a numerical code of the category. 
  public $category_id;

  // Indicates if the category is archived.
  public $archived = FALSE;

  /**
   * Constructor.
   */
  function __construct($object) {
    parent::__construct($object);
    if (isset($object['category_id'])) {
      $this->category_id = $object['category_id'];
    }
    if (isset($object['level'])) {
      $this->level = $object['level'];
    }
    if (isset($object['parent_object_id'])) {
      $this->parent_object_id = $object['parent_object_id'];
    }
    if (isset($object['cat_parent'])) {
      $this->cat_parent = $object['cat_parent'];
    }
    elseif (isset($object['parent_object_id'])) {
      $this->cat_parent = preg_replace('/[a-zA-Z]*(\d+)/', '$1', $this->parent_object_id);
    }
    if (isset($object['cat_superparent'])) {
      $this->cat_superparent = $object['cat_superparent'];
    }
    if (isset($object['archived'])) {
      $this->archived = $object['archived'];
    }
    if (isset($object['object_name'])) {
      $this->name = $object['object_name'];
    }
  }

}

/**
 * IdsApiObjectCountry class.
 * 
 * The objects of this class contain the information of countries in the IDS collection.
 *
 */
 
class IdsApiObjectCountry extends IdsApiObject {

  /*
  Inherited:

  IdsApiObject properties:
  public $object_id;
  public $object_type;
  public $title;
  public $site = 'eldis';
  public $metadata_url;
  public $timestamp;
  public $website_url;
  public $name;
  */

  // Alternative name of the country. String.
  public $alternative_name;

  // Id of the country in the IDS collection.
  public $asset_id;

  // Regions. Array of regions (IdsApiObjectCategory). Regions to which this country belongs.
  public $category_region_array;  

  // ISO number. Example: 50 (Bangladesh).
  public $iso_number;

  // ISO three-letter code. Example: BGD (Bangladesh).
  public $iso_three_letter_code;

  // ISO two-letter code. Example: BD (Bangladesh).
  public $iso_two_letter_code;

  /**
   * Constructor.
   */
  function __construct($object) {
    parent::__construct($object);
    if (isset($object['alternative_name'])) {
      $this->alternative_name = $object['alternative_name'];
    }
    if (isset($object['asset_id'])) {
      $this->asset_id = $object['asset_id'];
    }
    if (isset($object['category_region_array'])) {
      $this->category_region_array = build_array_categories($object['category_region_array']);
    }  
    if (isset($object['iso_number'])) {
      $this->iso_number = $object['iso_number'];
    }
    if (isset($object['iso_three_letter_code'])) {
      $this->iso_three_letter_code = $object['iso_three_letter_code'];
    }
    if (isset($object['iso_two_letter_code'])) {
      $this->iso_two_letter_code = $object['iso_two_letter_code'];
    }  
  }

}

/**
 * IdsApiCount class.
 *
 * Objects of this class hold one result of a count request.
 *
 */
class IdsApiCount {

  // Number of responses corresponding to the category.
  public $count;

  // This is an IdsApiObject representing the category (in the case of theme, subject and region IdsApiObjectCategory and for country IdsApiObjectCountry).
  public $item;

  /**
   * Constructor.
   */
  function __construct($object, $type) {
    if (isset($object['count'])) {
      $this->count = $object['count'];
    }
    switch ($type) {
      case 'country_count':
        $this->item = new IdsApiObjectCountry($object);
        break;
      case 'theme_count':
      case 'region_count':
      case 'subject_count':
        $this->item = new IdsApiObjectCategory($object);
        break;
      default:
        $this->item = new IdsApiObject($object);
        break;
    }
  }

}



/* --------------------------- Helper functions ------------------------- */

function build_array_categories($array_categories) {
  $categories = array();
  if (is_array($array_categories)) {
    foreach (current($array_categories) as $category) {
      $categories[] = new IdsApiObjectCategory($category);
    }
  }
  return $categories;
}

function build_array_countries($array_countries) {
  $countries = array();
  if (is_array($array_countries)) {
    foreach (current($array_countries) as $country) {
      $countries[] = new IdsApiObjectCountry($country);
    }
  }
  return $countries;
}

function build_array_organisations($array_organisations) {
  $organisations = array();
  if (is_array($array_organisations)) {
    foreach (current($array_organisations) as $organisation) {
      $organisations[] = new IdsApiObjectAssetOrganisation($organisation);
    }
  }
  return $organisations;
}

function build_array_languages($language_array) {
  $languages = array();
  if (is_array($language_array)) {
    foreach (current($language_array) as $language) {
      if (isset($language['isocode'])) {
        $languages[$language['isocode']] = array();
        foreach ($language as $field => $value) {
          $languages[$language['isocode']][$field] = $value;
        }      
      }
    }
  }
  return $languages;
}


