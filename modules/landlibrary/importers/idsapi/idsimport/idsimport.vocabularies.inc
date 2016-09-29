<?php
/**
 * @file
 * idsimport.vocabularies.inc
 */

/**
 * Creates vocabulary definitions for IDS categories.
 */
function idsimport_vocabularies() {
  $vocabularies['ids_regions'] = array(
      'name' => 'IDS Regions',
      'machine_name' => 'ids_regions',
      'description' => 'Vocabulary for regions imported from the IDS collection.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
      'bc_entity_type' => 'taxonomy_term',
    );

  $vocabularies['ids_themes'] = array(
      'name' => 'IDS Themes',
      'machine_name' => 'ids_themes',
      'description' => 'Vocabulary for themes imported from the IDS collection.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
      'bc_entity_type' => 'taxonomy_term',
    );

  $vocabularies['ids_subjects'] = array(
      'name' => 'IDS Subjects',
      'machine_name' => 'ids_subjects',
      'description' => 'Vocabulary for subjects imported from the IDS collection.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
      'bc_entity_type' => 'taxonomy_term',
    );


  $vocabularies['ids_countries'] = array(
      'name' => 'IDS Countries',
      'machine_name' => 'ids_countries',
      'description' => 'Vocabulary for countries imported from the IDS collection.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
      'bc_entity_type' => 'taxonomy_term',
    );

  $vocabularies['ids_authors'] = array(
      'name' => 'IDS Authors',
      'machine_name' => 'ids_authors',
      'description' => 'IDS Authors',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
      'bc_entity_type' => 'taxonomy_term',
    );
    
  $vocabularies['ids_keywords'] = array(
      'name' => 'IDS Keywords',
      'machine_name' => 'ids_keywords',
      'description' => 'Subject keywords that relate to IDS documents.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
      'bc_entity_type' => 'taxonomy_term',
    );

  return $vocabularies;

}
