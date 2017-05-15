<?php
/**
 * @file
 * landportal_sdgs.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function landportal_sdgs_taxonomy_default_vocabularies() {
  return array(
    'sdgs' => array(
      'name' => 'SDGs',
      'machine_name' => 'sdgs',
      'description' => 'UN SDGs terms',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
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
