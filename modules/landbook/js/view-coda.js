/* Land book visualizations (js-view-coda library) */
var $ = jQuery.noConflict();
$( document ).ready(function() {
  COUNTRY_ISO3 = Drupal.settings.landbook.countryCode;
  LBV = new lbvis({iso3: COUNTRY_ISO3});
  LBV.init();
});
