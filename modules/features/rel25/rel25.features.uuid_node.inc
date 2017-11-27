<?php
/**
 * @file
 * rel25.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function rel25_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'The leading online resource for information, data and knowledge-exchange on land governance issues. ',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'en',
  'created' => 1423562417,
  'tnid' => 10064,
  'translate' => 0,
  'uuid' => '7be95fe1-0e58-40d9-93fa-cd885d9c1b9c',
  'promoted_library' => 0,
  'promoted_to_country_page' => 0,
  'promoted_to_thematic_page' => 0,
  'base_promoted_library' => 0,
  'base_promoted_to_country_page' => 0,
  'base_promoted_to_thematic_page' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="block-wrapped row">
<div class="col-sm-6 col-md-3">
<h3>500+</h3>

<p>Land related indicators</p>
</div>

<div class="col-sm-6 col-md-3">
<h3>500+</h3>

<p>Land related indicators</p>
</div>

<div class="col-sm-6 col-md-3">
<h3>Join us</h3>

<p>Register your Land Portal account and sign up for our Newsletter!</p>
</div>

<div class="col-sm-6 col-md-3">
<h3>Partner | MLIKE</h3>

<p>Visit our partner hosted site.</p>
</div>
</div>
',
        'summary' => '<p>By increasing access to information on land, Land Portal aims to ensure responsible&nbsp;land governance and secure land rights for the world\'s poor and vulnerable.&nbsp;Learn more <a href="/about">about us</a>.</p>
',
        'format' => 'full_html',
        'safe_summary' => '<p>By increasing access to information on land, Land Portal aims to ensure responsible land governance and secure land rights for the world\'s poor and vulnerable. Learn more <a href="/about">about us</a>.</p>
',
      ),
    ),
  ),
  'field_related_blocks' => array(),
  'field_file' => array(),
  'field_geographical_focus' => array(),
  'field_milestone' => array(
    'und' => array(
      0 => array(
        'value' => 'b85bb2e1-8757-4550-b8aa-9ec0010411b7',
        'revision_id' => 'b85bb2e1-8757-4550-b8aa-9ec0010411b7',
        'uuid' => 'b85bb2e1-8757-4550-b8aa-9ec0010411b7',
      ),
    ),
  ),
  'field_noderef' => array(),
  'field_paragraphs' => array(),
  'field_related_domains' => array(),
  'field_related_themes' => array(),
  'field_related_topics' => array(),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'The leading online resource for information, data and knowledge-exchange on land governance issues. ',
        'format' => NULL,
      ),
    ),
  ),
  'field_image' => array(),
  'translations' => array(
    'original' => NULL,
    'data' => array(),
  ),
  'metatags' => array(
    'en' => array(
      'title' => array(
        'value' => '[node:title] | Improving land governance and securing land rights',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dct:title',
      ),
      'type' => 'property',
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
      'type' => 'property',
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'comment_count' => 0,
  'locations' => array(),
  'location' => array(),
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-02-10 11:00:17 +0100',
  'user_uuid' => 'db9788c8-ee0f-4a8c-9fc0-46ebe2d339e8',
);
  return $nodes;
}
