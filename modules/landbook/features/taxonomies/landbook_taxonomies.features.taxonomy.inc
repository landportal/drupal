<?php
/**
 * @file
 * landbook_taxonomies.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function landbook_taxonomies_taxonomy_default_vocabularies() {
  return array(
    'datasets' => array(
      'name' => 'Datasets',
      'machine_name' => 'datasets',
      'description' => 'Landbook Datasets',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 1,
      'language' => 'und',
      'i18n_mode' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'indicators' => array(
      'name' => 'Indicators',
      'machine_name' => 'indicators',
      'description' => 'Landbook Indicators',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 2,
      'language' => 'und',
      'i18n_mode' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
