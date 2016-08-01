var $ = jQuery.noConflict();
$(document).ready(function($) {
    LBV = new lbvis({iso3: Drupal.settings.landbook.countryCode});
    LBV.init();
});
