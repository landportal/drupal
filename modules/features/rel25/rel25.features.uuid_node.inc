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
  'title' => 'About the Land Portal',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'en',
  'created' => 1291166008,
  'tnid' => 6900,
  'translate' => 0,
  'uuid' => '112eadcc-c766-4eb3-a5f5-b1f3610b7336',
  'promoted_library' => 0,
  'promoted_to_country_page' => 0,
  'promoted_to_thematic_page' => 0,
  'base_promoted_library' => 0,
  'base_promoted_to_country_page' => 0,
  'base_promoted_to_thematic_page' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2><strong>Our Challenge: Information for Land Governance</strong></h2>

<p>Land governance is central to sustainable development. But without better data and information, many opportunities to improve land governance are being lost.&nbsp;</p>

<p>Goal 1.4 of the Sustainable Development Goals commits the world to: &nbsp;<strong>"<em>By 2030, ensure that all men and women, in particular the poor and the vulnerable, have equal rights to economic resources, as well as access to basic services, ownership and control over land and other forms of property, inheritance, natural resources, appropriate new technology and financial services, including microfinance</em>."</strong></p>

<p>With climate change increasing pressures on land, and the legacy of large-scale land deals in recent years, meeting this goal requires actions from many different stakeholders. These actions need to be supported by clear, accessible and inclusive data and information.&nbsp;</p>

<div class="row">
<div class="col-sm-6">
<h2><strong>Our Mission: Linking Open Data and Land Rights</strong></h2>

<p>The Land Portal Foundation works to create a better information ecosystem for land governance through a platform based on cutting-edge linked and open data technologies. We help partners to create, curate and disseminate land governance data and information to become part of a more inclusive information landscape. Current information sources are often fragmented, represent a restricted set of perspectives, and are not structured, curated and licensed in ways that support maximum discovery, engagement and reuse.</p>

<p>By empowering institutions and organizations and building their capacity to develop and manage effective and open information and knowledge systems, the Land Portal is giving policy makers and decision makers, intermediaries and grassroots groups the tools to access reliable evidence, information and data, which results in better decision making, more effective programs and policies and successful campaigns.</p>
</div>
</div>

<p>&nbsp;</p>

<p><em>For any questions or comments&nbsp;regarding the Land Portal\'s knowledge products, or if you would like to contribute content to the Land Portal, please contact hello@landportal.info</em></p>

<p>&nbsp;</p>
',
        'summary' => '<p>The Land Portal Foundation works to create a better information ecosystem for land governance through a platform based on cutting-edge linked and open data technologies.</p>
',
        'format' => 'full_html',
        'safe_summary' => '<p>The Land Portal Foundation works to create a better information ecosystem for land governance through a platform based on cutting-edge linked and open data technologies.</p>
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
        'value' => '17ea612d-906f-4d22-b968-9f11fb1025b9',
        'revision_id' => '17ea612d-906f-4d22-b968-9f11fb1025b9',
        'uuid' => '17ea612d-906f-4d22-b968-9f11fb1025b9',
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
        'value' => 'About the Land Portal',
        'format' => NULL,
      ),
    ),
  ),
  'field_image' => array(),
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
  'date' => '2010-12-01 02:13:28 +0100',
  'user_uuid' => 'db9788c8-ee0f-4a8c-9fc0-46ebe2d339e8',
);
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
  'title' => 'Consult the library',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'en',
  'created' => 1431261805,
  'tnid' => 10158,
  'translate' => 0,
  'uuid' => '26bf0bf2-c788-4680-81b3-dc5d20302354',
  'promoted_library' => 0,
  'promoted_to_country_page' => 0,
  'promoted_to_thematic_page' => 0,
  'base_promoted_library' => 0,
  'base_promoted_to_country_page' => 0,
  'base_promoted_to_thematic_page' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Are you looking for information and knowledge about property rights and&nbsp;land governance? The library&nbsp;is a free online repository that gives you access to&nbsp;over 35,000 land-related publications, laws&nbsp;and multimedia items. You can consult&nbsp;the Library through our <a href="http://landportal.info/library/search">search engine</a> or browsing through our <a href="/library/browse">browse page</a>.</p>

