<?php
/**
 * @file
 * landlibrary_resource.features.rdf.inc
 */

function date_iso8601_llr($date) {
  watchdog('RDF EXT', "readed file! date_iso", array(), WATCHDOG_DEBUG);
  // The DATE_ISO8601 constant cannot be used here because it does not match
  // date('c') and produces invalid RDF markup.
  return date('Y-m-d', $date);
}
