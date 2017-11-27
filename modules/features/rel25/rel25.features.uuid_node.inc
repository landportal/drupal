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
  'title' => 'Land Book Datasets',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'en',
  'created' => 1442253671,
  'tnid' => 14171,
  'translate' => 0,
  'uuid' => '1ca1aff7-0d9e-4815-b1aa-9054f97a6594',
  'promoted_library' => 0,
  'promoted_to_country_page' => 0,
  'promoted_to_thematic_page' => 0,
  'base_promoted_library' => 0,
  'base_promoted_to_country_page' => 0,
  'base_promoted_to_thematic_page' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Are you looking for sets of data related to land?&nbsp; You’ve come to the right place! We have aggregated all information by issue and provider. &nbsp;Discover the lists of different datasets available and get detailed information on each of them.&nbsp; &nbsp;&nbsp;</p>

<p><strong>Keep scrolling and let the learning begin!&nbsp;</strong></p>

<hr>',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_related_blocks' => array(),
  'field_file' => array(),
  'field_geographical_focus' => array(),
  'field_milestone' => array(
    'und' => array(
      0 => array(
        'value' => '3d78da3a-a0ea-4ad9-97d2-8e9f9d092f51',
        'revision_id' => '3d78da3a-a0ea-4ad9-97d2-8e9f9d092f51',
        'uuid' => '3d78da3a-a0ea-4ad9-97d2-8e9f9d092f51',
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
        'value' => 'Land Book Datasets',
        'format' => NULL,
      ),
    ),
  ),
  'field_image' => array(),
  'field_visualization' => array(),
  'translations' => array(
    'original' => NULL,
    'data' => array(),
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
  'date' => '2015-09-14 20:01:11 +0200',
  'user_uuid' => '0552abe9-7b28-483f-a7ac-ea80f81db020',
);
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
  'field_visualization' => array(),
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
  $nodes[] = array(
  'title' => 'Indicators',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'en',
  'created' => 1442254321,
  'tnid' => 14172,
  'translate' => 0,
  'uuid' => '7ef9f4e6-0e68-43d6-9e65-f7890c7b6c54',
  'promoted_library' => 0,
  'promoted_to_country_page' => 0,
  'promoted_to_thematic_page' => 0,
  'base_promoted_library' => 0,
  'base_promoted_to_country_page' => 0,
  'base_promoted_to_thematic_page' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Access land-related information by indicator. Discover the list of different indicators available on the Land Book, filter the list of indicators by theme, get detailed information on each of them and download the data you need.</p>
<hr>',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_related_blocks' => array(),
  'field_file' => array(),
  'field_geographical_focus' => array(),
  'field_milestone' => array(),
  'field_noderef' => array(),
  'field_paragraphs' => array(),
  'field_related_domains' => array(),
  'field_related_themes' => array(),
  'field_related_topics' => array(),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'Indicators',
        'format' => NULL,
      ),
    ),
  ),
  'field_image' => array(),
  'field_visualization' => array(),
  'translations' => array(
    'original' => NULL,
    'data' => array(),
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
  'date' => '2015-09-14 20:12:01 +0200',
  'user_uuid' => '0552abe9-7b28-483f-a7ac-ea80f81db020',
);
  $nodes[] = array(
  'title' => 'Data',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'und',
  'created' => 1493301199,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9383e729-0ed2-4f24-9410-c9fe4f1189d5',
  'promoted_library' => 0,
  'promoted_to_country_page' => 0,
  'promoted_to_thematic_page' => 0,
  'base_promoted_library' => 0,
  'base_promoted_to_country_page' => 0,
  'base_promoted_to_thematic_page' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The Land Portal provides users with a broad range of open data for the land sector.&nbsp;</p>

<p>All indicators and datasets&nbsp;—&nbsp;originally developed by a number of reputable organizations from around the world&nbsp;—&nbsp;are presented with detailed metadata and can be freely accessed, visualised and downloaded.</p>

<div>
<div>Discover the data by&nbsp;<a data-saferedirecturl="https://www.google.com/url?hl=en&amp;q=http://landportal.info/book/indicators&amp;source=gmail&amp;ust=1511471379368000&amp;usg=AFQjCNHvt75M9CgkISjaaBB4DITAvxq2Pw" href="http://landportal.info/book/indicators" target="_blank">indicator</a>, by&nbsp;<a data-saferedirecturl="https://www.google.com/url?hl=en&amp;q=http://landportal.info/book/datasets&amp;source=gmail&amp;ust=1511471379368000&amp;usg=AFQjCNHjv5i6BJjozKtEkzBQ4daUjdp2tQ" href="http://landportal.info/book/datasets" target="_blank">dataset</a>&nbsp;or by&nbsp;<a data-saferedirecturl="https://www.google.com/url?hl=en&amp;q=http://landportal.info/book/sources&amp;source=gmail&amp;ust=1511471379368000&amp;usg=AFQjCNGqkgjhj5t_SXy9ijgNur9W_DBTdQ" href="http://landportal.info/book/sources" target="_blank">datasource</a>.&nbsp;<em>&nbsp;</em></div>

<div>&nbsp;</div>

<div><strong>Keep scrolling and let the learning begin!&nbsp;</strong></div>

<div>&nbsp;</div>
</div>

<p>&nbsp;</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_related_blocks' => array(),
  'field_file' => array(),
  'field_geographical_focus' => array(),
  'field_milestone' => array(
    'und' => array(
      0 => array(
        'value' => '418e551a-ca00-4bfc-a297-4ea379183885',
        'revision_id' => '418e551a-ca00-4bfc-a297-4ea379183885',
        'uuid' => '418e551a-ca00-4bfc-a297-4ea379183885',
      ),
    ),
  ),
  'field_noderef' => array(),
  'field_paragraphs' => array(),
  'field_related_domains' => array(),
  'field_related_themes' => array(),
  'field_related_topics' => array(),
  'title_field' => array(
    'und' => array(
      0 => array(
        'value' => 'Data',
        'format' => NULL,
      ),
    ),
  ),
  'field_image' => array(),
  'field_visualization' => array(),
  'translations' => array(
    'original' => NULL,
    'data' => array(),
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
  'date' => '2017-04-27 15:53:19 +0200',
  'user_uuid' => 'c571526a-567e-4c48-bd1c-f4cec8f6eddb',
);
  $nodes[] = array(
  'title' => 'Discussion archive',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'und',
  'created' => 1442250167,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cfdc3ab6-d97d-4b78-8155-4852fae36234',
  'promoted_library' => 0,
  'promoted_to_country_page' => 0,
  'promoted_to_thematic_page' => 0,
  'base_promoted_library' => 0,
  'base_promoted_to_country_page' => 0,
  'base_promoted_to_thematic_page' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Debates&nbsp;provide a platform to stimulate conversation on diverse issues of importance to the land governance community. All debates are open discussions facilitated by land governance experts, on a specific topic, for a specified period of time. While anyone can view these online discussions, you must be a registered user to contribute to a debate.</p>

<p>By participating in a discussion, users agree to be respectful of the diversity of opinions, and are reminded to stay on topic, cite your sources, and refer users to other resources for more information. For more information, see the terms and conditions of our site.&nbsp;</p>

<p>If you or your organization is interested in hosting a debate, please contact us at hello@landportal.info</p>

<p><strong>Keep scrolling and let the learning begin!&nbsp;</strong></p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_related_blocks' => array(),
  'field_file' => array(),
  'field_geographical_focus' => array(),
  'field_milestone' => array(
    'und' => array(
      0 => array(
        'value' => '8fdbe146-ec78-498c-95ae-8c2a81428aaa',
        'revision_id' => '8fdbe146-ec78-498c-95ae-8c2a81428aaa',
        'uuid' => '8fdbe146-ec78-498c-95ae-8c2a81428aaa',
      ),
    ),
  ),
  'field_noderef' => array(),
  'field_paragraphs' => array(),
  'field_related_domains' => array(),
  'field_related_themes' => array(),
  'field_related_topics' => array(),
  'title_field' => array(
    'und' => array(
      0 => array(
        'value' => 'Discussion archive',
        'format' => NULL,
      ),
    ),
  ),
  'field_image' => array(),
  'field_visualization' => array(),
  'translations' => array(
    'original' => NULL,
    'data' => array(),
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
  'date' => '2015-09-14 19:02:47 +0200',
  'user_uuid' => '0552abe9-7b28-483f-a7ac-ea80f81db020',
);
  return $nodes;
}
