<?php
/**
 * @file
 * landlibrary_resource.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landlibrary_resource_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function landlibrary_resource_node_info() {
  $items = array(
    'landlibrary_resource' => array(
      'name' => t('LandLibrary Resource'),
      'base' => 'node_content',
      'description' => t('The main LandLibrary resource which can be a country report, a peer-reviewed publication, a policy document, an analytical study, a map, a high quality blog post, a video or other multimedia content.'),
      'has_title' => '1',
      'title_label' => t('Resource title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_rdf_default_mappings().
 */
function landlibrary_resource_rdf_default_mappings() {
  $rdf_mappings = array();

  // Exported RDF mapping: landlibrary_resource
  $rdf_mappings['node']['landlibrary_resource'] = array(
    'rdftype' => array(
      0 => 'dct:BibliographicResource',
      1 => 'bibo:Document',
      2 => 'schema:CreativeWork',
      3 => 'prov:Entity',
      4 => 'edm:ProvidedCHO',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dct:title',
        1 => 'schema:name',
      ),
      'type' => 'property',
    ),
    'created' => array(
      'predicates' => array(),
    ),
    'changed' => array(
      'predicates' => array(),
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(),
    ),
    'comment_count' => array(
      'predicates' => array(),
    ),
    'last_activity' => array(
      'predicates' => array(),
    ),
    'field_doc_citation' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:isPartOf',
        1 => 'dc:source',
      ),
    ),
    'field_doc_citation_number' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'bibo:volume',
      ),
    ),
    'field_doc_conference' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'bibo:presentedAt',
      ),
    ),
    'field_doc_contributor' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dc:contributor',
      ),
    ),
    'field_doc_copyrights_statement' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dct:rights',
      ),
    ),
    'field_doc_country' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dc:spatial',
      ),
    ),
    'field_doc_creation_date' => array(
      'type' => 'property',
      'datatype' => 'xsd:date',
      'predicates' => array(
        0 => 'dct:date',
        1 => 'schema:datePublished',
      ),
    ),
    'field_doc_creator' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dc:creator',
        1 => 'schema:author',
      ),
    ),
    'field_doc_data_provider' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'prov:wasDerivedFrom',
        1 => 'schema:provider',
        2 => 'edm:dataProvider',
      ),
    ),
    'field_doc_description' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dct:description',
        1 => 'schema:description',
        2 => 'bibo:abstract',
      ),
    ),
    'field_doc_geographic_region' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dc:spatial',
      ),
    ),
    'field_doc_has_part' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dc:hasPart',
        1 => 'schema:hasPart',
      ),
    ),
    'field_doc_has_version' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dc:hasVersion',
      ),
    ),
    'field_doc_identifier' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dct:identifier',
      ),
    ),
    'field_doc_is_part_of' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dct:isPartOf',
        1 => 'schema:isPartOf',
      ),
    ),
    'field_doc_is_referenced_by' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dc:isReferencedBy',
      ),
    ),
    'field_doc_is_replaced_by' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dc:isReplacedBy',
      ),
    ),
    'field_doc_is_required_by' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dc:isRequiredBy',
      ),
    ),
    'field_doc_is_shown_at' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'bibo:uri',
        1 => 'schema:url',
      ),
    ),
    'field_doc_is_shown_by' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'bibo:uri',
        1 => 'schema:url',
      ),
    ),
    'field_doc_keyword' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dct:subject',
        1 => 'schema:about',
      ),
    ),
    'field_doc_language' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:language',
      ),
    ),
    'field_doc_provider' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'prov:wasDerivedFrom',
        1 => 'schema:provider',
        2 => 'edm:dataProvider',
      ),
    ),
    'field_doc_publisher' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dct:publisher',
        1 => 'schema:publisher',
      ),
    ),
    'field_doc_relation' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dct:relation',
      ),
    ),
    'field_doc_replaces' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dc:replaces',
      ),
    ),
    'field_doc_requires' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dc:requires',
      ),
    ),
    'field_doc_subject' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dc:subject',
        1 => 'schema:about',
      ),
    ),
    'field_doc_thumb' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'schema:image',
      ),
    ),
    'field_doc_type' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dct:type',
      ),
    ),
    'field_format' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dc:format',
      ),
    ),
    'field_local_file_url' => array(
      'type' => 'rel',
      'datatype' => 'xsd:anyURI',
      'predicates' => array(
        0 => 'schema:url',
        1 => 'bibo:uri',
      ),
    ),
    'field_doc_licencing' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dct:license',
      ),
    ),
    'field_doc_pagination' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dct:extent',
      ),
    ),
    'field_geographical_focus' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dct:spatial',
      ),
    ),
    'field_related_topics' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dct:subject',
        1 => 'schema:about',
      ),
    ),
    'field_related_domains' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dct:subject',
        1 => 'schema:about',
      ),
    ),
    'field_related_themes' => array(
      'type' => 'rel',
      'predicates' => array(
        0 => 'dct:subject',
        1 => 'schema:about',
      ),
    ),
    'field_orgref' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dct:creator',
        1 => 'schema:author',
      ),
    ),
    'field_doc_people' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'dc:contributor',
      ),
    ),
  );

  return $rdf_mappings;
}
