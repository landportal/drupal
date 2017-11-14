<?php
/**
 * @file
 * landportal_geo.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function landportal_geo_taxonomy_default_vocabularies() {
  return array(
    'regions' => array(
      'name' => 'Regions',
      'machine_name' => 'regions',
      'description' => 'Regions',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => -5,
      'language' => 'und',
      'i18n_mode' => 32768,
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
