<?php

$export = array();

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-blank_source_1-default_value';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'Blank source 1';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'IFPRI adheres to the basic tenets of the Budapest Open Access Initiative, articulated in 2002 (subject to any applicable third-party rights and or confidentiality obigations). All applicable data are subject to IFPRI’s Institutional Review Board (IRB) guidelines. Copyright © 2013 International Food Policy Research Institute (IFPRI). All rights reserved.
',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'IFPRI Copyright';

$export[$feeds_tamper->id] = $feeds_tamper;

/* $feeds_tamper = new stdClass(); */
/* $feeds_tamper->disabled = FALSE; /\* Edit this to true to make a default feeds_tamper disabled initially *\/ */
/* $feeds_tamper->api_version = 2; */
/* $feeds_tamper->id = 'ifpri_importer-blank_source_2-default_value'; */
/* $feeds_tamper->importer = 'ifpri_importer'; */
/* $feeds_tamper->source = 'Blank source 2'; */
/* $feeds_tamper->plugin_id = 'default_value'; */
/* $feeds_tamper->settings = array( */
/*   'default_value' => '/library/resources/', */
/*   'only_if_empty' => 0, */
/* ); */
/* $feeds_tamper->weight = 0; */
/* $feeds_tamper->description = 'Set value or default value'; */

/* $export[$feeds_tamper->id] = $feeds_tamper; */

/* $feeds_tamper = new stdClass(); */
/* $feeds_tamper->disabled = FALSE; /\* Edit this to true to make a default feeds_tamper disabled initially *\/ */
/* $feeds_tamper->api_version = 2; */
/* $feeds_tamper->id = 'ifpri_importer-blank_source_2-copy'; */
/* $feeds_tamper->importer = 'ifpri_importer'; */
/* $feeds_tamper->source = 'Blank source 2'; */
/* $feeds_tamper->plugin_id = 'copy'; */
/* $feeds_tamper->settings = array( */
/*   'to_from' => 'from', */
/*   'source' => 'xpathparser:0', */
/* ); */
/* $feeds_tamper->weight = 1; */
/* $feeds_tamper->description = 'Copy source value'; */

/* $export[$feeds_tamper->id] = $feeds_tamper; */

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-blank_source_3-default_value';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'Blank source 3';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'International Food Policy Research Institute (IFPRI)',
  'only_if_empty' => 0,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set value or default value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-blank_source_4-copy';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'Blank source 4';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'xpathparser:23',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy source relation';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-blank_source_4-default_value';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'Blank source 4';
