<?php
/**
 * @file
 * mailchimp_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function mailchimp_feature_taxonomy_default_vocabularies() {
  return array(
    'interests' => array(
      'name' => 'Interests DEPREC?',
      'machine_name' => 'interests',
      'description' => 'User interests',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 5,
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