<p>If you would like to contribute materials to the Land Library, please have a look at our <a href="http://landportal.info/library/contribute">contribute page</a>&nbsp;for more information.</p>

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
        'value' => 'f86b1532-266a-438d-85d1-56cd0d1c3af7',
        'revision_id' => 'f86b1532-266a-438d-85d1-56cd0d1c3af7',
        'uuid' => 'f86b1532-266a-438d-85d1-56cd0d1c3af7',
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
        'value' => 'Consult the library',
        'format' => NULL,
      ),
    ),
  ),
  'field_image' => array(),
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
  'date' => '2015-05-10 14:43:25 +0200',
  'user_uuid' => 'db9788c8-ee0f-4a8c-9fc0-46ebe2d339e8',
);
  $nodes[] = array(
  'title' => 'Linking open data for land rights ',
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
        'value' => '<p>&nbsp;</p>

<div class="block-wrapped">
<div class="col-xs-6 col-md-3">
<h3><a href="/book/data" target="_blank">500+ land related indicators</a></h3>

<p>Browse around our data section to access specific and detailed information!&nbsp;</p>
</div>

<div class="col-xs-6 col-md-3">
<h3><a href="/library" target="_blank">45,000+ land related resources</a></h3>

<p>Browse around our library to take advantage of our wide array of materials!&nbsp;</p>
</div>

<div class="col-xs-6 col-md-3">
<h3><a href="/get-involved" target="_blank">Join us</a></h3>

<p>Create&nbsp;your own Land Portal account and sign up for our newsletter!</p>
</div>

<div class="col-xs-6 col-md-3">
<h3><a href="/debate/community" target="_blank">Partner organisations</a></h3>

<p>Visit our partner hosted site.</p>

<div class="row">
<div class="col-sm-6">
<div><a href="/partners/mlike"><img alt="M-LIKE logo" class="media-element file-teaser" data-delta="4" data-fid="19018" data-media-element="1" src="/sites/landportal.info/files/mlike-small.png" title="" typeof="foaf:Image" /></a></div>
</div>

<div class="col-sm-6">
<div><a href="/partners/legend"><img alt="Land: Enhancing Governance for Economic Development (LEGEND)" class="media-element file-teaser" data-delta="2" data-fid="10710" data-media-element="1" src="/sites/landportal.info/files/styles/medium/public/LEGEND_logo.png" title="Land: Enhancing Governance for Economic Development (LEGEND)" typeof="foaf:Image" /></a></div>
</div>
</div>

<p>&nbsp;</p>
</div>
</div>
',
        'summary' => '<p>By increasing access to information on land, the Land Portal aims to ensure responsible&nbsp;land governance and secure land rights for the world\'s poor and vulnerable.&nbsp;Learn more <a href="/about">about us</a>.</p>
',
        'format' => 'full_html',
        'safe_summary' => '<p>By increasing access to information on land, the Land Portal aims to ensure responsible land governance and secure land rights for the world\'s poor and vulnerable. Learn more <a href="/about">about us</a>.</p>
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
        'value' => 'Linking open data for land rights ',
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
        'value' => '<p>Access land-related information by indicator. Discover the list of different indicators available, filter the list of indicators by theme, get detailed information on each of them and download the data you need.</p>

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
        'value' => 'f055b60a-446a-45aa-9e8e-d8aefddfde21',
        'revision_id' => 'f055b60a-446a-45aa-9e8e-d8aefddfde21',
        'uuid' => 'f055b60a-446a-45aa-9e8e-d8aefddfde21',
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
        'value' => 'Indicators',
        'format' => NULL,
      ),
    ),
  ),
  'field_image' => array(),
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
  'title' => 'Discover the data',
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
        'value' => '<p>The Land Portal provides users with a broad range of open data for the land sector.&nbsp;All indicators and datasets&nbsp;—&nbsp;originally developed by a number of reputable organizations from around the world&nbsp;—&nbsp;are presented with detailed metadata and can be freely accessed, visualised and downloaded.</p>

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
        'value' => 'Discover the data',
        'format' => NULL,
      ),
    ),
  ),
  'field_image' => array(),
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
  'title' => 'What we do',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'und',
  'created' => 1490371039,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ac9aeff5-bd9a-47fb-bc56-04f518048687',
  'promoted_library' => 0,
  'promoted_to_country_page' => 0,
  'promoted_to_thematic_page' => 0,
  'base_promoted_library' => 0,
  'base_promoted_to_country_page' => 0,
  'base_promoted_to_thematic_page' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2>Access to information as a basis for improved and informed&nbsp;land governance</h2>

