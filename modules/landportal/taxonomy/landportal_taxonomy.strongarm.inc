<?php
/**
 * @file
 * landportal_taxonomy.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function landportal_taxonomy_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__themes';
  $strongarm->value = array(
    'view_modes' => array(
      'search_index' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '7',
        ),
        'name' => array(
          'weight' => '0',
        ),
        'description' => array(
          'weight' => '1',
        ),
        'xmlsitemap' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'search_index' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__themes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_countries_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_countries_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_debate_status_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_debate_status_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_landvoc_concepts_pattern';
  $strongarm->value = 'voc/landvoc/concept/[term:name]';
  $export['pathauto_taxonomy_term_landvoc_concepts_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_languages_pattern';
  $strongarm->value = 'voc/language/[term:name]';
  $export['pathauto_taxonomy_term_languages_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_licences_pattern';
  $strongarm->value = 'voc/license/[term:name]';
  $export['pathauto_taxonomy_term_licences_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_organization_relation_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_organization_relation_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_organization_types_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_organization_types_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_overarching_categories_pattern';
  $strongarm->value = 'voc/landvoc/overarching-category/[term:name]';
  $export['pathauto_taxonomy_term_overarching_categories_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = 'voc/[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_regions_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_regions_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_themes_pattern';
  $strongarm->value = 'voc/landvoc/theme/[term:name]';
  $export['pathauto_taxonomy_term_themes_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_topics_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_topics_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_countries';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_countries'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_landvoc_concepts';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_landvoc_concepts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_licences';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_licences'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_organization_relation';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_organization_relation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_organization_types';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_organization_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_overarching_categories';
  $strongarm->value = array(
    'entity' => 'taxonomy_term',
    'bundle' => 'landvoc_overarching_categories',
    'info' => array(
      'label' => 'Overarching Categories',
      'admin' => array(
        'path' => 'admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/edit',
        'real path' => 'admin/structure/taxonomy/landvoc_overarching_categories/edit',
        'bundle argument' => 3,
        'access arguments' => array(
          0 => 'administer taxonomy',
        ),
      ),
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:Concept',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'rdfs:label',
            1 => 'skos:prefLabel',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'skos:definition',
          ),
        ),
        'vid' => array(
          'predicates' => array(
            0 => 'skos:inScheme',
          ),
          'type' => 'rel',
        ),
        'parent' => array(
          'predicates' => array(
            0 => 'skos:broader',
          ),
          'type' => 'rel',
        ),
      ),
      'xmlsitemap' => array(
        'entity' => 'taxonomy_term',
        'bundle' => 'landvoc_overarching_categories',
        'info' => array(
          'label' => 'Overarching Categories',
          'admin' => array(
            'path' => 'admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/edit',
            'real path' => 'admin/structure/taxonomy/overarching_categories/edit',
            'bundle argument' => 3,
            'access arguments' => array(
              0 => 'administer taxonomy',
            ),
          ),
          'rdf_mapping' => array(
            'rdftype' => array(
              0 => 'skos:Concept',
            ),
            'name' => array(
              'predicates' => array(
                0 => 'rdfs:label',
                1 => 'skos:prefLabel',
              ),
            ),
            'description' => array(
              'predicates' => array(
                0 => 'skos:definition',
              ),
            ),
            'vid' => array(
              'predicates' => array(
                0 => 'skos:inScheme',
              ),
              'type' => 'rel',
            ),
            'parent' => array(
              'predicates' => array(
                0 => 'skos:broader',
              ),
              'type' => 'rel',
            ),
          ),
          'xmlsitemap' => array(
            'entity' => 'taxonomy_term',
            'bundle' => 'overarching_categories',
            'info' => array(
              'label' => 'Overarching Categories',
              'admin' => array(
                'path' => 'admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/edit',
                'real path' => 'admin/structure/taxonomy/domains/edit',
                'bundle argument' => 3,
                'access arguments' => array(
                  0 => 'administer taxonomy',
                ),
              ),
              'rdf_mapping' => array(
                'rdftype' => array(
                  0 => 'skos:Concept',
                ),
                'name' => array(
                  'predicates' => array(
                    0 => 'rdfs:label',
                    1 => 'skos:prefLabel',
                  ),
                ),
                'description' => array(
                  'predicates' => array(
                    0 => 'skos:definition',
                  ),
                ),
                'vid' => array(
                  'predicates' => array(
                    0 => 'skos:inScheme',
                  ),
                  'type' => 'rel',
                ),
                'parent' => array(
                  'predicates' => array(
                    0 => 'skos:broader',
                  ),
                  'type' => 'rel',
                ),
              ),
              'xmlsitemap' => array(
                'entity' => 'taxonomy_term',
                'bundle' => 'domains',
                'status' => '0',
                'priority' => '0.5',
              ),
            ),
            'status' => '0',
            'priority' => '0.5',
          ),
        ),
        'status' => '0',
        'priority' => '0.5',
      ),
    ),
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_overarching_categories'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_regions';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_regions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_themes';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_themes'] = $strongarm;

  return $export;
}