$feeds_tamper->plugin_id = 'php';
$feeds_tamper->settings = array(
  'php' => '$keep = array();
for ($i=0; $i<count($field); $i++) {
  if (!count($field[$i]) || !strpos($field[$i], "http")) continue;
  // Massage that piece of shit string
  $ss = preg_replace("/([a-z]) http/", "$1::http", $field[$i]);
// Replace http://[...] (^http)
  $ee = array_map("trim", explode(" ", $ss));
  for ($j=0; $j < count($ee); $j++) {
    $ll = explode("::", $ee[$j]);
    //dpm($ll, $ll[1]);//$ee[$j]);
    if (strpos($ll[1], "http") !== FALSE) {
      $keep[] = $ll[0];
    }
  }
}
//dpm($keep);
return $keep;',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Execute php code';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-blank_source_5-copy';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'Blank source 5';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'xpathparser:23',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy source relation';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-blank_source_5-default_value';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'Blank source 5';
$feeds_tamper->plugin_id = 'php';
$feeds_tamper->settings = array(
  'php' => '$keep = array();
for ($i=0; $i<count($field); $i++) {
  if (!count($field[$i]) || !strpos($field[$i], "http")) continue;
  // Massage that piece of shit string
  $ss = preg_replace("/([a-z]) http/", "$1::http", $field[$i]);
// Replace http://[...] (^http)
  $ee = array_map("trim", explode(" ", $ss));
  for ($j=0; $j < count($ee); $j++) {
    $ll = explode("::", $ee[$j]);
    //dpm($ll, $ll[1]);//$ee[$j]);
    if (strpos($ll[1], "http") !== FALSE) {
      $keep[] = $ll[1];
    }
  }
}
//dpm($keep);
return $keep;',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Execute php code';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-blank_source_6-copy';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'Blank source 6';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'xpathparser:7',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-blank_source_7-copy';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'Blank source 7';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'xpathparser:22',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_0-explode';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:0';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Explode ;';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_0-required';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:0';
$feeds_tamper->plugin_id = 'required';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Required field';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_1-required';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:1';
$feeds_tamper->plugin_id = 'required';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Required field';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_1-trim';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:1';
$feeds_tamper->plugin_id = 'trim';
$feeds_tamper->settings = array(
  'mask' => '',
  'side' => 'trim',
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Trim';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_1-truncate_text';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:1';
$feeds_tamper->plugin_id = 'truncate_text';
$feeds_tamper->settings = array(
  'num_char' => '200',
  'ellipses' => 0,
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Truncate';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_12-explode';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:12';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Explode publisher with ;';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_12-trim';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:12';
$feeds_tamper->plugin_id = 'trim';
$feeds_tamper->settings = array(
  'mask' => '',
  'side' => 'trim',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Trim publisher';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_14-explode';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:14';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Explode ;';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_19-explode';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:19';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Explode ';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_2-find_replace';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:2';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => ';',
  'replace' => '',
  'case_sensitive' => 0,
  'word_boundaries' => 0,
  'whole' => 0,
  'regex' => FALSE,
  'func' => 'str_ireplace',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Find replace ; with space';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_20-explode';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:20';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Explode ;';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_20-strip_tags';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:20';
$feeds_tamper->plugin_id = 'strip_tags';
$feeds_tamper->settings = array(
  'allowed_tags' => '',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Strip tags';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_20-trim';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:20';
$feeds_tamper->plugin_id = 'trim';
$feeds_tamper->settings = array(
  'mask' => '',
  'side' => 'trim',
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Trim';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-blank_source_6-default_value';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'blank_source_6';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'en',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set default value en';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_22-explode';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:22';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Explode ;';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_24-copy';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:24';
$feeds_tamper->plugin_id = 'copy';
$feeds_tamper->settings = array(
  'to_from' => 'from',
  'source' => 'xpathparser:1',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Copy source value';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_24-required';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:24';
$feeds_tamper->plugin_id = 'required';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 1;
$feeds_tamper->description = 'Required field';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_3-find_replace';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:3';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => ';',
  'replace' => '',
  'case_sensitive' => 0,
  'word_boundaries' => 0,
  'whole' => 0,
  'regex' => FALSE,
  'func' => 'str_ireplace',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Find replace ; with space';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_4-explode';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:4';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Explode ; ';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_6-required';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:6';
$feeds_tamper->plugin_id = 'required';
$feeds_tamper->settings = array();
$feeds_tamper->weight = 3;
$feeds_tamper->description = 'Required field';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_6-strip_tags';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:6';
$feeds_tamper->plugin_id = 'strip_tags';
$feeds_tamper->settings = array(
  'allowed_tags' => '',
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Strip tags';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_6-trim';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:6';
$feeds_tamper->plugin_id = 'trim';
$feeds_tamper->settings = array(
  'mask' => '',
  'side' => 'trim',
);
$feeds_tamper->weight = 4;
$feeds_tamper->description = 'Trim';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_7-default_value';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:7';
$feeds_tamper->plugin_id = 'default_value';
$feeds_tamper->settings = array(
  'default_value' => 'en',
  'only_if_empty' => 1,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Set default value English';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer-xpathparser_7-find_replace_multiple';
$feeds_tamper->importer = 'ifpri_importer';
$feeds_tamper->source = 'xpathparser:7';
$feeds_tamper->plugin_id = 'find_replace_multiple';
$feeds_tamper->settings = array(
  'pairs' => array(
    0 => array(
      'source' => 'German',
      'target' => 'de',
    ),
    1 => array(
      'source' => 'French',
      'target' => 'fr',
    ),
    2 => array(
      'source' => 'English',
      'target' => 'en',
    ),
    3 => array(
      'source' => 'Spanish',
      'target' => 'es',
    ),
    3 => array(
      'source' => 'Portuguese',
      'target' => 'pt',
    ),
    3 => array(
      'source' => 'Italian',
      'target' => 'it',
    ),
  ),
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Find replace multiple';

$export[$feeds_tamper->id] = $feeds_tamper;
