(function($) {
    $(document).ready(function() {
        var LBML = new lbvisMap({
            target: '#map-local',
            map_data: map_data,
            zoom: 2,
            height: 200,
            iso3: Drupal.settings.landbook.countryCode
        });
        LBML.init();
    });
})(jQuery);