<p>The Land Portal Foundation believes that <strong>access to information</strong>&nbsp;is crucial to achieving good land governance and to securing land rights for landless and vulnerable people.&nbsp;</p>

<p>Finding solid evidence upon which to develop land-related laws, policies, and practices can be difficult and involve a lot of work. Land-related data and&nbsp;information available online is often fragmented and dispersed across various websites and databases.</p>

<p>The Land Portal Foundation\'s mission is to improve access to land-related data and&nbsp;information. The Land Portal website gathers information from a broad range of information providers and is&nbsp;organized and visualized&nbsp;in ways that are intuitive and usable&nbsp;for researchers, private sector actors and&nbsp;policy makers at global and local&nbsp;levels. The information provided can strengthen research, advocacy, and policy-making&nbsp;efforts by enabling a better understanding of land governance issues affecting various countries and regions.</p>

<h2>Serving as a \'data aggregator\'</h2>

<p>The Land Portal Foundation is an online resource that directs users&nbsp;to the great variety of sources that publish land related information online. The Land Portal Foundation collects and disseminates&nbsp;knowledge and data from various&nbsp;information providers around the world - from global organizations to local ones - on the Land Portal website.</p>

<p>The Land Portal website serves as&nbsp;an intuitive gateway -&nbsp;a Portal -&nbsp;to the different information providers on land related issues. The Land Portal website hosts metadata (information about information) that is linked directly to the websites of data provides. The Land Portal website does not currently produce original information itself.</p>

<h2>Providing Land Portal services</h2>

<p>The Land Portal provides a wide array of services, including gathering statistical and numerical information and providing thematic and a country-level overview of key contextual and actionable land governance information, revealing both trends and gaps in available information.&nbsp; It also serves as a free virtual repository of bibliographic and multimedia resources with highly curated metadata.&nbsp; Finally, it serves as a space to stimulate debate with others in the land community through sharing of news and events, blog posts and online discussions.&nbsp; The online discussion is a powerful tool to expose knowledge that has not been already captured in publications or datasets.</p>

<p>&nbsp;</p>

<h2>Adhering to Open Data Principles &amp; the Linked Information Ecosystem</h2>

<p>Every single piece of information available on the Land Portal&nbsp;is enriched according to Open Data standards and principles. This means that the metadata -&nbsp;the information describing what the information is about -&nbsp;is arranged through commonly agreed standards - making sure that all the information is categorized so that users can determine which dataset, publication, and other resources are relevant to their needs. By applying these Open Data principles and standards, the information becomes more searchable and discoverable&nbsp;for users.</p>

<p>Open Data principles and standards do not only make information more easy to find and accessible on the user-end, but are&nbsp;also&nbsp;critical for machines to be able to read and understand the information. Currently&nbsp;the amount&nbsp;of knowledge published online is increasing exponentially, so we need the assistance of machines to be able to digest, analyze, and organize&nbsp;this wealth of information in an effective manner.&nbsp;</p>

<p>When many online databases - on both global and local levels - are linked together, we establish an \'information ecosystem\'. It is the Land Portal\'s mission to stimulate and enable the move from siloed and stand-alone databases&nbsp;to such an online information ecosystem. This will improve the potential&nbsp;impact of each knowledge piece significantly because all the fragmented data sources are linked together.</p>

<h2>Acting as a support service for open data</h2>

<p>The Land Portal Foundation is willing to work with many&nbsp;information providers on land to publish and expose their information according to Open Data principles- ultimately allowing their information to&nbsp;become a part of the land information ecosystem.</p>

<p>The Land Portal Foundations supports land-focused organizations around the world in adopting and implementing Open Data standards and principles.&nbsp;These standards include&nbsp;<a href="http://landportal.info/voc/landvoc">LandVoc</a>, a standardized vocabulary on land that topically classifies resources based on subject matter using keywords. Using a controlled vocabulary such as LandVoc ensures that all information is topically classified in the same way (regardless of different languages, the use of synonyms or others) and makes sure that the keywords also can be read by machines. Therefore machines will also be able to understand what the resource is about. This makes sure that the land-related information in any database can be linked together to other databases, because machines can understand which resources address the same topics.</p>

<p>Information from local organizations, particularly organizations in the Global South, can be difficult to find and access. To address this issue, the Land Portal Foundation &nbsp;partners with and provides technical support to many organizations in the Global South.&nbsp; The Land Portal helps local organizations to publish, organize and (technically) expose their information according to Open Data principles - making it more easy to find on a global level and linkable to global databases.</p>
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
        'value' => '8c8c80d1-4e10-4c40-908d-d978b0c3186c',
        'revision_id' => '8c8c80d1-4e10-4c40-908d-d978b0c3186c',
        'uuid' => '8c8c80d1-4e10-4c40-908d-d978b0c3186c',
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
        'value' => 'What we do',
        'format' => NULL,
      ),
    ),
  ),
  'field_image' => array(),
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
  'date' => '2017-03-24 16:57:19 +0100',
  'user_uuid' => 'e1121b36-5660-46c3-8eb9-f42afa7221be',
);
  $nodes[] = array(
  'title' => 'Discussions',
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
        'value' => '<div class="row">
<div class="col-sm-6">
<p>Debates&nbsp;provide a platform to stimulate conversation on diverse issues of importance to the land governance community. All debates are open discussions facilitated by land governance experts, on a specific topic, for a specified period of time. While anyone can view these online discussions, you must be a registered user to contribute to a debate.</p>
</div>

<div class="col-sm-6">
<p>By participating in a discussion, users agree to be respectful of the diversity of opinions, and are reminded to stay on topic, cite your sources, and refer users to other resources for more information. For more information, see the terms and conditions of our site.&nbsp;</p>
</div>
</div>

<p>&nbsp;</p>

<p>If you or your organization is interested in hosting a debate, please contact us at hello@landportal.info</p>

<p><strong>Keep scrolling and let the learning begin!&nbsp;</strong></p>
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
        'value' => 'Discussions',
        'format' => NULL,
      ),
    ),
  ),
  'field_image' => array(),
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
  $nodes[] = array(
  'title' => 'Land Portal Community',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'en',
  'created' => 1442250934,
  'tnid' => 14168,
  'translate' => 0,
  'uuid' => 'f3045eb9-e928-473f-8abb-085f5ea31366',
  'promoted_library' => 0,
  'promoted_to_country_page' => 0,
  'promoted_to_thematic_page' => 0,
  'base_promoted_library' => 0,
  'base_promoted_to_country_page' => 0,
  'base_promoted_to_thematic_page' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The Land Portal community is composed of diverse users and organizations from around the globe who contribute to the Portal in various ways, whether by serving on the Board or Advisory Committee, sharing their datasets and libraries, leading and facilitating debates, or contributing research documents, issue papers, media content, news and events.&nbsp;</p>

<p><strong>Make your voice heard and join the community!&nbsp;</strong></p>
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
        'value' => 'd5d60aa5-5ce6-4584-a8ee-04c5014da869',
        'revision_id' => 'd5d60aa5-5ce6-4584-a8ee-04c5014da869',
        'uuid' => 'd5d60aa5-5ce6-4584-a8ee-04c5014da869',
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
        'value' => 'Land Portal Community',
        'format' => NULL,
      ),
    ),
  ),
  'field_image' => array(),
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
  'date' => '2015-09-14 19:15:34 +0200',
  'user_uuid' => '0552abe9-7b28-483f-a7ac-ea80f81db020',
);
  return $nodes;
}
